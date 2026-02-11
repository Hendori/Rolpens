
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



/* MultiNodeEdit::_property_get_revert(StringName const&, Variant&) const */

undefined8 __thiscall
MultiNodeEdit::_property_get_revert(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  NodePath *pNVar2;
  long *plVar3;
  undefined8 uVar4;
  StringName *pSVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar2 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar2 != (NodePath *)0x0) {
    lVar6 = *(long *)(this + 0x188);
    lVar1 = lVar6 + (ulong)*(uint *)(this + 0x180) * 8;
    for (; lVar1 != lVar6; lVar6 = lVar6 + 8) {
      plVar3 = (long *)Node::get_node_or_null(pNVar2);
      if (plVar3 != (long *)0x0) {
        if (plVar3[1] == 0) {
          pSVar5 = (StringName *)plVar3[0x23];
          if (pSVar5 == (StringName *)0x0) {
            pSVar5 = (StringName *)(**(code **)(*plVar3 + 0x40))(plVar3);
          }
        }
        else {
          pSVar5 = (StringName *)(plVar3[1] + 0x20);
        }
        ClassDB::class_get_default_property_value((StringName *)local_48,pSVar5,(bool *)param_1);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_48[0];
        uVar4 = 1;
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
        goto LAB_00100138;
      }
    }
  }
  uVar4 = 0;
LAB_00100138:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* MultiNodeEdit::add_node(NodePath const&) */

void __thiscall MultiNodeEdit::add_node(MultiNodeEdit *this,NodePath *param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  NodePath aNStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NodePath::NodePath(aNStack_28,param_1);
  uVar1 = *(uint *)(this + 0x180);
  if (uVar1 == *(uint *)(this + 0x184)) {
    uVar4 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar4 = 1;
    }
    *(int *)(this + 0x184) = (int)uVar4;
    lVar3 = Memory::realloc_static(*(void **)(this + 0x188),uVar4 * 8,false);
    *(long *)(this + 0x188) = lVar3;
    if (lVar3 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0x180);
  }
  else {
    lVar3 = *(long *)(this + 0x188);
  }
  *(uint *)(this + 0x180) = uVar1 + 1;
  NodePath::NodePath((NodePath *)(lVar3 + (ulong)uVar1 * 8),aNStack_28);
  NodePath::~NodePath(aNStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::get_node_count() const */

undefined4 __thiscall MultiNodeEdit::get_node_count(MultiNodeEdit *this)

{
  return *(undefined4 *)(this + 0x180);
}



/* MultiNodeEdit::get_node(int) const */

NodePath * MultiNodeEdit::get_node(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  NodePath *this;
  
  this = (NodePath *)CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(uint *)(in_RSI + 0x180);
  if ((-1 < (int)in_EDX) && ((int)in_EDX < (int)uVar1)) {
    if (in_EDX < uVar1) {
      NodePath::NodePath(this,(NodePath *)(*(long *)(in_RSI + 0x188) + (long)(int)in_EDX * 8));
      return this;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)(int)in_EDX,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_node","editor/multi_node_edit.cpp",0xe7,(long)(int)in_EDX,(long)(int)uVar1,
             "p_index","get_node_count()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* MultiNodeEdit::get_edited_class_name() const */

StringName * MultiNodeEdit::get_edited_class_name(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  NodePath *pNVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long in_RSI;
  StringName *pSVar8;
  StringName *in_RDI;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar4 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar4 == (NodePath *)0x0) {
    if ((const::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
    StringName::StringName(in_RDI,(StringName *)&const::{lambda()#1}::operator()()::sname);
  }
  else {
    lVar6 = *(long *)(in_RSI + 0x188);
    local_58 = 0;
    lVar1 = lVar6 + (ulong)*(uint *)(in_RSI + 0x180) * 8;
    if (lVar1 != lVar6) {
      do {
        plVar5 = (long *)Node::get_node_or_null(pNVar4);
        if (plVar5 != (long *)0x0) {
          if (plVar5[1] == 0) {
            pSVar8 = (StringName *)plVar5[0x23];
            if (pSVar8 == (StringName *)0x0) {
              pSVar8 = (StringName *)(**(code **)(*plVar5 + 0x40))(plVar5);
            }
          }
          else {
            pSVar8 = (StringName *)(plVar5[1] + 0x20);
          }
          StringName::operator=((StringName *)&local_58,pSVar8);
          break;
        }
        lVar6 = lVar6 + 8;
      } while (lVar1 != lVar6);
      if (local_58 != 0) {
joined_r0x0010043e:
        if ((const::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&const::{lambda()#3}::operator()()::sname), iVar3 != 0)) {
          _scs_create((char *)&const::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#3}::operator()()::sname);
        }
        if ((const::{lambda()#3}::operator()()::sname != local_58) && (local_58 != 0)) {
          lVar6 = *(long *)(in_RSI + 0x188);
          lVar1 = lVar6 + (ulong)*(uint *)(in_RSI + 0x180) * 8;
          if (lVar1 != lVar6) {
            do {
              plVar5 = (long *)Node::get_node_or_null(pNVar4);
              if (plVar5 != (long *)0x0) {
                if (plVar5[1] == 0) {
                  pSVar8 = (StringName *)plVar5[0x23];
                  if (pSVar8 == (StringName *)0x0) {
                    pSVar8 = (StringName *)(**(code **)(*plVar5 + 0x40))(plVar5);
                  }
                }
                else {
                  pSVar8 = (StringName *)(plVar5[1] + 0x20);
                }
                StringName::StringName((StringName *)&local_50,pSVar8);
                if ((local_58 != local_50) &&
                   (cVar2 = ClassDB::is_parent_class
                                      ((StringName *)&local_50,(StringName *)&local_58),
                   cVar2 == '\0')) goto code_r0x001004cd;
                if ((StringName::configured != '\0') && (local_50 != 0)) {
                  StringName::unref();
                }
              }
              lVar6 = lVar6 + 8;
              if (lVar1 == lVar6) break;
            } while( true );
          }
          *(long *)in_RDI = local_58;
          goto LAB_001005eb;
        }
        pSVar8 = (StringName *)&const::{lambda()#4}::operator()()::sname;
        if (const::{lambda()#4}::operator()()::sname != '\0') goto LAB_001006b2;
        puVar7 = &const::{lambda()#4}::operator()()::sname;
        pSVar8 = (StringName *)&const::{lambda()#4}::operator()()::sname;
        iVar3 = __cxa_guard_acquire(&const::{lambda()#4}::operator()()::sname);
        goto joined_r0x001006ff;
      }
    }
    pSVar8 = (StringName *)&const::{lambda()#2}::operator()()::sname;
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      puVar7 = &const::{lambda()#2}::operator()()::sname;
      pSVar8 = (StringName *)&const::{lambda()#2}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
joined_r0x001006ff:
      if (iVar3 != 0) {
        _scs_create((char *)pSVar8,true);
        __cxa_atexit(StringName::~StringName,pSVar8,&__dso_handle);
        __cxa_guard_release(puVar7);
      }
    }
LAB_001006b2:
    StringName::StringName(in_RDI,pSVar8);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
LAB_001005eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
code_r0x001004cd:
  ClassDB::get_parent_class((StringName *)&local_48);
  if (local_58 == local_48) {
    if (StringName::configured == '\0') goto joined_r0x0010043e;
    if (local_48 == 0) goto LAB_0010050e;
    StringName::unref();
  }
  else {
    StringName::unref();
    local_58 = local_48;
  }
  if (StringName::configured == '\0') goto joined_r0x0010043e;
LAB_0010050e:
  if (local_50 != 0) {
    StringName::unref();
  }
  goto joined_r0x0010043e;
}



/* MultiNodeEdit::_property_can_revert(StringName const&) const */

undefined4 __thiscall MultiNodeEdit::_property_can_revert(MultiNodeEdit *this,StringName *param_1)

{
  long lVar1;
  undefined4 uVar2;
  NodePath *pNVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar3 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar3 != (NodePath *)0x0) {
    get_edited_class_name();
    uVar2 = ClassDB::has_property((StringName *)&local_38,param_1,false);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    if ((char)uVar2 != '\0') {
      lVar5 = *(long *)(this + 0x188);
      lVar1 = lVar5 + (ulong)*(uint *)(this + 0x180) * 8;
      for (; lVar1 != lVar5; lVar5 = lVar5 + 8) {
        lVar4 = Node::get_node_or_null(pNVar3);
        if (lVar4 != 0) goto LAB_00100860;
      }
    }
  }
  uVar2 = 0;
LAB_00100860:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::MultiNodeEdit() */

void __thiscall MultiNodeEdit::MultiNodeEdit(MultiNodeEdit *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106b28;
  *(undefined8 *)(this + 0x188) = 0;
  return;
}



/* MultiNodeEdit::_get_editor_name() const */

void MultiNodeEdit::_get_editor_name(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_edited_class_name();
  local_58 = "";
  local_68 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "%s (%d Selected)";
  local_70 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  vformat<StringName,int>();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_set_impl(StringName const&, Variant const&, String const&) */

undefined8 __thiscall
MultiNodeEdit::_set_impl(MultiNodeEdit *this,StringName *param_1,Variant *param_2,String *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *__s;
  char cVar3;
  NodePath *pNVar4;
  Object *pOVar5;
  StringName *pSVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_e8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  long local_b0;
  char *local_a8;
  size_t local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar4 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar4 == (NodePath *)0x0) {
    uVar7 = 0;
    goto LAB_00100ea1;
  }
  lVar2 = *(long *)param_1;
  if (lVar2 == 0) {
    local_d0 = (char *)0x0;
  }
  else {
    __s = *(char **)(lVar2 + 8);
    local_d0 = (char *)0x0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(lVar2 + 0x10));
    }
    else {
      local_a0 = strlen(__s);
      local_a8 = __s;
      String::parse_latin1((StrRange *)&local_d0);
    }
  }
  cVar3 = String::operator==((String *)&local_d0,"scripts");
  if (cVar3 == '\0') {
    cVar3 = String::begins_with((char *)&local_d0);
    if (cVar3 != '\0') {
      String::replace_first((char *)&local_a8,(char *)&local_d0);
      if (local_d0 != local_a8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        local_d0 = local_a8;
        local_a8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
  }
  else {
    local_a0 = 6;
    local_a8 = "script";
    String::parse_latin1((StrRange *)&local_d0);
  }
  if (*(int *)param_2 == 0x16) {
    local_a8 = (char *)0x0;
    Variant::Variant((Variant *)local_58,(NodePath *)&local_a8);
    cVar3 = Variant::operator!=(param_2,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath((NodePath *)&local_a8);
    if (cVar3 == '\0') goto LAB_00100b2a;
    Variant::operator_cast_to_NodePath((Variant *)&local_a8);
    local_e8 = Node::get_node(pNVar4);
    NodePath::~NodePath((NodePath *)&local_a8);
  }
  else {
LAB_00100b2a:
    local_e8 = 0;
  }
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  uVar1 = *(undefined4 *)(this + 0x180);
  local_b0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d0);
  local_a8 = "";
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = "Set %s on %d nodes";
  local_c8 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  TTR(local_b8,(String *)&local_c8);
  vformat<String,int>((CowData<char32_t> *)&local_a8,local_b8,(CowData<char32_t> *)&local_b0,uVar1);
  EditorUndoRedoManager::create_action(pOVar5,(CowData<char32_t> *)&local_a8,1,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  lVar8 = *(long *)(this + 0x188);
  lVar2 = lVar8 + (ulong)*(uint *)(this + 0x180) * 8;
  for (; lVar2 != lVar8; lVar8 = lVar8 + 8) {
    pSVar6 = (StringName *)Node::get_node_or_null(pNVar4);
    if (pSVar6 != (StringName *)0x0) {
      if (*(int *)param_2 == 0x16) {
        local_b0 = 0;
        if (local_e8 != 0) {
          Node::get_path_to((Node *)&local_a8,SUB81(pSVar6,0));
          NodePath::operator=((NodePath *)&local_b0,(NodePath *)&local_a8);
          NodePath::~NodePath((NodePath *)&local_a8);
        }
        Variant::Variant((Variant *)local_58,(NodePath *)&local_b0);
        StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
        EditorUndoRedoManager::add_do_property(pOVar5,pSVar6,(Variant *)&local_a8);
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        NodePath::~NodePath((NodePath *)&local_b0);
      }
      else {
        local_98 = 0;
        local_90 = (undefined1  [16])0x0;
        if ((*(long *)param_3 == 0) || (*(uint *)(*(long *)param_3 + -8) < 2)) {
          Variant::operator=((Variant *)&local_98,param_2);
        }
        else {
          StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
          Object::get((StringName *)local_78,(bool *)pSVar6);
          fieldwise_assign((Variant *)local_58,(Variant *)local_78,(String *)param_2);
          if (Variant::needs_deinit[(int)local_98] != '\0') {
            Variant::_clear_internal();
          }
          local_98 = CONCAT44(local_98._4_4_,local_58[0]);
          local_90._8_8_ = uStack_48;
          local_90._0_8_ = local_50;
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
            StringName::unref();
          }
        }
        StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
        EditorUndoRedoManager::add_do_property(pOVar5,pSVar6,(Variant *)&local_a8);
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_98] != '\0') {
          Variant::_clear_internal();
        }
      }
      StringName::StringName((StringName *)&local_b0,(String *)&local_d0,false);
      Object::get((StringName *)local_58,(bool *)pSVar6);
      StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
      EditorUndoRedoManager::add_undo_property(pOVar5,pSVar6,(Variant *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  uVar7 = 1;
LAB_00100ea1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_set(StringName const&, Variant const&) */

ulong __thiscall MultiNodeEdit::_set(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  uVar3 = _set_impl(this,param_1,param_2,(String *)&local_50);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::set_property_field(StringName const&, Variant const&, String const&) */

void __thiscall
MultiNodeEdit::set_property_field
          (MultiNodeEdit *this,StringName *param_1,Variant *param_2,String *param_3)

{
  _set_impl(this,param_1,param_2,param_3);
  return;
}



/* MultiNodeEdit::_get(StringName const&, Variant&) const */

char __thiscall MultiNodeEdit::_get(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  char cVar2;
  NodePath *pNVar3;
  bool *pbVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char local_71;
  char *local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar3 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar3 == (NodePath *)0x0) {
    local_71 = '\0';
  }
  else {
    lVar1 = *(long *)param_1;
    if (lVar1 == 0) {
      local_70 = (char *)0x0;
    }
    else {
      __s = *(char **)(lVar1 + 8);
      local_70 = (char *)0x0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
      }
      else {
        local_60 = strlen(__s);
        local_68 = __s;
        String::parse_latin1((StrRange *)&local_70);
      }
    }
    cVar2 = String::operator==((String *)&local_70,"scripts");
    if (cVar2 == '\0') {
      cVar2 = String::begins_with((char *)&local_70);
      if (cVar2 != '\0') {
        String::replace_first((char *)&local_68,(char *)&local_70);
        if (local_70 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_70 = local_68;
          local_68 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
    else {
      local_60 = 6;
      local_68 = "script";
      String::parse_latin1((StrRange *)&local_70);
    }
    lVar5 = *(long *)(this + 0x188);
    lVar1 = lVar5 + (ulong)*(uint *)(this + 0x180) * 8;
    for (; lVar1 != lVar5; lVar5 = lVar5 + 8) {
      pbVar4 = (bool *)Node::get_node_or_null(pNVar3);
      if (pbVar4 != (bool *)0x0) {
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        Object::get((StringName *)local_58,pbVar4);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        bVar6 = StringName::configured != '\0';
        *(undefined4 *)param_2 = local_58[0];
        *(undefined8 *)(param_2 + 8) = local_50;
        *(undefined8 *)(param_2 + 0x10) = uStack_48;
        if ((bVar6) && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (local_71 != '\0') goto LAB_001013c3;
      }
    }
    local_71 = '\0';
LAB_001013c3:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_71;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall MultiNodeEdit::_get_property_list(MultiNodeEdit *this,List *param_1)

{
  uint uVar1;
  void *pvVar2;
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
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char cVar22;
  uint uVar23;
  NodePath *pNVar24;
  List *pLVar25;
  long lVar26;
  int *piVar27;
  undefined4 *puVar28;
  long lVar29;
  long *plVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  undefined8 *puVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  undefined8 *puVar40;
  int *piVar41;
  long in_FS_OFFSET;
  HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
  *local_180;
  undefined1 (*local_178) [16];
  StringName *local_160;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
  local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  long local_98;
  int local_90;
  long local_88;
  int local_80;
  char *local_78;
  long local_70;
  undefined1 local_68 [16];
  ulong local_58;
  long local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 2;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  pNVar24 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
  if (pNVar24 != (NodePath *)0x0) {
    lVar37 = *(long *)(this + 0x188);
    lVar29 = lVar37 + (ulong)*(uint *)(this + 0x180) * 8;
    if (lVar29 == lVar37) {
      puVar40 = (undefined8 *)0x0;
LAB_001023cb:
      local_178 = (undefined1 (*) [16])0x0;
    }
    else {
      iVar35 = 0;
      local_178 = (undefined1 (*) [16])0x0;
      do {
        while (pLVar25 = (List *)Node::get_node_or_null(pNVar24), pLVar25 != (List *)0x0) {
          local_e0 = (undefined8 *)0x0;
          Object::get_property_list
                    (pLVar25,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_e0,0));
          if ((local_e0 != (undefined8 *)0x0) && (piVar41 = (int *)*local_e0, piVar41 != (int *)0x0)
             ) {
            do {
              local_a8 = *piVar41;
              local_a0 = 0;
              if (*(long *)(piVar41 + 2) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(piVar41 + 2));
              }
              StringName::StringName((StringName *)&local_98,(StringName *)(piVar41 + 4));
              local_90 = piVar41[6];
              local_88 = 0;
              if (*(long *)(piVar41 + 8) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(piVar41 + 8));
              }
              local_80 = piVar41[10];
              cVar22 = String::operator==((String *)&local_a0,"script");
              if (cVar22 == '\0') {
                cVar22 = String::begins_with((char *)&local_a0);
                if (cVar22 != '\0') {
                  String::replace_first((char *)&local_78,(char *)&local_a0);
                  if ((char *)local_a0 != local_78) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    local_a0 = (ulong)local_78;
                    local_78 = (char *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                }
                uVar20 = local_d0._0_8_;
                if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
                  uVar1 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
                  lVar26 = *(long *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
                  uVar23 = String::hash();
                  uVar19 = CONCAT44(0,uVar1);
                  uVar21 = local_d0._8_8_;
                  uVar32 = 1;
                  if (uVar23 != 0) {
                    uVar32 = uVar23;
                  }
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar32 * lVar26;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar19;
                  lVar34 = SUB168(auVar3 * auVar11,8);
                  uVar23 = *(uint *)(local_d0._8_8_ + lVar34 * 4);
                  iVar33 = SUB164(auVar3 * auVar11,8);
                  if (uVar23 != 0) {
                    uVar38 = 0;
                    do {
                      if ((uVar32 == uVar23) &&
                         (cVar22 = String::operator==((String *)
                                                      (*(long *)(uVar20 + lVar34 * 8) + 0x10),
                                                      (String *)&local_a0), cVar22 != '\0'))
                      goto LAB_001017e0;
                      uVar38 = uVar38 + 1;
                      auVar4._8_8_ = 0;
                      auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar26;
                      auVar12._8_8_ = 0;
                      auVar12._0_8_ = uVar19;
                      lVar34 = SUB168(auVar4 * auVar12,8);
                      uVar23 = *(uint *)(uVar21 + lVar34 * 4);
                      iVar33 = SUB164(auVar4 * auVar12,8);
                    } while ((uVar23 != 0) &&
                            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar23 * lVar26,
                            auVar13._8_8_ = 0, auVar13._0_8_ = uVar19, auVar6._8_8_ = 0,
                            auVar6._0_8_ = (ulong)((uVar1 + iVar33) - SUB164(auVar5 * auVar13,8)) *
                                           lVar26, auVar14._8_8_ = 0, auVar14._0_8_ = uVar19,
                            uVar38 <= SUB164(auVar6 * auVar14,8)));
                  }
                }
                local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
                local_58 = local_58 & 0xffffffff00000000;
                local_50 = 0;
                local_48 = 6;
                local_70 = CONCAT44(local_70._4_4_,local_a8);
                local_68 = (undefined1  [16])0x0;
                if (local_a0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)&local_a0);
                }
                StringName::operator=((StringName *)(local_68 + 8),(StringName *)&local_98);
                local_58 = CONCAT44(local_58._4_4_,local_90);
                if (local_50 != local_88) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_88);
                }
                local_48 = local_80;
                if (local_68._0_8_ != local_a0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)&local_a0);
                }
                puVar28 = (undefined4 *)
                          HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
                          ::operator[](local_d8,(String *)&local_a0);
                *puVar28 = local_78._0_4_;
                puVar28[2] = (undefined4)local_70;
                if (*(long *)(puVar28 + 4) != local_68._0_8_) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 4),(CowData *)local_68);
                }
                StringName::operator=((StringName *)(puVar28 + 6),(StringName *)(local_68 + 8));
                puVar28[8] = (undefined4)local_58;
                if (*(long *)(puVar28 + 10) != local_50) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 10),(CowData *)&local_50);
                }
                uVar20 = local_d0._0_8_;
                puVar28[0xc] = local_48;
                if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
                  uVar1 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
                  lVar26 = *(long *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
                  uVar23 = String::hash();
                  uVar19 = CONCAT44(0,uVar1);
                  uVar21 = local_d0._8_8_;
                  uVar32 = 1;
                  if (uVar23 != 0) {
                    uVar32 = uVar23;
                  }
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar32 * lVar26;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar19;
                  lVar34 = SUB168(auVar7 * auVar15,8);
                  uVar23 = *(uint *)(local_d0._8_8_ + lVar34 * 4);
                  uVar38 = SUB164(auVar7 * auVar15,8);
                  if (uVar23 != 0) {
                    uVar39 = 0;
                    do {
                      if ((uVar32 == uVar23) &&
                         (cVar22 = String::operator==((String *)
                                                      (*(long *)(uVar20 + lVar34 * 8) + 0x10),
                                                      (String *)&local_a0), cVar22 != '\0')) {
                        lVar26 = *(long *)(uVar20 + (ulong)uVar38 * 8) + 0x18;
                        goto joined_r0x00102135;
                      }
                      uVar39 = uVar39 + 1;
                      auVar8._8_8_ = 0;
                      auVar8._0_8_ = (ulong)(uVar38 + 1) * lVar26;
                      auVar16._8_8_ = 0;
                      auVar16._0_8_ = uVar19;
                      lVar34 = SUB168(auVar8 * auVar16,8);
                      uVar23 = *(uint *)(uVar21 + lVar34 * 4);
                      uVar38 = SUB164(auVar8 * auVar16,8);
                    } while ((uVar23 != 0) &&
                            (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar23 * lVar26,
                            auVar17._8_8_ = 0, auVar17._0_8_ = uVar19, auVar10._8_8_ = 0,
                            auVar10._0_8_ =
                                 (ulong)((uVar1 + uVar38) - SUB164(auVar9 * auVar17,8)) * lVar26,
                            auVar18._8_8_ = 0, auVar18._0_8_ = uVar19,
                            uVar39 <= SUB164(auVar10 * auVar18,8)));
                  }
                }
                lVar26 = 0;
joined_r0x00102135:
                if (local_178 == (undefined1 (*) [16])0x0) {
                  local_178 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *(undefined4 *)local_178[1] = 0;
                  *local_178 = (undefined1  [16])0x0;
                }
                plVar30 = (long *)operator_new(0x20,DefaultAllocator::alloc);
                plVar30[1] = 0;
                lVar34 = *(long *)(*local_178 + 8);
                *plVar30 = lVar26;
                plVar30[3] = (long)local_178;
                plVar30[2] = lVar34;
                if (lVar34 != 0) {
                  *(long **)(lVar34 + 8) = plVar30;
                }
                lVar26 = *(long *)*local_178;
                *(long **)(*local_178 + 8) = plVar30;
                if (lVar26 == 0) {
                  *(long **)*local_178 = plVar30;
                }
                *(int *)local_178[1] = *(int *)local_178[1] + 1;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((StringName::configured != '\0') && (local_68._8_8_ != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
LAB_001017e0:
                local_180 = local_d8;
                lVar26 = HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
                         ::operator[](local_180,(String *)&local_a0);
                if (((((*(int *)(lVar26 + 8) == local_a8) &&
                      (cVar22 = String::operator==((String *)(lVar26 + 0x10),(String *)&local_a0),
                      cVar22 != '\0')) && (*(long *)(lVar26 + 0x18) == local_98)) &&
                    ((*(int *)(lVar26 + 0x20) == local_90 &&
                     (cVar22 = String::operator==((String *)(lVar26 + 0x28),(String *)&local_88),
                     cVar22 != '\0')))) && (*(int *)(lVar26 + 0x30) == local_80)) {
                  piVar27 = (int *)HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
                                   ::operator[](local_180,(String *)&local_a0);
                  *piVar27 = *piVar27 + 1;
                }
                lVar26 = local_88;
                if (local_88 != 0) {
                  LOCK();
                  plVar30 = (long *)(local_88 + -0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    local_88 = 0;
                    Memory::free_static((void *)(lVar26 + -0x10),false);
                  }
                }
                if ((StringName::configured != '\0') && (local_98 != 0)) {
                  StringName::unref();
                }
                uVar19 = local_a0;
                if (local_a0 != 0) {
                  LOCK();
                  plVar30 = (long *)(local_a0 - 0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    local_a0 = 0;
                    Memory::free_static((void *)(uVar19 - 0x10),false);
                  }
                }
              }
              else {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                if ((StringName::configured != '\0') && (local_98 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              }
              piVar41 = *(int **)(piVar41 + 0xc);
            } while (piVar41 != (int *)0x0);
          }
          lVar37 = lVar37 + 8;
          iVar35 = iVar35 + 1;
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_e0);
          if (lVar29 == lVar37) goto LAB_001018bd;
        }
        lVar37 = lVar37 + 8;
      } while (lVar29 != lVar37);
LAB_001018bd:
      puVar40 = (undefined8 *)local_d0._0_8_;
      if (local_178 == (undefined1 (*) [16])0x0) goto LAB_001023cb;
      for (puVar36 = *(undefined8 **)*local_178; puVar36 != (undefined8 *)0x0;
          puVar36 = (undefined8 *)puVar36[1]) {
        while (piVar41 = (int *)*puVar36, *piVar41 == iVar35) {
          if (*(long *)param_1 == 0) {
            pauVar31 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_1 = pauVar31;
            *(undefined4 *)pauVar31[1] = 0;
            *pauVar31 = (undefined1  [16])0x0;
          }
          piVar27 = (int *)operator_new(0x48,DefaultAllocator::alloc);
          piVar27[8] = 0;
          piVar27[9] = 0;
          *(undefined1 (*) [16])(piVar27 + 2) = (undefined1  [16])0x0;
          lVar29 = *(long *)(piVar41 + 4);
          *piVar27 = 0;
          piVar27[6] = 0;
          piVar27[10] = 6;
          piVar27[0x10] = 0;
          piVar27[0x11] = 0;
          *(undefined1 (*) [16])(piVar27 + 0xc) = (undefined1  [16])0x0;
          *piVar27 = piVar41[2];
          if (lVar29 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(piVar27 + 2),(CowData *)(piVar41 + 4));
          }
          StringName::operator=((StringName *)(piVar27 + 4),(StringName *)(piVar41 + 6));
          piVar27[6] = piVar41[8];
          if (*(long *)(piVar27 + 8) != *(long *)(piVar41 + 10)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(piVar27 + 8),(CowData *)(piVar41 + 10));
          }
          piVar27[10] = piVar41[0xc];
          plVar30 = *(long **)param_1;
          lVar29 = plVar30[1];
          *(long **)(piVar27 + 0x10) = plVar30;
          piVar27[0xc] = 0;
          piVar27[0xd] = 0;
          *(long *)(piVar27 + 0xe) = lVar29;
          if (lVar29 != 0) {
            *(int **)(lVar29 + 0x30) = piVar27;
          }
          plVar30[1] = (long)piVar27;
          if (*plVar30 == 0) {
            *plVar30 = (long)piVar27;
          }
          puVar36 = (undefined8 *)puVar36[1];
          *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
          if (puVar36 == (undefined8 *)0x0) goto LAB_001019f0;
        }
      }
    }
LAB_001019f0:
    local_160 = (StringName *)local_68;
    local_e0 = (undefined8 *)0x0;
    local_78 = "Script";
    local_e8 = 0;
    local_70 = 6;
    String::parse_latin1((StrRange *)&local_e8);
    local_78 = "scripts";
    local_f0 = 0;
    local_70 = 7;
    String::parse_latin1((StrRange *)&local_f0);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_f0);
    local_68._0_12_ = ZEXT412(0x11) << 0x40;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_e8);
    local_50 = CONCAT44(local_50._4_4_,6);
    if (local_68._8_4_ == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_58,false);
      if (local_68._0_8_ == CONCAT44(uStack_a4,local_a8)) {
        if ((StringName::configured != '\0') && (CONCAT44(uStack_a4,local_a8) != 0)) {
          StringName::unref();
        }
        goto LAB_00101b00;
      }
      StringName::unref();
      auVar3 = local_68;
      local_68._4_4_ = uStack_a4;
      local_68._0_4_ = local_a8;
      local_68._8_8_ = auVar3._8_8_;
      lVar29 = *(long *)param_1;
    }
    else {
      StringName::operator=(local_160,(StringName *)&local_e0);
LAB_00101b00:
      lVar29 = *(long *)param_1;
    }
    if (lVar29 == 0) {
      pauVar31 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar31;
      *(undefined4 *)pauVar31[1] = 0;
      *pauVar31 = (undefined1  [16])0x0;
    }
    puVar28 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar28 + 8) = 0;
    *(undefined1 (*) [16])(puVar28 + 2) = (undefined1  [16])0x0;
    *puVar28 = 0;
    puVar28[6] = 0;
    puVar28[10] = 6;
    *(undefined8 *)(puVar28 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar28 + 0xc) = (undefined1  [16])0x0;
    *puVar28 = local_78._0_4_;
    if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 2),(CowData *)&local_70);
    }
    StringName::operator=((StringName *)(puVar28 + 4),local_160);
    puVar28[6] = local_68._8_4_;
    if (*(ulong *)(puVar28 + 8) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 8),(CowData *)&local_58);
    }
    puVar28[10] = (undefined4)local_50;
    plVar30 = *(long **)param_1;
    lVar29 = plVar30[1];
    *(undefined8 *)(puVar28 + 0xc) = 0;
    *(long **)(puVar28 + 0x10) = plVar30;
    *(long *)(puVar28 + 0xe) = lVar29;
    if (lVar29 != 0) {
      *(undefined4 **)(lVar29 + 0x30) = puVar28;
    }
    plVar30[1] = (long)puVar28;
    if (*plVar30 == 0) {
      *plVar30 = (long)puVar28;
    }
    *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if ((StringName::configured != '\0') && (local_e0 != (undefined8 *)0x0)) {
      StringName::unref();
    }
    if (local_178 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar2 = *(void **)*local_178;
          if (pvVar2 == (void *)0x0) {
            if (*(int *)local_178[1] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00101cb3;
            }
            goto LAB_00101ca7;
          }
          if (*(undefined1 (**) [16])((long)pvVar2 + 0x18) != local_178) break;
          lVar29 = *(long *)((long)pvVar2 + 8);
          lVar37 = *(long *)((long)pvVar2 + 0x10);
          *(long *)*local_178 = lVar29;
          if (pvVar2 == *(void **)(*local_178 + 8)) {
            *(long *)(*local_178 + 8) = lVar37;
          }
          if (lVar37 != 0) {
            *(long *)(lVar37 + 8) = lVar29;
            lVar29 = *(long *)((long)pvVar2 + 8);
          }
          if (lVar29 != 0) {
            *(long *)(lVar29 + 0x10) = lVar37;
          }
          Memory::free_static(pvVar2,false);
          pauVar31 = local_178 + 1;
          *(int *)*pauVar31 = *(int *)*pauVar31 + -1;
          if (*(int *)*pauVar31 == 0) goto LAB_00101ca7;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)local_178[1] != 0);
LAB_00101ca7:
      Memory::free_static(local_178,false);
    }
LAB_00101cb3:
    if (puVar40 != (undefined8 *)0x0) {
      uVar20 = local_d0._8_8_;
      if ((local_b0._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) != 0)) {
        piVar41 = (int *)(local_d0._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) * 4)
        ;
        piVar27 = (int *)local_d0._8_8_;
        puVar36 = puVar40;
        do {
          if (*piVar27 != 0) {
            pvVar2 = (void *)*puVar36;
            *piVar27 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x40));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x30) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *puVar36 = 0;
          }
          piVar27 = piVar27 + 1;
          puVar36 = puVar36 + 1;
        } while (piVar27 != piVar41);
      }
      Memory::free_static(puVar40,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar20,false);
        return;
      }
      goto LAB_001023fc;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001023fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_bind_methods() */

void MultiNodeEdit::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<MultiNodeEdit,bool>(_hide_script_from_inspector);
  StringName::StringName((StringName *)local_78,"_hide_script_from_inspector",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<MultiNodeEdit,bool>(_hide_metadata_from_inspector);
  StringName::StringName((StringName *)local_78,"_hide_metadata_from_inspector",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<MultiNodeEdit,String>(_get_editor_name);
  StringName::StringName((StringName *)local_78,"_get_editor_name",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* MultiNodeEdit::is_class_ptr(void*) const */

uint __thiscall MultiNodeEdit::is_class_ptr(MultiNodeEdit *this,void *param_1)

{
  return (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiNodeEdit::_validate_propertyv(PropertyInfo&) const */

void MultiNodeEdit::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MultiNodeEdit::_notificationv(int, bool) */

void MultiNodeEdit::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MultiNodeEdit::_hide_script_from_inspector() */

undefined8 MultiNodeEdit::_hide_script_from_inspector(void)

{
  return 1;
}



/* MultiNodeEdit::_hide_metadata_from_inspector() */

undefined8 MultiNodeEdit::_hide_metadata_from_inspector(void)

{
  return 1;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106c88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106c88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106ce8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106ce8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001069c8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001069c8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MultiNodeEdit::~MultiNodeEdit() */

void __thiscall MultiNodeEdit::~MultiNodeEdit(MultiNodeEdit *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00106b28;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x180) != 0) {
      lVar2 = 0;
      while( true ) {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        NodePath::~NodePath((NodePath *)((long)pvVar3 + lVar1));
        if (*(uint *)(this + 0x180) <= (uint)lVar2) break;
        pvVar3 = *(void **)(this + 0x188);
      }
      pvVar3 = *(void **)(this + 0x188);
      *(undefined4 *)(this + 0x180) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_00102ada;
    }
    Memory::free_static(pvVar3,false);
  }
LAB_00102ada:
  *(undefined ***)this = &PTR__initialize_classv_001069c8;
  Object::~Object((Object *)this);
  return;
}



/* MultiNodeEdit::~MultiNodeEdit() */

void __thiscall MultiNodeEdit::~MultiNodeEdit(MultiNodeEdit *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00106b28;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x180) != 0) {
      lVar2 = 0;
      while( true ) {
        lVar1 = lVar2 * 8;
        lVar2 = lVar2 + 1;
        NodePath::~NodePath((NodePath *)((long)pvVar3 + lVar1));
        if (*(uint *)(this + 0x180) <= (uint)lVar2) break;
        pvVar3 = *(void **)(this + 0x188);
      }
      pvVar3 = *(void **)(this + 0x188);
      *(undefined4 *)(this + 0x180) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_00102b7a;
    }
    Memory::free_static(pvVar3,false);
  }
LAB_00102b7a:
  *(undefined ***)this = &PTR__initialize_classv_001069c8;
  Object::~Object((Object *)this);
  operator_delete(this,400);
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
LAB_00102bf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102bf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00102c5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00102c5e:
  return &_get_class_namev()::_class_name_static;
}



/* MultiNodeEdit::_get_class_namev() const */

undefined8 * MultiNodeEdit::_get_class_namev(void)

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
LAB_00102ce3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102ce3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiNodeEdit");
      goto LAB_00102d4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiNodeEdit");
LAB_00102d4e:
  return &_get_class_namev()::_class_name_static;
}



/* MultiNodeEdit::get_class() const */

void MultiNodeEdit::get_class(void)

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



/* MultiNodeEdit::_property_get_revertv(StringName const&, Variant&) const */

void __thiscall
MultiNodeEdit::_property_get_revertv(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  _property_get_revert(this,param_1,param_2);
  return;
}



/* MultiNodeEdit::_property_can_revertv(StringName const&) const */

void __thiscall MultiNodeEdit::_property_can_revertv(MultiNodeEdit *this,StringName *param_1)

{
  _property_can_revert(this,param_1);
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



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001031f5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001031f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00103355;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00103355:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001035a0) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

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



/* WARNING: Removing unreachable block (ram,0x00103890) */
/* String vformat<StringName, int>(String const&, StringName const, int const) */

undefined8 *
vformat<StringName,int>(undefined8 *param_1,bool *param_2,StringName *param_3,int param_4)

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



/* MultiNodeEdit::_setv(StringName const&, Variant const&) */

ulong __thiscall MultiNodeEdit::_setv(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  uVar3 = _set_impl(this,param_1,param_2,(String *)&local_50);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      uVar3 = uVar3 & 0xff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_getv(StringName const&, Variant&) const */

void __thiscall MultiNodeEdit::_getv(MultiNodeEdit *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00103b6f;
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
LAB_00103b6f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00103c23;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00103c23;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00103c23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::is_class(String const&) const */

undefined8 __thiscall MultiNodeEdit::is_class(MultiNodeEdit *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00103d9f;
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
LAB_00103d9f:
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
    if (cVar5 != '\0') goto LAB_00103e53;
  }
  cVar5 = String::operator==(param_1,"MultiNodeEdit");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103e53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
LAB_0010418d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010418d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001041af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001041af:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, MultiNodeEdit::PLData, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, MultiNodeEdit::PLData> > >::operator[](String
   const&) */

undefined8 * __thiscall
HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
::operator[](HashMap<String,MultiNodeEdit::PLData,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,MultiNodeEdit::PLData>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  char cVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  undefined8 uVar47;
  uint uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  uint uVar52;
  uint *puVar53;
  uint uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  CowData<char32_t> *local_100;
  CowData<char32_t> *local_f8;
  CowData local_c8 [8];
  long lStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_98 [16];
  long local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  lVar49 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar49 == 0) {
LAB_00104dab:
    local_a8 = 6;
    uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    _local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    if (lVar49 != 0) goto LAB_00104672;
    uVar46 = (ulong)uVar52;
    uVar39 = uVar46 * 4;
    uVar50 = uVar46 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar52 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar50)) && (pvVar42 < (void *)((long)pvVar2 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar46 != uVar39);
      }
      else {
        memset(pvVar2,0,uVar39);
        memset(pvVar42,0,uVar50);
      }
      goto LAB_00104672;
    }
    iVar43 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010486f;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00104681;
LAB_00104895:
    uVar52 = *(uint *)(this + 0x28);
    if (uVar52 == 0x1c) {
      puVar41 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104d37;
    }
    uVar39 = (ulong)(uVar52 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar52 * 4);
    if (uVar52 + 1 < 2) {
      uVar39 = 2;
    }
    uVar52 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar46 = (ulong)uVar52;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar46 * 4;
    uVar50 = uVar46 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = __s_00;
    if (uVar52 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar50)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar46);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar50);
      }
    }
    if (uVar38 != 0) {
      uVar39 = 0;
      do {
        uVar52 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar52 != 0) {
          lVar49 = *(long *)(this + 0x10);
          uVar48 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar50 = CONCAT44(0,uVar37);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar52 * lVar51;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar50;
          lVar44 = SUB168(auVar11 * auVar27,8);
          puVar53 = (uint *)(lVar49 + lVar44 * 4);
          iVar43 = SUB164(auVar11 * auVar27,8);
          uVar36 = *puVar53;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar36 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar36 * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar50;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((iVar43 + uVar37) - SUB164(auVar12 * auVar28,8)) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar50;
            uVar54 = SUB164(auVar13 * auVar29,8);
            uVar47 = uVar40;
            if (uVar54 < uVar48) {
              *puVar53 = uVar52;
              puVar41 = (undefined8 *)((long)__s_00 + lVar44 * 8);
              uVar47 = *puVar41;
              *puVar41 = uVar40;
              uVar52 = uVar36;
              uVar48 = uVar54;
            }
            uVar48 = uVar48 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar43 + 1) * lVar51;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar50;
            lVar44 = SUB168(auVar14 * auVar30,8);
            puVar53 = (uint *)(lVar49 + lVar44 * 4);
            iVar43 = SUB164(auVar14 * auVar30,8);
            uVar40 = uVar47;
            uVar36 = *puVar53;
          }
          *(undefined8 *)((long)__s_00 + lVar44 * 8) = uVar40;
          *puVar53 = uVar52;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar38 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      uVar39 = CONCAT44(0,uVar52);
      lVar44 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar37 != 0) {
        uVar38 = uVar37;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar38 * lVar51;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar39;
      lVar45 = SUB168(auVar7 * auVar23,8);
      uVar37 = *(uint *)(lVar44 + lVar45 * 4);
      uVar36 = SUB164(auVar7 * auVar23,8);
      if (uVar37 == 0) {
        lVar49 = *(long *)(this + 8);
      }
      else {
        lVar49 = *(long *)(this + 8);
        uVar48 = 0;
        do {
          if (uVar37 == uVar38) {
            cVar35 = String::operator==((String *)(*(long *)(lVar49 + lVar45 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar36 * 8);
              goto LAB_00104d6a;
            }
            lVar49 = *(long *)(this + 8);
            lVar44 = *(long *)(this + 0x10);
          }
          uVar48 = uVar48 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar36 + 1) * lVar51;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          lVar45 = SUB168(auVar8 * auVar24,8);
          uVar37 = *(uint *)(lVar44 + lVar45 * 4);
          uVar36 = SUB164(auVar8 * auVar24,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar51, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar39, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar36 + uVar52) - SUB164(auVar9 * auVar25,8)) * lVar51,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, uVar48 <= SUB164(auVar10 * auVar26,8)));
      }
      goto LAB_00104dab;
    }
    local_a8 = 6;
    uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    _local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
LAB_00104672:
    iVar43 = *(int *)(this + 0x2c);
    uVar46 = (ulong)uVar52;
    if (iVar43 != 0) {
LAB_00104681:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar36 = String::hash();
      uVar39 = CONCAT44(0,uVar38);
      lVar51 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar36 != 0) {
        uVar37 = uVar36;
      }
      uVar54 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar37 * lVar49;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar44 = SUB168(auVar3 * auVar19,8);
      uVar36 = *(uint *)(lVar51 + lVar44 * 4);
      uVar48 = SUB164(auVar3 * auVar19,8);
      if (uVar36 != 0) {
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar44 * 8) + 0x10),param_1
                                       );
            if (cVar35 != '\0') {
              lVar49 = *(long *)(*(long *)(this + 8) + (ulong)uVar48 * 8);
              *(undefined4 *)(lVar49 + 0x18) = 0;
              *(undefined4 *)(lVar49 + 0x20) = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x28),local_c8);
              StringName::operator=((StringName *)(lVar49 + 0x30),(StringName *)(local_c8 + 8));
              *(undefined4 *)(lVar49 + 0x38) = local_b8._0_4_;
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(lVar49 + 0x40),(CowData *)(local_b8 + 8));
              *(undefined4 *)(lVar49 + 0x48) = (undefined4)local_a8;
              puVar41 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar48 * 8);
              goto LAB_00104d37;
            }
            lVar51 = *(long *)(this + 0x10);
          }
          uVar54 = uVar54 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar48 + 1) * lVar49;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar39;
          lVar44 = SUB168(auVar4 * auVar20,8);
          uVar36 = *(uint *)(lVar51 + lVar44 * 4);
          uVar48 = SUB164(auVar4 * auVar20,8);
        } while ((uVar36 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar36 * lVar49, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar39, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar48) - SUB164(auVar5 * auVar21,8)) * lVar49,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar39, uVar54 <= SUB164(auVar6 * auVar22,8)));
      }
      iVar43 = *(int *)(this + 0x2c);
      uVar46 = (ulong)uVar52;
    }
LAB_0010486f:
    if ((float)uVar46 * __LC32 < (float)(iVar43 + 1)) goto LAB_00104895;
  }
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_1);
  }
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,local_c8);
  StringName::StringName((StringName *)&local_68,(StringName *)(local_c8 + 8));
  local_58 = 0;
  local_60 = local_b8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(local_b8 + 8));
  local_50 = (undefined4)local_a8;
  puVar41 = (undefined8 *)operator_new(0x50,"");
  puVar41[2] = 0;
  *puVar41 = local_98._0_8_;
  puVar41[1] = local_98._8_8_;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 2),(CowData *)&local_88);
  }
  puVar41[5] = 0;
  *(undefined4 *)(puVar41 + 3) = local_80;
  *(undefined4 *)(puVar41 + 4) = local_78;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 5),(CowData *)&local_70);
  StringName::StringName((StringName *)(puVar41 + 6),(StringName *)&local_68);
  puVar41[8] = 0;
  *(undefined4 *)(puVar41 + 7) = local_60;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar41 + 8),(CowData *)&local_58);
  *(undefined4 *)(puVar41 + 9) = local_50;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  puVar56 = *(undefined8 **)(this + 0x20);
  if (puVar56 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    *puVar56 = puVar41;
    puVar41[1] = puVar56;
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  uVar38 = String::hash();
  lVar49 = *(long *)(this + 0x10);
  uVar52 = 1;
  if (uVar38 != 0) {
    uVar52 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar38);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)uVar52 * lVar51;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar39;
  lVar45 = SUB168(auVar15 * auVar31,8);
  lVar44 = *(long *)(this + 8);
  puVar53 = (uint *)(lVar49 + lVar45 * 4);
  iVar43 = SUB164(auVar15 * auVar31,8);
  uVar37 = *puVar53;
  puVar56 = puVar41;
  if (uVar37 != 0) {
    uVar36 = 0;
    puVar55 = puVar41;
    do {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar37 * lVar51;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar39;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((uVar38 + iVar43) - SUB164(auVar16 * auVar32,8)) * lVar51;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar39;
      uVar48 = SUB164(auVar17 * auVar33,8);
      puVar56 = puVar55;
      if (uVar48 < uVar36) {
        *puVar53 = uVar52;
        puVar1 = (undefined8 *)(lVar44 + lVar45 * 8);
        puVar56 = (undefined8 *)*puVar1;
        *puVar1 = puVar55;
        uVar36 = uVar48;
        uVar52 = uVar37;
      }
      uVar36 = uVar36 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(iVar43 + 1) * lVar51;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar39;
      lVar45 = SUB168(auVar18 * auVar34,8);
      puVar53 = (uint *)(lVar49 + lVar45 * 4);
      iVar43 = SUB164(auVar18 * auVar34,8);
      uVar37 = *puVar53;
      puVar55 = puVar56;
    } while (uVar37 != 0);
  }
  *(undefined8 **)(lVar44 + lVar45 * 8) = puVar56;
  *puVar53 = uVar52;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104d37:
  local_f8 = (CowData<char32_t> *)(local_b8 + 8);
  local_100 = (CowData<char32_t> *)local_c8;
  CowData<char32_t>::_unref(local_f8);
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_100);
LAB_00104d6a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar41 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiNodeEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MultiNodeEdit::_get_property_listv(MultiNodeEdit *this,List *param_1,bool param_2)

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
  local_78 = "MultiNodeEdit";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiNodeEdit";
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
  if (local_90 == 0) {
LAB_0010516d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010516d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010518f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010518f:
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
  StringName::StringName((StringName *)&local_78,"MultiNodeEdit",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
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



/* MethodBind* create_method_bind<MultiNodeEdit, bool>(bool (MultiNodeEdit::*)()) */

MethodBind * create_method_bind<MultiNodeEdit,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00106c88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiNodeEdit";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiNodeEdit, String>(String (MultiNodeEdit::*)() const) */

MethodBind * create_method_bind<MultiNodeEdit,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00106ce8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiNodeEdit";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MultiNodeEdit::_bind_methods() [clone .cold] */

void MultiNodeEdit::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiNodeEdit::_initialize_classv() */

void MultiNodeEdit::_initialize_classv(void)

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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "MultiNodeEdit";
    local_60 = 0;
    local_40 = 0xd;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105988) */
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



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00105d10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00105d10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x105b58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105fdc;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00105fdc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x105b58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001061ad;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001061ad:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001063d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001063d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001065e2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_001065e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106791;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00106791:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MultiNodeEdit::~MultiNodeEdit() */

void __thiscall MultiNodeEdit::~MultiNodeEdit(MultiNodeEdit *this)

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
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

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


