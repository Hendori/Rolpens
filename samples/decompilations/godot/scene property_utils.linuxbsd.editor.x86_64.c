
/* PropertyUtils::is_property_value_different(Object const*, Variant const&, Variant const&) */

uint PropertyUtils::is_property_value_different(Object *param_1,Variant *param_2,Variant *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  Variant *pVVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  Variant local_90 [8];
  Variant local_88 [8];
  Node local_80 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)param_2;
  if (iVar3 == 3) {
    if (*(int *)param_3 == 3) {
      fVar12 = Variant::operator_cast_to_float(param_3);
      fVar13 = Variant::operator_cast_to_float(param_2);
      uVar2 = 0;
      if (fVar12 != fVar13) {
        fVar14 = _LC8;
        if (_LC8 <= ABS(fVar13) * _LC8) {
          fVar14 = ABS(fVar13) * _LC8;
        }
        uVar2 = (uint)(fVar14 <= ABS(fVar13 - fVar12));
      }
      goto LAB_001003f5;
    }
LAB_00100399:
    Variant::Variant((Variant *)local_78,param_2);
  }
  else {
    if (iVar3 == 0x16) {
      if (*(int *)param_3 == 0x18) {
        if (param_1 == (Object *)0x0) {
          Variant::operator_cast_to_Object_(param_3);
          iVar3 = *(int *)param_2;
          if (iVar3 != 0x1c) goto LAB_00100613;
          if (*(int *)param_3 == 0x1c) goto LAB_001005d9;
        }
        else {
          lVar9 = __dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
          pOVar8 = Variant::operator_cast_to_Object_(param_3);
          if (((pOVar8 != (Object *)0x0) &&
              (lVar10 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 != 0)) &&
             (lVar10 != 0)) {
            Node::get_path_to(local_80,SUB81(lVar9,0));
            Variant::Variant((Variant *)local_58,(NodePath *)local_80);
            uVar2 = Variant::operator!=(param_2,(Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            NodePath::~NodePath((NodePath *)local_80);
            goto LAB_001003f5;
          }
          iVar3 = *(int *)param_2;
          if (iVar3 != 0x1c) goto LAB_00100613;
          if (*(int *)param_3 == 0x1c) goto LAB_0010044d;
        }
      }
      goto LAB_00100399;
    }
    if (iVar3 == 0x1c) {
      if (*(int *)param_3 != 0x1c) goto LAB_00100399;
      if (param_1 == (Object *)0x0) {
LAB_001005d9:
        Variant::operator_cast_to_Array(local_90);
        Variant::operator_cast_to_Array(local_88);
      }
      else {
LAB_0010044d:
        lVar9 = __dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
        Variant::operator_cast_to_Array(local_90);
        Variant::operator_cast_to_Array(local_88);
        if ((lVar9 != 0) && (uVar2 = Array::is_empty(), (char)uVar2 == '\0')) {
          iVar3 = Array::size();
          iVar4 = Array::size();
          if (iVar3 == iVar4) {
            iVar3 = (int)local_90;
            piVar6 = (int *)Array::operator[](iVar3);
            if (*piVar6 == 0x16) {
              iVar4 = (int)local_88;
              piVar6 = (int *)Array::operator[](iVar4);
              if (*piVar6 == 0x18) {
                for (iVar11 = 0; iVar5 = Array::size(), iVar11 < iVar5; iVar11 = iVar11 + 1) {
                  pVVar7 = (Variant *)Array::operator[](iVar4);
                  pOVar8 = Variant::operator_cast_to_Object_(pVVar7);
                  if ((pOVar8 == (Object *)0x0) ||
                     (lVar10 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0),
                     lVar10 == 0)) {
LAB_0010059b:
                    uVar2 = 1;
                    break;
                  }
                  Node::get_path_to(local_80,SUB81(lVar9,0));
                  Variant::Variant((Variant *)local_58,(NodePath *)local_80);
                  pVVar7 = (Variant *)Array::operator[](iVar3);
                  cVar1 = Variant::operator!=(pVVar7,(Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  NodePath::~NodePath((NodePath *)local_80);
                  if (cVar1 != '\0') goto LAB_0010059b;
                }
                Array::~Array((Array *)local_88);
                Array::~Array((Array *)local_90);
                goto LAB_001003f5;
              }
            }
          }
        }
      }
      Array::~Array((Array *)local_88);
      Array::~Array((Array *)local_90);
      iVar3 = *(int *)param_2;
    }
LAB_00100613:
    if ((iVar3 != 0x18) ||
       (pOVar8 = Variant::operator_cast_to_Object_(param_2), pOVar8 != (Object *)0x0))
    goto LAB_00100399;
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
  }
  if ((*(int *)param_3 == 0x18) &&
     (pOVar8 = Variant::operator_cast_to_Object_(param_3), pOVar8 == (Object *)0x0)) {
    local_58[0] = 0;
    local_58[1] = 0;
    local_50 = (undefined1  [16])0x0;
  }
  else {
    Variant::Variant((Variant *)local_58,param_3);
  }
  uVar2 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001003f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyUtils::assign_custom_type_script(Object*, Ref<Script> const&) */

void PropertyUtils::assign_custom_type_script(Object *param_1,Ref *param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  String_conflict aSStack_58 [8];
  CowData<char32_t> local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x11f;
      pcVar4 = "Parameter \"p_object\" is null.";
LAB_00100916:
      _err_print_error("assign_custom_type_script","scene/property_utils.cpp",uVar5,pcVar4,0,0);
      return;
    }
  }
  else if (*(long *)param_2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x120;
      pcVar4 = "Condition \"p_script.is_null()\" is true.";
      goto LAB_00100916;
    }
  }
  else {
    Resource::get_path();
    cVar2 = String::is_resource_file();
    if (cVar2 == '\0') {
      _err_print_error("assign_custom_type_script","scene/property_utils.cpp",0x123,
                       "Condition \"!path.is_resource_file()\" is true.",0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_58);
    }
    else {
      lVar3 = ResourceLoader::get_resource_uid(aSStack_58);
      if (lVar3 != -1) {
        pcVar1 = *(code **)(*(long *)param_1 + 0xa8);
        ResourceUID::id_to_text((long)local_50);
        Variant::Variant((Variant *)local_48,(String_conflict *)local_50);
        (*pcVar1)(param_1,SceneStringNames::singleton + 0x230,(Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref(local_50);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_58);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyUtils::get_custom_type_script(Object const*) */

PropertyUtils * __thiscall
PropertyUtils::get_custom_type_script(PropertyUtils *this,Object *param_1)

{
  String_conflict *pSVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Variant local_90 [8];
  undefined8 local_88;
  Object *local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(*(long *)param_1 + 0xb8))
            (local_78,param_1,SceneStringNames::singleton + 0x230,(Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = ResourceUID::singleton;
  if (local_78[0] == 0x18) {
    local_80 = (Object *)0x0;
    lVar3 = Variant::get_validated_object();
    if ((lVar3 != 0) &&
       (pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&Script::typeinfo,0),
       pOVar4 != (Object *)0x0)) {
      local_80 = pOVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        assign_custom_type_script(param_1,(Ref *)&local_80);
        *(Object **)this = pOVar4;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)this = 0;
        }
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        goto LAB_00100b8d;
      }
      local_80 = (Object *)0x0;
    }
    assign_custom_type_script(param_1,(Ref *)&local_80);
    *(undefined8 *)this = 0;
    cVar2 = Variant::needs_deinit[local_78[0]];
    goto joined_r0x00100c37;
  }
  Variant::operator_cast_to_String((Variant *)&local_80);
  lVar3 = ResourceUID::text_to_id(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((lVar3 == -1) || (cVar2 = ResourceUID::has_id((long)ResourceUID::singleton), cVar2 == '\0')) {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,SceneStringNames::singleton + 0x230);
    Variant::operator_cast_to_String(local_90);
    local_88 = 0;
    String::parse_latin1
              ((String_conflict *)&local_88,"Invalid custom type script UID: %s. Removing.");
    vformat<String>((Variant *)&local_80,(String_conflict *)&local_88,local_90);
    _err_print_error("get_custom_type_script","scene/property_utils.cpp",0x138,
                     "Method/function failed. Returning: Ref<Script>()",(Variant *)&local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    *(undefined8 *)this = 0;
  }
  else {
    ResourceUID::get_id_path((long)&local_80);
    Variant::Variant((Variant *)&local_58,(String_conflict *)&local_80);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_78[0] = (int)local_58;
    local_70 = local_50._0_8_;
    uStack_68 = local_50._8_8_;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_88 = 0;
    String::parse_latin1((String_conflict *)&local_88,"");
    Variant::operator_cast_to_String(local_90);
    ResourceLoader::load((Variant *)&local_80,local_90,(String_conflict *)&local_88,1,0);
    *(undefined8 *)this = 0;
    if (local_80 != (Object *)0x0) {
      lVar3 = __dynamic_cast(local_80,&Object::typeinfo,&Script::typeinfo,0);
      if (lVar3 != 0) {
        *(long *)this = lVar3;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)this = 0;
        }
        if (local_80 == (Object *)0x0) goto LAB_00100b7d;
      }
      cVar2 = RefCounted::unreference();
      pOVar4 = local_80;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_80), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
LAB_00100b7d:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
LAB_00100b8d:
  cVar2 = Variant::needs_deinit[local_78[0]];
joined_r0x00100c37:
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<SceneState::PackState>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<SceneState::PackState>::_copy_on_write(CowData<SceneState::PackState> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
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
  if (lVar1 * 0x10 != 0) {
    uVar7 = lVar1 * 0x10 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    plVar6 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        plVar8 = (long *)(lVar9 * 0x10 + *(long *)this);
        *plVar6 = 0;
        lVar2 = *plVar8;
        if (lVar2 != 0) {
          *plVar6 = lVar2;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *plVar6 = 0;
          }
        }
        lVar9 = lVar9 + 1;
        *(int *)(plVar6 + 1) = (int)plVar8[1];
        plVar6 = plVar6 + 2;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* PropertyUtils::get_node_states_stack(Node const*, Node const*, bool*) */

PropertyUtils * __thiscall
PropertyUtils::get_node_states_stack(PropertyUtils *this,Node *param_1,Node *param_2,bool *param_3)

{
  CowData<SceneState::PackState> *this_00;
  Object *pOVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  Object *pOVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  long *local_70;
  Object *local_68;
  long local_60;
  ulong local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (bool *)0x0) {
    *param_3 = true;
  }
  local_58 = 0;
  local_50 = (long *)0x0;
  if (param_2 == (Node *)0x0) {
    lVar7 = Engine::get_singleton();
    if (*(char *)(lVar7 + 0xc0) != '\0') {
      param_2 = (Node *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      goto LAB_00100f73;
    }
    if (param_1 != (Node *)0x0) goto LAB_00100f85;
LAB_0010134b:
    *(undefined8 *)(this + 8) = 0;
  }
  else {
LAB_00100f73:
    if (param_1 == (Node *)0x0) goto LAB_0010134b;
    if (param_2 != param_1) {
LAB_00100f85:
      do {
        Node::get_scene_file_path();
        if ((local_60 == 0) || (iVar14 = (int)*(undefined8 *)(local_60 + -8), iVar14 == 0)) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          param_1 = (Node *)Node::get_owner();
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (iVar14 != 1) {
            Node::get_scene_instance_state();
            Node::get_path_to((Node *)&local_60,SUB81(param_1,0));
            _collect_inheritance_chain
                      ((Ref *)&local_68,(NodePath *)&local_60,(LocalVector *)&local_58);
            NodePath::~NodePath((NodePath *)&local_60);
            if (((local_68 != (Object *)0x0) &&
                (cVar4 = RefCounted::unreference(), pOVar6 = local_68, cVar4 != '\0')) &&
               (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))();
              Memory::free_static(pOVar6,false);
            }
          }
          param_1 = (Node *)Node::get_owner();
        }
        if (param_1 == (Node *)0x0) goto LAB_0010104d;
      } while (param_2 != param_1);
    }
    Node::get_scene_inherited_state();
    Node::get_path_to((Node *)&local_60,SUB81(param_1,0));
    cVar4 = _collect_inheritance_chain
                      ((Ref *)&local_68,(NodePath *)&local_60,(LocalVector *)&local_58);
    NodePath::~NodePath((NodePath *)&local_60);
    if ((param_3 != (bool *)0x0) && (cVar4 != '\0')) {
      *param_3 = false;
    }
    if (((local_68 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
      (**(code **)(*(long *)local_68 + 0x140))(local_68);
      Memory::free_static(local_68,false);
    }
LAB_0010104d:
    iVar14 = (int)local_58;
    uVar10 = local_58 & 0xffffffff;
    *(undefined8 *)(this + 8) = 0;
    if (uVar10 != 0) {
      this_00 = (CowData<SceneState::PackState> *)(this + 8);
      CowData<SceneState::PackState>::_copy_on_write(this_00);
      uVar12 = uVar10 * 0x10 - 1;
      uVar12 = uVar12 | uVar12 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      puVar5 = (undefined8 *)Memory::alloc_static((uVar12 | uVar12 >> 0x20) + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        *puVar5 = 1;
        *(undefined8 **)(this + 8) = puVar5 + 2;
        puVar8 = puVar5;
        do {
          puVar8[2] = 0;
          puVar9 = puVar8 + 2;
          *(undefined4 *)(puVar8 + 3) = 0xffffffff;
          puVar8 = puVar9;
        } while (puVar9 != puVar5 + uVar10 * 2);
        puVar5[1] = uVar10;
      }
      local_70 = local_50;
      if (-1 < (int)(iVar14 - 1U)) {
        lVar7 = *(long *)(this + 8);
        uVar10 = (ulong)(iVar14 - 1U);
        plVar11 = local_50;
        do {
          if (lVar7 == 0) {
LAB_00101204:
            lVar7 = 0;
LAB_00101207:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar10,lVar7,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar7 = *(long *)(lVar7 + -8);
          if (lVar7 <= (long)uVar10) goto LAB_00101207;
          lVar13 = uVar10 * 0x10;
          CowData<SceneState::PackState>::_copy_on_write(this_00);
          lVar7 = *(long *)(this + 8);
          pOVar6 = (Object *)*plVar11;
          puVar5 = (undefined8 *)(lVar7 + lVar13);
          pOVar1 = (Object *)*puVar5;
          if (pOVar6 != pOVar1) {
            if (pOVar6 == (Object *)0x0) {
              if (pOVar1 != (Object *)0x0) {
                *puVar5 = 0;
                cVar4 = RefCounted::unreference();
joined_r0x001013ba:
                if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                  Memory::free_static(pOVar1,false);
                }
                goto LAB_001011c2;
              }
            }
            else {
              pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&SceneState::typeinfo,0);
              if (pOVar1 != pOVar6) {
                *puVar5 = pOVar6;
                if ((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::init_ref(), cVar4 == '\0')) {
                  *puVar5 = 0;
                }
                if (pOVar1 != (Object *)0x0) {
                  cVar4 = RefCounted::unreference();
                  goto joined_r0x001013ba;
                }
LAB_001011c2:
                lVar7 = *(long *)(this + 8);
              }
            }
          }
          lVar3 = plVar11[1];
          if (lVar7 == 0) goto LAB_00101204;
          lVar7 = *(long *)(lVar7 + -8);
          if (lVar7 <= (long)uVar10) goto LAB_00101207;
          uVar10 = uVar10 - 1;
          plVar11 = plVar11 + 2;
          CowData<SceneState::PackState>::_copy_on_write(this_00);
          lVar7 = *(long *)(this + 8);
          *(int *)(lVar7 + 8 + lVar13) = (int)lVar3;
        } while (-1 < (int)uVar10);
      }
      goto LAB_0010135d;
    }
  }
  local_70 = local_50;
LAB_0010135d:
  if (local_70 != (long *)0x0) {
    Memory::free_static(local_70,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101613) */
/* WARNING: Removing unreachable block (ram,0x00101618) */
/* WARNING: Removing unreachable block (ram,0x0010161c) */
/* WARNING: Removing unreachable block (ram,0x0010162e) */
/* WARNING: Removing unreachable block (ram,0x00101ee6) */
/* WARNING: Removing unreachable block (ram,0x00101f8a) */
/* WARNING: Removing unreachable block (ram,0x00101f28) */
/* WARNING: Removing unreachable block (ram,0x00101637) */
/* WARNING: Removing unreachable block (ram,0x00101d60) */
/* WARNING: Removing unreachable block (ram,0x00101696) */
/* WARNING: Removing unreachable block (ram,0x00101d00) */
/* WARNING: Removing unreachable block (ram,0x001016a1) */
/* WARNING: Removing unreachable block (ram,0x00101744) */
/* WARNING: Removing unreachable block (ram,0x00101750) */
/* WARNING: Removing unreachable block (ram,0x00101d70) */
/* WARNING: Removing unreachable block (ram,0x00101774) */
/* WARNING: Removing unreachable block (ram,0x001017a3) */
/* WARNING: Removing unreachable block (ram,0x001016e8) */
/* WARNING: Removing unreachable block (ram,0x00101920) */
/* WARNING: Removing unreachable block (ram,0x00101739) */
/* PropertyUtils::get_property_default_value(Object const*, StringName const&, bool*,
   Vector<SceneState::PackState> const*, bool, Node const*, bool*) */

PropertyUtils * __thiscall
PropertyUtils::get_property_default_value
          (PropertyUtils *this,Object *param_1,StringName *param_2,bool *param_3,Vector *param_4,
          bool param_5,Node *param_6,bool *param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Node *pNVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  StringName *pSVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  bool bVar14;
  Object *local_a8 [2];
  char local_98;
  Object *local_90;
  Object *local_88;
  long local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 != (bool *)0x0) {
    *param_7 = false;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  if (param_4 == (Vector *)0x0) {
    if (*(long *)param_2 == *(long *)(CoreStringNames::singleton + 0x10)) {
      cVar5 = (**(code **)(*(long *)param_1 + 0xa0))(param_1,SceneStringNames::singleton + 0x230);
      if (cVar5 != '\0') {
        get_custom_type_script((PropertyUtils *)&local_88,param_1);
        if (param_3 != (bool *)0x0) {
          *param_3 = true;
        }
        Variant::Variant((Variant *)this,local_88);
        Ref<Script>::unref((Ref<Script> *)&local_88);
        goto LAB_001017d6;
      }
    }
    else {
      local_a8[0] = (Object *)0x0;
      if (param_1 == (Object *)0x0) goto LAB_00101820;
    }
    local_a8[0] = (Object *)0x0;
    pNVar8 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo);
    pOVar13 = local_a8[0];
    if (pNVar8 != (Node *)0x0) {
      get_node_states_stack((PropertyUtils *)&local_88,pNVar8,param_6,(bool *)0x0);
LAB_001015ad:
      if (local_80 != 0) {
        lVar7 = 0;
        do {
          if (*(long *)(local_80 + -8) <= lVar7) break;
          puVar2 = (undefined8 *)(local_80 + lVar7 * 0x10);
          SceneState::get_property_value
                    ((int)local_78,(StringName *)*puVar2,(bool *)(ulong)*(uint *)(puVar2 + 1),
                     (bool *)param_2);
          local_98 = '\0';
          pSVar12 = (StringName *)*puVar2;
          if ((get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
               ::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
                                           ::{lambda()#1}::operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
                          ::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
                                 ::{lambda()#1}::operator()()::sname);
          }
          SceneState::get_property_value
                    ((int)(Variant *)&local_58,pSVar12,(bool *)(ulong)*(uint *)(puVar2 + 1),
                     (bool *)&get_property_default_value(Object_const*,StringName_const&,bool*,Vector<SceneState::PackState>const*,bool,Node_const*,bool*)
                              ::{lambda()#1}::operator()()::sname);
          if (local_98 != '\0') {
            local_90 = (Object *)0x0;
            Ref<Script>::operator=((Ref<Script> *)&local_90,(Variant *)&local_58);
            pOVar13 = local_a8[0];
            if ((local_90 != (Object *)0x0) && (local_90 != local_a8[0])) {
              local_a8[0] = local_90;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_a8[0] = (Object *)0x0;
              }
              if (((pOVar13 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
                 && (cVar5 = predelete_handler(pOVar13), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
            }
            Ref<Script>::unref((Ref<Script> *)&local_90);
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
        } while (local_80 != 0);
      }
      pOVar13 = local_a8[0];
      CowData<SceneState::PackState>::_unref((CowData<SceneState::PackState> *)&local_80);
    }
    if (pOVar13 == (Object *)0x0) goto LAB_00101820;
LAB_001019e6:
    if (((param_5) && (lVar7 = Engine::get_singleton(), *(char *)(lVar7 + 0xc0) != '\0')) &&
       (*(code **)(*(long *)pOVar13 + 0x2a8) != Script::update_exports)) {
      (**(code **)(*(long *)pOVar13 + 0x2a8))(pOVar13);
    }
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    cVar5 = (**(code **)(*(long *)pOVar13 + 0x2a0))(pOVar13,param_2,&local_58);
    pOVar13 = local_a8[0];
    if (cVar5 == '\0') {
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101866;
    }
    if (param_3 != (bool *)0x0) {
      *param_3 = true;
    }
    *(int *)this = (int)local_58;
    *(undefined8 *)(this + 8) = local_50._0_8_;
    *(undefined8 *)(this + 0x10) = local_50._8_8_;
    cVar5 = RefCounted::unreference();
  }
  else {
    local_a8[0] = (Object *)0x0;
    if ((param_1 != (Object *)0x0) &&
       (lVar7 = __dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0), lVar7 != 0)) {
      local_80 = 0;
      plVar1 = (long *)(*(long *)(param_4 + 8) + -0x10);
      if (*(long *)(param_4 + 8) != 0) {
        do {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_001015ad;
          LOCK();
          lVar9 = *plVar1;
          bVar14 = lVar7 == lVar9;
          if (bVar14) {
            *plVar1 = lVar7 + 1;
            lVar9 = lVar7;
          }
          UNLOCK();
        } while (!bVar14);
        if (lVar9 != -1) {
          local_80 = *(long *)(param_4 + 8);
        }
        goto LAB_001015ad;
      }
      CowData<SceneState::PackState>::_unref((CowData<SceneState::PackState> *)&local_80);
    }
LAB_00101820:
    (**(code **)(*(long *)param_1 + 0x98))((Variant *)&local_58);
    Ref<Script>::operator=((Ref<Script> *)local_a8,(Variant *)&local_58);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    pOVar13 = local_a8[0];
    if (local_a8[0] != (Object *)0x0) goto LAB_001019e6;
LAB_00101866:
    if (param_7 != (bool *)0x0) {
      *param_7 = true;
    }
    local_90 = (Object *)((ulong)local_90 & 0xffffffffffffff00);
    if (*(long *)(param_1 + 8) == 0) {
      pSVar12 = *(StringName **)(param_1 + 0x118);
      if (pSVar12 == (StringName *)0x0) {
        pSVar12 = (StringName *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      pSVar12 = (StringName *)(*(long *)(param_1 + 8) + 0x20);
    }
    ClassDB::class_get_default_property_value((StringName *)&local_58,pSVar12,(bool *)param_2);
    if (local_90._0_1_ == (Ref<Script>)0x0) {
      lVar7 = *(long *)param_2;
      if (lVar7 == 0) {
        local_88 = (Object *)0x0;
      }
      else {
        local_88 = (Object *)0x0;
        if (*(char **)(lVar7 + 8) == (char *)0x0) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (*(long *)(lVar7 + 0x10) != 0) {
              plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
              do {
                lVar9 = *plVar1;
                if (lVar9 == 0) goto LAB_00101be3;
                LOCK();
                lVar10 = *plVar1;
                bVar14 = lVar9 == lVar10;
                if (bVar14) {
                  *plVar1 = lVar9 + 1;
                  lVar10 = lVar9;
                }
                UNLOCK();
              } while (!bVar14);
              if (lVar10 != -1) {
                local_88 = *(Object **)(lVar7 + 0x10);
              }
            }
          }
        }
        else {
          String::parse_latin1((String_conflict *)&local_88,*(char **)(lVar7 + 8));
        }
      }
LAB_00101be3:
      iVar6 = String::rfind_char((wchar32)(CowData<char32_t> *)&local_88,0x2f);
      if (iVar6 != -1) {
        if (local_88 == (Object *)0x0) {
          if (iVar6 < -1) {
            lVar7 = 0;
            lVar9 = (long)(iVar6 + 1);
LAB_00101da2:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          lVar7 = *(long *)(local_88 + -8);
          iVar4 = (int)lVar7;
          iVar11 = iVar4 + -2;
          if (iVar4 == 0) {
            iVar11 = -1;
          }
          if (iVar6 < iVar11) {
            lVar9 = (long)(iVar6 + 1);
            do {
              if (iVar4 == 0) {
                if ((int)lVar9 < 0) goto LAB_00101da2;
LAB_00101f80:
                bVar14 = true;
                break;
              }
              if (iVar4 + -1 <= (int)lVar9) goto LAB_00101f80;
              if (lVar7 == lVar9) {
                bVar14 = false;
                break;
              }
              if (lVar7 <= lVar9 || lVar9 < 0) goto LAB_00101da2;
              lVar10 = lVar9 * 4;
              lVar9 = lVar9 + 1;
              bVar14 = false;
            } while (*(int *)(local_88 + lVar10) - 0x30U < 10);
            if (param_3 != (bool *)0x0) {
              *param_3 = bVar14;
            }
          }
        }
      }
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pOVar13 = local_a8[0];
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
        pOVar13 = local_a8[0];
      }
    }
    else {
      if (param_3 != (bool *)0x0) {
        *param_3 = true;
      }
      *(int *)this = (int)local_58;
      *(undefined8 *)(this + 8) = local_50._0_8_;
      *(undefined8 *)(this + 0x10) = local_50._8_8_;
      pOVar13 = local_a8[0];
    }
    local_a8[0] = pOVar13;
    if (pOVar13 == (Object *)0x0) goto LAB_001017d6;
    cVar5 = RefCounted::unreference();
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar13), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
    Memory::free_static(pOVar13,false);
  }
LAB_001017d6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Script::update_exports() */

void Script::update_exports(void)

{
  return;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

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



/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
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



/* WARNING: Removing unreachable block (ram,0x00102588) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

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



/* CowData<SceneState::PackState>::_unref() */

void __thiscall CowData<SceneState::PackState>::_unref(CowData<SceneState::PackState> *this)

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
LAB_001027dd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 2;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001027dd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 2;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<SceneState::PackState>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SceneState::PackState>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SceneState::PackState>::_realloc(long) */

undefined8 __thiscall
CowData<SceneState::PackState>::_realloc(CowData<SceneState::PackState> *this,long param_1)

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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


