
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Container::fit_child_in_rect(Control*, Rect2 const&) */

void Container::fit_child_in_rect(Control *param_1,Rect2 *param_2)

{
  long lVar1;
  Control *pCVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (Rect2 *)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x60;
      pcVar4 = "Parameter \"p_child\" is null.";
LAB_00100292:
      _err_print_error("fit_child_in_rect","scene/gui/container.cpp",uVar5,pcVar4,0,0);
      return;
    }
  }
  else {
    pCVar2 = (Control *)Node::get_parent();
    if (pCVar2 == param_1) {
      (**(code **)(*(long *)pCVar2 + 0x340))(pCVar2);
      (**(code **)(*(long *)param_2 + 0x300))(param_2);
      uVar3 = Control::get_h_size_flags();
      if (((uVar3 & 1) == 0) &&
         ((uVar3 = Control::get_h_size_flags(), (uVar3 & 8) != 0 ||
          (uVar3 = Control::get_h_size_flags(), (uVar3 & 4) == 0)))) {
        uVar3 = Control::get_v_size_flags();
      }
      else {
        uVar3 = Control::get_v_size_flags();
      }
      if (((uVar3 & 1) == 0) && (uVar3 = Control::get_v_size_flags(), (uVar3 & 8) == 0)) {
        Control::get_v_size_flags();
      }
      Control::set_rect(param_2);
      Control::set_rotation(0.0);
      Control::set_scale((Vector2 *)param_2);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = 0x61;
      pcVar4 = "Condition \"p_child->get_parent() != this\" is true.";
      goto LAB_00100292;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_sort_children() */

void __thiscall Container::_sort_children(Container *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    Object::notification((int)this,true);
    (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xe8,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
    Object::notification((int)this,true);
    (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0xf0,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  this[0x9c8] = (Container)0x0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* Container::as_sortable_control(Node*, Container::SortableVisibilityMode) const */

long __thiscall Container::as_sortable_control(undefined8 param_1_00,long param_1,int param_3)

{
  char cVar1;
  long lVar2;
  
  if (((param_1 != 0) &&
      (lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0), lVar2 != 0)) &&
     (cVar1 = CanvasItem::is_set_as_top_level(), cVar1 == '\0')) {
    if (param_3 == 0) {
      cVar1 = CanvasItem::is_visible();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else if (param_3 == 1) {
      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 == '\0') {
        return 0;
      }
      return lVar2;
    }
    return lVar2;
  }
  return 0;
}



/* Container::Container() */

void __thiscall Container::Container(Container *this)

{
  Control::Control((Control *)this);
  this[0x9c8] = (Container)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00108fd0;
  StringName::StringName((StringName *)(this + 0x9d0),"_get_allowed_size_flags_horizontal",false);
  this[0x9d8] = (Container)0x0;
  *(undefined8 *)(this + 0x9e0) = 0;
  StringName::StringName((StringName *)(this + 0x9e8),"_get_allowed_size_flags_vertical",false);
  this[0x9f0] = (Container)0x0;
  *(undefined8 *)(this + 0x9f8) = 0;
  Control::set_mouse_filter(this,1);
  return;
}



/* Container::queue_sort() [clone .part.0] */

void __thiscall Container::queue_sort(Container *this)

{
  long in_FS_OFFSET;
  Container aCStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<Container>
            (aCStack_48,(char *)this,(_func_void *)"&Container::_sort_children");
  Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aCStack_48,0);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aCStack_48);
  this[0x9c8] = (Container)0x1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::queue_sort() */

void __thiscall Container::queue_sort(Container *this)

{
  if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
    queue_sort(this);
    return;
  }
  return;
}



/* Container::_child_minsize_changed() */

void __thiscall Container::_child_minsize_changed(Container *this)

{
  Control::update_minimum_size();
  if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
    queue_sort(this);
    return;
  }
  return;
}



/* Container::_notification(int) */

void __thiscall Container::_notification(Container *this,int param_1)

{
  char cVar1;
  
  if (param_1 == 0x1f) {
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 == '\0') {
      return;
    }
  }
  else if (param_1 < 0x20) {
    if (param_1 != 10) {
      return;
    }
  }
  else if ((param_1 != 0x28) && (param_1 != 0x2d)) {
    return;
  }
  if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
    queue_sort(this);
    return;
  }
  return;
}



/* Container::_bind_methods() */

void Container::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
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
  undefined8 uVar13;
  char *pcVar14;
  int *piVar15;
  MethodBind *pMVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  long in_FS_OFFSET;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  char *local_118;
  undefined1 local_110 [16];
  int local_100;
  long local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  int *local_98;
  ulong local_90;
  long local_80;
  char *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_e8,(char ***)"queue_sort",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar16 = create_method_bind<Container>(queue_sort);
  ClassDB::bind_methodfi(1,pMVar16,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar19 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_d8._8_8_;
      local_d8 = auVar3 << 0x40;
      plVar18 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar18 != 0)) {
            StringName::unref();
          }
          lVar19 = lVar19 + 1;
          plVar18 = plVar18 + 1;
        } while (lVar1 != lVar19);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  auStack_50._0_8_ = &puStack_70;
  local_78 = "child";
  puStack_70 = &_LC38;
  local_68 = 0;
  local_58 = &local_78;
  D_METHODP((char *)&local_e8,(char ***)"fit_child_in_rect",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar16 = create_method_bind<Container,Control*,Rect2_const&>(fit_child_in_rect);
  ClassDB::bind_methodfi(1,pMVar16,false,(MethodDefinition *)&local_e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_d8._0_8_;
  if ((long *)local_d8._0_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if ((long *)local_d8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_d8._0_8_ + -8);
      lVar19 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_d8._8_8_;
      local_d8 = auVar4 << 0x40;
      plVar18 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar18 != 0)) {
            StringName::unref();
          }
          lVar19 = lVar19 + 1;
          plVar18 = plVar18 + 1;
        } while (lVar1 != lVar19);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  local_118 = "_get_allowed_size_flags_horizontal";
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_120 = 0;
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_110._0_8_ = 0x22;
  String::parse_latin1((StrRange *)&local_e8);
  local_b0 = CONCAT44(local_b0._4_4_,0xc);
  local_118 = "";
  local_140 = 0;
  local_138 = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_110._8_8_;
  local_110 = auVar11 << 0x40;
  String::parse_latin1((StrRange *)&local_138);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1e);
  local_100 = 0;
  local_f8 = 0;
  local_110 = (undefined1  [16])0x0;
  if (local_138 == 0) {
LAB_0010199b:
    local_f0 = 6;
    StringName::operator=((StringName *)(local_110 + 8),(StringName *)&local_140);
    lVar1 = local_138;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_138);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_0010199b;
    StringName::StringName((StringName *)&local_130,(String *)&local_f8,false);
    if (local_110._8_8_ == local_130) {
      lVar1 = local_138;
      if ((StringName::configured != '\0') && (local_130 != 0)) {
        StringName::unref();
        lVar1 = local_138;
      }
    }
    else {
      StringName::unref();
      local_110._8_8_ = local_130;
      lVar1 = local_138;
    }
  }
  local_138 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    plVar18 = (long *)(lVar1 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_140 != 0)) {
    StringName::unref();
  }
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if (local_d8._0_8_ != local_110._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    local_d8._0_8_ = local_110._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_110._8_8_;
    local_110 = auVar5 << 0x40;
  }
  if (local_d8._8_8_ != local_110._8_8_) {
    StringName::unref();
    local_d8._8_8_ = local_110._8_8_;
    local_110._8_8_ = 0;
  }
  lVar1 = local_f8;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 == local_f8) {
    local_b8 = CONCAT44(local_b8._4_4_,local_f0);
    if (local_f8 != 0) {
      LOCK();
      plVar18 = (long *)(local_f8 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_c0 = local_f8;
    local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  }
  if ((StringName::configured != '\0') && (local_110._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_110._0_8_;
  if (local_110._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_110._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_110._8_8_;
      local_110 = auVar10 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  local_90 = local_90 & 0xffffffff00000000;
  local_130 = 0;
  local_118 = "Container";
  local_110._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_118,(String *)&local_130,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_118,(MethodInfo *)&local_e8,true,(Vector *)&local_128,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar18 = (long *)(local_80 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar15 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar18 = (long *)(local_98 + -4);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar19 = 0;
      local_98 = (int *)0x0;
      piVar17 = piVar15;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar19 = lVar19 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar1 != lVar19);
      }
      Memory::free_static(piVar15 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar18 = (long *)(local_c0 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_d8._0_8_;
  if (local_d8._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_d8._0_8_ = 0;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  pcVar14 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar18 = (long *)((long)local_e8 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar14 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_120);
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_118 = "_get_allowed_size_flags_vertical";
  local_120 = 0;
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_110._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_e8);
  local_b0 = CONCAT44(local_b0._4_4_,0xc);
  local_140 = 0;
  local_138 = 0;
  local_118 = "";
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_110._8_8_;
  local_110 = auVar12 << 0x40;
  String::parse_latin1((StrRange *)&local_138);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x1e);
  local_100 = 0;
  local_f8 = 0;
  local_110 = (undefined1  [16])0x0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_138);
    local_f0 = 6;
    if (local_100 == 0x11) {
      StringName::StringName((StringName *)&local_130,(String *)&local_f8,false);
      if (local_110._8_8_ == local_130) {
        lVar1 = local_138;
        if ((StringName::configured != '\0') && (local_130 != 0)) {
          StringName::unref();
          lVar1 = local_138;
        }
      }
      else {
        StringName::unref();
        local_110._8_8_ = local_130;
        lVar1 = local_138;
      }
      goto joined_r0x00101a15;
    }
  }
  local_f0 = 6;
  StringName::operator=((StringName *)(local_110 + 8),(StringName *)&local_140);
  lVar1 = local_138;
joined_r0x00101a15:
  local_138 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    plVar18 = (long *)(lVar1 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_140 != 0)) {
    StringName::unref();
  }
  local_e0 = CONCAT44(local_e0._4_4_,local_118._0_4_);
  if (local_d8._0_8_ != local_110._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    local_d8._0_8_ = local_110._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_110._8_8_;
    local_110 = auVar6 << 0x40;
  }
  if (local_d8._8_8_ != local_110._8_8_) {
    StringName::unref();
    local_d8._8_8_ = local_110._8_8_;
    local_110._8_8_ = 0;
  }
  lVar1 = local_f8;
  local_c8 = CONCAT44(local_c8._4_4_,local_100);
  if (local_c0 == local_f8) {
    local_b8 = CONCAT44(local_b8._4_4_,local_f0);
    if (local_f8 != 0) {
      LOCK();
      plVar18 = (long *)(local_f8 + -0x10);
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_c0 = local_f8;
    local_b8 = CONCAT44(local_b8._4_4_,local_f0);
  }
  if ((StringName::configured != '\0') && (local_110._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_110._0_8_;
  if (local_110._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_110._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_110._8_8_;
      local_110 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  local_90 = local_90 & 0xffffffff00000000;
  local_130 = 0;
  local_118 = "Container";
  local_110._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_118,(String *)&local_130,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_118,(MethodInfo *)&local_e8,true,(Vector *)&local_128,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar18 = (long *)(local_80 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar15 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar18 = (long *)(local_98 + -4);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar19 = 0;
      local_98 = (int *)0x0;
      piVar17 = piVar15;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar19 = lVar19 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar1 != lVar19);
      }
      Memory::free_static(piVar15 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar18 = (long *)(local_c0 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_d8._0_8_;
  if (local_d8._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_d8._0_8_ = 0;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  pcVar14 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar18 = (long *)((long)local_e8 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar14 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_120);
  StringName::StringName((StringName *)&local_118,"NOTIFICATION_PRE_SORT_CHILDREN",false);
  local_128 = 0;
  local_130 = 0;
  local_e8 = "Container";
  local_e0 = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_e8,(String *)&local_130,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_e8,(StringName *)&local_128,(StringName *)&local_118,0x32,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') &&
     (((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_118 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"NOTIFICATION_SORT_CHILDREN",false);
  local_128 = 0;
  local_130 = 0;
  local_e8 = "Container";
  local_e0 = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_e8,(String *)&local_130,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_e8,(StringName *)&local_128,(StringName *)&local_118,0x33,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (((StringName::configured != '\0') &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_e8 = "pre_sort_children";
  local_e0 = 0x11;
  String::parse_latin1((StrRange *)&local_128);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = (undefined1  [16])0x0;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_128);
  }
  local_118 = "Container";
  local_130 = 0;
  local_110._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_118,(String *)&local_130,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_e8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar18 = (long *)(local_80 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar15 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar18 = (long *)(local_98 + -4);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar19 = 0;
      local_98 = (int *)0x0;
      piVar17 = piVar15;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar19 = lVar19 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar1 != lVar19);
      }
      Memory::free_static(piVar15 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar18 = (long *)(local_c0 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_d8._0_8_;
  if (local_d8._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_d8._8_8_;
      local_d8 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  pcVar14 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar18 = (long *)((long)local_e8 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar14 + -0x10),false);
    }
  }
  lVar1 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar18 = (long *)(local_128 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_128 = 0;
  local_e8 = "sort_children";
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)&local_128);
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 6;
  local_b0 = 1;
  local_a8[0] = 0;
  local_98 = (int *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_d8 = (undefined1  [16])0x0;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_128);
  }
  local_118 = "Container";
  local_130 = 0;
  local_110._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_118,(String *)&local_130,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_e8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar18 = (long *)(local_130 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar18 = (long *)(local_80 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar15 = local_98;
  if (local_98 != (int *)0x0) {
    LOCK();
    plVar18 = (long *)(local_98 + -4);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      if (local_98 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_98 + -2);
      lVar19 = 0;
      local_98 = (int *)0x0;
      piVar17 = piVar15;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar19 = lVar19 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar1 != lVar19);
      }
      Memory::free_static(piVar15 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_a8);
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar18 = (long *)(local_c0 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_d8._0_8_;
  if (local_d8._0_8_ != 0) {
    LOCK();
    plVar18 = (long *)(local_d8._0_8_ + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_d8._8_8_;
      local_d8 = auVar9 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  pcVar14 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar18 = (long *)((long)local_e8 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar14 + -0x10),false);
    }
  }
  lVar1 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar18 = (long *)(local_128 + -0x10);
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (*plVar18 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* Container::get_allowed_size_flags_vertical() const */

void Container::get_allowed_size_flags_vertical(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long in_RSI;
  Vector<int> *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar6 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,in_RSI + 0x9e8,0,0,local_f8);
    if (local_f8[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      lVar8 = local_c0;
      lVar5 = *(long *)(in_RDI + 8);
      if (lVar5 == local_c0) {
        if (lVar5 != 0) {
          LOCK();
          plVar6 = (long *)(lVar5 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      else {
        if (lVar5 != 0) {
          LOCK();
          plVar6 = (long *)(lVar5 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            lVar5 = *(long *)(in_RDI + 8);
            *(undefined8 *)(in_RDI + 8) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        *(long *)(in_RDI + 8) = local_c0;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001023ae;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x9f0) == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_allowed_size_flags_vertical");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Vector<int>,void>::get_class_info((GetTypeInfo<Vector<int>,void> *)local_f8);
    lVar5 = CONCAT44(uStack_ec,uStack_f0);
    local_c0 = CONCAT44(local_c0._4_4_,local_f8[0]);
    uVar4 = local_b8._0_8_;
    if (local_b8._0_8_ != lVar5) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_b8._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
        lVar5 = CONCAT44(uStack_ec,uStack_f0);
      }
      local_b8._0_8_ = lVar5;
      uStack_f0 = 0;
      uStack_ec = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar5 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar5;
    }
    lVar5 = local_a0;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 != local_d8) {
      lVar8 = local_d8;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
          lVar8 = local_d8;
        }
      }
      local_d8 = 0;
      local_a0 = lVar8;
    }
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x9f8) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"Container");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010277e;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102793:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_001026b0;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x9e8);
        *(undefined8 *)(in_RSI + 0x9f8) = uVar4;
      }
      else {
        lVar5 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010277e:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00102793;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x9e8,uVar3);
      *(undefined8 *)(in_RSI + 0x9f8) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_001026b0:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = in_RSI + 0x9f8;
      plVar6[1] = in_RSI + 0x9f0;
      plVar6[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar6;
    }
    *(undefined1 *)(in_RSI + 0x9f0) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(in_RSI + 0x9f8);
  if (pcVar7 == (code *)0x0) {
    Vector<int>::push_back(in_RDI,1);
    Vector<int>::push_back(in_RDI,2);
    Vector<int>::push_back(in_RDI,0);
    Vector<int>::push_back(in_RDI,4);
    Vector<int>::push_back(in_RDI,8);
  }
  else {
    uStack_f0 = 0;
    uStack_ec = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x9e8,pcVar7,0,local_f8);
    }
    local_c0 = 0;
    CowData<int>::_ref((CowData<int> *)&local_c0,(CowData *)&uStack_f0);
    lVar5 = *(long *)(in_RDI + 8);
    if (lVar5 == local_c0) {
      if (lVar5 != 0) {
        LOCK();
        plVar6 = (long *)(lVar5 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_c0 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar6 = (long *)(lVar5 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          lVar5 = *(long *)(in_RDI + 8);
          *(undefined8 *)(in_RDI + 8) = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *(long *)(in_RDI + 8) = local_c0;
    }
    if (CONCAT44(uStack_ec,uStack_f0) != 0) {
      LOCK();
      plVar6 = (long *)(CONCAT44(uStack_ec,uStack_f0) + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        lVar5 = CONCAT44(uStack_ec,uStack_f0);
        uStack_f0 = 0;
        uStack_ec = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
LAB_001023ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Container::get_allowed_size_flags_horizontal() const */

void Container::get_allowed_size_flags_horizontal(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long in_RSI;
  Vector<int> *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar6 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,in_RSI + 0x9d0,0,0,local_f8);
    if (local_f8[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      lVar8 = local_c0;
      lVar5 = *(long *)(in_RDI + 8);
      if (lVar5 == local_c0) {
        if (lVar5 != 0) {
          LOCK();
          plVar6 = (long *)(lVar5 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
      }
      else {
        if (lVar5 != 0) {
          LOCK();
          plVar6 = (long *)(lVar5 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            lVar5 = *(long *)(in_RDI + 8);
            *(undefined8 *)(in_RDI + 8) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        *(long *)(in_RDI + 8) = local_c0;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001029ee;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x9d8) == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_allowed_size_flags_horizontal");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Vector<int>,void>::get_class_info((GetTypeInfo<Vector<int>,void> *)local_f8);
    lVar5 = CONCAT44(uStack_ec,uStack_f0);
    local_c0 = CONCAT44(local_c0._4_4_,local_f8[0]);
    uVar4 = local_b8._0_8_;
    if (local_b8._0_8_ != lVar5) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_b8._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
        lVar5 = CONCAT44(uStack_ec,uStack_f0);
      }
      local_b8._0_8_ = lVar5;
      uStack_f0 = 0;
      uStack_ec = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar5 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar5;
    }
    lVar5 = local_a0;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 != local_d8) {
      lVar8 = local_d8;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
          lVar8 = local_d8;
        }
      }
      local_d8 = 0;
      local_a0 = lVar8;
    }
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x9e0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"Container");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_00102dbe;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102dd3:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00102cf0;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x9d0);
        *(undefined8 *)(in_RSI + 0x9e0) = uVar4;
      }
      else {
        lVar5 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102dbe:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00102dd3;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x9d0,uVar3);
      *(undefined8 *)(in_RSI + 0x9e0) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_00102cf0:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = in_RSI + 0x9e0;
      plVar6[1] = in_RSI + 0x9d8;
      plVar6[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar6;
    }
    *(undefined1 *)(in_RSI + 0x9d8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(in_RSI + 0x9e0);
  if (pcVar7 == (code *)0x0) {
    Vector<int>::push_back(in_RDI,1);
    Vector<int>::push_back(in_RDI,2);
    Vector<int>::push_back(in_RDI,0);
    Vector<int>::push_back(in_RDI,4);
    Vector<int>::push_back(in_RDI,8);
  }
  else {
    uStack_f0 = 0;
    uStack_ec = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x9d0,pcVar7,0,local_f8);
    }
    local_c0 = 0;
    CowData<int>::_ref((CowData<int> *)&local_c0,(CowData *)&uStack_f0);
    lVar5 = *(long *)(in_RDI + 8);
    if (lVar5 == local_c0) {
      if (lVar5 != 0) {
        LOCK();
        plVar6 = (long *)(lVar5 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_c0 + -0x10),false);
        }
      }
    }
    else {
      if (lVar5 != 0) {
        LOCK();
        plVar6 = (long *)(lVar5 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          lVar5 = *(long *)(in_RDI + 8);
          *(undefined8 *)(in_RDI + 8) = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      *(long *)(in_RDI + 8) = local_c0;
    }
    if (CONCAT44(uStack_ec,uStack_f0) != 0) {
      LOCK();
      plVar6 = (long *)(CONCAT44(uStack_ec,uStack_f0) + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        lVar5 = CONCAT44(uStack_ec,uStack_f0);
        uStack_f0 = 0;
        uStack_ec = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
LAB_001029ee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Container::add_child_notify(Node*) */

void __thiscall Container::add_child_notify(Container *this,Node *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  Container aCStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::add_child_notify((Node *)this);
  if (param_1 != (Node *)0x0) {
    plVar2 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    if (plVar2 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar2 + 0x108);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::queue_sort");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x68,aCStack_58,0);
      Callable::~Callable((Callable *)aCStack_58);
      pcVar1 = *(code **)(*plVar2 + 0x108);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::_child_minsize_changed");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x70,aCStack_58,0);
      Callable::~Callable((Callable *)aCStack_58);
      pcVar1 = *(code **)(*plVar2 + 0x108);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::_child_minsize_changed");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x18,aCStack_58,0);
      Callable::~Callable((Callable *)aCStack_58);
      Control::update_minimum_size();
      if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          queue_sort(this);
          return;
        }
        goto LAB_0010301f;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010301f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::move_child_notify(Node*) */

void __thiscall Container::move_child_notify(Container *this,Node *param_1)

{
  long lVar1;
  
  Node::move_child_notify((Node *)this);
  if (param_1 != (Node *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    if (lVar1 != 0) {
      Control::update_minimum_size();
      if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
        queue_sort(this);
        return;
      }
    }
  }
  return;
}



/* Container::remove_child_notify(Node*) */

void __thiscall Container::remove_child_notify(Container *this,Node *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  Container aCStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::remove_child_notify((Node *)this);
  if (param_1 != (Node *)0x0) {
    plVar2 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    if (plVar2 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar2 + 0x110);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::queue_sort");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x68,aCStack_58);
      Callable::~Callable((Callable *)aCStack_58);
      pcVar1 = *(code **)(*plVar2 + 0x110);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::_child_minsize_changed");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x70,aCStack_58);
      Callable::~Callable((Callable *)aCStack_58);
      pcVar1 = *(code **)(*plVar2 + 0x110);
      create_custom_callable_function_pointer<Container>
                (aCStack_58,(char *)this,(_func_void *)"&Container::_child_minsize_changed");
      (*pcVar1)(plVar2,SceneStringNames::singleton + 0x18,aCStack_58);
      Callable::~Callable((Callable *)aCStack_58);
      Control::update_minimum_size();
      if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          queue_sort(this);
          return;
        }
        goto LAB_00103227;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103227:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::get_configuration_warnings() const */

void Container::get_configuration_warnings(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long *in_RSI;
  long lVar5;
  long in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_configuration_warnings();
  if (*(code **)(*in_RSI + 0x48) == get_class) {
    if (in_RSI[1] == 0) {
      local_60 = 0;
      local_58 = "Container";
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_60);
    }
    else {
      lVar5 = *(long *)(in_RSI[1] + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
    }
  }
  else {
    (**(code **)(*in_RSI + 0x48))(&local_60);
  }
  cVar3 = String::operator==((String *)&local_60,"Container");
  if (cVar3 != '\0') {
    (**(code **)(*in_RSI + 0x98))(local_48);
    cVar3 = Variant::is_null();
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
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
    if (cVar3 == '\0') goto LAB_0010345b;
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = 
    "Container by itself serves no purpose unless a script configures its children placement behavior.\nIf you don\'t intend to add a script, use a plain Control node instead."
    ;
    local_68 = 0;
    local_50 = 0xa8;
    String::parse_latin1((StrRange *)&local_68);
    RTR((String *)&local_58,(String *)&local_68);
    if (*(long *)(in_RDI + 8) == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
    }
    iVar4 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar5);
    if (iVar4 == 0) {
      if (*(long *)(in_RDI + 8) == 0) {
        lVar6 = -1;
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(*(long *)(in_RDI + 8) + -8);
        lVar6 = lVar5 + -1;
        if (-1 < lVar6) {
          CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
          this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar6 * 8);
          if (*(char **)this != local_58) {
            CowData<char32_t>::_ref(this,(CowData *)&local_58);
          }
          goto LAB_00103407;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar5,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_00103407:
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
    lVar5 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
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
LAB_0010345b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Container::is_class_ptr(void*) const */

uint __thiscall Container::is_class_ptr(Container *this,void *param_1)

{
  return (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<Container, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Container,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Container,void> *this)

{
  return;
}



/* MethodBindT<Control*, Rect2 const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Control*,Rect2_const&>::_gen_argument_type
          (MethodBindT<Control*,Rect2_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x11U) + 7;
  }
  return cVar1;
}



/* MethodBindT<Control*, Rect2 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Control*,Rect2_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<Container, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Container,void>::get_argument_count
          (CallableCustomMethodPointer<Container,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Container, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Container,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Container,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Control*, Rect2 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Control*,Rect2_const&>::~MethodBindT(MethodBindT<Control*,Rect2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109438;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Control*, Rect2 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Control*,Rect2_const&>::~MethodBindT(MethodBindT<Control*,Rect2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109438;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Container::~Container() */

void __thiscall Container::~Container(Container *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00108fd0;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103c50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103c50:
  Control::~Control((Control *)this);
  return;
}



/* Container::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Container::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Container::_property_can_revertv(StringName const&) const */

undefined8 Container::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Container, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Container,void>::get_object
          (CallableCustomMethodPointer<Container,void> *this)

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
      goto LAB_00103dad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103dad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103dad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Container::_validate_propertyv(PropertyInfo&) const */

void Container::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010c010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* Container::_setv(StringName const&, Variant const&) */

undefined8 Container::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010c018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103f68) */
/* Container::_getv(StringName const&, Variant&) const */

undefined8 Container::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010c020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* Container::~Container() */

void __thiscall Container::~Container(Container *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00108fd0;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103fd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103fd0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa00);
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



/* Container::_get_class_namev() const */

undefined8 * Container::_get_class_namev(void)

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
LAB_001040a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001040a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Container");
      goto LAB_0010410e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Container");
LAB_0010410e:
  return &_get_class_namev()::_class_name_static;
}



/* Container::get_class() const */

void Container::get_class(void)

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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Container::_bind_methods() [clone .cold] */

void Container::_bind_methods(void)

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



/* CallableCustomMethodPointer<Container, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Container,void>::call
          (CallableCustomMethodPointer<Container,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010445f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010445f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001045c5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010445f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC23,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001045c5:
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



/* GetTypeInfo<Vector<int>, void>::get_class_info() */

GetTypeInfo<Vector<int>,void> * __thiscall
GetTypeInfo<Vector<int>,void>::get_class_info(GetTypeInfo<Vector<int>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1e;
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
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001047fc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001047fc:
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
    return this;
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
  local_78 = &_LC25;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC25;
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
LAB_001049b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001049b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001049d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001049d6:
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



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104cbf;
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
LAB_00104cbf:
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
    if (cVar6 != '\0') goto LAB_00104d73;
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
              if (lVar5 == 0) goto LAB_00104e4b;
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
LAB_00104e4b:
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
      if (cVar6 != '\0') goto LAB_00104d73;
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
                if (lVar5 == 0) goto LAB_00104f2b;
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
LAB_00104f2b:
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
        if (cVar6 != '\0') goto LAB_00104d73;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00104fd4;
    }
  }
LAB_00104d73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104fd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010505f;
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
LAB_0010505f:
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
    if (cVar6 != '\0') goto LAB_00105113;
  }
  cVar6 = String::operator==(param_1,"Container");
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
              if (lVar5 == 0) goto LAB_001051d3;
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
LAB_001051d3:
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
      if (cVar6 != '\0') goto LAB_00105113;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar7;
      }
      goto LAB_0010527c;
    }
  }
LAB_00105113:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010527c:
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
LAB_00105408:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105408;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105425;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105425:
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
  if ((code *)PTR__get_property_list_0010c028 != Object::_get_property_list) {
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
LAB_00105888:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105888;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001058a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001058a5:
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
  if ((code *)PTR__get_property_list_0010c030 != CanvasItem::_get_property_list) {
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
LAB_00105d08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105d08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105d25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105d25:
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
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
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* Callable create_custom_callable_function_pointer<Container>(Container*, char const*, void
   (Container::*)()) */

Container *
create_custom_callable_function_pointer<Container>
          (Container *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00109348;
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



/* Container::_notificationv(int, bool) */

void __thiscall Container::_notificationv(Container *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if (param_1 == 0x1f) {
      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 != '\0') goto LAB_001064c9;
      goto LAB_00106471;
    }
    if (0x1f < param_1) {
      if ((param_1 != 0x28) && (param_1 != 0x2d)) goto LAB_00106471;
LAB_001064c9:
      if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0x9c8] == (Container)0x0)) goto LAB_001064db;
      goto LAB_00106471;
    }
    if (param_1 == 10) goto LAB_001064c9;
    if ((code *)PTR__notification_0010c038 == CanvasItem::_notification) goto LAB_0010648b;
  }
  else {
    Node::_notification(iVar2);
    CanvasItem::_notification(iVar2);
    if ((code *)PTR__notification_0010c038 != CanvasItem::_notification) {
      Control::_notification(iVar2);
    }
    if (param_1 == 0x1f) {
      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 == '\0') {
        return;
      }
    }
    else if (param_1 < 0x20) {
      if (param_1 != 10) {
        return;
      }
    }
    else if ((param_1 != 0x28) && (param_1 != 0x2d)) {
      return;
    }
    if (((byte)this[0x2fa] & 0x40) == 0) {
      return;
    }
    if (this[0x9c8] != (Container)0x0) {
      return;
    }
LAB_001064db:
    queue_sort(this);
    if (!param_2) {
      return;
    }
LAB_00106471:
    if ((code *)PTR__notification_0010c038 == CanvasItem::_notification) goto LAB_0010648b;
  }
  Control::_notification(iVar2);
LAB_0010648b:
  CanvasItem::_notification(iVar2);
  Node::_notification(iVar2);
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



/* MethodBindT<Control*, Rect2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Control*,Rect2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar9 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar9 = 0;
  puVar9[6] = 0;
  *(undefined8 *)(puVar9 + 8) = 0;
  puVar9[10] = 6;
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = "Control";
    local_60._0_8_ = 7;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_60._8_8_;
    local_60 = auVar6 << 0x40;
    StringName::StringName((StringName *)(local_60 + 8),(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    lVar7 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    *puVar9 = local_68._0_4_;
    if (*(long *)(puVar9 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 2));
      uVar8 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar9 + 2) = uVar8;
    }
    if (*(long *)(puVar9 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar8 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar9 + 4) = uVar8;
    }
    lVar7 = local_48;
    puVar9[6] = local_50;
    if (*(long *)(puVar9 + 8) == local_48) {
      puVar9[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 8));
      *(long *)(puVar9 + 8) = local_48;
      puVar9[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_00106656;
    local_78 = 0;
    local_68 = "";
    local_80 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (char *)CONCAT44(local_68._4_4_,7);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_001068e0:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001068e0;
      StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
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
    lVar7 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    *puVar9 = local_68._0_4_;
    if (*(long *)(puVar9 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 2));
      uVar8 = local_60._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      *(undefined8 *)(puVar9 + 2) = uVar8;
    }
    if (*(long *)(puVar9 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar8 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar9 + 4) = uVar8;
    }
    lVar7 = local_48;
    puVar9[6] = local_50;
    if (*(long *)(puVar9 + 8) == local_48) {
      puVar9[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 8));
      *(long *)(puVar9 + 8) = local_48;
      puVar9[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  uVar8 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
LAB_00106656:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}



/* CowData<int>::_ref(CowData<int> const&) */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* MethodBind* create_method_bind<Container>(void (Container::*)()) */

MethodBind * create_method_bind<Container>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001093d8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Container";
  local_30 = 9;
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



/* MethodBind* create_method_bind<Container, Control*, Rect2 const&>(void (Container::*)(Control*,
   Rect2 const&)) */

MethodBind *
create_method_bind<Container,Control*,Rect2_const&>(_func_void_Control_ptr_Rect2_ptr *param_1)

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
  *(_func_void_Control_ptr_Rect2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109438;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Container";
  local_30 = 9;
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



/* Container::_initialize_classv() */

void Container::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0010c050 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0010c040 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_0010c048 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001076e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_001076e0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001075b9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001075b9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00107736;
  }
  if (lVar10 == lVar7) {
LAB_0010765f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00107736:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010764a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010765f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010764a:
  puVar9[-1] = param_1;
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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00107a00:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00107a00;
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
        goto LAB_00107911;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00107911:
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



/* WARNING: Removing unreachable block (ram,0x00107be8) */
/* WARNING: Removing unreachable block (ram,0x00107d31) */
/* WARNING: Removing unreachable block (ram,0x00107e20) */
/* WARNING: Removing unreachable block (ram,0x00107d3d) */
/* WARNING: Removing unreachable block (ram,0x00107d50) */
/* WARNING: Removing unreachable block (ram,0x00107e00) */
/* WARNING: Removing unreachable block (ram,0x00107d5c) */
/* WARNING: Removing unreachable block (ram,0x00107d66) */
/* WARNING: Removing unreachable block (ram,0x00107de0) */
/* WARNING: Removing unreachable block (ram,0x00107d6e) */
/* WARNING: Removing unreachable block (ram,0x00107d84) */
/* WARNING: Removing unreachable block (ram,0x00107d90) */
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC23,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107fb0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_00107fb0:
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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_0010843b;
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
                    /* WARNING: Could not recover jumptable at 0x001082a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010843b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_0010863b;
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
                    /* WARNING: Could not recover jumptable at 0x001084a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010863b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control*, Rect2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Control*,Rect2_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar4) {
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
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108845;
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
                    /* WARNING: Could not recover jumptable at 0x001086aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00108845:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control*, Rect2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Control*,Rect2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00108a75;
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
                    /* WARNING: Load size is inaccurate */
  plVar3 = *param_3;
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001088b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00108a75:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Control*, Rect2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Control*,Rect2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *this;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar9 = (long *)plVar13[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar9 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC23,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_68 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar11 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108bd7;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar7 = 3;
LAB_00108c15:
    *in_R9 = uVar7;
    in_R9[2] = 2;
    goto LAB_00108bd7;
  }
  pVVar16 = param_2[5];
  iVar6 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar6 != 0) goto LAB_00108c28;
    this = *(Variant **)param_4;
LAB_00108c3d:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar11 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar11;
    if (iVar14 < iVar6) {
LAB_00108c28:
      uVar7 = 4;
      goto LAB_00108c15;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar14 + -2);
      if (lVar11 <= lVar12) goto LAB_00108d40;
      this = pVVar16 + lVar12 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_00108c3d;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar6));
    if (lVar11 <= lVar12) {
LAB_00108d40:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar16 = pVVar16 + lVar12 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar16,7);
  uVar3 = _LC69;
  if (cVar5 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  local_58[0] = Variant::operator_cast_to_Rect2(pVVar16);
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,0x18);
  if (cVar5 == '\0') {
LAB_00108b92:
    uVar3 = _LC70;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(this);
    pOVar10 = Variant::operator_cast_to_Object_(this);
    if (((pOVar10 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&Control::typeinfo,0), lVar11 == 0)) &&
       (pOVar8 != (Object *)0x0)) goto LAB_00108b92;
  }
  pOVar8 = Variant::operator_cast_to_Object_(this);
  if (pOVar8 != (Object *)0x0) {
    pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Control::typeinfo,0);
  }
  (*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),pOVar8,local_58);
LAB_00108bd7:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Container::~Container() */

void __thiscall Container::~Container(Container *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Control*, Rect2 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Control*,Rect2_const&>::~MethodBindT(MethodBindT<Control*,Rect2_const&> *this)

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
/* CallableCustomMethodPointer<Container, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Container,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Container,void> *this)

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


