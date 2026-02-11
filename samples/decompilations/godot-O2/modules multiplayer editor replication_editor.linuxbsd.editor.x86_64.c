
/* ReplicationEditor::_update_value(NodePath const&, int, int) */

void __thiscall
ReplicationEditor::_update_value(ReplicationEditor *this,NodePath *param_1,int param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_root();
  if (lVar2 != 0) {
    Tree::get_root();
    lVar2 = TreeItem::get_first_child();
    if (lVar2 != 0) {
      do {
        TreeItem::get_metadata((int)local_58);
        Variant::operator_cast_to_NodePath(local_60);
        cVar1 = NodePath::operator==((NodePath *)local_60,param_1);
        NodePath::~NodePath((NodePath *)local_60);
        if (Variant::needs_deinit[local_58[0]] == '\0') {
          if (cVar1 == '\0') goto LAB_00100084;
LAB_001000e0:
          if (param_2 == 1) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              TreeItem::set_checked((int)lVar2,true);
              return;
            }
            goto LAB_00100186;
          }
          if (param_2 == 2) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              TreeItem::set_range((int)lVar2,(double)param_3);
              return;
            }
            goto LAB_00100186;
          }
          break;
        }
        Variant::_clear_internal();
        if (cVar1 != '\0') goto LAB_001000e0;
LAB_00100084:
        lVar2 = TreeItem::get_next();
      } while (lVar2 != 0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100186:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Node*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Node*>::_copy_on_write(CowData<Node*> *this)

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



/* ReplicationEditor::_notification(int) [clone .part.0] */

void ReplicationEditor::_notification(int param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  pcVar1 = *(code **)(*(long *)pOVar6 + 0x1d0);
  if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)((StringName *)&local_48,pOVar6,SceneStringNames::singleton + 600,
            &_notification(int)::{lambda()#1}::operator()()::sname);
  Control::add_theme_style_override(pSVar7,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_48 == (Object *)0x0) ||
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 == '\0')) ||
     (cVar4 = predelete_handler(local_48), cVar4 == '\0')) {
    cVar4 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pRVar2 = *(Ref **)(pSVar7 + 0xa20);
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_48,pSVar7);
  Button::set_button_icon(pRVar2);
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar6 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pRVar2 = *(Ref **)(pSVar7 + 0xa70);
  if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_48,pSVar7);
  Button::set_button_icon(pRVar2);
  if (((local_48 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* ReplicationEditor::_notification(int) */

void __thiscall ReplicationEditor::_notification(ReplicationEditor *this,int param_1)

{
  char cVar1;
  
  if (param_1 != 10) {
    if (param_1 == 10000) {
      cVar1 = EditorThemeManager::is_generated_theme_outdated();
      if (cVar1 != '\0') goto LAB_00100809;
    }
    return;
  }
LAB_00100809:
  _notification((int)this);
  return;
}



/* ReplicationEditor::_pick_node_selected(NodePath) */

void ReplicationEditor::_pick_node_selected(NodePath *param_1)

{
  NodePath *pNVar1;
  Object *pOVar2;
  long lVar3;
  String *pSVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Node aNStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  pNVar1 = *(NodePath **)(param_1 + 0xa10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  MultiplayerSynchronizer::get_root_path();
  lVar3 = Node::get_node(pNVar1);
  NodePath::~NodePath((NodePath *)&local_48);
  if (lVar3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x61;
      pcVar5 = "Parameter \"root\" is null.";
LAB_0010094a:
      _err_print_error("_pick_node_selected","modules/multiplayer/editor/replication_editor.cpp",
                       uVar6,pcVar5,0,0);
      return;
    }
  }
  else {
    pSVar4 = (String *)Node::get_node(param_1);
    if (pSVar4 == (String *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 99;
        pcVar5 = "Parameter \"node\" is null.";
        goto LAB_0010094a;
      }
    }
    else {
      Node::get_path_to(aNStack_58,SUB81(lVar3,0));
      NodePath::operator=(param_1 + 0xa68,(NodePath *)aNStack_58);
      pOVar2 = *(Object **)(param_1 + 0xa58);
      local_50 = 0;
      local_48 = &_LC14;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_50);
      PropertySelector::select_property_from_instance(pOVar2,pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      NodePath::~NodePath((NodePath *)aNStack_58);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_pick_new_property() */

void __thiscall ReplicationEditor::_pick_new_property(ReplicationEditor *this)

{
  NodePath *pNVar1;
  long lVar2;
  long in_FS_OFFSET;
  String *local_90;
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pNVar1 = *(NodePath **)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pNVar1 == (NodePath *)0x0) {
    local_60 = 0;
    local_90 = EditorNode::singleton;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Warning!";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(StrRange *)&local_68);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "Select a replicator node in order to pick a property to add to it.";
    local_50 = 0x42;
  }
  else {
    MultiplayerSynchronizer::get_root_path();
    lVar2 = Node::get_node(pNVar1);
    NodePath::~NodePath((NodePath *)&local_58);
    if (lVar2 != 0) {
      SceneTreeDialog::popup_scenetree_dialog
                (*(Node **)(this + 0xa60),(Node *)0x0,SUB81(*(undefined8 *)(this + 0xa10),0),true);
      LineEdit::clear();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Control::grab_focus();
        return;
      }
      goto LAB_00100c85;
    }
    local_60 = 0;
    local_90 = EditorNode::singleton;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Warning!";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(StrRange *)&local_68);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "Not possible to add a new property to synchronize without a root.";
    local_50 = 0x41;
  }
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_80);
  TTR((CowData<char32_t> *)&local_58,(StrRange *)&local_80);
  EditorNode::show_warning(local_90,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100c85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_get_class_icon(Node const*) */

Node * ReplicationEditor::_get_class_icon(Node *param_1)

{
  char cVar1;
  int iVar2;
  long *in_RDX;
  StringName *in_RSI;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDX != (long *)0x0) {
    (**(code **)(*in_RDX + 0x48))(local_50);
    StringName::StringName((StringName *)&local_48,local_50,false);
    cVar1 = Control::has_theme_icon(in_RSI,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_50);
    if (cVar1 != '\0') {
      (**(code **)(*in_RDX + 0x48))(local_50);
      StringName::StringName((StringName *)&local_48,local_50,false);
      Control::get_theme_icon((StringName *)param_1,in_RSI);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(local_50);
      goto LAB_00100d80;
    }
  }
  if ((_get_class_icon(Node_const*)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_get_class_icon(Node_const*)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_get_class_icon(Node_const*)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_get_class_icon(Node_const*)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_get_class_icon(Node_const*)::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)param_1,in_RSI);
LAB_00100d80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ReplicationEditor::_can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

ulong ReplicationEditor::_can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  uint uVar2;
  Variant *this;
  Object *pOVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  Variant aVStack_58 [8];
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(aVStack_58);
  Variant::Variant((Variant *)local_48,"type");
  uVar2 = Dictionary::has(aVStack_58);
  uVar5 = (ulong)uVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((char)uVar2 == '\0') goto LAB_00100ebe;
  Variant::Variant((Variant *)local_48,"type");
  Dictionary::operator[](aVStack_58);
  Variant::operator_cast_to_String(local_50);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar1 = String::operator!=((String *)local_50,"obj_property");
  if (cVar1 == '\0') {
    Variant::Variant((Variant *)local_48,"object");
    this = (Variant *)Dictionary::operator[](aVStack_58);
    pOVar3 = Variant::operator_cast_to_Object_(this);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (pOVar3 == (Object *)0x0) goto LAB_00100f98;
    lVar4 = __dynamic_cast(pOVar3,&Object::typeinfo,&Node::typeinfo,0);
    uVar5 = CONCAT71((int7)((ulong)pOVar3 >> 8),lVar4 != 0);
  }
  else {
LAB_00100f98:
    uVar5 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
LAB_00100ebe:
  Dictionary::~Dictionary((Dictionary *)aVStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_tree_item_edited() */

void __thiscall ReplicationEditor::_tree_item_edited(ReplicationEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  String *pSVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  int iVar10;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  double dVar13;
  Variant *local_140;
  Variant **local_128;
  Variant local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  CowData<char32_t> local_f0 [8];
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [6];
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = Tree::get_edited();
  if ((lVar7 != 0) && (*(long *)(this + 0xa40) != 0)) {
    iVar5 = Tree::get_edited_column();
    if (1 < iVar5 - 1U) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_tree_item_edited","modules/multiplayer/editor/replication_editor.cpp",
                         0x192,"Condition \"column < 1 || column > 2\" is true.",0,0);
        return;
      }
      goto LAB_00101b1d;
    }
    TreeItem::get_metadata((int)(Variant *)local_a8);
    Variant::operator_cast_to_NodePath(local_108);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
    local_e0 = 0;
    iVar10 = (int)lVar7;
    if (iVar5 == 1) {
      String::parse_latin1((String *)&local_e0,"");
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"Set spawn property");
      TTR((CowData<char32_t> *)&local_d8,(String *)&local_e8);
      EditorUndoRedoManager::create_action(pOVar8,(CowData<char32_t> *)&local_d8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      bVar4 = (bool)TreeItem::is_checked(iVar10);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"property_set_spawn",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_90,bVar4);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pVVar12 = (Variant *)&local_60;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      EditorUndoRedoManager::add_do_methodp(pOVar8,pSVar2,(Variant **)&local_e0,(int)&local_c8);
      pVVar11 = pVVar12;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
        local_128 = &local_c8;
        local_140 = local_90;
      } while (pVVar11 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"property_set_spawn",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_140,(bool)(bVar4 ^ 1U));
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pVStack_c0 = local_140;
      local_c8 = (Variant *)local_a8;
      EditorUndoRedoManager::add_undo_methodp(pOVar8,pSVar2,(Variant **)&local_e0,(int)local_128);
      do {
        pVVar11 = pVVar12 + -0x18;
        pVVar12 = pVVar12 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar11] != '\0') {
          Variant::_clear_internal();
        }
        local_128 = &local_c8;
        local_140 = local_90;
      } while (pVVar12 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"_update_value",false);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_140,1);
      Variant::Variant((Variant *)&local_78,(uint)bVar4);
      local_58 = (undefined1  [16])0x0;
      pVVar12 = local_48;
      local_60 = 0;
      pVStack_c0 = local_140;
      local_c8 = (Variant *)local_a8;
      local_b8 = (Variant *)&local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar8,(StringName *)this,(Variant **)&local_e0,(int)local_128);
      pVVar11 = pVVar12;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
        local_128 = &local_c8;
        local_140 = local_90;
      } while (pVVar11 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"_update_value",false);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_140,1);
      Variant::Variant((Variant *)&local_78,(uint)(bVar4 ^ 1U));
      local_58 = (undefined1  [16])0x0;
      local_60 = 0;
      pVStack_c0 = local_140;
      local_c8 = (Variant *)local_a8;
      local_b8 = (Variant *)&local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar8,(StringName *)this,(Variant **)&local_e0,(int)local_128);
      do {
        pVVar11 = pVVar12 + -0x18;
        pVVar12 = pVVar12 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar11] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar12 != (Variant *)local_a8);
    }
    else {
      local_d0 = 0;
      local_d8 = "";
      String::parse_latin1((StrRange *)&local_e0);
      local_d8 = "Set sync property";
      local_e8 = 0;
      local_d0 = 0x11;
      String::parse_latin1((StrRange *)&local_e8);
      TTR((CowData<char32_t> *)&local_d8,(StrRange *)&local_e8);
      EditorUndoRedoManager::create_action(pOVar8,(CowData<char32_t> *)&local_d8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      dVar13 = (double)TreeItem::get_range(iVar10);
      iVar5 = (int)dVar13;
      iVar6 = SceneReplicationConfig::property_get_replication_mode(*(NodePath **)(this + 0xa40));
      if (iVar5 == 2) {
        plVar9 = (long *)SceneReplicationConfig::get_watch_properties();
        pSVar3 = EditorNode::singleton;
        if ((*plVar9 != 0) && (0x3f < *(int *)(*plVar9 + 0x10))) {
          local_d8 = (char *)0x0;
          String::parse_latin1((String *)&local_d8,"");
          local_e0 = 0;
          String::parse_latin1((String *)&local_e0,"Warning!");
          TTR((StrRange *)&local_e8,(StrRange *)&local_e0);
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,"");
          local_100 = 0;
          String::parse_latin1
                    ((String *)&local_100,
                     "Each MultiplayerSynchronizer can have no more than 64 watched properties.");
          TTR(local_f0,(String *)&local_100);
          EditorNode::show_warning(pSVar3,local_f0);
          CowData<char32_t>::_unref(local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          TreeItem::set_range(iVar10,(double)iVar6);
          NodePath::~NodePath((NodePath *)local_108);
          goto LAB_001014eb;
        }
      }
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"property_set_replication_mode",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_90,iVar5);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pVVar12 = (Variant *)&local_60;
      iVar10 = (int)&local_c8;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      EditorUndoRedoManager::add_do_methodp(pOVar8,pSVar2,(Variant **)&local_e0,iVar10);
      pVVar11 = pVVar12;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar11 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"property_set_replication_mode",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_90,iVar6);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      EditorUndoRedoManager::add_undo_methodp(pOVar8,pSVar2,(Variant **)&local_e0,iVar10);
      do {
        pVVar11 = pVVar12 + -0x18;
        pVVar12 = pVVar12 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar11] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar12 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"_update_value",false);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_90,2);
      Variant::Variant((Variant *)&local_78,iVar5);
      local_58 = (undefined1  [16])0x0;
      pVVar12 = local_48;
      local_60 = 0;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      local_b8 = (Variant *)&local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar8,(StringName *)this,(Variant **)&local_e0,iVar10);
      pVVar11 = pVVar12;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar11 != (Variant *)local_a8);
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_d8);
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      StringName::StringName((StringName *)&local_e0,"_update_value",false);
      Variant::Variant((Variant *)local_a8,(NodePath *)&local_d8);
      Variant::Variant(local_90,2);
      Variant::Variant((Variant *)&local_78,iVar6);
      local_58 = (undefined1  [16])0x0;
      local_60 = 0;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      local_b8 = (Variant *)&local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar8,(StringName *)this,(Variant **)&local_e0,iVar10);
      do {
        pVVar11 = pVVar12 + -0x18;
        pVVar12 = pVVar12 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar11] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar12 != (Variant *)local_a8);
    }
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    NodePath::~NodePath((NodePath *)&local_d8);
    EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
    NodePath::~NodePath((NodePath *)local_108);
  }
LAB_001014eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101b1d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_tree_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
ReplicationEditor::_tree_button_pressed
          (ReplicationEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_5 == 1)) {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar2 != 0) {
      TreeItem::get_metadata((int)local_58);
      Variant::operator_cast_to_NodePath((Variant *)&local_68);
      NodePath::operator=((NodePath *)(this + 0xa48),(NodePath *)&local_68);
      NodePath::~NodePath((NodePath *)&local_68);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar1 = *(undefined8 *)(this + 0xa18);
      local_a0 = 0;
      local_68 = "\"";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_a0);
      TreeItem::get_text((int)local_90);
      local_80 = 0;
      local_68 = "\n\"";
      local_60 = 2;
      String::parse_latin1((StrRange *)&local_80);
      local_68 = "";
      local_78 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_70 = 0;
      local_68 = "Delete Property?";
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_70);
      TTR((Variant *)&local_68,(StrRange *)&local_70);
      String::operator+(local_88,(String *)&local_68);
      String::operator+(local_98,local_88);
      String::operator+(local_a8,local_98);
      AcceptDialog::set_text(uVar1,local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      local_58[0] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xa18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_dialog_closed(bool) */

void __thiscall ReplicationEditor::_dialog_closed(ReplicationEditor *this,bool param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  int iVar8;
  Variant *pVVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  NodePath local_c8 [8];
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = NodePath::is_empty();
  if ((cVar3 == '\0') && (*(long *)(this + 0xa40) != 0)) {
    if (param_1) {
      NodePath::NodePath(local_c8,(NodePath *)(this + 0xa48));
      iVar5 = SceneReplicationConfig::property_get_index(*(NodePath **)(this + 0xa40));
      bVar4 = (bool)SceneReplicationConfig::property_get_spawn(*(NodePath **)(this + 0xa40));
      iVar6 = SceneReplicationConfig::property_get_replication_mode(*(NodePath **)(this + 0xa40));
      pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Remove Property");
      TTR((NodePath *)&local_b0,(String *)&local_c0);
      EditorUndoRedoManager::create_action(pOVar7,(NodePath *)&local_b0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      NodePath::NodePath((NodePath *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"remove_property",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_88,(NodePath *)&local_b0);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      iVar8 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar2,(Variant **)&local_b8,iVar8);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_b0);
      NodePath::NodePath((NodePath *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"add_property",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_88,(NodePath *)&local_b0);
      Variant::Variant((Variant *)local_70,iVar5);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)&local_b8,iVar8);
      pVVar10 = (Variant *)local_40;
      pVVar9 = pVVar10;
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_b0);
      NodePath::NodePath((NodePath *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"property_set_spawn",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_88,(NodePath *)&local_b0);
      Variant::Variant((Variant *)local_70,bVar4);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)&local_b8,iVar8);
      pVVar9 = pVVar10;
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_b0);
      NodePath::NodePath((NodePath *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"property_set_replication_mode",false);
      pSVar2 = *(StringName **)(this + 0xa40);
      Variant::Variant((Variant *)local_88,(NodePath *)&local_b0);
      Variant::Variant((Variant *)local_70,iVar6);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)&local_b8,iVar8);
      do {
        pVVar9 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      NodePath::~NodePath((NodePath *)&local_b0);
      StringName::StringName((StringName *)&local_b0,"_update_config",false);
      local_88[0] = 0;
      local_88[1] = 0;
      local_80 = (undefined1  [16])0x0;
      EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,(Variant **)&local_b0,0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"_update_config",false);
      local_88[0] = 0;
      local_88[1] = 0;
      local_80 = (undefined1  [16])0x0;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,(Variant **)&local_b0,0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
      NodePath::~NodePath(local_c8);
    }
    local_b0 = 0;
    NodePath::operator=((NodePath *)(this + 0xa48),(NodePath *)&local_b0);
    NodePath::~NodePath((NodePath *)&local_b0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_add_property(NodePath const&, bool, SceneReplicationConfig::ReplicationMode)
    */

void __thiscall
ReplicationEditor::_add_property
          (ReplicationEditor *this,undefined8 param_2,undefined8 param_3,int param_4)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  NodePath *pNVar5;
  NodePath *pNVar6;
  int iVar7;
  wchar32 wVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  StrRange *local_148;
  StrRange *local_140;
  String *local_138;
  StrRange *local_130;
  String *local_128;
  NodePath local_e8 [8];
  Object *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  CowData<char32_t> local_a0 [8];
  String local_98 [8];
  undefined8 local_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  uint local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  NodePath::operator_cast_to_String(local_e8);
  uVar4 = Tree::create_item(*(TreeItem **)(this + 0xa50),0);
  iVar7 = (int)uVar4;
  TreeItem::set_selectable(iVar7,false);
  TreeItem::set_selectable(iVar7,true);
  TreeItem::set_selectable(iVar7,true);
  TreeItem::set_selectable(iVar7,true);
  local_68 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_e8);
  TreeItem::set_text(uVar4,0,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Variant::Variant((Variant *)local_58,local_e8);
  TreeItem::set_metadata(iVar7,(Variant *)0x0);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0xa10) == 0) {
    _get_class_icon((Node *)&local_e0);
  }
  else {
    MultiplayerSynchronizer::get_root_path();
    cVar2 = NodePath::is_empty();
    if (cVar2 == '\0') {
      pNVar5 = *(NodePath **)(this + 0xa10);
      MultiplayerSynchronizer::get_root_path();
      pNVar5 = (NodePath *)Node::get_node(pNVar5);
      NodePath::~NodePath((NodePath *)&local_68);
      NodePath::~NodePath((NodePath *)&local_70);
      _get_class_icon((Node *)&local_e0);
      if (pNVar5 != (NodePath *)0x0) {
        wVar8 = (wchar32)local_e8;
        String::find_char(wVar8,0x3a);
        String::substr((int)local_98,wVar8);
        String::substr((int)&local_90,wVar8);
        NodePath::NodePath((NodePath *)&local_68,local_98);
        pNVar6 = (NodePath *)Node::get_node_or_null(pNVar5);
        NodePath::~NodePath((NodePath *)&local_68);
        local_68 = (Object *)&_LC47;
        if (pNVar6 == (NodePath *)0x0) {
          pNVar6 = pNVar5;
        }
        local_78 = 0;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_78);
        Node::get_name();
        if (local_88 == 0) {
          local_80 = 0;
        }
        else {
          local_80 = 0;
          if (*(char **)(local_88 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_88 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_80,*(char **)(local_88 + 8));
          }
        }
        local_130 = (StrRange *)&local_80;
        local_138 = local_98;
        local_140 = (StrRange *)&local_78;
        local_148 = (StrRange *)&local_90;
        String::operator+((String *)&local_70,(String *)local_130);
        String::operator+((String *)&local_68,(String *)&local_70);
        TreeItem::set_text(uVar4,0,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
        _get_class_icon((Node *)&local_68);
        pOVar1 = local_e0;
        pOVar9 = local_e0;
        if (local_68 == local_e0) {
LAB_00102c74:
          if (((pOVar9 != (Object *)0x0) &&
              (cVar2 = RefCounted::unreference(), pOVar9 = local_68, cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
        }
        else {
          local_e0 = local_68;
          if (local_68 != (Object *)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              local_e0 = (Object *)0x0;
            }
            pOVar9 = local_68;
            if (pOVar1 != (Object *)0x0) {
              cVar2 = RefCounted::unreference();
              pOVar9 = local_68;
              goto joined_r0x00102e03;
            }
            goto LAB_00102c74;
          }
          if (pOVar1 != (Object *)0x0) {
            cVar2 = RefCounted::unreference();
            pOVar9 = local_68;
joined_r0x00102e03:
            local_68 = pOVar9;
            if ((cVar2 != '\0') &&
               (cVar2 = predelete_handler(pOVar1), pOVar9 = local_68, cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
              pOVar9 = local_68;
            }
            goto LAB_00102c74;
          }
        }
        local_80 = local_80 & 0xffffffffffffff00;
        StringName::StringName((StringName *)&local_68,local_148,false);
        Object::get((StringName *)local_58,(bool *)pNVar6);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (local_80._0_1_ == (StrRange)0x0) {
LAB_00102d18:
          TreeItem::set_icon(iVar7,(Ref *)0x0);
        }
        else {
          if (0x18 < local_58[0]) {
            if (local_58[0] == 0x1c) {
              Variant::operator_cast_to_Array((Variant *)&local_68);
              cVar2 = Array::is_typed();
              if (cVar2 == '\0') {
                Array::~Array((Array *)&local_68);
              }
              else {
                iVar3 = Array::get_typed_builtin();
                Array::~Array((Array *)&local_68);
                if (iVar3 - 0x17U < 2) goto LAB_00102e69;
              }
            }
            goto LAB_00102d18;
          }
          if (local_58[0] < 0x17) goto LAB_00102d18;
LAB_00102e69:
          if ((_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)::
               {lambda()#1}::operator()()::sname == '\0') &&
             (iVar3 = __cxa_guard_acquire(&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                                           ::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
            _scs_create((char *)&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                          ::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                                 ::{lambda()#1}::operator()()::sname);
          }
          Control::get_theme_icon((StringName *)&local_68,(StringName *)this);
          TreeItem::set_icon(iVar7,(Ref *)0x0);
          if (((local_68 != (Object *)0x0) &&
              (cVar2 = RefCounted::unreference(), pOVar9 = local_68, cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"");
          local_78 = 0;
          String::parse_latin1((String *)local_140,"Property of this type not supported.");
          TTR((CowData<char32_t> *)&local_68,local_140);
          TreeItem::set_tooltip_text(iVar7,(String *)0x0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
        goto LAB_0010259e;
      }
    }
    else {
      NodePath::~NodePath((NodePath *)&local_70);
      _get_class_icon((Node *)&local_e0);
    }
  }
  TreeItem::set_icon(iVar7,(Ref *)0x0);
LAB_0010259e:
  local_128 = (String *)&local_88;
  local_130 = (StrRange *)&local_80;
  local_138 = local_98;
  local_140 = (StrRange *)&local_78;
  local_148 = (StrRange *)&local_90;
  local_70 = 0;
  local_68 = (Object *)&_LC14;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  if ((_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)::{lambda()#2}::
       operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                                   ::{lambda()#2}::operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                         ::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)::
                  {lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_add_property(NodePath_const&,bool,SceneReplicationConfig::ReplicationMode)
                         ::{lambda()#2}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_68,(StringName *)this);
  TreeItem::add_button(iVar7,(Ref *)0x3,(int)(CowData<char32_t> *)&local_68,true,(String *)0x0);
  if (((local_68 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar9 = local_68, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  TreeItem::set_text_alignment(uVar4,1,1);
  TreeItem::set_cell_mode(uVar4,1,1);
  TreeItem::set_checked(iVar7,true);
  TreeItem::set_editable(iVar7,true);
  TreeItem::set_text_alignment(uVar4,2,1);
  TreeItem::set_cell_mode(uVar4,2,2);
  TreeItem::set_range_config(iVar7,0.0,_LC52,_LC51,true);
  local_68 = (Object *)0x107080;
  local_78 = 0;
  local_60 = 0x10;
  String::parse_latin1(local_140);
  local_68 = (Object *)0x107091;
  local_80 = 0;
  local_60 = 9;
  String::parse_latin1(local_130);
  TTR((StrRange *)&local_70,local_130);
  local_68 = (Object *)&_LC56;
  local_90 = 0;
  local_60 = 1;
  String::parse_latin1(local_148);
  local_68 = (Object *)0x107080;
  local_a8 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_a8);
  local_68 = (Object *)0x10709d;
  local_b0 = 0;
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_b0);
  TTR(local_a0,(StrRange *)&local_b0);
  local_68 = (Object *)&_LC56;
  local_c0 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_c0);
  local_68 = (Object *)0x107080;
  local_d0 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
  local_d8 = 0;
  local_68 = (Object *)0x1070a4;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_d8);
  TTR(local_c8,(StrRange *)&local_d8);
  String::operator+(local_b8,local_c8);
  String::operator+(local_138,local_b8);
  String::operator+(local_128,local_138);
  String::operator+((String *)&local_68,local_128);
  TreeItem::set_text(uVar4,2,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
  TreeItem::set_range(iVar7,(double)param_4);
  TreeItem::set_editable(iVar7,true);
  if (((local_e0 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar9 = local_e0, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_e0), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ReplicationEditor::_update_config() */

void __thiscall ReplicationEditor::_update_config(ReplicationEditor *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  NodePath::operator=((NodePath *)(this + 0xa48),(NodePath *)&local_38);
  NodePath::~NodePath((NodePath *)&local_38);
  Tree::clear();
  Tree::create_item(*(TreeItem **)(this + 0xa50),0);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
  if (*(long *)(this + 0xa40) != 0) {
    SceneReplicationConfig::get_properties();
    iVar2 = Array::size();
    if (iVar2 != 0) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
    }
    iVar2 = 0;
    while( true ) {
      iVar4 = Array::size();
      if (iVar4 <= iVar2) break;
      iVar2 = iVar2 + 1;
      Array::operator[]((int)local_40);
      Variant::operator_cast_to_NodePath((Variant *)&local_38);
      uVar3 = SceneReplicationConfig::property_get_replication_mode(*(NodePath **)(this + 0xa40));
      uVar1 = SceneReplicationConfig::property_get_spawn(*(NodePath **)(this + 0xa40));
      _add_property(this,(NodePath *)&local_38,uVar1,uVar3);
      NodePath::~NodePath((NodePath *)&local_38);
    }
    Array::~Array(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::edit(MultiplayerSynchronizer*) */

void __thiscall ReplicationEditor::edit(ReplicationEditor *this,MultiplayerSynchronizer *param_1)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(MultiplayerSynchronizer **)(this + 0xa10) == param_1) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00103423;
  }
  *(MultiplayerSynchronizer **)(this + 0xa10) = param_1;
  if (param_1 == (MultiplayerSynchronizer *)0x0) {
    if ((*(long *)(this + 0xa40) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
      pOVar2 = *(Object **)(this + 0xa40);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    *(undefined8 *)(this + 0xa40) = 0;
  }
  else {
    MultiplayerSynchronizer::get_replication_config();
    pOVar2 = *(Object **)(this + 0xa40);
    pOVar4 = pOVar2;
    if (local_28 != pOVar2) {
      *(Object **)(this + 0xa40) = local_28;
      pOVar4 = local_28;
      if (local_28 == (Object *)0x0) {
        if (pOVar2 == (Object *)0x0) goto LAB_00103310;
        cVar3 = RefCounted::unreference();
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(this + 0xa40) = 0;
        }
        if (pOVar2 == (Object *)0x0) goto LAB_001032fb;
        cVar3 = RefCounted::unreference();
      }
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
LAB_001032fb:
    if (((pOVar4 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_28), cVar3 != '\0')) {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
LAB_00103310:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_config(this);
    return;
  }
LAB_00103423:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_add_sync_property(String) */

void __thiscall ReplicationEditor::_add_sync_property(ReplicationEditor *this,String *param_2)

{
  NodePath *pNVar1;
  StringName *pSVar2;
  Resource *pRVar3;
  String *pSVar4;
  char cVar5;
  Object *pOVar6;
  Resource *this_00;
  Object *pOVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  Variant **local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  CowData<char32_t> local_b0 [8];
  undefined8 local_a8;
  long local_a0;
  Resource *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MultiplayerSynchronizer::get_replication_config();
  pOVar6 = *(Object **)(this + 0xa40);
  pOVar7 = pOVar6;
  if (local_98 == (Resource *)pOVar6) {
LAB_001034c3:
    if (((pOVar7 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler((Object *)local_98), cVar5 != '\0')) {
      (**(code **)(*(long *)local_98 + 0x140))(local_98);
      Memory::free_static(local_98,false);
    }
    pNVar1 = *(NodePath **)(this + 0xa40);
    if (pNVar1 != (NodePath *)0x0) {
      NodePath::NodePath((NodePath *)&local_98,param_2);
      cVar5 = SceneReplicationConfig::has_property(pNVar1);
      NodePath::~NodePath((NodePath *)&local_98);
      pSVar4 = EditorNode::singleton;
      if (cVar5 != '\0') {
        local_a0 = 0;
        local_98 = (Resource *)&_LC14;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_a0);
        local_98 = (Resource *)0x106f74;
        local_a8 = 0;
        local_90 = 8;
        String::parse_latin1((StrRange *)&local_a8);
        TTR(local_b0,(StrRange *)&local_a8);
        local_98 = (Resource *)&_LC14;
        local_b8 = 0;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_b8);
        local_98 = (Resource *)0x1091d0;
        local_c0 = 0;
        local_90 = 0x27;
        String::parse_latin1((StrRange *)&local_c0);
        TTR((NodePath *)&local_98,(StrRange *)&local_c0);
        EditorNode::show_warning(pSVar4,(NodePath *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref(local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00103df1;
      }
    }
  }
  else {
    *(Resource **)(this + 0xa40) = local_98;
    if (local_98 != (Resource *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xa40) = 0;
      }
      pOVar7 = (Object *)local_98;
      if (pOVar6 != (Object *)0x0) goto LAB_001034ae;
      goto LAB_001034c3;
    }
    if (pOVar6 != (Object *)0x0) {
LAB_001034ae:
      cVar5 = RefCounted::unreference();
      pOVar7 = (Object *)local_98;
      if ((cVar5 != '\0') &&
         (cVar5 = predelete_handler(pOVar6), pOVar7 = (Object *)local_98, cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar7 = (Object *)local_98;
      }
      goto LAB_001034c3;
    }
  }
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_98 = (Resource *)&_LC14;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = (Resource *)0x1070aa;
  local_a8 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((NodePath *)&local_98,(StrRange *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar6,(NodePath *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (*(long *)(this + 0xa40) == 0) {
    this_00 = (Resource *)operator_new(0x268,"");
    Resource::Resource(this_00);
    *(code **)this_00 = RefCounted::init_ref;
    this_00[0x260] = (Resource)0x0;
    *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    local_98 = (Resource *)0x0;
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
      local_98 = *(Resource **)(this + 0xa40);
      if (local_98 != (Resource *)0x0) {
        *(undefined8 *)(this + 0xa40) = 0;
        Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
        local_98 = *(Resource **)(this + 0xa40);
        goto LAB_00103b7f;
      }
      uVar8 = *(undefined8 *)(this + 0xa10);
LAB_00103d50:
      local_98 = (Resource *)0x0;
    }
    else {
      Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
      pRVar3 = *(Resource **)(this + 0xa40);
      if (this_00 != pRVar3) {
        *(Resource **)(this + 0xa40) = this_00;
        local_98 = pRVar3;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          *(undefined8 *)(this + 0xa40) = 0;
          Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
        }
        else {
          Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
        }
      }
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
      local_98 = *(Resource **)(this + 0xa40);
LAB_00103b7f:
      uVar8 = *(undefined8 *)(this + 0xa10);
      if ((local_98 == (Resource *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0'))
      goto LAB_00103d50;
    }
    MultiplayerSynchronizer::set_replication_config(uVar8,(NodePath *)&local_98);
    Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
    pOVar7 = *(Object **)(this + 0xa40);
    if ((pOVar7 == (Object *)0x0) ||
       (local_98 = (Resource *)pOVar7, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_98 = (Resource *)0x0;
      pOVar7 = (Object *)0x0;
    }
    StringName::StringName((StringName *)&local_a0,"set_replication_config",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,pOVar7);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar2,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    local_d8 = local_88;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    Ref<SceneReplicationConfig>::unref((Ref<SceneReplicationConfig> *)&local_98);
    StringName::StringName((StringName *)&local_98,"set_replication_config",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_78,(Object *)0x0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar2,(Variant **)&local_98,(int)local_d8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (Resource *)0x0)) {
      StringName::unref();
    }
    _update_config(this);
  }
  local_d8 = local_88;
  local_98 = (Resource *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_2);
  }
  StringName::StringName((StringName *)&local_a0,"add_property",false);
  pSVar2 = *(StringName **)(this + 0xa40);
  Variant::Variant((Variant *)local_78,(NodePath *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar2,(Variant **)&local_a0,(int)local_d8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  local_98 = (Resource *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_2);
  }
  StringName::StringName((StringName *)&local_a0,"remove_property",false);
  pSVar2 = *(StringName **)(this + 0xa40);
  Variant::Variant((Variant *)local_78,(NodePath *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar2,(Variant **)&local_a0,(int)local_d8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  StringName::StringName((StringName *)&local_98,"_update_config",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Resource *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_config",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Resource *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
    return;
  }
LAB_00103df1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_pick_node_property_selected(String) */

void ReplicationEditor::_pick_node_property_selected(ReplicationEditor *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_70;
  NodePath local_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50 = 1;
  local_58 = &_LC47;
  String::parse_latin1((StrRange *)&local_60);
  NodePath::operator_cast_to_String(local_68);
  String::operator+((String *)&local_58,(String *)local_68);
  String::operator+((String *)&local_70,(String *)&local_58);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (undefined *)0x0;
  plVar1 = (long *)(local_70 + -0x10);
  if (local_70 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00103ef0;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_58 = (undefined *)local_70;
    }
  }
LAB_00103ef0:
  _add_sync_property(param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ReplicationEditor::_drop_data_fw(Vector2 const&, Variant const&, Control*) */

void ReplicationEditor::_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  NodePath *pNVar1;
  String *pSVar2;
  char cVar3;
  long lVar4;
  Variant *this;
  Object *pOVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  Variant local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pSVar2 = EditorNode::singleton;
  pNVar1 = *(NodePath **)(param_1 + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pNVar1 == (NodePath *)0x0) {
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Warning!";
    local_78 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    TTR((CowData<char32_t> *)local_80,(StrRange *)&local_78);
    local_68 = "";
    local_88 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = "Select a replicator node in order to pick a property to add to it.";
    local_90 = 0;
    local_60 = 0x42;
    String::parse_latin1((StrRange *)&local_90);
    TTR((CowData<char32_t> *)&local_68,(StrRange *)&local_90);
    EditorNode::show_warning(pSVar2,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    MultiplayerSynchronizer::get_root_path();
    lVar4 = Node::get_node(pNVar1);
    NodePath::~NodePath((NodePath *)&local_68);
    pSVar2 = EditorNode::singleton;
    if (lVar4 == 0) {
      local_68 = (char *)0x0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Warning!");
      TTR((CowData<char32_t> *)&local_78,(String *)&local_70);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1
                ((String *)&local_90,
                 "Not possible to add a new property to synchronize without a root.");
      TTR((CowData<char32_t> *)local_80,(String *)&local_90);
      EditorNode::show_warning(pSVar2,(CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      Variant::operator_cast_to_Dictionary((Variant *)&local_88);
      Variant::Variant((Variant *)local_58,"type");
      cVar3 = Dictionary::has((Variant *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 != '\0') {
        Variant::Variant((Variant *)local_58,"type");
        Dictionary::operator[]((Variant *)&local_88);
        Variant::operator_cast_to_String(local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar3 = String::operator!=((String *)local_80,"obj_property");
        if (cVar3 == '\0') {
          Variant::Variant((Variant *)local_58,"object");
          this = (Variant *)Dictionary::operator[]((Variant *)&local_88);
          pOVar5 = Variant::operator_cast_to_Object_(this);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (pOVar5 != (Object *)0x0) {
            lVar6 = __dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
            if (lVar6 != 0) {
              Node::get_path_to((Node *)&local_68,SUB81(lVar4,0));
              NodePath::operator_cast_to_String((NodePath *)&local_78);
              NodePath::~NodePath((NodePath *)&local_68);
              Variant::Variant((Variant *)local_58,"property");
              Dictionary::operator[]((Variant *)&local_88);
              Variant::operator_cast_to_String((Variant *)&local_70);
              operator+((char *)&local_68,(String *)&_LC47);
              String::operator+=((String *)&local_78,(String *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_68 = (char *)0x0;
              if (local_78 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
              }
              _add_sync_property((ReplicationEditor *)param_1,(NodePath *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
              Dictionary::~Dictionary((Dictionary *)&local_88);
              goto LAB_00104019;
            }
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      }
      Dictionary::~Dictionary((Dictionary *)&local_88);
    }
  }
LAB_00104019:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_add_pressed() */

void __thiscall ReplicationEditor::_add_pressed(ReplicationEditor *this)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  char *local_a0;
  NodePath local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar1 = EditorNode::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa10) == 0) {
    local_58 = (char *)0x0;
    String::parse_latin1((String *)&local_58,"");
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Warning!");
    TTR((CowData<char32_t> *)&local_68,(String *)&local_60);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"Please select a MultiplayerSynchronizer first.");
    TTR(local_70,(String *)&local_80);
    EditorNode::show_warning(pSVar1,local_70);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    goto LAB_00104623;
  }
  MultiplayerSynchronizer::get_root_path();
  cVar2 = NodePath::is_empty();
  NodePath::~NodePath((NodePath *)&local_58);
  pSVar1 = EditorNode::singleton;
  if (cVar2 != '\0') {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Warning!";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(StrRange *)&local_68);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "The MultiplayerSynchronizer needs a root path.";
    local_80 = 0;
    local_50 = 0x2e;
    String::parse_latin1((StrRange *)&local_80);
    TTR((NodePath *)&local_58,(StrRange *)&local_80);
    EditorNode::show_warning(pSVar1,(NodePath *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    goto LAB_00104623;
  }
  LineEdit::get_text();
  pSVar1 = EditorNode::singleton;
  if ((local_a0 == (char *)0x0) || (*(uint *)(local_a0 + -8) < 2)) {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Warning!";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(StrRange *)&local_68);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "Property/path must not be empty.";
    local_80 = 0;
    local_50 = 0x20;
    String::parse_latin1((StrRange *)&local_80);
    TTR((NodePath *)&local_58,(StrRange *)&local_80);
    EditorNode::show_warning(pSVar1,(NodePath *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    iVar3 = String::find_char((wchar32)(CowData<char32_t> *)&local_a0,0x3a);
    pSVar4 = (String *)&_LC81;
    if (iVar3 == -1) {
LAB_001048ff:
      operator+((char *)&local_58,pSVar4);
      if (local_a0 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_a0 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else if (iVar3 == 0) {
      pSVar4 = (String *)&_LC26;
      goto LAB_001048ff;
    }
    NodePath::NodePath(local_98,(String *)&local_a0);
    cVar2 = NodePath::is_empty();
    pSVar1 = EditorNode::singleton;
    if (cVar2 == '\0') {
      NodePath::operator_cast_to_String((NodePath *)&local_58);
      _add_sync_property(this,(NodePath *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      NodePath::~NodePath(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      goto LAB_00104623;
    }
    local_58 = (char *)0x0;
    String::parse_latin1((String *)&local_58,"");
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Warning!");
    TTR((CowData<char32_t> *)&local_68,(String *)&local_60);
    local_78 = 0;
    if (local_a0 != (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_a0);
    }
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Invalid property path: \'%s\'");
    TTR((CowData<char32_t> *)&local_80,(String *)&local_90);
    vformat<String>(local_70,(CowData<char32_t> *)&local_80,(CowData<char32_t> *)&local_78);
    EditorNode::show_warning(pSVar1,local_70);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    NodePath::~NodePath(local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00104623:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_np_text_submitted(String const&) */

void ReplicationEditor::_np_text_submitted(String *param_1)

{
  _add_pressed((ReplicationEditor *)param_1);
  return;
}



/* ReplicationEditor::_bind_methods() */

void ReplicationEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_a8 [2];
  long *local_98;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  undefined8 local_70;
  char **local_68;
  undefined1 auStack_60 [32];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_a8,(char ***)"_update_config",0);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar4 = create_method_bind<ReplicationEditor>(_update_config);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar5 = local_98 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_98[-1];
      local_98 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  local_78 = "value";
  auStack_60._8_8_ = &local_78;
  auStack_60._0_8_ = &pcStack_80;
  local_88 = "property";
  pcStack_80 = "column";
  local_70 = 0;
  local_68 = &local_88;
  D_METHODP((char *)local_a8,(char ***)"_update_value",(uint)&local_68);
  auStack_60._0_16_ = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar4 = create_method_bind<ReplicationEditor,NodePath_const&,int,int>(_update_value);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar5 = local_98 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_98[-1];
      local_98 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_pick_node_select_recursive(TreeItem*, String const&, Vector<Node*>&) [clone
   .part.0] */

void __thiscall
ReplicationEditor::_pick_node_select_recursive
          (ReplicationEditor *this,TreeItem *param_1,String *param_2,Vector *param_3)

{
  char *__s;
  int iVar1;
  undefined8 uVar2;
  TreeItem *pTVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  String *local_98;
  Variant local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::get_metadata((int)local_58);
  Variant::operator_cast_to_NodePath(local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar2 = Node::get_node((NodePath *)this);
  if ((*(long *)param_2 != 0) && (1 < *(uint *)(*(long *)param_2 + -8))) {
    Node::get_name();
    if (local_78 == 0) {
      local_70 = 0;
    }
    else {
      __s = *(char **)(local_78 + 8);
      local_70 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_78 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
        }
      }
      else {
        local_60 = strlen(__s);
        local_68 = __s;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    local_98 = (String *)&local_70;
    iVar1 = String::findn(local_98,(int)param_2);
    if (iVar1 == -1) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      if (*(long *)(param_3 + 8) == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
      }
      iVar1 = CowData<Node*>::resize<false>((CowData<Node*> *)(param_3 + 8),lVar5);
      if (iVar1 == 0) {
        if (*(long *)(param_3 + 8) == 0) {
          lVar4 = -1;
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_3 + 8) + -8);
          lVar4 = lVar5 + -1;
          if (-1 < lVar4) {
            CowData<Node*>::_copy_on_write((CowData<Node*> *)(param_3 + 8));
            *(undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 8) = uVar2;
            goto LAB_00104deb;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
    }
  }
LAB_00104deb:
  pTVar3 = (TreeItem *)TreeItem::get_first_child();
  while (pTVar3 != (TreeItem *)0x0) {
    _pick_node_select_recursive(this,pTVar3,param_2,param_3);
    pTVar3 = (TreeItem *)TreeItem::get_next();
  }
  NodePath::~NodePath((NodePath *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ReplicationEditor::_pick_node_select_recursive(TreeItem*, String const&, Vector<Node*>&) */

void __thiscall
ReplicationEditor::_pick_node_select_recursive
          (ReplicationEditor *this,TreeItem *param_1,String *param_2,Vector *param_3)

{
  if (param_1 != (TreeItem *)0x0) {
    _pick_node_select_recursive(this,param_1,param_2,param_3);
    return;
  }
  return;
}



/* ReplicationEditor::_pick_node_filter_text_changed(String const&) */

void ReplicationEditor::_pick_node_filter_text_changed(String *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  TreeItem *pTVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_88 [8];
  long local_80;
  long local_78;
  long local_70;
  Vector local_68 [8];
  undefined8 *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar7 = (TreeItem *)Tree::get_root();
  local_60 = (undefined8 *)0x0;
  LineEdit::get_text();
  if (pTVar7 != (TreeItem *)0x0) {
    _pick_node_select_recursive((ReplicationEditor *)param_1,pTVar7,local_88,local_68);
  }
  lVar9 = 0;
  if (local_60 == (undefined8 *)0x0) {
    uVar10 = false;
LAB_001052d5:
    SceneTreeEditor::set_selected(*(Node **)(*(long *)(param_1 + 0xa60) + 0xdc0),(bool)uVar10);
    CowData<char32_t>::_unref(local_88);
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      plVar1 = local_60 + -2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (undefined8 *)0x0;
        Memory::free_static(puVar5 + -2,false);
      }
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  do {
    if ((long)local_60[-1] <= lVar9) {
      if (local_60 != (undefined8 *)0x0) {
        lVar9 = local_60[-1];
        if (lVar9 < 1) goto LAB_0010534e;
        uVar10 = (undefined1)*local_60;
        goto LAB_001052d5;
      }
      break;
    }
    uVar10 = (undefined1)local_60[lVar9];
    Node::get_name();
    if (local_80 == 0) {
LAB_0010526f:
      local_78 = 0;
    }
    else {
      pcVar2 = *(char **)(local_80 + 8);
      local_78 = 0;
      if (pcVar2 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(local_80 + 0x10) + -0x10);
        if (*(long *)(local_80 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010526f;
            LOCK();
            lVar8 = *plVar1;
            bVar11 = lVar3 == lVar8;
            if (bVar11) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar8 != -1) {
            local_78 = *(long *)(local_80 + 0x10);
            goto LAB_00105165;
          }
        }
        goto LAB_0010526f;
      }
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_78);
    }
LAB_00105165:
    String::to_lower();
    String::to_lower();
    cVar6 = String::begins_with((String *)&local_70);
    pcVar2 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
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
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (cVar6 != '\0') goto LAB_001052d5;
    lVar9 = lVar9 + 1;
  } while (local_60 != (undefined8 *)0x0);
  lVar9 = 0;
LAB_0010534e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ReplicationEditor::ReplicationEditor() */

void __thiscall ReplicationEditor::ReplicationEditor(ReplicationEditor *this)

{
  code *pcVar1;
  long *plVar2;
  String *pSVar3;
  undefined8 uVar4;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  SceneTreeDialog *this_02;
  CallableCustom *pCVar5;
  PropertySelector *this_03;
  undefined8 *puVar6;
  BoxContainer *this_04;
  Button *pBVar7;
  VSeparator *pVVar8;
  Label *pLVar9;
  LineEdit *this_05;
  Tree *this_06;
  undefined8 *puVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  size_t __n;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  Tree local_118 [16];
  long local_108 [2];
  long local_f8 [2];
  char *local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (ReplicationEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00110fd8;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  Control::set_v_size_flags(this,3);
  fVar15 = (float)EditorScale::get_scale();
  local_d8 = CONCAT44(fVar15 * _LC103._4_4_,fVar15 * (float)_LC103);
  Control::set_custom_minimum_size((Vector2 *)this);
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  lVar14 = *(long *)this_00;
  *(ConfirmationDialog **)(this + 0xa18) = this_00;
  pcVar1 = *(code **)(lVar14 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor,bool>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void_bool *)"&ReplicationEditor::_dialog_closed");
  bVar11 = SUB81((Callable *)local_f8,0);
  Callable::bind<bool>(bVar11);
  StringName::StringName((StringName *)local_108,"canceled",false);
  (*pcVar1)(this_00,(StringName *)local_108,(Callable *)local_f8,0);
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  Callable::~Callable((Callable *)&local_e8);
  plVar2 = *(long **)(this + 0xa18);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor,bool>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void_bool *)"&ReplicationEditor::_dialog_closed");
  Callable::bind<bool>(bVar11);
  (*pcVar1)(plVar2,SceneStringNames::singleton + 0x268,(Callable *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  Callable::~Callable((Callable *)&local_e8);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  *(undefined ***)this_01 = &PTR__initialize_classv_00110c60;
  this_01[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_01);
  Control::set_v_size_flags(this_01,3);
  Node::add_child(this,this_01,0,0);
  this_02 = (SceneTreeDialog *)operator_new(0xdf0,"");
  SceneTreeDialog::SceneTreeDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(SceneTreeDialog **)(this + 0xa60) = this_02;
  Node::add_child(this,this_02,0,0);
  local_e8 = "";
  local_f8[0] = 0;
  pSVar3 = *(String **)(this + 0xa60);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Pick a node to synchronize:";
  local_108[0] = 0;
  local_e0 = 0x1b;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Window::set_title(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  plVar2 = *(long **)(this + 0xa60);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_001113e0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar4;
  *(code **)(pCVar5 + 0x38) = _pick_node_selected;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined **)(pCVar5 + 0x20) = &_LC14;
  *(ReplicationEditor **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "ReplicationEditor::_pick_node_selected";
  Callable::Callable((Callable *)&local_e8,pCVar5);
  StringName::StringName((StringName *)local_f8,"selected",false);
  (*pcVar1)(plVar2,(Callable *)local_f8,(ReplicationEditor *)&local_e8,0);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_e8);
  plVar2 = *(long **)(*(long *)(this + 0xa60) + 0xdc8);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor,String_const&>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void_String_ptr *)"&ReplicationEditor::_pick_node_filter_text_changed");
  (*pcVar1)(plVar2,SceneStringNames::singleton + 0x270,(ReplicationEditor *)&local_e8,0);
  Callable::~Callable((Callable *)&local_e8);
  this_03 = (PropertySelector *)operator_new(0xe18,"");
  PropertySelector::PropertySelector(this_03);
  postinitialize_handler((Object *)this_03);
  *(PropertySelector **)(this + 0xa58) = this_03;
  Node::add_child(this,this_03,0,0);
  local_50 = 0x26;
  local_d8 = _LC74;
  uStack_d0 = _UNK_00111a88;
  local_58 = _LC118;
  local_c8 = __LC111;
  uStack_c0 = _UNK_00111a98;
  local_130 = (undefined8 *)0x0;
  local_b8 = __LC112;
  uStack_b0 = _UNK_00111aa8;
  local_a8 = __LC113;
  uStack_a0 = _UNK_00111ab8;
  local_98 = __LC114;
  uStack_90 = _UNK_00111ac8;
  local_88 = __LC115;
  uStack_80 = _UNK_00111ad8;
  local_78 = __LC116;
  uStack_70 = _UNK_00111ae8;
  local_68 = __LC117;
  uStack_60 = _UNK_00111af8;
  puVar6 = (undefined8 *)Memory::alloc_static(0x110,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  else {
    local_130 = puVar6 + 2;
    lVar14 = 0;
    *puVar6 = 1;
    puVar6[1] = 0x23;
    do {
      if (local_130 == (undefined8 *)0x0) {
        lVar13 = 0;
LAB_00106783:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar14,lVar13,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar13 = local_130[-1];
        if (lVar13 <= lVar14) goto LAB_00106783;
        puVar6 = local_130;
        if (1 < (ulong)local_130[-2]) {
          if (local_130 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar13 = local_130[-1];
          uVar12 = 0x10;
          __n = lVar13 * 4;
          if (__n != 0) {
            uVar12 = __n - 1 | __n - 1 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = (uVar12 | uVar12 >> 0x20) + 0x11;
          }
          puVar10 = (undefined8 *)Memory::alloc_static(uVar12,false);
          if (puVar10 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            *puVar10 = 1;
            puVar10[1] = lVar13;
            puVar6 = (undefined8 *)memcpy(puVar10 + 2,local_130,__n);
            LOCK();
            plVar2 = local_130 + -2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static(local_130 + -2,false);
            }
          }
        }
        local_130 = puVar6;
        *(undefined4 *)((long)local_130 + lVar14 * 4) =
             *(undefined4 *)((long)&local_d8 + lVar14 * 4);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x23);
  }
  PropertySelector::set_type_filter(*(Vector **)(this + 0xa58));
  plVar2 = *(long **)(this + 0xa58);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar5 = &PTR_hash_00111500;
  *(undefined8 *)(pCVar5 + 0x30) = uVar4;
  *(code **)(pCVar5 + 0x38) = _pick_node_property_selected;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined **)(pCVar5 + 0x20) = &_LC14;
  *(ReplicationEditor **)(pCVar5 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "ReplicationEditor::_pick_node_property_selected";
  Callable::Callable((Callable *)&local_e8,pCVar5);
  StringName::StringName((StringName *)local_f8,"selected",false);
  (*pcVar1)(plVar2,(Callable *)local_f8,(ReplicationEditor *)&local_e8,0);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_e8);
  this_04 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_04,false);
  *(undefined ***)this_04 = &PTR__initialize_classv_001108e8;
  this_04[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_04);
  Node::add_child(this_01,this_04,0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_e8 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_e8);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa20) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  plVar2 = *(long **)(this + 0xa20);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void *)"&ReplicationEditor::_pick_new_property");
  (*pcVar1)(plVar2,SceneStringNames::singleton + 0x238,(ReplicationEditor *)&local_e8,0);
  Callable::~Callable((Callable *)&local_e8);
  local_e8 = "";
  local_f8[0] = 0;
  pSVar3 = *(String **)(this + 0xa20);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Add property to sync...";
  local_108[0] = 0;
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa20),0,0);
  pVVar8 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar8);
  postinitialize_handler((Object *)pVVar8);
  fVar15 = (float)EditorScale::get_scale();
  local_d8 = (ulong)(uint)(fVar15 * __LC122);
  Control::set_custom_minimum_size((Vector2 *)pVVar8);
  Node::add_child(this_04,pVVar8,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_e8 = "";
  local_f8[0] = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Path:";
  local_108[0] = 0;
  local_e0 = 5;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Label::Label(pLVar9,(String *)&local_e8);
  postinitialize_handler((Object *)pLVar9);
  Node::add_child(this_04,pLVar9,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  this_05 = (LineEdit *)operator_new(0xbb0,"");
  local_e8 = (char *)0x0;
  LineEdit::LineEdit(this_05,(String *)&local_e8);
  postinitialize_handler((Object *)this_05);
  *(LineEdit **)(this + 0xa30) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  uVar4 = *(undefined8 *)(this + 0xa30);
  local_f8[0] = 0;
  local_e8 = ":property";
  local_e0 = 9;
  String::parse_latin1((StrRange *)local_f8);
  LineEdit::set_placeholder(uVar4,(Callable *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa30),3);
  plVar2 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor,String_const&>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void_String_ptr *)"&ReplicationEditor::_np_text_submitted");
  (*pcVar1)(plVar2,SceneStringNames::singleton + 0x278,(ReplicationEditor *)&local_e8,0);
  Callable::~Callable((Callable *)&local_e8);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa30),0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_e8 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_e8);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa28) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  plVar2 = *(long **)(this + 0xa28);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void *)"&ReplicationEditor::_add_pressed");
  (*pcVar1)(plVar2,SceneStringNames::singleton + 0x238,(ReplicationEditor *)&local_e8,0);
  Callable::~Callable((Callable *)&local_e8);
  local_e8 = "";
  local_f8[0] = 0;
  pSVar3 = *(String **)(this + 0xa28);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Add from path";
  local_108[0] = 0;
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa28),0);
  pVVar8 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar8);
  postinitialize_handler((Object *)pVVar8);
  fVar15 = (float)EditorScale::get_scale();
  local_d8 = (ulong)(uint)(fVar15 * __LC122);
  Control::set_custom_minimum_size((Vector2 *)pVVar8);
  Node::add_child(this_04,pVVar8,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_e8 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_e8);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa70) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa70));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa70),0));
  local_e8 = "";
  local_f8[0] = 0;
  pSVar3 = *(String **)(this + 0xa70);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Pin replication editor";
  local_108[0] = 0;
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa70),0);
  this_06 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_06);
  postinitialize_handler((Object *)this_06);
  *(Tree **)(this + 0xa50) = this_06;
  Tree::set_hide_root(SUB81(this_06,0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa50));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa50),0));
  local_e8 = "";
  local_f8[0] = 0;
  uVar4 = *(undefined8 *)(this + 0xa50);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Properties";
  local_108[0] = 0;
  local_e0 = 10;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Tree::set_column_title((int)uVar4,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa50),false);
  local_e8 = "";
  local_f8[0] = 0;
  uVar4 = *(undefined8 *)(this + 0xa50);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Spawn";
  local_108[0] = 0;
  local_e0 = 5;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Tree::set_column_title((int)uVar4,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa50),true);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xa50),1);
  local_e8 = "";
  local_f8[0] = 0;
  uVar4 = *(undefined8 *)(this + 0xa50);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = "Replicate";
  local_108[0] = 0;
  local_e0 = 9;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Tree::set_column_title((int)uVar4,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xa50),2);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa50),true);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa50),true);
  Tree::create_item(*(TreeItem **)(this + 0xa50),0);
  plVar2 = *(long **)(this + 0xa50);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC14;
  *(ReplicationEditor **)(pCVar5 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_00111620;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar4;
  *(code **)(pCVar5 + 0x38) = _tree_button_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "ReplicationEditor::_tree_button_pressed";
  Callable::Callable((Callable *)&local_e8,pCVar5);
  StringName::StringName((StringName *)local_f8,"button_clicked",false);
  (*pcVar1)(plVar2,(Callable *)local_f8,(ReplicationEditor *)&local_e8,0);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_e8);
  plVar2 = *(long **)(this + 0xa50);
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ReplicationEditor>
            ((ReplicationEditor *)&local_e8,(char *)this,
             (_func_void *)"&ReplicationEditor::_tree_item_edited");
  StringName::StringName((StringName *)local_f8,"item_edited",false);
  (*pcVar1)(plVar2,(Callable *)local_f8,(ReplicationEditor *)&local_e8,0);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_e8);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa50),3);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa50),0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_e8 = (char *)0x0;
  Label::Label(pLVar9,(String *)&local_e8);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xa38) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = "";
  local_f8[0] = 0;
  pSVar3 = *(String **)(this + 0xa38);
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_f8);
  local_e8 = 
  "Add properties using the options above, or\ndrag them from the inspector and drop them here.";
  local_108[0] = 0;
  local_e0 = 0x5b;
  String::parse_latin1((StrRange *)local_108);
  TTR((ReplicationEditor *)&local_e8,(StringName *)local_108);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa38),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xa38),1);
  Node::add_child(*(undefined8 *)(this + 0xa50),*(undefined8 *)(this + 0xa38),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa38),0xf,0,0);
  plVar2 = *(long **)(this + 0xa50);
  pcVar1 = *(code **)(*plVar2 + 0x318);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC14;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_00111740;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(ReplicationEditor **)(pCVar5 + 0x28) = this;
  *(undefined8 *)(pCVar5 + 0x30) = uVar4;
  *(code **)(pCVar5 + 0x38) = _drop_data_fw;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "ReplicationEditor::_drop_data_fw";
  Callable::Callable((Callable *)&local_e8,pCVar5);
  Callable::bind<Tree*>((Tree *)local_f8);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC14;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_001116b0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(ReplicationEditor **)(pCVar5 + 0x28) = this;
  *(undefined8 *)(pCVar5 + 0x30) = uVar4;
  *(code **)(pCVar5 + 0x38) = _can_drop_data_fw;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "ReplicationEditor::_can_drop_data_fw";
  Callable::Callable((Callable *)local_108,pCVar5);
  Callable::bind<Tree*>(local_118);
  local_128 = 0;
  local_120 = 0;
  (*pcVar1)(plVar2,(Callable *)&local_128,local_118,(Callable *)local_f8);
  Callable::~Callable((Callable *)&local_128);
  Callable::~Callable((Callable *)local_118);
  Callable::~Callable((Callable *)local_108);
  Callable::~Callable((Callable *)local_f8);
  Callable::~Callable((Callable *)&local_e8);
  if (local_130 != (undefined8 *)0x0) {
    LOCK();
    plVar2 = local_130 + -2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static(local_130 + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this)

{
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this)

{
  return;
}



/* MethodBindT<NodePath const&, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<NodePath_const&,int,int>::get_argument_meta
          (MethodBindT<NodePath_const&,int,int> *this,int param_1)

{
  return -(param_1 - 1U < 2) & 3;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ReplicationEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
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



/* ReplicationEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ReplicationEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ReplicationEditor::_property_can_revertv(StringName const&) const */

undefined8 ReplicationEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,int,int>::~MethodBindT(MethodBindT<NodePath_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111830;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,int,int>::~MethodBindT(MethodBindT<NodePath_const&,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111830;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<NodePath_const&,int,int>::_gen_argument_type
          (MethodBindT<NodePath_const&,int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (-(param_1 == 0) & 0x14U) + 2;
  }
  return cVar1;
}



/* CowData<Node*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Node*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ReplicationEditor::_notification(int) [clone .part.0] [clone .cold] */

void ReplicationEditor::_notification(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ReplicationEditor::_bind_methods() [clone .cold] */

void ReplicationEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ReplicationEditor::ReplicationEditor() [clone .cold] */

void __thiscall ReplicationEditor::ReplicationEditor(ReplicationEditor *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this)

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
      goto LAB_0010732d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010732d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010732d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this)

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
      goto LAB_0010742d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010742d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010742d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010752d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010752d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010752d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010762d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010762d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010762d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010772d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010772d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010772d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this)

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
      goto LAB_0010782d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010782d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010782d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this)

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
      goto LAB_0010792d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010792d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010792d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ReplicationEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::get_object
          (CallableCustomMethodPointer<ReplicationEditor,void> *this)

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
      goto LAB_00107a2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107a2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107a2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ReplicationEditor::_validate_propertyv(PropertyInfo&) const */

void ReplicationEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00115010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00115010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00115010 == Control::_validate_property) {
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
    if ((code *)PTR__set_00115018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00115018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ReplicationEditor::_setv(StringName const&, Variant const&) */

undefined8 ReplicationEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00115018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107df8) */
/* ReplicationEditor::_getv(StringName const&, Variant&) const */

undefined8 ReplicationEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107e68) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107ed8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x1119,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
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
    uVar1 = (uint)CONCAT71(0x1119,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1119,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ReplicationEditor::is_class_ptr(void*) const */

ulong ReplicationEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1118,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1119,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1119,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1119,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1119,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1119,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001080b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001080b0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108110;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108110:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108170;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108170:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001081e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001081e0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* ReplicationEditor::~ReplicationEditor() */

void __thiscall ReplicationEditor::~ReplicationEditor(ReplicationEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00110fd8;
  NodePath::~NodePath((NodePath *)(this + 0xa68));
  NodePath::~NodePath((NodePath *)(this + 0xa48));
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108290;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108290:
  Control::~Control((Control *)this);
  return;
}



/* ReplicationEditor::~ReplicationEditor() */

void __thiscall ReplicationEditor::~ReplicationEditor(ReplicationEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00110fd8;
  NodePath::~NodePath((NodePath *)(this + 0xa68));
  NodePath::~NodePath((NodePath *)(this + 0xa48));
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined8 **)this = &EditorNode::singleton;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108360;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108360:
  Control::~Control((Control *)this);
  operator_delete(this,0xa78);
  return;
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



/* ReplicationEditor::_get_class_namev() const */

undefined8 * ReplicationEditor::_get_class_namev(void)

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
LAB_00108463:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108463;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ReplicationEditor");
      goto LAB_001084ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ReplicationEditor");
LAB_001084ce:
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
LAB_00108553:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108553;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001085be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001085be:
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
LAB_00108643:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108643;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001086ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001086ae:
  return &_get_class_namev()::_class_name_static;
}



/* ReplicationEditor::get_class() const */

void ReplicationEditor::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x00108aa0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00115028 != Container::_notification) {
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
  if ((code *)PTR__notification_00115028 == Container::_notification) {
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



/* ReplicationEditor::_notificationv(int, bool) */

void __thiscall ReplicationEditor::_notificationv(ReplicationEditor *this,int param_1,bool param_2)

{
  char cVar1;
  
  if (!param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
    if (param_1 != 10) {
      if (param_1 == 10000) {
        cVar1 = EditorThemeManager::is_generated_theme_outdated();
        if (cVar1 != '\0') goto LAB_00108b99;
      }
      return;
    }
LAB_00108b99:
    _notification((int)this);
    return;
  }
  if (param_1 != 10) {
    if (param_1 != 10000) goto LAB_00108b51;
    cVar1 = EditorThemeManager::is_generated_theme_outdated();
    if (cVar1 == '\0') goto LAB_00108b51;
  }
  _notification((int)this);
LAB_00108b51:
  BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
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



/* Callable create_custom_callable_function_pointer<ReplicationEditor, bool>(ReplicationEditor*,
   char const*, void (ReplicationEditor::*)(bool)) */

ReplicationEditor *
create_custom_callable_function_pointer<ReplicationEditor,bool>
          (ReplicationEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC14;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111350;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Variant **)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ReplicationEditor, String
   const&>(ReplicationEditor*, char const*, void (ReplicationEditor::*)(String const&)) */

ReplicationEditor *
create_custom_callable_function_pointer<ReplicationEditor,String_const&>
          (ReplicationEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC14;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111470;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ReplicationEditor>(ReplicationEditor*, char
   const*, void (ReplicationEditor::*)()) */

ReplicationEditor *
create_custom_callable_function_pointer<ReplicationEditor>
          (ReplicationEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC14;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111590;
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



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<SceneReplicationConfig>::unref() */

void __thiscall Ref<SceneReplicationConfig>::unref(Ref<SceneReplicationConfig> *this)

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



/* WARNING: Removing unreachable block (ram,0x00109698) */
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
        if (pvVar5 == (void *)0x0) goto LAB_001099c4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001099c4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::call
          (CallableCustomMethodPointer<ReplicationEditor,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00109c0f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109c0f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109cd1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109c0f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109cd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x16);
            uVar4 = _LC68;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_NodePath((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            NodePath::~NodePath((NodePath *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00109dae;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00109dae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a015;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a015;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0010a09f:
          uVar4 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0010a09f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC71;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010a015;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_0010a015:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_98 >> 8;
      local_98 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_98 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a394;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a394;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0010a41c:
          uVar4 = _LC69;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0010a41c;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC71;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar12 = (bool)(*pcVar11)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar6);
        Variant::Variant((Variant *)local_78,bVar12);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010a394;
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
  local_a0 = 0;
  local_98 = "\', can\'t call method.";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  uitos((ulong)local_b0);
  operator+((char *)local_a8,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_98,(String *)local_a8);
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_0010a394:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010a8d0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010a8d0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC72;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC73;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC74;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010a858:
          uVar3 = _LC75;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010a858;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010a9cb;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a8d0:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a9cb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
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
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ab89;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ab89;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC76;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ab38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010ac4b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ab89:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ac4b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC77;
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
        goto LAB_0010ad1e;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010ad1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ReplicationEditor, void, String>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::call
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC77;
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
        goto LAB_0010af8e;
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
  _err_print_error(&_LC67,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010af8e:
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
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010b1bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010b1bf:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b273;
  }
  cVar6 = String::operator==((String *)param_1,"CanvasItem");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b273;
    }
    cVar6 = String::operator==((String *)param_1,"Node");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
        lVar5 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_0010b273;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==((String *)param_1,"Object");
        return uVar8;
      }
      goto LAB_0010b458;
    }
  }
LAB_0010b273:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b458:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010b4df;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010b4df:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b593;
  }
  cVar6 = String::operator==((String *)param_1,"Container");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010b593;
    }
    cVar6 = String::operator==((String *)param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b6a5;
    }
  }
LAB_0010b593:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b6a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
              if ((code *)PTR__bind_methods_00115040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00115030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00115038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
              if ((code *)PTR__bind_methods_00115040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00115030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00115038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC84;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC84;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c49c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c49c:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c701:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00115048 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c9d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c9d1:
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
  if ((code *)PTR__get_property_list_00115050 != CanvasItem::_get_property_list) {
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010cca1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cca1:
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010cf51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cf51:
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010d201;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d201:
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



/* ReplicationEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ReplicationEditor::_get_property_listv(ReplicationEditor *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ReplicationEditor";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ReplicationEditor";
  local_98 = 0;
  local_70 = 0x11;
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010d4b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d4b1:
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
  StringName::StringName((StringName *)&local_78,"ReplicationEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
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
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010d761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d761:
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



/* ReplicationEditor::is_class(String const&) const */

undefined8 __thiscall ReplicationEditor::is_class(ReplicationEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010d90f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010d90f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010d9c3;
  }
  cVar6 = String::operator==((String *)param_1,"ReplicationEditor");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d9c3;
    }
    cVar6 = String::operator==((String *)param_1,"VBoxContainer");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
        lVar5 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_0010d9c3;
      }
      cVar6 = String::operator==((String *)param_1,"BoxContainer");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Container::is_class((Container *)this,param_1);
          return uVar8;
        }
        goto LAB_0010dbb8;
      }
    }
  }
LAB_0010d9c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dbb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010dc2f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010dc2f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010dce3;
  }
  cVar6 = String::operator==((String *)param_1,"HBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010dce3;
    }
    cVar6 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010ddee;
    }
  }
LAB_0010dce3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ddee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010de6f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010de6f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010df23;
  }
  cVar6 = String::operator==((String *)param_1,"VBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010df23;
    }
    cVar6 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010e02e;
    }
  }
LAB_0010df23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e02e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ReplicationEditor>(void (ReplicationEditor::*)()) */

MethodBind * create_method_bind<ReplicationEditor>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_001117d0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ReplicationEditor";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ReplicationEditor, NodePath const&, int, int>(void
   (ReplicationEditor::*)(NodePath const&, int, int)) */

MethodBind *
create_method_bind<ReplicationEditor,NodePath_const&,int,int>
          (_func_void_NodePath_ptr_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_NodePath_ptr_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111830;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "ReplicationEditor";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ReplicationEditor::_initialize_classv() */

void ReplicationEditor::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_00115040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00115030 !=
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
          String::parse_latin1((String *)&local_70,"Container");
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
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_58 = "Container";
        local_68 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "BoxContainer";
        local_70 = 0;
        local_50 = 0xc;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00115038 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "ReplicationEditor";
    local_70 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Node*>::_realloc(long) */

undefined8 __thiscall CowData<Node*>::_realloc(CowData<Node*> *this,long param_1)

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
/* Error CowData<Node*>::resize<false>(long) */

undefined8 __thiscall CowData<Node*>::resize<false>(CowData<Node*> *this,long param_1)

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
LAB_0010eca0:
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
  if (lVar8 == 0) goto LAB_0010eca0;
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
        goto LAB_0010ebb1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010ebb1:
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



/* CowData<Variant::Type>::_realloc(long) */

undefined8 __thiscall CowData<Variant::Type>::_realloc(CowData<Variant::Type> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0010ee98) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindT<NodePath const&, int, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<NodePath_const&,int,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f331;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0010f331:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&,int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f521;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010f3a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8),**(undefined4 **)((long)param_3 + 0x10));
    return;
  }
LAB_0010f521:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC67,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f640;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010f640:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f9bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010f9bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fb7f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010fb7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&, int, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<NodePath_const&,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC67,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fd12;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar7 + -3 + (int)lVar9;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_58[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],2);
      uVar4 = _LC73;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_58[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar4 = _LC74;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],0x16);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_NodePath((Variant *)&local_68);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_68,iVar8,iVar7)
      ;
      NodePath::~NodePath((NodePath *)&local_68);
      goto LAB_0010fd12;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010fd12:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010ff57;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110055:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110055;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010ff57:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<NodePath const&, int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<NodePath_const&,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001101d6;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001102fd:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001102fd;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001101d6:
  local_8c = 1;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* ReplicationEditor::_pick_node_filter_text_changed(String const&) */

void ReplicationEditor::_GLOBAL__sub_I__pick_node_filter_text_changed(void)

{
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ReplicationEditor::~ReplicationEditor() */

void __thiscall ReplicationEditor::~ReplicationEditor(ReplicationEditor *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<NodePath_const&,int,int>::~MethodBindT(MethodBindT<NodePath_const&,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, NodePath>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,NodePath>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,NodePath> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<ReplicationEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ReplicationEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ReplicationEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ReplicationEditor,void,Vector2_const&,Variant_const&,Control*>
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


// This is taking way too long.