
/* void ClassDB::register_class<EditorPlugin>(bool) [clone .part.0] */

void ClassDB::register_class<EditorPlugin>(bool param_1)

{
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  _global_unlock();
  return;
}



/* RefCounted::initialize_class() [clone .part.0] */

void RefCounted::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::initialize_class();
  local_58 = 0;
  local_48 = "Object";
  local_40 = 6;
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
  initialize_class()::initialized = 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unregister_editor_types() */

void unregister_editor_types(void)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 800);
  local_58 = "Unregister Types";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Editor";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  (*pcVar1)(plVar2,(StrRange *)&local_68,(StrRange *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  EditorNode::cleanup();
  EditorInterface::free();
  if (EditorPaths::singleton != 0) {
    EditorPaths::free();
  }
  memdelete<EditorStringNames>(EditorStringNames::singleton);
  EditorStringNames::singleton = (EditorStringNames *)0x0;
  plVar2 = (long *)OS::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x328);
  local_58 = "Unregister Types";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Editor";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  (*pcVar1)(plVar2,(StrRange *)&local_68,(StrRange *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Container::initialize_class() [clone .part.0] */

void Container::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_0011d008 != Object::_bind_compatibility_methods) {
        CanvasItem::_bind_compatibility_methods();
      }
      CanvasItem::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"CanvasItem");
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
  local_58 = "Control";
  local_68 = 0;
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
  if ((code *)PTR__bind_methods_0011d010 != Control::_bind_methods) {
    Container::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfirmationDialog::initialize_class() [clone .part.0] */

void ConfirmationDialog::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (AcceptDialog::initialize_class()::initialized == '\0') {
    if (Window::initialize_class()::initialized == '\0') {
      if (Viewport::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Node");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Viewport");
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
        Viewport::_bind_methods();
        Viewport::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Viewport");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Window");
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
      Window::_bind_methods();
      Window::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Window");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"AcceptDialog");
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
    AcceptDialog::_bind_methods();
    if ((code *)PTR__bind_compatibility_methods_0011d020 != Object::_bind_compatibility_methods) {
      AcceptDialog::_bind_compatibility_methods();
    }
    AcceptDialog::initialize_class()::initialized = '\x01';
  }
  local_58 = "AcceptDialog";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ConfirmationDialog";
  local_70 = 0;
  local_50 = 0x12;
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
  if ((code *)PTR__bind_methods_0011d028 != AcceptDialog::_bind_methods) {
    ConfirmationDialog::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporter::initialize_class() [clone .part.0] */

void ResourceImporter::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
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
  if ((code *)PTR__bind_methods_0011d030 != RefCounted::_bind_methods) {
    ResourceImporter::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_editor_types() */

void register_editor_types(void)

{
  code *pcVar1;
  Object *pOVar2;
  long *plVar3;
  StringName *this;
  long lVar4;
  Singleton *pSVar5;
  bool bVar6;
  long in_FS_OFFSET;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8 [2];
  long local_98;
  undefined1 local_8f;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)OS::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 800);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Register Types");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"Editor");
  (*pcVar1)(plVar3,(String *)&local_b0,(String *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  ResourceLoader::timestamp_on_load._0_1_ = 1;
  ResourceSaver::timestamp_on_save._0_1_ = 1;
  this = (StringName *)operator_new(0x20,"");
  local_b0 = StaticCString::create("Editor");
  StringName::StringName(this,(StaticCString *)&local_b0,false);
  local_b8 = StaticCString::create("EditorFonts");
  StringName::StringName(this + 8,(StaticCString *)&local_b8,false);
  local_c0 = StaticCString::create("EditorIcons");
  StringName::StringName(this + 0x10,(StaticCString *)&local_c0,false);
  local_c8 = StaticCString::create("EditorStyles");
  StringName::StringName(this + 0x18,(StaticCString *)&local_c8,false);
  EditorStringNames::singleton = this;
  ClassDB::register_class<EditorPaths>(false);
  ClassDB::register_class<EditorPlugin>(false);
  ClassDB::register_class<EditorTranslationParserPlugin>(false);
  ClassDB::register_class<EditorImportPlugin>(false);
  ClassDB::register_class<EditorScript>(false);
  ClassDB::register_class<EditorSelection>(false);
  ClassDB::register_class<EditorFileDialog>(false);
  ClassDB::register_class<EditorSettings>(false);
  ClassDB::register_abstract_class<EditorToaster>();
  ClassDB::register_class<EditorNode3DGizmo>(false);
  ClassDB::register_class<EditorNode3DGizmoPlugin>(false);
  ClassDB::register_abstract_class<EditorResourcePreview>();
  ClassDB::register_class<EditorResourcePreviewGenerator>(false);
  ClassDB::register_class<EditorResourceTooltipPlugin>(false);
  ClassDB::register_abstract_class<EditorFileSystem>();
  ClassDB::register_class<EditorFileSystemDirectory>(false);
  ClassDB::register_class<EditorVCSInterface>(false);
  ClassDB::register_abstract_class<ScriptEditor>();
  ClassDB::register_abstract_class<ScriptEditorBase>();
  ClassDB::register_class<EditorSyntaxHighlighter>(false);
  ClassDB::register_abstract_class<EditorInterface>();
  ClassDB::register_class<EditorExportPlugin>(false);
  ClassDB::register_abstract_class<EditorExportPlatform>();
  ClassDB::register_abstract_class<EditorExportPlatformPC>();
  ClassDB::register_class<EditorExportPlatformExtension>(false);
  ClassDB::register_abstract_class<EditorExportPreset>();
  register_exporter_types();
  ClassDB::register_class<EditorResourceConversionPlugin>(false);
  ClassDB::register_class<EditorSceneFormatImporter>(false);
  ClassDB::register_class<EditorScenePostImportPlugin>(false);
  ClassDB::register_class<EditorInspector>(false);
  ClassDB::register_class<EditorInspectorPlugin>(false);
  ClassDB::register_class<EditorProperty>(false);
  ClassDB::register_class<ScriptCreateDialog>(false);
  ClassDB::register_class<EditorFeatureProfile>(false);
  ClassDB::register_class<EditorSpinSlider>(false);
  ClassDB::register_class<EditorResourcePicker>(false);
  ClassDB::register_class<EditorScriptPicker>(false);
  ClassDB::register_abstract_class<EditorUndoRedoManager>();
  ClassDB::register_class<EditorContextMenuPlugin>(false);
  ClassDB::register_abstract_class<FileSystemDock>();
  ClassDB::register_class<EditorFileSystemImportFormatSupportQuery>(true);
  ClassDB::register_class<EditorScenePostImport>(false);
  ClassDB::register_class<EditorCommandPalette>(false);
  ClassDB::register_class<EditorDebuggerPlugin>(false);
  ClassDB::register_abstract_class<EditorDebuggerSession>();
  ClassDB::register_class<ResourceImporterBitMap>(false);
  ClassDB::register_class<ResourceImporterBMFont>(false);
  ClassDB::register_class<ResourceImporterCSVTranslation>(false);
  ClassDB::register_class<ResourceImporterDynamicFont>(false);
  ClassDB::register_class<ResourceImporterImage>(false);
  ClassDB::register_class<ResourceImporterImageFont>(false);
  ClassDB::register_class<ResourceImporterLayeredTexture>(false);
  ClassDB::register_class<ResourceImporterOBJ>(false);
  ClassDB::register_class<ResourceImporterScene>(false);
  ClassDB::register_class<ResourceImporterShaderFile>(false);
  ClassDB::register_class<ResourceImporterTexture>(false);
  ClassDB::register_class<ResourceImporterTextureAtlas>(false);
  ClassDB::register_class<ResourceImporterWAV>(false);
  EditorPlugins::add_create_func(EditorPlugins::creator<AnimationTreeEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<AudioStreamEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<AudioStreamRandomizerEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<BitMapEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<BoneMapEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Camera3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ControlEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<CPUParticles3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<CurveEditorPlugin>);
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc4) == '\0') {
    EditorPlugins::add_create_func(EditorPlugins::creator<DebugAdapterServer>);
  }
  EditorPlugins::add_create_func(EditorPlugins::creator<FontEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<GPUParticles3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<GPUParticlesCollisionSDF3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<GradientEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<GradientTexture2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<InputEventEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<LightmapGIEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<MaterialEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<MeshEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<MeshInstance3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<MeshLibraryEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<MultiMeshEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<NavigationObstacle3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<OccluderInstance3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<PackedSceneEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Path3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<PhysicalBone3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Polygon3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ResourcePreloaderEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ShaderEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ShaderFileEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Skeleton3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<SkeletonIK3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<SpriteFramesEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<StyleBoxEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<SubViewportPreviewEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Texture3DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<TextureEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<TextureLayeredEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<TextureRegionEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ThemeEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ToolButtonEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<VoxelGIEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<CollisionPolygon2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<CollisionShape2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<CPUParticles2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<GPUParticles2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<LightOccluder2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Line2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<NavigationLink2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<NavigationObstacle2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<NavigationPolygonEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<ParallaxBackgroundEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Path2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Polygon2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Cast2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Skeleton2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<Sprite2DEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<TileSetEditorPlugin>);
  EditorPlugins::add_create_func(EditorPlugins::creator<TileMapEditorPlugin>);
  Variant::Variant((Variant *)local_78,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/run/main_run_args");
  bVar6 = SUB81((Variant *)local_78,0);
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"res://script_templates");
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"editor/script/templates_search_path");
  PropertyInfo::PropertyInfo((PropertyInfo *)local_a8,4,(String *)&local_e0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"_on_{node_name}_{signal_name}");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/naming/default_signal_callback_name");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"_on_{signal_name}");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/naming/default_signal_callback_to_self_name");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,2);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Auto,PascalCase,snake_case,kebab-case");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"editor/naming/scene_name_casing");
  PropertyInfo::PropertyInfo((PropertyInfo *)local_a8,2,(String *)&local_e0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Auto,PascalCase,snake_case,kebab-case");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"editor/naming/script_name_casing");
  PropertyInfo::PropertyInfo((PropertyInfo *)local_a8,2,(String *)&local_e0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/import/reimport_missing_imported_files");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/import/use_multiple_threads");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x800);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"128,8192,1,or_greater");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"editor/import/atlas_max_width");
  PropertyInfo::PropertyInfo((PropertyInfo *)local_a8,2,(String *)&local_e0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/export/convert_text_resources_to_binary");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/version_control/plugin_name");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"editor/version_control/autoload_on_startup");
  _GLOBAL_DEF((String *)local_58,(Variant *)local_a8,bVar6,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorInterface::create();
  pOVar2 = EditorInterface::singleton;
  local_d0 = 0;
  StringName::StringName((StringName *)&local_d8,"EditorInterface",false);
  Engine::Singleton::Singleton
            ((Singleton *)local_a8,(StringName *)&local_d8,pOVar2,(StringName *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_d8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101d88;
    }
    if (local_d0 != 0) {
      StringName::unref();
    }
  }
LAB_00101d88:
  local_8f = 1;
  pSVar5 = (Singleton *)Engine::get_singleton();
  Engine::add_singleton(pSVar5);
  EditorHelp::init_gdext_pointers();
  plVar3 = (long *)OS::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x328);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Register Types");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"Editor");
  (*pcVar1)(plVar3,(String *)&local_d8,(String *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_98 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101e34;
    }
    if (local_a8[0] != 0) {
      StringName::unref();
    }
  }
LAB_00101e34:
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

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
  return (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  return (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1174,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* EditorFileSystemImportFormatSupportQuery::is_class_ptr(void*) const */

uint __thiscall
EditorFileSystemImportFormatSupportQuery::is_class_ptr
          (EditorFileSystemImportFormatSupportQuery *this,void *param_1)

{
  return (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1171,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* EditorVCSInterface::is_class_ptr(void*) const */

uint __thiscall EditorVCSInterface::is_class_ptr(EditorVCSInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x1175,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1171,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorVCSInterface::_getv(StringName const&, Variant&) const */

undefined8 EditorVCSInterface::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorVCSInterface::_setv(StringName const&, Variant const&) */

undefined8 EditorVCSInterface::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorVCSInterface::_validate_propertyv(PropertyInfo&) const */

void EditorVCSInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorVCSInterface::_property_can_revertv(StringName const&) const */

undefined8 EditorVCSInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorVCSInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorVCSInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorVCSInterface::_notificationv(int, bool) */

void EditorVCSInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object* ClassDB::creator<EditorPaths>(bool) */

Object * ClassDB::creator<EditorPaths>(bool param_1)

{
  EditorPaths *this;
  
  this = (EditorPaths *)operator_new(0x1d0,"");
  EditorPaths::EditorPaths(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorPlugin>(bool) */

Object * ClassDB::creator<EditorPlugin>(bool param_1)

{
  Node *this;
  
  this = (Node *)operator_new(0x660,"");
  Node::Node(this);
  *(code **)this = RefCounted::RefCounted;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (Node)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (Node)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (Node)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (Node)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (Node)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (Node)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (Node)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (Node)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (Node)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (Node)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (Node)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (Node)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (Node)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (Node)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (Node)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (Node)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (Node)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (Node)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (Node)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (Node)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (Node)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (Node)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (Node)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (Node)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorScript>(bool) */

Object * ClassDB::creator<EditorScript>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x198,"");
  RefCounted::RefCounted(this);
  *(undefined **)this = &EditorScenePostImportPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x180),"_run",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorSceneFormatImporter>(bool) */

Object * ClassDB::creator<EditorSceneFormatImporter>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined **)this = &EditorTranslationParserPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x188),"_get_extensions",false);
  this[400] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_import_scene",false);
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_import_options",false);
  this[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_get_option_visibility",false);
  this[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorScenePostImportPlugin>(bool) */

Object * ClassDB::creator<EditorScenePostImportPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x260,"");
  RefCounted::RefCounted(this);
  *(undefined **)this = &EditorResourceTooltipPlugin::vtable;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 7;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1a0),"_get_internal_import_options",false);
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_internal_option_visibility",false);
  this[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName
            ((StringName *)(this + 0x1d0),"_get_internal_option_update_view_required",false);
  this[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_internal_process",false);
  this[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_get_import_options",false);
  this[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  StringName::StringName((StringName *)(this + 0x218),"_get_option_visibility",false);
  this[0x220] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  StringName::StringName((StringName *)(this + 0x230),"_pre_process",false);
  this[0x238] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  StringName::StringName((StringName *)(this + 0x248),"_post_process",false);
  this[0x250] = (RefCounted)0x0;
  *(undefined8 *)(this + 600) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorTranslationParserPlugin>(bool) */

Object * ClassDB::creator<EditorTranslationParserPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1c8,"");
  RefCounted::RefCounted(this);
  *(undefined **)this = &EditorResourceConversionPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x180),"_parse_file",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_recognized_extensions",false);
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_parse_file",false);
  this[0x1b8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorResourceTooltipPlugin>(bool) */

Object * ClassDB::creator<EditorResourceTooltipPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1b0,"");
  RefCounted::RefCounted(this);
  *(undefined **)this = &EditorInspectorPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x180),"_handles",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_make_tooltip_for_path",false);
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorResourceConversionPlugin>(bool) */

Object * ClassDB::creator<EditorResourceConversionPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1c8,"");
  RefCounted::RefCounted(this);
  *(undefined **)this = &EditorContextMenuPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x180),"_converts_to",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_handles",false);
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_convert",false);
  this[0x1b8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorFileSystemImportFormatSupportQuery>(bool) */

Object * ClassDB::creator<EditorFileSystemImportFormatSupportQuery>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1c8,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_00116b40;
  StringName::StringName((StringName *)(this + 0x180),"_is_active",false);
  this[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_file_extensions",false);
  this[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_query",false);
  this[0x1b8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorInspectorPlugin>(bool) */

Object * ClassDB::creator<EditorInspectorPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x218,"");
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined **)this = &EditorExportPlugin::vtable;
  StringName::StringName((StringName *)(this + 0x188),"_can_handle",false);
  this[400] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_parse_begin",false);
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_parse_category",false);
  this[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_parse_group",false);
  this[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_parse_property",false);
  this[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_parse_end",false);
  this[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorContextMenuPlugin>(bool) */

Object * ClassDB::creator<EditorContextMenuPlugin>(bool param_1)

{
  undefined8 uVar1;
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1f8,"");
  RefCounted::RefCounted(this);
  *(code **)this = EditorImportPlugin::EditorImportPlugin;
  uVar1 = _LC50;
  *(undefined4 *)(this + 0x17c) = 0xffffffff;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined8 *)(this + 0x1d8) = uVar1;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1e0),"_popup_menu",false);
  this[0x1e8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorExportPlugin>(bool) */

Object * ClassDB::creator<EditorExportPlugin>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x458,"");
  RefCounted::RefCounted(this);
  this[0x1a8] = (RefCounted)0x0;
  *(code **)this = EditorSelection::EditorSelection;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x218),"_export_file",false);
  this[0x220] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  StringName::StringName((StringName *)(this + 0x230),"_export_begin",false);
  this[0x238] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  StringName::StringName((StringName *)(this + 0x248),"_export_end",false);
  this[0x250] = (RefCounted)0x0;
  *(undefined8 *)(this + 600) = 0;
  StringName::StringName((StringName *)(this + 0x260),"_begin_customize_resources",false);
  this[0x268] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x270) = 0;
  StringName::StringName((StringName *)(this + 0x278),"_customize_resource",false);
  this[0x280] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x288) = 0;
  StringName::StringName((StringName *)(this + 0x290),"_begin_customize_scenes",false);
  this[0x298] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x2a0) = 0;
  StringName::StringName((StringName *)(this + 0x2a8),"_customize_scene",false);
  this[0x2b0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x2b8) = 0;
  StringName::StringName((StringName *)(this + 0x2c0),"_get_customization_configuration_hash",false)
  ;
  this[0x2c8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x2d0) = 0;
  StringName::StringName((StringName *)(this + 0x2d8),"_end_customize_scenes",false);
  this[0x2e0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x2e8) = 0;
  StringName::StringName((StringName *)(this + 0x2f0),"_end_customize_resources",false);
  this[0x2f8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  StringName::StringName((StringName *)(this + 0x308),"_get_export_features",false);
  this[0x310] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  StringName::StringName((StringName *)(this + 800),"_get_export_options",false);
  this[0x328] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x330) = 0;
  StringName::StringName((StringName *)(this + 0x338),"_get_export_options_overrides",false);
  this[0x340] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x348) = 0;
  StringName::StringName((StringName *)(this + 0x350),"_should_update_export_options",false);
  this[0x358] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x360) = 0;
  StringName::StringName((StringName *)(this + 0x368),"_get_export_option_visibility",false);
  this[0x370] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x378) = 0;
  StringName::StringName((StringName *)(this + 0x380),"_get_export_option_warning",false);
  this[0x388] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x390) = 0;
  StringName::StringName((StringName *)(this + 0x398),"_get_name",false);
  this[0x3a0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x3a8) = 0;
  StringName::StringName((StringName *)(this + 0x3b0),"_supports_platform",false);
  this[0x3b8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x3c0) = 0;
  StringName::StringName((StringName *)(this + 0x3c8),"_get_android_dependencies",false);
  this[0x3d0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x3d8) = 0;
  StringName::StringName((StringName *)(this + 0x3e0),"_get_android_dependencies_maven_repos",false)
  ;
  this[1000] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x3f0) = 0;
  StringName::StringName((StringName *)(this + 0x3f8),"_get_android_libraries",false);
  this[0x400] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x408) = 0;
  StringName::StringName
            ((StringName *)(this + 0x410),"_get_android_manifest_activity_element_contents",false);
  this[0x418] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x420) = 0;
  StringName::StringName
            ((StringName *)(this + 0x428),"_get_android_manifest_application_element_contents",false
            );
  this[0x430] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x438) = 0;
  StringName::StringName
            ((StringName *)(this + 0x440),"_get_android_manifest_element_contents",false);
  this[0x448] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x450) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorImportPlugin>(bool) */

Object * ClassDB::creator<EditorImportPlugin>(bool param_1)

{
  EditorImportPlugin *this;
  
  this = (EditorImportPlugin *)operator_new(0x2d0,"");
  EditorImportPlugin::EditorImportPlugin(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorSelection>(bool) */

Object * ClassDB::creator<EditorSelection>(bool param_1)

{
  EditorSelection *this;
  
  this = (EditorSelection *)operator_new(0x1c0,"");
  EditorSelection::EditorSelection(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorFileDialog>(bool) */

Object * ClassDB::creator<EditorFileDialog>(bool param_1)

{
  EditorFileDialog *this;
  
  this = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorSettings>(bool) */

Object * ClassDB::creator<EditorSettings>(bool param_1)

{
  EditorSettings *this;
  
  this = (EditorSettings *)operator_new(0x3c0,"");
  EditorSettings::EditorSettings(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorNode3DGizmo>(bool) */

Object * ClassDB::creator<EditorNode3DGizmo>(bool param_1)

{
  EditorNode3DGizmo *this;
  
  this = (EditorNode3DGizmo *)operator_new(0x328,"");
  EditorNode3DGizmo::EditorNode3DGizmo(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorNode3DGizmoPlugin>(bool) */

Object * ClassDB::creator<EditorNode3DGizmoPlugin>(bool param_1)

{
  EditorNode3DGizmoPlugin *this;
  
  this = (EditorNode3DGizmoPlugin *)operator_new(0x450,"");
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorResourcePreviewGenerator>(bool) */

Object * ClassDB::creator<EditorResourcePreviewGenerator>(bool param_1)

{
  EditorResourcePreviewGenerator *this;
  
  this = (EditorResourcePreviewGenerator *)operator_new(0x1f8,"");
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorFileSystemDirectory>(bool) */

Object * ClassDB::creator<EditorFileSystemDirectory>(bool param_1)

{
  EditorFileSystemDirectory *this;
  
  this = (EditorFileSystemDirectory *)operator_new(0x1b8,"");
  EditorFileSystemDirectory::EditorFileSystemDirectory(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001167f0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001167f0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Object* ClassDB::creator<EditorSyntaxHighlighter>(bool) */

Object * ClassDB::creator<EditorSyntaxHighlighter>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x2e8,"");
  Resource::Resource(this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00116950;
  *(undefined8 **)(this + 0x248) = &_GlobalNilClass::_nil;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  StringName::StringName((StringName *)(this + 0x268),"_get_line_syntax_highlighting",false);
  this[0x270] = (Resource)0x0;
  *(undefined8 *)(this + 0x278) = 0;
  StringName::StringName((StringName *)(this + 0x280),"_clear_highlighting_cache",false);
  this[0x288] = (Resource)0x0;
  *(undefined8 *)(this + 0x290) = 0;
  StringName::StringName((StringName *)(this + 0x298),"_update_cache",false);
  this[0x2a0] = (Resource)0x0;
  *(code **)this = EditorExportPlatformExtension::EditorExportPlatformExtension;
  *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x2b8),"_get_name",false);
  this[0x2c0] = (Resource)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_supported_languages",false);
  this[0x2d8] = (Resource)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* SyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

undefined8 SyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  undefined4 in_register_0000003c;
  
  Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1));
  return CONCAT44(in_register_0000003c,param_1);
}



/* Object* ClassDB::creator<EditorExportPlatformExtension>(bool) */

Object * ClassDB::creator<EditorExportPlatformExtension>(bool param_1)

{
  EditorExportPlatformExtension *this;
  
  this = (EditorExportPlatformExtension *)operator_new(0x470,"");
  EditorExportPlatformExtension::EditorExportPlatformExtension(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorInspector>(bool) */

Object * ClassDB::creator<EditorInspector>(bool param_1)

{
  EditorInspector *this;
  
  this = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorProperty>(bool) */

Object * ClassDB::creator<EditorProperty>(bool param_1)

{
  EditorProperty *this;
  
  this = (EditorProperty *)operator_new(0xb58,"");
  EditorProperty::EditorProperty(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ScriptCreateDialog>(bool) */

Object * ClassDB::creator<ScriptCreateDialog>(bool param_1)

{
  ScriptCreateDialog *this;
  
  this = (ScriptCreateDialog *)operator_new(0xea0,"");
  ScriptCreateDialog::ScriptCreateDialog(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorFeatureProfile>(bool) */

Object * ClassDB::creator<EditorFeatureProfile>(bool param_1)

{
  EditorFeatureProfile *this;
  
  this = (EditorFeatureProfile *)operator_new(0x238,"");
  EditorFeatureProfile::EditorFeatureProfile(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorSpinSlider>(bool) */

Object * ClassDB::creator<EditorSpinSlider>(bool param_1)

{
  EditorSpinSlider *this;
  
  this = (EditorSpinSlider *)operator_new(0xa70,"");
  EditorSpinSlider::EditorSpinSlider(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorResourcePicker>(bool) */

Object * ClassDB::creator<EditorResourcePicker>(bool param_1)

{
  EditorResourcePicker *this;
  
  this = (EditorResourcePicker *)operator_new(0xb00,"");
  EditorResourcePicker::EditorResourcePicker(this,false);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorScriptPicker>(bool) */

Object * ClassDB::creator<EditorScriptPicker>(bool param_1)

{
  EditorScriptPicker *this;
  
  this = (EditorScriptPicker *)operator_new(0xb08,"");
  EditorScriptPicker::EditorScriptPicker(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* EditorVCSInterface::~EditorVCSInterface() */

void __thiscall EditorVCSInterface::~EditorVCSInterface(EditorVCSInterface *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00116cb8;
  if (bVar1) {
    if (*(long *)(this + 0x388) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x370) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x358) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x340) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x328) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x310) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x2f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x2e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x2c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x2b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x238) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x220) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x208) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x1d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x1c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x1a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 400) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104657;
    }
    if (*(long *)(this + 0x178) != 0) {
      StringName::unref();
    }
  }
LAB_00104657:
  Object::~Object((Object *)this);
  return;
}



/* EditorVCSInterface::~EditorVCSInterface() */

void __thiscall EditorVCSInterface::~EditorVCSInterface(EditorVCSInterface *this)

{
  ~EditorVCSInterface(this);
  operator_delete(this,0x3a0);
  return;
}



/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00116b40;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001046ef;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001046ef;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001046ef:
  *(undefined ***)this = &PTR__initialize_classv_001167f0;
  Object::~Object((Object *)this);
  return;
}



/* Object* ClassDB::creator<EditorScenePostImport>(bool) */

Object * ClassDB::creator<EditorScenePostImport>(bool param_1)

{
  EditorScenePostImport *this;
  
  this = (EditorScenePostImport *)operator_new(0x1a0,"");
  EditorScenePostImport::EditorScenePostImport(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorCommandPalette>(bool) */

Object * ClassDB::creator<EditorCommandPalette>(bool param_1)

{
  EditorCommandPalette *this;
  
  this = (EditorCommandPalette *)operator_new(0xe28,"");
  EditorCommandPalette::EditorCommandPalette(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorDebuggerPlugin>(bool) */

Object * ClassDB::creator<EditorDebuggerPlugin>(bool param_1)

{
  EditorDebuggerPlugin *this;
  
  this = (EditorDebuggerPlugin *)operator_new(0x218,"");
  EditorDebuggerPlugin::EditorDebuggerPlugin(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterBitMap>(bool) */

Object * ClassDB::creator<ResourceImporterBitMap>(bool param_1)

{
  ResourceImporterBitMap *this;
  
  this = (ResourceImporterBitMap *)operator_new(0x180,"");
  ResourceImporterBitMap::ResourceImporterBitMap(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterBMFont>(bool) */

Object * ClassDB::creator<ResourceImporterBMFont>(bool param_1)

{
  ResourceImporterBMFont *this;
  
  this = (ResourceImporterBMFont *)operator_new(0x180,"");
  ResourceImporterBMFont::ResourceImporterBMFont(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterCSVTranslation>(bool) */

Object * ClassDB::creator<ResourceImporterCSVTranslation>(bool param_1)

{
  ResourceImporterCSVTranslation *this;
  
  this = (ResourceImporterCSVTranslation *)operator_new(0x180,"");
  ResourceImporterCSVTranslation::ResourceImporterCSVTranslation(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterDynamicFont>(bool) */

Object * ClassDB::creator<ResourceImporterDynamicFont>(bool param_1)

{
  ResourceImporterDynamicFont *this;
  
  this = (ResourceImporterDynamicFont *)operator_new(0x180,"");
  ResourceImporterDynamicFont::ResourceImporterDynamicFont(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterImage>(bool) */

Object * ClassDB::creator<ResourceImporterImage>(bool param_1)

{
  ResourceImporterImage *this;
  
  this = (ResourceImporterImage *)operator_new(0x180,"");
  ResourceImporterImage::ResourceImporterImage(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterImageFont>(bool) */

Object * ClassDB::creator<ResourceImporterImageFont>(bool param_1)

{
  ResourceImporterImageFont *this;
  
  this = (ResourceImporterImageFont *)operator_new(0x180,"");
  ResourceImporterImageFont::ResourceImporterImageFont(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterLayeredTexture>(bool) */

Object * ClassDB::creator<ResourceImporterLayeredTexture>(bool param_1)

{
  ResourceImporterLayeredTexture *this;
  
  this = (ResourceImporterLayeredTexture *)operator_new(0x180,"");
  ResourceImporterLayeredTexture::ResourceImporterLayeredTexture(this,false);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterOBJ>(bool) */

Object * ClassDB::creator<ResourceImporterOBJ>(bool param_1)

{
  ResourceImporterOBJ *this;
  
  this = (ResourceImporterOBJ *)operator_new(0x180,"");
  ResourceImporterOBJ::ResourceImporterOBJ(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterShaderFile>(bool) */

Object * ClassDB::creator<ResourceImporterShaderFile>(bool param_1)

{
  ResourceImporterShaderFile *this;
  
  this = (ResourceImporterShaderFile *)operator_new(0x180,"");
  ResourceImporterShaderFile::ResourceImporterShaderFile(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterTexture>(bool) */

Object * ClassDB::creator<ResourceImporterTexture>(bool param_1)

{
  ResourceImporterTexture *this;
  
  this = (ResourceImporterTexture *)operator_new(0x1d8,"");
  ResourceImporterTexture::ResourceImporterTexture(this,false);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterTextureAtlas>(bool) */

Object * ClassDB::creator<ResourceImporterTextureAtlas>(bool param_1)

{
  ResourceImporterTextureAtlas *this;
  
  this = (ResourceImporterTextureAtlas *)operator_new(0x180,"");
  ResourceImporterTextureAtlas::ResourceImporterTextureAtlas(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<ResourceImporterWAV>(bool) */

Object * ClassDB::creator<ResourceImporterWAV>(bool param_1)

{
  ResourceImporterWAV *this;
  
  this = (ResourceImporterWAV *)operator_new(0x180,"");
  ResourceImporterWAV::ResourceImporterWAV(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* EditorPlugin* EditorPlugins::creator<AnimationTreeEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<AnimationTreeEditorPlugin>(void)

{
  AnimationTreeEditorPlugin *this;
  
  this = (AnimationTreeEditorPlugin *)operator_new(0x670,"");
  AnimationTreeEditorPlugin::AnimationTreeEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<AudioStreamEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<AudioStreamEditorPlugin>(void)

{
  AudioStreamEditorPlugin *this;
  
  this = (AudioStreamEditorPlugin *)operator_new(0x660,"");
  AudioStreamEditorPlugin::AudioStreamEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<AudioStreamRandomizerEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<AudioStreamRandomizerEditorPlugin>(void)

{
  AudioStreamRandomizerEditorPlugin *this;
  
  this = (AudioStreamRandomizerEditorPlugin *)operator_new(0x660,"");
  AudioStreamRandomizerEditorPlugin::AudioStreamRandomizerEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<BitMapEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<BitMapEditorPlugin>(void)

{
  BitMapEditorPlugin *this;
  
  this = (BitMapEditorPlugin *)operator_new(0x660,"");
  BitMapEditorPlugin::BitMapEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<BoneMapEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<BoneMapEditorPlugin>(void)

{
  BoneMapEditorPlugin *this;
  
  this = (BoneMapEditorPlugin *)operator_new(0x660,"");
  BoneMapEditorPlugin::BoneMapEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Camera3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Camera3DEditorPlugin>(void)

{
  Camera3DEditorPlugin *this;
  
  this = (Camera3DEditorPlugin *)operator_new(0x660,"");
  Camera3DEditorPlugin::Camera3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ControlEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ControlEditorPlugin>(void)

{
  ControlEditorPlugin *this;
  
  this = (ControlEditorPlugin *)operator_new(0x668,"");
  ControlEditorPlugin::ControlEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<CPUParticles3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<CPUParticles3DEditorPlugin>(void)

{
  CPUParticles3DEditorPlugin *this;
  
  this = (CPUParticles3DEditorPlugin *)operator_new(0x6c8,"");
  CPUParticles3DEditorPlugin::CPUParticles3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<CurveEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<CurveEditorPlugin>(void)

{
  CurveEditorPlugin *this;
  
  this = (CurveEditorPlugin *)operator_new(0x660,"");
  CurveEditorPlugin::CurveEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<DebugAdapterServer>() */

EditorPlugin * EditorPlugins::creator<DebugAdapterServer>(void)

{
  DebugAdapterServer *this;
  
  this = (DebugAdapterServer *)operator_new(0x950,"");
  DebugAdapterServer::DebugAdapterServer(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<FontEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<FontEditorPlugin>(void)

{
  FontEditorPlugin *this;
  
  this = (FontEditorPlugin *)operator_new(0x660,"");
  FontEditorPlugin::FontEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<GPUParticles3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<GPUParticles3DEditorPlugin>(void)

{
  GPUParticles3DEditorPlugin *this;
  
  this = (GPUParticles3DEditorPlugin *)operator_new(0x6c8,"");
  GPUParticles3DEditorPlugin::GPUParticles3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<GPUParticlesCollisionSDF3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<GPUParticlesCollisionSDF3DEditorPlugin>(void)

{
  GPUParticlesCollisionSDF3DEditorPlugin *this;
  
  this = (GPUParticlesCollisionSDF3DEditorPlugin *)operator_new(0x680,"");
  GPUParticlesCollisionSDF3DEditorPlugin::GPUParticlesCollisionSDF3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<GradientEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<GradientEditorPlugin>(void)

{
  GradientEditorPlugin *this;
  
  this = (GradientEditorPlugin *)operator_new(0x660,"");
  GradientEditorPlugin::GradientEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<GradientTexture2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<GradientTexture2DEditorPlugin>(void)

{
  GradientTexture2DEditorPlugin *this;
  
  this = (GradientTexture2DEditorPlugin *)operator_new(0x660,"");
  GradientTexture2DEditorPlugin::GradientTexture2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<InputEventEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<InputEventEditorPlugin>(void)

{
  InputEventEditorPlugin *this;
  
  this = (InputEventEditorPlugin *)operator_new(0x660,"");
  InputEventEditorPlugin::InputEventEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<LightmapGIEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<LightmapGIEditorPlugin>(void)

{
  LightmapGIEditorPlugin *this;
  
  this = (LightmapGIEditorPlugin *)operator_new(0x678,"");
  LightmapGIEditorPlugin::LightmapGIEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<MaterialEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<MaterialEditorPlugin>(void)

{
  MaterialEditorPlugin *this;
  
  this = (MaterialEditorPlugin *)operator_new(0x660,"");
  MaterialEditorPlugin::MaterialEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<MeshEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<MeshEditorPlugin>(void)

{
  MeshEditorPlugin *this;
  
  this = (MeshEditorPlugin *)operator_new(0x660,"");
  MeshEditorPlugin::MeshEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<MeshInstance3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<MeshInstance3DEditorPlugin>(void)

{
  MeshInstance3DEditorPlugin *this;
  
  this = (MeshInstance3DEditorPlugin *)operator_new(0x668,"");
  MeshInstance3DEditorPlugin::MeshInstance3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<MeshLibraryEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<MeshLibraryEditorPlugin>(void)

{
  MeshLibraryEditorPlugin *this;
  
  this = (MeshLibraryEditorPlugin *)operator_new(0x668,"");
  MeshLibraryEditorPlugin::MeshLibraryEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<MultiMeshEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<MultiMeshEditorPlugin>(void)

{
  MultiMeshEditorPlugin *this;
  
  this = (MultiMeshEditorPlugin *)operator_new(0x668,"");
  MultiMeshEditorPlugin::MultiMeshEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<NavigationObstacle3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<NavigationObstacle3DEditorPlugin>(void)

{
  NavigationObstacle3DEditorPlugin *this;
  
  this = (NavigationObstacle3DEditorPlugin *)operator_new(0x718,"");
  NavigationObstacle3DEditorPlugin::NavigationObstacle3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<OccluderInstance3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<OccluderInstance3DEditorPlugin>(void)

{
  OccluderInstance3DEditorPlugin *this;
  
  this = (OccluderInstance3DEditorPlugin *)operator_new(0x678,"");
  OccluderInstance3DEditorPlugin::OccluderInstance3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<PackedSceneEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<PackedSceneEditorPlugin>(void)

{
  PackedSceneEditorPlugin *this;
  
  this = (PackedSceneEditorPlugin *)operator_new(0x660,"");
  PackedSceneEditorPlugin::PackedSceneEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Path3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Path3DEditorPlugin>(void)

{
  Path3DEditorPlugin *this;
  
  this = (Path3DEditorPlugin *)operator_new(0x6e0,"");
  Path3DEditorPlugin::Path3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<PhysicalBone3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<PhysicalBone3DEditorPlugin>(void)

{
  PhysicalBone3DEditorPlugin *this;
  
  this = (PhysicalBone3DEditorPlugin *)operator_new(0x7f8,"");
  PhysicalBone3DEditorPlugin::PhysicalBone3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Polygon3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Polygon3DEditorPlugin>(void)

{
  Polygon3DEditorPlugin *this;
  
  this = (Polygon3DEditorPlugin *)operator_new(0x668,"");
  Polygon3DEditorPlugin::Polygon3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ResourcePreloaderEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ResourcePreloaderEditorPlugin>(void)

{
  ResourcePreloaderEditorPlugin *this;
  
  this = (ResourcePreloaderEditorPlugin *)operator_new(0x670,"");
  ResourcePreloaderEditorPlugin::ResourcePreloaderEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ShaderEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ShaderEditorPlugin>(void)

{
  ShaderEditorPlugin *this;
  
  this = (ShaderEditorPlugin *)operator_new(0x6c8,"");
  ShaderEditorPlugin::ShaderEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ShaderFileEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ShaderFileEditorPlugin>(void)

{
  ShaderFileEditorPlugin *this;
  
  this = (ShaderFileEditorPlugin *)operator_new(0x670,"");
  ShaderFileEditorPlugin::ShaderFileEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Skeleton3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Skeleton3DEditorPlugin>(void)

{
  Skeleton3DEditorPlugin *this;
  
  this = (Skeleton3DEditorPlugin *)operator_new(0x668,"");
  Skeleton3DEditorPlugin::Skeleton3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<SkeletonIK3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<SkeletonIK3DEditorPlugin>(void)

{
  SkeletonIK3DEditorPlugin *this;
  
  this = (SkeletonIK3DEditorPlugin *)operator_new(0x670,"");
  SkeletonIK3DEditorPlugin::SkeletonIK3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<SpriteFramesEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<SpriteFramesEditorPlugin>(void)

{
  SpriteFramesEditorPlugin *this;
  
  this = (SpriteFramesEditorPlugin *)operator_new(0x670,"");
  SpriteFramesEditorPlugin::SpriteFramesEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<StyleBoxEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<StyleBoxEditorPlugin>(void)

{
  StyleBoxEditorPlugin *this;
  
  this = (StyleBoxEditorPlugin *)operator_new(0x660,"");
  StyleBoxEditorPlugin::StyleBoxEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<SubViewportPreviewEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<SubViewportPreviewEditorPlugin>(void)

{
  SubViewportPreviewEditorPlugin *this;
  
  this = (SubViewportPreviewEditorPlugin *)operator_new(0x660,"");
  SubViewportPreviewEditorPlugin::SubViewportPreviewEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Texture3DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Texture3DEditorPlugin>(void)

{
  Texture3DEditorPlugin *this;
  
  this = (Texture3DEditorPlugin *)operator_new(0x660,"");
  Texture3DEditorPlugin::Texture3DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<TextureEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<TextureEditorPlugin>(void)

{
  TextureEditorPlugin *this;
  
  this = (TextureEditorPlugin *)operator_new(0x660,"");
  TextureEditorPlugin::TextureEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<TextureLayeredEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<TextureLayeredEditorPlugin>(void)

{
  TextureLayeredEditorPlugin *this;
  
  this = (TextureLayeredEditorPlugin *)operator_new(0x660,"");
  TextureLayeredEditorPlugin::TextureLayeredEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<TextureRegionEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<TextureRegionEditorPlugin>(void)

{
  TextureRegionEditorPlugin *this;
  
  this = (TextureRegionEditorPlugin *)operator_new(0x660,"");
  TextureRegionEditorPlugin::TextureRegionEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ThemeEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ThemeEditorPlugin>(void)

{
  ThemeEditorPlugin *this;
  
  this = (ThemeEditorPlugin *)operator_new(0x670,"");
  ThemeEditorPlugin::ThemeEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ToolButtonEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ToolButtonEditorPlugin>(void)

{
  ToolButtonEditorPlugin *this;
  
  this = (ToolButtonEditorPlugin *)operator_new(0x660,"");
  ToolButtonEditorPlugin::ToolButtonEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<VoxelGIEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<VoxelGIEditorPlugin>(void)

{
  VoxelGIEditorPlugin *this;
  
  this = (VoxelGIEditorPlugin *)operator_new(0x680,"");
  VoxelGIEditorPlugin::VoxelGIEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<CollisionPolygon2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<CollisionPolygon2DEditorPlugin>(void)

{
  CollisionPolygon2DEditorPlugin *this;
  
  this = (CollisionPolygon2DEditorPlugin *)operator_new(0x670,"");
  CollisionPolygon2DEditorPlugin::CollisionPolygon2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<CollisionShape2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<CollisionShape2DEditorPlugin>(void)

{
  CollisionShape2DEditorPlugin *this;
  
  this = (CollisionShape2DEditorPlugin *)operator_new(0x668,"");
  CollisionShape2DEditorPlugin::CollisionShape2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<CPUParticles2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<CPUParticles2DEditorPlugin>(void)

{
  CPUParticles2DEditorPlugin *this;
  
  this = (CPUParticles2DEditorPlugin *)operator_new(0x6b8,"");
  CPUParticles2DEditorPlugin::CPUParticles2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<GPUParticles2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<GPUParticles2DEditorPlugin>(void)

{
  GPUParticles2DEditorPlugin *this;
  
  this = (GPUParticles2DEditorPlugin *)operator_new(0x6d0,"");
  GPUParticles2DEditorPlugin::GPUParticles2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<LightOccluder2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<LightOccluder2DEditorPlugin>(void)

{
  LightOccluder2DEditorPlugin *this;
  
  this = (LightOccluder2DEditorPlugin *)operator_new(0x670,"");
  LightOccluder2DEditorPlugin::LightOccluder2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Line2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Line2DEditorPlugin>(void)

{
  Line2DEditorPlugin *this;
  
  this = (Line2DEditorPlugin *)operator_new(0x670,"");
  Line2DEditorPlugin::Line2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<NavigationLink2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<NavigationLink2DEditorPlugin>(void)

{
  NavigationLink2DEditorPlugin *this;
  
  this = (NavigationLink2DEditorPlugin *)operator_new(0x668,"");
  NavigationLink2DEditorPlugin::NavigationLink2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<NavigationObstacle2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<NavigationObstacle2DEditorPlugin>(void)

{
  NavigationObstacle2DEditorPlugin *this;
  
  this = (NavigationObstacle2DEditorPlugin *)operator_new(0x670,"");
  NavigationObstacle2DEditorPlugin::NavigationObstacle2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<NavigationPolygonEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<NavigationPolygonEditorPlugin>(void)

{
  NavigationPolygonEditorPlugin *this;
  
  this = (NavigationPolygonEditorPlugin *)operator_new(0x678,"");
  NavigationPolygonEditorPlugin::NavigationPolygonEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<ParallaxBackgroundEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<ParallaxBackgroundEditorPlugin>(void)

{
  ParallaxBackgroundEditorPlugin *this;
  
  this = (ParallaxBackgroundEditorPlugin *)operator_new(0x678,"");
  ParallaxBackgroundEditorPlugin::ParallaxBackgroundEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Path2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Path2DEditorPlugin>(void)

{
  Path2DEditorPlugin *this;
  
  this = (Path2DEditorPlugin *)operator_new(0x668,"");
  Path2DEditorPlugin::Path2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Polygon2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Polygon2DEditorPlugin>(void)

{
  Polygon2DEditorPlugin *this;
  
  this = (Polygon2DEditorPlugin *)operator_new(0x670,"");
  Polygon2DEditorPlugin::Polygon2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Cast2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Cast2DEditorPlugin>(void)

{
  Cast2DEditorPlugin *this;
  
  this = (Cast2DEditorPlugin *)operator_new(0x668,"");
  Cast2DEditorPlugin::Cast2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Skeleton2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Skeleton2DEditorPlugin>(void)

{
  Skeleton2DEditorPlugin *this;
  
  this = (Skeleton2DEditorPlugin *)operator_new(0x668,"");
  Skeleton2DEditorPlugin::Skeleton2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<Sprite2DEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<Sprite2DEditorPlugin>(void)

{
  Sprite2DEditorPlugin *this;
  
  this = (Sprite2DEditorPlugin *)operator_new(0x668,"");
  Sprite2DEditorPlugin::Sprite2DEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<TileSetEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<TileSetEditorPlugin>(void)

{
  TileSetEditorPlugin *this;
  
  this = (TileSetEditorPlugin *)operator_new(0x678,"");
  TileSetEditorPlugin::TileSetEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
}



/* EditorPlugin* EditorPlugins::creator<TileMapEditorPlugin>() */

EditorPlugin * EditorPlugins::creator<TileMapEditorPlugin>(void)

{
  TileMapEditorPlugin *this;
  
  this = (TileMapEditorPlugin *)operator_new(0x690,"");
  TileMapEditorPlugin::TileMapEditorPlugin(this);
  postinitialize_handler((Object *)this);
  return (EditorPlugin *)this;
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
LAB_001059e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001059e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00105a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00105a4e:
  return &_get_class_namev()::_class_name_static;
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



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this_00;
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  Element *pEVar7;
  bool bVar8;
  
  bVar8 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00116950;
  if (bVar8) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062ec;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062ec;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_001062ec:
  pvVar5 = *(void **)(this + 0x240);
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar3 = *(Element **)(this + 0x248);
    if (pEVar1 != pEVar3) {
      pEVar4 = *(Element **)(pEVar1 + 0x10);
      this_00 = (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar4 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar7 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 0x248);
        }
        pEVar3 = *(Element **)(pEVar4 + 8);
        if (pEVar3 != pEVar7) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar7) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar3 + 0x10));
            pEVar7 = *(Element **)(this + 0x248);
          }
          if (pEVar7 != *(Element **)(pEVar3 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar3 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
          Memory::free_static(pEVar3,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar4 + 0x38));
        Memory::free_static(pEVar4,false);
        pEVar4 = *(Element **)(this + 0x248);
      }
      pEVar3 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar4 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar4 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          pEVar4 = *(Element **)(pEVar7 + 8);
          if (pEVar6 != pEVar4) {
            pEVar2 = *(Element **)(pEVar4 + 0x10);
            if (pEVar6 != pEVar2) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar2);
              pEVar2 = *(Element **)(this + 0x248);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar2) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar4 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar4 + 0x38));
            Memory::free_static(pEVar4,false);
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 0x248);
        }
        pEVar4 = *(Element **)(pEVar3 + 8);
        if (pEVar7 != pEVar4) {
          pEVar6 = *(Element **)(pEVar4 + 0x10);
          if (pEVar7 != pEVar6) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar6);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (pEVar6 != *(Element **)(pEVar4 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar4 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar4 + 0x38));
          Memory::free_static(pEVar4,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)(this + 0x240);
      pEVar3 = *(Element **)(this + 0x248);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar3;
    *(undefined4 *)(this + 0x250) = 0;
    Dictionary::~Dictionary((Dictionary *)((long)pvVar5 + 0x38));
    Memory::free_static(pvVar5,false);
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



/* EditorVCSInterface::_get_class_namev() const */

undefined8 * EditorVCSInterface::_get_class_namev(void)

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
LAB_00106583:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106583;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorVCSInterface");
      goto LAB_001065ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorVCSInterface");
LAB_001065ee:
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
LAB_00106693:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106693;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorFileSystemImportFormatSupportQuery");
      goto LAB_001066fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorFileSystemImportFormatSupportQuery");
LAB_001066fe:
  return &_get_class_namev()::_class_name_static;
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
LAB_00106783:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106783;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
      goto LAB_001067ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
LAB_001067ee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00116b40;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010689f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010689f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010689f:
  *(undefined ***)this = &PTR__initialize_classv_001167f0;
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



/* EditorPlugins::add_create_func(EditorPlugin* (*)()) */

void EditorPlugins::add_create_func(_func_EditorPlugin_ptr *param_1)

{
  long lVar1;
  
  lVar1 = (long)(int)creation_func_count;
  if ((int)creation_func_count < 0x80) {
    creation_func_count._0_4_ = (int)creation_func_count + 1;
    (&creation_funcs)[lVar1] = param_1;
    return;
  }
  _err_print_error("add_create_func","./editor/plugins/editor_plugin.h",0x127,
                   "Condition \"creation_func_count >= MAX_CREATE_FUNCS\" is true.",0,0);
  return;
}



/* void memdelete<EditorStringNames>(EditorStringNames*) */

void memdelete<EditorStringNames>(EditorStringNames *param_1)

{
  if (StringName::configured != '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106aca;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106aca;
    }
    if (*(long *)(param_1 + 8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106aca;
    }
    if (*(long *)param_1 != 0) {
      StringName::unref();
    }
  }
LAB_00106aca:
  Memory::free_static(param_1,false);
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



/* Object* ClassDB::creator<ResourceImporterScene>(bool) */

Object * ClassDB::creator<ResourceImporterScene>(bool param_1)

{
  ResourceImporterScene *this;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (ResourceImporterScene *)operator_new(0x188,"");
  local_40 = 0;
  local_30 = 0xb;
  local_38 = "PackedScene";
  String::parse_latin1((StrRange *)&local_40);
  ResourceImporterScene::ResourceImporterScene(this,(String *)&local_40,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  Object::_initialize();
  if (param_1) {
    Object::_postinitialize();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Object *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
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



/* SyntaxHighlighter::get_class() const */

void SyntaxHighlighter::get_class(void)

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



/* EditorVCSInterface::get_class() const */

void EditorVCSInterface::get_class(void)

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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined8 *)(this + 8) = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)&local_60);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
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
  }
  else {
    StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  }
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
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x22;
  *(undefined8 *)(this + 8) = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)&local_60);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
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
  }
  else {
    StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  }
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



/* SyntaxHighlighter::_initialize_classv() */

void SyntaxHighlighter::_initialize_classv(void)

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
        RefCounted::initialize_class();
      }
      local_68 = 0;
      local_50 = 10;
      local_58 = "RefCounted";
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SyntaxHighlighter";
    local_70 = 0;
    local_50 = 0x11;
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
    if ((code *)PTR__bind_methods_0011d038 != Resource::_bind_methods) {
      SyntaxHighlighter::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorVCSInterface::_initialize_classv() */

void EditorVCSInterface::_initialize_classv(void)

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
    local_48 = "EditorVCSInterface";
    local_60 = 0;
    local_40 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d040 != Object::_bind_methods) {
      ::EditorVCSInterface::_bind_methods();
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
        if (pvVar3 == (void *)0x0) goto LAB_0010782f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010782f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorVCSInterface::is_class(String const&) const */

undefined8 __thiscall EditorVCSInterface::is_class(EditorVCSInterface *this,String *param_1)

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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010796b;
  }
  cVar4 = String::operator==(param_1,"EditorVCSInterface");
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
      if (cVar4 != '\0') goto LAB_0010796b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_0010796b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107b4b;
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
      if (cVar4 != '\0') goto LAB_00107b4b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00107b4b:
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
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00107d4b;
  }
  cVar4 = String::operator==(param_1,"EditorFileSystemImportFormatSupportQuery");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00107d4b:
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
    if (cVar4 != '\0') goto LAB_00107e73;
  }
  cVar4 = String::operator==(param_1,"SyntaxHighlighter");
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
      if (cVar4 != '\0') goto LAB_00107e73;
    }
    cVar4 = String::operator==(param_1,"Resource");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_00107f7e;
    }
  }
LAB_00107e73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107f7e:
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
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



/* EditorVCSInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void EditorVCSInterface::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "EditorVCSInterface";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorVCSInterface";
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
  StringName::StringName((StringName *)&local_78,"EditorVCSInterface",false);
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



/* EditorFileSystemImportFormatSupportQuery::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorFileSystemImportFormatSupportQuery::_get_property_listv
          (EditorFileSystemImportFormatSupportQuery *this,List *param_1,bool param_2)

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
  local_78 = "EditorFileSystemImportFormatSupportQuery";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFileSystemImportFormatSupportQuery";
  local_98 = 0;
  local_70 = 0x28;
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



/* HashMap<StringName, ClassDB::ClassInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ClassDB::ClassInfo> > >::getptr(StringName const&) */

long __thiscall
HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
::getptr(HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
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
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          return *(long *)(*(long *)(this + 8) + (ulong)uVar12 * 8) + 0x18;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* void ClassDB::register_class<EditorPaths>(bool) */

void ClassDB::register_class<EditorPaths>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorPaths::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorPaths";
    local_70 = 0;
    local_50 = 0xb;
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
    if ((code *)PTR__bind_methods_0011d048 != Object::_bind_methods) {
      EditorPaths::_bind_methods();
    }
    EditorPaths::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorPaths";
  local_60 = 0;
  local_50 = 0xb;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorPaths>;
    *(undefined4 **)(puVar2 + 4) = &EditorPaths::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorPlugin>(bool) */

void ClassDB::register_class<EditorPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorPlugin::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node";
    local_68 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorPlugin";
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
    if ((code *)PTR__bind_methods_0011d050 != Node::_bind_methods) {
      EditorPlugin::_bind_methods();
    }
    if ((code *)PTR__bind_compatibility_methods_0011d058 != Object::_bind_compatibility_methods) {
      EditorPlugin::_bind_compatibility_methods();
    }
    EditorPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorPlugin";
  local_60 = 0;
  local_50 = 0xc;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorTranslationParserPlugin>(bool) */

void ClassDB::register_class<EditorTranslationParserPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorTranslationParserPlugin::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorTranslationParserPlugin";
    local_70 = 0;
    local_50 = 0x1d;
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
    if ((code *)PTR__bind_methods_0011d060 != RefCounted::_bind_methods) {
      EditorTranslationParserPlugin::_bind_methods();
    }
    EditorTranslationParserPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorTranslationParserPlugin";
  local_60 = 0;
  local_50 = 0x1d;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorTranslationParserPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorTranslationParserPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorImportPlugin>(bool) */

void ClassDB::register_class<EditorImportPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorImportPlugin::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorImportPlugin";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d068 != ResourceImporter::_bind_methods) {
      EditorImportPlugin::_bind_methods();
    }
    EditorImportPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorImportPlugin";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorImportPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorImportPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorScript>(bool) */

void ClassDB::register_class<EditorScript>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorScript::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorScript";
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
    if ((code *)PTR__bind_methods_0011d070 != RefCounted::_bind_methods) {
      EditorScript::_bind_methods();
    }
    EditorScript::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorScript";
  local_60 = 0;
  local_50 = 0xc;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorScript>;
    *(undefined4 **)(puVar2 + 4) = &EditorScript::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorSelection>(bool) */

void ClassDB::register_class<EditorSelection>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSelection::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorSelection";
    local_70 = 0;
    local_50 = 0xf;
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
    if ((code *)PTR__bind_methods_0011d078 != Object::_bind_methods) {
      EditorSelection::_bind_methods();
    }
    EditorSelection::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorSelection";
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorSelection>;
    *(undefined4 **)(puVar2 + 4) = &EditorSelection::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorFileDialog>(bool) */

void ClassDB::register_class<EditorFileDialog>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorFileDialog::initialize_class()::initialized == '\0') {
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      ConfirmationDialog::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x12;
    local_58 = "ConfirmationDialog";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFileDialog";
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
    if ((code *)PTR__bind_methods_0011d080 != ConfirmationDialog::_bind_methods) {
      EditorFileDialog::_bind_methods();
    }
    EditorFileDialog::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorFileDialog";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorFileDialog>;
    *(undefined4 **)(puVar2 + 4) = &EditorFileDialog::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorSettings>(bool) */

void ClassDB::register_class<EditorSettings>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSettings::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        RefCounted::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Resource");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorSettings";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)PTR__bind_methods_0011d088 != Resource::_bind_methods) {
      EditorSettings::_bind_methods();
    }
    EditorSettings::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorSettings";
  local_60 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar3 = (StrRange *)&local_60;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(pSVar3,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorSettings>;
    *(undefined4 **)(puVar2 + 4) = &EditorSettings::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorToaster>() */

void ClassDB::register_abstract_class<EditorToaster>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorToaster::initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_0011d010 != BoxContainer::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"HBoxContainer");
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_60 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"EditorToaster");
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
    if ((code *)PTR__bind_methods_0011d090 != BoxContainer::_bind_methods) {
      EditorToaster::_bind_methods();
    }
    EditorToaster::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorToaster";
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010aac5;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorToaster::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010aac5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorNode3DGizmo>(bool) */

void ClassDB::register_class<EditorNode3DGizmo>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorNode3DGizmo::initialize_class()::initialized == '\0') {
    if (Node3DGizmo::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        RefCounted::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Node3DGizmo");
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
      Node3DGizmo::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node3DGizmo";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorNode3DGizmo";
    local_70 = 0;
    local_50 = 0x11;
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
    if ((code *)PTR__bind_methods_0011d098 != RefCounted::_bind_methods) {
      EditorNode3DGizmo::_bind_methods();
    }
    EditorNode3DGizmo::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorNode3DGizmo";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x11;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorNode3DGizmo>;
    *(undefined4 **)(puVar2 + 4) = &EditorNode3DGizmo::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorNode3DGizmoPlugin>(bool) */

void ClassDB::register_class<EditorNode3DGizmoPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        RefCounted::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Resource");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorNode3DGizmoPlugin";
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
    if ((code *)PTR__bind_methods_0011d0a0 != Resource::_bind_methods) {
      EditorNode3DGizmoPlugin::_bind_methods();
    }
    EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorNode3DGizmoPlugin";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar3 = (StrRange *)&local_60;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(pSVar3,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorNode3DGizmoPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorResourcePreview>() */

void ClassDB::register_abstract_class<EditorResourcePreview>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorResourcePreview::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node";
    local_68 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorResourcePreview";
    local_70 = 0;
    local_50 = 0x15;
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
    if ((code *)PTR__bind_methods_0011d0a8 != Node::_bind_methods) {
      EditorResourcePreview::_bind_methods();
    }
    EditorResourcePreview::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorResourcePreview";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010b4c1;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorResourcePreview::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010b4c1:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorResourcePreviewGenerator>(bool) */

void ClassDB::register_class<EditorResourcePreviewGenerator>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorResourcePreviewGenerator";
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
    if ((code *)PTR__bind_methods_0011d0b0 != RefCounted::_bind_methods) {
      EditorResourcePreviewGenerator::_bind_methods();
    }
    EditorResourcePreviewGenerator::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorResourcePreviewGenerator";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorResourcePreviewGenerator>;
    *(undefined4 **)(puVar2 + 4) = &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorResourceTooltipPlugin>(bool) */

void ClassDB::register_class<EditorResourceTooltipPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorResourceTooltipPlugin::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorResourceTooltipPlugin";
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
    if ((code *)PTR__bind_methods_0011d0b8 != RefCounted::_bind_methods) {
      EditorResourceTooltipPlugin::_bind_methods();
    }
    EditorResourceTooltipPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorResourceTooltipPlugin";
  local_60 = 0;
  local_50 = 0x1b;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorResourceTooltipPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorResourceTooltipPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorFileSystem>() */

void ClassDB::register_abstract_class<EditorFileSystem>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorFileSystem::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node";
    local_68 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFileSystem";
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
    if ((code *)PTR__bind_methods_0011d0c0 != Node::_bind_methods) {
      EditorFileSystem::_bind_methods();
    }
    EditorFileSystem::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorFileSystem";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010bda1;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorFileSystem::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010bda1:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorFileSystemDirectory>(bool) */

void ClassDB::register_class<EditorFileSystemDirectory>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorFileSystemDirectory::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFileSystemDirectory";
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
    if ((code *)PTR__bind_methods_0011d0c8 != Object::_bind_methods) {
      EditorFileSystemDirectory::_bind_methods();
    }
    EditorFileSystemDirectory::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorFileSystemDirectory";
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorFileSystemDirectory>;
    *(undefined4 **)(puVar2 + 4) = &EditorFileSystemDirectory::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorVCSInterface>(bool) */

void ClassDB::register_class<EditorVCSInterface>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorVCSInterface::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorVCSInterface";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d040 != Object::_bind_methods) {
      EditorVCSInterface::_bind_methods();
    }
    EditorVCSInterface::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorVCSInterface";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorVCSInterface>;
    *(undefined4 **)(puVar2 + 4) = &EditorVCSInterface::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<ScriptEditor>() */

void ClassDB::register_abstract_class<ScriptEditor>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ScriptEditor::initialize_class()::initialized == '\0') {
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"PanelContainer");
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
      if ((code *)PTR__bind_methods_0011d010 != PanelContainer::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PanelContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ScriptEditor";
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
    if ((code *)PTR__bind_methods_0011d0d0 != PanelContainer::_bind_methods) {
      ScriptEditor::_bind_methods();
    }
    ScriptEditor::initialize_class()::initialized = '\x01';
  }
  local_58 = "ScriptEditor";
  local_60 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010c545;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &ScriptEditor::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010c545:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_abstract_class<ScriptEditorBase>() */

void ClassDB::register_abstract_class<ScriptEditorBase>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ScriptEditorBase::initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_0011d010 != BoxContainer::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"VBoxContainer");
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"VBoxContainer");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ScriptEditorBase";
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
    if ((code *)PTR__bind_methods_0011d0d8 != BoxContainer::_bind_methods) {
      ScriptEditorBase::_bind_methods();
    }
    ScriptEditorBase::initialize_class()::initialized = '\x01';
  }
  local_58 = "ScriptEditorBase";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010c935;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &ScriptEditorBase::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010c935:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorSyntaxHighlighter>(bool) */

void ClassDB::register_class<EditorSyntaxHighlighter>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSyntaxHighlighter::initialize_class()::initialized == '\0') {
    if (SyntaxHighlighter::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          RefCounted::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Resource");
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
          Resource::_bind_methods();
        }
        Resource::initialize_class()::initialized = '\x01';
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
      SyntaxHighlighter::_bind_methods();
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
    if ((code *)PTR__bind_methods_0011d0e0 != SyntaxHighlighter::_bind_methods) {
      EditorSyntaxHighlighter::_bind_methods();
    }
    EditorSyntaxHighlighter::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorSyntaxHighlighter";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar3 = (StrRange *)&local_60;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(pSVar3,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorSyntaxHighlighter>;
    *(undefined4 **)(puVar2 + 4) = &EditorSyntaxHighlighter::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
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
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorInterface>() */

void ClassDB::register_abstract_class<EditorInterface>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorInterface::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorInterface";
    local_60 = 0;
    local_40 = 0xf;
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
    if ((code *)PTR__bind_methods_0011d0e8 != Object::_bind_methods) {
      EditorInterface::_bind_methods();
    }
    if ((code *)PTR__bind_compatibility_methods_0011d0f0 != Object::_bind_compatibility_methods) {
      EditorInterface::_bind_compatibility_methods();
    }
    EditorInterface::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorInterface";
  local_50 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010d049;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorInterface::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010d049:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorExportPlugin>(bool) */

void ClassDB::register_class<EditorExportPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorExportPlugin::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorExportPlugin";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d0f8 != RefCounted::_bind_methods) {
      EditorExportPlugin::_bind_methods();
    }
    EditorExportPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorExportPlugin";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorExportPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorExportPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorExportPlatform>() */

void ClassDB::register_abstract_class<EditorExportPlatform>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorExportPlatform::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_58 = 0;
    local_40 = 10;
    local_48 = "RefCounted";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorExportPlatform";
    local_60 = 0;
    local_40 = 0x14;
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
    if ((code *)PTR__bind_methods_0011d100 != RefCounted::_bind_methods) {
      EditorExportPlatform::_bind_methods();
    }
    EditorExportPlatform::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorExportPlatform";
  local_50 = 0;
  local_40 = 0x14;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010d4e5;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorExportPlatform::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010d4e5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_abstract_class<EditorExportPlatformPC>() */

void ClassDB::register_abstract_class<EditorExportPlatformPC>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorExportPlatformPC::initialize_class()::initialized == '\0') {
    if (EditorExportPlatform::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        RefCounted::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorExportPlatform");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011d100 != RefCounted::_bind_methods) {
        EditorExportPlatform::_bind_methods();
      }
      EditorExportPlatform::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorExportPlatform";
    local_58 = 0;
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorExportPlatformPC";
    local_60 = 0;
    local_40 = 0x16;
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
    EditorExportPlatformPC::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorExportPlatformPC";
  local_50 = 0;
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010d7f5;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorExportPlatformPC::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010d7f5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorExportPlatformExtension>(bool) */

void ClassDB::register_class<EditorExportPlatformExtension>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorExportPlatformExtension::initialize_class()::initialized == '\0') {
    if (EditorExportPlatform::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        RefCounted::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorExportPlatform");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != EditorExportPlatform::_bind_methods) {
        EditorExportPlatform::_bind_methods();
      }
      EditorExportPlatform::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorExportPlatform";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorExportPlatformExtension";
    local_70 = 0;
    local_50 = 0x1d;
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
    if ((code *)PTR__bind_methods_0011d108 != EditorExportPlatform::_bind_methods) {
      EditorExportPlatformExtension::_bind_methods();
    }
    EditorExportPlatformExtension::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorExportPlatformExtension";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x1d;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorExportPlatformExtension>;
    *(undefined4 **)(puVar2 + 4) = &EditorExportPlatformExtension::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorExportPreset>() */

void ClassDB::register_abstract_class<EditorExportPreset>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorExportPreset::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_58 = 0;
    local_40 = 10;
    local_48 = "RefCounted";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorExportPreset";
    local_60 = 0;
    local_40 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d110 != RefCounted::_bind_methods) {
      EditorExportPreset::_bind_methods();
    }
    EditorExportPreset::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorExportPreset";
  local_50 = 0;
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010dd85;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorExportPreset::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010dd85:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorResourceConversionPlugin>(bool) */

void ClassDB::register_class<EditorResourceConversionPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorResourceConversionPlugin";
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
    if ((code *)PTR__bind_methods_0011d118 != RefCounted::_bind_methods) {
      EditorResourceConversionPlugin::_bind_methods();
    }
    EditorResourceConversionPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorResourceConversionPlugin";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorResourceConversionPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorResourceConversionPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorSceneFormatImporter>(bool) */

void ClassDB::register_class<EditorSceneFormatImporter>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_0011d120 != RefCounted::_bind_methods) {
      EditorSceneFormatImporter::_bind_methods();
    }
    EditorSceneFormatImporter::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorSceneFormatImporter";
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorSceneFormatImporter>;
    *(undefined4 **)(puVar2 + 4) = &EditorSceneFormatImporter::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorScenePostImportPlugin>(bool) */

void ClassDB::register_class<EditorScenePostImportPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_0011d128 != RefCounted::_bind_methods) {
      EditorScenePostImportPlugin::_bind_methods();
    }
    EditorScenePostImportPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorScenePostImportPlugin";
  local_60 = 0;
  local_50 = 0x1b;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorScenePostImportPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorScenePostImportPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorInspector>(bool) */

void ClassDB::register_class<EditorInspector>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorInspector::initialize_class()::initialized == '\0') {
    if (ScrollContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"ScrollContainer");
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
      if ((code *)PTR__bind_methods_0011d010 != ScrollContainer::_bind_methods) {
        ScrollContainer::_bind_methods();
      }
      ScrollContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "ScrollContainer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspector";
    local_70 = 0;
    local_50 = 0xf;
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
    if ((code *)PTR__bind_methods_0011d130 != ScrollContainer::_bind_methods) {
      EditorInspector::_bind_methods();
    }
    EditorInspector::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorInspector";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorInspector>;
    *(undefined4 **)(puVar2 + 4) = &EditorInspector::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorInspectorPlugin>(bool) */

void ClassDB::register_class<EditorInspectorPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPlugin";
    local_70 = 0;
    local_50 = 0x15;
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
    if ((code *)PTR__bind_methods_0011d138 != RefCounted::_bind_methods) {
      EditorInspectorPlugin::_bind_methods();
    }
    if ((code *)PTR__bind_compatibility_methods_0011d140 != Object::_bind_compatibility_methods) {
      EditorInspectorPlugin::_bind_compatibility_methods();
    }
    EditorInspectorPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorInspectorPlugin";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorInspectorPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorInspectorPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorProperty>(bool) */

void ClassDB::register_class<EditorProperty>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorProperty::initialize_class()::initialized == '\0') {
    if (Container::initialize_class()::initialized == '\0') {
      Container::initialize_class();
    }
    local_68 = 0;
    local_50 = 9;
    local_58 = "Container";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorProperty";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)PTR__bind_methods_0011d148 != Container::_bind_methods) {
      EditorProperty::_bind_methods();
    }
    EditorProperty::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorProperty";
  local_60 = 0;
  local_50 = 0xe;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorProperty>;
    *(undefined4 **)(puVar2 + 4) = &EditorProperty::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ScriptCreateDialog>(bool) */

void ClassDB::register_class<ScriptCreateDialog>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ScriptCreateDialog::initialize_class()::initialized == '\0') {
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      ConfirmationDialog::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x12;
    local_58 = "ConfirmationDialog";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ScriptCreateDialog";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_0011d150 != ConfirmationDialog::_bind_methods) {
      ScriptCreateDialog::_bind_methods();
    }
    ScriptCreateDialog::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ScriptCreateDialog";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ScriptCreateDialog>;
    *(undefined4 **)(puVar2 + 4) = &ScriptCreateDialog::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorFeatureProfile>(bool) */

void ClassDB::register_class<EditorFeatureProfile>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorFeatureProfile::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFeatureProfile";
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
    if ((code *)PTR__bind_methods_0011d158 != RefCounted::_bind_methods) {
      EditorFeatureProfile::_bind_methods();
    }
    EditorFeatureProfile::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorFeatureProfile";
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorFeatureProfile>;
    *(undefined4 **)(puVar2 + 4) = &EditorFeatureProfile::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorSpinSlider>(bool) */

void ClassDB::register_class<EditorSpinSlider>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSpinSlider::initialize_class()::initialized == '\0') {
    if (Range::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0011d018 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_0011d008 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"CanvasItem");
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
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Control");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Range");
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
      Range::_bind_methods();
      Range::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Range");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"EditorSpinSlider");
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
    if ((code *)PTR__bind_methods_0011d160 != Range::_bind_methods) {
      EditorSpinSlider::_bind_methods();
    }
    EditorSpinSlider::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorSpinSlider";
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorSpinSlider>;
    *(undefined4 **)(puVar2 + 4) = &EditorSpinSlider::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorResourcePicker>(bool) */

void ClassDB::register_class<EditorResourcePicker>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorResourcePicker::initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_0011d010 != BoxContainer::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"HBoxContainer");
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorResourcePicker";
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
    if ((code *)PTR__bind_methods_0011d168 != BoxContainer::_bind_methods) {
      EditorResourcePicker::_bind_methods();
    }
    EditorResourcePicker::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorResourcePicker";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorResourcePicker>;
    *(undefined4 **)(puVar2 + 4) = &EditorResourcePicker::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorScriptPicker>(bool) */

void ClassDB::register_class<EditorScriptPicker>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorScriptPicker::initialize_class()::initialized == '\0') {
    if (EditorResourcePicker::initialize_class()::initialized == '\0') {
      if (HBoxContainer::initialize_class()::initialized == '\0') {
        if (BoxContainer::initialize_class()::initialized == '\0') {
          if (Container::initialize_class()::initialized == '\0') {
            Container::initialize_class();
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"BoxContainer");
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
          if ((code *)PTR__bind_methods_0011d010 != BoxContainer::_bind_methods) {
            BoxContainer::_bind_methods();
          }
          BoxContainer::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"HBoxContainer");
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
        HBoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorResourcePicker");
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
      EditorResourcePicker::_bind_methods();
      EditorResourcePicker::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorResourcePicker");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"EditorScriptPicker");
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
    if ((code *)PTR__bind_methods_0011d170 != EditorResourcePicker::_bind_methods) {
      EditorScriptPicker::_bind_methods();
    }
    EditorScriptPicker::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorScriptPicker";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<EditorScriptPicker>;
    *(undefined4 **)(puVar2 + 4) = &EditorScriptPicker::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorUndoRedoManager>() */

void ClassDB::register_abstract_class<EditorUndoRedoManager>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorUndoRedoManager::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorUndoRedoManager";
    local_60 = 0;
    local_40 = 0x15;
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
    if ((code *)PTR__bind_methods_0011d178 != Object::_bind_methods) {
      EditorUndoRedoManager::_bind_methods();
    }
    EditorUndoRedoManager::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorUndoRedoManager";
  local_50 = 0;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00110571;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorUndoRedoManager::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00110571:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorContextMenuPlugin>(bool) */

void ClassDB::register_class<EditorContextMenuPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorContextMenuPlugin::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorContextMenuPlugin";
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
    if ((code *)PTR__bind_methods_0011d180 != RefCounted::_bind_methods) {
      EditorContextMenuPlugin::_bind_methods();
    }
    EditorContextMenuPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorContextMenuPlugin";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorContextMenuPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorContextMenuPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<FileSystemDock>() */

void ClassDB::register_abstract_class<FileSystemDock>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (FileSystemDock::initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_0011d010 != BoxContainer::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"VBoxContainer");
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"VBoxContainer");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FileSystemDock";
    local_70 = 0;
    local_50 = 0xe;
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
    if ((code *)PTR__bind_methods_0011d188 != BoxContainer::_bind_methods) {
      FileSystemDock::_bind_methods();
    }
    FileSystemDock::initialize_class()::initialized = '\x01';
  }
  local_58 = "FileSystemDock";
  local_60 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00110ba5;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &FileSystemDock::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00110ba5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<EditorScenePostImport>(bool) */

void ClassDB::register_class<EditorScenePostImport>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorScenePostImport::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorScenePostImport";
    local_70 = 0;
    local_50 = 0x15;
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
    if ((code *)PTR__bind_methods_0011d190 != RefCounted::_bind_methods) {
      EditorScenePostImport::_bind_methods();
    }
    EditorScenePostImport::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorScenePostImport";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorScenePostImport>;
    *(undefined4 **)(puVar2 + 4) = &EditorScenePostImport::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorCommandPalette>(bool) */

void ClassDB::register_class<EditorCommandPalette>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorCommandPalette::initialize_class()::initialized == '\0') {
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      ConfirmationDialog::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x12;
    local_58 = "ConfirmationDialog";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorCommandPalette";
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
    if ((code *)PTR__bind_methods_0011d198 != ConfirmationDialog::_bind_methods) {
      EditorCommandPalette::_bind_methods();
    }
    EditorCommandPalette::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorCommandPalette";
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorCommandPalette>;
    *(undefined4 **)(puVar2 + 4) = &EditorCommandPalette::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<EditorDebuggerPlugin>(bool) */

void ClassDB::register_class<EditorDebuggerPlugin>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorDebuggerPlugin::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_68 = 0;
    local_50 = 10;
    local_58 = "RefCounted";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorDebuggerPlugin";
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
    if ((code *)PTR__bind_methods_0011d1a0 != RefCounted::_bind_methods) {
      EditorDebuggerPlugin::_bind_methods();
    }
    EditorDebuggerPlugin::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "EditorDebuggerPlugin";
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorDebuggerPlugin>;
    *(undefined4 **)(puVar2 + 4) = &EditorDebuggerPlugin::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<EditorDebuggerSession>() */

void ClassDB::register_abstract_class<EditorDebuggerSession>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorDebuggerSession::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      RefCounted::initialize_class();
    }
    local_58 = 0;
    local_40 = 10;
    local_48 = "RefCounted";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorDebuggerSession";
    local_60 = 0;
    local_40 = 0x15;
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
    if ((code *)PTR__bind_methods_0011d1a8 != RefCounted::_bind_methods) {
      EditorDebuggerSession::_bind_methods();
    }
    EditorDebuggerSession::initialize_class()::initialized = '\x01';
  }
  local_48 = "EditorDebuggerSession";
  local_50 = 0;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001115c5;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &EditorDebuggerSession::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001115c5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<ResourceImporterBitMap>(bool) */

void ClassDB::register_class<ResourceImporterBitMap>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterBitMap::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterBitMap";
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
    ResourceImporterBitMap::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterBitMap";
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterBitMap>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterBitMap::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterBMFont>(bool) */

void ClassDB::register_class<ResourceImporterBMFont>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterBMFont::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterBMFont";
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
    ResourceImporterBMFont::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterBMFont";
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterBMFont>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterBMFont::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterCSVTranslation>(bool) */

void ClassDB::register_class<ResourceImporterCSVTranslation>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterCSVTranslation::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterCSVTranslation";
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
    ResourceImporterCSVTranslation::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterCSVTranslation";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterCSVTranslation>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterCSVTranslation::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterDynamicFont>(bool) */

void ClassDB::register_class<ResourceImporterDynamicFont>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterDynamicFont::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterDynamicFont";
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
    ResourceImporterDynamicFont::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterDynamicFont";
  local_60 = 0;
  local_50 = 0x1b;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterDynamicFont>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterDynamicFont::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterImage>(bool) */

void ClassDB::register_class<ResourceImporterImage>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterImage::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterImage";
    local_70 = 0;
    local_50 = 0x15;
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
    ResourceImporterImage::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterImage";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterImage>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterImage::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterImageFont>(bool) */

void ClassDB::register_class<ResourceImporterImageFont>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterImageFont::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterImageFont";
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
    ResourceImporterImageFont::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterImageFont";
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterImageFont>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterImageFont::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterLayeredTexture>(bool) */

void ClassDB::register_class<ResourceImporterLayeredTexture>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterLayeredTexture::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    ResourceImporterLayeredTexture::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterLayeredTexture";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterLayeredTexture>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterLayeredTexture::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterOBJ>(bool) */

void ClassDB::register_class<ResourceImporterOBJ>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterOBJ::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterOBJ";
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
    ResourceImporterOBJ::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterOBJ";
  local_60 = 0;
  local_50 = 0x13;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterOBJ>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterOBJ::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterScene>(bool) */

void ClassDB::register_class<ResourceImporterScene>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterScene::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterScene";
    local_70 = 0;
    local_50 = 0x15;
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
    ResourceImporterScene::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterScene";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterScene>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterScene::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterShaderFile>(bool) */

void ClassDB::register_class<ResourceImporterShaderFile>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterShaderFile::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterShaderFile";
    local_70 = 0;
    local_50 = 0x1a;
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
    ResourceImporterShaderFile::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterShaderFile";
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterShaderFile>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterShaderFile::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterTexture>(bool) */

void ClassDB::register_class<ResourceImporterTexture>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterTexture::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterTexture";
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
    ResourceImporterTexture::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterTexture";
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterTexture>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterTexture::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterTextureAtlas>(bool) */

void ClassDB::register_class<ResourceImporterTextureAtlas>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterTextureAtlas::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
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
    ResourceImporterTextureAtlas::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterTextureAtlas";
  local_60 = 0;
  local_50 = 0x1c;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterTextureAtlas>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterTextureAtlas::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<ResourceImporterWAV>(bool) */

void ClassDB::register_class<ResourceImporterWAV>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (ResourceImporterWAV::initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
      ResourceImporter::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x10;
    local_58 = "ResourceImporter";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterWAV";
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
    ResourceImporterWAV::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "ResourceImporterWAV";
  local_60 = 0;
  local_50 = 0x13;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<ResourceImporterWAV>;
    *(undefined4 **)(puVar2 + 4) = &ResourceImporterWAV::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorVCSInterface::EditorVCSInterface() */

void __thiscall EditorVCSInterface::EditorVCSInterface(EditorVCSInterface *this)

{
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00116cb8;
  StringName::StringName((StringName *)(this + 0x178),"_initialize",false);
  this[0x180] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  StringName::StringName((StringName *)(this + 400),"_set_credentials",false);
  this[0x198] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x1a0) = 0;
  StringName::StringName((StringName *)(this + 0x1a8),"_get_modified_files_data",false);
  this[0x1b0] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  StringName::StringName((StringName *)(this + 0x1c0),"_stage_file",false);
  this[0x1c8] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x1d0) = 0;
  StringName::StringName((StringName *)(this + 0x1d8),"_unstage_file",false);
  this[0x1e0] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x1e8) = 0;
  StringName::StringName((StringName *)(this + 0x1f0),"_discard_file",false);
  this[0x1f8] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x200) = 0;
  StringName::StringName((StringName *)(this + 0x208),"_commit",false);
  this[0x210] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x218) = 0;
  StringName::StringName((StringName *)(this + 0x220),"_get_diff",false);
  this[0x228] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x230) = 0;
  StringName::StringName((StringName *)(this + 0x238),"_shut_down",false);
  this[0x240] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x248) = 0;
  StringName::StringName((StringName *)(this + 0x250),"_get_vcs_name",false);
  this[600] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x260) = 0;
  StringName::StringName((StringName *)(this + 0x268),"_get_previous_commits",false);
  this[0x270] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x278) = 0;
  StringName::StringName((StringName *)(this + 0x280),"_get_branch_list",false);
  this[0x288] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x290) = 0;
  StringName::StringName((StringName *)(this + 0x298),"_get_remotes",false);
  this[0x2a0] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x2a8) = 0;
  StringName::StringName((StringName *)(this + 0x2b0),"_create_branch",false);
  this[0x2b8] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x2c0) = 0;
  StringName::StringName((StringName *)(this + 0x2c8),"_remove_branch",false);
  this[0x2d0] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x2d8) = 0;
  StringName::StringName((StringName *)(this + 0x2e0),"_create_remote",false);
  this[0x2e8] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x2f0) = 0;
  StringName::StringName((StringName *)(this + 0x2f8),"_remove_remote",false);
  this[0x300] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x308) = 0;
  StringName::StringName((StringName *)(this + 0x310),"_get_current_branch_name",false);
  this[0x318] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 800) = 0;
  StringName::StringName((StringName *)(this + 0x328),"_checkout_branch",false);
  this[0x330] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x338) = 0;
  StringName::StringName((StringName *)(this + 0x340),"_pull",false);
  this[0x348] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x350) = 0;
  StringName::StringName((StringName *)(this + 0x358),"_push",false);
  this[0x360] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x368) = 0;
  StringName::StringName((StringName *)(this + 0x370),"_fetch",false);
  this[0x378] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x380) = 0;
  StringName::StringName((StringName *)(this + 0x388),"_get_line_diff",false);
  this[0x390] = (EditorVCSInterface)0x0;
  *(undefined8 *)(this + 0x398) = 0;
  return;
}



/* Object* ClassDB::creator<EditorVCSInterface>(bool) */

Object * ClassDB::creator<EditorVCSInterface>(bool param_1)

{
  EditorVCSInterface *this;
  
  this = (EditorVCSInterface *)operator_new(0x3a0,"");
  EditorVCSInterface::EditorVCSInterface(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
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
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  long local_e0;
  long local_d8;
  int local_d0;
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
  int *local_68;
  ulong local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_is_active");
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  local_b0 = CONCAT44(local_b0._4_4_,local_e8);
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
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorFileSystemImportFormatSupportQuery");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_e4,local_e8) != 0)) {
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) goto LAB_001143a8;
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_get_file_extensions");
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_118 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_108 = 0;
  local_e8 = 0x22;
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  local_c0 = 6;
  if (local_d0 == 0x11) {
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
    if (local_d8 == local_100) {
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_100;
    }
  }
  else {
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_118);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  local_b0 = CONCAT44(local_b0._4_4_,local_e8);
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
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorFileSystemImportFormatSupportQuery");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_e4,local_e8) != 0)) {
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) goto LAB_001143a8;
      lVar2 = *(long *)(local_68 + -2);
      lVar6 = 0;
      local_68 = (int *)0x0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_query");
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  local_b0 = CONCAT44(local_b0._4_4_,local_e8);
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
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"EditorFileSystemImportFormatSupportQuery");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_e4,local_e8) != 0)) {
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
LAB_001143a8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar6 = 0;
      local_68 = (int *)0x0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void ClassDB::register_class<EditorFileSystemImportFormatSupportQuery>(bool) */

void ClassDB::register_class<EditorFileSystemImportFormatSupportQuery>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
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
  this = (StrRange *)&local_60;
  local_58 = "EditorFileSystemImportFormatSupportQuery";
  local_60 = 0;
  local_50 = 0x28;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<EditorPlugin>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<EditorFileSystemImportFormatSupportQuery>;
    *(undefined4 **)(puVar2 + 4) =
         &EditorFileSystemImportFormatSupportQuery::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
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
      if ((code *)PTR__bind_methods_0011d018 != RefCounted::_bind_methods) {
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
      goto LAB_00114ccf;
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
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00115079;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0011508e:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00114fc8;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0);
        *(undefined8 *)(this + 0x1c0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00115079:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0011508e;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0,uVar1);
      *(undefined8 *)(this + 0x1c0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00114fc8:
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
LAB_00114ccf:
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
      goto LAB_001152c5;
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
        if ((StringName::configured != '\0') && (lVar2 = 0, local_100 != 0)) goto LAB_001156af;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001156c4:
        lVar2 = in_RSI[1];
        pcVar4 = *(code **)(lVar2 + 200);
        if (((pcVar4 == (code *)0x0) || (*(long *)(lVar2 + 0xe0) == 0)) &&
           (pcVar4 = *(code **)(lVar2 + 0xc0), pcVar4 == (code *)0x0)) goto LAB_001155fe;
        lVar2 = (*pcVar4)(*(undefined8 *)(lVar2 + 0xa0),in_RSI + 0x33);
        in_RSI[0x35] = lVar2;
      }
      else {
        lVar2 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001156af:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar2 == 0) goto LAB_001156c4;
      }
      lVar2 = in_RSI[1];
    }
    else {
      lVar2 = (*pcVar4)(*(undefined8 *)(lVar2 + 0xa0),in_RSI + 0x33,uVar1);
      in_RSI[0x35] = lVar2;
      lVar2 = in_RSI[1];
    }
LAB_001155fe:
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
LAB_001152c5:
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
      goto LAB_0011587f;
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
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00115c29;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00115c3e:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00115b78;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180);
        *(undefined8 *)(this + 400) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00115c29:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00115c3e;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180,uVar1);
      *(undefined8 *)(this + 400) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00115b78:
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
LAB_0011587f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x58);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00115fb9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00115fb9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorVCSInterface::EditorVCSInterface() */

void __thiscall EditorVCSInterface::EditorVCSInterface(EditorVCSInterface *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorVCSInterface::~EditorVCSInterface() */

void __thiscall EditorVCSInterface::~EditorVCSInterface(EditorVCSInterface *this)

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


