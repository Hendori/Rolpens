/* InspectorDock::_prepare_menu() */

void InspectorDock::_prepare_menu(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = MenuButton::get_popup();
  do {
    iVar3 = iVar3 + 1;
    bVar1 = (bool)PopupMenu::get_item_index(iVar2);
    PopupMenu::set_item_checked(iVar2,bVar1);
  } while (iVar3 != 3);
  return;
}



/* InspectorDock::_info_pressed() */

void __thiscall InspectorDock::_info_pressed(InspectorDock *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Window::popup_centered(*(Vector2i **)(this + 0xaa0));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::store_script_properties(Object*) */

void __thiscall InspectorDock::store_script_properties(InspectorDock *this,Object *param_1)

{
  long *plVar1;
  
  if (param_1 == (Object *)0x0) {
    _err_print_error("store_script_properties","editor/inspector_dock.cpp",0x25a,
                     "Parameter \"p_object\" is null.",0,0);
    return;
  }
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,this + 0xad0,*(code **)(*plVar1 + 0x40));
    return;
  }
  return;
}



/* InspectorDock::_edit_forward() */

void InspectorDock::_edit_forward(void)

{
  char cVar1;
  
  cVar1 = EditorSelectionHistory::next();
  if (cVar1 == '\0') {
    return;
  }
  EditorNode::_edit_current(SUB81(EditorNode::singleton,0),false);
  return;
}



/* InspectorDock::apply_script_properties(Object*) */

void __thiscall InspectorDock::apply_script_properties(InspectorDock *this,Object *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("apply_script_properties","editor/inspector_dock.cpp",0x263,
                       "Parameter \"p_object\" is null.",0,0);
      return;
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x98);
    if ((plVar1 != (long *)0x0) && (plVar5 = *(long **)(this + 0xad0), plVar5 != (long *)0x0)) {
      lVar4 = *plVar5;
      if (lVar4 != 0) {
        do {
          local_48 = 0;
          local_40 = (undefined1  [16])0x0;
          cVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar4,&local_48);
          lVar3 = (long)(int)local_48;
          if ((cVar2 != '\0') && (*(int *)(lVar4 + 8) == (int)local_48)) {
            (**(code **)*plVar1)(plVar1,lVar4,lVar4 + 8);
            lVar3 = (long)(int)local_48;
          }
          if (Variant::needs_deinit[lVar3] != '\0') {
            Variant::_clear_internal();
          }
          lVar4 = *(long *)(lVar4 + 0x20);
        } while (lVar4 != 0);
        plVar5 = *(long **)(this + 0xad0);
      }
      if (plVar5 != (long *)0x0) {
        do {
          plVar1 = (long *)*plVar5;
          if (plVar1 == (long *)0x0) goto LAB_001002c1;
          if ((long *)plVar1[6] == plVar5) {
            *plVar5 = plVar1[4];
            if (plVar1 == (long *)plVar5[1]) {
              plVar5[1] = plVar1[5];
              lVar4 = plVar1[5];
            }
            else {
              lVar4 = plVar1[5];
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x20) = plVar1[4];
            }
            if (plVar1[4] != 0) {
              *(long *)(plVar1[4] + 0x28) = plVar1[5];
            }
            if (Variant::needs_deinit[(int)plVar1[1]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*plVar1 != 0)) {
              StringName::unref();
            }
            Memory::free_static(plVar1,false);
            *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar5 = *(long **)(this + 0xad0);
        } while ((int)plVar5[2] != 0);
        Memory::free_static(plVar5,false);
        *(undefined8 *)(this + 0xad0) = 0;
      }
    }
LAB_001002c1:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<Ref<Resource>, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> >, DefaultTypedAllocator<HashMapElement<Ref<Resource>,
   Ref<Resource> > > >::_lookup_pos(Ref<Resource> const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
::_lookup_pos(HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
              *this,Ref *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(Ref **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* InspectorDock::_edit_back() */

void __thiscall InspectorDock::_edit_back(InspectorDock *this)

{
  char cVar1;
  int iVar2;
  
  if (*(long *)(this + 0xa20) != 0) {
    cVar1 = EditorSelectionHistory::previous();
    if (cVar1 != '\0') goto LAB_001004f9;
  }
  iVar2 = EditorSelectionHistory::get_path_size();
  if (iVar2 != 1) {
    return;
  }
LAB_001004f9:
  EditorNode::_edit_current(SUB81(EditorNode::singleton,0),false);
  return;
}



/* InspectorDock::~InspectorDock() */

void __thiscall InspectorDock::~InspectorDock(InspectorDock *this)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  plVar2 = *(long **)(this + 0xad0);
  *(undefined ***)this = &PTR__initialize_classv_001116a8;
  singleton = 0;
  if (plVar2 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      if (plVar1 == (long *)0x0) {
        if ((int)plVar2[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001005f2;
        }
        break;
      }
      if ((long *)plVar1[6] == plVar2) {
        *plVar2 = plVar1[4];
        if (plVar1 == (long *)plVar2[1]) {
          plVar2[1] = plVar1[5];
        }
        if (plVar1[5] != 0) {
          *(long *)(plVar1[5] + 0x20) = plVar1[4];
        }
        if (plVar1[4] != 0) {
          *(long *)(plVar1[4] + 0x28) = plVar1[5];
        }
        if (Variant::needs_deinit[(int)plVar1[1]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*plVar1 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar1,false);
        *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar2 = *(long **)(this + 0xad0);
    } while ((int)plVar2[2] != 0);
    Memory::free_static(plVar2,false);
  }
LAB_001005f2:
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010063f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010063f:
  Control::~Control((Control *)this);
  return;
}



/* InspectorDock::~InspectorDock() */

void __thiscall InspectorDock::~InspectorDock(InspectorDock *this)

{
  ~InspectorDock(this);
  operator_delete(this,0xad8);
  return;
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* InspectorDock::_resource_selected(Ref<Resource> const&, String const&) */

void __thiscall InspectorDock::_resource_selected(InspectorDock *this,Ref *param_1,String *param_2)

{
  String *pSVar1;
  char cVar2;
  
  pSVar1 = *(String **)param_1;
  if (pSVar1 != (String *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      EditorNode::push_item(EditorNode::singleton,(String *)0x0,SUB81(param_2,0));
      return;
    }
    EditorNode::push_item(EditorNode::singleton,pSVar1,SUB81(param_2,0));
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)pSVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
        Memory::free_static(pSVar1,false);
        return;
      }
    }
  }
  return;
}



/* InspectorDock::_get_current_resource() const */

InspectorDock * __thiscall InspectorDock::_get_current_resource(InspectorDock *this)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = EditorSelectionHistory::get_current();
  if (uVar3 != 0) {
    uVar5 = (uint)uVar3 & 0xffffff;
    if (uVar5 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar7 = (char)ObjectDB::spin_lock == '\0';
        if (bVar7) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar7) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
      if ((uVar3 >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        *(undefined8 *)this = 0;
        goto LAB_00100849;
      }
      uVar3 = puVar6[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar3 != 0) &&
         (lVar4 = __dynamic_cast(uVar3,&Object::typeinfo,&Resource::typeinfo,0), lVar4 != 0)) {
        *(long *)this = lVar4;
        cVar2 = RefCounted::init_ref();
        if (cVar2 != '\0') goto LAB_00100849;
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
  }
  *(undefined8 *)this = 0;
LAB_00100849:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* InspectorDock::_menu_collapseall() */

void InspectorDock::_menu_collapseall(void)

{
  EditorInspector::collapse_all_folding();
  return;
}



/* InspectorDock::_menu_expandall() */

void InspectorDock::_menu_expandall(void)

{
  EditorInspector::expand_all_folding();
  return;
}



/* InspectorDock::_menu_expand_revertable() */

void InspectorDock::_menu_expand_revertable(void)

{
  EditorInspector::expand_revertable();
  return;
}



/* InspectorDock::get_addon_area() */

InspectorDock * __thiscall InspectorDock::get_addon_area(InspectorDock *this)

{
  return this;
}



/* InspectorDock::clear() */

void InspectorDock::clear(void)

{
  return;
}



/* InspectorDock::go_back() */

void __thiscall InspectorDock::go_back(InspectorDock *this)

{
  _edit_back(this);
  return;
}



/* InspectorDock::get_property_name_style() const */

undefined4 __thiscall InspectorDock::get_property_name_style(InspectorDock *this)

{
  return *(undefined4 *)(this + 0xac8);
}



/* InspectorDock::_new_resource() */

void __thiscall InspectorDock::_new_resource(InspectorDock *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar1 = *(undefined8 *)(this + 0xa40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &_LC20;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = &_LC20;
  local_58 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  CreateDialog::popup_create(SUB81(uVar1,0),true,(String *)0x0,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_select_history(int) */

void InspectorDock::_select_history(int param_1)

{
  String *pSVar1;
  ulong uVar2;
  Object *pOVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = EditorSelectionHistory::get_history_obj((int)EditorNode::singleton + 0x5a0);
  pOVar3 = EditorNode::singleton;
  uVar5 = (uint)uVar4 & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar2 = (ulong)local_38 >> 8;
      local_38 = (undefined *)(uVar2 << 8);
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      local_38 = (undefined *)(uVar2 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((uVar4 >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      pSVar1 = (String *)puVar6[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (pSVar1 != (String *)0x0) {
        local_38 = &_LC20;
        local_40 = 0;
        local_30 = 0;
        String::parse_latin1((StrRange *)&local_40);
        EditorNode::push_item(pOVar3,pSVar1,SUB81((StrRange *)&local_40,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_resource_created() */

void InspectorDock::_resource_created(void)

{
  bool bVar1;
  Object *pOVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CreateDialog::instantiate_selected();
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (bVar1) {
    pOVar2 = Variant::operator_cast_to_Object_((Variant *)local_48);
    if (pOVar2 != (Object *)0x0) {
      pSVar3 = (String *)__dynamic_cast(pOVar2,&Object::typeinfo,&Resource::typeinfo,0);
      pOVar2 = EditorNode::singleton;
      if (pSVar3 != (String *)0x0) {
        local_60 = 0;
        local_50 = 0;
        local_58 = &_LC20;
        String::parse_latin1((StrRange *)&local_60);
        EditorNode::push_item(pOVar2,pSVar3,SUB81((StrRange *)&local_60,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00100cf6;
      }
    }
    _err_print_error("_resource_created","editor/inspector_dock.cpp",0x17e,
                     "Parameter \"r\" is null.",0,0);
  }
  else {
    _err_print_error("_resource_created","editor/inspector_dock.cpp",0x17c,
                     "Condition \"!c\" is true.",0,0);
  }
LAB_00100cf6:
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::edit_resource(Ref<Resource> const&) */

void __thiscall InspectorDock::edit_resource(InspectorDock *this,Ref *param_1)

{
  String *pSVar1;
  char cVar2;
  bool bVar3;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC20;
  local_30 = 0;
  String::parse_latin1((StrRange *)&local_40);
  pSVar1 = *(String **)param_1;
  if (pSVar1 != (String *)0x0) {
    cVar2 = RefCounted::reference();
    bVar3 = SUB81((StrRange *)&local_40,0);
    if (cVar2 == '\0') {
      EditorNode::push_item(EditorNode::singleton,(String *)0x0,bVar3);
    }
    else {
      EditorNode::push_item(EditorNode::singleton,pSVar1,bVar3);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)pSVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
          Memory::free_static(pSVar1,false);
        }
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::shortcut_input(Ref<InputEvent> const&) */

void __thiscall InspectorDock::shortcut_input(InspectorDock *this,Ref *param_1)

{
  char cVar1;
  float fVar2;
  Object *pOVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("shortcut_input","editor/inspector_dock.cpp",0x273,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0)
    ;
    if ((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
      cVar1 = InputEvent::is_pressed();
      if ((cVar1 != '\0') &&
         ((cVar1 = (**(code **)(*(long *)pOVar3 + 0x1c8))(pOVar3), cVar1 == '\0' &&
          (cVar1 = CanvasItem::is_visible(), cVar1 != '\0')))) {
        auVar6 = Control::get_rect();
        uVar5 = CanvasItem::get_local_mouse_position();
        if ((auVar6._8_4_ < 0.0) || (auVar6._12_4_ < 0.0)) {
          _err_print_error("has_point","./core/math/rect2.h",0xb9,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        if (auVar6._0_4_ <= (float)uVar5) {
          fVar2 = (float)((ulong)uVar5 >> 0x20);
          if (((auVar6._4_4_ <= fVar2) && ((float)uVar5 < auVar6._8_4_ + auVar6._0_4_)) &&
             (fVar2 < auVar6._12_4_ + auVar6._4_4_)) {
            pSVar4 = (String *)EditorSettings::get_singleton();
            local_48 = 0;
            String::parse_latin1((String *)&local_48,"editor/open_search");
            cVar1 = EditorSettings::is_shortcut(pSVar4,(Ref *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            if (cVar1 != '\0') {
              Control::grab_focus();
              LineEdit::select_all();
              Control::accept_event();
            }
          }
        }
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar3,false);
          return;
        }
        goto LAB_00101108;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101108:
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



/* InspectorDock::_prepare_history() */

void __thiscall InspectorDock::_prepare_history(InspectorDock *this)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  String *pSVar12;
  Object *pOVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  StringName *pSVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  ulong *puVar26;
  char *pcVar27;
  StringName *pSVar28;
  ulong uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  int local_e0;
  Object *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar11 = (int)EditorNode::singleton;
  EditorSelectionHistory::cleanup_history();
  local_e0 = EditorSelectionHistory::get_history_len();
  local_e0 = local_e0 + -0x19;
  if (local_e0 < 0) {
    local_e0 = 0;
  }
  bVar15 = (bool)MenuButton::get_popup();
  PopupMenu::clear(bVar15);
  local_68 = 2;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  iVar17 = EditorSelectionHistory::get_history_len();
  iVar17 = iVar17 + -1;
  if (local_e0 <= iVar17) {
    do {
      uVar19 = EditorSelectionHistory::get_history_obj(iVar11 + 0x5a0);
      uVar25 = (uint)uVar19 & 0xffffff;
      if (uVar25 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar20 = local_98[0] >> 8;
          local_98[0] = uVar20 << 8;
          LOCK();
          bVar15 = (char)ObjectDB::spin_lock == '\0';
          if (bVar15) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar15) break;
          local_98[0] = uVar20 << 8;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar26 = (ulong *)((ulong)uVar25 * 0x10 + ObjectDB::object_slots);
        if ((uVar19 >> 0x18 & 0x7fffffffff) != (*puVar26 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          goto LAB_001014db;
        }
        pSVar28 = (StringName *)puVar26[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (pSVar28 == (StringName *)0x0) goto LAB_001014db;
        if ((local_88._0_8_ != 0) && (local_68._4_4_ != 0)) {
          uVar29 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4));
          lVar23 = *(long *)(hash_table_size_primes_inv + (local_68 & 0xffffffff) * 8);
          uVar20 = uVar19 * 0x3ffff - 1;
          uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
          uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
          uVar20 = uVar20 >> 0x16 ^ uVar20;
          uVar30 = uVar20 & 0xffffffff;
          if ((int)uVar20 == 0) {
            uVar30 = 1;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar30 * lVar23;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar29;
          lVar24 = SUB168(auVar3 * auVar7,8);
          uVar25 = *(uint *)(local_78._8_8_ + lVar24 * 4);
          uVar20 = (ulong)uVar25;
          iVar18 = SUB164(auVar3 * auVar7,8);
          if (uVar25 != 0) {
            uVar25 = 0;
            do {
              if (((int)uVar20 == (int)uVar30) &&
                 (uVar19 == *(ulong *)(local_88._0_8_ +
                                      (ulong)*(uint *)(local_88._8_8_ + lVar24 * 4) * 8)))
              goto LAB_001014db;
              uVar25 = uVar25 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar23;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar29;
              lVar24 = SUB168(auVar4 * auVar8,8);
              uVar1 = *(uint *)(local_78._8_8_ + lVar24 * 4);
              uVar20 = (ulong)uVar1;
              iVar18 = SUB164(auVar4 * auVar8,8);
            } while ((uVar1 != 0) &&
                    (auVar5._8_8_ = 0, auVar5._0_8_ = uVar20 * lVar23, auVar9._8_8_ = 0,
                    auVar9._0_8_ = uVar29, auVar6._8_8_ = 0,
                    auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (local_68 & 0xffffffff) * 4) + iVar18) -
                                          SUB164(auVar5 * auVar9,8)) * lVar23, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar29, uVar25 <= SUB164(auVar6 * auVar10,8)));
          }
        }
        HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert
                  ((ObjectID *)local_98);
        pSVar12 = EditorNode::singleton;
        local_98[0] = 0;
        String::parse_latin1((String *)local_98,"Object");
        EditorNode::get_object_icon((Object *)&local_c0,pSVar12);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        local_b8 = 0;
        StringName::StringName((StringName *)local_98,"_get_editor_name",false);
        cVar16 = Object::has_method(pSVar28);
        if ((StringName::configured != '\0') && (local_98[0] != 0)) {
          StringName::unref();
        }
        pcVar27 = "_get_editor_name";
        if (cVar16 == '\0') {
          pSVar21 = (StringName *)__dynamic_cast(pSVar28,&Object::typeinfo,&Resource::typeinfo,0);
          if (pSVar21 == (StringName *)0x0) {
            lVar23 = __dynamic_cast(pSVar28,&Object::typeinfo,&Node::typeinfo,0);
            if (lVar23 != 0) {
              Node::get_name();
              if (local_a0 == 0) {
                local_98[0] = 0;
              }
              else {
                local_98[0] = 0;
                if (*(char **)(local_a0 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)local_98,(CowData *)(local_a0 + 0x10));
                }
                else {
                  String::parse_latin1((String *)local_98,*(char **)(local_a0 + 8));
                }
              }
              if (local_b8 != local_98[0]) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                local_b8 = local_98[0];
                local_98[0] = 0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              goto joined_r0x00101a09;
            }
            pcVar2 = *(code **)(*(long *)pSVar28 + 0x58);
            local_98[0] = 0;
            String::parse_latin1((String *)local_98,"EditorDebuggerRemoteObject");
            cVar16 = (*pcVar2)(pSVar28,(ObjectID *)local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
            if (cVar16 != '\0') {
              pcVar27 = "get_title";
              goto LAB_0010184b;
            }
            lVar23 = *(long *)pSVar28;
LAB_00101a41:
            (**(code **)(lVar23 + 0x48))((ObjectID *)local_98,pSVar28);
            if (local_b8 != local_98[0]) {
LAB_00101a58:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_b8 = local_98[0];
              local_98[0] = 0;
            }
LAB_00101a73:
            CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
            goto LAB_001018dc;
          }
          Resource::get_path();
          cVar16 = String::is_resource_file();
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
          if (cVar16 == '\0') {
            Resource::get_name();
            if ((local_98[0] == 0) || (iVar18 = (int)*(undefined8 *)(local_98[0] - 8), iVar18 == 0))
            {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
LAB_00101a3a:
              lVar23 = *(long *)pSVar21;
              pSVar28 = pSVar21;
              goto LAB_00101a41;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
            if (iVar18 == 1) goto LAB_00101a3a;
            Resource::get_name();
            if (local_b8 != local_98[0]) goto LAB_00101a58;
            goto LAB_00101a73;
          }
          Resource::get_path();
          String::get_file();
          if (local_b8 != local_98[0]) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = local_98[0];
            local_98[0] = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          iVar18 = EditorSelectionHistory::get_history_pos();
        }
        else {
LAB_0010184b:
          StringName::StringName((StringName *)&local_a0,pcVar27,false);
          Object::call<>((StringName *)local_58);
          Variant::operator_cast_to_String((Variant *)local_98);
          if (local_b8 != local_98[0]) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = local_98[0];
            local_98[0] = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
joined_r0x00101a09:
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
LAB_001018dc:
          iVar18 = EditorSelectionHistory::get_history_pos();
        }
        if ((iVar18 == iVar17) && (*(long *)(this + 0xa20) != 0)) {
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"");
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"(Current)");
          TTR((String *)&local_a0,(String *)&local_b0);
          operator+((char *)local_98,(String *)&_LC55);
          String::operator+=((String *)&local_b8,(String *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        uVar22 = MenuButton::get_popup();
        PopupMenu::add_icon_item(uVar22,(Object *)&local_c0,(CowData<char32_t> *)&local_b8,iVar17);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        if (((local_c0 != (Object *)0x0) &&
            (cVar16 = RefCounted::unreference(), pOVar13 = local_c0, cVar16 != '\0')) &&
           (cVar16 = predelete_handler(local_c0), cVar16 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0);
LAB_001014db:
        local_e0 = local_e0 - (uint)(0 < local_e0);
      }
      iVar17 = iVar17 + -1;
    } while (local_e0 <= iVar17);
    uVar22 = local_88._0_8_;
    if ((void *)local_88._0_8_ != (void *)0x0) {
      uVar14 = local_78._8_8_;
      if ((local_68._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0)) {
        memset((void *)local_78._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) * 4);
      }
      Memory::free_static((void *)uVar22,false);
      Memory::free_static((void *)local_78._0_8_,false);
      Memory::free_static((void *)local_88._8_8_,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar14,false);
        return;
      }
      goto LAB_00101b09;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101b09:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_save_resource(bool) */

void __thiscall InspectorDock::_save_resource(InspectorDock *this,bool param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current_resource((InspectorDock *)&local_30);
  if (local_30 == (Object *)0x0) {
    _err_print_error("_save_resource","editor/inspector_dock.cpp",0x111,
                     "Condition \"current_res.is_null()\" is true.",0,0);
    Ref<Resource>::unref((Ref<Resource> *)&local_30);
  }
  else {
    if (param_1) {
      local_28 = 0;
      EditorNode::save_resource_as(EditorNode::singleton,(String *)&local_30);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    }
    else {
      EditorNode::save_resource(EditorNode::singleton);
    }
    if (local_30 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_30);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_30 + 0x140))(local_30);
          Memory::free_static(local_30,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_unref_resource() */

void InspectorDock::_unref_resource(void)

{
  code *pcVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current_resource((InspectorDock *)&local_48);
  if (local_48 == (Object *)0x0) {
    _err_print_error("_unref_resource","editor/inspector_dock.cpp",0x11c,
                     "Condition \"current_res.is_null()\" is true.",0,0);
    Ref<Resource>::unref((Ref<Resource> *)&local_48);
  }
  else {
    local_40 = 0;
    local_30 = 0;
    pcVar1 = *(code **)(*(long *)local_48 + 0x188);
    local_38 = &_LC20;
    String::parse_latin1((StrRange *)&local_40);
    (*pcVar1)(local_48,(StrRange *)&local_40,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    EditorNode::_edit_current(SUB81(EditorNode::singleton,0),false);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_48,false);
          return;
        }
        goto LAB_00101d52;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_copy_resource() */

void InspectorDock::_copy_resource(void)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current_resource((InspectorDock *)&local_28);
  if (local_28 == (Object *)0x0) {
    _err_print_error("_copy_resource","editor/inspector_dock.cpp",0x123,
                     "Condition \"current_res.is_null()\" is true.",0,0);
    Ref<Resource>::unref((Ref<Resource> *)&local_28);
  }
  else {
    lVar3 = EditorSettings::get_singleton();
    pOVar1 = *(Object **)(lVar3 + 0x300);
    if (local_28 != pOVar1) {
      *(Object **)(lVar3 + 0x300) = local_28;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(lVar3 + 0x300) = 0;
      }
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_28);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_28,false);
          return;
        }
        goto LAB_00101ea2;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101ea2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_prepare_resource_extra_popup() */

void InspectorDock::_prepare_resource_extra_popup(void)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = EditorSettings::get_singleton();
  pOVar8 = *(Object **)(lVar7 + 0x300);
  if (pOVar8 != (Object *)0x0) {
    local_38 = (Object *)0x0;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar8 = (Object *)0x0;
    }
    Ref<Resource>::unref((Ref<Resource> *)&local_38);
  }
  iVar5 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar5);
  PopupMenu::set_item_disabled(iVar5,bVar4);
  _get_current_resource((InspectorDock *)&local_38);
  pOVar2 = local_38;
  if (local_38 == (Object *)0x0) {
    bVar4 = (bool)PopupMenu::get_item_index(iVar5);
    PopupMenu::set_item_disabled(iVar5,bVar4);
  }
  else {
    if ((*(long *)(local_38 + 0x188) != 0) && (1 < *(uint *)(*(long *)(local_38 + 0x188) + -8))) {
      pOVar1 = local_38 + 0x188;
      iVar6 = String::find((char *)pOVar1,0x107b20);
      if (iVar6 == -1) {
        String::begins_with((char *)pOVar1);
      }
    }
    bVar4 = (bool)PopupMenu::get_item_index(iVar5);
    PopupMenu::set_item_disabled(iVar5,bVar4);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  if (((pOVar8 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
     (cVar3 = predelete_handler(pOVar8), cVar3 == '\0')) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar8,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_paste_resource() */

void InspectorDock::_paste_resource(void)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  String *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = EditorSettings::get_singleton();
  pOVar1 = *(Object **)(lVar4 + 0x300);
  if (pOVar1 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    pOVar2 = EditorNode::singleton;
    if (cVar3 != '\0') {
      local_40 = 0;
      lVar4 = EditorSettings::get_singleton();
      local_48 = (String *)0x0;
      pSVar5 = *(String **)(lVar4 + 0x300);
      if (pSVar5 != (String *)0x0) {
        local_38 = 0;
        local_48 = pSVar5;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_48 = (String *)0x0;
          pSVar5 = (String *)0x0;
        }
        Ref<Resource>::unref((Ref<Resource> *)&local_38);
      }
      EditorNode::push_item(pOVar2,pSVar5,SUB81((CowData<char32_t> *)&local_40,0));
      Ref<Resource>::unref((Ref<Resource> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar1,false);
            return;
          }
          goto LAB_001021eb;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001021eb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_notification(int) [clone .part.0] */

void InspectorDock::_notification(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  StringName *pSVar5;
  undefined1 uVar6;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  char *pcVar8;
  Ref *pRVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  long local_30;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  pRVar9 = *(Ref **)(pSVar7 + 0xa48);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa50);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa58);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa60);
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa78);
  if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  iVar2 = MenuButton::get_popup();
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  uVar3 = PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_icon(iVar2,(Ref *)(ulong)uVar3);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  uVar3 = PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_icon(iVar2,(Ref *)(ulong)uVar3);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  uVar3 = PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_icon(iVar2,(Ref *)(ulong)uVar3);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  cVar1 = (**(code **)(*(long *)pSVar7 + 0x340))(pSVar7);
  pRVar9 = *(Ref **)(pSVar7 + 0xa28);
  if (cVar1 == '\0') {
    if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar9 = *(Ref **)(pSVar7 + 0xa30);
    if (_notification(int)::{lambda()#12}::operator()()::sname != '\0') goto LAB_0010249b;
    puVar10 = &_notification(int)::{lambda()#12}::operator()()::sname;
    pcVar8 = (char *)&_notification(int)::{lambda()#12}::operator()()::sname;
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
    if (iVar2 == 0) goto LAB_0010249b;
    uVar6 = 0x7a;
  }
  else {
    if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar9 = *(Ref **)(pSVar7 + 0xa30);
    if (_notification(int)::{lambda()#10}::operator()()::sname != '\0') goto LAB_0010249b;
    puVar10 = &_notification(int)::{lambda()#10}::operator()()::sname;
    pcVar8 = (char *)&_notification(int)::{lambda()#10}::operator()()::sname;
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
    uVar6 = 0x82;
    if (iVar2 == 0) goto LAB_0010249b;
  }
  _scs_create(pcVar8,(bool)uVar6);
  __cxa_atexit(StringName::~StringName,pcVar8,&__dso_handle);
  __cxa_guard_release(puVar10);
LAB_0010249b:
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  if (_notification(int)::{lambda()#13}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
    }
  }
  Control::get_theme_constant
            (pSVar7,(StringName *)&_notification(int)::{lambda()#13}::operator()()::sname);
  pSVar5 = (StringName *)MenuButton::get_popup();
  StringName::StringName((StringName *)&local_50,"icon_max_width",false);
  Window::add_theme_constant_override(pSVar5,(int)(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  pRVar9 = *(Ref **)(pSVar7 + 0xa68);
  if (_notification(int)::{lambda()#14}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa80);
  if (_notification(int)::{lambda()#15}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  Button::set_button_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa70);
  if (_notification(int)::{lambda()#16}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  LineEdit::set_right_icon(pRVar9);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  pRVar9 = *(Ref **)(pSVar7 + 0xa98);
  if (pSVar7[0xa90] == (StringName)0x0) {
    if (_notification(int)::{lambda()#19}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#19}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#19}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#19}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#19}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pSVar5 = *(StringName **)(pSVar7 + 0xa98);
    local_48 = Control::get_theme_color(pSVar7,(StringName *)(SceneStringNames::singleton + 0xb0));
    Control::add_theme_color_override(pSVar5,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  else {
    if (_notification(int)::{lambda()#17}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#17}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#17}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#17}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#17}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar9);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pSVar5 = *(StringName **)(pSVar7 + 0xa98);
    if (_notification(int)::{lambda()#18}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()#18}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#18}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#18}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#18}::operator()()::sname);
      }
    }
    local_48 = Control::get_theme_color
                         (pSVar7,(StringName *)
                                 &_notification(int)::{lambda()#18}::operator()()::sname);
    Control::add_theme_color_override(pSVar5,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_notification(int) */

void __thiscall InspectorDock::_notification(InspectorDock *this,int param_1)

{
  if (((param_1 - 0x2dU & 0xfffffffb) != 0) && (param_1 != 0x7da)) {
    return;
  }
  _notification((int)this);
  return;
}



/* InspectorDock::set_info(String const&, String const&, bool) */

void InspectorDock::set_info(String *param_1,String *param_2,bool param_3)

{
  Ref *pRVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  String in_CL;
  StringName *pSVar5;
  undefined7 in_register_00000011;
  StringName *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::hide();
  param_1[0xa90] = in_CL;
  pRVar1 = *(Ref **)(param_1 + 0xa98);
  if (in_CL == (String)0x0) {
    if (set_info(String_const&,String_const&,bool)::{lambda()#3}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&set_info(String_const&,String_const&,bool)::{lambda()#3}::
                                   operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&set_info(String_const&,String_const&,bool)::{lambda()#3}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_info(String_const&,String_const&,bool)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_info(String_const&,String_const&,bool)::{lambda()#3}::operator()()
                             ::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    pSVar6 = *(StringName **)(param_1 + 0xa98);
    pSVar5 = (StringName *)(SceneStringNames::singleton + 0xb0);
  }
  else {
    if (set_info(String_const&,String_const&,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&set_info(String_const&,String_const&,bool)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&set_info(String_const&,String_const&,bool)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_info(String_const&,String_const&,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_info(String_const&,String_const&,bool)::{lambda()#1}::operator()()
                             ::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    pSVar6 = *(StringName **)(param_1 + 0xa98);
    if (set_info(String_const&,String_const&,bool)::{lambda()#2}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&set_info(String_const&,String_const&,bool)::{lambda()#2}::
                                   operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&set_info(String_const&,String_const&,bool)::{lambda()#2}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_info(String_const&,String_const&,bool)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_info(String_const&,String_const&,bool)::{lambda()#2}::operator()()
                             ::sname);
      }
    }
    pSVar5 = (StringName *)
             &set_info(String_const&,String_const&,bool)::{lambda()#2}::operator()()::sname;
  }
  local_58 = Control::get_theme_color((StringName *)param_1,pSVar5);
  Control::add_theme_color_override(pSVar6,(Color *)(SceneStringNames::singleton + 0xb0));
  if ((((*(long *)param_2 != 0) && (1 < *(uint *)(*(long *)param_2 + -8))) &&
      (lVar2 = *(long *)CONCAT71(in_register_00000011,param_3), lVar2 != 0)) &&
     (1 < *(uint *)(lVar2 + -8))) {
    CanvasItem::show();
    Button::set_text(*(String **)(param_1 + 0xa98));
    uVar3 = *(undefined8 *)(param_1 + 0xaa0);
    local_60 = 0;
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_60,(CowData *)CONCAT71(in_register_00000011,param_3));
    AcceptDialog::set_text(uVar3,(CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InspectorDock::InspectorDock(EditorData&) */

void __thiscall InspectorDock::InspectorDock(InspectorDock *this,EditorData *param_1)

{
  StringName *pSVar1;
  code *pcVar2;
  Vector2 *pVVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  BoxContainer *pBVar8;
  Button *pBVar9;
  MenuButton *pMVar10;
  undefined8 uVar11;
  long *plVar12;
  Ref *pRVar13;
  String *pSVar14;
  EditorObjectSelector *this_00;
  CreateDialog *this_01;
  LineEdit *this_02;
  ConfirmationDialog *this_03;
  Label *pLVar15;
  Tree *this_04;
  AcceptDialog *this_05;
  EditorFileDialog *this_06;
  CallableCustom *pCVar16;
  EditorInspector *this_07;
  int iVar17;
  int iVar18;
  long in_FS_OFFSET;
  String local_b0 [8];
  long local_a8 [2];
  long local_98 [2];
  Variant *local_88;
  int local_78;
  float local_74;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined ***)this = &PTR__initialize_classv_001116a8;
  this[0xa0c] = (InspectorDock)0x1;
  this[0xa90] = (InspectorDock)0x0;
  *(undefined4 *)(this + 0xaa8) = 0xffffffff;
  *(undefined8 *)(this + 0xac0) = 0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  local_98[0] = 0;
  singleton = this;
  String::parse_latin1((String *)local_98,"Inspector");
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  *(EditorData **)(this + 0xa10) = param_1;
  uVar6 = EditorPropertyNameProcessor::get_default_inspector_style();
  *(undefined4 *)(this + 0xac8) = uVar6;
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00110fb8;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa48) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar1 = *(StringName **)(this + 0xa48);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar14 = *(String **)(this + 0xa48);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Create a new resource in memory and edit it.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa48),0,0);
  plVar12 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_new_resource");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa48),0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa50) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar1 = *(StringName **)(this + 0xa50);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar14 = *(String **)(this + 0xa50);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Load an existing resource from disk and edit it.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa50),0,0);
  plVar12 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,
             (_func_void *)"&InspectorDock::_open_resource_selector");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa50),0);
  pMVar10 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar10,(String *)local_98);
  postinitialize_handler((Object *)pMVar10);
  *(MenuButton **)(this + 0xa58) = pMVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa58),0));
  pSVar1 = *(StringName **)(this + 0xa58);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar14 = *(String **)(this + 0xa58);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Save the currently edited resource.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa58),0,0);
  uVar11 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Save");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_item(uVar11,local_b0,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar11 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Save As...");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_item(uVar11,local_b0,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock,int>
            ((InspectorDock *)local_98,(char *)this,(_func_void_int *)"&InspectorDock::_menu_option"
            );
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x240,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa58),0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
  pMVar10 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar10,(String *)local_98);
  postinitialize_handler((Object *)pMVar10);
  *(MenuButton **)(this + 0xa60) = pMVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa60),0));
  pSVar1 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar14 = *(String **)(this + 0xa60);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Extra resource options.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa60),0,0);
  plVar12 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,
             (_func_void *)"&InspectorDock::_prepare_resource_extra_popup");
  StringName::StringName((StringName *)local_a8,"about_to_popup",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  pRVar13 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Edit Resource from Clipboard");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"property_editor/paste_resource");
  ED_SHORTCUT(local_b0,(String *)local_a8,(String *)local_98,0,0);
  iVar17 = (int)local_b0;
  PopupMenu::add_shortcut(pRVar13,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar13 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Copy Resource");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"property_editor/copy_resource");
  ED_SHORTCUT(local_b0,(String *)local_a8,(String *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar13,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  iVar7 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar7,true);
  pSVar14 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  iVar18 = (int)(String *)local_98;
  PopupMenu::add_separator(pSVar14,iVar18);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar13 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Show in FileSystem");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"property_editor/show_in_filesystem");
  ED_SHORTCUT(local_b0,(String *)local_a8,(String *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar13,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar13 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Make Resource Built-In");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"property_editor/unref_resource");
  ED_SHORTCUT(local_b0,(String *)local_a8,(String *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar13,iVar17,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  iVar7 = MenuButton::get_popup();
  PopupMenu::set_item_disabled(iVar7,true);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock,int>
            ((InspectorDock *)local_98,(char *)this,(_func_void_int *)"&InspectorDock::_menu_option"
            );
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x240,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  BoxContainer::add_spacer(SUB81(pBVar8,0));
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa28) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa28),0));
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa28),0,0);
  pSVar14 = *(String **)(this + 0xa28);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Go to previous edited object in history.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
  plVar12 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_edit_back");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_98);
  Callable::~Callable((Callable *)local_98);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa30) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa30),0));
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa30),0,0);
  pSVar14 = *(String **)(this + 0xa30);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Go to next edited object in history.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  plVar12 = *(long **)(this + 0xa30);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_edit_forward");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  pMVar10 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar10,(String *)local_98);
  postinitialize_handler((Object *)pMVar10);
  *(MenuButton **)(this + 0xa68) = pMVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa68),2);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa68),0));
  pSVar1 = *(StringName **)(this + 0xa68);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar14 = *(String **)(this + 0xa68);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"History of recently edited objects.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa68),0,0);
  plVar12 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_prepare_history"
            );
  StringName::StringName((StringName *)local_a8,"about_to_popup",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock,int>
            ((InspectorDock *)local_98,(char *)this,
             (_func_void_int *)"&InspectorDock::_select_history");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x240,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00110fb8;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  this_00 = (EditorObjectSelector *)operator_new(0xc48,"");
  EditorObjectSelector::EditorObjectSelector
            (this_00,(EditorSelectionHistory *)(EditorNode::singleton + 0x5a0));
  postinitialize_handler((Object *)this_00);
  *(EditorObjectSelector **)(this + 0xa88) = this_00;
  Control::set_h_size_flags(this_00,3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa88),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa78) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar1 = *(StringName **)(this + 0xa78);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa78),0));
  pSVar14 = *(String **)(this + 0xa78);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Open documentation for this object.");
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar13 = *(Ref **)(this + 0xa78);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Open Documentation");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"property_editor/open_help");
  ED_SHORTCUT(local_b0,(String *)local_a8,(String *)local_98,0,0);
  BaseButton::set_shortcut(pRVar13);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa78),0,0);
  plVar12 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock,int>
            ((InspectorDock *)local_98,(char *)this,(_func_void_int *)"&InspectorDock::_menu_option"
            );
  Variant::Variant((Variant *)&local_78,10);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)&local_78;
  Callable::bindp((Variant **)local_a8,iVar18);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  this_01 = (CreateDialog *)operator_new(0xf00,"");
  CreateDialog::CreateDialog(this_01);
  postinitialize_handler((Object *)this_01);
  lVar4 = EditorNode::singleton;
  *(CreateDialog **)(this + 0xa40) = this_01;
  Node::add_child(*(undefined8 *)(lVar4 + 0x6c8),this_01,0,0);
  pSVar14 = *(String **)(this + 0xa40);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Resource");
  CreateDialog::set_base_type(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar12 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,
             (_func_void *)"&InspectorDock::_resource_created");
  StringName::StringName((StringName *)local_a8,"create",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00110fb8;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_98[0] = 0;
  LineEdit::LineEdit(this_02,(String *)local_98);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xa70) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa70),3);
  uVar11 = *(undefined8 *)(this + 0xa70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Filter Properties");
  TTR(local_b0,(String *)local_a8);
  LineEdit::set_placeholder(uVar11,local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa70),0,0);
  pMVar10 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar10,(String *)local_98);
  postinitialize_handler((Object *)pMVar10);
  *(MenuButton **)(this + 0xa80) = pMVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa80),0));
  pSVar1 = *(StringName **)(this + 0xa80);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa80),0,0);
  pSVar14 = *(String **)(this + 0xa80);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Manage object properties.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_prepare_menu");
  StringName::StringName((StringName *)local_a8,"about_to_popup",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock,int>
            ((InspectorDock *)local_98,(char *)this,(_func_void_int *)"&InspectorDock::_menu_option"
            );
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x240,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar9,(String *)local_98);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa98) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(this,*(undefined8 *)(this + 0xa98),0,0);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa98),0));
  CanvasItem::hide();
  plVar12 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,(_func_void *)"&InspectorDock::_info_pressed");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  this_03 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(ConfirmationDialog **)(this + 0xab0) = this_03;
  Node::add_child(this,this_03,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00111330;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xab0),pBVar8,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_98[0] = 0;
  Label::Label(pLVar15,(String *)local_98);
  postinitialize_handler((Object *)pLVar15);
  *(Label **)(this + 0xab8) = pLVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xab8),0,0);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  *(Tree **)(this + 0xac0) = this_04;
  Node::set_auto_translate_mode(this_04,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xac0),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xac0));
  uVar11 = *(undefined8 *)(this + 0xac0);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Property");
  TTR(local_b0,(String *)local_a8);
  Tree::set_column_title((int)uVar11,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pVVar3 = *(Vector2 **)(this + 0xac0);
  local_74 = (float)EditorScale::get_scale();
  local_74 = local_74 * __LC123;
  local_78 = 0;
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xac0),0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_98[0] = 0;
  Label::Label(pLVar15,(String *)local_98);
  postinitialize_handler((Object *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"This cannot be undone. Are you sure?");
  TTR(local_b0,(String *)local_a8);
  Label::set_text((String *)pLVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,pLVar15,0,0);
  plVar12 = *(long **)(this + 0xab0);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<InspectorDock>
            ((InspectorDock *)local_98,(char *)this,
             (_func_void *)"&InspectorDock::_menu_confirm_current");
  (*pcVar2)(plVar12,SceneStringNames::singleton + 0x268,(String *)local_98);
  Callable::~Callable((Callable *)local_98);
  this_05 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_05);
  postinitialize_handler((Object *)this_05);
  lVar4 = EditorNode::singleton;
  *(AcceptDialog **)(this + 0xaa0) = this_05;
  Node::add_child(*(undefined8 *)(lVar4 + 0x6c8),this_05,0);
  this_06 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_06);
  postinitialize_handler((Object *)this_06);
  *(EditorFileDialog **)(this + 0xa38) = this_06;
  Node::add_child(this,this_06,0,0);
  pSVar14 = *(String **)(this + 0xa38);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"res://");
  EditorFileDialog::set_current_dir(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar12 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  pCVar16 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar16);
  *(InspectorDock **)(pCVar16 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar16 + 0x20) = &_LC20;
  *(undefined ***)pCVar16 = &PTR_hash_00111b40;
  *(undefined8 *)(pCVar16 + 0x40) = 0;
  uVar11 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar16 + 0x10) = 0;
  *(undefined8 *)(pCVar16 + 0x30) = uVar11;
  *(code **)(pCVar16 + 0x38) = _resource_file_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
  *(char **)(pCVar16 + 0x20) = "InspectorDock::_resource_file_selected";
  Callable::Callable((Callable *)local_98,pCVar16);
  StringName::StringName((StringName *)local_a8,"file_selected",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  this_07 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_07);
  postinitialize_handler((Object *)this_07);
  *(EditorInspector **)(this + 0xa18) = this_07;
  Node::add_child(this,this_07,0,0);
  EditorInspector::set_autoclear(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_show_categories(SUB81(*(undefined8 *)(this + 0xa18),0),true);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),3);
  EditorInspector::set_use_doc_hints(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_hide_script(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_hide_metadata(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_use_settings_name_style(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_property_name_style
            (*(undefined8 *)(this + 0xa18),*(undefined4 *)(this + 0xac8));
  uVar11 = *(undefined8 *)(this + 0xa18);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"interface/inspector/disable_folding");
  _EDITOR_GET((String *)&local_78);
  bVar5 = Variant::operator_cast_to_bool((Variant *)&local_78);
  EditorInspector::set_use_folding(SUB81(uVar11,0),!bVar5);
  if (Variant::needs_deinit[local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  EditorInspector::register_text_enter(*(Node **)(this + 0xa18));
  EditorInspector::set_use_filter(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar12 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar12 + 0x108);
  pCVar16 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar16);
  *(InspectorDock **)(pCVar16 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar16 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar16 + 0x20) = &_LC20;
  *(undefined ***)pCVar16 = &PTR_hash_00111bd0;
  *(undefined8 *)(pCVar16 + 0x40) = 0;
  uVar11 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar16 + 0x10) = 0;
  *(undefined8 *)(pCVar16 + 0x30) = uVar11;
  *(code **)(pCVar16 + 0x38) = _resource_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar16,(int)pCVar16 + 0x28);
  *(char **)(pCVar16 + 0x20) = "InspectorDock::_resource_selected";
  Callable::Callable((Callable *)local_98,pCVar16);
  StringName::StringName((StringName *)local_a8,"resource_selected",false);
  (*pcVar2)(plVar12,(String *)local_a8,(String *)local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process_shortcut_input(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::update(Object*) */

void __thiscall InspectorDock::update(InspectorDock *this,Object *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  Ref *pRVar9;
  undefined1 uVar10;
  long lVar11;
  int iVar12;
  long in_FS_OFFSET;
  char local_72;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  uVar1 = *(undefined8 *)(this + 0xa28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorSelectionHistory::is_at_beginning();
  BaseButton::set_disabled(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(this + 0xa30);
  EditorSelectionHistory::is_at_end();
  BaseButton::set_disabled(SUB81(uVar1,0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa68),0));
  iVar7 = EditorSelectionHistory::get_history_len();
  if (0 < iVar7) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa68),0));
  }
  EditorObjectSelector::update_path();
  *(Object **)(this + 0xa20) = param_1;
  if (param_1 == (Object *)0x0) {
    cVar3 = '\0';
    cVar4 = '\0';
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa70),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
    local_72 = '\x01';
    uVar10 = (undefined1)*(undefined8 *)(this + 0xa78);
LAB_001050d6:
    BaseButton::set_disabled((bool)uVar10);
    iVar7 = MenuButton::get_popup();
    bVar5 = (bool)PopupMenu::get_item_index(iVar7);
    PopupMenu::set_item_disabled(iVar7,bVar5);
    bVar5 = (bool)PopupMenu::get_item_index(iVar7);
    PopupMenu::set_item_disabled(iVar7,bVar5);
    if (local_72 == '\0') {
      EditorObjectSelector::enable_path();
      pRVar9 = (Ref *)MenuButton::get_popup();
      PopupMenu::clear(SUB81(pRVar9,0));
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"Expand All");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"property_editor/expand_all");
      ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0);
      if (update(Object*)::{lambda()#1}::operator()()::sname == '\0') {
        iVar7 = __cxa_guard_acquire(&update(Object*)::{lambda()#1}::operator()()::sname);
        if (iVar7 != 0) {
          _scs_create((char *)&update(Object*)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update(Object*)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&update(Object*)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      iVar7 = (int)(Ref<Shortcut> *)&local_48;
      PopupMenu::add_icon_shortcut(pRVar9,(Ref *)&local_60,iVar7,true,false);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"Collapse All");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"property_editor/collapse_all");
      ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0);
      if (update(Object*)::{lambda()#2}::operator()()::sname == '\0') {
        iVar12 = __cxa_guard_acquire(&update(Object*)::{lambda()#2}::operator()()::sname);
        if (iVar12 != 0) {
          _scs_create((char *)&update(Object*)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update(Object*)::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&update(Object*)::{lambda()#2}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      PopupMenu::add_icon_shortcut(pRVar9,(Ref *)&local_60,iVar7,true,false);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"Expand Non-Default");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"property_editor/expand_revertable");
      ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0,0);
      PopupMenu::add_shortcut(pRVar9,iVar7,true,false);
      Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Property Name Style");
      TTR((String *)&local_48,(String *)&local_58);
      PopupMenu::add_separator((String *)pRVar9,iVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Raw (e.g. \"%s\")");
      TTR((String *)&local_50,(String *)&local_60);
      vformat<char_const*>((String *)&local_48,(char *)&local_50);
      PopupMenu::add_radio_check_item(pRVar9,(Ref<Shortcut> *)&local_48,0xe);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Capitalized (e.g. \"%s\")");
      TTR((String *)&local_50,(String *)&local_60);
      vformat<char_const*>((String *)&local_48,(char *)&local_50);
      PopupMenu::add_radio_check_item(pRVar9,(Ref<Shortcut> *)&local_48,0xf);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Localized (e.g. \"Z Index\")");
      TTR((String *)&local_48,(String *)&local_58);
      PopupMenu::add_radio_check_item(pRVar9,(Ref<Shortcut> *)&local_48,0x10);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      cVar6 = EditorPropertyNameProcessor::is_localization_available();
      if (cVar6 == '\0') {
        iVar12 = (int)pRVar9;
        uVar8 = PopupMenu::get_item_index(iVar12);
        PopupMenu::set_item_disabled(iVar12,SUB41(uVar8,0));
        local_50 = (long *)0x0;
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"Localization not available for current language.")
        ;
        TTR((String *)&local_48,(String *)&local_58);
        PopupMenu::set_item_tooltip(iVar12,(String *)(ulong)uVar8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      local_48 = 0;
      PopupMenu::add_separator((String *)pRVar9,iVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"Copy Properties");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"property_editor/copy_params");
      ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0,0);
      PopupMenu::add_shortcut(pRVar9,iVar7,true,false);
      Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = (long *)0x0;
      String::parse_latin1((String *)&local_50,"Paste Properties");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"property_editor/paste_params");
      ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0,0);
      PopupMenu::add_shortcut(pRVar9,iVar7,true,false);
      Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if (cVar4 != '\0' || cVar3 != '\0') {
        local_48 = 0;
        PopupMenu::add_separator((String *)pRVar9,iVar7);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        local_50 = (long *)0x0;
        String::parse_latin1((String *)&local_50,"Make Sub-Resources Unique");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"property_editor/make_subresources_unique");
        ED_SHORTCUT((Ref<Shortcut> *)&local_48,(String *)&local_58,(String *)&local_50,0,0);
        PopupMenu::add_shortcut(pRVar9,iVar7,true,false);
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      local_50 = (long *)0x0;
      Object::get_method_list((List *)param_1);
      if (((local_50 != (long *)0x0) && ((int)local_50[2] != 0)) &&
         (lVar11 = *local_50, lVar11 != 0)) {
        iVar12 = 500;
        do {
          if ((*(byte *)(lVar11 + 0x38) & 2) != 0) {
            if (local_72 == '\0') {
              local_48 = 0;
              PopupMenu::add_separator((String *)pRVar9,iVar7);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            }
            String::capitalize();
            PopupMenu::add_item(pRVar9,(Ref<Shortcut> *)&local_48,iVar12,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            local_72 = '\x01';
          }
          lVar11 = *(long *)(lVar11 + 0x70);
          iVar12 = iVar12 + 1;
        } while (lVar11 != 0);
      }
      List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_50);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001058f2;
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)param_1 + 0x58);
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"Resource");
    cVar3 = (*pcVar2)(param_1,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pcVar2 = *(code **)(*(long *)param_1 + 0x58);
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"TextFile");
    local_72 = (*pcVar2)(param_1,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    pcVar2 = *(code **)(*(long *)param_1 + 0x58);
    local_48 = 0;
    String::parse_latin1((String *)&local_48,"Node");
    cVar4 = (*pcVar2)(param_1,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa70),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
    uVar10 = (undefined1)*(undefined8 *)(this + 0xa78);
    if (local_72 == '\0') goto LAB_001050d6;
    BaseButton::set_disabled((bool)uVar10);
    iVar7 = MenuButton::get_popup();
    bVar5 = (bool)PopupMenu::get_item_index(iVar7);
    PopupMenu::set_item_disabled(iVar7,bVar5);
    bVar5 = (bool)PopupMenu::get_item_index(iVar7);
    PopupMenu::set_item_disabled(iVar7,bVar5);
  }
  CanvasItem::hide();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorObjectSelector::clear_path();
    return;
  }
LAB_001058f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_bind_methods() */

void InspectorDock::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  MethodBind *pMVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  int *local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar5 = create_method_bind<InspectorDock,Object*>(store_script_properties);
  StringName::StringName((StringName *)&local_c8,"store_script_properties",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar6 = (long *)(local_b8._0_8_ + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar6 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar5 = create_method_bind<InspectorDock,Object*>(apply_script_properties);
  StringName::StringName((StringName *)&local_c8,"apply_script_properties",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar6 = (long *)(local_b8._0_8_ + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar6 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"request_help");
  local_b8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_d8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"InspectorDock");
  StringName::StringName((StringName *)&local_d0,(String *)&local_e0,false);
  ClassDB::add_signal((StringName *)&local_d0,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar6 = (long *)(local_60 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar6 = (long *)(local_78 + -4);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar7 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_resource_file_selected(String const&) */

void __thiscall InspectorDock::_resource_file_selected(InspectorDock *this,String *param_1)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  String *pSVar6;
  long lVar7;
  long in_FS_OFFSET;
  String *local_80;
  undefined8 local_78;
  Ref *local_70;
  Ref *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Ref *)&_LC20;
  local_80 = (String *)0x0;
  local_70 = (Ref *)0x0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  cVar3 = ResourceLoader::exists(param_1,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  bVar4 = SUB81((StrRange *)&local_70,0);
  if (cVar3 == '\0') {
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"docks/filesystem/textfile_extensions");
    _EDITOR_GET((String *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_70);
    String::split((char *)&local_68,bVar4,0x107f5c);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    String::get_extension();
    if ((local_60 != 0) && (lVar5 = *(long *)(local_60 + -8), lVar5 != 0)) {
      lVar7 = 0;
      while (lVar7 < lVar5) {
        cVar3 = String::operator==((String *)(local_60 + lVar7 * 8),(String *)&local_70);
        if (cVar3 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          ScriptEditor::open_file((String *)&local_70);
          Ref<Resource>::operator=((Ref<Resource> *)&local_80,local_70);
          Ref<Resource>::unref((Ref<Resource> *)&local_70);
          pSVar6 = local_80;
          CowData<String>::_unref((CowData<String> *)&local_60);
          goto LAB_00105e16;
        }
        lVar7 = lVar7 + 1;
        if (local_60 == 0) break;
        lVar5 = *(long *)(local_60 + -8);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<String>::_unref((CowData<String> *)&local_60);
  }
  else {
    local_70 = (Ref *)0x0;
    String::parse_latin1((String *)&local_70,"");
    ResourceLoader::load((Ref<Resource> *)&local_68,param_1,(StrRange *)&local_70,1,0);
    Ref<Resource>::operator=((Ref<Resource> *)&local_80,local_68);
    Ref<Resource>::unref((Ref<Resource> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    pSVar6 = local_80;
LAB_00105e16:
    pOVar2 = EditorNode::singleton;
    if (pSVar6 != (String *)0x0) {
      local_70 = (Ref *)0x0;
      local_68 = (Ref *)&_LC20;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      EditorNode::push_item(pOVar2,pSVar6,bVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Ref<Resource>::unref((Ref<Resource> *)&local_80);
      goto LAB_00105e68;
    }
  }
  local_70 = (Ref *)0x0;
  uVar1 = *(undefined8 *)(this + 0xaa0);
  String::parse_latin1((String *)&local_70,"");
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"Failed to load resource.");
  TTR((String *)&local_68,(String *)&local_78);
  AcceptDialog::set_text(uVar1,(Ref<Resource> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Ref<Resource>::unref((Ref<Resource> *)&local_80);
LAB_00105e68:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* InspectorDock::_load_resource(String const&) */

void __thiscall InspectorDock::_load_resource(InspectorDock *this,String *param_1)

{
  String *pSVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long *local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  char *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa38),0);
  local_80 = (long *)0x0;
  ResourceLoader::get_recognized_extensions_for_type(param_1,(List *)&local_80);
  EditorFileDialog::clear_filters();
  if (local_80 != (long *)0x0) {
    for (lVar4 = *local_80; lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      pSVar1 = *(String **)(this + 0xa38);
      String::to_upper();
      operator+((char *)local_70,(String *)&_LC161);
      EditorFileDialog::add_filter(pSVar1,(String *)local_70);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
  }
  local_78 = 0;
  local_68 = "docks/filesystem/textfile_extensions";
  local_60 = 0x24;
  String::parse_latin1((StrRange *)&local_78);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)local_70);
  String::split((char *)&local_68,SUB81((Variant *)local_70,0),0x107f5c);
  CowData<char32_t>::_unref(local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar4 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  while( true ) {
    if ((local_60 == 0) || (pSVar1 = *(String **)(this + 0xa38), *(long *)(local_60 + -8) <= lVar4))
    {
      EditorFileDialog::popup_file_dialog();
      CowData<String>::_unref((CowData<String> *)&local_60);
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_80);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    String::to_upper();
    if (local_60 == 0) break;
    lVar3 = *(long *)(local_60 + -8);
    if (lVar3 <= lVar4) goto LAB_00106245;
    lVar4 = lVar4 + 1;
    operator+((char *)&local_78,(String *)&_LC161);
    EditorFileDialog::add_filter(pSVar1,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_70);
  }
  lVar3 = 0;
LAB_00106245:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar3,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* InspectorDock::open_resource(String const&) */

void __thiscall InspectorDock::open_resource(InspectorDock *this,String *param_1)

{
  _load_resource(this,param_1);
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



/* InspectorDock::_menu_option_confirm(int, bool) */

void __thiscall InspectorDock::_menu_option_confirm(InspectorDock *this,int param_1,bool param_2)

{
  CowData<char32_t> *this_00;
  int *piVar1;
  bool *pbVar2;
  void *pvVar3;
  StringName *pSVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  Object *pOVar12;
  Ref *pRVar13;
  undefined8 uVar14;
  Ref<Resource> *this_01;
  undefined8 *puVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  CowData *pCVar20;
  char *pcVar21;
  long lVar22;
  String *pSVar23;
  long in_FS_OFFSET;
  Ref<Resource> *local_110;
  CowData<String> *local_108;
  long local_f8;
  long *local_e8;
  long local_e0;
  Object *local_d8;
  Ref *local_d0;
  long local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    *(int *)(this + 0xaa8) = param_1;
  }
  switch(param_1) {
  default:
    if (499 < param_1) {
      if (*(List **)(this + 0xa20) == (List *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("_menu_option_confirm","editor/inspector_dock.cpp",0xd5,
                           "Parameter \"current\" is null.",0,0);
          return;
        }
        break;
      }
      uVar16 = param_1 - 500;
      local_d8 = (Object *)0x0;
      Object::get_method_list(*(List **)(this + 0xa20));
      if (local_d8 == (Object *)0x0) {
        lVar22 = 0;
      }
      else {
        lVar22 = (long)*(int *)(local_d8 + 0x10);
        if ((int)uVar16 < *(int *)(local_d8 + 0x10)) {
          pCVar20 = *(CowData **)local_d8;
          if (uVar16 != 0) {
            uVar9 = 0;
            if ((uVar16 & 1) != 0) {
              pCVar20 = *(CowData **)(pCVar20 + 0x70);
              uVar9 = 1;
              if (uVar16 == 1) goto LAB_00106b57;
            }
            do {
              uVar9 = uVar9 + 2;
              pCVar20 = *(CowData **)(*(long *)(pCVar20 + 0x70) + 0x70);
            } while (uVar16 != uVar9);
          }
LAB_00106b57:
          local_d0 = (Ref *)0x0;
          if (*(long *)pCVar20 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,pCVar20);
          }
          StringName::StringName((StringName *)&local_c8,(String *)&local_d0,false);
          Object::call<>((StringName *)local_78);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_c8 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_d8);
          goto LAB_0010658d;
        }
      }
      _err_print_index_error
                ("_menu_option_confirm","editor/inspector_dock.cpp",0xdc,(long)(int)uVar16,lVar22,
                 "idx","methods.size()","",false,false);
      List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_d8);
    }
    goto LAB_0010658d;
  case 1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      bVar8 = false;
LAB_001064f9:
      _save_resource(this,bVar8);
      return;
    }
    break;
  case 2:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      bVar8 = true;
      goto LAB_001064f9;
    }
    break;
  case 3:
    _get_current_resource((InspectorDock *)&local_d0);
    pSVar23 = FileSystemDock::singleton;
    if (local_d0 == (Ref *)0x0) {
      _err_print_error("_menu_option_confirm","editor/inspector_dock.cpp",0x5f,
                       "Condition \"current_res.is_null()\" is true.",0,0);
      Ref<Resource>::unref((Ref<Resource> *)&local_d0);
    }
    else {
      Resource::get_path();
      FileSystemDock::navigate_to_path(pSVar23);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      Ref<Resource>::unref((Ref<Resource> *)&local_d0);
    }
    goto LAB_0010658d;
  case 4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _unref_resource();
      return;
    }
    break;
  case 5:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _copy_resource();
      return;
    }
    break;
  case 6:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _paste_resource();
      return;
    }
    break;
  case 7:
    EditorData::apply_changes_in_editors();
    if (*(long *)(this + 0xa20) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorData::copy_object_params(*(Object **)(this + 0xa10));
        return;
      }
      break;
    }
    goto LAB_0010658d;
  case 8:
    EditorData::apply_changes_in_editors();
    if (*(long *)(this + 0xa20) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorData::paste_object_params(*(Object **)(this + 0xa10));
        return;
      }
      break;
    }
    goto LAB_0010658d;
  case 9:
    if (param_2) {
      EditorData::apply_changes_in_editors();
      if (*(List **)(this + 0xa20) != (List *)0x0) {
        local_e8 = (long *)0x0;
        Object::get_property_list
                  (*(List **)(this + 0xa20),
                   SUB81((List<PropertyInfo,DefaultAllocator> *)&local_e8,0));
        local_a0 = 2;
        local_c0 = (undefined1  [16])0x0;
        local_b0 = (undefined1  [16])0x0;
        if ((local_e8 != (long *)0x0) && (lVar22 = *local_e8, lVar22 != 0)) {
          do {
            if ((*(byte *)(lVar22 + 0x28) & 2) != 0) {
              pbVar2 = *(bool **)(this + 0xa20);
              StringName::StringName((StringName *)&local_d0,(String *)(lVar22 + 8),false);
              Object::get((StringName *)local_98,pbVar2);
              if ((StringName::configured != '\0') && (local_d0 != (Ref *)0x0)) {
                StringName::unref();
              }
              cVar7 = Variant::is_ref_counted();
              if (cVar7 != '\0') {
                local_e0 = 0;
                Ref<RefCounted>::operator=((Ref<RefCounted> *)&local_e0,(Variant *)local_98);
                if (local_e0 != 0) {
                  local_d8 = (Object *)0x0;
                  pRVar13 = (Ref *)__dynamic_cast(local_e0,&Object::typeinfo,&Resource::typeinfo,0);
                  if (pRVar13 != (Ref *)0x0) {
                    local_d8 = (Object *)pRVar13;
                    cVar7 = RefCounted::reference();
                    if (cVar7 == '\0') {
                      local_d8 = (Object *)0x0;
                    }
                    else {
                      cVar7 = HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                              ::_lookup_pos((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                                             *)&local_c8,pRVar13,(uint *)&local_d0);
                      if (cVar7 == '\0') {
                        (**(code **)(*(long *)pRVar13 + 0x198))((StringName *)&local_d0,pRVar13,0);
                        this_01 = (Ref<Resource> *)
                                  HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                                  ::operator[]((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                                                *)&local_c8,(Ref *)&local_d8);
                        Ref<Resource>::operator=(this_01,local_d0);
                        Ref<Resource>::unref((Ref<Resource> *)&local_d0);
                      }
                      puVar15 = (undefined8 *)
                                HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                                ::operator[]((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
                                              *)&local_c8,(Ref *)&local_d8);
                      Ref<Resource>::operator=((Ref<Resource> *)&local_d8,(Ref *)*puVar15);
                      pSVar4 = *(StringName **)(this + 0xa20);
                      Variant::Variant((Variant *)local_78,local_d8);
                      StringName::StringName((StringName *)&local_d0,(String *)(lVar22 + 8),false);
                      Object::set(pSVar4,(Variant *)&local_d0,(bool *)local_78);
                      if ((StringName::configured != '\0') && (local_d0 != (Ref *)0x0)) {
                        StringName::unref();
                      }
                      if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      EditorInspector::update_property(*(String **)(singleton + 0xa18));
                    }
                  }
                  local_110 = (Ref<Resource> *)&local_d8;
                  Ref<Resource>::unref(local_110);
                }
                Ref<RefCounted>::unref((Ref<RefCounted> *)&local_e0);
              }
              if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            lVar22 = *(long *)(lVar22 + 0x30);
          } while (lVar22 != 0);
          uVar14 = local_c0._0_8_;
          if ((undefined8 *)local_c0._0_8_ != (undefined8 *)0x0) {
            uVar6 = local_c0._8_8_;
            if ((local_a0._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4) != 0)) {
              piVar1 = (int *)(local_c0._8_8_ +
                              (ulong)*(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4)
                              * 4);
              piVar17 = (int *)local_c0._8_8_;
              puVar15 = (undefined8 *)local_c0._0_8_;
              do {
                if (*piVar17 != 0) {
                  pvVar3 = (void *)*puVar15;
                  *piVar17 = 0;
                  Ref<Resource>::unref((Ref<Resource> *)((long)pvVar3 + 0x18));
                  Ref<Resource>::unref((Ref<Resource> *)((long)pvVar3 + 0x10));
                  Memory::free_static(pvVar3,false);
                  *puVar15 = 0;
                }
                piVar17 = piVar17 + 1;
                puVar15 = puVar15 + 1;
              } while (piVar17 != piVar1);
            }
            Memory::free_static((void *)uVar14,false);
            Memory::free_static((void *)uVar6,false);
          }
        }
        List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_e8)
        ;
      }
      pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
      bVar8 = (bool)EditorUndoRedoManager::get_history_id_for_object(pOVar12);
      iVar11 = EditorUndoRedoManager::get_singleton();
      EditorUndoRedoManager::clear_history(iVar11,bVar8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorNode::edit_item(EditorNode::singleton,*(Object **)(this + 0xa20));
        return;
      }
      break;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_c0._8_8_;
    local_c0 = auVar5 << 0x40;
    if (*(List **)(this + 0xa20) == (List *)0x0) {
LAB_00106eb8:
      Tree::clear();
LAB_00106ef5:
      *(undefined4 *)(this + 0xaa8) = 0xffffffff;
      local_d8 = (Object *)0x0;
      pSVar23 = *(String **)(this + 0xab8);
      String::parse_latin1((String *)&local_d8,"");
      pcVar21 = "This object has no resources.";
    }
    else {
      local_e8 = (long *)0x0;
      Object::get_property_list
                (*(List **)(this + 0xa20),SUB81((List<PropertyInfo,DefaultAllocator> *)&local_e8,0))
      ;
      if ((local_e8 == (long *)0x0) || (lVar22 = *local_e8, lVar22 == 0)) {
        List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_e8)
        ;
        goto LAB_00106eb8;
      }
      local_f8 = 0;
      do {
        if (((*(uint *)(lVar22 + 0x28) & 2) != 0) && ((*(uint *)(lVar22 + 0x28) & 0x100000) == 0)) {
          pbVar2 = *(bool **)(this + 0xa20);
          StringName::StringName((StringName *)&local_d0,(String *)(lVar22 + 8),false);
          Object::get((StringName *)local_78,pbVar2);
          if ((StringName::configured != '\0') && (local_d0 != (Ref *)0x0)) {
            StringName::unref();
          }
          local_e0 = 0;
          Ref<RefCounted>::operator=((Ref<RefCounted> *)&local_e0,(Variant *)local_78);
          local_d8 = (Object *)0x0;
          if (local_e0 == 0) {
            Variant::is_ref_counted();
          }
          else {
            pOVar12 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&Resource::typeinfo,0);
            if (pOVar12 != (Object *)0x0) {
              local_d0 = (Ref *)0x0;
              local_d8 = pOVar12;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_d8 = (Object *)0x0;
              }
              Ref<Resource>::unref((Ref<Resource> *)&local_d0);
            }
            cVar7 = Variant::is_ref_counted();
            if ((cVar7 != '\0') && (local_d8 != (Object *)0x0)) {
              local_d0 = (Ref *)0x0;
              if (*(long *)(lVar22 + 8) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(lVar22 + 8));
              }
              if (local_f8 == 0) {
                lVar19 = 1;
              }
              else {
                lVar19 = *(long *)(local_f8 + -8) + 1;
              }
              iVar11 = CowData<String>::resize<false>((CowData<String> *)local_c0,lVar19);
              if (iVar11 == 0) {
                local_f8 = local_c0._0_8_;
                if (local_c0._0_8_ == 0) {
                  lVar18 = -1;
                  lVar19 = 0;
                }
                else {
                  lVar19 = *(long *)(local_c0._0_8_ + -8);
                  lVar18 = lVar19 + -1;
                  if (-1 < lVar18) {
                    CowData<String>::_copy_on_write((CowData<String> *)local_c0);
                    this_00 = (CowData<char32_t> *)(local_c0._0_8_ + lVar18 * 8);
                    local_f8 = local_c0._0_8_;
                    if (*(Ref **)this_00 != local_d0) {
                      CowData<char32_t>::_ref(this_00,(CowData *)&local_d0);
                    }
                    goto LAB_00106938;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar19,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
                local_f8 = local_c0._0_8_;
              }
LAB_00106938:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            }
          }
          Ref<Resource>::unref((Ref<Resource> *)&local_d8);
          Ref<RefCounted>::unref((Ref<RefCounted> *)&local_e0);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        lVar22 = *(long *)(lVar22 + 0x30);
      } while (lVar22 != 0);
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_e8);
      Tree::clear();
      if ((local_f8 == 0) || (*(long *)(local_f8 + -8) == 0)) goto LAB_00106ef5;
      uVar10 = EditorInspector::get_property_name_style();
      iVar11 = Tree::create_item(*(TreeItem **)(this + 0xac0),0);
      CowData<String>::_copy_on_write((CowData<String> *)local_c0);
      lVar19 = local_c0._0_8_;
      CowData<String>::_copy_on_write((CowData<String> *)local_c0);
      uVar14 = EditorPropertyNameProcessor::singleton;
      lVar22 = local_c0._0_8_;
      if (local_c0._0_8_ != 0) {
        lVar22 = local_c0._0_8_ + *(long *)(local_c0._0_8_ + -8) * 8;
      }
      for (; EditorPropertyNameProcessor::singleton = uVar14, lVar19 != lVar22; lVar19 = lVar19 + 8)
      {
        StringName::StringName((StringName *)&local_d0,"",false);
        local_d8 = (Object *)0x0;
        String::parse_latin1((String *)&local_d8,"");
        EditorPropertyNameProcessor::process_name
                  ((Ref<RefCounted> *)&local_e0,uVar14,lVar19,uVar10,(Ref<Resource> *)&local_d8,
                   (StringName *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        if ((StringName::configured != '\0') && (local_d0 != (Ref *)0x0)) {
          StringName::unref();
        }
        uVar14 = Tree::create_item(*(TreeItem **)(this + 0xac0),iVar11);
        local_d0 = (Ref *)0x0;
        if (local_e0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_e0);
        }
        TreeItem::set_text(uVar14,0,(StringName *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        uVar14 = EditorPropertyNameProcessor::singleton;
      }
      local_d8 = (Object *)0x0;
      pSVar23 = *(String **)(this + 0xab8);
      String::parse_latin1((String *)&local_d8,"");
      pcVar21 = 
      "The following resources will be duplicated and embedded within this resource/object.";
    }
    local_108 = (CowData<String> *)local_c0;
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,pcVar21);
    TTR((String *)&local_d0,(String *)&local_e0);
    Label::set_text(pSVar23);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    local_78[0] = 0;
    local_78[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xab0));
    CowData<String>::_unref(local_108);
    goto LAB_0010658d;
  case 10:
    if (*(long *)(this + 0xa20) != 0) {
      EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
      (**(code **)(**(long **)(this + 0xa20) + 0x48))((CowData<char32_t> *)&local_c8);
      if ((_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar11 = __cxa_guard_acquire(&_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::
                                        sname), iVar11 != 0)) {
        _scs_create((char *)&_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_78,(String *)&local_c8);
      local_58 = (undefined1  [16])0x0;
      local_60 = 0;
      local_98[0] = (Variant *)local_78;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_menu_option_confirm(int,bool)::{lambda()#1}::operator()()::sname,local_98,1)
      ;
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
LAB_0010658d:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
  case 0xb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::collapse_all_folding();
      return;
    }
    break;
  case 0xc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::expand_all_folding();
      return;
    }
    break;
  case 0xd:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::expand_revertable();
      return;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    *(int *)(this + 0xac8) = param_1 + -0xe;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::set_property_name_style(*(undefined8 *)(this + 0xa18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_menu_option(int) */

void __thiscall InspectorDock::_menu_option(InspectorDock *this,int param_1)

{
  _menu_option_confirm(this,param_1,false);
  return;
}



/* InspectorDock::_menu_confirm_current() */

void __thiscall InspectorDock::_menu_confirm_current(InspectorDock *this)

{
  _menu_option_confirm(this,*(int *)(this + 0xaa8),true);
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



/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void> *this)

{
  return;
}



/* MethodBindT<Object*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Object*>::_gen_argument_type(MethodBindT<Object*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Object*>::get_argument_meta(int) const */

undefined8 MethodBindT<Object*>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::
get_argument_count(CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<InspectorDock, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<InspectorDock, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::get_argument_count
          (CallableCustomMethodPointer<InspectorDock,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<InspectorDock, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void>::get_argument_count
          (CallableCustomMethodPointer<InspectorDock,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<InspectorDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111c60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111c60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* InspectorDock::_property_get_revertv(StringName const&, Variant&) const */

undefined8 InspectorDock::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* InspectorDock::_property_can_revertv(StringName const&) const */

undefined8 InspectorDock::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::get_object
          (CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&> *this)

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
      goto LAB_001086dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001086dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001086dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InspectorDock, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::get_object
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this)

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
      goto LAB_001087dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001087dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001087dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InspectorDock, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::get_object
          (CallableCustomMethodPointer<InspectorDock,void,int> *this)

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
      goto LAB_001088dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001088dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001088dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InspectorDock, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InspectorDock,void>::get_object
          (CallableCustomMethodPointer<InspectorDock,void> *this)

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
      goto LAB_001089dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001089dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001089dd:
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
  if ((code *)PTR__validate_property_00116010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* InspectorDock::_validate_propertyv(PropertyInfo&) const */

void InspectorDock::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00116010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* InspectorDock::_setv(StringName const&, Variant const&) */

undefined8 InspectorDock::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108da8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108e18) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108e88) */
/* InspectorDock::_getv(StringName const&, Variant&) const */

undefined8 InspectorDock::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1120,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1120,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1120,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* InspectorDock::is_class_ptr(void*) const */

ulong InspectorDock::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1120,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1120,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1120,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1120,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1120,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1120,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109060;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109060:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001090c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001090c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109120;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109120:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109190;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109190:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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



/* InspectorDock::_get_class_namev() const */

undefined8 * InspectorDock::_get_class_namev(void)

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
LAB_00109263:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109263;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"InspectorDock");
      goto LAB_001092ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"InspectorDock");
LAB_001092ce:
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
LAB_00109353:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109353;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001093be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001093be:
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
LAB_00109443:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109443;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001094ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001094ae:
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



/* WARNING: Removing unreachable block (ram,0x00109630) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116028 != Container::_notification) {
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
  if ((code *)PTR__notification_00116028 == Container::_notification) {
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



/* Variant Object::call<>(StringName const&) */

StringName * Object::call<>(StringName *param_1)

{
  undefined8 in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  int local_68 [4];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  (**(code **)(*in_RSI + 0x68))((Variant *)local_38,in_RSI,in_RDX,0,0,local_68);
  if (local_68[0] == 0) {
    Variant::Variant((Variant *)param_1,(Variant *)local_38);
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */

undefined1  [16]
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0010989f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010989f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00109d51;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC15 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00109d51;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00109d51:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* Callable create_custom_callable_function_pointer<InspectorDock>(InspectorDock*, char const*, void
   (InspectorDock::*)()) */

InspectorDock *
create_custom_callable_function_pointer<InspectorDock>
          (InspectorDock *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC20;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111a20;
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



/* Callable create_custom_callable_function_pointer<InspectorDock, int>(InspectorDock*, char const*,
   void (InspectorDock::*)(int)) */

InspectorDock *
create_custom_callable_function_pointer<InspectorDock,int>
          (InspectorDock *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC20;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111ab0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
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



/* WARNING: Removing unreachable block (ram,0x0010a218) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)param_2);
  *(undefined8 *)param_1 = local_b8[0];
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* InspectorDock::get_class() const */

void InspectorDock::get_class(void)

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
    String::parse_latin1(in_RDI,"InspectorDock");
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_0010a757:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_0010a757;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010a86b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010a86b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CallableCustomMethodPointer<InspectorDock, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void>::call
          (CallableCustomMethodPointer<InspectorDock,void> *this,Variant **param_1,int param_2,
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
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ab9f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010ab9f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ac50;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ab9f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ac50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InspectorDock, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::call
          (CallableCustomMethodPointer<InspectorDock,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ae18;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ae18;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC44;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010adc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010aec9;
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
LAB_0010ae18:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010aec9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InspectorDock, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::call
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC45;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010af9e;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010af9e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010b213;
  }
  cVar4 = String::operator==(param_1,"Control");
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
      if (cVar4 != '\0') goto LAB_0010b213;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b31e;
    }
  }
LAB_0010b213:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b31e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010b42b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b42b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Object*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Object");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58[0] = 0x18;
    local_50 = 0;
    StringName::StringName((StringName *)&local_48,(StringName *)&local_60);
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    *puVar2 = local_58[0];
    if (*(long *)(puVar2 + 2) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_50;
      local_50 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_48) {
      StringName::unref();
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_40;
    if (*(long *)(puVar2 + 8) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_30;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
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
              if ((code *)PTR__bind_methods_00116040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00116030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
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
      if ((code *)PTR__bind_methods_00116038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
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
              if ((code *)PTR__bind_methods_00116040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00116030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
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
      if ((code *)PTR__bind_methods_00116038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
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
        if (pvVar3 == (void *)0x0) goto LAB_0010c28f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c28f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010c3c3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar4 != '\0') goto LAB_0010c3c3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010c4ce;
    }
  }
LAB_0010c3c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c4ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010c5b3;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar4 != '\0') goto LAB_0010c5b3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010c6be;
    }
  }
LAB_0010c5b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c6be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::is_class(String const&) const */

undefined8 __thiscall InspectorDock::is_class(InspectorDock *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010c7cb;
  }
  cVar4 = String::operator==(param_1,"InspectorDock");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c7cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar5;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x80) == plVar5) {
      lVar4 = *(long *)(this_00 + 0x70);
      lVar7 = *(long *)(this_00 + 0x78);
      *plVar5 = lVar4;
      if (this_00 == (CowData<char32_t> *)plVar5[1]) {
        plVar5[1] = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x70) = lVar4;
        lVar4 = *(long *)(this_00 + 0x70);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x78) = lVar7;
      }
      if (*(long *)(this_00 + 0x68) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this_00 + 0x68) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(this_00 + 0x68);
          *(undefined8 *)(this_00 + 0x68) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*(long *)(this_00 + 0x50) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this_00 + 0x50) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          piVar2 = *(int **)(this_00 + 0x50);
          if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar4 = *(long *)(piVar2 + -2);
          *(undefined8 *)(this_00 + 0x50) = 0;
          lVar7 = 0;
          piVar6 = piVar2;
          if (lVar4 != 0) {
            do {
              if (Variant::needs_deinit[*piVar6] != '\0') {
                Variant::_clear_internal();
              }
              lVar7 = lVar7 + 1;
              piVar6 = piVar6 + 6;
            } while (lVar4 != lVar7);
          }
          Memory::free_static(piVar2 + -4,false);
        }
      }
      List<PropertyInfo,DefaultAllocator>::~List
                ((List<PropertyInfo,DefaultAllocator> *)(this_00 + 0x40));
      PropertyInfo::~PropertyInfo((PropertyInfo *)(this_00 + 8));
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = &_LC38;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC38;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00116048 != Object::_get_property_list) {
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00116050 != CanvasItem::_get_property_list) {
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



/* InspectorDock::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall InspectorDock::_get_property_listv(InspectorDock *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "InspectorDock";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "InspectorDock";
  local_98 = 0;
  local_70 = 0xd;
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
  StringName::StringName((StringName *)&local_78,"InspectorDock",false);
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



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Ref<Resource>, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> >, DefaultTypedAllocator<HashMapElement<Ref<Resource>,
   Ref<Resource> > > >::operator[](Ref<Resource> const&) */

Ref<Resource> * __thiscall
HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
::operator[](HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>
             *this,Ref *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  char cVar23;
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined8 *puVar26;
  void *pvVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  Ref *pRVar33;
  uint uVar34;
  undefined8 uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  uint local_c8;
  Ref<Resource> *local_a8;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  Ref *local_58;
  Ref *local_50 [2];
  long local_40;
  
  pRVar33 = *(Ref **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar23 = _lookup_pos(this,pRVar33,&local_70);
  if (cVar23 == '\0') {
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar32 = (ulong)uVar31;
      uVar24 = uVar32 * 4;
      uVar36 = uVar32 * 8;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar25;
      pvVar27 = (void *)Memory::alloc_static(uVar36,false);
      *(void **)(this + 8) = pvVar27;
      if (uVar31 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar27 + uVar36)) &&
           (pvVar27 < (void *)((long)pvVar4 + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar24 * 4) = 0;
            *(undefined8 *)((long)pvVar27 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar32 != uVar24);
        }
        else {
          memset(pvVar4,0,uVar24);
          memset(pvVar27,0,uVar36);
        }
      }
      pRVar33 = *(Ref **)param_1;
    }
    local_6c = 0;
    cVar23 = _lookup_pos(this,pRVar33,&local_6c);
    if (cVar23 == '\0') {
      if ((float)uVar31 * __LC15 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          local_a8 = (Ref<Resource> *)0x18;
          goto LAB_0010e539;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar31 * 4);
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
        uVar32 = (ulong)uVar31;
        *(int *)(this + 0x28) = (int)uVar24;
        pvVar27 = *(void **)(this + 8);
        uVar24 = uVar32 * 4;
        uVar36 = uVar32 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar25 = Memory::alloc_static(uVar24,false);
        *(undefined8 *)(this + 0x10) = uVar25;
        __s_00 = (void *)Memory::alloc_static(uVar36,false);
        *(void **)(this + 8) = __s_00;
        if (uVar31 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar36)) && (__s_00 < (void *)((long)__s + uVar24))) {
            uVar24 = 0;
            do {
              *(undefined4 *)((long)__s + uVar24 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar32);
          }
          else {
            memset(__s,0,uVar24);
            memset(__s_00,0,uVar36);
          }
        }
        if (uVar3 == 0) {
          pRVar33 = *(Ref **)param_1;
        }
        else {
          uVar24 = 0;
          do {
            uVar31 = *(uint *)((long)pvVar4 + uVar24 * 4);
            if (uVar31 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar37 = 0;
              uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar36 = CONCAT44(0,uVar34);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar31 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar36;
              lVar29 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar29 * 4);
              iVar28 = SUB164(auVar7 * auVar15,8);
              uVar38 = *puVar1;
              uVar25 = *(undefined8 *)((long)pvVar27 + uVar24 * 8);
              while (uVar38 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar38 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar36;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar34 + iVar28) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar36;
                local_c8 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar25;
                if (local_c8 < uVar37) {
                  *puVar1 = uVar31;
                  puVar39 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                  uVar35 = *puVar39;
                  *puVar39 = uVar25;
                  uVar31 = uVar38;
                  uVar37 = local_c8;
                }
                uVar37 = uVar37 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar28 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar36;
                lVar29 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar29 * 4);
                iVar28 = SUB164(auVar10 * auVar18,8);
                uVar25 = uVar35;
                uVar38 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar25;
              *puVar1 = uVar31;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar3);
          Memory::free_static(pvVar27,false);
          Memory::free_static(pvVar4,false);
          pRVar33 = *(Ref **)param_1;
        }
      }
      local_58 = (Ref *)0x0;
      local_68 = (undefined1  [16])0x0;
      Ref<Resource>::operator=((Ref<Resource> *)&local_58,pRVar33);
      local_50[0] = (Ref *)0x0;
      Ref<Resource>::operator=((Ref<Resource> *)local_50,(Ref *)0x0);
      puVar26 = (undefined8 *)operator_new(0x20,"");
      puVar26[2] = 0;
      *puVar26 = local_68._0_8_;
      puVar26[1] = local_68._8_8_;
      Ref<Resource>::operator=((Ref<Resource> *)(puVar26 + 2),local_58);
      local_a8 = (Ref<Resource> *)(puVar26 + 3);
      puVar26[3] = 0;
      Ref<Resource>::operator=(local_a8,local_50[0]);
      Ref<Resource>::unref((Ref<Resource> *)local_50);
      Ref<Resource>::unref((Ref<Resource> *)&local_58);
      puVar39 = *(undefined8 **)(this + 0x20);
      if (puVar39 == (undefined8 *)0x0) {
        *(undefined8 **)(this + 0x18) = puVar26;
      }
      else {
        *puVar39 = puVar26;
        puVar26[1] = puVar39;
      }
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(this + 0x10);
      *(undefined8 **)(this + 0x20) = puVar26;
      uVar24 = lVar5 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar36 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar36 = 1;
      }
      uVar38 = 0;
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar24 = CONCAT44(0,uVar31);
      uVar34 = (uint)uVar36;
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar36 * lVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar24;
      lVar30 = SUB168(auVar11 * auVar19,8);
      lVar29 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar6 + lVar30 * 4);
      iVar28 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar5;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar24;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar31 + iVar28) - SUB164(auVar12 * auVar20,8)) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar24;
        local_c8 = SUB164(auVar13 * auVar21,8);
        puVar39 = puVar26;
        if (local_c8 < uVar38) {
          *puVar1 = (uint)uVar36;
          uVar36 = (ulong)uVar3;
          puVar2 = (undefined8 *)(lVar29 + lVar30 * 8);
          puVar39 = (undefined8 *)*puVar2;
          *puVar2 = puVar26;
          uVar38 = local_c8;
        }
        uVar34 = (uint)uVar36;
        uVar38 = uVar38 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar28 + 1) * lVar5;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar24;
        lVar30 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar6 + lVar30 * 4);
        iVar28 = SUB164(auVar14 * auVar22,8);
        puVar26 = puVar39;
        uVar3 = *puVar1;
      }
      *(undefined8 **)(lVar29 + lVar30 * 8) = puVar26;
      *puVar1 = uVar34;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar24 = (ulong)local_6c;
      Ref<Resource>::operator=
                ((Ref<Resource> *)(*(long *)(*(long *)(this + 8) + uVar24 * 8) + 0x18),(Ref *)0x0);
      local_a8 = (Ref<Resource> *)(*(long *)(*(long *)(this + 8) + uVar24 * 8) + 0x18);
    }
  }
  else {
    local_a8 = (Ref<Resource> *)(*(long *)(*(long *)(this + 8) + (ulong)local_70 * 8) + 0x18);
  }
LAB_0010e539:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::call
          (CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  Variant local_58 [8];
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = local_48 >> 8;
      local_48 = uVar3 << 8;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_48 = uVar3 << 8;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010e7a5;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010e7a5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
        uVar4 = _LC63;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_String(local_58);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        uVar4 = _LC64;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_50 = 0;
        uVar6 = Variant::get_validated_object();
        uVar3 = local_50;
        if (uVar6 != local_50) {
          if (uVar6 == 0) {
            if (local_50 != 0) {
              local_50 = 0;
              local_48 = uVar3;
              goto LAB_0010e8d8;
            }
          }
          else {
            uVar6 = __dynamic_cast(uVar6,&Object::typeinfo,&Resource::typeinfo,0);
            if (uVar3 != uVar6) {
              local_48 = uVar3;
              local_50 = uVar6;
              if ((uVar6 != 0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_50 = 0;
              }
LAB_0010e8d8:
              Ref<Resource>::unref((Ref<Resource> *)&local_48);
            }
          }
        }
        (*pcVar9)((long *)(lVar1 + lVar2),(Ref<Resource> *)&local_50,local_58);
        Ref<Resource>::unref((Ref<Resource> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        goto LAB_0010e7a5;
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
  String::parse_latin1((String *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC43,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Ref<Resource> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010e7a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* InspectorDock::_notificationv(int, bool) */

void __thiscall InspectorDock::_notificationv(InspectorDock *this,int param_1,bool param_2)

{
  if (param_2) {
    if (((param_1 - 0x2dU & 0xfffffffb) == 0) || (param_1 == 0x7da)) {
      _notification((int)this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if ((param_1 != 0x7da) && ((0x7da < param_1 || ((param_1 - 0x2dU & 0xfffffffb) != 0)))) {
    return;
  }
  _notification((int)this);
  return;
}



/* Ref<Shortcut>::unref() */

void __thiscall Ref<Shortcut>::unref(Ref<Shortcut> *this)

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



/* Ref<RefCounted>::unref() */

void __thiscall Ref<RefCounted>::unref(Ref<RefCounted> *this)

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



/* Ref<RefCounted>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<RefCounted>::operator=(Ref<RefCounted> *this,Variant *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&RefCounted::typeinfo,0);
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



/* MethodBind* create_method_bind<InspectorDock, Object*>(void (InspectorDock::*)(Object*)) */

MethodBind * create_method_bind<InspectorDock,Object*>(_func_void_Object_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111c60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "InspectorDock";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InspectorDock::_bind_methods() [clone .cold] */

void InspectorDock::_bind_methods(void)

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



/* InspectorDock::_initialize_classv() */

void InspectorDock::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
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
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
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
                if ((code *)PTR__bind_methods_00116040 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
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
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00116030 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
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
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
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
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
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
        if ((code *)PTR__bind_methods_00116038 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"VBoxContainer");
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"VBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"InspectorDock");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* InspectorDock::_open_resource_selector() */

void __thiscall InspectorDock::_open_resource_selector(InspectorDock *this)

{
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC20;
  local_30 = 0;
  String::parse_latin1((StrRange *)&local_40);
  _load_resource(this,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010f8e0:
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
  if (lVar9 == 0) goto LAB_0010f8e0;
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
    goto LAB_0010f936;
  }
  if (lVar9 == lVar5) {
LAB_0010f85b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010f936:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010f7cf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010f85b;
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
LAB_0010f7cf:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010fab8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindT<Object*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Object*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fee0;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0010fd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010fee0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Object*>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001100b8;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ff51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_001100b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Object*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_38 == *plVar8) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error(&_LC43,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00110260;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_00110255:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_00110260;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001102b0;
LAB_001102a0:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001102b0:
      uVar6 = 4;
      goto LAB_00110255;
    }
    if (in_R8D == 1) goto LAB_001102a0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar12 & 1) != 0) {
    pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar5 == '\0') {
LAB_00110226:
    uVar4 = _LC64;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
    if ((pOVar9 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_00110226;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
  (*(code *)pVVar12)((Variant *)((long)plVar11 + (long)pVVar1),pOVar7);
LAB_00110260:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
                if (pvVar5 == (void *)0x0) goto LAB_00110769;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00110769:
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



/* InspectorDock::singleton */

void InspectorDock::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_8;
  
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper = '\x01';
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (EditorFileDialog::base_property_helper != '\0') {
    return;
  }
  EditorFileDialog::base_property_helper = 1;
  EditorFileDialog::base_property_helper._64_8_ = 0;
  EditorFileDialog::base_property_helper._56_8_ = 2;
  EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InspectorDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InspectorDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InspectorDock, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InspectorDock, void, Ref<Resource> const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InspectorDock,void,Ref<Resource>const&,String_const&> *this)

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





