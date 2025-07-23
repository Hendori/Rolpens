/* GridContainer::get_columns() const */

undefined4 __thiscall GridContainer::get_columns(GridContainer *this)

{
  return *(undefined4 *)(this + 0xa00);
}



/* GridContainer::set_columns(int) */

void __thiscall GridContainer::set_columns(GridContainer *this,int param_1)

{
  if (param_1 < 1) {
    _err_print_error("set_columns","scene/gui/grid_container.cpp",0xf4,
                     "Condition \"p_columns < 1\" is true.",0,0);
    return;
  }
  if (*(int *)(this + 0xa00) != param_1) {
    *(int *)(this + 0xa00) = param_1;
    Container::queue_sort();
    Control::update_minimum_size();
    return;
  }
  return;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GridContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#2}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &GridContainer::_bind_methods()::
                {lambda(Node*,StringName_const&,StringName_const&)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a08 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&GridContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa08) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == (Node *)0x0) {
    Control::get_theme_item(local_48,0,1,param_3,param_4);
    Variant::operator_cast_to_int((Variant *)local_48);
    _DAT_00000a04 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = __dynamic_cast(*param_2,&Object::typeinfo,&GridContainer::typeinfo,0);
  Control::get_theme_item(local_48,lVar3,1,param_3,param_4);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(lVar3 + 0xa04) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::insert(int const&) [clone .isra.0] */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::insert
          (RBSet<int,Comparator<int>,DefaultAllocator> *this,int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  
  piVar9 = *(int **)this;
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(piVar9 + 8) = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(this + 8);
    *(int **)this = piVar9;
    *piVar9 = 1;
    *(undefined8 *)(piVar9 + 6) = uVar1;
    *(undefined8 *)(piVar9 + 2) = uVar1;
    *(undefined8 *)(piVar9 + 4) = uVar1;
  }
  else if (*(int **)(piVar9 + 4) != *(int **)(this + 8)) {
    piVar13 = *(int **)(piVar9 + 4);
    do {
      piVar9 = piVar13;
      if (*param_1 < piVar9[0xc]) {
        piVar13 = *(int **)(piVar9 + 4);
      }
      else {
        if (*param_1 <= piVar9[0xc]) {
          return;
        }
        piVar13 = *(int **)(piVar9 + 2);
      }
    } while (*(int **)(this + 8) != piVar13);
  }
  piVar6 = (int *)operator_new(0x38,DefaultAllocator::alloc);
  *(int **)(piVar6 + 6) = piVar9;
  *(undefined1 (*) [16])(piVar6 + 8) = (undefined1  [16])0x0;
  piVar13 = *(int **)(this + 8);
  *piVar6 = 0;
  *(int **)(piVar6 + 2) = piVar13;
  *(int **)(piVar6 + 4) = piVar13;
  iVar2 = *param_1;
  piVar6[0xc] = iVar2;
  if ((*(int **)this == piVar9) || (iVar2 < piVar9[0xc])) {
    *(int **)(piVar9 + 4) = piVar6;
    piVar10 = *(int **)(this + 8);
    piVar11 = *(int **)(piVar6 + 4);
    piVar12 = *(int **)this;
    if (piVar13 == piVar10) {
      piVar8 = piVar9;
      piVar7 = piVar9;
      if (piVar6 == *(int **)(piVar9 + 2)) goto LAB_00100478;
      goto LAB_00100485;
    }
LAB_00100450:
    do {
      piVar8 = piVar13;
      piVar13 = *(int **)(piVar8 + 4);
    } while (*(int **)(piVar8 + 4) != piVar10);
  }
  else {
    *(int **)(piVar9 + 2) = piVar6;
    piVar8 = *(int **)(piVar6 + 2);
    piVar10 = *(int **)(this + 8);
    piVar12 = *(int **)this;
    piVar7 = piVar9;
    piVar11 = piVar13;
    if (piVar8 == piVar10) {
LAB_00100478:
      do {
        piVar8 = *(int **)(piVar7 + 6);
        bVar14 = piVar7 == *(int **)(piVar8 + 2);
        piVar7 = piVar8;
      } while (bVar14);
LAB_00100485:
      if (piVar12 == piVar8) {
        piVar8 = (int *)0x0;
      }
    }
    else {
      piVar13 = *(int **)(piVar8 + 4);
      if (*(int **)(piVar8 + 4) != piVar10) goto LAB_00100450;
    }
  }
  *(int **)(piVar6 + 8) = piVar8;
  piVar13 = *(int **)this;
  if (piVar11 == *(int **)(this + 8)) {
    piVar11 = piVar6;
    piVar10 = piVar9;
    piVar12 = piVar9;
    if (piVar6 == *(int **)(piVar9 + 4)) {
      do {
        piVar10 = *(int **)(piVar12 + 6);
        bVar14 = piVar12 == *(int **)(piVar10 + 4);
        piVar11 = piVar12;
        piVar12 = piVar10;
      } while (bVar14);
    }
    if (piVar13 != piVar11) goto LAB_0010033c;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    if (piVar8 == (int *)0x0) goto LAB_00100356;
LAB_00100345:
    *(int **)(piVar8 + 10) = piVar6;
    piVar10 = *(int **)(piVar6 + 10);
    if (piVar10 == (int *)0x0) goto LAB_00100356;
  }
  else {
    do {
      piVar10 = piVar11;
      piVar11 = *(int **)(piVar10 + 2);
    } while (*(int **)(this + 8) != *(int **)(piVar10 + 2));
LAB_0010033c:
    *(int **)(piVar6 + 10) = piVar10;
    if (piVar8 != (int *)0x0) goto LAB_00100345;
  }
  *(int **)(piVar10 + 8) = piVar6;
LAB_00100356:
  iVar2 = *piVar9;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  if (iVar2 == 0) {
    do {
      while( true ) {
        piVar13 = *(int **)(piVar9 + 6);
        piVar10 = *(int **)(piVar13 + 4);
        if (piVar10 != piVar9) break;
        piVar10 = *(int **)(piVar13 + 2);
        if (*piVar10 == 0) goto LAB_001003ed;
        piVar10 = piVar9;
        if (*(int **)(piVar9 + 2) == piVar6) {
          lVar3 = *(long *)(this + 8);
          lVar4 = *(long *)(piVar6 + 4);
          *(long *)(piVar9 + 2) = lVar4;
          if (lVar3 == lVar4) {
            *(int **)(piVar6 + 6) = piVar13;
            piVar10 = piVar13;
LAB_001006f0:
            *(int **)(piVar10 + 4) = piVar6;
          }
          else {
            *(int **)(lVar4 + 0x18) = piVar9;
            piVar10 = *(int **)(piVar9 + 6);
            *(int **)(piVar6 + 6) = piVar10;
            if (piVar9 == *(int **)(piVar10 + 4)) goto LAB_001006f0;
            *(int **)(piVar10 + 2) = piVar6;
          }
          *(int **)(piVar6 + 4) = piVar9;
          *(int **)(piVar9 + 6) = piVar6;
          piVar10 = piVar6;
          piVar6 = piVar9;
        }
        piVar9 = *(int **)(this + 8);
        *piVar10 = 1;
        if (piVar13 == piVar9) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar13 = 0;
        }
        lVar3 = *(long *)(piVar13 + 4);
        lVar4 = *(long *)(this + 8);
        lVar5 = *(long *)(lVar3 + 8);
        *(long *)(piVar13 + 4) = lVar5;
        if (lVar4 != lVar5) {
          *(int **)(lVar5 + 0x18) = piVar13;
        }
        lVar4 = *(long *)(piVar13 + 6);
        *(long *)(lVar3 + 0x18) = lVar4;
        if (piVar13 == *(int **)(lVar4 + 8)) {
          *(long *)(lVar4 + 8) = lVar3;
        }
        else {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        *(int **)(lVar3 + 8) = piVar13;
        *(long *)(piVar13 + 6) = lVar3;
LAB_001003d0:
        piVar9 = piVar10;
        if (*piVar10 != 0) goto LAB_0010041b;
      }
      if (*piVar10 != 0) {
        piVar10 = *(int **)(piVar9 + 4);
        if (piVar6 == piVar10) {
          lVar3 = *(long *)(this + 8);
          lVar4 = *(long *)(piVar10 + 2);
          *(long *)(piVar9 + 4) = lVar4;
          piVar6 = piVar13;
          if (lVar3 != lVar4) {
            *(int **)(lVar4 + 0x18) = piVar9;
            piVar6 = *(int **)(piVar9 + 6);
          }
          *(int **)(piVar10 + 6) = piVar6;
          if (piVar9 == *(int **)(piVar6 + 2)) {
            *(int **)(piVar6 + 2) = piVar10;
          }
          else {
            *(int **)(piVar6 + 4) = piVar10;
          }
          *(int **)(piVar10 + 2) = piVar9;
          *(int **)(piVar9 + 6) = piVar10;
          piVar6 = *(int **)(this + 8);
          *piVar10 = 1;
          if (piVar13 != piVar6) goto LAB_00100391;
LAB_00100578:
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          piVar6 = piVar9;
        }
        else {
          piVar11 = *(int **)(this + 8);
          *piVar9 = 1;
          piVar10 = piVar9;
          piVar9 = piVar6;
          if (piVar13 == piVar11) goto LAB_00100578;
LAB_00100391:
          *piVar13 = 0;
          piVar6 = piVar9;
        }
        lVar3 = *(long *)(piVar13 + 2);
        lVar4 = *(long *)(this + 8);
        lVar5 = *(long *)(lVar3 + 0x10);
        *(long *)(piVar13 + 2) = lVar5;
        if (lVar4 != lVar5) {
          *(int **)(lVar5 + 0x18) = piVar13;
        }
        lVar4 = *(long *)(piVar13 + 6);
        *(long *)(lVar3 + 0x18) = lVar4;
        if (piVar13 == *(int **)(lVar4 + 0x10)) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        else {
          *(long *)(lVar4 + 8) = lVar3;
        }
        *(int **)(lVar3 + 0x10) = piVar13;
        *(long *)(piVar13 + 6) = lVar3;
        goto LAB_001003d0;
      }
LAB_001003ed:
      piVar6 = *(int **)(this + 8);
      *piVar9 = 1;
      *piVar10 = 1;
      if (piVar13 == piVar6) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      else {
        *piVar13 = 0;
      }
      piVar9 = *(int **)(piVar13 + 6);
      piVar6 = piVar13;
    } while (**(int **)(piVar13 + 6) == 0);
LAB_0010041b:
    piVar13 = *(int **)this;
  }
  **(undefined4 **)(piVar13 + 4) = 1;
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



/* GridContainer::get_h_separation() const */

undefined4 __thiscall GridContainer::get_h_separation(GridContainer *this)

{
  return *(undefined4 *)(this + 0xa04);
}



/* GridContainer::GridContainer() */

void __thiscall GridContainer::GridContainer(GridContainer *this)

{
  Container::Container((Container *)this);
  *(undefined8 *)(this + 0xa00) = 1;
  *(undefined ***)this = &PTR__initialize_classv_00108a98;
  *(undefined4 *)(this + 0xa08) = 0;
  return;
}



/* GridContainer::_bind_methods() */

void GridContainer::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *pMVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  long local_a0;
  long *local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = &local_78;
  local_78 = "columns";
  D_METHODP((char *)&local_a8,(char ***)"set_columns",(uint)&local_68);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar4 = create_method_bind<GridContainer,int>(set_columns);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar6 = local_98 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      lVar7 = 0;
      local_98 = (long *)0x0;
      plVar6 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_a8,(char ***)"get_columns",0);
  uStack_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pMVar4 = create_method_bind<GridContainer,int>(get_columns);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar6 = local_98 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      lVar7 = 0;
      local_98 = (long *)0x0;
      plVar6 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar2 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "1,1024,1";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 8;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "columns";
  local_e0 = 0;
  local_a0 = 7;
  String::parse_latin1((StrRange *)&local_e0);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_e0);
  }
  local_98 = (long *)0x0;
  local_90 = 1;
  local_88 = 0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_d8);
    local_80 = 6;
    if (local_90 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_88,false);
      if (local_98 == (long *)local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_98 = (long *)local_b8;
      }
      goto LAB_00100b6c;
    }
  }
  local_80 = 6;
  StringName::operator=((StringName *)&local_98,(StringName *)&local_d0);
LAB_00100b6c:
  local_e8 = 0;
  local_b8 = "GridContainer";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,-1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  uVar5 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"h_separation",false);
  StringName::StringName((StringName *)&local_c0,"h_separation",false);
  local_a8 = "GridContainer";
  local_c8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ThemeDB::bind_class_item
            (uVar5,1,(StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,
             &local_68);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') &&
     (((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b8 != (char *)0x0)))) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  uVar5 = ThemeDB::get_singleton();
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  pcStack_58 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_manager;
  pcStack_50 = std::
               _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
               ::_M_invoke;
  StringName::StringName((StringName *)&local_b8,"v_separation",false);
  StringName::StringName((StringName *)&local_c0,"v_separation",false);
  local_a8 = "GridContainer";
  local_c8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ThemeDB::bind_class_item
            (uVar5,1,(StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,
             &local_68);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(&local_68,&local_68,3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GridContainer::_notification(int) [clone .part.0] */

void GridContainer::_notification(int param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  Rect2 *pRVar13;
  Element *pEVar14;
  Element *pEVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  Element *pEVar22;
  undefined4 in_register_0000003c;
  Control *pCVar23;
  int iVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float local_138;
  int local_f0;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  void *local_98;
  Element *local_90;
  int local_88;
  Element *local_78;
  Element *local_70;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  pCVar23 = (Control *)CONCAT44(in_register_0000003c,param_1);
  iVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined8 *)0x0;
  local_d0 = &_GlobalNilClass::_nil;
  local_b0 = &_GlobalNilClass::_nil;
  local_90 = (Element *)&_GlobalNilClass::_nil;
  local_70 = (Element *)&_GlobalNilClass::_nil;
  local_c8 = 0;
  local_b8 = (undefined8 *)0x0;
  local_a8 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
  local_78 = (Element *)0x0;
  local_68 = 0;
  iVar17 = 0;
  while( true ) {
    iVar4 = Node::get_child_count(SUB41(param_1,0));
    if (iVar4 <= iVar19) break;
    uVar8 = Node::get_child(param_1,SUB41(iVar19,0));
    plVar9 = (long *)Container::as_sortable_control(pCVar23,uVar8,1);
    iVar4 = iVar17;
    if (plVar9 != (long *)0x0) {
      iVar4 = iVar17 + 1;
      iVar5 = iVar17 / *(int *)(pCVar23 + 0xa00);
      iVar17 = iVar17 % *(int *)(pCVar23 + 0xa00);
      local_e0 = iVar5;
      local_dc = iVar17;
      local_58 = (**(code **)(*plVar9 + 0x300))(plVar9);
      uVar8 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
      iVar6 = (int)((ulong)uVar8 >> 0x20);
      iVar16 = (int)uVar8;
      puVar11 = local_d8;
      if (local_d8 != (undefined8 *)0x0) {
        while (puVar11 = (undefined8 *)puVar11[2], local_d0 != puVar11) {
          while (*(int *)(puVar11 + 6) <= iVar17) {
            if (iVar17 <= *(int *)(puVar11 + 6)) {
              piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                         ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                          &local_d8,&local_dc);
              if (iVar16 < *piVar10) {
                iVar16 = *piVar10;
              }
              piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                         ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                          &local_d8,&local_dc);
              *piVar10 = iVar16;
              goto LAB_001011ec;
            }
            puVar11 = (undefined8 *)puVar11[1];
            if (local_d0 == puVar11) goto LAB_001011ce;
          }
        }
      }
LAB_001011ce:
      piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                 ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                  &local_dc);
      *piVar10 = iVar16;
LAB_001011ec:
      puVar11 = local_b8;
      if (local_b8 != (undefined8 *)0x0) {
        while (puVar11 = (undefined8 *)puVar11[2], local_b0 != puVar11) {
          while (*(int *)(puVar11 + 6) <= iVar5) {
            if (iVar5 <= *(int *)(puVar11 + 6)) {
              piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                         ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                          &local_b8,&local_e0);
              if (iVar6 < *piVar10) {
                iVar6 = *piVar10;
              }
              piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                         ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                          &local_b8,&local_e0);
              *piVar10 = iVar6;
              uVar12 = Control::get_h_size_flags();
              goto joined_r0x001012a6;
            }
            puVar11 = (undefined8 *)puVar11[1];
            if (local_b0 == puVar11) goto LAB_00101222;
          }
        }
      }
LAB_00101222:
      piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                 ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                  &local_e0);
      *piVar10 = iVar6;
      uVar12 = Control::get_h_size_flags();
joined_r0x001012a6:
      if ((uVar12 & 2) == 0) {
        uVar12 = Control::get_v_size_flags();
      }
      else {
        RBSet<int,Comparator<int>,DefaultAllocator>::insert
                  ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_98,&local_dc);
        uVar12 = Control::get_v_size_flags();
      }
      if ((uVar12 & 2) != 0) {
        RBSet<int,Comparator<int>,DefaultAllocator>::insert
                  ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_78,&local_e0);
      }
    }
    iVar19 = iVar19 + 1;
    iVar17 = iVar4;
  }
  iVar19 = *(int *)(pCVar23 + 0xa00);
  iVar4 = iVar19;
  if (iVar17 <= iVar19) {
    iVar4 = iVar17;
  }
  fVar25 = (float)iVar17 / (float)iVar19;
  if ((float)((uint)fVar25 & _LC31) < _LC28) {
    fVar25 = (float)((uint)((float)(int)fVar25 +
                           (float)(-(uint)((float)(int)fVar25 < fVar25) & (uint)_LC30)) |
                    ~_LC31 & (uint)fVar25);
  }
  iVar6 = (int)fVar25;
  local_dc = iVar17;
  if (iVar17 < iVar19) {
    do {
      iVar17 = local_dc + 1;
      RBSet<int,Comparator<int>,DefaultAllocator>::insert
                ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_98,&local_dc);
      local_dc = iVar17;
    } while (iVar17 < *(int *)(pCVar23 + 0xa00));
  }
  auVar28._0_8_ = Control::get_size();
  auVar28._8_8_ = extraout_XMM0_Qb;
  fVar25 = (float)((ulong)auVar28._0_8_ >> 0x20);
  if ((local_d8 != (undefined8 *)0x0) &&
     (puVar11 = (undefined8 *)local_d8[2], (undefined8 *)local_d8[2] != local_d0)) {
    do {
      puVar21 = puVar11;
      puVar11 = (undefined8 *)puVar21[2];
    } while (local_d0 != (undefined8 *)puVar21[2]);
    do {
      if (local_98 != (void *)0x0) {
        iVar17 = *(int *)(puVar21 + 6);
LAB_0010144c:
        pEVar15 = *(Element **)((long)local_98 + 0x10);
        if (local_90 != *(Element **)((long)local_98 + 0x10)) {
          do {
            if (iVar17 < *(int *)(pEVar15 + 0x30)) {
              pEVar15 = *(Element **)(pEVar15 + 0x10);
            }
            else {
              if (iVar17 <= *(int *)(pEVar15 + 0x30)) goto LAB_00101b50;
              pEVar15 = *(Element **)(pEVar15 + 8);
            }
            if (local_90 == pEVar15) break;
          } while( true );
        }
      }
      piVar10 = (int *)((long)puVar21 + 0x34);
      puVar21 = (undefined8 *)puVar21[4];
      auVar28._0_4_ = auVar28._0_4_ - (float)*piVar10;
    } while (puVar21 != (undefined8 *)0x0);
  }
LAB_00101493:
  if ((local_b8 != (undefined8 *)0x0) &&
     (puVar11 = (undefined8 *)local_b8[2], (undefined8 *)local_b8[2] != local_b0)) {
    do {
      puVar21 = puVar11;
      puVar11 = (undefined8 *)puVar21[2];
    } while (local_b0 != (undefined8 *)puVar21[2]);
    do {
      if (local_78 != (Element *)0x0) {
        iVar17 = *(int *)(puVar21 + 6);
LAB_001014e4:
        pEVar15 = *(Element **)(local_78 + 0x10);
        if (local_70 != *(Element **)(local_78 + 0x10)) {
          do {
            if (iVar17 < *(int *)(pEVar15 + 0x30)) {
              pEVar15 = *(Element **)(pEVar15 + 0x10);
            }
            else {
              if (iVar17 <= *(int *)(pEVar15 + 0x30)) goto LAB_00101b68;
              pEVar15 = *(Element **)(pEVar15 + 8);
            }
            if (local_70 == pEVar15) break;
          } while( true );
        }
      }
      piVar10 = (int *)((long)puVar21 + 0x34);
      puVar21 = (undefined8 *)puVar21[4];
      fVar25 = fVar25 - (float)*piVar10;
    } while (puVar21 != (undefined8 *)0x0);
  }
LAB_00101523:
  iVar17 = iVar6 + -1;
  if (iVar17 < 0) {
    iVar17 = 0;
  }
  iVar19 = iVar4 + -1;
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  fVar25 = fVar25 - (float)(iVar17 * *(int *)(pCVar23 + 0xa08));
  local_138 = auVar28._0_4_ - (float)(iVar19 * *(int *)(pCVar23 + 0xa04));
  while (0 < local_88) {
    if ((local_98 == (void *)0x0) ||
       (pEVar15 = *(Element **)((long)local_98 + 0x10), pEVar14 = pEVar15, pEVar15 == local_90))
    goto LAB_00101eb0;
    do {
      pEVar22 = pEVar14;
      pEVar14 = *(Element **)(pEVar22 + 0x10);
    } while (local_90 != pEVar14);
    local_dc = *(int *)(pEVar22 + 0x30);
    do {
      pEVar14 = pEVar15;
      pEVar15 = *(Element **)(pEVar14 + 0x10);
    } while (local_90 != *(Element **)(pEVar14 + 0x10));
    bVar1 = true;
    do {
      while( true ) {
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                    (int *)(pEVar14 + 0x30));
        iVar17 = *piVar10;
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                    &local_dc);
        if (*piVar10 < iVar17) {
          local_dc = *(int *)(pEVar14 + 0x30);
        }
        if (!bVar1) break;
        fVar26 = (float)local_88;
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                    (int *)(pEVar14 + 0x30));
        pEVar14 = *(Element **)(pEVar14 + 0x20);
        bVar1 = (float)*piVar10 <= local_138 / fVar26;
        if (pEVar14 == (Element *)0x0) goto LAB_00101666;
      }
      pEVar14 = *(Element **)(pEVar14 + 0x20);
    } while (pEVar14 != (Element *)0x0);
LAB_00101666:
    if (bVar1) break;
    if (local_98 != (void *)0x0) {
      for (pEVar15 = *(Element **)((long)local_98 + 0x10); local_90 != pEVar15;
          pEVar15 = *(Element **)(pEVar15 + 0x10)) {
        while (*(int *)(pEVar15 + 0x30) <= local_dc) {
          if (local_dc <= *(int *)(pEVar15 + 0x30)) {
            RBSet<int,Comparator<int>,DefaultAllocator>::_erase
                      ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_98,pEVar15);
            if ((local_88 == 0) && (local_98 != (void *)0x0)) {
              Memory::free_static(local_98,false);
              local_98 = (void *)0x0;
            }
            goto LAB_00101be8;
          }
          pEVar15 = *(Element **)(pEVar15 + 8);
          if (pEVar15 == local_90) goto LAB_00101be8;
        }
      }
    }
LAB_00101be8:
    piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                               ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                &local_dc);
    local_138 = local_138 - (float)*piVar10;
  }
  do {
    if (local_68 < 1) goto LAB_00101e4a;
    if ((local_78 == (Element *)0x0) ||
       (pEVar15 = *(Element **)(local_78 + 0x10), pEVar14 = pEVar15, pEVar15 == local_70)) {
LAB_00101eb0:
                    /* WARNING: Does not return */
      pcVar18 = (code *)invalidInstructionException();
      (*pcVar18)();
    }
    do {
      pEVar22 = pEVar14;
      pEVar14 = *(Element **)(pEVar22 + 0x10);
    } while (local_70 != pEVar14);
    local_dc = *(int *)(pEVar22 + 0x30);
    do {
      pEVar14 = pEVar15;
      pEVar15 = *(Element **)(pEVar14 + 0x10);
    } while (local_70 != *(Element **)(pEVar14 + 0x10));
    bVar1 = true;
    do {
      while( true ) {
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                    (int *)(pEVar14 + 0x30));
        iVar17 = *piVar10;
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                    &local_dc);
        if (*piVar10 < iVar17) {
          local_dc = *(int *)(pEVar14 + 0x30);
        }
        if (!bVar1) break;
        fVar26 = (float)local_68;
        piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                   ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                    (int *)(pEVar14 + 0x30));
        pEVar14 = *(Element **)(pEVar14 + 0x20);
        bVar1 = (float)*piVar10 <= fVar25 / fVar26;
        if (pEVar14 == (Element *)0x0) goto LAB_0010176c;
      }
      pEVar14 = *(Element **)(pEVar14 + 0x20);
    } while (pEVar14 != (Element *)0x0);
LAB_0010176c:
    if (bVar1) {
      iVar19 = 0;
      iVar17 = 0;
      if (0 < local_88) goto LAB_00101791;
      goto LAB_001017ce;
    }
    if (local_78 != (Element *)0x0) {
      for (pEVar15 = *(Element **)(local_78 + 0x10); local_70 != pEVar15;
          pEVar15 = *(Element **)(pEVar15 + 0x10)) {
        while (*(int *)(pEVar15 + 0x30) <= local_dc) {
          if (local_dc <= *(int *)(pEVar15 + 0x30)) {
            RBSet<int,Comparator<int>,DefaultAllocator>::_erase
                      ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_78,pEVar15);
            if ((local_68 == 0) && (local_78 != (Element *)0x0)) {
              Memory::free_static(local_78,false);
              local_78 = (Element *)0x0;
            }
            goto LAB_00101e18;
          }
          pEVar15 = *(Element **)(pEVar15 + 8);
          if (pEVar15 == local_70) goto LAB_00101e18;
        }
      }
    }
LAB_00101e18:
    piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                               ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                &local_dc);
    fVar25 = fVar25 - (float)*piVar10;
  } while( true );
LAB_00101b50:
  puVar21 = (undefined8 *)puVar21[4];
  if (puVar21 == (undefined8 *)0x0) goto LAB_00101493;
  iVar17 = *(int *)(puVar21 + 6);
  goto LAB_0010144c;
LAB_00101b68:
  puVar21 = (undefined8 *)puVar21[4];
  if (puVar21 == (undefined8 *)0x0) goto LAB_00101523;
  iVar17 = *(int *)(puVar21 + 6);
  goto LAB_001014e4;
LAB_00101e4a:
  if (local_88 < 1) {
    iVar17 = 0;
    iVar19 = 0;
    bVar1 = true;
    pcVar18 = *(code **)(*(long *)pCVar23 + 0x340);
LAB_00101e80:
    cVar2 = (*pcVar18)(pCVar23);
    if (!bVar1) {
      iVar16 = 0;
      bVar3 = true;
      iVar5 = 0;
LAB_00101836:
      iVar24 = 0;
      iVar7 = 0;
      do {
        iVar20 = iVar7 + 1;
        if (local_98 != (void *)0x0) {
          for (pEVar15 = *(Element **)((long)local_98 + 0x10); local_90 != pEVar15;
              pEVar15 = *(Element **)(pEVar15 + 8)) {
            while (iVar7 < *(int *)(pEVar15 + 0x30)) {
              pEVar15 = *(Element **)(pEVar15 + 0x10);
              if (local_90 == pEVar15) goto LAB_00101878;
            }
            if (iVar7 <= *(int *)(pEVar15 + 0x30)) {
              iVar17 = iVar17 + -1;
              iVar24 = iVar20;
              break;
            }
          }
        }
LAB_00101878:
      } while ((iVar20 < iVar4) && (iVar7 = iVar20, iVar17 != 0));
      goto LAB_00101881;
    }
    iVar16 = 0;
    iVar24 = 0;
  }
  else {
LAB_00101791:
    iVar19 = (int)(local_138 / (float)local_88);
    iVar17 = (int)(local_138 - (float)(local_88 * iVar19));
    bVar1 = iVar17 == 0 || iVar4 < 1;
LAB_001017ce:
    pcVar18 = *(code **)(*(long *)pCVar23 + 0x340);
    if (local_68 < 1) goto LAB_00101e80;
    iVar16 = (int)(fVar25 / (float)local_68);
    iVar5 = (int)(fVar25 - (float)(local_68 * iVar16));
    cVar2 = (*pcVar18)();
    bVar3 = iVar6 < 1 || iVar5 == 0;
    if (!bVar1) goto LAB_00101836;
    iVar24 = 0;
LAB_00101881:
    if (!bVar3) {
      iVar17 = 0;
      iVar4 = 0;
      local_f0 = 0;
      do {
        iVar4 = iVar4 + 1;
        if (local_78 != (Element *)0x0) {
          for (pEVar15 = *(Element **)(local_78 + 0x10); local_70 != pEVar15;
              pEVar15 = *(Element **)(pEVar15 + 8)) {
            while (iVar17 < *(int *)(pEVar15 + 0x30)) {
              pEVar15 = *(Element **)(pEVar15 + 0x10);
              if (local_70 == pEVar15) goto LAB_001018cf;
            }
            if (iVar17 <= *(int *)(pEVar15 + 0x30)) {
              iVar5 = iVar5 + -1;
              local_f0 = iVar4;
              break;
            }
          }
        }
LAB_001018cf:
        iVar17 = iVar17 + 1;
      } while ((iVar5 != 0) && (iVar4 < iVar6));
      goto LAB_001018e1;
    }
  }
  local_f0 = 0;
LAB_001018e1:
  iVar4 = 0;
  iVar6 = 0;
  local_138 = 0.0;
  iVar17 = 0;
  do {
    while( true ) {
      iVar5 = Node::get_child_count(SUB41(param_1,0));
      if (iVar5 <= iVar4) {
        RBSet<int,Comparator<int>,DefaultAllocator>::clear
                  ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_78);
        if (local_78 != (Element *)0x0) {
          Memory::free_static(local_78,false);
        }
        RBSet<int,Comparator<int>,DefaultAllocator>::clear
                  ((RBSet<int,Comparator<int>,DefaultAllocator> *)&local_98);
        if (local_98 != (void *)0x0) {
          Memory::free_static(local_98,false);
        }
        RBMap<int,int,Comparator<int>,DefaultAllocator>::clear
                  ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8);
        if (local_b8 != (undefined8 *)0x0) {
          Memory::free_static(local_b8,false);
        }
        RBMap<int,int,Comparator<int>,DefaultAllocator>::clear
                  ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8);
        if (local_d8 != (undefined8 *)0x0) {
          Memory::free_static(local_d8,false);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar8 = Node::get_child(param_1,SUB41(iVar4,0));
      pRVar13 = (Rect2 *)Container::as_sortable_control(pCVar23,uVar8,1);
      iVar5 = iVar17;
      if (pRVar13 != (Rect2 *)0x0) break;
LAB_00101b47:
      iVar4 = iVar4 + 1;
      iVar17 = iVar5;
    }
    iVar5 = iVar17 + 1;
    iVar7 = iVar17 / *(int *)(pCVar23 + 0xa00);
    iVar17 = iVar17 % *(int *)(pCVar23 + 0xa00);
    local_e4 = iVar7;
    local_e0 = iVar17;
    if (iVar17 == 0) {
      iVar6 = 0;
      if (cVar2 != '\0') {
        fVar25 = (float)Control::get_size();
        iVar6 = (int)fVar25;
      }
      if (iVar7 < 1) goto LAB_00101999;
      iVar20 = iVar7 + -1;
      if (local_78 != (Element *)0x0) {
        for (pEVar15 = *(Element **)(local_78 + 0x10); pEVar15 != local_70;
            pEVar15 = *(Element **)(pEVar15 + 8)) {
          while (iVar20 < *(int *)(pEVar15 + 0x30)) {
            pEVar15 = *(Element **)(pEVar15 + 0x10);
            if (pEVar15 == local_70) goto LAB_00101ce0;
          }
          if (iVar20 <= *(int *)(pEVar15 + 0x30)) {
            local_138 = (float)((int)local_138 + iVar16 + *(int *)(pCVar23 + 0xa08));
            goto LAB_00101d2a;
          }
        }
      }
LAB_00101ce0:
      local_dc = iVar20;
      piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                 ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                  &local_dc);
      local_138 = (float)((int)local_138 + *(int *)(pCVar23 + 0xa08) + *piVar10);
      if (local_78 != (Element *)0x0) {
LAB_00101d2a:
        pEVar15 = *(Element **)(local_78 + 0x10);
        pEVar14 = pEVar15;
        if (local_70 != pEVar15) {
          do {
            pEVar22 = local_70;
            if (iVar20 < *(int *)(pEVar14 + 0x30)) {
              pEVar14 = *(Element **)(pEVar14 + 0x10);
            }
            else {
              if (iVar20 <= *(int *)(pEVar14 + 0x30)) {
                local_138 = (float)((int)local_138 + (uint)(iVar7 <= local_f0));
                goto LAB_001019b1;
              }
              pEVar14 = *(Element **)(pEVar14 + 8);
            }
            if (local_70 == pEVar14) goto LAB_001019b1;
          } while( true );
        }
      }
    }
    else {
LAB_00101999:
      pEVar15 = local_78;
      pEVar22 = local_70;
      if (local_78 != (Element *)0x0) {
        while (pEVar15 = *(Element **)(pEVar15 + 0x10), pEVar22 != pEVar15) {
LAB_001019b1:
          while (*(int *)(pEVar15 + 0x30) <= iVar7) {
            iVar20 = iVar16;
            if (iVar7 <= *(int *)(pEVar15 + 0x30)) goto LAB_001019e5;
            pEVar15 = *(Element **)(pEVar15 + 8);
            if (pEVar22 == pEVar15) goto LAB_001019c6;
          }
        }
      }
    }
LAB_001019c6:
    piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                               ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_b8,
                                &local_e4);
    iVar20 = *piVar10;
LAB_001019e5:
    fVar25 = (float)iVar20;
    if (local_98 != (void *)0x0) {
      pEVar14 = *(Element **)((long)local_98 + 0x10);
      for (pEVar15 = pEVar14; local_90 != pEVar15; pEVar15 = *(Element **)(pEVar15 + 8)) {
        while (iVar17 < *(int *)(pEVar15 + 0x30)) {
          pEVar15 = *(Element **)(pEVar15 + 0x10);
          if (local_90 == pEVar15) goto LAB_00101a2d;
        }
        if (iVar17 <= *(int *)(pEVar15 + 0x30)) {
          fVar26 = (float)iVar19;
          pEVar15 = local_90;
          goto LAB_00101c3d;
        }
      }
    }
LAB_00101a2d:
    piVar10 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                               ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_d8,
                                &local_e0);
    fVar26 = (float)*piVar10;
    if ((local_98 != (void *)0x0) &&
       (pEVar14 = *(Element **)((long)local_98 + 0x10), local_90 != pEVar14)) {
      iVar20 = *(int *)(pEVar14 + 0x30);
      pEVar15 = local_90;
      do {
        if (iVar17 < iVar20) {
          pEVar14 = *(Element **)(pEVar14 + 0x10);
        }
        else {
          if (iVar17 <= iVar20) {
            if (iVar17 < iVar24) {
              fVar26 = fVar26 + _LC30;
            }
            break;
          }
          pEVar14 = *(Element **)(pEVar14 + 8);
        }
        if (pEVar14 == pEVar15) break;
LAB_00101c3d:
        iVar20 = *(int *)(pEVar14 + 0x30);
      } while( true );
    }
    pEVar15 = local_78;
    if (local_78 != (Element *)0x0) {
      while (pEVar15 = *(Element **)(pEVar15 + 0x10), local_70 != pEVar15) {
        while (*(int *)(pEVar15 + 0x30) <= iVar7) {
          if (iVar7 <= *(int *)(pEVar15 + 0x30)) {
            if (iVar7 < local_f0) {
              fVar25 = fVar25 + _LC30;
            }
            goto LAB_00101ace;
          }
          pEVar15 = *(Element **)(pEVar15 + 8);
          if (local_70 == pEVar15) goto LAB_00101ace;
        }
      }
    }
LAB_00101ace:
    fVar27 = (float)iVar6;
    if (cVar2 != '\0') {
      local_58 = CONCAT44((float)(int)local_138,fVar27 - fVar26);
      uStack_50 = CONCAT44(fVar25,fVar26);
      Container::fit_child_in_rect(pCVar23,pRVar13);
      iVar6 = (int)(fVar27 - (fVar26 + (float)*(int *)(pCVar23 + 0xa04)));
      goto LAB_00101b47;
    }
    local_58 = CONCAT44((float)(int)local_138,fVar27);
    uStack_50 = CONCAT44(fVar25,fVar26);
    iVar4 = iVar4 + 1;
    Container::fit_child_in_rect(pCVar23,pRVar13);
    iVar6 = (int)(fVar27 + fVar26 + (float)*(int *)(pCVar23 + 0xa04));
    iVar17 = iVar5;
  } while( true );
}



/* GridContainer::_notification(int) */

void __thiscall GridContainer::_notification(GridContainer *this,int param_1)

{
  if (param_1 == 0x33) {
    _notification((int)this);
    return;
  }
  if (param_1 < 0x34) {
    if (param_1 == 0x2d) {
      Control::update_minimum_size();
      return;
    }
    if (param_1 != 0x31) {
      return;
    }
  }
  else if (param_1 != 0x7da) {
    return;
  }
  Container::queue_sort();
  return;
}



/* GridContainer::get_minimum_size() const */

undefined8 __thiscall GridContainer::get_minimum_size(GridContainer *this)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  int local_cc;
  int local_b8;
  int local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  long local_40;
  
  uVar13 = 0;
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = 0;
  local_88 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = &_GlobalNilClass::_nil;
  local_68 = (undefined8 *)0x0;
  local_58 = 0;
  local_60 = &_GlobalNilClass::_nil;
  local_b8 = 0;
  do {
    iVar3 = Node::get_child_count(SUB81(this,0));
    if (iVar3 <= iVar10) {
      if ((local_88 == (undefined8 *)0x0) ||
         (puVar7 = (undefined8 *)local_88[2], (undefined8 *)local_88[2] == local_80)) {
        fVar14 = 0.0;
      }
      else {
        do {
          puVar9 = puVar7;
          puVar7 = (undefined8 *)puVar9[2];
        } while (local_80 != (undefined8 *)puVar9[2]);
        fVar14 = 0.0;
        do {
          piVar6 = (int *)((long)puVar9 + 0x34);
          puVar9 = (undefined8 *)puVar9[4];
          fVar14 = fVar14 + (float)*piVar6;
        } while (puVar9 != (undefined8 *)0x0);
      }
      if ((local_68 == (undefined8 *)0x0) ||
         (puVar7 = (undefined8 *)local_68[2], (undefined8 *)local_68[2] == local_60)) {
        fVar15 = 0.0;
      }
      else {
        do {
          puVar9 = puVar7;
          puVar7 = (undefined8 *)puVar9[2];
        } while (local_60 != (undefined8 *)puVar9[2]);
        fVar15 = 0.0;
        do {
          piVar6 = (int *)((long)puVar9 + 0x34);
          puVar9 = (undefined8 *)puVar9[4];
          fVar15 = fVar15 + (float)*piVar6;
        } while (puVar9 != (undefined8 *)0x0);
      }
      iVar10 = *(int *)(this + 0xa04);
      iVar3 = *(int *)(this + 0xa08);
      RBMap<int,int,Comparator<int>,DefaultAllocator>::clear
                ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_68);
      if (local_68 != (undefined8 *)0x0) {
        Memory::free_static(local_68,false);
      }
      RBMap<int,int,Comparator<int>,DefaultAllocator>::clear
                ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_88);
      if (local_88 != (undefined8 *)0x0) {
        Memory::free_static(local_88,false);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return CONCAT44((float)(local_cc * iVar3) + fVar15,(float)(iVar10 * (int)uVar13) + fVar14);
    }
    uVar4 = Node::get_child((int)this,SUB41(iVar10,0));
    plVar5 = (long *)Container::as_sortable_control(this,uVar4,0);
    iVar3 = local_cc;
    if (plVar5 != (long *)0x0) {
      iVar1 = local_b8 + 1;
      iVar3 = local_b8 / *(int *)(this + 0xa00);
      uVar2 = (long)local_b8 % (long)*(int *)(this + 0xa00);
      iVar8 = (int)uVar2;
      local_90 = iVar3;
      local_8c = iVar8;
      local_48 = (**(code **)(*plVar5 + 0x300))();
      uVar4 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
      iVar12 = (int)((ulong)uVar4 >> 0x20);
      iVar11 = (int)uVar4;
      puVar7 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        while (puVar7 = (undefined8 *)puVar7[2], local_80 != puVar7) {
          while (*(int *)(puVar7 + 6) <= iVar8) {
            if (iVar8 <= *(int *)(puVar7 + 6)) {
              piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                        ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                         &local_88,&local_8c);
              if (iVar11 < *piVar6) {
                iVar11 = *piVar6;
              }
              piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                        ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                         &local_88,&local_8c);
              *piVar6 = iVar11;
              goto LAB_0010223a;
            }
            puVar7 = (undefined8 *)puVar7[1];
            if (local_80 == puVar7) goto LAB_0010221e;
          }
        }
      }
LAB_0010221e:
      piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_88,
                                 &local_8c);
      *piVar6 = iVar11;
LAB_0010223a:
      puVar7 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        while (puVar7 = (undefined8 *)puVar7[2], local_60 != puVar7) {
          while (*(int *)(puVar7 + 6) <= iVar3) {
            if (iVar3 <= *(int *)(puVar7 + 6)) {
              piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                        ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                         &local_68,&local_90);
              if (iVar12 < *piVar6) {
                iVar12 = *piVar6;
              }
              piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                        ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)
                                         &local_68,&local_90);
              *piVar6 = iVar12;
              goto LAB_0010227b;
            }
            puVar7 = (undefined8 *)puVar7[1];
            if (local_60 == puVar7) goto LAB_00102269;
          }
        }
      }
LAB_00102269:
      piVar6 = (int *)RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
                                ((RBMap<int,int,Comparator<int>,DefaultAllocator> *)&local_68,
                                 &local_90);
      *piVar6 = iVar12;
LAB_0010227b:
      if ((int)uVar13 < iVar8) {
        uVar13 = uVar2 & 0xffffffff;
      }
      local_b8 = iVar1;
      if (iVar3 <= local_cc) {
        iVar3 = local_cc;
      }
    }
    local_cc = iVar3;
    iVar10 = iVar10 + 1;
  } while( true );
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



/* GridContainer::is_class_ptr(void*) const */

uint GridContainer::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x108e,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108e10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108e10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108e70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108e70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* GridContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GridContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GridContainer::_property_can_revertv(StringName const&) const */

undefined8 GridContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#2}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#2}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a08 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   GridContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */

void std::
     _Function_handler<void(Node*,StringName_const&,StringName_const&),GridContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>
     ::_M_invoke(_Any_data *param_1,Node **param_2,StringName *param_3,StringName *param_4)

{
  code *pcVar1;
  
  Control::get_theme_item();
  Variant::operator_cast_to_int((Variant *)&stack0x00000000);
  _DAT_00000a04 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridContainer::_bind_methods() [clone .cold] */

void GridContainer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridContainer::_validate_propertyv(PropertyInfo&) const */

void GridContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010b010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* GridContainer::_setv(StringName const&, Variant const&) */

undefined8 GridContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001029e8) */
/* GridContainer::_getv(StringName const&, Variant&) const */

undefined8 GridContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBSet<int, Comparator<int>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::_cleanup_tree
          (RBSet<int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

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
          Memory::free_static(pEVar2,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
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
          Memory::free_static(pEVar6,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
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
          Memory::free_static(pEVar2,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
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
          Memory::free_static(pEVar6,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<int, int, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, int,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<int,int,Comparator<int>,DefaultAllocator>::_cleanup_tree
          (RBMap<int,int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

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
          Memory::free_static(pEVar2,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
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
          Memory::free_static(pEVar6,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
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
          Memory::free_static(pEVar2,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
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
          Memory::free_static(pEVar6,false);
        }
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
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* GridContainer::~GridContainer() */

void __thiscall GridContainer::~GridContainer(GridContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103710;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103710:
  Control::~Control((Control *)this);
  return;
}



/* GridContainer::~GridContainer() */

void __thiscall GridContainer::~GridContainer(GridContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103770;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103770:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* GridContainer::_get_class_namev() const */

undefined8 * GridContainer::_get_class_namev(void)

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
LAB_001037d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001037d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GridContainer");
      goto LAB_0010383e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GridContainer");
LAB_0010383e:
  return &_get_class_namev()::_class_name_static;
}



/* GridContainer::get_class() const */

void GridContainer::get_class(void)

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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00103a8c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103a8c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC10;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC10;
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
  if (local_90 == 0) {
LAB_00103c48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103c48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103c66;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103c66:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
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
  if (local_90 == 0) {
LAB_00104048:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104048;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104065;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104065:
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
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010b028 != Object::_get_property_list) {
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
  if (local_90 == 0) {
LAB_001044c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001044c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001044e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001044e5:
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
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010b030 != CanvasItem::_get_property_list) {
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
  if (local_90 == 0) {
LAB_00104948:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104948;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104965;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104965:
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



/* GridContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GridContainer::_get_property_listv(GridContainer *this,List *param_1,bool param_2)

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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GridContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GridContainer";
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
LAB_00104d98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104d98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104db5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104db5:
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
  StringName::StringName((StringName *)&local_78,"GridContainer",false);
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



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001050f7;
  local_68 = 0;
  local_58 = &_LC9;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_001051e8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_001051e8;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  if (*(long *)(puVar7 + 2) != local_50._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar6 = local_50._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar6;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar6;
  }
  lVar5 = local_38;
  puVar7[6] = local_40;
  if (*(long *)(puVar7 + 8) == local_38) {
    puVar7[10] = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_001050f7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_001053ef;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_001053ef:
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
    if (cVar6 != '\0') goto LAB_001054a3;
  }
  cVar6 = String::operator==(param_1,"Control");
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
              if (lVar5 == 0) goto LAB_001055eb;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_001055eb:
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
      if (cVar6 != '\0') goto LAB_001054a3;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
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
                if (lVar5 == 0) goto LAB_001056cb;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_001056cb:
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
        if (cVar6 != '\0') goto LAB_001054a3;
      }
      cVar6 = String::operator==(param_1,"Node");
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
                  if (lVar5 == 0) goto LAB_00105573;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_00105573:
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_001054a3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_001057e1;
      }
    }
  }
LAB_001054a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001057e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridContainer::is_class(String const&) const */

undefined8 __thiscall GridContainer::is_class(GridContainer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010585f;
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
LAB_0010585f:
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
    if (cVar6 != '\0') goto LAB_00105913;
  }
  cVar6 = String::operator==(param_1,"GridContainer");
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
              if (lVar5 == 0) goto LAB_001059d3;
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
LAB_001059d3:
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
      if (cVar6 != '\0') goto LAB_00105913;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Control::is_class((Control *)this,param_1);
        return uVar7;
      }
      goto LAB_00105a7c;
    }
  }
LAB_00105913:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105a7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<int, int, Comparator<int>, DefaultAllocator>::clear() */

void __thiscall
RBMap<int,int,Comparator<int>,DefaultAllocator>::clear
          (RBMap<int,int,Comparator<int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar5) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::clear() */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::clear
          (RBSet<int,Comparator<int>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (pEVar3 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar4 = *(Element **)(pEVar6 + 8);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar5,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* MethodBind* create_method_bind<GridContainer, int>(void (GridContainer::*)(int)) */

MethodBind * create_method_bind<GridContainer,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108e10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GridContainer";
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



/* MethodBind* create_method_bind<GridContainer, int>(int (GridContainer::*)() const) */

MethodBind * create_method_bind<GridContainer,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108e70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridContainer";
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



/* GridContainer::_initialize_classv() */

void GridContainer::_initialize_classv(void)

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
    if (Container::initialize_class()::initialized == '\0') {
      if (Control::initialize_class()::initialized == '\0') {
        if (CanvasItem::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
            local_58 = "Node";
            local_70 = 0;
            local_50 = 4;
            String::parse_latin1((StrRange *)&local_70);
            StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if ((code *)PTR__bind_methods_0010b048 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "CanvasItem";
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
          CanvasItem::_bind_methods();
          if ((code *)PTR__bind_compatibility_methods_0010b038 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "CanvasItem";
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
      if ((code *)PTR__bind_methods_0010b040 != Control::_bind_methods) {
        Container::_bind_methods();
      }
      Container::initialize_class()::initialized = '\x01';
    }
    local_58 = "Container";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GridContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::_erase_fix_rb(RBSet<int, Comparator<int>,
   DefaultAllocator>::Element*) */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::_erase_fix_rb
          (RBSet<int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  pEVar8 = *(Element **)(this + 8);
  pEVar2 = *(Element **)(*(long *)this + 0x10);
  pEVar9 = *(Element **)(param_1 + 0x18);
  pEVar7 = pEVar8;
  do {
    pEVar6 = pEVar9;
    if (pEVar2 == pEVar7) {
LAB_001067f0:
      iVar1 = *(int *)pEVar8;
joined_r0x001068b3:
      if (iVar1 != 1) {
        _err_print_error("_erase_fix_rb","./core/templates/rb_set.h",0x1e3,
                         "Condition \"_data._nil->color != BLACK\" is true.",0,0);
        return;
      }
      return;
    }
    pEVar9 = param_1;
    if (*(int *)param_1 != 0) {
LAB_00106799:
      pEVar7 = *(Element **)(pEVar9 + 0x10);
      if (*(int *)pEVar7 == 1) goto LAB_001067a6;
LAB_00106850:
      if (pEVar9 != *(Element **)(pEVar6 + 8)) {
        iVar1 = *(int *)pEVar6;
        pEVar7 = pEVar9;
        goto joined_r0x0010685f;
      }
      if (**(int **)(pEVar9 + 8) == 1) {
        *(int *)pEVar7 = 1;
        if (pEVar9 == pEVar8) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
          pEVar8 = *(Element **)(this + 8);
          pEVar7 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          *(int *)pEVar9 = 0;
        }
        pEVar2 = *(Element **)(pEVar7 + 8);
        *(Element **)(pEVar9 + 0x10) = pEVar2;
        if (pEVar2 != pEVar8) {
          *(Element **)(pEVar2 + 0x18) = pEVar9;
        }
        lVar3 = *(long *)(pEVar9 + 0x18);
        *(long *)(pEVar7 + 0x18) = lVar3;
        if (pEVar9 == *(Element **)(lVar3 + 8)) {
          *(Element **)(lVar3 + 8) = pEVar7;
        }
        else {
          *(Element **)(lVar3 + 0x10) = pEVar7;
        }
        *(Element **)(pEVar7 + 8) = pEVar9;
        *(Element **)(pEVar9 + 0x18) = pEVar7;
        pEVar9 = pEVar7;
      }
LAB_00106a41:
      if ((pEVar9 == pEVar8) && (*(int *)pEVar6 == 0)) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar9 = *(int *)pEVar6;
      }
      puVar5 = *(undefined4 **)(pEVar9 + 8);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 8);
      pEVar2 = *(Element **)(lVar3 + 0x10);
      *(Element **)(pEVar6 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 0x10)) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar4 + 8) = lVar3;
      }
      *(Element **)(lVar3 + 0x10) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_001067f0;
    }
    *(int *)param_1 = 1;
    if (pEVar6 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar6 = 0;
    }
    if (*(Element **)(pEVar6 + 8) != param_1) {
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar9 = *(Element **)(param_1 + 8);
      pEVar7 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar7;
      if (pEVar7 != pEVar8) {
        *(Element **)(pEVar7 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_00106799;
    }
    pEVar9 = *(Element **)(param_1 + 0x10);
    *(Element **)(pEVar6 + 8) = pEVar9;
    if (pEVar9 != pEVar8) {
      *(Element **)(pEVar9 + 0x18) = pEVar6;
    }
    lVar3 = *(long *)(pEVar6 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    if (pEVar6 == *(Element **)(lVar3 + 0x10)) {
      *(Element **)(lVar3 + 0x10) = param_1;
    }
    else {
      *(Element **)(lVar3 + 8) = param_1;
    }
    *(Element **)(param_1 + 0x10) = pEVar6;
    *(Element **)(pEVar6 + 0x18) = param_1;
    pEVar7 = *(Element **)(pEVar9 + 0x10);
    if (*(int *)pEVar7 != 1) goto LAB_00106850;
LAB_001067a6:
    pEVar7 = *(Element **)(pEVar9 + 8);
    if (*(int *)pEVar7 != 1) {
      if (*(Element **)(pEVar6 + 8) == pEVar9) goto LAB_00106a41;
      *(int *)pEVar7 = 1;
      if (pEVar9 == pEVar8) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
        pEVar7 = *(Element **)(pEVar9 + 8);
      }
      else {
        *(int *)pEVar9 = 0;
      }
      pEVar2 = *(Element **)(pEVar7 + 0x10);
      *(Element **)(pEVar9 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar9;
      }
      lVar3 = *(long *)(pEVar9 + 0x18);
      *(long *)(pEVar7 + 0x18) = lVar3;
      if (pEVar9 == *(Element **)(lVar3 + 0x10)) {
        *(Element **)(lVar3 + 0x10) = pEVar7;
      }
      else {
        *(Element **)(lVar3 + 8) = pEVar7;
      }
      *(Element **)(pEVar7 + 0x10) = pEVar9;
      *(Element **)(pEVar9 + 0x18) = pEVar7;
      iVar1 = *(int *)pEVar6;
joined_r0x0010685f:
      if ((iVar1 == 0) && (pEVar7 == pEVar8)) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar7 = iVar1;
      }
      puVar5 = *(undefined4 **)(pEVar7 + 0x10);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar2 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      iVar1 = *(int *)pEVar8;
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto joined_r0x001068b3;
    }
    if (pEVar9 == pEVar8) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      iVar1 = *(int *)pEVar6;
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar9 = 0;
      iVar1 = *(int *)pEVar6;
    }
    if (iVar1 == 0) {
      *(int *)pEVar6 = 1;
      goto LAB_001067f0;
    }
    pEVar9 = *(Element **)(pEVar6 + 0x18);
    param_1 = *(Element **)(pEVar9 + 0x10);
    pEVar7 = pEVar6;
    if (param_1 == pEVar6) {
      param_1 = *(Element **)(pEVar9 + 8);
    }
  } while( true );
}



/* RBSet<int, Comparator<int>, DefaultAllocator>::_erase(RBSet<int, Comparator<int>,
   DefaultAllocator>::Element*) */

void __thiscall
RBSet<int,Comparator<int>,DefaultAllocator>::_erase
          (RBSet<int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int *piVar1;
  Element *pEVar2;
  Element *pEVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(this + 8);
  pEVar8 = param_1;
  if (piVar4 == piVar1) {
LAB_00106d18:
    lVar6 = *(long *)(pEVar8 + 0x18);
    piVar4 = *(int **)(pEVar8 + 8);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 == pEVar8) goto LAB_00106d2d;
LAB_00106c3d:
    *(int **)(lVar6 + 8) = piVar4;
  }
  else {
    if (piVar1 != *(int **)(param_1 + 8)) {
      pEVar8 = *(Element **)(param_1 + 0x20);
      piVar4 = *(int **)(pEVar8 + 0x10);
      if (piVar1 == piVar4) goto LAB_00106d18;
    }
    lVar6 = *(long *)(pEVar8 + 0x18);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 != pEVar8) goto LAB_00106c3d;
LAB_00106d2d:
    *(int **)(lVar6 + 0x10) = piVar4;
    pEVar9 = *(Element **)(lVar6 + 8);
  }
  if (*piVar4 == 0) {
    *(long *)(piVar4 + 6) = lVar6;
    *piVar4 = 1;
  }
  else if ((*(int *)pEVar8 == 1) && (lVar6 != *(long *)this)) {
    _erase_fix_rb(this,pEVar9);
  }
  if (pEVar8 != param_1) {
    pEVar9 = *(Element **)(this + 8);
    if (pEVar9 == pEVar8) {
      uVar7 = 0x1fb;
      pcVar5 = "Condition \"rp == _data._nil\" is true.";
      goto LAB_00106d62;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = *(Element **)(param_1 + 0x10);
    pEVar3 = *(Element **)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 0x10) = uVar7;
    *(undefined8 *)(pEVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(int *)pEVar8 = *(int *)param_1;
    if (pEVar9 != pEVar2) {
      *(Element **)(pEVar2 + 0x18) = pEVar8;
    }
    if (pEVar9 != pEVar3) {
      *(Element **)(pEVar3 + 0x18) = pEVar8;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(Element **)(lVar6 + 0x10) == param_1) {
      *(Element **)(lVar6 + 0x10) = pEVar8;
    }
    else {
      *(Element **)(lVar6 + 8) = pEVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar6;
  }
  Memory::free_static(param_1,false);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  if (**(int **)(this + 8) != 0) {
    return;
  }
  uVar7 = 0x218;
  pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
LAB_00106d62:
  _err_print_error("_erase","./core/templates/rb_set.h",uVar7,pcVar5,0,0);
  return;
}



/* RBMap<int, int, Comparator<int>, DefaultAllocator>::_insert_rb_fix(RBMap<int, int,
   Comparator<int>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<int,int,Comparator<int>,DefaultAllocator>::_insert_rb_fix
          (RBMap<int,int,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_00106e4d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00106f70;
LAB_00106df6:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00106df6;
LAB_00106f70:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00106e33:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00107062:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00107062;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00107030;
LAB_00106ec0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00106ec0;
LAB_00107030:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00106e33;
    }
LAB_00106e4d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<int, int, Comparator<int>, DefaultAllocator>::operator[](int const&) */

Element * __thiscall
RBMap<int,int,Comparator<int>,DefaultAllocator>::operator[]
          (RBMap<int,int,Comparator<int>,DefaultAllocator> *this,int *param_1)

{
  int iVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  bool bVar10;
  
  pEVar5 = *(Element **)this;
  if (pEVar5 == (Element *)0x0) {
    pEVar5 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
    pEVar4 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar5 + 0x30) = 0;
    *(Element **)this = pEVar5;
    *(Element **)(pEVar5 + 0x18) = pEVar4;
    *(undefined4 *)pEVar5 = 1;
    *(Element **)(pEVar5 + 8) = pEVar4;
    *(Element **)(pEVar5 + 0x10) = pEVar4;
  }
  else {
    pEVar4 = *(Element **)(pEVar5 + 0x10);
  }
  pEVar7 = *(Element **)(this + 8);
  iVar1 = *param_1;
  pEVar2 = pEVar4;
  if (pEVar7 != pEVar4) {
    do {
      if (iVar1 < *(int *)(pEVar2 + 0x30)) {
        pEVar2 = *(Element **)(pEVar2 + 0x10);
      }
      else {
        if (iVar1 <= *(int *)(pEVar2 + 0x30)) goto LAB_001071ff;
        pEVar2 = *(Element **)(pEVar2 + 8);
      }
    } while (pEVar7 != pEVar2);
    do {
      pEVar5 = pEVar4;
      if (iVar1 < *(int *)(pEVar5 + 0x30)) {
        pEVar4 = *(Element **)(pEVar5 + 0x10);
      }
      else {
        if (iVar1 <= *(int *)(pEVar5 + 0x30)) {
          *(undefined4 *)(pEVar5 + 0x34) = 0;
          return pEVar5 + 0x34;
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
      }
    } while (pEVar7 != pEVar4);
  }
  pEVar2 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
  iVar1 = *param_1;
  *(Element **)(pEVar2 + 0x18) = pEVar5;
  *(undefined1 (*) [16])(pEVar2 + 0x20) = (undefined1  [16])0x0;
  pEVar4 = *(Element **)(this + 8);
  *(undefined4 *)pEVar2 = 0;
  *(int *)(pEVar2 + 0x30) = iVar1;
  *(undefined4 *)(pEVar2 + 0x34) = 0;
  *(Element **)(pEVar2 + 8) = pEVar4;
  *(Element **)(pEVar2 + 0x10) = pEVar4;
  if ((pEVar5 == *(Element **)this) || (*param_1 < *(int *)(pEVar5 + 0x30))) {
    *(Element **)(pEVar5 + 0x10) = pEVar2;
    pEVar8 = *(Element **)(this + 8);
    pEVar6 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    pEVar7 = pEVar4;
    if (pEVar4 == pEVar8) {
      pEVar4 = pEVar5;
      pEVar3 = pEVar5;
      if (pEVar2 == *(Element **)(pEVar5 + 8)) goto LAB_00107220;
      goto LAB_0010722d;
    }
LAB_001071a0:
    do {
      pEVar9 = pEVar7 + 0x10;
      pEVar4 = pEVar7;
      pEVar7 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  else {
    *(Element **)(pEVar5 + 8) = pEVar2;
    pEVar7 = *(Element **)(pEVar2 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar5;
    pEVar6 = pEVar4;
    if (pEVar7 != pEVar8) goto LAB_001071a0;
LAB_00107220:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = *(Element **)(pEVar4 + 8) == pEVar3;
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_0010722d:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (*(Element **)(this + 8) == pEVar6) {
    pEVar7 = pEVar2;
    pEVar8 = pEVar5;
    if (pEVar2 == *(Element **)(pEVar5 + 0x10)) {
      do {
        pEVar5 = *(Element **)(pEVar8 + 0x18);
        bVar10 = *(Element **)(pEVar5 + 0x10) == pEVar8;
        pEVar7 = pEVar8;
        pEVar8 = pEVar5;
      } while (bVar10);
    }
    if (pEVar7 != *(Element **)this) goto LAB_001071d4;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_001071ee;
LAB_001071dd:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar5 = *(Element **)(pEVar2 + 0x28);
    if (pEVar5 == (Element *)0x0) goto LAB_001071ee;
  }
  else {
    do {
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)(pEVar5 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar5 + 8));
LAB_001071d4:
    *(Element **)(pEVar2 + 0x28) = pEVar5;
    if (pEVar4 != (Element *)0x0) goto LAB_001071dd;
  }
  *(Element **)(pEVar5 + 0x20) = pEVar2;
LAB_001071ee:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
LAB_001071ff:
  return pEVar2 + 0x34;
}



/* GridContainer::_notificationv(int, bool) */

void __thiscall GridContainer::_notificationv(GridContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Control::_notification(iVar1);
    if ((code *)PTR__notification_0010b050 != Control::_notification) {
      Container::_notification(iVar1);
    }
    if (param_1 == 0x33) {
      _notification(iVar1);
      return;
    }
    if (param_1 < 0x34) {
      if (param_1 == 0x2d) {
        Control::update_minimum_size();
        return;
      }
      if (param_1 == 0x31) {
LAB_0010745c:
        Container::queue_sort();
        return;
      }
    }
    else if (param_1 == 0x7da) goto LAB_0010745c;
    return;
  }
  if (param_1 == 0x33) {
    _notification(iVar1);
    goto LAB_001073d8;
  }
  if (param_1 < 0x34) {
    if (param_1 == 0x2d) {
      Control::update_minimum_size();
      goto LAB_001073d8;
    }
    if (param_1 != 0x31) goto LAB_001073d8;
  }
  else if (param_1 != 0x7da) goto LAB_001073d8;
  Container::queue_sort();
LAB_001073d8:
  if ((code *)PTR__notification_0010b050 != Control::_notification) {
    Container::_notification(iVar1);
  }
  Control::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107638) */
/* WARNING: Removing unreachable block (ram,0x001077cd) */
/* WARNING: Removing unreachable block (ram,0x001077d9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001079d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_001079d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107cc4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_00107cc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107ec3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_00107ec3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108295;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001080d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108295:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001084b5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001082f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001084b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_001085dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108640;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108640:
      uVar6 = 4;
LAB_001085dd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010855b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010855b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC50;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001085b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108736;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108736:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* GridContainer::~GridContainer() */

void __thiscall GridContainer::~GridContainer(GridContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

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



