
/* CurvePreviewGenerator::handles(String const&) const */

void __thiscall CurvePreviewGenerator::handles(CurvePreviewGenerator *this,String *param_1)

{
  String::operator==(param_1,"Curve");
  return;
}



/* CurveEdit::set_selected_index(int) */

void __thiscall CurveEdit::set_selected_index(CurveEdit *this,int param_1)

{
  if (*(int *)(this + 0xa00) == param_1) {
    return;
  }
  *(int *)(this + 0xa00) = param_1;
  CanvasItem::queue_redraw();
  return;
}



/* CurveEdit::_curve_changed() */

void __thiscall CurveEdit::_curve_changed(CurveEdit *this)

{
  CanvasItem::queue_redraw();
  if ((*(int *)(*(long *)(this + 0x9f0) + 0x240) <= *(int *)(this + 0xa00)) &&
     (*(int *)(this + 0xa00) != -1)) {
    *(undefined4 *)(this + 0xa00) = 0xffffffff;
    CanvasItem::queue_redraw();
    return;
  }
  return;
}



/* CurveEdit::get_minimum_size() const */

undefined8 __thiscall CurveEdit::get_minimum_size(CurveEdit *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)EditorScale::get_scale();
  fVar2 = (float)Control::get_size();
  fVar3 = _LC1;
  if (_LC1 <= fVar2 * *(float *)(this + 0x9c8)) {
    fVar3 = fVar2 * *(float *)(this + 0x9c8);
  }
  return CONCAT44(fVar3 * fVar1,_LC2 * fVar1);
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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



/* EditorInspectorPluginCurve::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginCurve::can_handle(EditorInspectorPluginCurve *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Curve::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEdit::CurveEdit() */

void __thiscall CurveEdit::CurveEdit(CurveEdit *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  Control::Control((Control *)this);
  *(undefined ***)this = &PTR__initialize_classv_00116268;
  uVar1 = _LC17;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x9c8) = uVar1;
  *(undefined8 *)(this + 0x9d0) = 0x3f80000000000002;
  uVar1 = _LC20;
  *(undefined4 *)(this + 0xa00) = 0xffffffff;
  *(undefined4 *)(this + 0xa04) = 0xffffffff;
  *(undefined4 *)(this + 0xa08) = 0xffffffff;
  *(undefined4 *)(this + 0xa0c) = 0xffffffff;
  uVar3 = _UNK_00116e78;
  uVar2 = __LC18;
  *(undefined8 *)(this + 0xa30) = uVar1;
  *(undefined8 *)(this + 0xa10) = uVar2;
  *(undefined8 *)(this + 0xa18) = uVar3;
  uVar2 = _UNK_00116e88;
  uVar1 = __LC19;
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined8 *)(this + 0x9e0) = 0x3f800000;
  *(undefined4 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa40) = 0xffffffff00000000;
  *(undefined8 *)(this + 0xa48) = 0;
  this[0xa50] = (CurveEdit)0x0;
  *(undefined4 *)(this + 0xa54) = 10;
  *(undefined8 *)(this + 0xa20) = uVar1;
  *(undefined8 *)(this + 0xa28) = uVar2;
  Control::set_focus_mode(this,2);
  Control::set_clip_contents(SUB81(this,0));
  return;
}



/* CurveEdit::get_curve() */

void CurveEdit::get_curve(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x9f0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x9f0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CurveEdit::set_snap_enabled(bool) */

void __thiscall CurveEdit::set_snap_enabled(CurveEdit *this,bool param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa50] = (CurveEdit)param_1;
  CanvasItem::queue_redraw();
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    if (this[0xa50] == (CurveEdit)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xb0);
      if (set_snap_enabled(bool)::{lambda()#2}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&set_snap_enabled(bool)::{lambda()#2}::operator()()::sname);
        if (iVar2 != 0) {
          _scs_create((char *)&set_snap_enabled(bool)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_snap_enabled(bool)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&set_snap_enabled(bool)::{lambda()#2}::operator()()::sname);
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010040f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,&set_snap_enabled(bool)::{lambda()#2}::operator()()::sname);
        return;
      }
      goto LAB_00100545;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xa8);
    Variant::Variant((Variant *)local_48,true);
    if (set_snap_enabled(bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&set_snap_enabled(bool)::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&set_snap_enabled(bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_snap_enabled(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_snap_enabled(bool)::{lambda()#1}::operator()()::sname);
      }
    }
    (*UNRECOVERED_JUMPTABLE)
              (plVar1,&set_snap_enabled(bool)::{lambda()#1}::operator()()::sname,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100545:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditor::_set_snap_enabled(bool) */

void __thiscall CurveEditor::_set_snap_enabled(CurveEditor *this,bool param_1)

{
  CurveEdit::set_snap_enabled(*(CurveEdit **)(this + 0xa30),param_1);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa20),0));
  return;
}



/* CurveEdit::set_snap_count(int) */

void __thiscall CurveEdit::set_snap_count(CurveEdit *this,int param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xa54) = param_1;
  CanvasItem::queue_redraw();
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(this + 0xa54) == 10) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xb0);
      if (set_snap_count(int)::{lambda()#2}::operator()()::sname == '\0') {
        iVar2 = __cxa_guard_acquire(&set_snap_count(int)::{lambda()#2}::operator()()::sname);
        if (iVar2 != 0) {
          _scs_create((char *)&set_snap_count(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &set_snap_count(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&set_snap_count(int)::{lambda()#2}::operator()()::sname);
        }
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,&set_snap_count(int)::{lambda()#2}::operator()()::sname);
        return;
      }
      goto LAB_0010074d;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xa8);
    Variant::Variant((Variant *)local_48,*(int *)(this + 0xa54));
    if (set_snap_count(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&set_snap_count(int)::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&set_snap_count(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&set_snap_count(int)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&set_snap_count(int)::{lambda()#1}::operator()()::sname);
      }
    }
    (*UNRECOVERED_JUMPTABLE)
              (plVar1,&set_snap_count(int)::{lambda()#1}::operator()()::sname,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010074d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditor::_set_snap_count(int) */

void __thiscall CurveEditor::_set_snap_count(CurveEditor *this,int param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 2) {
    param_1 = 2;
  }
  CurveEdit::set_snap_count(*(CurveEdit **)(this + 0xa30),param_1);
  return;
}



/* CurveEdit::get_point_at(Vector2 const&) const */

int __thiscall CurveEdit::get_point_at(CurveEdit *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float local_4c;
  undefined8 local_48;
  long local_40;
  
  lVar4 = *(long *)(this + 0x9f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 != 0) {
    fVar1 = *(float *)param_1;
    iVar3 = *(int *)(this + 0xa28);
    fVar6 = (float)iVar3;
    local_4c = (float)(iVar3 * iVar3 * 2);
    fVar2 = *(float *)(param_1 + 4);
    fVar7 = fVar6 + fVar6 + 0.0;
    if (0 < *(int *)(lVar4 + 0x240)) {
      iVar5 = 0;
      iVar3 = -1;
      do {
        uVar9 = Curve::get_point_position((int)lVar4);
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar8 = fVar10 * (float)*(undefined8 *)(this + 0x9dc) +
                (float)uVar9 * (float)*(undefined8 *)(this + 0x9d4) +
                (float)*(undefined8 *)(this + 0x9e4);
        local_48 = CONCAT44(fVar10 * (float)((ulong)*(undefined8 *)(this + 0x9dc) >> 0x20) +
                            (float)uVar9 * (float)((ulong)*(undefined8 *)(this + 0x9d4) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0x9e4) >> 0x20),fVar8);
        if (fVar7 < 0.0) {
          _err_print_error("has_point","./core/math/rect2.h",0xb9,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar8 = (float)local_48;
        }
        if ((((fVar1 - fVar6 <= fVar8) && (fVar2 - fVar6 <= local_48._4_4_)) &&
            (fVar8 < (fVar1 - fVar6) + fVar7)) && (local_48._4_4_ < (fVar2 - fVar6) + fVar7)) {
          fVar8 = (float)Vector2::distance_squared_to((Vector2 *)&local_48);
          if (fVar8 < local_4c) {
            local_4c = (float)Vector2::distance_squared_to((Vector2 *)&local_48);
            iVar3 = iVar5;
          }
        }
        lVar4 = *(long *)(this + 0x9f0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar4 + 0x240));
      goto LAB_001008f8;
    }
  }
  iVar3 = -1;
LAB_001008f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* CurveEdit::get_offset_without_collision(int, float, bool) */

void __thiscall
CurveEdit::get_offset_without_collision(CurveEdit *this,int param_1,float param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float local_2c;
  
  lVar2 = *(long *)(this + 0x9f0);
  if (0 < *(int *)(lVar2 + 0x240)) {
    iVar1 = 0;
    local_2c = param_2;
    do {
      while (param_1 != iVar1) {
        fVar3 = (float)Curve::get_point_position((int)lVar2);
        if (local_2c < fVar3) {
          return;
        }
        fVar3 = (float)Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
        if (local_2c == fVar3) {
          if (param_3 == false) {
            local_2c = (float)((double)local_2c - _LC30);
            if (local_2c < 0.0) {
              local_2c = 0.0;
              param_3 = true;
            }
          }
          else {
            iVar1 = 0;
            local_2c = (float)((double)local_2c + _LC30);
            if (_LC29 < local_2c) {
              local_2c = 1.0;
              lVar2 = *(long *)(this + 0x9f0);
              param_3 = false;
              goto LAB_001009ed;
            }
          }
          iVar1 = 0;
          lVar2 = *(long *)(this + 0x9f0);
        }
        else {
          lVar2 = *(long *)(this + 0x9f0);
          iVar1 = iVar1 + 1;
        }
LAB_001009ed:
        if (*(int *)(lVar2 + 0x240) <= iVar1) {
          return;
        }
      }
      iVar1 = param_1 + 1;
    } while (iVar1 < *(int *)(lVar2 + 0x240));
  }
  return;
}



/* CurveEdit::update_view_transform() */

void CurveEdit::update_view_transform(void)

{
  long lVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_RDX;
  float fVar6;
  undefined8 in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((update_view_transform()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&update_view_transform()::{lambda()#1}::operator()()::sname,in_RSI
                                  ,in_RDX,&update_view_transform()::{lambda()#1}::operator()()::
                                           sname), iVar5 != 0)) {
    _scs_create((char *)&update_view_transform()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&update_view_transform()::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&update_view_transform()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_78,in_RDI);
  if ((update_view_transform()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&update_view_transform()::{lambda()#2}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&update_view_transform()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&update_view_transform()::{lambda()#2}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&update_view_transform()::{lambda()#2}::operator()()::sname);
  }
  uVar4 = Control::get_theme_font_size(in_RDI,(StringName *)(SceneStringNames::singleton + 0xa8));
  fVar7 = (float)(**(code **)(*(long *)local_78 + 0x218))(local_78,uVar4);
  fVar8 = (float)EditorScale::get_scale();
  fVar2 = _LC31;
  lVar1 = *(long *)(in_RDI + 0x9f0);
  fVar7 = fVar8 + fVar8 + fVar7;
  local_70 = CONCAT44(fVar7,fVar7);
  fVar8 = _LC31;
  fVar10 = _LC29;
  fVar11 = _LC29;
  fVar6 = _LC31;
  if (lVar1 != 0) {
    fVar8 = (float)((uint)*(float *)(lVar1 + 0x274) ^ (uint)_LC31);
    fVar10 = *(float *)(lVar1 + 0x270) - *(float *)(lVar1 + 0x26c);
    fVar11 = *(float *)(lVar1 + 0x278) - *(float *)(lVar1 + 0x274);
    fVar6 = (float)((uint)*(float *)(lVar1 + 0x26c) ^ (uint)_LC31);
  }
  uVar9 = Control::get_size();
  local_68 = 0x3f800000;
  local_60 = 0x3f80000000000000;
  local_58 = 0;
  local_48 = CONCAT44(fVar6 - fVar10,fVar8);
  Transform2D::translate_local((Vector2 *)&local_68);
  local_48 = CONCAT44((uint)(((float)((ulong)uVar9 >> 0x20) - (fVar7 + fVar7)) / fVar10) ^
                      (uint)fVar2,((float)uVar9 - (fVar7 + fVar7)) / fVar11);
  Transform2D::scale((Vector2 *)&local_68);
  local_48 = 0x3f800000;
  local_40 = 0x3f80000000000000;
  local_38 = 0;
  Transform2D::translate_local((Vector2 *)&local_48);
  Transform2D::operator*((Transform2D *)&local_98,(Transform2D *)&local_48);
  *(undefined8 *)(in_RDI + 0x9d4) = local_98;
  *(undefined8 *)(in_RDI + 0x9dc) = uStack_90;
  *(undefined8 *)(in_RDI + 0x9e4) = local_88;
  if (((local_78 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
    (**(code **)(*(long *)local_78 + 0x140))(local_78);
    Memory::free_static(local_78,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CurveEdit::get_view_pos(Vector2 const&) const */

undefined8 __thiscall CurveEdit::get_view_pos(CurveEdit *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  return CONCAT44(fVar1 * (float)((ulong)*(undefined8 *)(this + 0x9d4) >> 0x20) +
                  fVar2 * (float)((ulong)*(undefined8 *)(this + 0x9dc) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x9e4) >> 0x20),
                  fVar1 * (float)*(undefined8 *)(this + 0x9d4) +
                  fVar2 * (float)*(undefined8 *)(this + 0x9dc) +
                  (float)*(undefined8 *)(this + 0x9e4));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEdit::get_tangent_view_pos(int, CurveEdit::TangentIndex) const */

undefined8 __thiscall
CurveEdit::get_tangent_view_pos(CurveEdit *this,undefined8 param_2,int param_3)

{
  Vector2 *pVVar1;
  CurveEdit *this_00;
  long in_FS_OFFSET;
  uint uVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 uVar5;
  float extraout_XMM1_Da;
  float fVar6;
  float fVar7;
  float extraout_XMM1_Db;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar2 = Curve::get_point_left_tangent((int)*(undefined8 *)(this + 0x9f0));
    fVar3 = (float)(uVar2 ^ _LC31);
    fVar8 = _LC34;
  }
  else {
    fVar3 = (float)Curve::get_point_right_tangent((int)*(undefined8 *)(this + 0x9f0));
    fVar8 = _LC29;
  }
  local_30 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
  this_00 = this;
  pVVar1 = (Vector2 *)get_view_pos(this,(Vector2 *)&local_30);
  fVar7 = (float)((ulong)extraout_XMM0_Qa >> 0x20);
  local_28 = CONCAT44((float)((ulong)local_30 >> 0x20) + fVar3,(float)local_30 + fVar8);
  uVar5 = extraout_XMM0_Qa;
  uVar4 = get_view_pos(this_00,pVVar1);
  fVar11 = (float)uVar5;
  fVar12 = (float)((ulong)uVar5 >> 0x20);
  local_28 = CONCAT44((float)((ulong)uVar4 >> 0x20) - fVar12,(float)uVar4 - fVar11);
  uVar5 = Vector2::normalized();
  fVar8 = (float)*(int *)(this + 0xa34) * (float)uVar5;
  fVar3 = (float)*(int *)(this + 0xa34) * (float)((ulong)uVar5 >> 0x20);
  uVar5 = CONCAT44(fVar12 + fVar3,fVar11 + fVar8);
  if (NAN(fVar8)) {
LAB_00101048:
    fVar10 = 0.0;
LAB_00100fa8:
    fVar9 = (fVar10 - fVar11) / fVar8;
    fVar10 = _LC29;
    if (fVar9 <= _LC29) {
      if (!NAN(fVar3)) {
        if (fVar3 == 0.0) goto LAB_00100fed;
        if (0.0 < fVar3) goto LAB_00101083;
      }
      fVar6 = 0.0;
      goto LAB_00100fdf;
    }
    if (!NAN(fVar3)) {
      if (fVar3 == 0.0) goto LAB_0010100b;
      fVar9 = _LC29;
      if (0.0 <= fVar3 && fVar3 != 0.0) goto LAB_00101083;
    }
    fVar9 = (0.0 - fVar7) / fVar3;
    if (_LC29 < fVar9) goto LAB_0010100b;
  }
  else {
    if (fVar8 != 0.0) {
      if (fVar8 <= 0.0) goto LAB_00101048;
      Control::get_rect();
      fVar10 = extraout_XMM1_Da;
      goto LAB_00100fa8;
    }
    if (NAN(fVar3)) {
LAB_001010e5:
      fVar9 = (0.0 - fVar7) / fVar3;
      fVar10 = _LC29;
      if (_LC29 < fVar9) goto LAB_0010100b;
      goto LAB_00100fed;
    }
    if (fVar3 == 0.0) goto LAB_0010100b;
    fVar9 = _LC29;
    if (fVar3 <= 0.0) goto LAB_001010e5;
LAB_00101083:
    fVar10 = _LC29;
    Control::get_rect();
    fVar6 = extraout_XMM1_Db;
LAB_00100fdf:
    fVar7 = (fVar6 - fVar7) / fVar3;
    if (fVar7 <= fVar9) {
      fVar9 = fVar7;
    }
  }
LAB_00100fed:
  if ((fVar9 < fVar10) && ((float)_LC35 < fVar9)) {
    uVar5 = CONCAT44(fVar12 + fVar9 * fVar3,fVar11 + fVar9 * fVar8);
  }
LAB_0010100b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* CurveEdit::get_tangent_at(Vector2 const&) const */

undefined8 __thiscall CurveEdit::get_tangent_at(CurveEdit *this,Vector2 *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(this + 0x9f0);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(this + 0xa00);
  if (-1 < iVar1) {
    fVar4 = (float)*(int *)(this + 0xa30);
    fVar6 = *(float *)(param_1 + 4) - fVar4;
    fVar7 = *(float *)param_1 - fVar4;
    fVar4 = fVar4 + fVar4 + 0.0;
    if (iVar1 != 0) {
      uVar5 = get_tangent_view_pos(this,iVar1,0);
      if (fVar4 < 0.0) {
        _err_print_error("has_point","./core/math/rect2.h",0xb9,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
      }
      if ((((fVar7 <= (float)uVar5) && (fVar3 = (float)((ulong)uVar5 >> 0x20), fVar6 <= fVar3)) &&
          ((float)uVar5 < fVar7 + fVar4)) && (fVar3 < fVar6 + fVar4)) {
        return 0;
      }
      iVar1 = *(int *)(this + 0xa00);
      lVar2 = *(long *)(this + 0x9f0);
    }
    if (*(int *)(lVar2 + 0x240) + -1 != iVar1) {
      uVar5 = get_tangent_view_pos(this,iVar1,1);
      if (fVar4 < 0.0) {
        _err_print_error("has_point","./core/math/rect2.h",0xb9,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
      }
      if (((fVar7 <= (float)uVar5) && (fVar3 = (float)((ulong)uVar5 >> 0x20), fVar6 <= fVar3)) &&
         (((float)uVar5 < fVar7 + fVar4 && (fVar3 < fVar4 + fVar6)))) {
        return 1;
      }
    }
  }
  return 0xffffffff;
}



/* CurveEdit::get_world_pos(Vector2 const&) const */

void __thiscall CurveEdit::get_world_pos(CurveEdit *this,Vector2 *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Transform2D::affine_inverse();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)*(undefined8 *)param_1 * local_28 +
                   (float)((ulong)*(undefined8 *)param_1 >> 0x20) * local_20 + local_18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEdit::plot_curve_accurate(float, Color const&, Color const&) */

void __thiscall
CurveEdit::plot_curve_accurate(CurveEdit *this,float param_1,Color *param_2,Color *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  float fVar6;
  Color *extraout_RDX;
  Color *extraout_RDX_00;
  Color *extraout_RDX_01;
  CurveEdit *pCVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_a4;
  int local_7c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar5 = SUB81(param_2,0);
  uVar4 = SUB81(param_3,0);
  lVar8 = *(long *)(this + 0x9f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(lVar8 + 0x274);
  uVar2 = *(undefined4 *)(lVar8 + 0x278);
  if (*(int *)(lVar8 + 0x240) < 2) {
    uVar14 = Curve::sample(0.0);
    fVar6 = *(float *)(this + 0x9cc);
    local_50 = CONCAT44(uVar14,uVar2);
    uVar16 = CONCAT44(uVar14,uVar1);
    uVar15 = get_view_pos(this,(Vector2 *)&local_50);
    local_48 = CONCAT44((int)((ulong)uVar15 >> 0x20),(float)uVar15 - __LC36);
    local_60 = uVar16;
    uVar15 = get_view_pos(this,(Vector2 *)&local_60);
    local_58 = CONCAT44(_LC35._4_4_ + (float)((ulong)uVar15 >> 0x20),(float)_LC35 + (float)uVar15);
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_58,extraout_RDX_01,fVar6,(bool)uVar5);
  }
  else {
    local_58 = Curve::get_point_position((int)lVar8);
    local_50 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
    fVar10 = (float)Transform2D::get_scale();
    fVar6 = *(float *)(this + 0x9cc);
    pCVar7 = this;
    uVar3 = uVar4;
    local_48 = get_view_pos(this,(Vector2 *)&local_58);
    local_68 = CONCAT44(local_58._4_4_,uVar1);
    uVar15 = get_view_pos(pCVar7,(Vector2 *)&local_68);
    local_60 = CONCAT44(_LC35._4_4_ + (float)((ulong)uVar15 >> 0x20),(float)_LC35 + (float)uVar15);
    CanvasItem::draw_line((Vector2 *)pCVar7,(Vector2 *)&local_60,extraout_RDX,fVar6,(bool)uVar3);
    fVar6 = *(float *)(this + 0x9cc);
    local_68 = CONCAT44(local_50._4_4_,uVar2);
    pCVar7 = this;
    uVar15 = get_view_pos(this,(Vector2 *)&local_68);
    local_60 = CONCAT44((int)((ulong)uVar15 >> 0x20),(float)uVar15 - __LC36);
    local_48 = get_view_pos(pCVar7,(Vector2 *)&local_50);
    CanvasItem::draw_line((Vector2 *)pCVar7,(Vector2 *)&local_48,extraout_RDX_00,fVar6,(bool)uVar4);
    lVar8 = *(long *)(this + 0x9f0);
    if (1 < *(int *)(lVar8 + 0x240)) {
      local_7c = 1;
      do {
        uVar15 = Curve::get_point_position((int)lVar8);
        fVar6 = (float)uVar15;
        uVar16 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
        fVar11 = (float)uVar16;
        fVar24 = (fVar11 - fVar6) / (param_1 / fVar10);
        fVar13 = (float)((ulong)uVar15 >> 0x20);
        fVar17 = fVar6;
        if (_LC29 < fVar24) {
          iVar9 = 1;
          fVar12 = _LC29;
          fStack_a4 = fVar6;
          fVar21 = fVar13;
          do {
            fVar12 = fVar12 * (param_1 / fVar10);
            iVar9 = iVar9 + 1;
            fVar17 = fVar6 + fVar12;
            fVar13 = (float)Curve::sample_local_nocheck((int)*(undefined8 *)(this + 0x9f0),fVar12);
            fVar19 = (float)*(undefined8 *)(this + 0x9d4);
            fVar20 = (float)((ulong)*(undefined8 *)(this + 0x9d4) >> 0x20);
            fVar12 = (float)*(undefined8 *)(this + 0x9dc);
            fVar18 = (float)((ulong)*(undefined8 *)(this + 0x9dc) >> 0x20);
            fVar22 = (float)*(undefined8 *)(this + 0x9e4);
            fVar23 = (float)((ulong)*(undefined8 *)(this + 0x9e4) >> 0x20);
            local_48 = CONCAT44(fVar13 * fVar18 + fVar17 * fVar20 + fVar23,
                                fVar13 * fVar12 + fVar17 * fVar19 + fVar22);
            local_60 = CONCAT44(fVar18 * fVar21 + fVar20 * fStack_a4 + fVar23,
                                fVar12 * fVar21 + fVar19 * fStack_a4 + fVar22);
            CanvasItem::draw_line
                      ((Vector2 *)this,(Vector2 *)&local_60,(Color *)&local_48,
                       *(float *)(this + 0x9cc),(bool)uVar5);
            fVar12 = (float)iVar9;
            fStack_a4 = fVar17;
            fVar21 = fVar13;
          } while (fVar12 < fVar24);
        }
        fVar6 = (float)((ulong)uVar16 >> 0x20);
        fVar18 = (float)*(undefined8 *)(this + 0x9d4);
        fVar19 = (float)((ulong)*(undefined8 *)(this + 0x9d4) >> 0x20);
        fVar12 = (float)*(undefined8 *)(this + 0x9dc);
        fVar24 = (float)*(undefined8 *)(this + 0x9e4);
        fVar21 = (float)((ulong)*(undefined8 *)(this + 0x9e4) >> 0x20);
        local_48 = CONCAT44(fVar6 * *(float *)(this + 0x9e0) + fVar11 * fVar19 + fVar21,
                            fVar12 * fVar6 + fVar11 * fVar18 + fVar24);
        local_60 = CONCAT44(fVar17 * fVar19 +
                            fVar13 * (float)((ulong)*(undefined8 *)(this + 0x9dc) >> 0x20) + fVar21,
                            fVar17 * fVar18 + fVar13 * fVar12 + fVar24);
        CanvasItem::draw_line
                  ((Vector2 *)this,(Vector2 *)&local_60,(Color *)&local_48,*(float *)(this + 0x9cc),
                   (bool)uVar5);
        lVar8 = *(long *)(this + 0x9f0);
        local_7c = local_7c + 1;
      } while (local_7c < *(int *)(lVar8 + 0x240));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CurveEdit::set_curve(Ref<Curve>) */

void __thiscall CurveEdit::set_curve(CurveEdit *this,long *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  long *plVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_60;
  CurveEdit local_58 [24];
  long local_40;
  
  pCVar1 = (Callable *)*param_2;
  pCVar2 = *(Callable **)(this + 0x9f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) goto LAB_00101b2b;
  if (pCVar2 == (Callable *)0x0) {
    *(Callable **)(this + 0x9f0) = pCVar1;
    if (pCVar1 == (Callable *)0x0) goto LAB_00101b2b;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      *(undefined8 *)(this + 0x9f0) = 0;
      goto LAB_00101b2b;
    }
LAB_00101a00:
    pOVar7 = *(Object **)(this + 0x9f0);
  }
  else {
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    Resource::disconnect_changed(pCVar2);
    Callable::~Callable((Callable *)local_58);
    plVar3 = *(long **)(this + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x110);
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    StringName::StringName((StringName *)&local_60,Curve::SIGNAL_RANGE_CHANGED,false);
    (*pcVar4)(plVar3,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar3 = *(long **)(this + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x110);
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    StringName::StringName((StringName *)&local_60,Curve::SIGNAL_DOMAIN_CHANGED,false);
    (*pcVar4)(plVar3,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    pOVar5 = (Object *)*param_2;
    pOVar7 = *(Object **)(this + 0x9f0);
    if (pOVar5 != pOVar7) {
      *(Object **)(this + 0x9f0) = pOVar5;
      if (pOVar5 == (Object *)0x0) {
LAB_00101b8b:
        if (pOVar7 == (Object *)0x0) goto LAB_00101b2b;
      }
      else {
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(this + 0x9f0) = 0;
          goto LAB_00101b8b;
        }
        if (pOVar7 == (Object *)0x0) goto LAB_00101a00;
      }
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar7), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      goto LAB_00101a00;
    }
  }
  if (pOVar7 != (Object *)0x0) {
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    Resource::connect_changed((Callable *)pOVar7,(uint)local_58);
    Callable::~Callable((Callable *)local_58);
    plVar3 = *(long **)(this + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    StringName::StringName((StringName *)&local_60,Curve::SIGNAL_RANGE_CHANGED,false);
    (*pcVar4)(plVar3,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar3 = *(long **)(this + 0x9f0);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<CurveEdit>
              (local_58,(char *)this,(_func_void *)"&CurveEdit::_curve_changed");
    StringName::StringName((StringName *)&local_60,Curve::SIGNAL_DOMAIN_CHANGED,false);
    (*pcVar4)(plVar3,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
  }
LAB_00101b2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CurveEditor::set_curve(Ref<Curve> const&) */

void __thiscall CurveEditor::set_curve(CurveEditor *this,Ref *param_1)

{
  Object *pOVar1;
  CurveEdit *pCVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pOVar1 = *(Object **)param_1;
  pCVar2 = *(CurveEdit **)(this + 0xa30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_28 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_28 = (Object *)0x0;
    CurveEdit::set_curve(pCVar2,&local_28);
  }
  else {
    CurveEdit::set_curve(pCVar2);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00101c5f;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditorPlugin::CurveEditorPlugin() */

void __thiscall CurveEditorPlugin::CurveEditorPlugin(CurveEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  Ref *pRVar4;
  EditorResourcePreviewGenerator *this_00;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = EditorPlugin::add_inspector_plugin;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (CurveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  local_40 = (Object *)0x0;
  Ref<EditorInspectorPluginCurve>::instantiate<>((Ref<EditorInspectorPluginCurve> *)&local_40);
  pOVar1 = local_40;
  local_38 = (Object *)0x0;
  if (local_40 != (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(local_40,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0)
    ;
    if (pOVar3 != (Object *)0x0) {
      local_38 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_38 = (Object *)0x0;
      }
    }
  }
  EditorPlugin::add_inspector_plugin(this);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar3 = local_38;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar4 = (Ref *)EditorInterface::get_resource_previewer();
  this_00 = (EditorResourcePreviewGenerator *)operator_new(0x1f8,"");
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00116760;
  postinitialize_handler((Object *)this_00);
  local_38 = (Object *)this_00;
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    local_38 = (Object *)0x0;
  }
  EditorResourcePreview::add_preview_generator(pRVar4);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar3 = local_38;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (pOVar1 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar1,false);
          return;
        }
        goto LAB_00102240;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102240:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEdit::use_preset(int) */

void __thiscall CurveEdit::use_preset(CurveEdit *this,int param_1)

{
  int iVar1;
  long lVar2;
  StringName *pSVar3;
  undefined1 auVar4 [12];
  Object *pOVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  float fVar11;
  double dVar10;
  undefined4 uVar12;
  Array local_b0 [8];
  undefined8 local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < (uint)param_1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x164;
      pcVar7 = "Condition \"p_preset_id < 0 || p_preset_id >= PRESET_COUNT\" is true.";
LAB_00102819:
      _err_print_error("use_preset","editor/plugins/curve_editor_plugin.cpp",uVar8,pcVar7,0,0);
      return;
    }
    goto LAB_001028ef;
  }
  if (*(long *)(this + 0x9f0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x165;
      pcVar7 = "Condition \"curve.is_null()\" is true.";
      goto LAB_00102819;
    }
    goto LAB_001028ef;
  }
  Curve::get_data();
  Curve::clear_points();
  lVar2 = *(long *)(this + 0x9f0);
  uVar12 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x274) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar2 + 0x26c) >> 0x20);
  uVar8 = CONCAT44(fVar11,uVar12);
  if ((param_1 == 3) || (param_1 == 4)) {
    Curve::add_point(lVar2,0,0);
    Curve::add_point(uVar8,*(undefined8 *)(this + 0x9f0),0,0);
  }
  else {
    if (param_1 == 1) {
      Curve::add_point(lVar2,0,0);
      uVar9 = *(undefined8 *)(this + 0x9f0);
    }
    else {
      if (param_1 == 2) {
        Curve::add_point(lVar2,0,0);
        lVar2 = *(long *)(this + 0x9f0);
        dVar10 = (double)((*(float *)(lVar2 + 0x270) - *(float *)(lVar2 + 0x26c)) /
                         (*(float *)(lVar2 + 0x278) - *(float *)(lVar2 + 0x274))) * __LC82;
        auVar4._4_8_ = (ulong)dVar10 >> 0x20;
        auVar4._0_4_ = (float)dVar10;
        Curve::add_point(uVar8,auVar4._0_8_,0,lVar2,0,0);
        goto LAB_0010239c;
      }
      uVar8 = CONCAT44((fVar11 + (float)*(undefined8 *)(lVar2 + 0x26c)) * (float)_LC35,uVar12);
      Curve::add_point(lVar2,0,0);
      uVar9 = *(undefined8 *)(this + 0x9f0);
    }
    Curve::add_point(uVar8,uVar9,0,0);
    Curve::set_point_right_mode(*(undefined8 *)(this + 0x9f0),0,1);
    Curve::set_point_left_mode(*(undefined8 *)(this + 0x9f0),1,1);
  }
LAB_0010239c:
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_90 = 0;
  local_98 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Load Curve Preset";
  local_a8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar5,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  Curve::get_data();
  StringName::StringName((StringName *)&local_98,"_set_data",false);
  pSVar3 = *(StringName **)(this + 0x9f0);
  Variant::Variant((Variant *)local_78,(Array *)&local_a0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar6 = (int)local_88;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar3,(Variant **)&local_98,iVar6);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_a0);
  StringName::StringName((StringName *)&local_98,"set_selected_index",false);
  Variant::Variant((Variant *)local_78,-1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_98,iVar6);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  Array::Array((Array *)&local_98,local_b0);
  StringName::StringName((StringName *)&local_a0,"_set_data",false);
  pSVar3 = *(StringName **)(this + 0x9f0);
  Variant::Variant((Variant *)local_78,(Array *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar3,(Variant **)&local_a0,iVar6);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_98);
  iVar1 = *(int *)(this + 0xa00);
  StringName::StringName((StringName *)&local_98,"set_selected_index",false);
  Variant::Variant((Variant *)local_78,iVar1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_98,iVar6);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  Array::~Array(local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001028ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditor::_on_preset_item_selected(int) */

void __thiscall CurveEditor::_on_preset_item_selected(CurveEditor *this,int param_1)

{
  CurveEdit::use_preset(*(CurveEdit **)(this + 0xa30),param_1);
  return;
}



/* CurveEdit::add_point(Vector2 const&) */

void __thiscall CurveEdit::add_point(CurveEdit *this,Vector2 *param_1)

{
  StringName *pSVar1;
  int iVar2;
  Object *pOVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9f0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_point","editor/plugins/curve_editor_plugin.cpp",499,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    iVar2 = Curve::add_point(*(undefined8 *)param_1,0,*(long *)(this + 0x9f0),0,0);
    Curve::remove_point((int)*(undefined8 *)(this + 0x9f0));
    pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b0 = 0;
    local_a0 = 0;
    local_a8 = "";
    String::parse_latin1((StrRange *)&local_b0);
    local_a8 = "Add Curve Point";
    local_b8 = 0;
    local_a0 = 0xf;
    String::parse_latin1((StrRange *)&local_b8);
    TTR((String *)&local_a8,(String *)&local_b8);
    EditorUndoRedoManager::create_action(pOVar3,(String *)&local_a8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    StringName::StringName((StringName *)&local_a8,"add_point",false);
    local_90 = *(undefined8 *)param_1;
    pSVar1 = *(StringName **)(this + 0x9f0);
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar4 = (int)local_88;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar1,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"set_selected_index",false);
    Variant::Variant((Variant *)local_78,iVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"remove_point",false);
    pSVar1 = *(StringName **)(this + 0x9f0);
    Variant::Variant((Variant *)local_78,iVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar1,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"set_selected_index",false);
    Variant::Variant((Variant *)local_78,-1);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::remove_point(int) */

void __thiscall CurveEdit::remove_point(CurveEdit *this,int param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  int iVar4;
  int iVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  int local_118;
  int local_114;
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  int local_d8 [6];
  int local_c0 [2];
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9f0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("remove_point","editor/plugins/curve_editor_plugin.cpp",0x203,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010337d;
  }
  iVar5 = *(int *)(*(long *)(this + 0x9f0) + 0x240);
  if ((param_1 < 0) || (iVar5 <= param_1)) {
    _err_print_index_error
              ("remove_point","editor/plugins/curve_editor_plugin.cpp",0x204,(long)param_1,
               (long)iVar5,"p_index","curve->get_point_count()","Curve point is out of bounds.",
               false,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010337d;
  }
  Curve::get_point((int)&local_128);
  if (*(int *)(this + 0xa38) == 2) {
    local_168 = *(undefined8 *)(this + 0xa3c);
    iVar5 = *(int *)(this + 0xa00);
    if (param_1 < iVar5) goto LAB_00102e06;
LAB_00103246:
    if (param_1 == iVar5) {
      iVar5 = -1;
    }
  }
  else {
    iVar5 = *(int *)(this + 0xa00);
    local_168 = local_128;
    if (iVar5 <= param_1) goto LAB_00103246;
LAB_00102e06:
    iVar5 = iVar5 + -1;
  }
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  local_150 = 0;
  local_148 = "";
  local_140 = 0;
  String::parse_latin1((StrRange *)&local_150);
  local_148 = "Remove Curve Point";
  local_158 = 0;
  local_140 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  TTR((String *)&local_148,(String *)&local_158);
  EditorUndoRedoManager::create_action(pOVar3,(String *)&local_148,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  StringName::StringName((StringName *)&local_148,"remove_point",false);
  pSVar2 = *(StringName **)(this + 0x9f0);
  Variant::Variant((Variant *)local_d8,param_1);
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b8 = (undefined1  [16])0x0;
  iVar4 = (int)&local_108;
  local_108 = (Variant *)local_d8;
  EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar2,(Variant **)&local_148,iVar4);
  if (Variant::needs_deinit[local_c0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"set_selected_index",false);
  Variant::Variant((Variant *)local_d8,iVar5);
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b8 = (undefined1  [16])0x0;
  local_108 = (Variant *)local_d8;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_148,iVar4);
  if (Variant::needs_deinit[local_c0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"add_point",false);
  pSVar2 = *(StringName **)(this + 0x9f0);
  local_130 = local_168;
  Variant::Variant((Variant *)local_d8,(Vector2 *)&local_130);
  Variant::Variant((Variant *)local_c0,local_120);
  Variant::Variant(local_a8,local_11c);
  Variant::Variant(local_90,local_118);
  Variant::Variant(local_78,local_114);
  local_58 = (undefined1  [16])0x0;
  pVVar6 = local_48;
  local_60 = 0;
  local_108 = (Variant *)local_d8;
  pVStack_100 = (Variant *)local_c0;
  local_f8 = local_a8;
  pVStack_f0 = local_90;
  local_e8 = local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar2,(Variant **)&local_148,iVar4);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_d8);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  iVar5 = *(int *)(this + 0xa00);
  StringName::StringName((StringName *)&local_148,"set_selected_index",false);
  Variant::Variant((Variant *)local_d8,iVar5);
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b8 = (undefined1  [16])0x0;
  local_108 = (Variant *)local_d8;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_148,iVar4);
  if (Variant::needs_deinit[local_c0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
    return;
  }
LAB_0010337d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::set_point_position(int, Vector2 const&) */

void __thiscall CurveEdit::set_point_position(CurveEdit *this,int param_1,Vector2 *param_2)

{
  Variant *pVVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  StringName *pSVar5;
  Object *this_00;
  int iVar6;
  Variant *pVVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar4 = *(long *)(this + 0x9f0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_point_position","editor/plugins/curve_editor_plugin.cpp",0x21b,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    if ((param_1 < 0) || (*(int *)(lVar4 + 0x240) <= param_1)) {
      _err_print_index_error
                ("set_point_position","editor/plugins/curve_editor_plugin.cpp",0x21c,(long)param_1,
                 (long)*(int *)(lVar4 + 0x240),"p_index","curve->get_point_count()",
                 "Curve point is out of bounds.",false,false);
    }
    else if ((*(float *)param_2 != *(float *)(this + 0xa3c)) ||
            (*(float *)(param_2 + 4) != *(float *)(this + 0xa40))) {
      Curve::set_point_value((int)lVar4,*(float *)(this + 0xa40));
      Curve::set_point_offset((int)*(undefined8 *)(this + 0x9f0),*(float *)(this + 0xa3c));
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      local_b0 = 0;
      local_b8 = "";
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "Modify Curve Point";
      local_c8 = 0;
      local_b0 = 0x12;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_b8,(String *)&local_c8);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      iVar6 = *(int *)(this + 0xa44);
      fVar2 = *(float *)(param_2 + 4);
      StringName::StringName((StringName *)&local_b8,"set_point_value",false);
      pSVar5 = *(StringName **)(this + 0x9f0);
      Variant::Variant((Variant *)local_88,iVar6);
      Variant::Variant((Variant *)local_70,fVar2);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar6 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar5,(Variant **)&local_b8,iVar6);
      pVVar8 = (Variant *)local_40;
      pVVar7 = pVVar8;
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      fVar2 = *(float *)param_2;
      iVar3 = *(int *)(this + 0xa44);
      StringName::StringName((StringName *)&local_b8,"set_point_offset",false);
      pSVar5 = *(StringName **)(this + 0x9f0);
      Variant::Variant((Variant *)local_88,iVar3);
      Variant::Variant((Variant *)local_70,fVar2);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar5,(Variant **)&local_b8,iVar6);
      do {
        pVVar7 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,param_1);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      fVar2 = *(float *)(this + 0xa40);
      StringName::StringName((StringName *)&local_b8,"set_point_value",false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b8
                 ,param_1,fVar2);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      fVar2 = *(float *)(this + 0xa3c);
      StringName::StringName((StringName *)&local_b8,"set_point_offset",false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b8
                 ,param_1,fVar2);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      iVar3 = *(int *)(this + 0xa44);
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,iVar3);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        return;
      }
      goto LAB_001039c9;
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001039c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::set_point_left_tangent(int, float) */

void __thiscall CurveEdit::set_point_left_tangent(CurveEdit *this,int param_1,float param_2)

{
  Variant *pVVar1;
  float fVar2;
  long lVar3;
  StringName *pSVar4;
  Object *this_00;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar3 = *(long *)(this + 0x9f0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_point_left_tangent","editor/plugins/curve_editor_plugin.cpp",0x24b,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    if ((param_1 < 0) || (*(int *)(lVar3 + 0x240) <= param_1)) {
      _err_print_index_error
                ("set_point_left_tangent","editor/plugins/curve_editor_plugin.cpp",0x24c,
                 (long)param_1,(long)*(int *)(lVar3 + 0x240),"p_index","curve->get_point_count()",
                 "Curve point is out of bounds.",false,false);
    }
    else if (*(float *)(this + 0xa48) != param_2) {
      Curve::set_point_left_tangent((int)lVar3,*(float *)(this + 0xa48));
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      local_b0 = 0;
      local_b8 = "";
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "Modify Curve Point\'s Left Tangent";
      local_c8 = 0;
      local_b0 = 0x21;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_b8,(String *)&local_c8);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      StringName::StringName((StringName *)&local_b8,"set_point_left_tangent",false);
      pSVar4 = *(StringName **)(this + 0x9f0);
      Variant::Variant((Variant *)local_88,param_1);
      Variant::Variant((Variant *)local_70,param_2);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar6 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_b8,iVar6);
      pVVar5 = (Variant *)local_40;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,param_1);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      fVar2 = *(float *)(this + 0xa48);
      StringName::StringName((StringName *)&local_b8,"set_point_left_tangent",false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b8
                 ,param_1,fVar2);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,param_1);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        return;
      }
      goto LAB_00103e5f;
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00103e5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::set_point_right_tangent(int, float) */

void __thiscall CurveEdit::set_point_right_tangent(CurveEdit *this,int param_1,float param_2)

{
  Variant *pVVar1;
  float fVar2;
  long lVar3;
  StringName *pSVar4;
  Object *this_00;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar3 = *(long *)(this + 0x9f0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_point_right_tangent","editor/plugins/curve_editor_plugin.cpp",0x25d,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    if ((param_1 < 0) || (*(int *)(lVar3 + 0x240) <= param_1)) {
      _err_print_index_error
                ("set_point_right_tangent","editor/plugins/curve_editor_plugin.cpp",0x25e,
                 (long)param_1,(long)*(int *)(lVar3 + 0x240),"p_index","curve->get_point_count()",
                 "Curve point is out of bounds.",false,false);
    }
    else if (*(float *)(this + 0xa4c) != param_2) {
      Curve::set_point_right_tangent((int)lVar3,*(float *)(this + 0xa4c));
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      local_b0 = 0;
      local_b8 = "";
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = "Modify Curve Point\'s Right Tangent";
      local_c8 = 0;
      local_b0 = 0x22;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_b8,(String *)&local_c8);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      StringName::StringName((StringName *)&local_b8,"set_point_right_tangent",false);
      pSVar4 = *(StringName **)(this + 0x9f0);
      Variant::Variant((Variant *)local_88,param_1);
      Variant::Variant((Variant *)local_70,param_2);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar6 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_b8,iVar6);
      pVVar5 = (Variant *)local_40;
      do {
        pVVar1 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,param_1);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      fVar2 = *(float *)(this + 0xa4c);
      StringName::StringName((StringName *)&local_b8,"set_point_right_tangent",false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b8
                 ,param_1,fVar2);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,param_1);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b8,iVar6);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        return;
      }
      goto LAB_001042ff;
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001042ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::set_point_tangents(int, float, float) */

void __thiscall
CurveEdit::set_point_tangents(CurveEdit *this,int param_1,float param_2,float param_3)

{
  Variant *pVVar1;
  float fVar2;
  long lVar3;
  StringName *pSVar4;
  Object *this_00;
  int iVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar3 = *(long *)(this + 0x9f0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_point_tangents","editor/plugins/curve_editor_plugin.cpp",0x232,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else if ((param_1 < 0) || (*(int *)(lVar3 + 0x240) <= param_1)) {
    _err_print_index_error
              ("set_point_tangents","editor/plugins/curve_editor_plugin.cpp",0x233,(long)param_1,
               (long)*(int *)(lVar3 + 0x240),"p_index","curve->get_point_count()",
               "Curve point is out of bounds.",false,false);
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (*(float *)(this + 0xa48) == param_2) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      set_point_right_tangent(this,param_1,param_3);
      return;
    }
  }
  else if (param_3 == *(float *)(this + 0xa4c)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      set_point_left_tangent(this,param_1,param_2);
      return;
    }
  }
  else {
    Curve::set_point_left_tangent((int)lVar3,*(float *)(this + 0xa48));
    Curve::set_point_right_tangent((int)*(undefined8 *)(this + 0x9f0),*(float *)(this + 0xa4c));
    this_00 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Modify Curve Point\'s Tangents");
    TTR((String *)&local_b0,(String *)&local_c0);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_b0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    StringName::StringName((StringName *)&local_b0,"set_point_left_tangent",false);
    pSVar4 = *(StringName **)(this + 0x9f0);
    Variant::Variant((Variant *)local_88,param_1);
    Variant::Variant((Variant *)local_70,param_2);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    iVar5 = (int)&local_a8;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_b0,iVar5);
    pVVar7 = (Variant *)local_40;
    pVVar6 = pVVar7;
    do {
      pVVar1 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b0,"set_point_right_tangent",false);
    pSVar4 = *(StringName **)(this + 0x9f0);
    Variant::Variant((Variant *)local_88,param_1);
    Variant::Variant((Variant *)local_70,param_3);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_b0,iVar5);
    do {
      pVVar6 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b0,"set_selected_index",false);
    Variant::Variant((Variant *)local_88,param_1);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b0,iVar5);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    fVar2 = *(float *)(this + 0xa48);
    StringName::StringName((StringName *)&local_b0,"set_point_left_tangent",false);
    EditorUndoRedoManager::add_undo_method<int,float>
              ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b0,
               param_1,fVar2);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    fVar2 = *(float *)(this + 0xa4c);
    StringName::StringName((StringName *)&local_b0,"set_point_right_tangent",false);
    EditorUndoRedoManager::add_undo_method<int,float>
              ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b0,
               param_1,fVar2);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b0,"set_selected_index",false);
    Variant::Variant((Variant *)local_88,param_1);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_b0,iVar5);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::toggle_linear(int, CurveEdit::TangentIndex) */

void __thiscall CurveEdit::toggle_linear(CurveEdit *this,int param_1,int param_3)

{
  Variant *pVVar1;
  StringName *pSVar2;
  int iVar3;
  Object *this_00;
  Variant *pVVar4;
  Variant *pVVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  float local_dc;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9f0) == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("toggle_linear","editor/plugins/curve_editor_plugin.cpp",0x26f,
                       "Condition \"curve.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    iVar3 = *(int *)(*(long *)(this + 0x9f0) + 0x240);
    if ((param_1 < 0) || (iVar3 <= param_1)) {
      _err_print_index_error
                ("toggle_linear","editor/plugins/curve_editor_plugin.cpp",0x270,(long)param_1,
                 (long)iVar3,"p_index","curve->get_point_count()","Curve point is out of bounds.",
                 false,false);
    }
    else if (param_3 != -1) {
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"");
      local_b8 = "Toggle Linear Curve Point\'s Tangent";
      local_c8 = 0;
      local_b0 = 0x23;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_b8,(String *)&local_c8);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (param_3 == 0) {
        iVar3 = Curve::get_point_left_mode((int)*(undefined8 *)(this + 0x9f0));
        local_dc = (float)Curve::get_point_left_tangent((int)*(undefined8 *)(this + 0x9f0));
        StringName::StringName((StringName *)&local_b8,"set_point_left_mode",false);
        pSVar2 = *(StringName **)(this + 0x9f0);
        Variant::Variant(local_88,param_1);
        Variant::Variant(local_70,(uint)(iVar3 != 1));
        local_50 = (undefined1  [16])0x0;
        pVVar5 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_b8,(int)&local_a8);
        pVVar4 = pVVar5;
        do {
          pVVar1 = pVVar4 + -0x18;
          pVVar4 = pVVar4 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar4 != local_88);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b8,"set_point_left_mode",false);
        pSVar2 = *(StringName **)(this + 0x9f0);
        Variant::Variant(local_88,param_1);
        Variant::Variant(local_70,iVar3);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_b8,(int)&local_a8)
        ;
        do {
          pVVar4 = pVVar5 + -0x18;
          pVVar5 = pVVar5 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar5 != local_88);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        pcVar6 = "set_point_left_tangent";
      }
      else {
        iVar3 = Curve::get_point_right_mode((int)*(undefined8 *)(this + 0x9f0));
        local_dc = (float)Curve::get_point_right_tangent((int)*(undefined8 *)(this + 0x9f0));
        StringName::StringName((StringName *)&local_b8,"set_point_right_mode",false);
        pSVar2 = *(StringName **)(this + 0x9f0);
        Variant::Variant(local_88,param_1);
        Variant::Variant(local_70,(uint)(iVar3 != 1));
        local_50 = (undefined1  [16])0x0;
        pVVar5 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_b8,(int)&local_a8);
        pVVar4 = pVVar5;
        do {
          pVVar1 = pVVar4 + -0x18;
          pVVar4 = pVVar4 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar4 != local_88);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b8,"set_point_right_mode",false);
        pSVar2 = *(StringName **)(this + 0x9f0);
        Variant::Variant(local_88,param_1);
        Variant::Variant(local_70,iVar3);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_b8,(int)&local_a8)
        ;
        do {
          pVVar4 = pVVar5 + -0x18;
          pVVar5 = pVVar5 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar5 != local_88);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        pcVar6 = "set_point_right_tangent";
      }
      StringName::StringName((StringName *)&local_b8,pcVar6,false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9f0),(StringName *)&local_b8
                 ,param_1,local_dc);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        return;
      }
      goto LAB_00104f79;
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00104f79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::gui_input(Ref<InputEvent> const&) */

void __thiscall CurveEdit::gui_input(CurveEdit *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  CurveEdit *pCVar8;
  long in_FS_OFFSET;
  float fVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  double dVar13;
  float fVar14;
  float local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar7 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","editor/plugins/curve_editor_plugin.cpp",0x8f,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00105e28;
  }
  if (*(long *)(this + 0x9f0) != 0) {
    pOVar4 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_00105040:
      pOVar5 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
      if (pOVar5 == (Object *)0x0) {
        lVar7 = *(long *)param_1;
LAB_0010509e:
        pOVar6 = (Object *)
                 __dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
        if ((pOVar6 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
          local_58 = InputEventMouse::get_position();
          if ((*(int *)(this + 0xa38) == 0) || (*(long *)(this + 0x9f0) == 0)) {
            uVar3 = get_point_at(this,(Vector2 *)&local_58);
            *(undefined4 *)(this + 0xa04) = uVar3;
            uVar3 = get_tangent_at(this,(Vector2 *)&local_58);
            *(undefined4 *)(this + 0xa0c) = uVar3;
            CanvasItem::queue_redraw();
          }
          else if (*(int *)(this + 0xa00) != -1) {
            if (*(int *)(this + 0xa08) == -1) {
              local_48 = get_world_pos(this,(Vector2 *)&local_58);
              local_60 = CONCAT44((int)*(undefined8 *)(*(long *)(this + 0x9f0) + 0x26c),
                                  (int)*(undefined8 *)(*(long *)(this + 0x9f0) + 0x274));
              Vector2::clamp((Vector2 *)&local_48,(Vector2 *)&local_60);
              local_50._0_4_ = extraout_XMM0_Da;
              local_50._4_4_ = extraout_XMM0_Db;
              if ((this[0xa50] != (CurveEdit)0x0) ||
                 (cVar1 = InputEventWithModifiers::is_command_or_control_pressed(), cVar1 != '\0'))
              {
                fVar14 = *(float *)(*(long *)(this + 0x9f0) + 0x274);
                dVar13 = (double)Math::snapped((double)((float)local_50 - fVar14),
                                               (double)((*(float *)(*(long *)(this + 0x9f0) + 0x278)
                                                        - fVar14) / (float)*(int *)(this + 0xa54)));
                lVar7 = *(long *)(this + 0x9f0);
                local_50 = CONCAT44(local_50._4_4_,
                                    (float)((double)*(float *)(lVar7 + 0x274) + dVar13));
                dVar13 = (double)Math::snapped((double)(local_50._4_4_ - *(float *)(lVar7 + 0x26c)),
                                               (double)((*(float *)(lVar7 + 0x270) -
                                                        *(float *)(lVar7 + 0x26c)) /
                                                       (float)*(int *)(this + 0xa54)));
                local_50._4_4_ =
                     (float)((double)*(float *)(*(long *)(this + 0x9f0) + 0x26c) + dVar13);
              }
              cVar1 = InputEventWithModifiers::is_shift_pressed();
              if (cVar1 == '\0') {
                local_78 = (float)local_50;
              }
              else {
                uVar11 = get_view_pos(this,(Vector2 *)(this + 0xa3c));
                if (ABS((float)local_58 - (float)uVar11) <=
                    ABS(local_58._4_4_ - (float)((ulong)uVar11 >> 0x20))) {
                  local_78 = *(float *)(this + 0xa3c);
                }
                else {
                  local_50._4_4_ = *(float *)(this + 0xa40);
                  local_78 = (float)local_50;
                }
              }
              fVar9 = local_50._4_4_;
              local_50._0_4_ = local_78;
              cVar1 = InputEventWithModifiers::is_alt_pressed();
              iVar2 = *(int *)(this + 0xa00);
              fVar14 = local_78;
              if (cVar1 != '\0') {
                lVar7 = *(long *)(this + 0x9f0);
                if (iVar2 < 1) {
                  fVar14 = *(float *)(lVar7 + 0x274);
                }
                else {
                  fVar14 = (float)Curve::get_point_position((int)lVar7);
                  iVar2 = *(int *)(this + 0xa00);
                  lVar7 = *(long *)(this + 0x9f0);
                  fVar14 = (float)((double)fVar14 + _LC30);
                }
                if (iVar2 < *(int *)(lVar7 + 0x240) + -1) {
                  fVar10 = (float)Curve::get_point_position((int)lVar7);
                  fVar10 = (float)((double)fVar10 - _LC30);
                }
                else {
                  fVar10 = *(float *)(lVar7 + 0x278);
                }
                local_50._0_4_ = fVar14;
                if ((fVar14 <= local_78) &&
                   (local_50._0_4_ = fVar10, fVar14 = fVar10, local_78 <= fVar10)) {
                  local_50._0_4_ = local_78;
                  fVar14 = local_78;
                }
              }
              local_78 = fVar14;
              pCVar8 = this;
              iVar2 = get_view_pos(this,(Vector2 *)&local_50);
              fVar14 = (float)get_offset_without_collision
                                        (pCVar8,iVar2,local_78,
                                         extraout_XMM0_Da_00 <= (float)local_58);
              local_50 = CONCAT44(local_50._4_4_,fVar14);
              iVar2 = Curve::set_point_offset((int)*(undefined8 *)(this + 0x9f0),fVar14);
              *(int *)(this + 0xa04) = iVar2;
              if (iVar2 != *(int *)(this + 0xa00)) {
                *(int *)(this + 0xa00) = iVar2;
                CanvasItem::queue_redraw();
              }
              lVar7 = *(long *)(this + 0x9f0);
              fVar14 = *(float *)(lVar7 + 0x26c);
              if ((*(float *)(lVar7 + 0x26c) <= fVar9) &&
                 (fVar14 = *(float *)(lVar7 + 0x270), fVar9 <= *(float *)(lVar7 + 0x270))) {
                fVar14 = fVar9;
              }
              Curve::set_point_value((int)lVar7,fVar14);
            }
            else {
              uVar11 = Curve::get_point_position((int)*(long *)(this + 0x9f0));
              uVar12 = get_world_pos(this,(Vector2 *)&local_58);
              local_48 = CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar11 >> 0x20),
                                  (float)uVar12 - (float)uVar11);
              uVar11 = Vector2::normalized();
              dVar13 = (double)(float)uVar11;
              if ((float)uVar11 <= 0.0) {
                if (_LC108 <= dVar13) {
                  dVar13 = _LC108;
                }
              }
              else if (dVar13 <= _LC30) {
                dVar13 = _LC30;
              }
              *(int *)(this + 0xa0c) = *(int *)(this + 0xa08);
              fVar14 = (float)((double)(float)((ulong)uVar11 >> 0x20) / dVar13);
              if (*(int *)(this + 0xa08) == 0) {
                Curve::set_point_left_tangent((int)*(undefined8 *)(this + 0x9f0),fVar14);
                if ((*(int *)(this + 0xa00) != *(int *)(*(long *)(this + 0x9f0) + 0x240) + -1) &&
                   (iVar2 = Curve::get_point_right_mode((int)*(long *)(this + 0x9f0)), iVar2 != 1))
                {
                  uVar11 = *(undefined8 *)(this + 0x9f0);
                  cVar1 = InputEventWithModifiers::is_shift_pressed();
                  if (cVar1 != '\0') {
                    fVar14 = *(float *)(this + 0xa4c);
                  }
                  Curve::set_point_right_tangent((int)uVar11,fVar14);
                }
              }
              else {
                Curve::set_point_right_tangent((int)*(undefined8 *)(this + 0x9f0),fVar14);
                if ((*(int *)(this + 0xa00) != 0) &&
                   (iVar2 = Curve::get_point_left_mode((int)*(undefined8 *)(this + 0x9f0)),
                   iVar2 != 1)) {
                  uVar11 = *(undefined8 *)(this + 0x9f0);
                  cVar1 = InputEventWithModifiers::is_shift_pressed();
                  if (cVar1 != '\0') {
                    fVar14 = *(float *)(this + 0xa48);
                  }
                  Curve::set_point_left_tangent((int)uVar11,fVar14);
                }
              }
            }
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        if (pOVar5 != (Object *)0x0) {
LAB_00105265:
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      else {
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') {
          cVar1 = InputEvent::is_pressed();
          if (cVar1 != '\0') {
            local_58 = InputEventMouse::get_position();
            iVar2 = InputEventMouseButton::get_button_index();
            if ((iVar2 == 2) || (iVar2 = InputEventMouseButton::get_button_index(), iVar2 == 3)) {
              iVar2 = InputEventMouseButton::get_button_index();
              if ((iVar2 == 2) && (*(int *)(this + 0xa38) == 2)) {
                Curve::set_point_value((int)*(undefined8 *)(this + 0x9f0),*(float *)(this + 0xa40));
                Curve::set_point_offset((int)*(undefined8 *)(this + 0x9f0),*(float *)(this + 0xa3c))
                ;
                if (*(int *)(this + 0xa44) != *(int *)(this + 0xa00)) {
                  *(int *)(this + 0xa00) = *(int *)(this + 0xa44);
                  CanvasItem::queue_redraw();
                }
                uVar3 = get_point_at(this,(Vector2 *)&local_58);
                *(undefined4 *)(this + 0xa38) = 0;
                *(undefined4 *)(this + 0xa04) = uVar3;
              }
              else {
                iVar2 = get_tangent_at(this,(Vector2 *)&local_58);
                *(int *)(this + 0xa08) = iVar2;
                if (iVar2 == -1) {
                  iVar2 = get_point_at(this,(Vector2 *)&local_58);
                  if (iVar2 == -1) {
                    if (*(int *)(this + 0xa00) != -1) {
                      *(undefined4 *)(this + 0xa00) = 0xffffffff;
                      CanvasItem::queue_redraw();
                    }
                  }
                  else {
                    if (*(int *)(this + 0xa38) == 1) {
                      Curve::remove_point((int)*(undefined8 *)(this + 0x9f0));
                      if (*(int *)(this + 0xa00) != -1) {
                        *(undefined4 *)(this + 0xa00) = 0xffffffff;
                        CanvasItem::queue_redraw();
                      }
                    }
                    else {
                      remove_point(this,iVar2);
                    }
                    uVar3 = get_point_at(this,(Vector2 *)&local_58);
                    *(undefined4 *)(this + 0xa38) = 0;
                    *(undefined4 *)(this + 0xa04) = uVar3;
                  }
                }
                else {
                  toggle_linear(this,*(undefined4 *)(this + 0xa00),iVar2);
                }
              }
            }
            iVar2 = InputEventMouseButton::get_button_index();
            if (iVar2 == 1) {
              if (*(int *)(this + 0xa38) == 0) {
                iVar2 = get_tangent_at(this,(Vector2 *)&local_58);
                *(int *)(this + 0xa08) = iVar2;
                if ((iVar2 == -1) &&
                   (iVar2 = get_point_at(this,(Vector2 *)&local_58), iVar2 != *(int *)(this + 0xa00)
                   )) {
                  *(int *)(this + 0xa00) = iVar2;
                  CanvasItem::queue_redraw();
                }
                CanvasItem::queue_redraw();
                if (*(int *)(this + 0xa00) != -1) goto LAB_0010540e;
                if (*(int *)(this + 0xa38) == 0) {
                  local_48 = get_world_pos(this,(Vector2 *)&local_58);
                  local_60 = CONCAT44((int)*(undefined8 *)(*(long *)(this + 0x9f0) + 0x26c),
                                      (int)*(undefined8 *)(*(long *)(this + 0x9f0) + 0x274));
                  Vector2::clamp((Vector2 *)&local_48,(Vector2 *)&local_60);
                  local_50._0_4_ = extraout_XMM0_Da_01;
                  local_50._4_4_ = extraout_XMM0_Db_00;
                  if ((this[0xa50] != (CurveEdit)0x0) ||
                     (cVar1 = InputEventWithModifiers::is_command_or_control_pressed(),
                     fVar14 = (float)local_50, cVar1 != '\0')) {
                    fVar14 = *(float *)(*(long *)(this + 0x9f0) + 0x274);
                    dVar13 = (double)Math::snapped((double)((float)local_50 - fVar14),
                                                   (double)((*(float *)(*(long *)(this + 0x9f0) +
                                                                       0x278) - fVar14) /
                                                           (float)*(int *)(this + 0xa54)));
                    lVar7 = *(long *)(this + 0x9f0);
                    fVar14 = (float)((double)*(float *)(lVar7 + 0x274) + dVar13);
                    local_50 = CONCAT44(local_50._4_4_,fVar14);
                    dVar13 = (double)Math::snapped((double)(local_50._4_4_ -
                                                           *(float *)(lVar7 + 0x26c)),
                                                   (double)((*(float *)(lVar7 + 0x270) -
                                                            *(float *)(lVar7 + 0x26c)) /
                                                           (float)*(int *)(this + 0xa54)));
                    local_50._4_4_ =
                         (float)((double)*(float *)(*(long *)(this + 0x9f0) + 0x26c) + dVar13);
                  }
                  pCVar8 = this;
                  fVar9 = (float)get_view_pos(this,(Vector2 *)&local_50);
                  uVar3 = get_offset_without_collision
                                    (pCVar8,*(int *)(this + 0xa00),fVar14,fVar9 <= (float)local_58);
                  local_50 = CONCAT44(local_50._4_4_,uVar3);
                  iVar2 = Curve::add_point_no_update(local_50,*(undefined8 *)(this + 0x9f0),0,0);
                  if (iVar2 != *(int *)(this + 0xa00)) {
                    *(int *)(this + 0xa00) = iVar2;
                    CanvasItem::queue_redraw();
                  }
                  *(undefined4 *)(this + 0xa38) = 1;
                  *(undefined8 *)(this + 0xa3c) = local_50;
                }
              }
              else if (*(int *)(this + 0xa00) != -1) {
LAB_0010540e:
                *(undefined4 *)(this + 0xa38) = 2;
                uVar11 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
                iVar2 = *(int *)(this + 0xa00);
                *(undefined8 *)(this + 0xa3c) = uVar11;
                *(int *)(this + 0xa44) = iVar2;
                if (0 < iVar2) {
                  uVar3 = Curve::get_point_left_tangent((int)*(undefined8 *)(this + 0x9f0));
                  iVar2 = *(int *)(this + 0xa00);
                  *(undefined4 *)(this + 0xa48) = uVar3;
                }
                if (iVar2 < *(int *)(*(long *)(this + 0x9f0) + 0x240) + -1) {
                  uVar3 = Curve::get_point_right_tangent((int)*(long *)(this + 0x9f0));
                  *(undefined4 *)(this + 0xa4c) = uVar3;
                }
              }
            }
          }
          iVar2 = InputEventMouseButton::get_button_index();
          if ((iVar2 == 1) && (cVar1 = InputEvent::is_pressed(), cVar1 == '\0')) {
            if (*(int *)(this + 0xa08) == -1) {
              if (*(int *)(this + 0xa38) == 2) {
                local_48 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
                set_point_position(this,*(int *)(this + 0xa00),(Vector2 *)&local_48);
                *(undefined4 *)(this + 0xa38) = 0;
              }
              else if (*(int *)(this + 0xa38) == 1) {
                local_48 = Curve::get_point_position((int)*(undefined8 *)(this + 0x9f0));
                Curve::remove_point((int)*(undefined8 *)(this + 0x9f0));
                add_point(this,(Vector2 *)&local_48);
                goto LAB_00105602;
              }
            }
            else {
              iVar2 = (int)*(long *)(this + 0x9f0);
              if (*(int *)(this + 0xa00) == 0) {
                fVar14 = (float)Curve::get_point_right_tangent(iVar2);
                set_point_right_tangent(this,*(int *)(this + 0xa00),fVar14);
              }
              else if (*(int *)(this + 0xa00) == *(int *)(*(long *)(this + 0x9f0) + 0x240) + -1) {
                fVar14 = (float)Curve::get_point_left_tangent(iVar2);
                set_point_left_tangent(this,*(int *)(this + 0xa00),fVar14);
              }
              else {
                fVar14 = (float)Curve::get_point_right_tangent(iVar2);
                fVar9 = (float)Curve::get_point_left_tangent((int)*(undefined8 *)(this + 0x9f0));
                set_point_tangents(this,*(int *)(this + 0xa00),fVar9,fVar14);
              }
LAB_00105602:
              *(undefined4 *)(this + 0xa38) = 0;
            }
            CanvasItem::queue_redraw();
          }
          lVar7 = *(long *)param_1;
          if (lVar7 != 0) goto LAB_0010509e;
          goto LAB_00105265;
        }
        lVar7 = *(long *)param_1;
        if (lVar7 != 0) {
          pOVar5 = (Object *)0x0;
          goto LAB_0010509e;
        }
      }
      if (pOVar4 == (Object *)0x0) goto LAB_00105282;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        lVar7 = *(long *)param_1;
        pOVar4 = (Object *)0x0;
        if (lVar7 == 0) goto LAB_00105282;
        goto LAB_00105040;
      }
      cVar1 = InputEvent::is_pressed();
      if ((cVar1 != '\0') && (iVar2 = InputEventKey::get_keycode(), iVar2 == 0x400008)) {
        if (*(int *)(this + 0xa08) == -1) {
          if (*(int *)(this + 0xa00) != -1) {
            if (*(int *)(this + 0xa38) == 1) {
              Curve::remove_point((int)*(undefined8 *)(this + 0x9f0));
              if (*(int *)(this + 0xa00) != -1) {
                *(undefined4 *)(this + 0xa00) = 0xffffffff;
                CanvasItem::queue_redraw();
              }
            }
            else {
              remove_point(this,*(int *)(this + 0xa00));
            }
            *(undefined4 *)(this + 0xa38) = 0;
            *(undefined4 *)(this + 0xa04) = 0xffffffff;
            *(undefined4 *)(this + 0xa0c) = 0xffffffff;
          }
        }
        else {
          toggle_linear(this);
        }
        Control::accept_event();
      }
      iVar2 = InputEventKey::get_keycode();
      if ((iVar2 == 0x400015) || (iVar2 = InputEventKey::get_keycode(), iVar2 == 0x400018)) {
        CanvasItem::queue_redraw();
        lVar7 = *(long *)param_1;
      }
      else {
        lVar7 = *(long *)param_1;
      }
      if (lVar7 != 0) goto LAB_00105040;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_00105e28;
    }
  }
LAB_00105282:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEditor::CurveEditor() */

void __thiscall CurveEditor::CurveEditor(CurveEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  undefined8 uVar3;
  Vector2 *pVVar4;
  int iVar5;
  bool bVar6;
  FlowContainer *this_00;
  Button *this_01;
  CallableCustom *this_02;
  VSeparator *this_03;
  EditorSpinSlider *this_04;
  MenuButton *this_05;
  long *plVar7;
  CurveEdit *this_06;
  Control *this_07;
  long in_FS_OFFSET;
  double dVar8;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined ***)this = &PTR__initialize_classv_001158d0;
  uVar3 = _LC117;
  this[0xa0c] = (CurveEditor)0x1;
  *(undefined8 *)(this + 0xa10) = uVar3;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  this_00 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_00,false);
  this_00[0xa24] = (FlowContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00115ef0;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xa18) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa18);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Toggle Grid Snap";
  local_68 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa18),0));
  Node::add_child(this_00,*(undefined8 *)(this + 0xa18),0,0);
  plVar7 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_02 = &PTR_hash_00116980;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _set_snap_enabled;
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined **)(this_02 + 0x20) = &_LC38;
  *(CurveEditor **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "CurveEditor::_set_snap_enabled";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_03);
  postinitialize_handler((Object *)this_03);
  Node::add_child(this_00,this_03,0,0);
  this_04 = (EditorSpinSlider *)operator_new(0xa70,"");
  EditorSpinSlider::EditorSpinSlider(this_04);
  postinitialize_handler((Object *)this_04);
  dVar8 = _LC120;
  *(EditorSpinSlider **)(this + 0xa20) = this_04;
  Range::set_min(dVar8);
  Range::set_max(_LC121);
  Range::set_value(_LC122);
  pVVar4 = *(Vector2 **)(this + 0xa20);
  local_48 = (float)EditorScale::get_scale();
  local_48 = local_48 * __LC123;
  local_44 = 0.0;
  Control::set_custom_minimum_size(pVVar4);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa20),0,0);
  plVar7 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<CurveEditor,int>
            ((CurveEditor *)&local_58,(char *)this,(_func_void_int *)"&CurveEditor::_set_snap_count"
            );
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_05 = (MenuButton *)operator_new(0xc68,"");
  local_58 = (char *)0x0;
  MenuButton::MenuButton(this_05,(String *)&local_58);
  postinitialize_handler((Object *)this_05);
  *(MenuButton **)(this + 0xa28) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa28);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Presets";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0xa28),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa28),10);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa28),0,0);
  plVar7 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar7 + 0x108);
  create_custom_callable_function_pointer<CurveEditor,int>
            ((CurveEditor *)&local_58,(char *)this,
             (_func_void_int *)"&CurveEditor::_on_preset_item_selected");
  (*pcVar2)(plVar7,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_06 = (CurveEdit *)operator_new(0xa58,"");
  CurveEdit::CurveEdit(this_06);
  postinitialize_handler((Object *)this_06);
  *(CurveEdit **)(this + 0xa30) = this_06;
  Node::add_child(this,this_06,0,0);
  this_07 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_07);
  postinitialize_handler((Object *)this_07);
  local_44 = (float)*(int *)(this + 0xa14);
  local_48 = 0.0;
  Control::set_custom_minimum_size((Vector2 *)this_07);
  Node::add_child(this,this_07,0,0);
  Control::set_mouse_filter(this,0);
  bVar6 = (bool)BaseButton::is_pressed();
  CurveEdit::set_snap_enabled(*(CurveEdit **)(this + 0xa30),bVar6);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa20),0));
  dVar8 = (double)Range::get_value();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar5 = (int)dVar8;
    if (100 < (int)dVar8) {
      iVar5 = 100;
    }
    if (iVar5 < 2) {
      iVar5 = 2;
    }
    CurveEdit::set_snap_count(*(CurveEdit **)(this + 0xa30),iVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginCurve::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginCurve::parse_begin(EditorInspectorPluginCurve *this,Object *param_1)

{
  char cVar1;
  Object *pOVar2;
  CurveEditor *pCVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Curve::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_28 = pOVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
        pCVar3 = (CurveEditor *)operator_new(0xa38,"");
        CurveEditor::CurveEditor(pCVar3);
        postinitialize_handler((Object *)pCVar3);
        CurveEditor::set_curve(pCVar3,(Ref *)&local_28);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          EditorInspectorPlugin::add_custom_control((Control *)this);
          return;
        }
      }
      else {
        pCVar3 = (CurveEditor *)operator_new(0xa38,"");
        CurveEditor::CurveEditor(pCVar3);
        postinitialize_handler((Object *)pCVar3);
        CurveEditor::set_curve(pCVar3,(Ref *)&local_28);
        EditorInspectorPlugin::add_custom_control((Control *)this);
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar2,false);
              return;
            }
            goto LAB_001065fd;
          }
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      goto LAB_001065fd;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("parse_begin","editor/plugins/curve_editor_plugin.cpp",0x40a,
                     "Parameter \"curve\" is null.",0,0);
    return;
  }
LAB_001065fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditor::_notification(int) */

void __thiscall CurveEditor::_notification(CurveEditor *this,int param_1)

{
  Object *pOVar1;
  code *pcVar2;
  Ref *pRVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x28) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::update_minimum_size();
      return;
    }
  }
  else {
    if (param_1 == 0x2d) {
      iVar5 = *(int *)(this + 0xa10);
      fVar7 = (float)Control::get_theme_default_base_scale();
      fVar7 = roundf(fVar7 * (float)iVar5);
      pRVar3 = *(Ref **)(this + 0xa18);
      *(int *)(this + 0xa14) = (int)fVar7;
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_80);
      Button::set_button_icon(pRVar3);
      if (local_80 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_80);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)local_80 + 0x140))(local_80);
            Memory::free_static(local_80,false);
          }
        }
      }
      uVar6 = MenuButton::get_popup();
      PopupMenu::clear(SUB81(uVar6,0));
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Constant");
      TTR((String *)&local_80,(String *)&local_90);
      if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_98,(StringName *)&local_80,0,0);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar1 = local_98;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))();
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Linear");
      TTR((String *)&local_80,(String *)&local_90);
      if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_98,(StringName *)&local_80,1,0);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar1 = local_98;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))();
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Ease In");
      TTR((String *)&local_80,(String *)&local_90);
      if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_98,(StringName *)&local_80,2,0);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar1 = local_98;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))();
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Ease Out");
      TTR((String *)&local_80,(String *)&local_90);
      if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#5}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_98,(StringName *)&local_80,3,0);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar1 = local_98;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))();
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Smoothstep");
      TTR((String *)&local_80,(String *)&local_90);
      if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#6}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_98,(StringName *)&local_80,4,0);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)local_98 + 0x140))(local_98);
            Memory::free_static(local_98,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    else if ((param_1 == 0xd) &&
            (pOVar1 = *(Object **)(*(long *)(this + 0xa30) + 0x9f0), pOVar1 != (Object *)0x0)) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') {
        uVar6 = *(undefined8 *)(this + 0xa18);
        pcVar2 = *(code **)(*(long *)pOVar1 + 0xb8);
        Variant::Variant((Variant *)local_78,false);
        StringName::StringName((StringName *)&local_80,"_snap_enabled",false);
        (*pcVar2)((Variant *)local_58,pOVar1,(StringName *)&local_80,(Variant *)local_78);
        Variant::operator_cast_to_bool((Variant *)local_58);
        BaseButton::set_pressed(SUB81(uVar6,0));
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*(long *)pOVar1 + 0xb8);
        Variant::Variant((Variant *)local_78,10);
        StringName::StringName((StringName *)&local_80,"_snap_count",false);
        (*pcVar2)((Variant *)local_58,pOVar1,(StringName *)&local_80,(Variant *)local_78);
        dVar8 = Variant::operator_cast_to_double((Variant *)local_58);
        Range::set_value(dVar8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar1);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar1,false);
              return;
            }
            goto LAB_0010704d;
          }
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010704d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveEdit::_redraw() [clone .part.0] */

void __thiscall CurveEdit::_redraw(CurveEdit *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  bool bVar8;
  Color *pCVar9;
  Color *pCVar10;
  bool bVar11;
  Color *extraout_RDX;
  Color *extraout_RDX_00;
  int iVar12;
  CurveEdit *pCVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulong extraout_XMM1_Qa;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  Object *local_120;
  undefined8 local_118;
  undefined8 local_110;
  Object *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  Color local_b8 [16];
  Color local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  update_view_transform();
  Control::get_rect();
  local_58 = 0;
  uStack_50 = extraout_XMM1_Qa;
  if ((_redraw()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#1}::operator()()::sname), iVar15 != 0)) {
    _scs_create((char *)&_redraw()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#1}::operator()()::sname,&__dso_handle
                );
    __cxa_guard_release(&_redraw()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_108,(StringName *)this);
  CanvasItem::draw_style_box(this,(Rect2 *)&local_108);
  if (((local_108 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_108), cVar2 != '\0')) {
    (**(code **)(*(long *)local_108 + 0x140))(local_108);
    Memory::free_static(local_108,false);
  }
  CanvasItem::draw_set_transform_matrix((Transform2D *)this);
  local_58 = extraout_XMM1_Qa & 0xffffffff00000000;
  uVar21 = get_world_pos(this,(Vector2 *)&local_58);
  uVar6 = (undefined4)uVar21;
  uVar4 = (undefined4)((ulong)uVar21 >> 0x20);
  local_58 = extraout_XMM1_Qa & 0xffffffff;
  uVar21 = get_world_pos(this,(Vector2 *)&local_58);
  uVar20 = (undefined4)uVar21;
  uVar5 = (undefined4)((ulong)uVar21 >> 0x20);
  local_58 = __LC29;
  uStack_50 = _UNK_00116ea8;
  if ((_redraw()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#2}::operator()()::sname), iVar15 != 0)) {
    _scs_create((char *)&_redraw()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#2}::operator()()::sname,&__dso_handle
                );
    __cxa_guard_release(&_redraw()::{lambda()#2}::operator()()::sname);
  }
  local_68 = Control::get_theme_color
                       ((StringName *)this,
                        (StringName *)&_redraw()::{lambda()#2}::operator()()::sname);
  local_e8 = Color::operator*((Color *)local_68,(Color *)&local_58);
  local_58 = __LC144;
  uStack_50 = _UNK_00116eb8;
  if (_redraw()::{lambda()#3}::operator()()::sname == '\0') {
    iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#3}::operator()()::sname);
    if (iVar15 != 0) {
      _scs_create((char *)&_redraw()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_redraw()::{lambda()#3}::operator()()::sname);
    }
  }
  auVar26 = Control::get_theme_color
                      ((StringName *)this,
                       (StringName *)&_redraw()::{lambda()#3}::operator()()::sname);
  local_68 = auVar26;
  local_d8 = Color::operator*((Color *)local_68,(Color *)&local_58);
  local_100 = _LC145;
  uVar21 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_100);
  lVar14 = *(long *)(this + 0x9f0);
  fVar17 = *(float *)(lVar14 + 0x26c);
  fVar22 = (*(float *)(lVar14 + 0x270) - fVar17) / (float)((ulong)uVar21 >> 0x20);
  fVar23 = (*(float *)(lVar14 + 0x278) - *(float *)(lVar14 + 0x274)) / (float)uVar21;
  local_58 = CONCAT44(fVar17,uVar20);
  local_68._0_8_ = CONCAT44(fVar17,uVar6);
  bVar8 = SUB81(local_e8,0);
  CanvasItem::draw_line((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,bVar8);
  local_58 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x270),uVar6);
  local_68._0_8_ = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x270),uVar20);
  CanvasItem::draw_line((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,bVar8);
  local_68._0_8_ = CONCAT44(uVar4,*(undefined4 *)(*(long *)(this + 0x9f0) + 0x274));
  local_58 = CONCAT44(uVar5,*(undefined4 *)(*(long *)(this + 0x9f0) + 0x274));
  CanvasItem::draw_line((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,bVar8);
  iVar15 = 1;
  local_68._0_8_ = CONCAT44(uVar5,*(undefined4 *)(*(long *)(this + 0x9f0) + 0x278));
  local_58 = CONCAT44(uVar4,*(undefined4 *)(*(long *)(this + 0x9f0) + 0x278));
  CanvasItem::draw_line((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,bVar8);
  if (1 < (int)local_100) {
    do {
      fVar17 = (float)iVar15;
      iVar15 = iVar15 + 1;
      fVar17 = fVar17 * fVar23 + *(float *)(*(long *)(this + 0x9f0) + 0x274);
      local_68._0_8_ = CONCAT44(uVar4,fVar17);
      local_58 = CONCAT44(uVar5,fVar17);
      CanvasItem::draw_line
                ((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,SUB81(local_d8,0));
    } while (iVar15 < (int)local_100);
  }
  iVar15 = 1;
  if (1 < local_100._4_4_) {
    do {
      fVar17 = (float)iVar15;
      iVar15 = iVar15 + 1;
      fVar17 = fVar17 * fVar22 + *(float *)(*(long *)(this + 0x9f0) + 0x26c);
      local_58 = CONCAT44(fVar17,uVar20);
      local_68._0_8_ = CONCAT44(fVar17,uVar6);
      CanvasItem::draw_line
                ((Vector2 *)this,(Vector2 *)local_68,(Color *)&local_58,_LC34,SUB81(local_d8,0));
    } while (iVar15 < local_100._4_4_);
  }
  local_58 = 0x3f800000;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  CanvasItem::draw_set_transform_matrix((Transform2D *)this);
  if (_redraw()::{lambda()#4}::operator()()::sname == '\0') {
    iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#4}::operator()()::sname);
    if (iVar15 != 0) {
      _scs_create((char *)&_redraw()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_redraw()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_120,(StringName *)this);
  if (_redraw()::{lambda()#5}::operator()()::sname == '\0') {
    iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#5}::operator()()::sname);
    if (iVar15 != 0) {
      _scs_create((char *)&_redraw()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_redraw()::{lambda()#5}::operator()()::sname);
    }
  }
  uVar6 = Control::get_theme_font_size
                    ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
  fVar17 = (float)(**(code **)(*(long *)local_120 + 0x218))(local_120,uVar6);
  local_c8 = Control::get_theme_color
                       ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
  fVar18 = (float)EditorScale::get_scale();
  fVar18 = roundf(fVar18 + fVar18);
  iVar15 = (int)fVar18;
  iVar12 = (int)(StringName *)&local_108;
  if (-1 < (int)local_100) {
    iVar16 = 0;
    do {
      fVar18 = (float)iVar16;
      iVar16 = iVar16 + 1;
      fVar18 = fVar18 * fVar23 + *(float *)(*(long *)(this + 0x9f0) + 0x274);
      String::num((double)fVar18,iVar12);
      local_68._0_8_ = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x26c),fVar18);
      uVar21 = get_view_pos(this,(Vector2 *)local_68);
      local_58 = CONCAT44((fVar17 - (float)iVar15) + (float)((ulong)uVar21 >> 0x20),
                          (float)uVar21 + (float)iVar15);
      CanvasItem::draw_string();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    } while (iVar16 <= (int)local_100);
  }
  if (-1 < local_100) {
    iVar16 = 0;
    do {
      fVar23 = (float)iVar16;
      iVar16 = iVar16 + 1;
      fVar23 = fVar23 * fVar22 + *(float *)(*(long *)(this + 0x9f0) + 0x26c);
      String::num((double)fVar23,iVar12);
      local_68._0_8_ = CONCAT44(fVar23,*(undefined4 *)(*(long *)(this + 0x9f0) + 0x274));
      uVar21 = get_view_pos(this,(Vector2 *)local_68);
      local_58 = CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)-iVar15,
                          (float)uVar21 + (float)iVar15);
      CanvasItem::draw_string();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    } while (iVar16 <= local_100._4_4_);
  }
  iVar15 = 0;
  local_b8 = (Color  [16])
             Control::get_theme_color
                       ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
  uStack_50 = CONCAT44(__LC150,_UNK_00116ec8);
  local_58 = __LC146;
  local_68 = Control::get_theme_color
                       ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
  local_a8 = (Color  [16])Color::operator*((Color *)local_68,(Color *)&local_58);
  plot_curve_accurate(this,(float)*(int *)(this + 0x9d0),local_b8,local_a8);
  uVar21 = Input::get_singleton();
  cVar2 = Input::is_key_pressed(uVar21,0x400015);
  local_98 = Control::get_theme_color
                       ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
  lVar14 = *(long *)(this + 0x9f0);
  if (0 < *(int *)(lVar14 + 0x240)) {
    do {
      local_58 = Curve::get_point_position((int)lVar14);
      pCVar9 = (Color *)&local_58;
      pCVar13 = this;
      uVar21 = get_view_pos(this,(Vector2 *)&local_58);
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      if (*(int *)(this + 0xa00) != iVar15) {
        fVar23 = (float)*(int *)(this + 0xa24);
        local_58 = CONCAT44(fVar22 - fVar23,(float)uVar21 - fVar23);
        fVar23 = fVar23 + fVar23 + 0.0;
        uStack_50 = CONCAT44(fVar23,fVar23);
        CanvasItem::draw_rect((Rect2 *)pCVar13,pCVar9,SUB81(local_98,0),_LC34,true);
      }
      if ((*(int *)(this + 0xa04) == iVar15) && (*(int *)(this + 0xa0c) == -1)) {
        fVar23 = (float)EditorScale::get_scale();
        fVar23 = roundf(fVar23);
        iVar12 = *(int *)(this + 0xa28);
        fVar18 = (float)EditorScale::get_scale();
        fVar18 = roundf(fVar18 * __LC147);
        fVar18 = (float)iVar12 - fVar18;
        fVar24 = fVar18 + fVar18 + 0.0;
        local_58 = CONCAT44(fVar22 - fVar18,(float)uVar21 - fVar18);
        uStack_50 = CONCAT44(fVar24,fVar24);
        CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,SUB81(local_b8,0),fVar23,false);
      }
      lVar14 = *(long *)(this + 0x9f0);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(lVar14 + 0x240));
  }
  iVar15 = *(int *)(this + 0xa00);
  bVar8 = SUB81((Color *)&local_58,0);
  if (iVar15 < 0) {
LAB_00107abe:
    if (iVar15 != -1) {
LAB_001081a8:
      if (*(int *)(this + 0xa08) == -1) {
        lVar14 = *(long *)(this + 0x9f0);
LAB_00108728:
        uVar21 = Curve::get_point_position((int)lVar14);
        EditorScale::get_scale();
        local_110 = 0;
        local_c8._12_4_ = (float)((double)(float)local_c8._12_4_ * __LC155);
        String::parse_latin1((String *)&local_110,"(%.2f, %.2f)");
        vformat<float,float>((String *)&local_108,(float)uVar21,(float)((ulong)uVar21 >> 0x20));
        fVar22 = (float)EditorScale::get_scale();
        fVar22 = roundf(fVar22 + fVar22);
        fVar23 = (float)EditorScale::get_scale();
        local_58 = CONCAT44(fVar17 - fVar22,fVar23 * __LC154);
        CanvasItem::draw_string
                  (this,(StringName *)&local_120,(Color *)&local_58,(StringName *)&local_108,1,uVar6
                   ,local_c8,3,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
      else {
LAB_001081b5:
        fVar22 = (float)EditorScale::get_scale();
        local_c8._12_4_ = (float)((double)(float)local_c8._12_4_ * __LC155);
        if (*(int *)(this + 0xa08) == 0) {
          uVar19 = Curve::get_point_left_tangent((int)*(undefined8 *)(this + 0x9f0));
          fVar23 = (float)(uVar19 ^ _LC31);
        }
        else {
          fVar23 = (float)Curve::get_point_right_tangent((int)*(undefined8 *)(this + 0x9f0));
        }
        fVar23 = atanf(fVar23);
        fVar23 = fVar23 * __LC157;
        String::utf8((char *)&local_110,0x10a68d);
        String::num((double)fVar23,(int)(CowData<char32_t> *)&local_118);
        String::operator+((String *)&local_108,(String *)&local_118);
        fVar23 = (float)EditorScale::get_scale();
        fVar23 = roundf(fVar23 + fVar23);
        fVar18 = (float)EditorScale::get_scale();
        local_58 = CONCAT44(fVar17 - fVar23,fVar18 * __LC154);
        CanvasItem::draw_string
                  ((float)extraout_XMM1_Qa - fVar22 * __LC151,this,(StringName *)&local_120,
                   (Color *)&local_58,(StringName *)&local_108,1,uVar6,local_c8,3,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
    }
    CanvasItem::draw_set_transform_matrix((Transform2D *)this);
    uVar21 = Input::get_singleton();
    cVar3 = Input::is_key_pressed(uVar21);
    if (cVar3 != '\0') goto LAB_00108050;
  }
  else {
    local_f8 = Curve::get_point_position((int)lVar14);
    if (_redraw()::{lambda()#6}::operator()()::sname == '\0') {
      iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#6}::operator()()::sname);
      if (iVar15 != 0) {
        _scs_create((char *)&_redraw()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_redraw()::{lambda()#6}::operator()()::sname);
      }
    }
    local_88 = Control::get_theme_color
                         ((StringName *)this,
                          (StringName *)&_redraw()::{lambda()#6}::operator()()::sname);
    if ((*(int *)(this + 0xa38) == 0) ||
       (((*(float *)(this + 0xa3c) == (float)local_f8 &&
         (*(float *)(this + 0xa40) == local_f8._4_4_)) || (*(int *)(this + 0xa08) != -1)))) {
      if (_redraw()::{lambda()#7}::operator()()::sname == '\0') {
        iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#7}::operator()()::sname);
        if (iVar15 != 0) {
          _scs_create((char *)&_redraw()::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#7}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_redraw()::{lambda()#7}::operator()()::sname);
        }
      }
      auVar26 = Control::get_theme_color
                          ((StringName *)this,
                           (StringName *)&_redraw()::{lambda()#7}::operator()()::sname);
      uVar21 = CONCAT44(auVar26._4_4_ * _LC149._4_4_,auVar26._0_4_ * (float)_LC149);
      uVar7 = auVar26._8_8_ & 0xffffffff00000000 | (ulong)(uint)(auVar26._8_4_ * __LC150);
      auVar26 = Control::get_theme_color
                          ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
      local_78 = CONCAT44(_LC149._4_4_ * auVar26._4_4_,(float)_LC149 * auVar26._0_4_);
      uStack_70 = auVar26._8_8_ & 0xffffffff00000000 | (ulong)(uint)(auVar26._8_4_ * __LC150);
      bVar11 = SUB81((Color *)local_68,0);
      if (*(int *)(this + 0xa00) == 0) {
        lVar14 = *(long *)(this + 0x9f0);
        iVar15 = 0;
      }
      else {
        local_f0 = get_tangent_view_pos(this,*(int *)(this + 0xa00),0);
        local_68._0_8_ = uVar21;
        local_68._8_8_ = uVar7;
        if (*(int *)(this + 0xa08) != 0) {
          local_68._0_8_ = local_78;
          local_68._8_8_ = uStack_70;
        }
        fVar22 = (float)EditorScale::get_scale();
        pCVar9 = (Color *)&local_f0;
        fVar22 = (float)_LC35 * fVar22;
        pCVar10 = (Color *)local_68;
        pCVar13 = this;
        local_58 = get_view_pos(this,(Vector2 *)&local_f8);
        CanvasItem::draw_line
                  ((Vector2 *)pCVar13,(Vector2 *)&local_58,extraout_RDX_00,fVar22,SUB81(pCVar10,0));
        iVar15 = Curve::get_point_left_mode((int)*(undefined8 *)(this + 0x9f0));
        if (iVar15 == 0) {
          CanvasItem::draw_circle
                    ((Vector2 *)this,(float)*(int *)(this + 0xa2c),pCVar9,bVar11,_LC34,true);
        }
        else {
          fVar23 = (float)*(int *)(this + 0xa2c);
          fVar22 = fVar23 + fVar23 + 0.0;
          uStack_50 = CONCAT44(fVar22,fVar22);
          local_58 = CONCAT44(local_f0._4_4_ - fVar23,(float)local_f0 - fVar23);
          CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,bVar11,_LC34,true);
        }
        auVar26._8_8_ = local_68._8_8_;
        auVar26._0_8_ = local_68._0_8_;
        if (*(int *)(this + 0xa0c) == 0) {
LAB_001089b6:
          fVar22 = (float)EditorScale::get_scale();
          fVar18 = roundf(fVar22);
          fVar22 = (float)local_f0;
          fVar23 = local_f0._4_4_;
          iVar15 = *(int *)(this + 0xa30);
          fVar24 = (float)EditorScale::get_scale();
          fVar24 = roundf(fVar24 * __LC147);
          fVar24 = (float)iVar15 - fVar24;
          fVar25 = fVar24 + fVar24 + 0.0;
          local_58 = CONCAT44(fVar23 - fVar24,fVar22 - fVar24);
          uStack_50 = CONCAT44(fVar25,fVar25);
          CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,SUB81(&local_78,0),fVar18,false);
          lVar14 = *(long *)(this + 0x9f0);
          iVar15 = *(int *)(this + 0xa00);
        }
        else {
          lVar14 = *(long *)(this + 0x9f0);
          iVar15 = *(int *)(this + 0xa00);
          if ((*(int *)(this + 0xa0c) == 1) && (local_68 = auVar26, cVar2 == '\0')) {
            iVar15 = Curve::get_point_left_mode((int)lVar14);
            if (iVar15 != 1) goto LAB_001089b6;
            lVar14 = *(long *)(this + 0x9f0);
            iVar15 = *(int *)(this + 0xa00);
          }
        }
      }
      if (*(int *)(lVar14 + 0x240) + -1 != iVar15) {
        local_f0 = get_tangent_view_pos(this,iVar15,1);
        local_68._0_8_ = uVar21;
        local_68._8_8_ = uVar7;
        if (*(int *)(this + 0xa08) != 1) {
          local_68._0_8_ = local_78;
          local_68._8_8_ = uStack_70;
        }
        fVar22 = (float)EditorScale::get_scale();
        fVar22 = (float)_LC35 * fVar22;
        pCVar9 = (Color *)local_68;
        pCVar13 = this;
        local_58 = get_view_pos(this,(Vector2 *)&local_f8);
        CanvasItem::draw_line
                  ((Vector2 *)pCVar13,(Vector2 *)&local_58,extraout_RDX,fVar22,SUB81(pCVar9,0));
        iVar15 = Curve::get_point_right_mode((int)*(undefined8 *)(this + 0x9f0));
        if (iVar15 == 0) {
          CanvasItem::draw_circle
                    ((Vector2 *)this,(float)*(int *)(this + 0xa2c),(Color *)&local_f0,bVar11,_LC34,
                     true);
        }
        else {
          fVar23 = (float)*(int *)(this + 0xa2c);
          fVar22 = fVar23 + fVar23 + 0.0;
          uStack_50 = CONCAT44(fVar22,fVar22);
          local_58 = CONCAT44(local_f0._4_4_ - fVar23,(float)local_f0 - fVar23);
          CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,bVar11,_LC34,true);
        }
        auVar1._8_8_ = local_68._8_8_;
        auVar1._0_8_ = local_68._0_8_;
        if (*(int *)(this + 0xa0c) == 1) {
LAB_00108645:
          fVar22 = (float)EditorScale::get_scale();
          fVar18 = roundf(fVar22);
          fVar22 = (float)local_f0;
          fVar23 = local_f0._4_4_;
          iVar15 = *(int *)(this + 0xa30);
          fVar24 = (float)EditorScale::get_scale();
          fVar24 = roundf(fVar24 * __LC147);
          fVar24 = (float)iVar15 - fVar24;
          fVar25 = fVar24 + fVar24 + 0.0;
          local_58 = CONCAT44(fVar23 - fVar24,fVar22 - fVar24);
          uStack_50 = CONCAT44(fVar25,fVar25);
          CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_58,SUB81(&local_78,0),fVar18,false);
        }
        else if ((*(int *)(this + 0xa0c) == 0) && (local_68 = auVar1, cVar2 == '\0')) {
          iVar15 = Curve::get_point_right_mode((int)*(undefined8 *)(this + 0x9f0));
          if (iVar15 != 1) goto LAB_00108645;
        }
      }
    }
    pCVar13 = this;
    uVar21 = get_view_pos(this,(Vector2 *)&local_f8);
    fVar23 = (float)*(int *)(this + 0xa24);
    fVar22 = fVar23 + fVar23 + 0.0;
    uStack_50 = CONCAT44(fVar22,fVar22);
    local_58 = CONCAT44((float)((ulong)uVar21 >> 0x20) - fVar23,(float)uVar21 - fVar23);
    CanvasItem::draw_rect((Rect2 *)pCVar13,(Color *)&local_58,SUB81(local_88,0),_LC34,true);
    iVar15 = *(int *)(this + 0xa00);
    if (iVar15 < 1) goto LAB_00107abe;
    lVar14 = *(long *)(this + 0x9f0);
    if (*(int *)(lVar14 + 0x240) + -1 <= iVar15) goto LAB_001081a8;
    if (*(int *)(this + 0xa08) != -1) goto LAB_001081b5;
    if ((*(int *)(this + 0xa0c) == -1) || (cVar2 != '\0')) goto LAB_00108728;
    EditorScale::get_scale();
    local_110 = 0;
    local_c8._12_4_ = (float)((double)(float)local_c8._12_4_ * __LC152);
    String::parse_latin1((String *)&local_110,"");
    local_118 = 0;
    String::parse_latin1((String *)&local_118,"Hold Shift to edit tangents individually");
    TTR((String *)&local_108,(String *)&local_118);
    fVar22 = (float)EditorScale::get_scale();
    fVar22 = roundf(fVar22 + fVar22);
    fVar23 = (float)EditorScale::get_scale();
    local_58 = CONCAT44(fVar17 - fVar22,fVar23 * __LC154);
    CanvasItem::draw_multiline_string
              (this,(StringName *)&local_120,(Color *)&local_58,(StringName *)&local_108,1,uVar6,
               0xffffffffffffffff,local_c8,3,3,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CanvasItem::draw_set_transform_matrix((Transform2D *)this);
    uVar21 = Input::get_singleton();
    cVar3 = Input::is_key_pressed(uVar21);
    if (cVar3 == '\0') goto LAB_00107c98;
LAB_00108050:
    if ((*(int *)(this + 0xa38) == 0) || (*(int *)(this + 0xa08) != -1)) goto LAB_00107c98;
    iVar15 = *(int *)(this + 0xa00);
    lVar14 = *(long *)(this + 0x9f0);
    if (iVar15 < 1) {
      uVar6 = *(undefined4 *)(lVar14 + 0x274);
    }
    else {
      uVar6 = Curve::get_point_position((int)lVar14);
      iVar15 = *(int *)(this + 0xa00);
      lVar14 = *(long *)(this + 0x9f0);
    }
    if (iVar15 < *(int *)(lVar14 + 0x240) + -1) {
      uVar20 = Curve::get_point_position((int)lVar14);
      lVar14 = *(long *)(this + 0x9f0);
    }
    else {
      uVar20 = *(undefined4 *)(lVar14 + 0x278);
    }
    local_58 = local_98._0_8_;
    uStack_50 = CONCAT44(0x3f19999a,local_98._8_4_);
    local_68._0_8_ = CONCAT44(*(undefined4 *)(lVar14 + 0x270),uVar6);
    local_78 = CONCAT44(*(undefined4 *)(lVar14 + 0x26c),uVar6);
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_78,(Color *)local_68,_LC34,bVar8);
    local_58 = local_98._0_8_;
    uStack_50 = CONCAT44(0x3f19999a,local_98._8_4_);
    local_68._0_8_ = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x270),uVar20);
    local_78 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x26c),uVar20);
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_78,(Color *)local_68,_LC34,bVar8);
  }
  if (((cVar2 != '\0') && (*(int *)(this + 0xa38) != 0)) && (*(int *)(this + 0xa08) == -1)) {
    if (_redraw()::{lambda()#8}::operator()()::sname == '\0') {
      iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#8}::operator()()::sname);
      if (iVar15 != 0) {
        _scs_create((char *)&_redraw()::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_redraw()::{lambda()#8}::operator()()::sname);
      }
    }
    auVar26 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_redraw()::{lambda()#8}::operator()()::sname);
    local_58 = CONCAT44(auVar26._4_4_ * _LC159._4_4_,auVar26._0_4_ * (float)_LC159);
    uStack_50 = auVar26._8_8_ & 0xffffffff00000000 | (ulong)(uint)(auVar26._8_4_ * (float)_LC159);
    local_68._0_8_ =
         CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x270),*(undefined4 *)(this + 0xa3c));
    local_78 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x9f0) + 0x26c),
                        *(undefined4 *)(this + 0xa3c));
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_78,(Color *)local_68,_LC34,bVar8);
    if (_redraw()::{lambda()#9}::operator()()::sname == '\0') {
      iVar15 = __cxa_guard_acquire(&_redraw()::{lambda()#9}::operator()()::sname);
      if (iVar15 != 0) {
        _scs_create((char *)&_redraw()::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_redraw()::{lambda()#9}::operator()()::sname);
      }
    }
    auVar26 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_redraw()::{lambda()#9}::operator()()::sname);
    local_58 = CONCAT44(_LC159._4_4_ * auVar26._4_4_,(float)_LC159 * auVar26._0_4_);
    uStack_50 = auVar26._8_8_ & 0xffffffff00000000 | (ulong)(uint)(auVar26._8_4_ * (float)_LC159);
    local_68._0_8_ =
         CONCAT44(*(undefined4 *)(this + 0xa40),*(undefined4 *)(*(long *)(this + 0x9f0) + 0x278));
    local_78 = CONCAT44(*(undefined4 *)(this + 0xa40),
                        *(undefined4 *)(*(long *)(this + 0x9f0) + 0x274));
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_78,(Color *)local_68,_LC34,bVar8);
  }
LAB_00107c98:
  if (local_120 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_120);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_120 + 0x140))(local_120);
        Memory::free_static(local_120,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CurveEdit::_redraw() */

void __thiscall CurveEdit::_redraw(CurveEdit *this)

{
  if (*(long *)(this + 0x9f0) != 0) {
    _redraw(this);
    return;
  }
  return;
}



/* CurveEdit::_notification(int) */

void __thiscall CurveEdit::_notification(CurveEdit *this,int param_1)

{
  int iVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2a) {
    if ((*(int *)(this + 0xa04) != -1) || (*(int *)(this + 0xa0c) != -1)) {
      *(undefined4 *)(this + 0xa04) = 0xffffffff;
      *(undefined4 *)(this + 0xa0c) = 0xffffffff;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_00108f7d;
    }
  }
  else if (param_1 < 0x2b) {
    if (param_1 == 0x1e) {
      if (*(long *)(this + 0x9f0) != 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _redraw(this);
          return;
        }
        goto LAB_00108f7d;
      }
    }
    else if (param_1 == 0x1f) {
      cVar2 = CanvasItem::is_visible();
      if (cVar2 == '\0') {
        *(undefined4 *)(this + 0xa38) = 0;
      }
    }
  }
  else if (param_1 == 0x2d) {
    local_50 = 0;
    local_48 = "interface/touchscreen/scale_gizmo_handles";
    local_40 = 0x29;
    String::parse_latin1((StrRange *)&local_50);
    _EDITOR_GET((String *)local_38);
    fVar3 = Variant::operator_cast_to_float((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    iVar1 = *(int *)(this + 0xa10);
    fVar4 = (float)Control::get_theme_default_base_scale();
    fVar4 = roundf(fVar4 * (float)iVar1 * fVar3);
    iVar1 = *(int *)(this + 0xa14);
    *(int *)(this + 0xa24) = (int)fVar4;
    fVar4 = (float)Control::get_theme_default_base_scale();
    fVar4 = roundf(fVar4 * (float)iVar1 * fVar3);
    iVar1 = *(int *)(this + 0xa18);
    *(int *)(this + 0xa28) = (int)fVar4;
    fVar4 = (float)Control::get_theme_default_base_scale();
    fVar4 = roundf(fVar4 * (float)iVar1 * fVar3);
    iVar1 = *(int *)(this + 0xa1c);
    *(int *)(this + 0xa2c) = (int)fVar4;
    fVar4 = (float)Control::get_theme_default_base_scale();
    fVar3 = roundf(fVar4 * (float)iVar1 * fVar3);
    iVar1 = *(int *)(this + 0xa20);
    *(int *)(this + 0xa30) = (int)fVar3;
    fVar3 = (float)Control::get_theme_default_base_scale();
    fVar3 = roundf(fVar3 * (float)iVar1);
    *(int *)(this + 0xa34) = (int)fVar3;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108f7d:
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



/* CurveEdit::_bind_methods() */

void CurveEdit::_bind_methods(void)

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
  char *local_58;
  undefined8 local_50;
  char **local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "index";
  local_48 = &local_58;
  local_50 = 0;
  D_METHODP((char *)local_78,(char ***)"set_selected_index",(uint)&local_48);
  local_40 = (undefined1  [16])0x0;
  local_48 = (char **)0x0;
  pMVar4 = create_method_bind<CurveEdit,int>(set_selected_index);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Vector2i>::push_back(Vector2i) [clone .isra.0] */

void __thiscall Vector<Vector2i>::push_back(Vector<Vector2i> *this,undefined8 param_2)

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
  iVar1 = CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* WARNING: Removing unreachable block (ram,0x0010947d) */
/* WARNING: Removing unreachable block (ram,0x00109b8f) */
/* WARNING: Removing unreachable block (ram,0x00109a16) */
/* WARNING: Removing unreachable block (ram,0x00109ba1) */
/* CurvePreviewGenerator::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

CurvePreviewGenerator * __thiscall
CurvePreviewGenerator::generate
          (CurvePreviewGenerator *this,Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  long *plVar1;
  float fVar2;
  Object *pOVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Object *pOVar10;
  Resource *this_00;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 extraout_var;
  undefined4 uVar15;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 *puVar14;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 uVar20;
  ulong uVar19;
  Resource *pRVar21;
  uint uVar22;
  uint uVar23;
  Image *pIVar24;
  long in_FS_OFFSET;
  byte bVar25;
  float fVar26;
  float fVar27;
  uint local_d8;
  uint local_d4;
  Resource *local_90;
  Object *local_88;
  undefined8 *local_80 [2];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_2 == 0) ||
      (pOVar10 = (Object *)__dynamic_cast(*(long *)param_2,&Object::typeinfo,&Curve::typeinfo,0),
      pOVar10 == (Object *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    *(undefined8 *)this = 0;
    goto LAB_001093c7;
  }
  uVar20 = 0;
  local_90 = (Resource *)0x0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar21 = this_00;
  for (lVar13 = 0x4d; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined8 *)pRVar21 = 0;
    pRVar21 = pRVar21 + (ulong)bVar25 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Memory::free_static;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  uVar15 = extraout_var;
  if (cVar5 != '\0') {
    pIVar24 = (Image *)0x0;
    if ((this_00 != (Resource *)0x0) &&
       (cVar5 = RefCounted::reference(), pIVar24 = (Image *)this_00, local_90 = this_00,
       cVar5 == '\0')) {
      local_90 = (Resource *)0x0;
    }
    cVar5 = RefCounted::unreference();
    uVar15 = extraout_var_00;
    if (cVar5 != '\0') {
      memdelete<Image>(pIVar24);
      uVar15 = extraout_var_01;
    }
  }
  Image::initialize_data
            (local_90,CONCAT44(uVar20,(int)*(float *)param_3),
             CONCAT44(uVar15,(int)*(float *)(param_3 + 4)),0,5);
  EditorInterface::get_editor_theme();
  local_58 = (**(code **)(*(long *)local_88 + 0x1e8))
                       (local_88,SceneStringNames::singleton + 0xb0,EditorStringNames::singleton);
  if (local_88 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_88;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_88);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  uVar22 = 0;
  fVar26 = (float)Curve::sample_baked(*(float *)(pOVar10 + 0x274));
  fVar27 = *(float *)(pOVar10 + 0x26c);
  fVar2 = *(float *)(pOVar10 + 0x270);
  iVar6 = Image::get_height();
  iVar7 = Image::get_height();
  iVar8 = Image::get_height();
  fVar27 = (float)iVar7 - (float)iVar8 * ((fVar26 - fVar27) / (fVar2 - fVar27));
  if (0.0 <= fVar27) {
    if (fVar27 <= (float)(iVar6 + -1)) {
      uVar22 = (uint)fVar27;
    }
    else {
      uVar22 = (uint)(float)(iVar6 + -1);
    }
  }
  Image::set_pixel((int)local_90,0,(Color *)(ulong)uVar22);
  local_d8 = 1;
  iVar6 = Image::get_width();
  if (1 < iVar6) {
    do {
      iVar6 = Image::get_width();
      fVar26 = (float)Curve::sample_baked(((float)(int)local_d8 / (float)iVar6) *
                                          (*(float *)(pOVar10 + 0x278) - *(float *)(pOVar10 + 0x274)
                                          ) + *(float *)(pOVar10 + 0x274));
      fVar27 = *(float *)(pOVar10 + 0x26c);
      fVar2 = *(float *)(pOVar10 + 0x270);
      iVar6 = Image::get_height();
      iVar7 = Image::get_height();
      iVar8 = Image::get_height();
      local_d4 = 0;
      fVar27 = (float)iVar7 - (float)iVar8 * ((fVar26 - fVar27) / (fVar2 - fVar27));
      if (0.0 <= fVar27) {
        if ((float)(iVar6 + -1) < fVar27) {
          local_d4 = (uint)(float)(iVar6 + -1);
        }
        else {
          local_d4 = (uint)fVar27;
        }
      }
      local_68 = local_d8;
      local_70 = local_d8 - 1;
      local_64 = local_d4;
      local_80[0] = (undefined8 *)0x0;
      local_6c = uVar22;
      uVar11 = Vector2i::operator-((Vector2i *)&local_68,(Vector2i *)&local_70);
      iVar6 = (int)((ulong)uVar11 >> 0x20);
      if (iVar6 < 1) {
        iVar6 = -iVar6;
      }
      iVar7 = (int)uVar11;
      if (iVar7 < 1) {
        iVar7 = -iVar7;
      }
      local_60 = CONCAT44(iVar6,iVar7);
      uVar12 = Vector2i::operator*((Vector2i *)&local_60,2);
      iVar7 = (int)uVar12;
      iVar8 = (int)(uVar12 >> 0x20);
      lVar13 = Vector2i::operator-((Vector2i *)&local_68,(Vector2i *)&local_70);
      iVar18 = (int)((ulong)lVar13 >> 0x20);
      iVar6 = -(uint)(iVar18 != 0);
      if (iVar18 != 0 && -1 < lVar13) {
        iVar6 = 1;
      }
      iVar18 = -(uint)((int)lVar13 != 0);
      if (0 < (int)lVar13) {
        iVar18 = 1;
      }
      if (iVar8 < iVar7) {
        iVar9 = (int)(((uint)(uVar12 >> 0x1f) & 1) + iVar7) >> 1;
        uVar22 = local_70;
        uVar16 = local_6c;
        uVar23 = local_6c;
        if (local_70 != local_68) {
          do {
            Vector<Vector2i>::push_back((Vector<Vector2i> *)&local_88,CONCAT44(uVar16,uVar22));
            iVar9 = iVar9 - iVar8;
            if (iVar9 < 0) {
              uVar16 = uVar23 + iVar6;
              iVar9 = iVar9 + iVar7;
              uVar23 = uVar16;
            }
            uVar22 = uVar22 + iVar18;
          } while (local_68 != uVar22);
        }
      }
      else {
        uVar19 = (ulong)local_70;
        iVar9 = (int)(((uint)((ulong)((long)uVar12 >> 0x20) >> 0x1f) & 1) + iVar8) >> 1;
        if (local_64 != local_6c) {
          uVar12 = (ulong)local_70;
          uVar22 = local_6c;
          do {
            Vector<Vector2i>::push_back
                      ((Vector<Vector2i> *)&local_88,(ulong)uVar22 << 0x20 | uVar19);
            iVar9 = iVar9 - iVar7;
            if (iVar9 < 0) {
              uVar19 = (ulong)(uint)((int)uVar12 + iVar18);
              iVar9 = iVar9 + iVar8;
              uVar12 = uVar19;
            }
            uVar22 = uVar22 + iVar6;
          } while (uVar22 != local_64);
        }
      }
      Vector<Vector2i>::push_back((Vector<Vector2i> *)&local_88);
      CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)local_80);
      puVar17 = local_80[0];
      CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)local_80);
      puVar4 = local_80[0];
      if (local_80[0] == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) goto LAB_001098c0;
      }
      else {
        puVar14 = local_80[0] + local_80[0][-1];
        if (puVar17 != puVar14) {
LAB_001098c0:
          do {
            local_60 = *puVar17;
            puVar17 = puVar17 + 1;
            Image::set_pixelv((Vector2i *)local_90,(Color *)&local_60);
          } while (puVar14 != puVar17);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0010990a;
        }
        LOCK();
        plVar1 = puVar4 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_80[0] + -2,false);
        }
      }
LAB_0010990a:
      local_d8 = local_d8 + 1;
      iVar6 = Image::get_width();
      uVar22 = local_d4;
    } while ((int)local_d8 < iVar6);
  }
  ImageTexture::create_from_image((Vector<Vector2i> *)&local_88);
  *(undefined8 *)this = 0;
  if (local_88 != (Object *)0x0) {
    lVar13 = __dynamic_cast(local_88,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar13 != 0) {
      *(long *)this = lVar13;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)this = 0;
      }
      if (local_88 == (Object *)0x0) goto LAB_0010999b;
    }
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_88);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
    }
  }
LAB_0010999b:
  if (local_90 != (Resource *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      memdelete<Image>((Image *)local_90);
    }
  }
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar10);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
LAB_001093c7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorResourcePreviewGenerator::abort() */

void EditorResourcePreviewGenerator::abort(void)

{
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* CurveEdit::is_class_ptr(void*) const */

uint __thiscall CurveEdit::is_class_ptr(CurveEdit *this,void *param_1)

{
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginCurve::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginCurve::is_class_ptr(EditorInspectorPluginCurve *this,void *param_1)

{
  return (uint)CONCAT71(0x116b,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginCurve::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginCurve::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginCurve::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginCurve::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginCurve::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginCurve::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginCurve::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginCurve::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginCurve::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginCurve::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginCurve::_notificationv(int, bool) */

void EditorInspectorPluginCurve::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CurveEditorPlugin::is_class_ptr(void*) const */

uint __thiscall CurveEditorPlugin::is_class_ptr(CurveEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CurveEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 CurveEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurveEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 CurveEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurveEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 CurveEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CurveEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CurveEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurvePreviewGenerator::is_class_ptr(void*) const */

uint __thiscall CurvePreviewGenerator::is_class_ptr(CurvePreviewGenerator *this,void *param_1)

{
  return (uint)CONCAT71(0x116b,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CurvePreviewGenerator::_getv(StringName const&, Variant&) const */

undefined8 CurvePreviewGenerator::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurvePreviewGenerator::_setv(StringName const&, Variant const&) */

undefined8 CurvePreviewGenerator::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurvePreviewGenerator::_validate_propertyv(PropertyInfo&) const */

void CurvePreviewGenerator::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CurvePreviewGenerator::_property_can_revertv(StringName const&) const */

undefined8 CurvePreviewGenerator::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CurvePreviewGenerator::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CurvePreviewGenerator::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CurvePreviewGenerator::_notificationv(int, bool) */

void CurvePreviewGenerator::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<CurveEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<CurveEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<CurveEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEdit,void> *this)

{
  return;
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



/* CallableCustomMethodPointer<CurveEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<CurveEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CurveEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CurveEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEdit,void>::get_argument_count
          (CallableCustomMethodPointer<CurveEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CurveEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CurveEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CurveEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116aa0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116aa0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* CurveEdit::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CurveEdit::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CurveEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CurveEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CurveEdit::_property_can_revertv(StringName const&) const */

undefined8 CurveEdit::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CurveEditor::_property_can_revertv(StringName const&) const */

undefined8 CurveEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CurveEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void CurveEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011b010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115770;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115770;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CurveEdit::_bind_methods() [clone .cold] */

void CurveEdit::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<CurveEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::get_object
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this)

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
      goto LAB_0010a9dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a9dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a9dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CurveEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::get_object
          (CallableCustomMethodPointer<CurveEditor,void,int> *this)

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
      goto LAB_0010aadd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aadd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aadd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CurveEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CurveEdit,void>::get_object
          (CallableCustomMethodPointer<CurveEdit,void> *this)

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
      goto LAB_0010abdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010abdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010abdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HFlowContainer::is_class_ptr(void*) const */

uint HFlowContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x116c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CurveEditorPlugin::_notificationv(int, bool) */

void __thiscall CurveEditorPlugin::_notificationv(CurveEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011b018 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011b018 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* CurveEditor::is_class_ptr(void*) const */

ulong CurveEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x116c,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x116c,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* CurveEdit::_validate_propertyv(PropertyInfo&) const */

void CurveEdit::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b020 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HFlowContainer::_validate_propertyv(PropertyInfo&) const */

void HFlowContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b028 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* CurveEditor::_validate_propertyv(PropertyInfo&) const */

void CurveEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CurveEditor::_setv(StringName const&, Variant const&) */

undefined8 CurveEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* CurveEdit::_setv(StringName const&, Variant const&) */

undefined8 CurveEdit::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HFlowContainer::_setv(StringName const&, Variant const&) */

undefined8 HFlowContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b108) */
/* CurveEditor::_getv(StringName const&, Variant&) const */

undefined8 CurveEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b178) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b1e8) */
/* CurveEdit::_getv(StringName const&, Variant&) const */

undefined8 CurveEdit::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* CurveEdit::~CurveEdit() */

void __thiscall CurveEdit::~CurveEdit(CurveEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00116268;
  if (*(long *)(this + 0x9f0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9f0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* CurveEdit::~CurveEdit() */

void __thiscall CurveEdit::~CurveEdit(CurveEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00116268;
  if (*(long *)(this + 0x9f0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9f0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xa58);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b350;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b350:
  Control::~Control((Control *)this);
  return;
}



/* CurveEditor::~CurveEditor() */

void __thiscall CurveEditor::~CurveEditor(CurveEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b3b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b3b0:
  Control::~Control((Control *)this);
  return;
}



/* CurveEditor::~CurveEditor() */

void __thiscall CurveEditor::~CurveEditor(CurveEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b410;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b410:
  Control::~Control((Control *)this);
  operator_delete(this,0xa38);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b480;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b480:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* CurveEditorPlugin::get_plugin_name() const */

CurveEditorPlugin * __thiscall CurveEditorPlugin::get_plugin_name(CurveEditorPlugin *this)

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



/* HFlowContainer::_notificationv(int, bool) */

void __thiscall HFlowContainer::_notificationv(HFlowContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011b048 != Container::_notification) {
      FlowContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0011b048 == Container::_notification) {
    return;
  }
  FlowContainer::_notification(iVar1);
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



/* CurvePreviewGenerator::~CurvePreviewGenerator() */

void __thiscall CurvePreviewGenerator::~CurvePreviewGenerator(CurvePreviewGenerator *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b741;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b741;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b741;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b741;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010b741:
  *(undefined ***)this = &PTR__initialize_classv_00115770;
  Object::~Object((Object *)this);
  return;
}



/* CurvePreviewGenerator::~CurvePreviewGenerator() */

void __thiscall CurvePreviewGenerator::~CurvePreviewGenerator(CurvePreviewGenerator *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b811;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b811;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b811;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b811;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010b811:
  *(undefined ***)this = &PTR__initialize_classv_00115770;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
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
LAB_0010b873:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b873;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010b8de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010b8de:
  return &_get_class_namev()::_class_name_static;
}



/* CurveEditorPlugin::_get_class_namev() const */

undefined8 * CurveEditorPlugin::_get_class_namev(void)

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
LAB_0010b963:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b963;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CurveEditorPlugin");
      goto LAB_0010b9ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CurveEditorPlugin");
LAB_0010b9ce:
  return &_get_class_namev()::_class_name_static;
}



/* CurveEditor::_get_class_namev() const */

undefined8 * CurveEditor::_get_class_namev(void)

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
LAB_0010ba43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ba43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CurveEditor");
      goto LAB_0010baae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CurveEditor");
LAB_0010baae:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginCurve::_get_class_namev() const */

undefined8 * EditorInspectorPluginCurve::_get_class_namev(void)

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
LAB_0010bb33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bb33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginCurve")
      ;
      goto LAB_0010bb9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginCurve");
LAB_0010bb9e:
  return &_get_class_namev()::_class_name_static;
}



/* CurveEdit::_get_class_namev() const */

undefined8 * CurveEdit::_get_class_namev(void)

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
LAB_0010bc13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bc13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CurveEdit");
      goto LAB_0010bc7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CurveEdit");
LAB_0010bc7e:
  return &_get_class_namev()::_class_name_static;
}



/* CurvePreviewGenerator::_get_class_namev() const */

undefined8 * CurvePreviewGenerator::_get_class_namev(void)

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
LAB_0010bd03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bd03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CurvePreviewGenerator");
      goto LAB_0010bd6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CurvePreviewGenerator");
LAB_0010bd6e:
  return &_get_class_namev()::_class_name_static;
}



/* HFlowContainer::_get_class_namev() const */

undefined8 * HFlowContainer::_get_class_namev(void)

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
LAB_0010bdf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bdf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_0010be5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_0010be5e:
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* Callable create_custom_callable_function_pointer<CurveEdit>(CurveEdit*, char const*, void
   (CurveEdit::*)()) */

CurveEdit *
create_custom_callable_function_pointer<CurveEdit>
          (CurveEdit *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC38;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001168f0;
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



/* void EditorUndoRedoManager::add_undo_method<int, float>(Object*, StringName const&, int, float)
    */

void __thiscall
EditorUndoRedoManager::add_undo_method<int,float>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3,float param_4
          )

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_78,param_3);
  Variant::Variant(local_60,param_4);
  local_48 = 0;
  pVVar2 = (Variant *)&local_30;
  local_40 = (undefined1  [16])0x0;
  local_98 = local_78;
  pVStack_90 = local_60;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)&local_98);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<CurveEditor, int>(CurveEditor*, char const*,
   void (CurveEditor::*)(int)) */

CurveEditor *
create_custom_callable_function_pointer<CurveEditor,int>
          (CurveEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC38;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116a10;
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



/* void Ref<EditorInspectorPluginCurve>::instantiate<>() */

void __thiscall
Ref<EditorInspectorPluginCurve>::instantiate<>(Ref<EditorInspectorPluginCurve> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x218,"");
  pRVar3 = this_00;
  for (lVar2 = 0x43; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  StringName::StringName((StringName *)(this_00 + 0x188),"_can_handle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_parse_begin",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_parse_category",false);
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1d0),"_parse_group",false);
  this_00[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1e8),"_parse_property",false);
  this_00[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1f8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x200),"_parse_end",false);
  this_00[0x208] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x210) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_001165d0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_0010c705;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0010c705;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010c705:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorPlugin::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cb1a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010cb1a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* CurveEditorPlugin::~CurveEditorPlugin() */

void __thiscall CurveEditorPlugin::~CurveEditorPlugin(CurveEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* CurveEditorPlugin::~CurveEditorPlugin() */

void __thiscall CurveEditorPlugin::~CurveEditorPlugin(CurveEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* CurveEditor::_initialize_classv() */

void CurveEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0011b060 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_methods_0011b058 != Container::_bind_methods) {
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
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CurveEditor";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPluginCurve::_initialize_classv() */

void EditorInspectorPluginCurve::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Object");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"RefCounted");
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
        if ((code *)PTR__bind_methods_0011b060 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
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
      if ((code *)PTR__bind_methods_0011b068 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011b070 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginCurve";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010d7b0) */
/* String vformat<float, float>(String const&, float const, float const) */

String * vformat<float,float>(String *param_1,float param_2,float param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  bool *in_RSI;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_2);
  Variant::Variant(local_70,param_3);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,in_RSI);
  *(undefined8 *)param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* WARNING: Removing unreachable block (ram,0x0010d9a0) */
/* CurveEditor::_notificationv(int, bool) */

void __thiscall CurveEditor::_notificationv(CurveEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011b078 != Container::_notification) {
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
  if ((code *)PTR__notification_0011b078 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010daa0) */
/* CurveEdit::_notificationv(int, bool) */

void __thiscall CurveEdit::_notificationv(CurveEdit *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011b080 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011b080 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* CurveEditorPlugin::get_class() const */

void CurveEditorPlugin::get_class(void)

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



/* CurveEdit::get_class() const */

void CurveEdit::get_class(void)

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



/* HFlowContainer::get_class() const */

void HFlowContainer::get_class(void)

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



/* CurveEditor::get_class() const */

void CurveEditor::get_class(void)

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



/* CurvePreviewGenerator::get_class() const */

void CurvePreviewGenerator::get_class(void)

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



/* EditorInspectorPluginCurve::get_class() const */

void EditorInspectorPluginCurve::get_class(void)

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



/* CallableCustomMethodPointer<CurveEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CurveEdit,void>::call
          (CallableCustomMethodPointer<CurveEdit,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010e2cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e2cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e380;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e2cf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC168,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e380:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CurveEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::call
          (CallableCustomMethodPointer<CurveEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_0010e548;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e548;
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
        uVar3 = _LC169;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010e5f9;
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
LAB_0010e548:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC168,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e5f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CurveEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::call
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
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
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010e7b9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010e7b9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC170;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010e86a;
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
LAB_0010e7b9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC168,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e86a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010e8b9;
  local_78 = 0;
  local_68 = &_LC38;
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
LAB_0010e9b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e9b5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010e8b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
    if ((code *)PTR__bind_methods_0011b088 != Object::_bind_methods) {
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



/* CurvePreviewGenerator::_initialize_classv() */

void CurvePreviewGenerator::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Object");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"RefCounted");
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
        if ((code *)PTR__bind_methods_0011b060 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
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
      if ((code *)PTR__bind_methods_0011b090 != RefCounted::_bind_methods) {
        EditorResourcePreviewGenerator::_bind_methods();
      }
      EditorResourcePreviewGenerator::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorResourcePreviewGenerator";
    local_68 = 0;
    local_50 = 0x1e;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CurvePreviewGenerator";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CurveEditorPlugin::_initialize_classv() */

void CurveEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0011b060 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0011b098 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011b0a0 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CurveEditorPlugin";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HFlowContainer::_initialize_classv() */

void HFlowContainer::_initialize_classv(void)

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
    if (FlowContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0011b060 != Node::_bind_methods) {
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
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"FlowContainer");
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
      if ((code *)PTR__bind_methods_0011b0a8 != Container::_bind_methods) {
        FlowContainer::_bind_methods();
      }
      FlowContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "FlowContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HFlowContainer";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
    if (cVar5 != '\0') goto LAB_0010f98b;
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
      if (cVar5 != '\0') goto LAB_0010f98b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010f98b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginCurve::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginCurve::is_class(EditorInspectorPluginCurve *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010fb8b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginCurve");
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
      if (cVar5 != '\0') goto LAB_0010fb8b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fc8e;
    }
  }
LAB_0010fb8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fc8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurvePreviewGenerator::is_class(String const&) const */

undefined8 __thiscall CurvePreviewGenerator::is_class(CurvePreviewGenerator *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010fd9b;
  }
  cVar5 = String::operator==(param_1,"CurvePreviewGenerator");
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
      if (cVar5 != '\0') goto LAB_0010fd9b;
    }
    cVar5 = String::operator==(param_1,"EditorResourcePreviewGenerator");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fe9e;
    }
  }
LAB_0010fd9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fe9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010ffab;
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
      if (cVar5 != '\0') goto LAB_0010ffab;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010ffab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditorPlugin::is_class(String const&) const */

undefined8 __thiscall CurveEditorPlugin::is_class(CurveEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001101ab;
  }
  cVar5 = String::operator==(param_1,"CurveEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_001101ab;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001102ae;
    }
  }
LAB_001101ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001102ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001103bb;
  }
  cVar5 = String::operator==(param_1,"Control");
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
      if (cVar5 != '\0') goto LAB_001103bb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001104be;
    }
  }
LAB_001103bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001104be:
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
    if (cVar4 != '\0') goto LAB_001105cb;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001105cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HFlowContainer::is_class(String const&) const */

undefined8 __thiscall HFlowContainer::is_class(HFlowContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011071b;
  }
  cVar5 = String::operator==(param_1,"HFlowContainer");
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
      if (cVar5 != '\0') goto LAB_0011071b;
    }
    cVar5 = String::operator==(param_1,"FlowContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011081e;
    }
  }
LAB_0011071b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011081e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditor::is_class(String const&) const */

undefined8 __thiscall CurveEditor::is_class(CurveEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011092b;
  }
  cVar5 = String::operator==(param_1,"CurveEditor");
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
      if (cVar5 != '\0') goto LAB_0011092b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
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
        if (cVar5 != '\0') goto LAB_0011092b;
      }
      cVar5 = String::operator==(param_1,"BoxContainer");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Container::is_class((Container *)this,param_1);
          return uVar6;
        }
        goto LAB_00110ace;
      }
    }
  }
LAB_0011092b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110ace:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::is_class(String const&) const */

undefined8 __thiscall CurveEdit::is_class(CurveEdit *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00110bdb;
  }
  cVar4 = String::operator==(param_1,"CurveEdit");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110bdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
        if (pvVar3 == (void *)0x0) goto LAB_00110d1f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110d1f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      goto LAB_00110edc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110edc:
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
  local_78 = &_LC71;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC71;
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
      goto LAB_0011112c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011112c:
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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
      goto LAB_00111391;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111391:
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
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00111641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111641:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* EditorResourcePreviewGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorResourcePreviewGenerator::_get_property_listv
          (EditorResourcePreviewGenerator *this,List *param_1,bool param_2)

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
  local_78 = "EditorResourcePreviewGenerator";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorResourcePreviewGenerator";
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
      goto LAB_001118f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001118f1:
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
  StringName::StringName((StringName *)&local_78,"EditorResourcePreviewGenerator",false);
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



/* CurvePreviewGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CurvePreviewGenerator::_get_property_listv(CurvePreviewGenerator *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CurvePreviewGenerator";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CurvePreviewGenerator";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00111ba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111ba1:
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
  StringName::StringName((StringName *)&local_78,"CurvePreviewGenerator",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginCurve::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginCurve::_get_property_listv
          (EditorInspectorPluginCurve *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPluginCurve";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginCurve";
  local_98 = 0;
  local_70 = 0x1a;
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
      goto LAB_00111e51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111e51:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginCurve",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CurveEditorPlugin::_get_property_listv(CurveEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CurveEditorPlugin";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CurveEditorPlugin";
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
      goto LAB_00112101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112101:
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
  StringName::StringName((StringName *)&local_78,"CurveEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_001123b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001123b1:
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
  if ((code *)PTR__get_property_list_0011b0b0 != Object::_get_property_list) {
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
      goto LAB_00112681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112681:
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
  if ((code *)PTR__get_property_list_0011b0b8 != CanvasItem::_get_property_list) {
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
      goto LAB_00112951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112951:
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
      goto LAB_00112c01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112c01:
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
      goto LAB_00112eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112eb1:
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



/* CurveEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CurveEditor::_get_property_listv(CurveEditor *this,List *param_1,bool param_2)

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
  local_78 = "CurveEditor";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CurveEditor";
  local_98 = 0;
  local_70 = 0xb;
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
      goto LAB_00113161;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113161:
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
  StringName::StringName((StringName *)&local_78,"CurveEditor",false);
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



/* FlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FlowContainer::_get_property_listv(FlowContainer *this,List *param_1,bool param_2)

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
  local_78 = "FlowContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FlowContainer";
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
      goto LAB_00113411;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113411:
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
  StringName::StringName((StringName *)&local_78,"FlowContainer",false);
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



/* HFlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HFlowContainer::_get_property_listv(HFlowContainer *this,List *param_1,bool param_2)

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
    FlowContainer::_get_property_listv((FlowContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HFlowContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HFlowContainer";
  local_98 = 0;
  local_70 = 0xe;
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
      goto LAB_001136c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001136c1:
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
  StringName::StringName((StringName *)&local_78,"HFlowContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      FlowContainer::_get_property_listv((FlowContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CurveEdit::_get_property_listv(CurveEdit *this,List *param_1,bool param_2)

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
  local_78 = "CurveEdit";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CurveEdit";
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
      goto LAB_00113971;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113971:
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
  StringName::StringName((StringName *)&local_78,"CurveEdit",false);
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



/* MethodBind* create_method_bind<CurveEdit, int>(void (CurveEdit::*)(int)) */

MethodBind * create_method_bind<CurveEdit,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116aa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CurveEdit";
  local_30 = 9;
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



/* CurveEdit::_initialize_classv() */

void CurveEdit::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0011b060 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0011b050 != Object::_bind_compatibility_methods)
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0011b0c0 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CurveEdit";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Memory::free_static;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

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
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_001143e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_001143e0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0011434c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001142e1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011434c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_001142e1:
  puVar9[-1] = param_1;
  return 0;
}



/* void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element,
   DefaultAllocator>(List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element*) */

void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x10) = 0;
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
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  Element *pEVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar5) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114669;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114669;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114669;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114669;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00114669;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00114669:
  plVar4 = *(long **)(this + 0x180);
  if (plVar4 != (long *)0x0) {
    do {
      pEVar1 = (Element *)*plVar4;
      if (pEVar1 == (Element *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001146d5;
        }
        break;
      }
      if (*(long **)(pEVar1 + 0x38) == plVar4) {
        lVar3 = *(long *)(pEVar1 + 0x28);
        lVar2 = *(long *)(pEVar1 + 0x30);
        *plVar4 = lVar3;
        if (pEVar1 == (Element *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x28) = lVar3;
          lVar3 = *(long *)(pEVar1 + 0x28);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar2;
        }
        memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar1);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x180);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_001146d5:
  *(undefined ***)this = &PTR__initialize_classv_00115770;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  ~EditorInspectorPlugin(this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorPluginCurve::~EditorInspectorPluginCurve() */

void __thiscall
EditorInspectorPluginCurve::~EditorInspectorPluginCurve(EditorInspectorPluginCurve *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001165d0;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  return;
}



/* EditorInspectorPluginCurve::~EditorInspectorPluginCurve() */

void __thiscall
EditorInspectorPluginCurve::~EditorInspectorPluginCurve(EditorInspectorPluginCurve *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001165d0;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  operator_delete(this,0x218);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001148f8) */
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



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00114d31;
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
                    /* WARNING: Could not recover jumptable at 0x00114bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00114d31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00114f11;
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
                    /* WARNING: Could not recover jumptable at 0x00114d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00114f11:
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
    goto LAB_0011500d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00115070;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00115070:
      uVar6 = 4;
LAB_0011500d:
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
      goto LAB_00114f8b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00114f8b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC169;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00114fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC168,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115166;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00115166:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CurveEdit::CurveEdit() */

void CurveEdit::_GLOBAL__sub_I_CurveEdit(void)

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
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginCurve::~EditorInspectorPluginCurve() */

void __thiscall
EditorInspectorPluginCurve::~EditorInspectorPluginCurve(EditorInspectorPluginCurve *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

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
/* CurveEditorPlugin::~CurveEditorPlugin() */

void __thiscall CurveEditorPlugin::~CurveEditorPlugin(CurveEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CurvePreviewGenerator::~CurvePreviewGenerator() */

void __thiscall CurvePreviewGenerator::~CurvePreviewGenerator(CurvePreviewGenerator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CurveEditor::~CurveEditor() */

void __thiscall CurveEditor::~CurveEditor(CurveEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CurveEdit::~CurveEdit() */

void __thiscall CurveEdit::~CurveEdit(CurveEdit *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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
/* CallableCustomMethodPointer<CurveEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CurveEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CurveEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CurveEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CurveEditor,void,int> *this)

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


