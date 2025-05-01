
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



/* ViewPanner::release_pan_key() */

void __thiscall ViewPanner::release_pan_key(ViewPanner *this)

{
  *(undefined2 *)(this + 0x188) = 0;
  return;
}



/* ViewPanner::set_callbacks(Callable, Callable) */

void __thiscall ViewPanner::set_callbacks(ViewPanner *this,Callable *param_2,Callable *param_3)

{
  Callable::operator=((Callable *)(this + 0x198),param_2);
  Callable::operator=((Callable *)(this + 0x1a8),param_3);
  return;
}



/* ViewPanner::set_control_scheme(ViewPanner::ControlScheme) */

void __thiscall ViewPanner::set_control_scheme(ViewPanner *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1b8) = param_2;
  return;
}



/* ViewPanner::set_enable_rmb(bool) */

void __thiscall ViewPanner::set_enable_rmb(ViewPanner *this,bool param_1)

{
  this[0x18b] = (ViewPanner)param_1;
  return;
}



/* ViewPanner::set_pan_shortcut(Ref<Shortcut>) */

void __thiscall ViewPanner::set_pan_shortcut(ViewPanner *this,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(this + 400);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 400) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 400) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
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
  this[0x189] = (ViewPanner)0x0;
  return;
}



/* ViewPanner::set_simple_panning_enabled(bool) */

void __thiscall ViewPanner::set_simple_panning_enabled(ViewPanner *this,bool param_1)

{
  this[0x18c] = (ViewPanner)param_1;
  return;
}



/* ViewPanner::set_scroll_speed(int) */

void __thiscall ViewPanner::set_scroll_speed(ViewPanner *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x17c) = param_1;
    return;
  }
  _err_print_error("set_scroll_speed","scene/gui/view_panner.cpp",0xc5,
                   "Condition \"p_scroll_speed <= 0\" is true.",0,0);
  return;
}



/* ViewPanner::set_scroll_zoom_factor(float) */

void __thiscall ViewPanner::set_scroll_zoom_factor(ViewPanner *this,float param_1)

{
  if (_LC9 < param_1) {
    *(float *)(this + 0x180) = param_1;
    return;
  }
  _err_print_error("set_scroll_zoom_factor","scene/gui/view_panner.cpp",0xca,
                   "Condition \"p_scroll_zoom_factor <= 1.0\" is true.",0,0);
  return;
}



/* ViewPanner::set_pan_axis(ViewPanner::PanAxis) */

void __thiscall ViewPanner::set_pan_axis(ViewPanner *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x184) = param_2;
  return;
}



/* ViewPanner::setup(ViewPanner::ControlScheme, Ref<Shortcut>, bool) */

void __thiscall
ViewPanner::setup(ViewPanner *this,undefined4 param_2,long *param_3,ViewPanner param_4)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)*param_3;
  *(undefined4 *)(this + 0x1b8) = param_2;
  if ((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    pOVar2 = *(Object **)(this + 400);
    if (pOVar2 != (Object *)0x0) {
      *(undefined8 *)(this + 400) = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        pOVar3 = (Object *)0x0;
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
LAB_00100345:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          this[0x189] = (ViewPanner)0x0;
          if (pOVar3 == (Object *)0x0) goto LAB_0010030a;
          goto LAB_001002af;
        }
      }
    }
    this[0x189] = (ViewPanner)0x0;
  }
  else {
    pOVar2 = *(Object **)(this + 400);
    if (pOVar3 != pOVar2) {
      *(Object **)(this + 400) = pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 400) = 0;
        if (pOVar2 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x0010032f:
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0'))
          goto LAB_00100345;
        }
      }
      else if (pOVar2 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x0010032f;
      }
    }
    this[0x189] = (ViewPanner)0x0;
LAB_001002af:
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
LAB_0010030a:
  this[0x18c] = param_4;
  return;
}



/* ViewPanner::setup_warped_panning(Viewport*, bool) */

void __thiscall ViewPanner::setup_warped_panning(ViewPanner *this,Viewport *param_1,bool param_2)

{
  if (!param_2) {
    param_1 = (Viewport *)0x0;
  }
  *(Viewport **)(this + 0x1c0) = param_1;
  return;
}



/* ViewPanner::is_panning() const */

ViewPanner __thiscall ViewPanner::is_panning(ViewPanner *this)

{
  ViewPanner VVar1;
  
  VVar1 = this[0x188];
  if (VVar1 == (ViewPanner)0x0) {
    VVar1 = this[0x189];
  }
  return VVar1;
}



/* ViewPanner::set_force_drag(bool) */

void __thiscall ViewPanner::set_force_drag(ViewPanner *this,bool param_1)

{
  this[0x18a] = (ViewPanner)param_1;
  return;
}



/* ViewPanner::ViewPanner() */

void __thiscall ViewPanner::ViewPanner(ViewPanner *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  byte bVar6;
  Array aAStack_58 [8];
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_001046d8;
  *(undefined8 *)(this + 0x17c) = 0x3f8ccccd00000020;
  *(undefined8 *)(this + 0x184) = 0;
  this[0x18c] = (ViewPanner)0x0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  Array::Array(aAStack_58);
  InputEventKey::create_reference(&local_50,0x20,0);
  Variant::Variant((Variant *)local_48,local_50);
  Array::push_back((Variant *)aAStack_58);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((local_50 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  this_00 = (Resource *)operator_new(0x248,"");
  pRVar3 = this_00;
  for (lVar2 = 0x49; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00104838;
  Array::Array((Array *)(this_00 + 0x240));
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar4 = *(Object **)(this + 400);
    if (pOVar4 == (Object *)0x0) goto LAB_0010055e;
    *(undefined8 *)(this + 400) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      this_00 = (Resource *)0x0;
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
LAB_0010068b:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pOVar5 = (Object *)this_00;
        if (this_00 != (Resource *)0x0) goto LAB_001005da;
      }
    }
  }
  else {
    pOVar4 = *(Object **)(this + 400);
    pOVar5 = pOVar4;
    if (this_00 != (Resource *)pOVar4) {
      *(Resource **)(this + 400) = this_00;
      cVar1 = RefCounted::reference();
      pOVar5 = (Object *)this_00;
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 400) = 0;
        if (pOVar4 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x0010062f:
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0'))
          goto LAB_0010068b;
        }
      }
      else if (pOVar4 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x0010062f;
      }
    }
LAB_001005da:
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      pOVar4 = *(Object **)(this + 400);
      goto LAB_0010055e;
    }
  }
  pOVar4 = *(Object **)(this + 400);
LAB_0010055e:
  Shortcut::set_events((Array *)pOVar4);
  Array::~Array(aAStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViewPanner::gui_input(Ref<InputEvent> const&, Rect2) */

uint ViewPanner::gui_input(undefined8 param_1_00,undefined8 param_2,long param_1,long *param_4)

{
  Ref *pRVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  ulong uVar10;
  uint uVar11;
  Vector2 *pVVar12;
  long in_FS_OFFSET;
  float fVar13;
  float extraout_XMM0_Db;
  undefined8 uVar14;
  undefined8 uVar15;
  Object *local_98;
  Object *local_90;
  Object *local_88;
  float local_70;
  float fStack_6c;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pOVar8 = (Object *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar8 == (Object *)0x0) {
    pOVar7 = (Object *)0x0;
LAB_00100ec3:
    local_98 = (Object *)0x0;
LAB_00100ecb:
    uVar4 = 0;
LAB_00100aed:
    if (local_98 != (Object *)0x0) {
LAB_00100e48:
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_98), cVar2 != '\0')) {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
    if (pOVar7 == (Object *)0x0) goto LAB_001009ce;
  }
  else {
    pOVar7 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar7 == (Object *)0x0) {
LAB_00100764:
      local_98 = (Object *)
                 __dynamic_cast(pOVar8,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if (local_98 == (Object *)0x0) {
LAB_001007b0:
        local_90 = (Object *)
                   __dynamic_cast(pOVar8,&Object::typeinfo,&InputEventMagnifyGesture::typeinfo,0);
        if (local_90 != (Object *)0x0) {
          uVar4 = RefCounted::reference();
          if ((char)uVar4 == '\0') {
            pOVar8 = (Object *)*param_4;
            if (pOVar8 == (Object *)0x0) goto LAB_00100ecb;
            goto LAB_001007ed;
          }
          pOVar8 = (Object *)*param_4;
          if ((pOVar8 != (Object *)0x0) &&
             (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 != '\0')) {
            uVar14 = InputEventGesture::get_position();
            uVar15 = InputEventMagnifyGesture::get_factor();
            Callable::call<float,Vector2,Ref<InputEvent>>
                      (uVar15,uVar14,local_58,param_1 + 0x1a8,&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
            goto LAB_00100adb;
          }
          local_68 = (Object *)0x0;
          uVar14 = InputEventGesture::get_position();
          uVar10 = InputEventMagnifyGesture::get_factor();
LAB_00100aba:
          Callable::call<float,Vector2,Ref<InputEvent>>
                    (uVar10,uVar14,local_58,param_1 + 0x1a8,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_00100adb;
        }
LAB_001007ed:
        local_90 = (Object *)
                   __dynamic_cast(pOVar8,&Object::typeinfo,&InputEventPanGesture::typeinfo,0);
        if (local_90 == (Object *)0x0) {
LAB_0010081f:
          if (pOVar8 == (Object *)0x0) goto LAB_00100ecb;
          local_90 = (Object *)0x0;
LAB_00100831:
          local_88 = (Object *)
                     __dynamic_cast(pOVar8,&Object::typeinfo,&InputEventScreenDrag::typeinfo,0);
          if (local_88 == (Object *)0x0) {
LAB_00100879:
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEventKey::typeinfo,0);
            if ((pOVar8 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
              uVar4 = 0;
            }
            else {
              pRVar1 = *(Ref **)(param_1 + 400);
              if (pRVar1 == (Ref *)0x0) {
LAB_00101300:
                uVar4 = 0;
              }
              else {
                local_68 = (Object *)0x0;
                pOVar9 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
                if ((pOVar9 != (Object *)0x0) &&
                   (local_68 = pOVar9, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
                  local_68 = (Object *)0x0;
                }
                uVar4 = Shortcut::matches_event(pRVar1);
                if (((local_68 != (Object *)0x0) &&
                    (cVar2 = RefCounted::unreference(), pOVar9 = local_68, cVar2 != '\0')) &&
                   (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                }
                if ((char)uVar4 == '\0') goto LAB_00101300;
                uVar3 = InputEvent::is_pressed();
                *(undefined1 *)(param_1 + 0x189) = uVar3;
                if (*(char *)(param_1 + 0x18c) == '\0') {
                  Input::get_singleton();
                  uVar10 = Input::get_mouse_button_mask();
                  if ((uVar10 & 1) != 0) {
                    uVar3 = *(undefined1 *)(param_1 + 0x189);
                    goto LAB_00100d43;
                  }
                }
                else {
LAB_00100d43:
                  *(undefined1 *)(param_1 + 0x188) = uVar3;
                }
              }
              cVar2 = RefCounted::unreference();
              if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
            }
            if (local_88 != (Object *)0x0) {
LAB_001008ac:
              cVar2 = RefCounted::unreference();
              if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_88), cVar2 != '\0')) {
                (**(code **)(*(long *)local_88 + 0x140))(local_88);
                Memory::free_static(local_88,false);
              }
            }
          }
          else {
            uVar4 = RefCounted::reference();
            if ((char)uVar4 != '\0') {
              Input::get_singleton();
              cVar2 = Input::is_emulating_mouse_from_touch();
              if (cVar2 == '\0') {
                Input::get_singleton();
                cVar2 = Input::is_emulating_touch_from_mouse();
                if (cVar2 == '\0') {
                  pOVar8 = (Object *)*param_4;
                  if ((pOVar8 == (Object *)0x0) ||
                     (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
                    local_68 = (Object *)0x0;
                    InputEventScreenDrag::get_relative();
                    Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  else {
                    InputEventScreenDrag::get_relative();
                    Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    cVar2 = RefCounted::unreference();
                    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
                      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                      Memory::free_static(pOVar8,false);
                    }
                  }
                }
              }
              pOVar8 = (Object *)*param_4;
              if (pOVar8 != (Object *)0x0) goto LAB_00100879;
              uVar4 = 0;
              goto LAB_001008ac;
            }
            pOVar8 = (Object *)*param_4;
            if (pOVar8 != (Object *)0x0) {
              local_88 = (Object *)0x0;
              goto LAB_00100879;
            }
          }
          if (local_90 == (Object *)0x0) goto LAB_00100aed;
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            pOVar8 = (Object *)*param_4;
            goto LAB_0010081f;
          }
          uVar4 = InputEventWithModifiers::is_ctrl_pressed();
          if ((char)uVar4 == '\0') {
            pOVar8 = (Object *)*param_4;
            if ((pOVar8 == (Object *)0x0) ||
               (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
              local_68 = (Object *)0x0;
              pOVar8 = (Object *)0x0;
            }
            InputEventPanGesture::get_delta();
            Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (((pOVar8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
               (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
            pOVar8 = (Object *)*param_4;
            if (pOVar8 == (Object *)0x0) goto LAB_00100adb;
            goto LAB_00100831;
          }
          fVar13 = (float)InputEventPanGesture::get_delta();
          InputEventPanGesture::get_delta();
          fVar13 = fVar13 - extraout_XMM0_Db;
          if (NAN(fVar13)) {
LAB_00100f2d:
            uVar11 = _LC15;
          }
          else {
            if (fVar13 == 0.0) goto LAB_00100adb;
            uVar11 = _LC14;
            if (0.0 < fVar13) goto LAB_00100f2d;
          }
          pOVar8 = (Object *)*param_4;
          if ((pOVar8 == (Object *)0x0) ||
             (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
            local_68 = (Object *)0x0;
            uVar14 = InputEventGesture::get_position();
            uVar10 = (ulong)uVar11;
            goto LAB_00100aba;
          }
          uVar14 = InputEventGesture::get_position();
          Callable::call<float,Vector2,Ref<InputEvent>>
                    (uVar11,uVar14,local_58,param_1 + 0x1a8,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
LAB_00100adb:
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_90), cVar2 != '\0')) {
          (**(code **)(*(long *)local_90 + 0x140))(local_90);
          Memory::free_static(local_90,false);
        }
        goto LAB_00100aed;
      }
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_98 = (Object *)0x0;
        pOVar8 = (Object *)*param_4;
LAB_001007a7:
        if (pOVar8 == (Object *)0x0) goto LAB_00100ecb;
        goto LAB_001007b0;
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x188);
      pOVar8 = (Object *)*param_4;
      if (*(byte *)(param_1 + 0x188) == 0) goto LAB_001007a7;
      pVVar12 = *(Vector2 **)(param_1 + 0x1c0);
      local_68 = pOVar8;
      if (((pVVar12 == (Vector2 *)0x0) || (local_70 = (float)param_2, local_70 <= 0.0)) ||
         (fStack_6c = (float)((ulong)param_2 >> 0x20), fStack_6c <= 0.0)) {
        if ((pOVar8 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          local_68 = (Object *)0x0;
          InputEventMouseMotion::get_relative();
          Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          InputEventMouseMotion::get_relative();
          Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
LAB_00100e14:
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
      }
      else {
        if (pOVar8 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 != '\0') {
            pVVar12 = *(Vector2 **)(param_1 + 0x1c0);
            local_60 = InputEventMouseMotion::get_relative();
            Viewport::wrap_mouse_in_rect(pVVar12,(Rect2 *)&local_60);
            Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            goto LAB_00100e14;
          }
          pVVar12 = *(Vector2 **)(param_1 + 0x1c0);
        }
        local_68 = (Object *)0x0;
        local_60 = InputEventMouseMotion::get_relative();
        Viewport::wrap_mouse_in_rect(pVVar12,(Rect2 *)&local_60);
        Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      goto LAB_00100e48;
    }
    uVar4 = RefCounted::reference();
    if ((char)uVar4 == '\0') {
      pOVar8 = (Object *)*param_4;
      pOVar7 = (Object *)0x0;
LAB_0010075b:
      if (pOVar8 == (Object *)0x0) goto LAB_00100ec3;
      goto LAB_00100764;
    }
    iVar5 = InputEventMouseButton::get_button_index();
    iVar6 = InputEventMouseButton::get_button_index();
    fVar13 = (float)(int)((uint)(iVar5 == 5) - (uint)(iVar6 == 4));
    iVar5 = InputEventMouseButton::get_button_index();
    iVar6 = InputEventMouseButton::get_button_index();
    if ((((float)(int)((uint)(iVar5 == 7) - (uint)(iVar6 == 6)) == 0.0) && (fVar13 == 0.0)) ||
       (cVar2 = InputEvent::is_pressed(), cVar2 == '\0')) {
LAB_001009b0:
      cVar2 = InputEventWithModifiers::is_alt_pressed();
      if (cVar2 == '\0') {
        iVar5 = InputEventMouseButton::get_button_index();
        if ((((iVar5 != 3) &&
             ((*(char *)(param_1 + 0x18b) == '\0' ||
              (iVar5 = InputEventMouseButton::get_button_index(), iVar5 != 2)))) &&
            ((*(char *)(param_1 + 0x18c) != '\0' ||
             ((iVar5 = InputEventMouseButton::get_button_index(), iVar5 != 1 ||
              ((*(char *)(param_1 + 0x188) == '\0' && (*(char *)(param_1 + 0x189) == '\0')))))))) &&
           ((*(char *)(param_1 + 0x18a) == '\0' ||
            (iVar5 = InputEventMouseButton::get_button_index(), iVar5 != 1)))) {
          pOVar8 = (Object *)*param_4;
          goto LAB_0010075b;
        }
        uVar3 = InputEvent::is_pressed();
        *(undefined1 *)(param_1 + 0x188) = uVar3;
        iVar5 = InputEventMouseButton::get_button_index();
        if (iVar5 == 1) {
          uVar4 = InputEvent::is_pressed();
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x1b8) == 1) {
        cVar2 = InputEventWithModifiers::is_ctrl_pressed();
        if (cVar2 == '\0') goto LAB_00100fc3;
        if (fVar13 != 0.0) {
          fVar13 = (float)InputEventMouseButton::get_factor();
          if (0.0 < fVar13) {
            InputEventMouseButton::get_factor();
          }
          goto LAB_00100b7a;
        }
        goto LAB_001009b0;
      }
      cVar2 = InputEventWithModifiers::is_ctrl_pressed();
      if (cVar2 == '\0') {
        cVar2 = InputEventWithModifiers::is_shift_pressed();
        if ((cVar2 == '\x01') || (fVar13 == 0.0)) goto LAB_001009b0;
        fVar13 = (float)InputEventMouseButton::get_factor();
        if (0.0 < fVar13) {
          InputEventMouseButton::get_factor();
        }
LAB_00100b7a:
        pOVar8 = (Object *)*param_4;
        if ((pOVar8 != (Object *)0x0) &&
           (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 != '\0')) {
          InputEventMouse::get_position();
          Callable::call<float,Vector2,Ref<InputEvent>>(local_58,param_1 + 0x1a8,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_00101488;
        }
        local_68 = (Object *)0x0;
        InputEventMouse::get_position();
        Callable::call<float,Vector2,Ref<InputEvent>>(local_58,param_1 + 0x1a8,&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
LAB_00100fc3:
        InputEventMouseButton::get_factor();
        if ((*(int *)(param_1 + 0x184) != 1) && (*(int *)(param_1 + 0x184) != 2)) {
          InputEventWithModifiers::is_shift_pressed();
        }
        pOVar8 = (Object *)*param_4;
        if ((pOVar8 == (Object *)0x0) ||
           (local_68 = pOVar8, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          local_68 = (Object *)0x0;
          Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Callable::call<Vector2,Ref<InputEvent>>(local_58,param_1 + 0x198,&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
LAB_00101488:
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
      }
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar7), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_001009ce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ViewPanner::is_class_ptr(void*) const */

uint __thiscall ViewPanner::is_class_ptr(ViewPanner *this,void *param_1)

{
  return (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ViewPanner::_getv(StringName const&, Variant&) const */

undefined8 ViewPanner::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ViewPanner::_setv(StringName const&, Variant const&) */

undefined8 ViewPanner::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ViewPanner::_validate_propertyv(PropertyInfo&) const */

void ViewPanner::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ViewPanner::_property_can_revertv(StringName const&) const */

undefined8 ViewPanner::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ViewPanner::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ViewPanner::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ViewPanner::_notificationv(int, bool) */

void ViewPanner::_notificationv(int param_1,bool param_2)

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



/* Shortcut::is_class_ptr(void*) const */

uint __thiscall Shortcut::is_class_ptr(Shortcut *this,void *param_1)

{
  return (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Shortcut::_getv(StringName const&, Variant&) const */

undefined8 Shortcut::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Shortcut::_setv(StringName const&, Variant const&) */

undefined8 Shortcut::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Shortcut::_validate_propertyv(PropertyInfo&) const */

void Shortcut::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Shortcut::_property_can_revertv(StringName const&) const */

undefined8 Shortcut::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Shortcut::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Shortcut::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Shortcut::_notificationv(int, bool) */

void Shortcut::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Shortcut::~Shortcut() */

void __thiscall Shortcut::~Shortcut(Shortcut *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104838;
  Array::~Array((Array *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104578;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104578;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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
LAB_00101ac3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101ac3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00101b2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00101b2e:
  return &_get_class_namev()::_class_name_static;
}



/* Shortcut::~Shortcut() */

void __thiscall Shortcut::~Shortcut(Shortcut *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104838;
  Array::~Array((Array *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x248);
  return;
}



/* Shortcut::_get_class_namev() const */

undefined8 * Shortcut::_get_class_namev(void)

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
LAB_00101bf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101bf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Shortcut");
      goto LAB_00101c5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Shortcut");
LAB_00101c5e:
  return &_get_class_namev()::_class_name_static;
}



/* ViewPanner::_get_class_namev() const */

undefined8 * ViewPanner::_get_class_namev(void)

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
LAB_00101cd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101cd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ViewPanner");
      goto LAB_00101d3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ViewPanner");
LAB_00101d3e:
  return &_get_class_namev()::_class_name_static;
}



/* ViewPanner::~ViewPanner() */

void __thiscall ViewPanner::~ViewPanner(ViewPanner *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001046d8;
  Callable::~Callable((Callable *)(this + 0x1a8));
  Callable::~Callable((Callable *)(this + 0x198));
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104578;
  Object::~Object((Object *)this);
  return;
}



/* ViewPanner::~ViewPanner() */

void __thiscall ViewPanner::~ViewPanner(ViewPanner *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001046d8;
  Callable::~Callable((Callable *)(this + 0x1a8));
  Callable::~Callable((Callable *)(this + 0x198));
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104578;
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



/* Shortcut::get_class() const */

void Shortcut::get_class(void)

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



/* ViewPanner::get_class() const */

void ViewPanner::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001021ff;
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
LAB_001021ff:
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
    if (cVar6 != '\0') goto LAB_001022b3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00102363;
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
LAB_00102363:
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
      if (cVar6 != '\0') goto LAB_001022b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001022b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ViewPanner::is_class(String const&) const */

undefined8 __thiscall ViewPanner::is_class(ViewPanner *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010248f;
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
LAB_0010248f:
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
    if (cVar5 != '\0') goto LAB_00102543;
  }
  cVar5 = String::operator==(param_1,"ViewPanner");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00102543:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shortcut::is_class(String const&) const */

undefined8 __thiscall Shortcut::is_class(Shortcut *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010261f;
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
LAB_0010261f:
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
    if (cVar6 != '\0') goto LAB_001026d3;
  }
  cVar6 = String::operator==(param_1,"Shortcut");
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
              if (lVar5 == 0) goto LAB_00102793;
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
LAB_00102793:
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
      if (cVar6 != '\0') goto LAB_001026d3;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010283c;
    }
  }
LAB_001026d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010283c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  char *local_78;
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
  local_78 = "RefCounted";
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
LAB_00102b58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102b58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102b76;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102b76:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ViewPanner::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ViewPanner::_get_property_listv(ViewPanner *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ViewPanner";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ViewPanner";
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
LAB_00102f58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102f58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102f75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102f75:
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
  StringName::StringName((StringName *)&local_78,"ViewPanner",false);
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



/* ViewPanner::_initialize_classv() */

void ViewPanner::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00103384;
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010348e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010349e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010348e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010349e;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "ViewPanner";
  local_60 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
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
  initialize_class()::initialized = '\x01';
LAB_00103384:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Shortcut::_initialize_classv() */

void Shortcut::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Shortcut";
    local_70 = 0;
    local_50 = 8;
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
    if ((code *)PTR__bind_methods_00107008 != Resource::_bind_methods) {
      Shortcut::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_00103ad8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ad8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103af5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103af5:
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



/* Shortcut::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Shortcut::_get_property_listv(Shortcut *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Shortcut";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Shortcut";
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
  if (local_90 == 0) {
LAB_00103f28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103f28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103f45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103f45:
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
  StringName::StringName((StringName *)&local_78,"Shortcut",false);
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



/* Variant Callable::call<float, Vector2, Ref<InputEvent> >(float, Vector2, Ref<InputEvent>) const
    */

CallError *
Callable::call<float,Vector2,Ref<InputEvent>>
          (float param_1,undefined8 param_2,CallError *param_3,Variant **param_4,undefined8 *param_5
          )

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  Variant *local_b8;
  Variant *pVStack_b0;
  Variant *local_a8;
  Variant local_98 [24];
  Variant local_80 [24];
  Variant local_68 [24];
  Variant local_50 [24];
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = param_2;
  Variant::Variant(local_98,param_1);
  Variant::Variant(local_80,(Vector2 *)&local_d0);
  Variant::Variant(local_68,(Object *)*param_5);
  Variant::Variant(local_50,0);
  *(undefined4 *)param_3 = 0;
  *(undefined1 (*) [16])(param_3 + 8) = (undefined1  [16])0x0;
  pVVar2 = local_38;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = local_98;
  pVStack_b0 = local_80;
  local_a8 = local_68;
  Callable::callp(param_4,(int)&local_b8,(Variant *)0x3,param_3);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_98);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant Callable::call<Vector2, Ref<InputEvent> >(Vector2, Ref<InputEvent>) const */

CallError *
Callable::call<Vector2,Ref<InputEvent>>
          (undefined8 param_1,CallError *param_2,Variant **param_3,undefined8 *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_1;
  Variant::Variant(local_78,(Vector2 *)&local_b0);
  Variant::Variant(local_60,(Object *)*param_4);
  Variant::Variant(local_48,0);
  *(undefined4 *)param_2 = 0;
  pVVar2 = (Variant *)&local_30;
  *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = local_78;
  pVStack_90 = local_60;
  Callable::callp(param_3,(int)&local_98,(Variant *)0x2,param_2);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ViewPanner::~ViewPanner() */

void __thiscall ViewPanner::~ViewPanner(ViewPanner *this)

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
/* Shortcut::~Shortcut() */

void __thiscall Shortcut::~Shortcut(Shortcut *this)

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


