
/* PathFollow2D::set_cubic_interpolation_enabled(bool) */

void __thiscall PathFollow2D::set_cubic_interpolation_enabled(PathFollow2D *this,bool param_1)

{
  this[0x5a0] = (PathFollow2D)param_1;
  return;
}



/* PathFollow2D::is_cubic_interpolation_enabled() const */

PathFollow2D __thiscall PathFollow2D::is_cubic_interpolation_enabled(PathFollow2D *this)

{
  return this[0x5a0];
}



/* PathFollow2D::get_h_offset() const */

undefined4 __thiscall PathFollow2D::get_h_offset(PathFollow2D *this)

{
  return *(undefined4 *)(this + 0x598);
}



/* PathFollow2D::get_v_offset() const */

undefined4 __thiscall PathFollow2D::get_v_offset(PathFollow2D *this)

{
  return *(undefined4 *)(this + 0x59c);
}



/* PathFollow2D::get_progress() const */

undefined4 __thiscall PathFollow2D::get_progress(PathFollow2D *this)

{
  return *(undefined4 *)(this + 0x588);
}



/* PathFollow2D::is_rotation_enabled() const */

PathFollow2D __thiscall PathFollow2D::is_rotation_enabled(PathFollow2D *this)

{
  return this[0x5a2];
}



/* PathFollow2D::set_loop(bool) */

void __thiscall PathFollow2D::set_loop(PathFollow2D *this,bool param_1)

{
  this[0x5a1] = (PathFollow2D)param_1;
  return;
}



/* PathFollow2D::has_loop() const */

PathFollow2D __thiscall PathFollow2D::has_loop(PathFollow2D *this)

{
  return this[0x5a1];
}



/* Path2D::_edit_use_rect() const */

bool __thiscall Path2D::_edit_use_rect(Path2D *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x580) != 0) {
    iVar1 = Curve2D::get_point_count();
    return iVar1 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path2D::_edit_get_rect() const */

void __thiscall Path2D::_edit_get_rect(Path2D *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(long *)(this + 0x580) != 0) && (iVar2 = Curve2D::get_point_count(), iVar2 != 0)) {
    Curve2D::get_point_position((int)*(undefined8 *)(this + 0x580));
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = extraout_XMM0_Da;
    fVar10 = extraout_XMM0_Db;
    for (iVar2 = 0; iVar3 = Curve2D::get_point_count(), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      iVar3 = 0;
      do {
        uVar6 = Curve2D::sample((int)*(undefined8 *)(this + 0x580),(float)((double)iVar3 * __LC1));
        if ((fVar8 < 0.0) || (fVar7 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar8 = fVar8 + fVar9;
        fVar4 = (float)uVar6;
        fVar5 = (float)((ulong)uVar6 >> 0x20);
        iVar3 = iVar3 + 1;
        fVar1 = fVar4;
        if (fVar9 <= fVar4) {
          fVar1 = fVar9;
        }
        fVar9 = fVar1;
        if (fVar4 <= fVar8) {
          fVar4 = fVar8;
        }
        fVar1 = fVar5;
        if (fVar5 <= fVar7 + fVar10) {
          fVar1 = fVar7 + fVar10;
        }
        if (fVar10 <= fVar5) {
          fVar5 = fVar10;
        }
        fVar10 = fVar5;
        fVar8 = fVar4 - fVar9;
        fVar7 = fVar1 - fVar10;
      } while (iVar3 != 9);
    }
  }
  return;
}



/* PathFollow2D::_notification(int) [clone .part.0] */

void PathFollow2D::_notification(int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  Timer *this;
  CallableCustom *this_00;
  undefined4 in_register_0000003c;
  long lVar5;
  long in_FS_OFFSET;
  long local_50;
  Callable local_48 [24];
  long local_30;
  
  lVar5 = CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc0) == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this = (Timer *)operator_new(0x428,"");
    Timer::Timer(this);
    postinitialize_handler((Object *)this);
    *(Timer **)(lVar5 + 0x590) = this;
    Timer::set_wait_time(_LC6);
    Timer::set_one_shot(SUB81(*(undefined8 *)(lVar5 + 0x590),0));
    plVar1 = *(long **)(lVar5 + 0x590);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC5;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0010c600;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar3 = *(undefined8 *)(lVar5 + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(code **)(this_00 + 0x38) = _update_transform;
    *(long *)(this_00 + 0x28) = lVar5;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "PathFollow2D::_update_transform";
    Callable::Callable(local_48,this_00);
    StringName::StringName((StringName *)&local_50,"timeout",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::add_child(lVar5,*(undefined8 *)(lVar5 + 0x590),0,2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path2D::_edit_is_selected_on_click(Vector2 const&, double) const */

undefined8 Path2D::_edit_is_selected_on_click(Vector2 *param_1,double param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x580) != 0) {
    iVar2 = 0;
    iVar1 = Curve2D::get_point_count();
    if (0 < iVar1) {
      do {
        iVar1 = 1;
        uVar5 = Curve2D::get_point_position((int)*(undefined8 *)(param_1 + 0x580));
        do {
          uVar6 = Curve2D::sample((int)*(undefined8 *)(param_1 + 0x580),
                                  (float)((double)iVar1 * __LC1));
          fVar8 = (float)((ulong)uVar5 >> 0x20);
          local_48._0_4_ = (float)uVar6 - (float)uVar5;
          local_48._4_4_ = (float)((ulong)uVar6 >> 0x20) - fVar8;
          fVar3 = (float)Vector2::length_squared();
          uVar7 = uVar5;
          if (_LC10 <= fVar3) {
            fVar4 = (float)Vector2::dot((Vector2 *)&local_48);
            fVar4 = fVar4 / fVar3;
            if ((0.0 < fVar4) && (uVar7 = uVar6, fVar4 < _LC11)) {
              uVar7 = CONCAT44(fVar8 + fVar4 * local_48._4_4_,(float)uVar5 + fVar4 * (float)local_48
                              );
            }
          }
          local_48 = uVar7;
          fVar3 = (float)Vector2::distance_to((Vector2 *)&local_48);
          if ((double)fVar3 <= param_2) {
            uVar5 = 1;
            goto LAB_0010061d;
          }
          iVar1 = iVar1 + 1;
          uVar5 = uVar6;
        } while (iVar1 != 9);
        iVar2 = iVar2 + 1;
        iVar1 = Curve2D::get_point_count();
      } while (iVar2 < iVar1);
    }
  }
  uVar5 = 0;
LAB_0010061d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* Path2D::get_curve() const */

void Path2D::get_curve(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x580) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x580);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* Ref<Curve2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Curve2D> const&) [clone .isra.0] */

void __thiscall Ref<Curve2D>::operator=(Ref<Curve2D> *this,Ref *param_1)

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



/* PathFollow2D::_update_transform() */

void __thiscall PathFollow2D::_update_transform(PathFollow2D *this)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x580) != 0) &&
      (pOVar2 = *(Object **)(*(long *)(this + 0x580) + 0x580), pOVar2 != (Object *)0x0)) &&
     (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    fVar4 = (float)Curve2D::get_baked_length();
    if (fVar4 == 0.0) {
LAB_001007d2:
      cVar3 = RefCounted::unreference();
    }
    else {
      if (this[0x5a2] != (PathFollow2D)0x0) {
        Curve2D::sample_baked_with_rotation(*(float *)(this + 0x588),true);
        Transform2D::translate_local(*(float *)(this + 0x598),*(float *)(this + 0x59c));
        fVar4 = (float)Vector2::angle();
        Node2D::set_rotation(fVar4);
        Node2D::set_position((Vector2 *)this);
        goto LAB_001007d2;
      }
      Curve2D::sample_baked(*(float *)(this + 0x588),SUB81(pOVar2,0));
      Node2D::set_position((Vector2 *)this);
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar2,false);
        return;
      }
      goto LAB_00100876;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100876:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PathFollow2D::set_h_offset(float) */

void __thiscall PathFollow2D::set_h_offset(PathFollow2D *this,float param_1)

{
  *(float *)(this + 0x598) = param_1;
  if (*(long *)(this + 0x580) != 0) {
    _update_transform(this);
    return;
  }
  return;
}



/* PathFollow2D::set_v_offset(float) */

void __thiscall PathFollow2D::set_v_offset(PathFollow2D *this,float param_1)

{
  *(float *)(this + 0x59c) = param_1;
  if (*(long *)(this + 0x580) != 0) {
    _update_transform(this);
    return;
  }
  return;
}



/* PathFollow2D::set_rotation_enabled(bool) */

void __thiscall PathFollow2D::set_rotation_enabled(PathFollow2D *this,bool param_1)

{
  this[0x5a2] = (PathFollow2D)param_1;
  _update_transform(this);
  return;
}



/* Path2D::_curve_changed() [clone .part.0] */

void __thiscall Path2D::_curve_changed(Path2D *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PathFollow2D *this_00;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = Node::get_child_count(SUB81(this,0));
    if (iVar2 <= iVar4) {
      lVar3 = Engine::get_singleton();
      if (*(char *)(lVar3 + 0xc0) == '\0') {
        if (*(long *)(this + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        cVar1 = SceneTree::is_debugging_paths_hint();
        if (cVar1 == '\0') {
          return;
        }
      }
      CanvasItem::queue_redraw();
      return;
    }
    lVar3 = Node::get_child((int)this,SUB41(iVar4,0));
    if (lVar3 != 0) {
      this_00 = (PathFollow2D *)__dynamic_cast(lVar3,&Object::typeinfo,&PathFollow2D::typeinfo,0);
      if (this_00 != (PathFollow2D *)0x0) {
        if (*(long *)(this_00 + 0x590) != 0) {
          cVar1 = Timer::is_stopped();
          if (cVar1 == '\0') {
            Timer::start(_LC17);
            goto LAB_00100959;
          }
        }
        PathFollow2D::_update_transform(this_00);
      }
    }
LAB_00100959:
    iVar4 = iVar4 + 1;
  } while( true );
}



/* Path2D::_curve_changed() */

void __thiscall Path2D::_curve_changed(Path2D *this)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _curve_changed(this);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PathFollow2D::set_progress(float) */

void __thiscall PathFollow2D::set_progress(PathFollow2D *this,float param_1)

{
  float fVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float __y;
  float fVar4;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC22 < (float)((uint)param_1 & __LC21)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_progress","scene/2d/path_2d.cpp",0x14e,
                       "Condition \"!isfinite(p_progress)\" is true.",0,0);
      return;
    }
    goto LAB_00100d03;
  }
  *(float *)(this + 0x588) = param_1;
  if (*(long *)(this + 0x580) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00100d03;
  }
  pOVar2 = *(Object **)(*(long *)(this + 0x580) + 0x580);
  if ((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    local_28 = (Object *)0x0;
    Ref<Curve2D>::operator=((Ref<Curve2D> *)&local_28,*(Ref **)(*(long *)(this + 0x580) + 0x580));
    pOVar2 = local_28;
    __y = (float)Curve2D::get_baked_length();
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    fVar1 = *(float *)(this + 0x588);
    if ((this[0x5a1] == (PathFollow2D)0x0) || (fVar4 = fVar1, __y == 0.0)) {
      if (fVar1 < 0.0) {
        __y = 0.0;
      }
      else if (fVar1 <= __y) {
        __y = fVar1;
      }
      *(float *)(this + 0x588) = __y;
    }
    else {
      do {
        fVar4 = fVar4 - (fVar4 / __y) * __y;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar4)) {
        fmodf(fVar1,__y);
      }
      else if (fVar4 < 0.0) {
        if (0.0 < __y) goto LAB_00100cfb;
      }
      else if ((0.0 < fVar4) && (__y < 0.0)) {
LAB_00100cfb:
        fVar4 = fVar4 + __y;
      }
      fVar1 = _LC26;
      *(float *)(this + 0x588) = fVar4 + 0.0;
      if ((fVar1 <= ABS(param_1)) && (ABS(fVar4 + 0.0) < fVar1)) {
        *(float *)(this + 0x588) = __y;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_transform(this);
    return;
  }
LAB_00100d03:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PathFollow2D::set_progress_ratio(float) */

undefined8 __thiscall PathFollow2D::set_progress_ratio(PathFollow2D *this,float param_1)

{
  char cVar1;
  undefined8 uVar2;
  Object *pOVar3;
  float fVar4;
  
  if (*(long *)(this + 0x580) == 0) {
    uVar2 = _err_print_error("set_progress_ratio","scene/2d/path_2d.cpp",0x17d,
                             "Parameter \"path\" is null.",
                             "Can only set progress ratio on a PathFollow2D that is the child of a Path2D which is itself part of the scene tree."
                             ,0,0);
    return uVar2;
  }
  pOVar3 = *(Object **)(*(long *)(this + 0x580) + 0x580);
  if ((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    uVar2 = _err_print_error("set_progress_ratio","scene/2d/path_2d.cpp",0x17e,
                             "Condition \"path->get_curve().is_null()\" is true.",
                             "Can\'t set progress ratio on a PathFollow2D that does not have a Curve."
                             ,0,0);
  }
  else {
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pOVar3 = *(Object **)(*(long *)(this + 0x580) + 0x580);
    if ((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      pOVar3 = (Object *)0x0;
    }
    fVar4 = (float)Curve2D::get_baked_length();
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (fVar4 == 0.0) {
      uVar2 = 0;
      _err_print_error("set_progress_ratio","scene/2d/path_2d.cpp",0x17f,
                       "Condition \"!path->get_curve()->get_baked_length()\" is true.",
                       "Can\'t set progress ratio on a PathFollow2D that has a 0 length curve.",0);
    }
    else {
      pOVar3 = *(Object **)(*(long *)(this + 0x580) + 0x580);
      if ((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
        pOVar3 = (Object *)0x0;
      }
      fVar4 = (float)Curve2D::get_baked_length();
      set_progress(this,fVar4 * param_1);
      uVar2 = RefCounted::unreference();
      if (((char)uVar2 != '\0') && (uVar2 = predelete_handler(pOVar3), (char)uVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        uVar2 = Memory::free_static(pOVar3,false);
        return uVar2;
      }
    }
  }
  return uVar2;
}



/* PathFollow2D::get_progress_ratio() const */

void __thiscall PathFollow2D::get_progress_ratio(PathFollow2D *this)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  float fVar4;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x580) != 0) &&
      (pOVar3 = *(Object **)(*(long *)(this + 0x580) + 0x580), pOVar3 != (Object *)0x0)) &&
     (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
    local_38 = (Object *)0x0;
    Ref<Curve2D>::operator=((Ref<Curve2D> *)&local_38,*(Ref **)(*(long *)(this + 0x580) + 0x580));
    pOVar1 = local_38;
    fVar4 = (float)Curve2D::get_baked_length();
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (fVar4 != 0.0) {
      pOVar3 = *(Object **)(*(long *)(this + 0x580) + 0x580);
      if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        pOVar3 = (Object *)0x0;
      }
      Curve2D::get_baked_length();
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PathFollow2D::path_changed() */

void __thiscall PathFollow2D::path_changed(PathFollow2D *this)

{
  char cVar1;
  
  if (*(long *)(this + 0x590) != 0) {
    cVar1 = Timer::is_stopped();
    if (cVar1 == '\0') {
      Timer::start(_LC17);
      return;
    }
  }
  _update_transform(this);
  return;
}



/* PathFollow2D::_notification(int) */

void __thiscall PathFollow2D::_notification(PathFollow2D *this,int param_1)

{
  long lVar1;
  
  if (param_1 != 0xb) {
    if (param_1 == 0xd) {
      _notification((int)this);
      return;
    }
    if (param_1 != 10) {
      return;
    }
    lVar1 = Node::get_parent();
    if (lVar1 != 0) {
      lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Path2D::typeinfo,0);
      *(long *)(this + 0x580) = lVar1;
      if (lVar1 == 0) {
        return;
      }
      _update_transform(this);
      return;
    }
  }
  *(undefined8 *)(this + 0x580) = 0;
  return;
}



/* Path2D::set_curve(Ref<Curve2D> const&) */

void __thiscall Path2D::set_curve(Path2D *this,Ref *param_1)

{
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Path2D aPStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x580);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 == (Callable *)0x0) {
    if (*(long *)param_1 == 0) goto LAB_00101300;
    *(long *)(this + 0x580) = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar4 = (Object *)0x0;
LAB_001012a0:
      *(undefined8 *)(this + 0x580) = 0;
      goto LAB_001012ab;
    }
LAB_001012c0:
    pOVar4 = *(Object **)(this + 0x580);
  }
  else {
    create_custom_callable_function_pointer<Path2D>
              (aPStack_48,(char *)this,(_func_void *)"&Path2D::_curve_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aPStack_48);
    pOVar2 = *(Object **)param_1;
    pOVar4 = *(Object **)(this + 0x580);
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x580) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_001012ab:
        if (pOVar4 == (Object *)0x0) goto LAB_00101300;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_001012a0;
        if (pOVar4 == (Object *)0x0) goto LAB_001012c0;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_001012c0;
    }
  }
  if (pOVar4 != (Object *)0x0) {
    create_custom_callable_function_pointer<Path2D>
              (aPStack_48,(char *)this,(_func_void *)"&Path2D::_curve_changed");
    Resource::connect_changed((Callable *)pOVar4,(uint)aPStack_48);
    Callable::~Callable((Callable *)aPStack_48);
  }
LAB_00101300:
  if (((byte)this[0x2fa] & 0x40) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _curve_changed(this);
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



/* PathFollow2D::_validate_property(PropertyInfo&) const */

void __thiscall PathFollow2D::_validate_property(PathFollow2D *this,PropertyInfo *param_1)

{
  Object *pOVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_60;
  undefined8 local_58;
  CowData<char32_t> local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::operator==((String *)(param_1 + 8),"offset");
  if (cVar3 != '\0') {
    fVar4 = _LC46;
    if (((*(long *)(this + 0x580) != 0) &&
        (pOVar1 = *(Object **)(*(long *)(this + 0x580) + 0x580), pOVar1 != (Object *)0x0)) &&
       (cVar3 = RefCounted::reference(), fVar4 = _LC46, cVar3 != '\0')) {
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      local_48 = (char *)0x0;
      Ref<Curve2D>::operator=((Ref<Curve2D> *)&local_48,*(Ref **)(*(long *)(this + 0x580) + 0x580));
      fVar4 = (float)Curve2D::get_baked_length();
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_48);
    }
    local_58 = 0;
    local_48 = ",0.01,or_less,or_greater";
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_58);
    rtos((double)fVar4);
    operator+((char *)local_50,(String *)&_LC49);
    String::operator+((String *)&local_60,(String *)local_50);
    if (*(long *)(param_1 + 0x20) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
      lVar2 = local_60;
      local_60 = 0;
      *(long *)(param_1 + 0x20) = lVar2;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Path2D::_bind_methods() */

void Path2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  CowData<char32_t> local_78 [16];
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = "curve";
  D_METHODP((char *)&local_98,(char ***)"set_curve",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Path2D,Ref<Curve2D>const&>(set_curve);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_curve",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Path2D,Ref<Curve2D>>(get_curve);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Curve2D";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "curve";
  local_d0 = 0;
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,0x18,(StrRange *)&local_d0,0x11,(StrRange *)&local_c8,
             0x4000006,&local_c0);
  local_d8 = 0;
  local_a0 = 6;
  local_a8 = "Path2D";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101afd;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101afd;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00101afd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PathFollow2D::_bind_methods() */

void PathFollow2D::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  MethodDefinition local_98 [48];
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "progress";
  uVar2 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_progress",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(set_progress);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"get_progress",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(get_progress);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_60 = 0;
  local_68 = "h_offset";
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_h_offset",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(set_h_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"get_h_offset",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(get_h_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_60 = 0;
  local_68 = "v_offset";
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_v_offset",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(set_v_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"get_v_offset",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(get_v_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_60 = 0;
  local_68 = "ratio";
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_progress_ratio",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(set_progress_ratio);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"get_progress_ratio",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,float>(get_progress_ratio);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_rotates",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(set_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"is_rotating",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(is_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_cubic_interpolation",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(set_cubic_interpolation_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"get_cubic_interpolation",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(is_cubic_interpolation_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  local_60 = 0;
  local_68 = "loop";
  local_58 = &local_68;
  D_METHODP((char *)local_98,(char ***)"set_loop",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(set_loop);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  D_METHODP((char *)local_98,(char ***)"has_loop",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<PathFollow2D,bool>(has_loop);
  ClassDB::bind_methodfi(1,pMVar1,false,local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_98);
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"0,10000,0.01,or_less,or_greater,suffix:px");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"progress");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,3,(String *)&local_c8,1,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102403;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102403;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_00102403:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"0,1,0.0001,or_less,or_greater");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"progress_ratio");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,3,(String *)&local_c8,1,(String *)&local_c0,4,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010254c;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010254c;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_0010254c:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"h_offset");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,3,(String *)&local_c8,0,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102693;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102693;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_00102693:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"v_offset");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,3,(String *)&local_c8,0,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001027db;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001027db;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_001027db:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"rotates");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,1,(String *)&local_c8,0,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102922;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102922;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_00102922:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"cubic_interp");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,1,(String *)&local_c8,0,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102a68;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102a68;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_00102a68:
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"loop");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_98,1,(String *)&local_c8,0,(String *)&local_c0,6,&local_b8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"PathFollow2D");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102bae;
    }
    if (local_b0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102bae;
    }
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_00102bae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector2> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector2> *pCVar8;
  CowData<Vector2> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector2> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector2> *)(lVar11 * 8);
    if (pCVar3 != (CowData<Vector2> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector2> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector2> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector2> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00107942();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_00102f7c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_00102f0d;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00102f7c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00103022;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset(puVar12 + lVar10,0,(param_1 - lVar10) * 8);
LAB_00102f0d:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00103022:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
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



/* PathFollow2D::get_configuration_warnings() const */

void PathFollow2D::get_configuration_warnings(void)

{
  CowData<char32_t> *this;
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  cVar1 = CanvasItem::is_visible_in_tree();
  if ((cVar1 == '\0') || ((*(byte *)(in_RSI + 0x2fa) & 0x40) == 0)) goto LAB_001031c2;
  lVar3 = Node::get_parent();
  if (lVar3 != 0) {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&Path2D::typeinfo,0);
    if (lVar3 != 0) goto LAB_001031c2;
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"");
  local_58 = 0;
  String::parse_latin1
            ((String *)&local_58,"PathFollow2D only works when set as a child of a Path2D node.");
  RTR((String *)&local_48,(String *)&local_58);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar2 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar4 * 8);
        if (*(long *)this != local_48) {
          CowData<char32_t>::_ref(this,(CowData *)&local_48);
        }
        goto LAB_001032d1;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001032d1:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001031c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Path2D::_notification(int) [clone .part.0] */

void Path2D::_notification(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  uint uVar11;
  undefined4 in_register_0000003c;
  Vector *pVVar12;
  ulong uVar13;
  ulong uVar14;
  size_t __n;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  ulong *local_b0;
  CowData<Vector2> *local_98;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  Color local_68 [8];
  ulong *local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pVVar12 = (Vector *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = Engine::get_singleton();
  if (*(char *)(lVar5 + 0xc0) == '\0') {
    if (*(long *)(pVVar12 + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    cVar3 = SceneTree::is_debugging_paths_hint();
    if (cVar3 != '\0') goto LAB_001033be;
  }
  else {
LAB_001033be:
    iVar4 = Curve2D::get_point_count();
    if (1 < iVar4) {
      if (*(long *)(pVVar12 + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      fVar16 = (float)SceneTree::get_debug_paths_width();
      fVar17 = (float)EditorScale::get_scale();
      fVar18 = (float)Curve2D::get_baked_length();
      if (__LC94 < (double)fVar18) {
        iVar4 = (int)(fVar18 / __LC95) + 2;
        uVar11 = (int)(fVar18 / __LC95) + 1;
        if (iVar4 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
LAB_0010385d:
          local_60 = (ulong *)0x0;
          CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,(long)iVar4);
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
          local_b0 = (ulong *)0x0;
        }
        else {
          if (iVar4 == 0) goto LAB_0010385d;
          uVar13 = (long)iVar4 * 0x18 - 1;
          uVar13 = uVar13 | uVar13 >> 1;
          uVar13 = uVar13 | uVar13 >> 2;
          uVar13 = uVar13 | uVar13 >> 4;
          uVar13 = uVar13 | uVar13 >> 8;
          uVar13 = uVar13 | uVar13 >> 0x10;
          puVar6 = (ulong *)Memory::alloc_static((uVar13 | uVar13 >> 0x20) + 0x11,false);
          if (puVar6 == (ulong *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            local_b0 = (ulong *)0x0;
          }
          else {
            local_b0 = puVar6 + 2;
            *puVar6 = 1;
            uVar2 = _LC11;
            puVar7 = local_b0;
            do {
              *puVar7 = 0;
              puVar10 = puVar7 + 3;
              puVar7[1] = 0;
              puVar7[2] = 0;
              *(undefined4 *)puVar7 = uVar2;
              *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
              puVar7 = puVar10;
            } while (puVar6 + (long)iVar4 * 3 + 2 != puVar10);
            puVar6[1] = (long)iVar4;
            if (1 < *puVar6) {
              uVar13 = puVar6[1];
              uVar14 = 0x10;
              __n = uVar13 * 0x18;
              if (__n != 0) {
                uVar14 = __n - 1 | __n - 1 >> 1;
                uVar14 = uVar14 | uVar14 >> 2;
                uVar14 = uVar14 | uVar14 >> 4;
                uVar14 = uVar14 | uVar14 >> 8;
                uVar14 = uVar14 | uVar14 >> 0x10;
                uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
              }
              puVar9 = (undefined8 *)Memory::alloc_static(uVar14,false);
              if (puVar9 == (undefined8 *)0x0) {
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                puVar7 = puVar9 + 2;
                *puVar9 = 1;
                puVar9[1] = uVar13;
                memcpy(puVar7,local_b0,__n);
                LOCK();
                *puVar6 = *puVar6 - 1;
                UNLOCK();
                local_b0 = puVar7;
                if (*puVar6 == 0) {
                  Memory::free_static(puVar6,false);
                }
              }
            }
          }
          iVar15 = 0;
          puVar6 = local_b0;
          do {
            fVar19 = (float)iVar15;
            iVar15 = iVar15 + 1;
            Curve2D::sample_baked_with_rotation
                      (fVar19 * (fVar18 / (float)(int)uVar11),SUB81(&local_88,0));
            *puVar6 = local_88;
            puVar6[1] = uStack_80;
            puVar6[2] = local_78;
            puVar6 = puVar6 + 3;
          } while (iVar4 != iVar15);
          local_60 = (ulong *)0x0;
          CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_60,(long)iVar4);
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_60);
          puVar6 = local_b0 + 2;
          puVar7 = local_60 + 1;
          puVar10 = local_60;
          while( true ) {
            puVar8 = puVar7;
            uVar13 = *puVar6;
            puVar6 = puVar6 + 3;
            *puVar10 = uVar13;
            if (local_60 + 1 + uVar11 == puVar8) break;
            puVar7 = puVar8 + 1;
            puVar10 = puVar8;
          }
        }
        local_98 = (CowData<Vector2> *)&local_60;
        if (*(long *)(pVVar12 + 0x240) == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        local_58 = SceneTree::get_debug_paths_color();
        CanvasItem::draw_polyline(pVVar12,local_68,fVar16 * fVar17,SUB81(local_58,0));
        CowData<Vector2>::_unref(local_98);
        local_60 = (undefined8 *)0x0;
        CowData<Vector2>::resize<false>(local_98,3);
        CowData<Vector2>::_copy_on_write(local_98);
        puVar6 = local_60;
        if (0 < iVar4) {
          fVar16 = fVar16 * fVar17 * __LC96;
          puVar7 = local_b0;
          do {
            uVar1 = _LC97;
            uVar13 = puVar7[2];
            fVar18 = (float)puVar7[1];
            lVar5 = *(long *)(pVVar12 + 0x240);
            fVar17 = (float)(puVar7[1] >> 0x20);
            uVar24 = (uint)_LC98;
            uVar14 = (ulong)_LC98 >> 0x20;
            fVar20 = (float)*puVar7;
            fVar21 = (float)(*puVar7 >> 0x20);
            puVar6[1] = uVar13;
            fVar22 = (float)uVar1;
            fVar23 = (float)((ulong)uVar1 >> 0x20);
            fVar19 = (float)(uVar13 >> 0x20);
            *puVar6 = CONCAT44((fVar17 - fVar21) * fVar23 + fVar19,
                               (fVar18 - fVar20) * fVar22 + (float)uVar13);
            puVar6[2] = CONCAT44(((float)((uint)fVar17 ^ (uint)uVar14) - fVar21) * fVar23 + fVar19,
                                 ((float)((uint)fVar18 ^ uVar24) - fVar20) * fVar22 + (float)uVar13)
            ;
            if (lVar5 == 0) {
              _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                               "Parameter \"data.tree\" is null.",0,0);
            }
            puVar7 = puVar7 + 0xc;
            auVar25 = SceneTree::get_debug_paths_color();
            local_58 = auVar25;
            CanvasItem::draw_polyline(pVVar12,local_68,fVar16,SUB81(local_58,0));
          } while (local_b0 + (ulong)((uVar11 >> 2) + 1) * 0xc != puVar7);
        }
        CowData<Vector2>::_unref(local_98);
        if (local_b0 != (ulong *)0x0) {
          local_b0 = local_b0 + -2;
          LOCK();
          *local_b0 = *local_b0 - 1;
          UNLOCK();
          if (*local_b0 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(local_b0,false);
              return;
            }
            goto LAB_001039c9;
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001039c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2D::_notification(int) */

void __thiscall Path2D::_notification(Path2D *this,int param_1)

{
  if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
    _notification((int)this);
    return;
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



/* CanvasItem::_edit_get_minimum_size() const */

undefined8 CanvasItem::_edit_get_minimum_size(void)

{
  return 0xbf800000bf800000;
}



/* CanvasItem::_edit_use_pivot() const */

undefined8 CanvasItem::_edit_use_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_set_pivot(Vector2 const&) */

void CanvasItem::_edit_set_pivot(Vector2 *param_1)

{
  return;
}



/* CanvasItem::_edit_get_pivot() const */

undefined8 CanvasItem::_edit_get_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_use_rect() const */

undefined8 CanvasItem::_edit_use_rect(void)

{
  return 0;
}



/* CanvasItem::_edit_get_rect() const */

undefined1  [16] CanvasItem::_edit_get_rect(void)

{
  return ZEXT816(0);
}



/* CanvasItem::get_anchorable_rect() const */

undefined1  [16] CanvasItem::get_anchorable_rect(void)

{
  return ZEXT816(0);
}



/* Path2D::is_class_ptr(void*) const */

uint __thiscall Path2D::is_class_ptr(Path2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c9,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Path2D::_property_can_revertv(StringName const&) const */

undefined8 Path2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Path2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Path2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PathFollow2D::is_class_ptr(void*) const */

uint __thiscall PathFollow2D::is_class_ptr(PathFollow2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c8,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c9,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PathFollow2D::_property_can_revertv(StringName const&) const */

undefined8 PathFollow2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PathFollow2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PathFollow2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<PathFollow2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PathFollow2D,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Path2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2D,void> *this)

{
  return;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<Ref<Curve2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Curve2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Curve2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Curve2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Curve2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Curve2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Curve2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Curve2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Curve2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<PathFollow2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::get_argument_count
          (CallableCustomMethodPointer<PathFollow2D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Path2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2D,void>::get_argument_count
          (CallableCustomMethodPointer<Path2D,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Path2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<PathFollow2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PathFollow2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Ref<Curve2D> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Curve2D>const&>::~MethodBindT(MethodBindT<Ref<Curve2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Curve2D> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Curve2D>const&>::~MethodBindT(MethodBindT<Ref<Curve2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC(MethodBindTRC<Ref<Curve2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c6f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC(MethodBindTRC<Ref<Curve2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c6f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c7b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c7b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PathFollow2D::~PathFollow2D() */

void __thiscall PathFollow2D::~PathFollow2D(PathFollow2D *this)

{
  *(code **)this = CanvasItem::_get;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* PathFollow2D::~PathFollow2D() */

void __thiscall PathFollow2D::~PathFollow2D(PathFollow2D *this)

{
  *(code **)this = CanvasItem::_get;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  operator_delete(this,0x5a8);
  return;
}



/* Path2D::_getv(StringName const&, Variant&) const */

undefined8 Path2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = CanvasItem::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PathFollow2D::_getv(StringName const&, Variant&) const */

undefined8 PathFollow2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = CanvasItem::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Path2D::_setv(StringName const&, Variant const&) */

undefined8 Path2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00110008 != Object::_set) {
    uVar1 = CanvasItem::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PathFollow2D::_setv(StringName const&, Variant const&) */

undefined8 PathFollow2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00110008 != Object::_set) {
    uVar1 = CanvasItem::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Path2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Path2D,void>::get_object(CallableCustomMethodPointer<Path2D,void> *this)

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
      goto LAB_0010479d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010479d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010479d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<PathFollow2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::get_object
          (CallableCustomMethodPointer<PathFollow2D,void> *this)

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
      goto LAB_0010489d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010489d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010489d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Path2D::_validate_propertyv(PropertyInfo&) const */

void Path2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110010 == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
}



/* Path2D::~Path2D() */

void __thiscall Path2D::~Path2D(Path2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010bf90;
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = CanvasItem::_get;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* Path2D::~Path2D() */

void __thiscall Path2D::~Path2D(Path2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010bf90;
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = CanvasItem::_get;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  operator_delete(this,0x588);
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



/* PathFollow2D::_get_class_namev() const */

undefined8 * PathFollow2D::_get_class_namev(void)

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
LAB_00104b23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104b23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PathFollow2D");
      goto LAB_00104b8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PathFollow2D");
LAB_00104b8e:
  return &_get_class_namev()::_class_name_static;
}



/* Path2D::_get_class_namev() const */

undefined8 * Path2D::_get_class_namev(void)

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
LAB_00104c03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Path2D");
      goto LAB_00104c6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Path2D");
LAB_00104c6e:
  return &_get_class_namev()::_class_name_static;
}



/* PathFollow2D::_notificationv(int, bool) */

void __thiscall PathFollow2D::_notificationv(PathFollow2D *this,int param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)this;
  if (param_2) {
    if (param_1 == 0xb) {
LAB_00104d30:
      *(undefined8 *)(this + 0x580) = 0;
      goto LAB_00104d3b;
    }
    if (param_1 != 0xd) {
      if (param_1 != 10) goto LAB_00104d3b;
      lVar1 = Node::get_parent();
      if (lVar1 != 0) goto LAB_00104cef;
      goto LAB_00104d30;
    }
    _notification(iVar2);
    if ((code *)PTR__notification_00110018 == CanvasItem::_notification) goto LAB_00104d55;
  }
  else {
    Node::_notification(iVar2);
    CanvasItem::_notification(iVar2);
    if ((code *)PTR__notification_00110018 != CanvasItem::_notification) {
      Node2D::_notification(iVar2);
    }
    if (param_1 == 0xb) {
LAB_00104e00:
      *(undefined8 *)(this + 0x580) = 0;
      return;
    }
    if (param_1 == 0xd) {
      _notification(iVar2);
      return;
    }
    if (param_1 != 10) {
      return;
    }
    lVar1 = Node::get_parent();
    if (lVar1 == 0) goto LAB_00104e00;
LAB_00104cef:
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Path2D::typeinfo,0);
    *(long *)(this + 0x580) = lVar1;
    if (lVar1 != 0) {
      _update_transform(this);
    }
    if (!param_2) {
      return;
    }
LAB_00104d3b:
    if ((code *)PTR__notification_00110018 == CanvasItem::_notification) goto LAB_00104d55;
  }
  Node2D::_notification(iVar2);
LAB_00104d55:
  CanvasItem::_notification(iVar2);
  Node::_notification(iVar2);
  return;
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<Path2D>(Path2D*, char const*, void
   (Path2D::*)()) */

Path2D * create_custom_callable_function_pointer<Path2D>
                   (Path2D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC5;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010c570;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* PathFollow2D::get_class() const */

void PathFollow2D::get_class(void)

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



/* Path2D::get_class() const */

void Path2D::get_class(void)

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
LAB_00105387:
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
      goto LAB_00105387;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* MethodBindTRC<Ref<Curve2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Curve2D>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Curve2D";
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00105575;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00105575:
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



/* CallableCustomMethodPointer<PathFollow2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::call
          (CallableCustomMethodPointer<PathFollow2D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010580f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010580f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001057e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001058c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010580f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001058c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Path2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Path2D,void>::call
          (CallableCustomMethodPointer<Path2D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00105a1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00105a1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001059f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00105ad0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00105a1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00105ad0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Curve2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Curve2D>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Curve2D";
    local_60 = 7;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 3;
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
      goto LAB_00105d85;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00105d85:
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC5;
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
      goto LAB_00105ee5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00105ee5:
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



/* Node2D::is_class(String const&) const */

undefined8 __thiscall Node2D::is_class(Node2D *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010606b;
  }
  cVar5 = String::operator==(param_1,"Node2D");
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
      if (cVar5 != '\0') goto LAB_0010606b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0010606b;
      }
      cVar5 = String::operator==(param_1,"Node");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Object::is_class((Object *)this,param_1);
          return uVar6;
        }
        goto LAB_0010620e;
      }
    }
  }
LAB_0010606b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010620e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PathFollow2D::is_class(String const&) const */

undefined8 __thiscall PathFollow2D::is_class(PathFollow2D *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010631b;
  }
  cVar4 = String::operator==(param_1,"PathFollow2D");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Node2D::is_class((Node2D *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010631b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2D::is_class(String const&) const */

undefined8 __thiscall Path2D::is_class(Path2D *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010646b;
  }
  cVar4 = String::operator==(param_1,"Path2D");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Node2D::is_class((Node2D *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010646b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC5;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC5;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC45;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC45;
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
      goto LAB_0010697c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010697c:
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
      goto LAB_00106be1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106be1:
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
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110020 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_90 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_80 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               (StrRange *)&local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b0);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
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



/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node2D::_get_property_listv(Node2D *this,List *param_1,bool param_2)

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
  local_78 = "Node2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node2D";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00106fb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106fb1:
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
  StringName::StringName((StringName *)&local_78,"Node2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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



/* PathFollow2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PathFollow2D::_get_property_listv(PathFollow2D *this,List *param_1,bool param_2)

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
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PathFollow2D";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PathFollow2D";
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
      goto LAB_00107261;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107261:
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
  StringName::StringName((StringName *)&local_78,"PathFollow2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Path2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Path2D::_get_property_listv(Path2D *this,List *param_1,bool param_2)

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
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Path2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Path2D";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00107511;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107511:
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
  StringName::StringName((StringName *)&local_78,"Path2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Curve2D>::unref() */

void __thiscall Ref<Curve2D>::unref(Ref<Curve2D> *this)

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



/* PathFollow2D::_validate_propertyv(PropertyInfo&) const */

void __thiscall PathFollow2D::_validate_propertyv(PathFollow2D *this,PropertyInfo *param_1)

{
  Node::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_00110010 != Node::_validate_property) {
    CanvasItem::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
}



/* MethodBind* create_method_bind<Path2D, Ref<Curve2D> const&>(void (Path2D::*)(Ref<Curve2D>
   const&)) */

MethodBind * create_method_bind<Path2D,Ref<Curve2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Path2D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Path2D, Ref<Curve2D>>(Ref<Curve2D> (Path2D::*)() const) */

MethodBind * create_method_bind<Path2D,Ref<Curve2D>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c6f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Path2D";
  local_30 = 6;
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



/* Path2D::_bind_methods() [clone .cold] */

void Path2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107942(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* Path2D::_initialize_classv() */

void Path2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00110038 != Node::_bind_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00110028 != Object::_bind_compatibility_methods)
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
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
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
      if ((code *)PTR__bind_methods_00110030 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Path2D";
    local_70 = 0;
    local_50 = 6;
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



/* MethodBind* create_method_bind<PathFollow2D, float>(void (PathFollow2D::*)(float)) */

MethodBind * create_method_bind<PathFollow2D,float>(_func_void_float *param_1)

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
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c750;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PathFollow2D";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<PathFollow2D, float>(float (PathFollow2D::*)() const) */

MethodBind * create_method_bind<PathFollow2D,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c7b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PathFollow2D";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<PathFollow2D, bool>(void (PathFollow2D::*)(bool)) */

MethodBind * create_method_bind<PathFollow2D,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PathFollow2D";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<PathFollow2D, bool>(bool (PathFollow2D::*)() const) */

MethodBind * create_method_bind<PathFollow2D,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PathFollow2D";
  local_30 = 0xc;
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



/* PathFollow2D::_initialize_classv() */

void PathFollow2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00110038 != Node::_bind_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00110028 != Object::_bind_compatibility_methods)
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
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
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
      if ((code *)PTR__bind_methods_00110030 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PathFollow2D";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
LAB_00108a30:
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
  if (lVar9 == 0) goto LAB_00108a30;
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
    goto LAB_00108a86;
  }
  if (lVar9 == lVar5) {
LAB_001089ab:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00108a86:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010891f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_001089ab;
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
LAB_0010891f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Transform2D>::_realloc(long) */

undefined8 __thiscall CowData<Transform2D>::_realloc(CowData<Transform2D> *this,long param_1)

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



/* Path2D::_notificationv(int, bool) */

void __thiscall Path2D::_notificationv(Path2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    if ((code *)PTR__notification_00110018 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
      _notification(iVar1);
      return;
    }
    return;
  }
  if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
    _notification(iVar1);
    if ((code *)PTR__notification_00110018 == CanvasItem::_notification) goto LAB_00108b3a;
  }
  else if ((code *)PTR__notification_00110018 == CanvasItem::_notification) goto LAB_00108b3a;
  Node2D::_notification(iVar1);
LAB_00108b3a:
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108db8) */
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



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001090e0;
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
LAB_001090e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109382;
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
LAB_00109382:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109541;
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
LAB_00109541:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00109881;
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
                    /* WARNING: Could not recover jumptable at 0x0010970d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00109881:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00109a69;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001098f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00109a69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
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
  float fVar5;
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
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109b30;
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
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
LAB_00109b30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109d48;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00109d48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109f07;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_00109f07:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010a259;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010a0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010a259:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010a439;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010a439:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Curve2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Curve2D>>::call
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
  Object *local_58;
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
    if (local_58 == (Object *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x108f38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a510;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar2)((Ref<Curve2D> *)&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Ref<Curve2D>::unref((Ref<Curve2D> *)&local_58);
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
LAB_0010a510:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Curve2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Curve2D>>::ptrcall
          (MethodBindTRC<Ref<Curve2D>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108f38;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a796;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010a796;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010a7d9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010a7d9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010a7d9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010a796;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010a796:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Curve2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Curve2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x108f38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010aa98;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0010aa56:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Curve2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010aa56;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010aa98:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Curve2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Curve2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108f38;
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
      goto LAB_0010ad5c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0010ad38:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010ad38;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010ad5c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Curve2D> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Ref<Curve2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b118;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010b10d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010b118;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010b170;
LAB_0010b160:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010b170:
      uVar7 = 4;
      goto LAB_0010b10d;
    }
    if (in_R8D == 1) goto LAB_0010b160;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC113;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_0010b0df;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&Curve2D::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_0010b0df:
        Ref<Curve2D>::unref((Ref<Curve2D> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<Curve2D> *)&local_50);
  Ref<Curve2D>::unref((Ref<Curve2D> *)&local_50);
LAB_0010b118:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Curve2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Curve2D>>::validated_call
          (MethodBindTRC<Ref<Curve2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x108f38;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b406;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0010b406:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0010b6ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010b710;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010b710:
      uVar6 = 4;
LAB_0010b6ad:
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
      goto LAB_0010b62b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010b62b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC115;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010b687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010b776;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010b776:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010ba3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010baa0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010baa0:
      uVar6 = 4;
LAB_0010ba3d:
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
      goto LAB_0010b9bb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010b9bb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC116;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0010ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010bb06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010bb06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Path2D::~Path2D() */

void __thiscall Path2D::~Path2D(Path2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PathFollow2D::~PathFollow2D() */

void __thiscall PathFollow2D::~PathFollow2D(PathFollow2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Curve2D>>::~MethodBindTRC(MethodBindTRC<Ref<Curve2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Curve2D> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Curve2D>const&>::~MethodBindT(MethodBindT<Ref<Curve2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Path2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Path2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Path2D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<PathFollow2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PathFollow2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PathFollow2D,void> *this)

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


