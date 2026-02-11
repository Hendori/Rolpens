
/* GradientEdit::set_selected_index(int) */

void __thiscall GradientEdit::set_selected_index(GradientEdit *this,int param_1)

{
  *(int *)(this + 0x9fc) = param_1;
  CanvasItem::queue_redraw();
  return;
}



/* EditorInspectorPluginGradient::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginGradient::can_handle(EditorInspectorPluginGradient *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Gradient::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEdit::_get_point_at(int) const */

int __thiscall GradientEdit::_get_point_at(GradientEdit *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  float local_30;
  
  iVar5 = -1;
  iVar4 = 0;
  fVar6 = (float)Control::get_size();
  Control::get_size();
  iVar1 = *(int *)(this + 0xa0c);
  iVar2 = *(int *)(this + 0xa10);
  local_30 = (float)((double)*(int *)(this + 0xa10) * __LC45);
  do {
    iVar3 = Gradient::get_point_count();
    if (iVar3 <= iVar4) {
      return iVar5;
    }
    fVar7 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
    if (0.0 <= fVar7) {
      fVar7 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
      if (_LC47 < fVar7) {
        return iVar5;
      }
      fVar7 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
      fVar7 = (float)param_1 -
              fVar7 * (float)(int)(((fVar6 - extraout_XMM0_Db) - (float)iVar1) - (float)iVar2);
      if (fVar7 < 0.0) {
        fVar7 = (float)((uint)fVar7 ^ __LC48);
      }
      if (fVar7 < local_30) {
        iVar5 = iVar4;
        local_30 = fVar7;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* GradientEdit::_predict_insertion_index(float) */

int __thiscall GradientEdit::_predict_insertion_index(GradientEdit *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = Gradient::get_point_count();
    if (iVar1 <= iVar2) {
      return iVar2;
    }
    fVar3 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
    if (param_1 <= fVar3) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* GradientEdit::_get_gradient_rect_width() const */

int __thiscall GradientEdit::_get_gradient_rect_width(GradientEdit *this)

{
  float fVar1;
  float extraout_XMM0_Db;
  
  fVar1 = (float)Control::get_size();
  Control::get_size();
  return (int)(((fVar1 - extraout_XMM0_Db) - (float)*(int *)(this + 0xa0c)) -
              (float)*(int *)(this + 0xa10));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEdit::_show_color_picker() */

void __thiscall GradientEdit::_show_color_picker(GradientEdit *this)

{
  Color *pCVar1;
  Vector2i *pVVar2;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined8 uVar3;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float fVar4;
  undefined8 extraout_XMM1_Qa;
  float extraout_XMM1_Db;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x9fc) == -1) goto LAB_00100528;
  pCVar1 = *(Color **)(this + 0x9e0);
  local_38 = Gradient::get_color((int)*(undefined8 *)(this + 0x9c8));
  local_30 = extraout_XMM1_Qa;
  ColorPicker::set_pick_color(pCVar1);
  Window::get_contents_minimum_size();
  CanvasItem::get_viewport_rect();
  Control::get_global_position();
  Control::get_size();
  if (extraout_XMM1_Db < extraout_XMM0_Db_01 + extraout_XMM0_Db_00 + extraout_XMM0_Db) {
    Control::get_global_position();
    Control::get_size();
    fVar4 = (float)((uint)extraout_XMM0_Db ^ __LC48);
    if (extraout_XMM0_Db_04 + extraout_XMM0_Db_03 + extraout_XMM0_Db_03 <= extraout_XMM1_Db)
    goto LAB_0010049a;
  }
  else {
LAB_0010049a:
    Control::get_size();
    fVar4 = extraout_XMM0_Db_02;
  }
  pVVar2 = *(Vector2i **)(this + 0x9d8);
  uVar3 = Control::get_screen_position();
  local_40 = CONCAT44(fVar4 + (float)((ulong)uVar3 >> 0x20),(float)uVar3 + 0.0);
  local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
  Window::set_position(pVVar2);
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(long **)(this + 0x9d8) + 0x240))(*(long **)(this + 0x9d8),&local_38);
LAB_00100528:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GradientEdit::set_gradient(Ref<Gradient> const&) */

void __thiscall GradientEdit::set_gradient(GradientEdit *this,Ref *param_1)

{
  Object *pOVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  CallableCustom *this_00;
  Object *pOVar5;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  pOVar1 = *(Object **)param_1;
  pOVar5 = *(Object **)(this + 0x9c8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar5) {
    *(Object **)(this + 0x9c8) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x9c8) = 0;
      }
    }
    if (pOVar5 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar5);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pOVar5 = *(Object **)(this + 0x9c8);
  }
  pcVar2 = *(code **)(*(long *)pOVar5 + 0x108);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(GradientEdit **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00113f40;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar3;
  *(undefined **)(this_00 + 0x20) = &_LC49;
  *(code **)(this_00 + 0x38) = CanvasItem::queue_redraw;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "CanvasItem::queue_redraw";
  Callable::Callable(aCStack_48,this_00);
  (*pcVar2)(pOVar5,CoreStringNames::singleton + 8,aCStack_48,0);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::get_gradient() const */

GradientEdit * __thiscall GradientEdit::get_gradient(GradientEdit *this)

{
  return this + 0x9c8;
}



/* GradientEdit::set_snap_enabled(bool) */

void __thiscall GradientEdit::set_snap_enabled(GradientEdit *this,bool param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x9e8] = (GradientEdit)param_1;
  CanvasItem::queue_redraw();
  plVar1 = *(long **)(this + 0x9c8);
  if (plVar1 != (long *)0x0) {
    if (this[0x9e8] == (GradientEdit)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x001007bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,&set_snap_enabled(bool)::{lambda()#2}::operator()()::sname);
        return;
      }
      goto LAB_001008f5;
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
LAB_001008f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditor::_set_snap_enabled(bool) */

void __thiscall GradientEditor::_set_snap_enabled(GradientEditor *this,bool param_1)

{
  GradientEdit::set_snap_enabled(*(GradientEdit **)(this + 0xa28),param_1);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa20),0));
  return;
}



/* GradientEdit::set_snap_count(int) */

void __thiscall GradientEdit::set_snap_count(GradientEdit *this,int param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x9ec) = param_1;
  CanvasItem::queue_redraw();
  plVar1 = *(long **)(this + 0x9c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(this + 0x9ec) == 10) {
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
                    /* WARNING: Could not recover jumptable at 0x00100a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,&set_snap_count(int)::{lambda()#2}::operator()()::sname);
        return;
      }
      goto LAB_00100afd;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xa8);
    Variant::Variant((Variant *)local_48,*(int *)(this + 0x9ec));
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
LAB_00100afd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditor::_set_snap_count(int) */

void __thiscall GradientEditor::_set_snap_count(GradientEditor *this,int param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 2) {
    param_1 = 2;
  }
  GradientEdit::set_snap_count(*(GradientEdit **)(this + 0xa28),param_1);
  return;
}



/* GradientEdit::get_picker() const */

undefined8 __thiscall GradientEdit::get_picker(GradientEdit *this)

{
  return *(undefined8 *)(this + 0x9e0);
}



/* GradientEdit::get_popup() const */

undefined8 __thiscall GradientEdit::get_popup(GradientEdit *this)

{
  return *(undefined8 *)(this + 0x9d8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEdit::_redraw() */

void __thiscall GradientEdit::_redraw(GradientEdit *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  Object *pOVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Db;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float local_e0;
  Object *local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  ulong uVar17;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar14 = (float)Control::get_size();
  Control::get_size();
  auVar1._8_8_ = uStack_90;
  auVar1._0_8_ = local_98;
  auVar23._8_8_ = uStack_70;
  auVar23._0_8_ = local_78;
  iVar13 = (int)(extraout_XMM0_Db - (float)*(int *)(this + 0xa0c));
  if (((int)fVar14 == 0) || (_local_78 = auVar23, _local_98 = auVar1, iVar13 == 0))
  goto LAB_00101240;
  iVar3 = _get_gradient_rect_width(this);
  local_58 = (undefined1  [8])CONCAT44(_UNK_00114714,_LC47);
  uStack_50 = CONCAT44(_UNK_0011471c,_UNK_00114718);
  fVar22 = (float)iVar13;
  fVar14 = (float)iVar3;
  uStack_60 = CONCAT44(fVar22,fVar14);
  fVar19 = (float)(int)((double)*(int *)(this + 0xa10) * _LC53);
  local_68 = (ulong)(uint)fVar19;
  if ((_redraw()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_redraw()::{lambda()#1}::operator()()::sname), iVar9 != 0)) {
    _scs_create((char *)&_redraw()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#1}::operator()()::sname,&__dso_handle
                );
    __cxa_guard_release(&_redraw()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_a0);
  bVar6 = SUB81((Vector2 *)&local_68,0);
  bVar10 = SUB81((Vector2 *)local_58,0);
  CanvasItem::draw_texture_rect((Ref *)this,(Rect2 *)&local_a0,bVar6,(Color *)0x1,bVar10);
  if (((local_a0 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
    (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
    Memory::free_static(local_a0,false);
  }
  uVar5 = *(undefined8 *)(this + 0x9d0);
  local_a0 = (Object *)0x0;
  if ((*(Object **)(this + 0x9c8) != (Object *)0x0) &&
     (local_a0 = *(Object **)(this + 0x9c8), cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_a0 = (Object *)0x0;
  }
  GradientTexture1D::set_gradient(uVar5);
  if (((local_a0 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar4 = local_a0, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  local_58 = (undefined1  [8])CONCAT44(_UNK_00114714,_LC47);
  uStack_50 = CONCAT44(_UNK_0011471c,_UNK_00114718);
  local_a0 = (Object *)0x0;
  local_68 = (ulong)(uint)fVar19;
  uStack_60 = CONCAT44(fVar22,fVar14);
  if (((*(long *)(this + 0x9d0) != 0) &&
      (pOVar4 = (Object *)
                __dynamic_cast(*(long *)(this + 0x9d0),&Object::typeinfo,&Texture2D::typeinfo),
      pOVar4 != (Object *)0x0)) &&
     (local_a0 = pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_a0 = (Object *)0x0;
  }
  CanvasItem::draw_texture_rect((Ref *)this,(Rect2 *)&local_a0,bVar6,(Color *)0x0,bVar10);
  if (((local_a0 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar4 = local_a0, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_a0), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  if (this[0x9e8] == (GradientEdit)0x0) {
    uVar5 = Input::get_singleton();
    cVar2 = Input::is_key_pressed(uVar5,0x400016);
    if (cVar2 == '\0') goto LAB_00101bb8;
    if (*(int *)(this + 0x9f0) != 0) goto LAB_00100deb;
    local_e0 = _LC58;
  }
  else {
LAB_00100deb:
    fVar16 = _LC58;
    iVar9 = *(int *)(this + 0x9ec);
    local_58._4_4_ = _LC57;
    local_58._0_4_ = _LC57;
    uStack_50 = CONCAT44(_LC57,_LC57);
    if (iVar9 < 2) {
LAB_00101bb8:
      local_e0 = _LC58;
    }
    else {
      iVar11 = 1;
      local_e0 = _LC58;
      iVar8 = iVar3;
      do {
        fVar15 = (float)iVar8;
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + iVar3;
        fVar15 = fVar15 / (float)iVar9 + fVar19;
        local_68 = (ulong)(uint)fVar15;
        local_78 = (undefined1  [8])CONCAT44(fVar22,fVar15);
        CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_68,(Color *)local_78,fVar16,bVar10);
        iVar9 = *(int *)(this + 0x9ec);
      } while (iVar11 < iVar9);
    }
  }
  iVar9 = 0;
  while( true ) {
    iVar8 = Gradient::get_point_count();
    bVar7 = SUB81((Color *)local_78,0);
    if (iVar8 <= iVar9) break;
    fVar16 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
    if (0.0 <= fVar16) {
      fVar16 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
      if (_LC47 < fVar16) break;
      auVar23 = Gradient::get_color((int)*(undefined8 *)(this + 0x9c8));
      local_98._4_4_ = auVar23._4_4_;
      local_98._0_4_ = auVar23._0_4_;
      uStack_90._0_4_ = auVar23._8_4_;
      uStack_90._4_4_ = auVar23._12_4_;
      if (__LC63 < (double)(((_LC59 * (float)local_98._4_4_ + _LC60 * (float)local_98._0_4_ +
                             _LC61 * (float)uStack_90) - _LC62) * uStack_90._4_4_ + _LC62)) {
        local_88 = __LC64;
        uStack_80 = _UNK_00114728;
      }
      else {
        local_88 = CONCAT44(_UNK_00114714,_LC47);
        uStack_80 = CONCAT44(_UNK_0011471c,_UNK_00114718);
      }
      _local_98 = auVar23;
      fVar16 = (float)EditorScale::get_scale();
      iVar8 = 1;
      fVar16 = roundf(fVar16);
      if (_LC47 <= fVar16) {
        iVar8 = (int)fVar16;
      }
      fVar16 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
      fVar16 = fVar16 * fVar14 + fVar19;
      fVar15 = (float)(iVar13 / 2);
      fVar20 = fVar16 - fVar19;
      local_78 = (undefined1  [8])CONCAT44(fVar15,fVar20);
      uStack_70 = CONCAT44(fVar15,(float)*(int *)(this + 0xa10));
      if (uStack_90._4_4_ < _LC47) {
        local_58 = (undefined1  [8])CONCAT44(_UNK_00114714,_LC47);
        uStack_50 = CONCAT44(_UNK_0011471c,_UNK_00114718);
        if (_redraw()::{lambda()#2}::operator()()::sname == '\0') {
          iVar11 = __cxa_guard_acquire(&_redraw()::{lambda()#2}::operator()()::sname);
          if (iVar11 != 0) {
            _scs_create((char *)&_redraw()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_redraw()::{lambda()#2}::operator()()::sname);
          }
        }
        Control::get_editor_theme_icon((StringName *)&local_a0);
        CanvasItem::draw_texture_rect((Ref *)this,(Rect2 *)&local_a0,bVar7,(Color *)0x1,bVar10);
        if (local_a0 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar4 = local_a0;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_a0);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,SUB81(local_98,0),local_e0,true);
        local_68 = (ulong)local_98;
        uStack_60 = CONCAT44(0x3f800000,SUB164(_local_98,8));
        local_58 = (undefined1  [8])
                   CONCAT44((float)(_LC65 * (double)iVar13 - (double)iVar8 * _LC53),
                            (float)((double)fVar20 + (double)iVar8 * _LC53));
        uStack_50 = CONCAT44((float)((double)iVar13 * __LC66),
                             (float)(*(int *)(this + 0xa10) - iVar8));
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_58,bVar6,local_e0,true);
      }
      else {
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,SUB81(local_98,0),local_e0,true);
      }
      fVar15 = (float)iVar8;
      iVar11 = iVar13 / 2 - iVar8;
      if (*(int *)(this + 0x9fc) == iVar9) {
        bVar7 = SUB81(&local_88,0);
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,bVar7,fVar15,false);
        local_58._4_4_ = 0;
        local_58._0_4_ = fVar16;
        local_68 = CONCAT44((float)iVar11,fVar16);
        CanvasItem::draw_line
                  ((Vector2 *)this,(Vector2 *)local_58,(Color *)&local_68,(float)iVar8,bVar7);
        if (uStack_90._4_4_ < _LC47) {
          dVar18 = (double)iVar8 * _LC53;
          local_58._4_4_ = (undefined4)((double)iVar13 * _LC65 - (double)iVar8);
          local_58._0_4_ = (float)((double)((float)*(int *)(this + 0xa10) + fVar20) - dVar18);
          local_68 = CONCAT44(local_58._4_4_,(float)((double)fVar20 + dVar18));
          CanvasItem::draw_line
                    ((Vector2 *)this,(Vector2 *)&local_68,(Color *)local_58,(float)iVar8,bVar7);
        }
        fVar16 = (float)-iVar8;
        fVar20 = fVar16 + fVar16;
        local_78._0_4_ = (float)local_78._0_4_ - fVar16;
        local_78._4_4_ = (float)local_78._4_4_ - fVar16;
        uStack_70._0_4_ = (float)uStack_70 + fVar20;
        uStack_70._4_4_ = uStack_70._4_4_ + fVar20;
        if (_redraw()::{lambda()#3}::operator()()::sname == '\0') {
          iVar8 = __cxa_guard_acquire(&_redraw()::{lambda()#3}::operator()()::sname);
          if (iVar8 != 0) {
            _scs_create((char *)&_redraw()::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#3}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_redraw()::{lambda()#3}::operator()()::sname);
          }
        }
        auVar24 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_redraw()::{lambda()#3}::operator()()::sname);
        uVar17 = auVar24._8_8_;
        cVar2 = Control::has_focus();
        if (cVar2 == '\0') {
          fVar12 = auVar24._8_4_;
          fVar21 = auVar24._0_4_;
          auVar24._4_4_ = auVar24._4_4_ * _LC68._4_4_;
          auVar24._0_4_ = fVar21 * (float)_LC68;
          auVar24._8_8_ = uVar17 & 0xffffffff00000000 | (ulong)(uint)(fVar12 * (float)_LC68);
        }
        _local_58 = auVar24;
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,bVar10,fVar15,false);
        local_78._4_4_ = (float)local_78._4_4_ - fVar16;
        local_78._0_4_ = (float)local_78._0_4_ - fVar16;
        uStack_70 = CONCAT44(fVar20 + uStack_70._4_4_,fVar20 + (float)uStack_70);
      }
      else {
        uStack_80 = CONCAT44(0x3f666666,(undefined4)uStack_80);
        bVar7 = SUB81(&local_88,0);
        CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,bVar7,(float)iVar8,false);
        local_58._4_4_ = 0;
        local_58._0_4_ = fVar16;
        local_68 = CONCAT44((float)iVar11,fVar16);
        CanvasItem::draw_line
                  ((Vector2 *)this,(Vector2 *)local_58,(Color *)&local_68,(float)iVar8,bVar7);
        if (uStack_90._4_4_ < _LC47) {
          dVar18 = (double)iVar8 * _LC53;
          local_58._4_4_ = (undefined4)((double)iVar13 * _LC65 - (double)iVar8);
          local_58._0_4_ = (float)((double)((float)*(int *)(this + 0xa10) + fVar20) - dVar18);
          local_68 = CONCAT44(local_58._4_4_,(float)((double)fVar20 + dVar18));
          CanvasItem::draw_line
                    ((Vector2 *)this,(Vector2 *)&local_68,(Color *)local_58,(float)iVar8,bVar7);
          iVar11 = *(int *)(this + 0xa00);
        }
        else {
          iVar11 = *(int *)(this + 0xa00);
        }
        if (iVar11 != iVar9) goto LAB_00101042;
        uStack_80 = CONCAT44(0x3f0a3d71,(undefined4)uStack_80);
        fVar16 = (float)-iVar8;
        local_78._4_4_ = (undefined4)((ulong)local_78 >> 0x20);
        uStack_70._4_4_ = (float)((ulong)uStack_70 >> 0x20);
        local_78._4_4_ = (float)local_78._4_4_ - fVar16;
        local_78._0_4_ = (float)local_78._0_4_ - fVar16;
        uStack_70 = CONCAT44(fVar16 + fVar16 + uStack_70._4_4_,fVar16 + fVar16 + (float)uStack_70);
      }
      CanvasItem::draw_rect((Rect2 *)this,(Color *)local_78,bVar7,fVar15,false);
    }
LAB_00101042:
    iVar9 = iVar9 + 1;
  }
  iVar3 = iVar3 + *(int *)(this + 0xa10) + *(int *)(this + 0xa0c);
  if (*(int *)(this + 0x9fc) == -1) {
    fVar14 = (float)iVar3;
    local_58 = (undefined1  [8])CONCAT44(_UNK_00114734,_LC57);
    uStack_60 = CONCAT44(fVar22,fVar22);
    uStack_50 = _UNK_00114738;
    local_68 = (ulong)(uint)fVar14;
    CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_68,bVar10,local_e0,true);
    local_58 = (undefined1  [8])__LC75;
    uStack_50 = _UNK_00114748;
    local_68 = (ulong)(uint)fVar14;
    local_78 = (undefined1  [8])CONCAT44(fVar22,(float)(iVar13 + iVar3));
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)&local_68,(Color *)local_78,local_e0,bVar10);
    local_58 = (undefined1  [8])__LC75;
    uStack_50 = _UNK_00114748;
    local_68 = (ulong)(uint)(float)(iVar13 + iVar3);
    local_78 = (undefined1  [8])CONCAT44(fVar22,fVar14);
    CanvasItem::draw_line((Vector2 *)this,(Vector2 *)local_78,(Color *)&local_68,local_e0,bVar10);
  }
  else {
    _local_78 = Gradient::get_color((int)*(undefined8 *)(this + 0x9c8));
    if (uStack_70._4_4_ < _LC47) {
      local_58._4_4_ = _UNK_00114714;
      local_58._0_4_ = _LC47;
      uStack_50 = CONCAT44(_UNK_0011471c,_UNK_00114718);
      uStack_60 = CONCAT44(fVar22,fVar22);
      local_68 = (ulong)(uint)(float)iVar3;
      if (_redraw()::{lambda()#4}::operator()()::sname == '\0') {
        iVar13 = __cxa_guard_acquire(&_redraw()::{lambda()#4}::operator()()::sname);
        if (iVar13 != 0) {
          _scs_create((char *)&_redraw()::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#4}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_redraw()::{lambda()#4}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_a0);
      CanvasItem::draw_texture_rect((Ref *)this,(Rect2 *)&local_a0,bVar6,(Color *)0x1,bVar10);
      if (local_a0 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar4 = local_a0;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_a0);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    local_58._4_4_ = 0;
    local_58._0_4_ = (float)iVar3;
    uStack_50 = CONCAT44(fVar22,fVar22);
    CanvasItem::draw_rect((Rect2 *)this,(Color *)local_58,bVar7,local_e0,true);
    if (((_LC47 < (float)local_78._0_4_) || (_LC47 < (float)local_78._4_4_)) ||
       (_LC47 < (float)uStack_70)) {
      local_58 = (undefined1  [8])CONCAT44(_UNK_00114714,_LC47);
      uStack_50 = CONCAT44(_UNK_0011471c,_UNK_00114718);
      local_68 = (ulong)(uint)(float)iVar3;
      if (_redraw()::{lambda()#6}::operator()()::sname == '\0') {
        iVar13 = __cxa_guard_acquire(&_redraw()::{lambda()#6}::operator()()::sname);
        if (iVar13 != 0) {
          _scs_create((char *)&_redraw()::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#6}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_redraw()::{lambda()#6}::operator()()::sname);
        }
      }
      if (_redraw()::{lambda()#5}::operator()()::sname == '\0') {
        iVar13 = __cxa_guard_acquire(&_redraw()::{lambda()#5}::operator()()::sname);
        if (iVar13 != 0) {
          _scs_create((char *)&_redraw()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_redraw()::{lambda()#5}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_redraw()::{lambda()#5}::operator()()::sname);
        }
      }
      Control::get_theme_icon((StringName *)&local_a0,(StringName *)this);
      CanvasItem::draw_texture((Ref *)this,(Vector2 *)&local_a0,(Color *)&local_68);
      if (local_a0 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar4 = local_a0;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_a0);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
  }
LAB_00101240:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::_notification(int) */

void __thiscall GradientEdit::_notification(GradientEdit *this,int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  
  if (param_1 == 0x2a) {
    if (*(int *)(this + 0xa00) != -1) {
      *(undefined4 *)(this + 0xa00) = 0xffffffff;
      CanvasItem::queue_redraw();
      return;
    }
  }
  else if (param_1 < 0x2b) {
    if (param_1 == 0x1e) {
      _redraw(this);
      return;
    }
    if (param_1 == 0x1f) {
      cVar3 = CanvasItem::is_visible();
      if (cVar3 == '\0') {
        *(undefined4 *)(this + 0x9f0) = 0;
        return;
      }
    }
  }
  else if (param_1 == 0x2d) {
    iVar1 = *(int *)(this + 0xa04);
    fVar4 = (float)Control::get_theme_default_base_scale();
    iVar2 = *(int *)(this + 0xa08);
    *(int *)(this + 0xa0c) = (int)(fVar4 * (float)iVar1);
    fVar4 = (float)Control::get_theme_default_base_scale();
    *(int *)(this + 0xa10) = (int)(fVar4 * (float)iVar2);
  }
  return;
}



/* GradientEditor::set_gradient(Ref<Gradient> const&) */

void __thiscall GradientEditor::set_gradient(GradientEditor *this,Ref *param_1)

{
  GradientEdit::set_gradient(*(GradientEdit **)(this + 0xa28),param_1);
  return;
}



/* GradientEditor::_notification(int) */

void __thiscall GradientEditor::_notification(GradientEditor *this,int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  double dVar7;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    pOVar2 = *(Object **)(*(long *)(this + 0xa28) + 0x9c8);
    if (pOVar2 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 != '\0') {
        uVar3 = *(undefined8 *)(this + 0xa18);
        pcVar4 = *(code **)(*(long *)pOVar2 + 0xb8);
        Variant::Variant((Variant *)local_78,false);
        StringName::StringName((StringName *)&local_80,"_snap_enabled",false);
        (*pcVar4)((Variant *)local_58,pOVar2,(StringName *)&local_80,(Variant *)local_78);
        Variant::operator_cast_to_bool((Variant *)local_58);
        BaseButton::set_pressed(SUB81(uVar3,0));
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar4 = *(code **)(*(long *)pOVar2 + 0xb8);
        Variant::Variant((Variant *)local_78,10);
        StringName::StringName((StringName *)&local_80,"_snap_count",false);
        (*pcVar4)((Variant *)local_58,pOVar2,(StringName *)&local_80,(Variant *)local_78);
        dVar7 = Variant::operator_cast_to_double((Variant *)local_58);
        Range::set_value(dVar7);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar2);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar2,false);
              return;
            }
            goto LAB_0010221d;
          }
        }
      }
    }
  }
  else if (param_1 == 0x2d) {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    Button::set_button_icon(pRVar1);
    if (local_80 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar2 = local_80;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_80);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xa18);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    Button::set_button_icon(pRVar1);
    if (local_80 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_80);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010221d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditorPlugin::GradientEditorPlugin() */

void __thiscall GradientEditorPlugin::GradientEditorPlugin(GradientEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = EditorPlugin::add_inspector_plugin;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (GradientEditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00113428;
  local_30 = (Object *)0x0;
  Ref<EditorInspectorPluginGradient>::instantiate<>((Ref<EditorInspectorPluginGradient> *)&local_30)
  ;
  pOVar1 = local_30;
  local_28 = (Object *)0x0;
  if (local_30 == (Object *)0x0) {
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) goto LAB_001026b4;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_30,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0)
    ;
    if ((pOVar3 != (Object *)0x0) &&
       (local_28 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_28 = (Object *)0x0;
    }
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
LAB_001026b4:
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (pOVar1 == (Object *)0x0) goto LAB_001026cf;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00102776;
    }
  }
LAB_001026cf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102776:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::add_point(float, Color const&) */

void __thiscall GradientEdit::add_point(GradientEdit *this,float param_1,Color *param_2)

{
  Variant *pVVar1;
  char cVar2;
  StringName *pSVar3;
  int iVar4;
  Object *pOVar5;
  Variant *pVVar6;
  int iVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  iVar7 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  while ((iVar4 = Gradient::get_point_count(), iVar7 < iVar4 &&
         (fVar8 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8)), fVar8 < param_1))
        ) {
    iVar7 = iVar7 + 1;
  }
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = "";
  String::parse_latin1((StrRange *)&local_d0);
  local_c8 = "Add Gradient Point";
  local_d8 = 0;
  local_c0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  TTR((String *)&local_c8,(String *)&local_d8);
  EditorUndoRedoManager::create_action(pOVar5,(String *)&local_c8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  StringName::StringName((StringName *)&local_c8,"add_point",false);
  pSVar3 = *(StringName **)(this + 0x9c8);
  local_b8 = *(undefined8 *)param_2;
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  Variant::Variant((Variant *)local_88,param_1);
  Variant::Variant((Variant *)&local_70,(Color *)&local_b8);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  iVar4 = (int)&local_a8;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)&local_70;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar3,(Variant **)&local_c8,iVar4);
  pVVar6 = (Variant *)local_40;
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"set_selected_index",false);
  Variant::Variant((Variant *)local_88,iVar7);
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_c8,iVar4);
  if (Variant::needs_deinit[(int)local_70] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"remove_point",false);
  pSVar3 = *(StringName **)(this + 0x9c8);
  Variant::Variant((Variant *)local_88,iVar7);
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar3,(Variant **)&local_c8,iVar4);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"set_selected_index",false);
  Variant::Variant((Variant *)local_88,-1);
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_c8,iVar4);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  return;
}



/* GradientEdit::remove_point(int) */

void GradientEdit::remove_point(int param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  int iVar3;
  Object *pOVar4;
  int iVar5;
  int in_ESI;
  undefined4 in_register_0000003c;
  StringName *pSVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  float local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pSVar6 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_ESI < 0) || (iVar3 = Gradient::get_point_count(), iVar3 <= in_ESI)) {
    iVar3 = Gradient::get_point_count();
    _err_print_index_error
              ("remove_point","editor/plugins/gradient_editor_plugin.cpp",0x7d,(long)in_ESI,
               (long)iVar3,"p_index","gradient->get_point_count()",
               "Gradient point is out of bounds.",false,false);
  }
  else {
    iVar3 = Gradient::get_point_count();
    if (1 < iVar3) {
      if (*(int *)(pSVar6 + 0x9f0) == 2) {
        local_dc = *(float *)(pSVar6 + 0x9f4);
      }
      else {
        local_dc = (float)Gradient::get_offset((int)*(undefined8 *)(pSVar6 + 0x9c8));
      }
      uVar8 = Gradient::get_color((int)*(undefined8 *)(pSVar6 + 0x9c8));
      iVar3 = *(int *)(pSVar6 + 0x9fc);
      if (in_ESI < iVar3) {
        iVar3 = iVar3 + -1;
      }
      else if (in_ESI == iVar3) {
        iVar3 = -1;
      }
      pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d0 = 0;
      local_c0 = 0;
      local_c8 = "";
      String::parse_latin1((StrRange *)&local_d0);
      local_c8 = "Remove Gradient Point";
      local_d8 = 0;
      local_c0 = 0x15;
      String::parse_latin1((StrRange *)&local_d8);
      TTR((String *)&local_c8,(String *)&local_d8);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_c8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      StringName::StringName((StringName *)&local_c8,"remove_point",false);
      pSVar2 = *(StringName **)(pSVar6 + 0x9c8);
      Variant::Variant((Variant *)local_88,in_ESI);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      iVar5 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar2,(Variant **)&local_c8,iVar5);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_c8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,iVar3);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar5);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_c8,"add_point",false);
      pSVar2 = *(StringName **)(pSVar6 + 0x9c8);
      local_b8[0] = uVar8;
      Variant::Variant((Variant *)local_88,local_dc);
      Variant::Variant((Variant *)local_70,(Color *)local_b8);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar7 = (Variant *)local_40;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar2,(Variant **)&local_c8,iVar5);
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      iVar3 = *(int *)(pSVar6 + 0x9fc);
      StringName::StringName((StringName *)&local_c8,"set_selected_index",false);
      Variant::Variant((Variant *)local_88,iVar3);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar6,(Variant **)&local_c8,iVar5);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
        return;
      }
      goto LAB_0010315d;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010315d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::set_offset(int, float) */

void __thiscall GradientEdit::set_offset(GradientEdit *this,int param_1,float param_2)

{
  Variant *pVVar1;
  StringName *pSVar2;
  int iVar3;
  int iVar4;
  Object *pOVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
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
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0) || (iVar3 = Gradient::get_point_count(), iVar3 <= param_1)) {
    iVar3 = Gradient::get_point_count();
    _err_print_index_error
              ("set_offset","editor/plugins/gradient_editor_plugin.cpp",0x99,(long)param_1,
               (long)iVar3,"p_index","gradient->get_point_count()",
               "Gradient point is out of bounds.",false,false);
  }
  else {
    fVar8 = *(float *)(this + 0x9f4);
    if (fVar8 != param_2) {
      fVar9 = _LC125;
      if (_LC125 <= ABS(fVar8) * _LC125) {
        fVar9 = ABS(fVar8) * _LC125;
      }
      if (fVar9 <= ABS(fVar8 - param_2)) {
        iVar3 = 0;
        while ((iVar4 = Gradient::get_point_count(), iVar3 < iVar4 &&
               (fVar8 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8)),
               fVar8 < param_2))) {
          iVar3 = iVar3 + 1;
        }
        Gradient::set_offset((int)*(undefined8 *)(this + 0x9c8),*(float *)(this + 0x9f4));
        pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
        local_c0 = 0;
        local_b0 = 0;
        local_b8 = "";
        String::parse_latin1((StrRange *)&local_c0);
        local_b8 = "Move Gradient Point";
        local_c8 = 0;
        local_b0 = 0x13;
        String::parse_latin1((StrRange *)&local_c8);
        TTR((String *)&local_b8,(String *)&local_c8);
        EditorUndoRedoManager::create_action(pOVar5,(String *)&local_b8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        iVar4 = *(int *)(this + 0x9f8);
        StringName::StringName((StringName *)&local_b8,"set_offset",false);
        pSVar2 = *(StringName **)(this + 0x9c8);
        Variant::Variant((Variant *)local_88,iVar4);
        Variant::Variant((Variant *)local_70,param_2);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        iVar4 = (int)&local_a8;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar2,(Variant **)&local_b8,iVar4);
        pVVar6 = (Variant *)local_40;
        pVVar7 = pVVar6;
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
        StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
        Variant::Variant((Variant *)local_88,iVar3);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_b8,iVar4)
        ;
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        fVar8 = *(float *)(this + 0x9f4);
        StringName::StringName((StringName *)&local_b8,"set_offset",false);
        pSVar2 = *(StringName **)(this + 0x9c8);
        Variant::Variant((Variant *)local_88,iVar3);
        Variant::Variant((Variant *)local_70,fVar8);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar2,(Variant **)&local_b8,iVar4);
        do {
          pVVar7 = pVVar6 + -0x18;
          pVVar6 = pVVar6 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar6 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        iVar3 = *(int *)(this + 0x9f8);
        StringName::StringName((StringName *)&local_b8,"set_selected_index",false);
        Variant::Variant((Variant *)local_88,iVar3);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar5,(StringName *)this,(Variant **)&local_b8,iVar4);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          CanvasItem::queue_redraw();
          return;
        }
        goto LAB_001036cf;
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001036cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::set_color(int, Color const&) */

void GradientEdit::set_color(int param_1,Color *param_2)

{
  Variant *pVVar1;
  StringName *pSVar2;
  int iVar3;
  Object *pOVar4;
  float *in_RDX;
  Variant *pVVar5;
  int iVar6;
  undefined4 in_register_0000003c;
  long lVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar7 = CONCAT44(in_register_0000003c,param_1);
  iVar6 = (int)param_2;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar6 < 0) {
LAB_00103a50:
    iVar3 = Gradient::get_point_count();
    _err_print_index_error
              ("set_color","editor/plugins/gradient_editor_plugin.cpp",0xae,(long)iVar6,(long)iVar3,
               "p_index","gradient->get_point_count()","Gradient point is out of bounds.",false,
               false);
  }
  else {
    iVar3 = Gradient::get_point_count();
    if (iVar3 <= iVar6) goto LAB_00103a50;
    uVar9 = Gradient::get_color((int)*(undefined8 *)(lVar7 + 0x9c8));
    if (((((float)uVar9 != *in_RDX) || ((float)((ulong)uVar9 >> 0x20) != in_RDX[1])) ||
        (in_XMM1_Da != in_RDX[2])) || (in_XMM1_Db != in_RDX[3])) {
      pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d0 = 0;
      local_c8 = "";
      local_c0 = 0;
      String::parse_latin1((StrRange *)&local_d0);
      local_c8 = "Recolor Gradient Point";
      local_d8 = 0;
      local_c0 = 0x16;
      String::parse_latin1((StrRange *)&local_d8);
      TTR((String *)&local_c8,(String *)&local_d8);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_c8,1,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      StringName::StringName((StringName *)&local_c8,"set_color",false);
      local_b8 = *(undefined8 *)in_RDX;
      uStack_b0 = *(undefined8 *)(in_RDX + 2);
      pSVar2 = *(StringName **)(lVar7 + 0x9c8);
      Variant::Variant(local_88,iVar6);
      Variant::Variant(local_70,(Color *)&local_b8);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      local_a8 = local_88;
      pVStack_a0 = local_70;
      EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar2,(Variant **)&local_c8,(int)&local_a8);
      pVVar5 = (Variant *)local_40;
      pVVar8 = pVVar5;
      do {
        pVVar1 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != local_88);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_c8,"set_color",false);
      pSVar2 = *(StringName **)(lVar7 + 0x9c8);
      local_b8 = uVar9;
      Variant::Variant(local_88,iVar6);
      Variant::Variant(local_70,(Color *)&local_b8);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = local_88;
      pVStack_a0 = local_70;
      EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar2,(Variant **)&local_c8,(int)&local_a8);
      do {
        pVVar8 = pVVar5 + -0x18;
        pVVar5 = pVVar5 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar5 != local_88);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_00103ac7;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ac7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::_color_changed(Color const&) */

void GradientEdit::_color_changed(Color *param_1)

{
  set_color((int)param_1,(Color *)(ulong)*(uint *)(param_1 + 0x9fc));
  return;
}



/* GradientEdit::reverse_gradient() */

void __thiscall GradientEdit::reverse_gradient(GradientEdit *this)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  iVar3 = *(int *)(this + 0x9fc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 != -1) {
    iVar3 = Gradient::get_point_count();
    iVar3 = (iVar3 - *(int *)(this + 0x9fc)) + -1;
  }
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  uVar2 = *(undefined8 *)(this + 0x9c8);
  local_98 = "";
  local_a0 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Reverse Gradient";
  local_a8 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,uVar2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  StringName::StringName((StringName *)&local_98,"reverse",false);
  local_78 = 0;
  local_70 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar4,*(StringName **)(this + 0x9c8),(Variant **)&local_98,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"set_selected_index",false);
  Variant::Variant((Variant *)&local_78,iVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  EditorUndoRedoManager::add_do_methodp
            (pOVar4,(StringName *)this,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"reverse",false);
  local_78 = 0;
  local_70 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,*(StringName **)(this + 0x9c8),(Variant **)&local_98,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  iVar3 = *(int *)(this + 0x9fc);
  StringName::StringName((StringName *)&local_98,"set_selected_index",false);
  Variant::Variant((Variant *)&local_78,iVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,(StringName *)this,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEdit::GradientEdit() */

void __thiscall GradientEdit::GradientEdit(GradientEdit *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  ColorPicker *this_00;
  CallableCustom *pCVar9;
  PopupPanel *this_01;
  GradientTexture1D *this_02;
  Object *pOVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  float fVar12;
  long local_b0;
  long local_a8 [2];
  char *local_98;
  undefined8 local_90;
  String *local_88;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined ***)this = &PTR__initialize_classv_00113a48;
  *(undefined8 *)(this + 0x9f0) = 0x3f00000000000000;
  uVar3 = _LC134;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa08) = uVar3;
  *(undefined1 (*) [16])(this + 0x9d8) = (undefined1  [16])0x0;
  uVar5 = _UNK_00114758;
  uVar3 = __LC133;
  this[0x9e8] = (GradientEdit)0x0;
  *(undefined4 *)(this + 0x9ec) = 10;
  *(undefined4 *)(this + 0xa10) = 8;
  *(undefined8 *)(this + 0x9f8) = uVar3;
  *(undefined8 *)(this + 0xa00) = uVar5;
  Control::set_focus_mode(this,2);
  fVar12 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar12 * _LC135._4_4_,fVar12 * (float)_LC135);
  Control::set_custom_minimum_size((Vector2 *)this);
  this_00 = (ColorPicker *)operator_new(0xd90,"");
  ColorPicker::ColorPicker(this_00);
  postinitialize_handler((Object *)this_00);
  *(ColorPicker **)(this + 0x9e0) = this_00;
  local_a8[0] = 0;
  local_98 = "interface/inspector/default_color_picker_shape";
  local_90 = 0x2e;
  String::parse_latin1((StrRange *)local_a8);
  _EDITOR_GET((String *)local_78);
  iVar8 = Variant::operator_cast_to_int((Variant *)local_78);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  ColorPicker::set_picker_shape(*(undefined8 *)(this + 0x9e0),iVar8);
  plVar1 = *(long **)(this + 0x9e0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC49;
  *(GradientEdit **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_00113fd0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar3;
  *(code **)(pCVar9 + 0x38) = _color_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "GradientEdit::_color_changed";
  Callable::Callable((Callable *)&local_98,pCVar9);
  StringName::StringName((StringName *)local_a8,"color_changed",false);
  (*pcVar2)(plVar1,(StrRange *)local_a8,(Callable *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  this_01 = (PopupPanel *)operator_new(0xda0,"");
  PopupPanel::PopupPanel(this_01);
  postinitialize_handler((Object *)this_01);
  lVar4 = *(long *)this_01;
  *(PopupPanel **)(this + 0x9d8) = this_01;
  lVar6 = EditorNode::singleton;
  pcVar2 = *(code **)(lVar4 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  *(long *)(pCVar9 + 0x28) = lVar6;
  uVar3 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined ***)pCVar9 = &PTR_hash_00114060;
  *(undefined8 *)(pCVar9 + 0x30) = uVar3;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(code **)(pCVar9 + 0x38) = EditorNode::setup_color_picker;
  *(undefined **)(pCVar9 + 0x20) = &_LC49;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "EditorNode::setup_color_picker";
  Callable::Callable((Callable *)&local_98,pCVar9);
  Variant::Variant((Variant *)local_78,*(Object **)(this + 0x9e0));
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (String *)local_78;
  Callable::bindp((Variant **)local_a8,(int)(Callable *)&local_98);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_b0,"about_to_popup",false);
  (*pcVar2)(this_01,(StringName *)&local_b0,(StrRange *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  Node::add_child(this,*(undefined8 *)(this + 0x9d8),0,1);
  Node::add_child(*(undefined8 *)(this + 0x9d8),*(undefined8 *)(this + 0x9e0),0,0);
  this_02 = (GradientTexture1D *)operator_new(0x308,"");
  GradientTexture1D::GradientTexture1D(this_02);
  postinitialize_handler((Object *)this_02);
  cVar7 = RefCounted::init_ref();
  if (cVar7 == '\0') {
    pOVar10 = *(Object **)(this + 0x9d0);
    if (pOVar10 == (Object *)0x0) goto LAB_001042ff;
    *(undefined8 *)(this + 0x9d0) = 0;
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      this_02 = (GradientTexture1D *)0x0;
      cVar7 = predelete_handler(pOVar10);
      if (cVar7 != '\0') {
LAB_001043eb:
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
        pOVar11 = (Object *)this_02;
        if (this_02 != (GradientTexture1D *)0x0) goto LAB_0010437a;
      }
    }
  }
  else {
    pOVar10 = *(Object **)(this + 0x9d0);
    pOVar11 = pOVar10;
    if (this_02 != (GradientTexture1D *)pOVar10) {
      *(GradientTexture1D **)(this + 0x9d0) = this_02;
      cVar7 = RefCounted::reference();
      pOVar11 = (Object *)this_02;
      if (cVar7 == '\0') {
        *(undefined8 *)(this + 0x9d0) = 0;
        if (pOVar10 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
joined_r0x001043cf:
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0'))
          goto LAB_001043eb;
        }
      }
      else if (pOVar10 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        goto joined_r0x001043cf;
      }
    }
LAB_0010437a:
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar11), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      pOVar10 = *(Object **)(this + 0x9d0);
      goto LAB_001042ff;
    }
  }
  pOVar10 = *(Object **)(this + 0x9d0);
LAB_001042ff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    GradientTexture1D::set_width((int)pOVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEditor::GradientEditor() */

void __thiscall GradientEditor::GradientEditor(GradientEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  Vector2 *pVVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  FlowContainer *this_00;
  Button *pBVar9;
  VSeparator *this_01;
  CallableCustom *pCVar10;
  EditorSpinSlider *this_02;
  GradientEdit *this_03;
  long in_FS_OFFSET;
  double dVar11;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (GradientEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001130b0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  this_00 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_00,false);
  this_00[0xa24] = (FlowContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_001136d0;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa10) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa10);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Reverse/Mirror Gradient";
  local_68 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa10),0,0);
  this_01 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_01);
  postinitialize_handler((Object *)this_01);
  Node::add_child(this_00,this_01,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa18) = pBVar9;
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
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC49;
  *(GradientEditor **)(pCVar10 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_001140f0;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = _set_snap_enabled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "GradientEditor::_set_snap_enabled";
  Callable::Callable((Callable *)&local_58,pCVar10);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_02 = (EditorSpinSlider *)operator_new(0xa70,"");
  EditorSpinSlider::EditorSpinSlider(this_02);
  postinitialize_handler((Object *)this_02);
  *(EditorSpinSlider **)(this + 0xa20) = this_02;
  Range::set_min(_LC146);
  Range::set_max(_LC147);
  Range::set_value(_LC148);
  pVVar5 = *(Vector2 **)(this + 0xa20);
  local_48 = (float)EditorScale::get_scale();
  local_48 = local_48 * __LC149;
  local_44 = 0;
  Control::set_custom_minimum_size(pVVar5);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa20),0);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC49;
  *(GradientEditor **)(pCVar10 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_00114180;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = _set_snap_count;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "GradientEditor::_set_snap_count";
  Callable::Callable((Callable *)&local_58,pCVar10);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (GradientEdit *)operator_new(0xa18,"");
  GradientEdit::GradientEdit(this_03);
  postinitialize_handler((Object *)this_03);
  *(GradientEdit **)(this + 0xa28) = this_03;
  Node::add_child(this,this_03,0,0);
  plVar2 = *(long **)(this + 0xa10);
  lVar6 = *(long *)(this + 0xa28);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC49;
  *(long *)(pCVar10 + 0x28) = lVar6;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_00114210;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = GradientEdit::reverse_gradient;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "GradientEdit::reverse_gradient";
  Callable::Callable((Callable *)&local_58,pCVar10);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Control::set_mouse_filter(this,0);
  bVar8 = (bool)BaseButton::is_pressed();
  GradientEdit::set_snap_enabled(*(GradientEdit **)(this + 0xa28),bVar8);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa20),0));
  dVar11 = (double)Range::get_value();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar7 = (int)dVar11;
    if (100 < (int)dVar11) {
      iVar7 = 100;
    }
    if (iVar7 < 2) {
      iVar7 = 2;
    }
    GradientEdit::set_snap_count(*(GradientEdit **)(this + 0xa28),iVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginGradient::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginGradient::parse_begin(EditorInspectorPluginGradient *this,Object *param_1)

{
  char cVar1;
  Object *pOVar2;
  GradientEditor *pGVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Gradient::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_28 = pOVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
        pGVar3 = (GradientEditor *)operator_new(0xa30,"");
        GradientEditor::GradientEditor(pGVar3);
        postinitialize_handler((Object *)pGVar3);
        GradientEdit::set_gradient(*(GradientEdit **)(pGVar3 + 0xa28),(Ref *)&local_28);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          EditorInspectorPlugin::add_custom_control((Control *)this);
          return;
        }
      }
      else {
        pGVar3 = (GradientEditor *)operator_new(0xa30,"");
        GradientEditor::GradientEditor(pGVar3);
        postinitialize_handler((Object *)pGVar3);
        GradientEdit::set_gradient(*(GradientEdit **)(pGVar3 + 0xa28),(Ref *)&local_28);
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
            goto LAB_00104c5d;
          }
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      goto LAB_00104c5d;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("parse_begin","editor/plugins/gradient_editor_plugin.cpp",0x296,
                     "Parameter \"gradient\" is null.",0,0);
    return;
  }
LAB_00104c5d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientEdit::gui_input(Ref<InputEvent> const&) */

void __thiscall GradientEdit::gui_input(GradientEdit *this,Ref *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  char cVar6;
  GradientEdit GVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  Object *pOVar11;
  Object *pOVar12;
  Object *pOVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long in_FS_OFFSET;
  float fVar26;
  float fVar27;
  double dVar29;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b0;
  float local_ac;
  float local_98;
  float local_68;
  float fStack_64;
  undefined1 local_58 [16];
  long local_40;
  ulong uVar16;
  
  lVar22 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar22 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("gui_input","editor/plugins/gradient_editor_plugin.cpp",0xee,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_001059c6;
  }
  pOVar11 = (Object *)__dynamic_cast(lVar22,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if (pOVar11 == (Object *)0x0) {
LAB_00104cfa:
    pOVar12 = (Object *)__dynamic_cast(lVar22,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar12 == (Object *)0x0) {
      lVar22 = *(long *)param_1;
LAB_00104d58:
      pOVar13 = (Object *)
                __dynamic_cast(lVar22,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
      if (pOVar13 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        if (cVar6 != '\0') {
          iVar8 = _get_gradient_rect_width(this);
          fVar26 = (float)InputEventMouse::get_position();
          GVar7 = this[0x9e8];
          fVar26 = fVar26 - (float)(*(int *)(this + 0xa10) / 2);
          if (GVar7 == (GradientEdit)0x0) {
            GVar7 = (GradientEdit)InputEventWithModifiers::is_ctrl_pressed();
            if (*(int *)(this + 0x9f0) == 0) goto LAB_00105065;
LAB_00104dd2:
            *(undefined4 *)(this + 0xa00) = 0xffffffff;
            fVar26 = fVar26 / (float)iVar8;
            if (fVar26 < 0.0) {
              local_dc = 0.0;
            }
            else {
              local_dc = _LC47;
              if (fVar26 <= _LC47) {
                local_dc = fVar26;
              }
            }
            cVar6 = InputEventWithModifiers::is_shift_pressed();
            if (cVar6 == '\0') {
              if (GVar7 != (GradientEdit)0x0) {
                dVar29 = (double)Math::snapped((double)local_dc,
                                               _LC170 / (double)*(int *)(this + 0x9ec));
                local_dc = (float)dVar29;
              }
            }
            else {
              fVar26 = _LC166;
              if (GVar7 != (GradientEdit)0x0) {
                fVar26 = (float)(_LC53 / (double)*(int *)(this + 0x9ec));
              }
              iVar8 = *(int *)(this + 0x9fc);
              if (iVar8 < 1) {
LAB_00104e6b:
                iVar9 = Gradient::get_point_count();
                if (iVar8 < iVar9 + -1) {
                  local_d0 = -NAN;
                  fVar27 = fVar26;
LAB_00105590:
                  fVar26 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                  fVar26 = fVar26 - local_dc;
                  if (fVar26 < 0.0) {
                    fVar26 = (float)((uint)fVar26 ^ __LC48);
                  }
                  if (fVar26 < fVar27) {
                    local_d0 = (float)(*(int *)(this + 0x9fc) + 1);
                  }
                  goto LAB_00105181;
                }
              }
              else {
                fVar27 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                fVar27 = fVar27 - local_dc;
                if (fVar27 < 0.0) {
                  fVar27 = (float)((uint)fVar27 ^ __LC48);
                }
                iVar8 = *(int *)(this + 0x9fc);
                if (fVar26 <= fVar27) goto LAB_00104e6b;
                local_d0 = (float)(iVar8 + -1);
                iVar9 = Gradient::get_point_count();
                if (iVar8 < iVar9 + -1) goto LAB_00105590;
LAB_00105181:
                if (local_d0 != -NAN) {
                  fVar27 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                  fVar26 = _LC125;
                  if (local_dc <= fVar27) {
                    fVar26 = _LC167;
                  }
                  fVar27 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                  fVar27 = fVar27 + fVar26;
                  if (fVar27 < 0.0) {
                    local_dc = 0.0;
                  }
                  else {
                    local_dc = _LC47;
                    if (fVar27 <= _LC47) {
                      local_dc = fVar27;
                    }
                  }
                  goto LAB_00104e88;
                }
              }
              if (GVar7 != (GradientEdit)0x0) {
                dVar29 = (double)Math::snapped((double)local_dc,
                                               _LC170 / (double)*(int *)(this + 0x9ec));
                local_dc = (float)dVar29;
              }
            }
LAB_00104e88:
            iVar8 = 0;
            while( true ) {
              iVar9 = Gradient::get_point_count();
              if (iVar9 <= iVar8) break;
              fVar26 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
              if ((fVar26 == local_dc) && (*(int *)(this + 0x9fc) != iVar8)) goto LAB_00104f28;
              iVar8 = iVar8 + 1;
            }
            if (*(int *)(this + 0x9fc) != -1) {
              iVar8 = 0;
              Gradient::set_offset((int)*(undefined8 *)(this + 0x9c8),local_dc);
              while( true ) {
                iVar9 = Gradient::get_point_count();
                if (iVar9 <= iVar8) break;
                fVar26 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                if (fVar26 == local_dc) {
                  *(int *)(this + 0x9fc) = iVar8;
                  CanvasItem::queue_redraw();
                  break;
                }
                iVar8 = iVar8 + 1;
              }
            }
          }
          else {
            if (*(int *)(this + 0x9f0) != 0) goto LAB_00104dd2;
LAB_00105065:
            iVar8 = _get_point_at(this,(int)fVar26);
            if (*(int *)(this + 0xa00) != iVar8) {
              *(int *)(this + 0xa00) = iVar8;
              CanvasItem::queue_redraw();
            }
          }
LAB_00104f28:
          cVar6 = RefCounted::unreference();
          if (cVar6 != '\0') {
            cVar6 = predelete_handler(pOVar13);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
              Memory::free_static(pOVar13,false);
            }
          }
        }
      }
      if (pOVar12 != (Object *)0x0) {
LAB_00104f65:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar12);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
    }
    else {
      cVar6 = RefCounted::reference();
      if (cVar6 != '\0') {
        cVar6 = InputEvent::is_pressed();
        if (cVar6 == '\0') {
LAB_00104d3a:
          iVar8 = InputEventMouseButton::get_button_index();
          if (iVar8 == 1) {
            cVar6 = InputEvent::is_pressed();
            if (cVar6 == '\0') {
              if (*(int *)(this + 0x9f0) == 2) {
                fVar26 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                set_offset(this,*(int *)(this + 0x9fc),fVar26);
                *(undefined4 *)(this + 0x9f0) = 0;
              }
              else if (*(int *)(this + 0x9f0) == 1) {
                fVar26 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                auVar40 = Gradient::get_color((int)*(undefined8 *)(this + 0x9c8));
                local_58 = auVar40;
                Gradient::remove_point((int)*(undefined8 *)(this + 0x9c8));
                add_point(this,fVar26,(Color *)local_58);
                *(undefined4 *)(this + 0x9f0) = 0;
              }
            }
          }
          lVar22 = *(long *)param_1;
          if (lVar22 != 0) goto LAB_00104d58;
        }
        else {
          fVar26 = (float)InputEventMouse::get_position();
          GVar7 = this[0x9e8];
          fVar26 = fVar26 - (float)(*(int *)(this + 0xa10) / 2);
          if (GVar7 == (GradientEdit)0x0) {
            GVar7 = (GradientEdit)InputEventWithModifiers::is_ctrl_pressed();
          }
          iVar8 = InputEventMouseButton::get_button_index();
          if ((iVar8 == 2) || (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 3)) {
            if ((*(int *)(this + 0x9f0) == 2) &&
               (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 2)) {
              Gradient::set_offset((int)*(undefined8 *)(this + 0x9c8),*(float *)(this + 0x9f4));
              *(undefined4 *)(this + 0x9fc) = *(undefined4 *)(this + 0x9f8);
              CanvasItem::queue_redraw();
            }
            else {
              iVar8 = _get_point_at(this,(int)fVar26);
              if (iVar8 == -1) {
                *(undefined4 *)(this + 0x9fc) = 0xffffffff;
                CanvasItem::queue_redraw();
              }
              else {
                if (*(int *)(this + 0x9f0) == 1) {
                  Gradient::remove_point((int)*(undefined8 *)(this + 0x9c8));
                  *(undefined4 *)(this + 0x9fc) = 0xffffffff;
                  CanvasItem::queue_redraw();
                }
                else {
                  remove_point((int)this);
                }
                *(undefined4 *)(this + 0xa00) = 0xffffffff;
              }
            }
            *(undefined4 *)(this + 0x9f0) = 0;
            Control::accept_event();
          }
          iVar8 = InputEventMouseButton::get_button_index();
          if (iVar8 != 1) goto LAB_00104d3a;
          iVar8 = _get_gradient_rect_width(this);
          if ((float)(*(int *)(this + 0xa0c) + iVar8) < fVar26) {
            cVar6 = InputEventMouseButton::is_double_click();
            if (cVar6 == '\0') {
              _show_color_picker(this);
            }
            Control::accept_event();
          }
          else {
            cVar6 = InputEventMouseButton::is_double_click();
            if (cVar6 == '\0') {
              if (*(int *)(this + 0x9f0) == 0) {
                uVar10 = _get_point_at(this,(int)fVar26);
                *(undefined4 *)(this + 0x9fc) = uVar10;
                CanvasItem::queue_redraw();
                if (*(int *)(this + 0x9fc) != -1) goto LAB_0010532c;
              }
              else {
                if (*(int *)(this + 0x9fc) == -1) goto LAB_00104d3a;
LAB_0010532c:
                cVar6 = InputEventWithModifiers::is_alt_pressed();
                if (cVar6 == '\0') {
                  *(undefined4 *)(this + 0x9f0) = 2;
                  uVar10 = Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                  *(undefined4 *)(this + 0x9f4) = uVar10;
                  *(undefined4 *)(this + 0x9f8) = *(undefined4 *)(this + 0x9fc);
                  goto LAB_00104d3a;
                }
              }
              if (*(int *)(this + 0x9f0) != 0) goto LAB_00104d3a;
              fVar27 = fVar26 / (float)iVar8;
              if (fVar27 < 0.0) {
                local_d0 = 0.0;
              }
              else {
                local_d0 = _LC47;
                if (fVar27 <= _LC47) {
                  local_d0 = fVar27;
                }
              }
              if (GVar7 != (GradientEdit)0x0) {
                dVar29 = (double)Math::snapped((double)local_d0,
                                               _LC170 / (double)*(int *)(this + 0x9ec));
                local_d0 = (float)dVar29;
              }
              for (iVar8 = 0; iVar9 = Gradient::get_point_count(), iVar8 < iVar9; iVar8 = iVar8 + 1)
              {
                fVar27 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                if (fVar27 == local_d0) {
                  cVar6 = InputEventWithModifiers::is_alt_pressed();
                  if (cVar6 == '\0') goto LAB_00104f65;
                  fVar27 = (float)Gradient::get_offset((int)*(undefined8 *)(this + 0x9c8));
                  if (_LC170 <= (double)fVar27 + __LC171) {
                    local_d0 = _LC47;
                  }
                  else {
                    local_d0 = (float)((double)fVar27 + __LC171);
                  }
                }
              }
              lVar22 = *(long *)(this + 0x9c8);
              uVar23 = *(uint *)(lVar22 + 0x240);
              if (uVar23 == 0) {
                local_cc = 0.0;
                fStack_64 = 0.0;
                local_68 = 0.0;
                fVar27 = _LC47;
                goto LAB_001058db;
              }
              if (*(char *)(lVar22 + 0x250) == '\0') {
                LocalVector<Gradient::Point,unsigned_int,false,false>::
                sort_custom<_DefaultComparator<Gradient::Point>>
                          ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar22 + 0x240)
                          );
                *(undefined1 *)(lVar22 + 0x250) = 1;
                uVar23 = *(uint *)(lVar22 + 0x240);
              }
              uVar24 = (ulong)uVar23;
              iVar8 = 0;
              iVar9 = uVar23 - 1;
              if (iVar9 < 0) {
                _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                                 "low > high, this may be a bug",0,0);
                uVar20 = 0;
                uVar24 = (ulong)*(uint *)(lVar22 + 0x240);
              }
              else {
                do {
                  uVar20 = (iVar8 + iVar9) / 2;
                  if (uVar23 <= uVar20) {
                    uVar16 = (ulong)uVar20;
                    goto LAB_0010594c;
                  }
                  pfVar14 = (float *)(*(long *)(lVar22 + 0x248) + (long)(int)uVar20 * 0x14);
                  if (local_d0 < *pfVar14) {
                    iVar9 = uVar20 - 1;
                  }
                  else {
                    if (local_d0 <= *pfVar14) {
                      local_68 = pfVar14[1];
                      fStack_64 = pfVar14[2];
                      local_cc = pfVar14[3];
                      fVar27 = pfVar14[4];
                      goto LAB_001058db;
                    }
                    iVar8 = uVar20 + 1;
                  }
                } while (iVar8 <= iVar9);
              }
              fVar28 = _LC178;
              uVar23 = (uint)uVar24;
              if (uVar23 <= uVar20) {
LAB_00105cbf:
                uVar16 = (ulong)(int)uVar20;
LAB_0010594c:
                _err_print_index_error
                          ("operator[]","./core/templates/local_vector.h",0xb2,uVar16,uVar24,
                           "p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              lVar25 = *(long *)(lVar22 + 0x248);
              pfVar14 = (float *)((long)(int)uVar20 * 0x14 + lVar25);
              if (*pfVar14 <= local_d0) {
                uVar21 = uVar20 + 1;
                if ((int)uVar23 <= (int)uVar21) goto LAB_00105ab5;
                uVar19 = uVar20;
                if (uVar23 <= uVar21) {
                  uVar16 = (ulong)(int)uVar21;
                  goto LAB_0010594c;
                }
LAB_00105aed:
                pfVar17 = (float *)((long)(int)uVar21 * 0x14 + lVar25);
                if (*(int *)(lVar22 + 0x254) == 1) goto LAB_00105ac0;
                fVar31 = (local_d0 - *pfVar14) / (*pfVar17 - *pfVar14);
                if (*(int *)(lVar22 + 0x254) == 2) {
                  uVar15 = uVar19 - 1;
                  uVar20 = uVar19 + 2;
                  if ((int)uVar20 < (int)uVar23) {
                    if (uVar15 == 0xffffffff) {
                      uVar15 = 0;
                    }
                    else {
LAB_00106124:
                      if (uVar23 <= uVar15) goto LAB_00105aad;
                    }
                    lVar18 = (long)(int)uVar15 * 0x14 + lVar25;
                    uVar21 = uVar20;
                    if (uVar23 <= uVar20) goto LAB_00105cbf;
                  }
                  else {
                    lVar18 = lVar25;
                    uVar20 = uVar21;
                    if (uVar15 != 0xffffffff) goto LAB_00106124;
                  }
                  lVar25 = lVar25 + (long)(int)uVar21 * 0x14;
                  uVar1 = *(undefined8 *)*(undefined1 (*) [12])(lVar18 + 4);
                  fVar32 = (float)uVar1;
                  local_cc = *(float *)(lVar18 + 0xc);
                  fVar30 = (float)((ulong)uVar1 >> 0x20);
                  fVar27 = *(float *)(lVar18 + 0x10);
                  iVar8 = *(int *)(lVar22 + 600);
                  if (iVar8 == 1) {
                    if (_LC178 <= local_cc) {
                      local_cc = powf((float)(((double)local_cc + __LC180) * __LC181),_LC182);
                    }
                    else {
                      local_cc = local_cc * _LC179;
                    }
                    if (fVar28 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar30 = fVar30 * _LC179;
                    }
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    fVar34 = pfVar14[3];
                    auVar41._8_4_ = local_cc;
                    auVar41._0_8_ = CONCAT44(fVar30,fVar32);
                    auVar45._8_4_ = local_cc;
                    auVar45._0_8_ = CONCAT44(fVar30,fVar32);
                    fVar32 = pfVar14[1];
                    local_ac = pfVar14[4];
                    fVar30 = pfVar14[2];
                    if (fVar28 <= fVar34) {
                      fVar34 = powf((float)(((double)fVar34 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar34 = fVar34 * _LC179;
                    }
                    if (fVar28 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar30 = fVar30 * _LC179;
                    }
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    auVar43._8_4_ = fVar34;
                    auVar43._0_8_ = CONCAT44(fVar30,fVar32);
                    auVar4._8_4_ = fVar34;
                    auVar4._0_8_ = CONCAT44(fVar30,fVar32);
                    local_b0 = pfVar17[4];
                    fVar32 = pfVar17[3];
                    fVar30 = pfVar17[1];
                    fVar34 = pfVar17[2];
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    if (fVar28 <= fVar34) {
                      fVar34 = powf((float)(((double)fVar34 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar34 = fVar34 * _LC179;
                    }
                    if (fVar28 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar30 = fVar30 * _LC179;
                    }
                    local_98 = *(float *)(lVar25 + 0x10);
                    fVar33 = *(float *)(lVar25 + 0xc);
                    auVar44._8_4_ = fVar32;
                    auVar44._0_8_ = CONCAT44(fVar34,fVar30);
                    auVar5._8_4_ = fVar32;
                    auVar5._0_8_ = CONCAT44(fVar34,fVar30);
                    local_68 = *(float *)(lVar25 + 4);
                    fStack_64 = *(float *)(lVar25 + 8);
                    if (fVar28 <= fVar33) {
                      fVar33 = powf((float)(((double)fVar33 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar33 = _LC179 * fVar33;
                    }
                    if (fVar28 <= fStack_64) {
                      fStack_64 = powf((float)(((double)fStack_64 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fStack_64 = fStack_64 * _LC179;
                    }
                    if (fVar28 <= local_68) {
                      local_68 = powf((float)(((double)local_68 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      local_68 = local_68 * _LC179;
                      auVar41 = auVar45;
                      auVar43 = auVar4;
                      auVar44 = auVar5;
                    }
                  }
                  else if (iVar8 == 2) {
                    if (_LC178 <= local_cc) {
                      powf((float)(((double)local_cc + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar32) {
                      powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    auVar41 = ok_color::linear_srgb_to_oklab();
                    fVar32 = pfVar14[1];
                    local_ac = pfVar14[4];
                    fVar30 = pfVar14[2];
                    if (fVar28 <= pfVar14[3]) {
                      powf((float)(((double)pfVar14[3] + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar32) {
                      powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    auVar43 = ok_color::linear_srgb_to_oklab();
                    local_b0 = pfVar17[4];
                    fVar32 = pfVar17[1];
                    fVar30 = pfVar17[2];
                    if (fVar28 <= pfVar17[3]) {
                      powf((float)(((double)pfVar17[3] + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar32) {
                      powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    auVar44 = ok_color::linear_srgb_to_oklab();
                    local_98 = *(float *)(lVar25 + 0x10);
                    fVar32 = *(float *)(lVar25 + 4);
                    fVar30 = *(float *)(lVar25 + 0xc);
                    fVar34 = *(float *)(lVar25 + 8);
                    if (fVar28 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar30 = fVar30 * _LC179;
                    }
                    if (fVar28 <= fVar34) {
                      fVar34 = powf((float)(((double)fVar34 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar34 = fVar34 * _LC179;
                    }
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    auVar45 = ok_color::linear_srgb_to_oklab
                                        ((ok_color *)CONCAT44(fVar34,fVar32),fVar30);
                    fVar33 = auVar45._8_4_;
                    local_68 = auVar45._0_4_;
                    fStack_64 = auVar45._4_4_;
                  }
                  else {
                    local_98 = *(float *)(lVar25 + 0x10);
                    local_68 = *(float *)(lVar25 + 4);
                    local_ac = pfVar14[4];
                    fVar33 = *(float *)(lVar25 + 0xc);
                    local_b0 = pfVar17[4];
                    fStack_64 = *(float *)(lVar25 + 8);
                    auVar41 = *(undefined1 (*) [12])(lVar18 + 4);
                    auVar43 = *(undefined1 (*) [12])(pfVar14 + 1);
                    auVar44 = *(undefined1 (*) [12])(pfVar17 + 1);
                  }
                  local_c8 = auVar44._8_4_;
                  fVar28 = auVar43._8_4_;
                  local_cc = auVar41._8_4_;
                  fVar32 = auVar43._0_4_;
                  fVar30 = auVar43._4_4_;
                  fVar38 = auVar41._0_4_;
                  fVar39 = auVar41._4_4_;
                  fVar35 = fVar31 * fVar31;
                  fVar34 = fVar31 * fVar35;
                  fVar36 = auVar44._0_4_;
                  fVar37 = auVar44._4_4_;
                  local_68 = (((((fVar38 + fVar38) - _LC191 * fVar32) + (float)_LC192 * fVar36) -
                              local_68) * fVar35 + (fVar36 - fVar38) * fVar31 + fVar32 + fVar32 +
                             (((fVar32 * _LC193 - fVar38) - _LC193 * fVar36) + local_68) * fVar34) *
                             _LC57;
                  fStack_64 = (((((fVar39 + fVar39) - _UNK_001146ec * fVar30) +
                                _LC192._4_4_ * fVar37) - fStack_64) * fVar35 +
                               (fVar37 - fVar39) * fVar31 + fVar30 + fVar30 +
                              (((fVar30 * _UNK_001146fc - fVar39) - _UNK_001146fc * fVar37) +
                              fStack_64) * fVar34) * _UNK_00114734;
                  local_cc = ((((fVar28 * _LC193 - local_cc) - local_c8 * _LC193) + fVar33) * fVar34
                             + ((((local_cc + local_cc) - fVar28 * _LC191) +
                                local_c8 * (float)_LC192) - fVar33) * fVar35 +
                               (local_c8 - local_cc) * fVar31 + fVar28 + fVar28) * _LC57;
                  fVar27 = (((((fVar27 + fVar27) - _LC191 * local_ac) + (float)_LC192 * local_b0) -
                            local_98) * fVar35 + (local_b0 - fVar27) * fVar31 + local_ac + local_ac
                           + fVar34 * (((local_ac * _LC193 - fVar27) - local_b0 * _LC193) + local_98
                                      )) * _LC57;
                  if (iVar8 == 1) goto LAB_00105da2;
joined_r0x00106410:
                  if (iVar8 == 2) {
                    auVar41 = ok_color::oklab_to_linear_srgb();
                    fVar28 = _LC183;
                    local_cc = auVar41._8_4_;
                    local_68 = auVar41._0_4_;
                    fStack_64 = auVar41._4_4_;
                    if (_LC183 <= local_cc) {
                      fVar31 = powf(local_cc,_LC185);
                      local_cc = (float)((double)fVar31 * __LC186 - __LC180);
                    }
                    else {
                      local_cc = _LC184 * local_cc;
                    }
                    if (fVar28 <= fStack_64) {
                      fVar31 = powf(fStack_64,_LC185);
                      fStack_64 = (float)((double)fVar31 * __LC186 - __LC180);
                    }
                    else {
                      fStack_64 = fStack_64 * _LC184;
                    }
                    if (local_68 < fVar28) goto LAB_00105c98;
                    fVar28 = powf(local_68,_LC185);
                    local_68 = (float)((double)fVar28 * __LC186 - __LC180);
                  }
                }
                else {
                  uVar1 = *(undefined8 *)*(undefined1 (*) [12])(pfVar14 + 1);
                  iVar8 = *(int *)(lVar22 + 600);
                  fVar32 = (float)uVar1;
                  fVar30 = (float)((ulong)uVar1 >> 0x20);
                  local_cc = pfVar14[3];
                  fVar27 = pfVar14[4];
                  if (iVar8 == 1) {
                    if (_LC178 <= local_cc) {
                      local_cc = powf((float)(((double)local_cc + __LC180) * __LC181),_LC182);
                    }
                    else {
                      local_cc = local_cc * _LC179;
                    }
                    if (fVar28 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar30 = fVar30 * _LC179;
                    }
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    auVar42._8_4_ = local_cc;
                    auVar42._0_8_ = CONCAT44(fVar30,fVar32);
                    auVar3._8_4_ = local_cc;
                    auVar3._0_8_ = CONCAT44(fVar30,fVar32);
                    local_68 = pfVar17[1];
                    local_c8 = pfVar17[4];
                    fStack_64 = pfVar17[2];
                    fVar32 = pfVar17[3];
                    if (fVar28 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fVar32 = fVar32 * _LC179;
                    }
                    if (fVar28 <= fStack_64) {
                      fStack_64 = powf((float)(((double)fStack_64 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      fStack_64 = fStack_64 * _LC179;
                    }
                    if (fVar28 <= local_68) {
                      local_68 = powf((float)(((double)local_68 + __LC180) * __LC181),_LC182);
                    }
                    else {
                      local_68 = local_68 * _LC179;
                      auVar42 = auVar3;
                    }
                  }
                  else if (iVar8 == 2) {
                    if (_LC178 <= local_cc) {
                      powf((float)(((double)local_cc + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar32) {
                      powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    auVar42 = ok_color::linear_srgb_to_oklab();
                    fVar32 = pfVar17[1];
                    local_c8 = pfVar17[4];
                    fVar30 = pfVar17[2];
                    if (fVar28 <= pfVar17[3]) {
                      powf((float)(((double)pfVar17[3] + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar30) {
                      powf((float)(((double)fVar30 + __LC180) * __LC181),_LC182);
                    }
                    if (fVar28 <= fVar32) {
                      powf((float)(((double)fVar32 + __LC180) * __LC181),_LC182);
                    }
                    auVar41 = ok_color::linear_srgb_to_oklab();
                    fVar32 = auVar41._8_4_;
                    local_68 = auVar41._0_4_;
                    fStack_64 = auVar41._4_4_;
                  }
                  else {
                    local_c8 = pfVar17[4];
                    local_68 = pfVar17[1];
                    fStack_64 = pfVar17[2];
                    fVar32 = pfVar17[3];
                    auVar42 = *(undefined1 (*) [12])(pfVar14 + 1);
                  }
                  local_cc = auVar42._8_4_;
                  local_cc = (fVar32 - local_cc) * fVar31 + local_cc;
                  local_68 = (local_68 - auVar42._0_4_) * fVar31 + auVar42._0_4_;
                  fStack_64 = (fStack_64 - auVar42._4_4_) * fVar31 + auVar42._4_4_;
                  fVar27 = (local_c8 - fVar27) * fVar31 + fVar27;
                  if (iVar8 != 1) goto joined_r0x00106410;
LAB_00105da2:
                  fVar28 = _LC183;
                  if (_LC183 <= local_cc) {
                    fVar31 = powf(local_cc,_LC185);
                    local_cc = (float)((double)fVar31 * __LC186 - __LC180);
                  }
                  else {
                    local_cc = local_cc * _LC184;
                  }
                  if (fVar28 <= fStack_64) {
                    fVar31 = powf(fStack_64,_LC185);
                    fStack_64 = (float)((double)fVar31 * __LC186 - __LC180);
                  }
                  else {
                    fStack_64 = fStack_64 * _LC184;
                  }
                  if (fVar28 <= local_68) {
                    fVar28 = powf(local_68,_LC185);
                    local_68 = (float)((double)fVar28 * __LC186 - __LC180);
                    goto LAB_001058db;
                  }
LAB_00105c98:
                  local_68 = local_68 * _LC184;
                }
              }
              else {
                if ((int)uVar20 < (int)uVar23) {
                  uVar15 = uVar20 - 1;
                  if (uVar20 == 0) {
                    local_68 = *(float *)(lVar25 + 4);
                    fStack_64 = *(float *)(lVar25 + 8);
                    local_cc = *(float *)(lVar25 + 0xc);
                    fVar27 = *(float *)(lVar25 + 0x10);
                    goto LAB_001058db;
                  }
                  if (uVar15 < uVar23) {
                    pfVar14 = (float *)((long)(int)uVar15 * 0x14 + lVar25);
                    uVar19 = uVar15;
                    uVar21 = uVar20;
                    goto LAB_00105aed;
                  }
LAB_00105aad:
                  uVar16 = (ulong)(int)uVar15;
                  goto LAB_0010594c;
                }
LAB_00105ab5:
                pfVar14 = (float *)((ulong)(uVar23 - 1) * 0x14 + lVar25);
LAB_00105ac0:
                local_68 = pfVar14[1];
                fStack_64 = pfVar14[2];
                local_cc = pfVar14[3];
                fVar27 = pfVar14[4];
              }
LAB_001058db:
              local_58._0_8_ = CONCAT44(fStack_64,local_68);
              local_58._8_8_ = CONCAT44(fVar27,local_cc);
              cVar6 = InputEventWithModifiers::is_alt_pressed();
              if (cVar6 != '\0') {
                iVar8 = _get_point_at(this,(int)fVar26);
                if (iVar8 != -1) {
                  local_58 = Gradient::get_color((int)*(undefined8 *)(this + 0x9c8));
                }
              }
              Gradient::add_point(local_d0,*(Color **)(this + 0x9c8));
              uVar10 = _predict_insertion_index(this,local_d0);
              *(undefined4 *)(this + 0x9fc) = uVar10;
              CanvasItem::queue_redraw();
              *(undefined4 *)(this + 0x9f0) = 1;
              goto LAB_00104d3a;
            }
            uVar10 = _get_point_at(this,(int)fVar26);
            *(undefined4 *)(this + 0x9fc) = uVar10;
            CanvasItem::queue_redraw();
            _show_color_picker(this);
            Control::accept_event();
          }
        }
        goto LAB_00104f65;
      }
      lVar22 = *(long *)param_1;
      if (lVar22 != 0) {
        pOVar12 = (Object *)0x0;
        goto LAB_00104d58;
      }
    }
    if (pOVar11 != (Object *)0x0) {
LAB_00104f7a:
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar11);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar11,false);
            return;
          }
          goto LAB_001059c6;
        }
      }
    }
  }
  else {
    cVar6 = RefCounted::reference();
    if (cVar6 != '\0') {
      cVar6 = InputEvent::is_pressed();
      if (((cVar6 != '\0') && (iVar8 = InputEventKey::get_keycode(), iVar8 == 0x400008)) &&
         (*(int *)(this + 0x9fc) != -1)) {
        if (*(int *)(this + 0x9f0) == 1) {
          Gradient::remove_point((int)*(undefined8 *)(this + 0x9c8));
          *(undefined4 *)(this + 0x9fc) = 0xffffffff;
          CanvasItem::queue_redraw();
        }
        else {
          remove_point((int)this);
        }
        *(undefined4 *)(this + 0x9f0) = 0;
        *(undefined4 *)(this + 0xa00) = 0xffffffff;
        Control::accept_event();
      }
      lVar22 = *(long *)param_1;
      if (lVar22 != 0) goto LAB_00104cfa;
      goto LAB_00104f7a;
    }
    lVar22 = *(long *)param_1;
    pOVar11 = (Object *)0x0;
    if (lVar22 != 0) goto LAB_00104cfa;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001059c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::_bind_methods() */

void GradientEdit::_bind_methods(void)

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
  pMVar4 = create_method_bind<GradientEdit,int>(set_selected_index);
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
  return (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* GradientEdit::is_class_ptr(void*) const */

uint __thiscall GradientEdit::is_class_ptr(GradientEdit *this,void *param_1)

{
  return (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginGradient::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginGradient::is_class_ptr(EditorInspectorPluginGradient *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginGradient::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginGradient::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginGradient::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginGradient::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginGradient::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginGradient::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginGradient::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginGradient::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginGradient::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginGradient::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginGradient::_notificationv(int, bool) */

void EditorInspectorPluginGradient::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GradientEditorPlugin::is_class_ptr(void*) const */

uint __thiscall GradientEditorPlugin::is_class_ptr(GradientEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1143,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1144,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GradientEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 GradientEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 GradientEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 GradientEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GradientEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GradientEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<GradientEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GradientEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<GradientEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this)

{
  return;
}



/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void,Color_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void,Color_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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



/* CallableCustomMethodPointer<GradientEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEdit,void>::get_argument_count
          (CallableCustomMethodPointer<GradientEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GradientEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<GradientEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GradientEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::get_argument_count
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEdit,void,Color_const&>::get_argument_count
          (CallableCustomMethodPointer<GradientEdit,void,Color_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_argument_count
          (CallableCustomMethodPointer<CanvasItem,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void,Color_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void,Color_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GradientEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GradientEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GradientEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void> *this)

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



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* GradientEdit::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GradientEdit::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GradientEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GradientEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* GradientEdit::_property_can_revertv(StringName const&) const */

undefined8 GradientEdit::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GradientEditor::_property_can_revertv(StringName const&) const */

undefined8 GradientEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GradientEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void GradientEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00119010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112f50;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112f50;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Ref<Shader>::~Ref() */

void __thiscall Ref<Shader>::~Ref(Ref<Shader> *this)

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
        return;
      }
    }
  }
  return;
}



/* List<Color, DefaultAllocator>::~List() */

undefined8 __thiscall List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x20) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 0x10);
      lVar2 = *(long *)((long)pvVar1 + 0x18);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x10);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* CallableCustomMethodPointer<GradientEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::get_object
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this)

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
      goto LAB_00107ced;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107ced;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107ced:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GradientEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::get_object
          (CallableCustomMethodPointer<GradientEditor,void,int> *this)

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
      goto LAB_00107ded;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107ded;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107ded:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEdit,void,Color_const&>::get_object
          (CallableCustomMethodPointer<GradientEdit,void,Color_const&> *this)

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
      goto LAB_00107eed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107eed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107eed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::get_object
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this)

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
      goto LAB_00107fed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107fed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107fed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_object
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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
      goto LAB_001080ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001080ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001080ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GradientEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientEdit,void>::get_object
          (CallableCustomMethodPointer<GradientEdit,void> *this)

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
      goto LAB_001081ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001081ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001081ed:
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
    uVar1 = (uint)CONCAT71(0x1144,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1143,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1144,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1144,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1144,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* GradientEditorPlugin::_notificationv(int, bool) */

void __thiscall
GradientEditorPlugin::_notificationv(GradientEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119018 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00119018 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* GradientEditor::is_class_ptr(void*) const */

ulong GradientEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1144,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1144,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1144,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1144,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1144,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1144,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* GradientEdit::_validate_propertyv(PropertyInfo&) const */

void GradientEdit::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119020 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* GradientEditor::_validate_propertyv(PropertyInfo&) const */

void GradientEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HFlowContainer::_validate_propertyv(PropertyInfo&) const */

void HFlowContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119030 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* GradientEdit::_setv(StringName const&, Variant const&) */

undefined8 GradientEdit::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* GradientEditor::_setv(StringName const&, Variant const&) */

undefined8 GradientEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108718) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108788) */
/* GradientEdit::_getv(StringName const&, Variant&) const */

undefined8 GradientEdit::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001087f8) */
/* GradientEditor::_getv(StringName const&, Variant&) const */

undefined8 GradientEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* GradientEdit::~GradientEdit() */

void __thiscall GradientEdit::~GradientEdit(GradientEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113a48;
  if (*(long *)(this + 0x9d0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9d0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
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



/* GradientEdit::~GradientEdit() */

void __thiscall GradientEdit::~GradientEdit(GradientEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00113a48;
  if (*(long *)(this + 0x9d0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9d0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x9c8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9c8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xa18);
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
      if (StringName::configured == '\0') goto LAB_001089e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001089e0:
  Control::~Control((Control *)this);
  return;
}



/* GradientEditor::~GradientEditor() */

void __thiscall GradientEditor::~GradientEditor(GradientEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108a40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108a40:
  Control::~Control((Control *)this);
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
      if (StringName::configured == '\0') goto LAB_00108aa0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108aa0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* GradientEditor::~GradientEditor() */

void __thiscall GradientEditor::~GradientEditor(GradientEditor *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108b10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108b10:
  Control::~Control((Control *)this);
  operator_delete(this,0xa30);
  return;
}



/* SortArray<Gradient::Point, _DefaultComparator<Gradient::Point>, true>::introsort(long, long,
   Gradient::Point*, long) const [clone .isra.0] */

void SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
               (long param_1,long param_2,Point *param_3,long param_4)

{
  Point *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  long lVar11;
  long lVar12;
  Point *pPVar13;
  long lVar14;
  Point *pPVar15;
  long lVar16;
  Point *pPVar17;
  long lVar18;
  Point *pPVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  long local_b8;
  float local_78;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  
  lVar14 = param_2 - param_1;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar14) {
    if (param_4 != 0) {
      lVar21 = param_2;
      local_b8 = param_4;
LAB_00108c01:
      local_b8 = local_b8 + -1;
      fVar2 = *(float *)(param_3 + param_1 * 0x14);
      fVar3 = *(float *)(param_3 + ((lVar14 >> 1) + param_1) * 0x14);
      fVar4 = *(float *)(param_3 + lVar21 * 0x14 + -0x14);
      if (fVar3 <= fVar2) {
        fVar23 = fVar2;
        if ((fVar4 <= fVar2) && (fVar23 = fVar4, fVar4 <= fVar3)) {
          fVar23 = fVar3;
        }
      }
      else {
        fVar23 = fVar3;
        if ((fVar4 <= fVar3) && (fVar23 = fVar4, fVar4 <= fVar2)) {
          fVar23 = fVar2;
        }
      }
      lVar14 = lVar21;
      pPVar17 = param_3 + param_1 * 0x14;
      param_2 = param_1;
      do {
        if (*(float *)pPVar17 <= fVar23 && fVar23 != *(float *)pPVar17) {
          if (lVar21 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00108c7c;
          }
        }
        else {
LAB_00108c7c:
          lVar14 = lVar14 + -1;
          pPVar19 = param_3 + lVar14 * 0x14;
          if (fVar23 < *(float *)pPVar19) {
            pPVar13 = param_3 + lVar14 * 0x14 + -0x14;
            while (param_1 != lVar14) {
              lVar14 = lVar14 + -1;
              pPVar19 = pPVar13;
              if (*(float *)pPVar13 <= fVar23) goto LAB_00108cfc;
              pPVar13 = pPVar13 + -0x14;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00108cfc:
          if (lVar14 <= param_2) goto LAB_00108d40;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          auVar5 = *(undefined1 (*) [16])pPVar17;
          fVar2 = *(float *)(pPVar17 + 0x10);
          *(undefined8 *)pPVar17 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar17 + 8) = uVar7;
          *(float *)(pPVar17 + 0x10) = *(float *)(pPVar19 + 0x10);
          *(float *)(pPVar19 + 0x10) = fVar2;
          *(undefined1 (*) [16])pPVar19 = auVar5;
        }
        pPVar17 = pPVar17 + 0x14;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00108fa6:
    lVar20 = lVar14 + -2 >> 1;
    lVar21 = lVar20 * 2 + 2;
    pPVar17 = param_3 + (param_1 + lVar20) * 0x14;
    do {
      auVar5 = *(undefined1 (*) [16])pPVar17;
      fVar2 = *(float *)(pPVar17 + 0x10);
      local_78 = (float)*(undefined8 *)pPVar17;
      lVar11 = lVar21;
      lVar18 = lVar20;
      if (lVar21 < lVar14) {
        do {
          pPVar19 = param_3 + (param_1 + lVar11) * 0x14;
          fVar3 = *(float *)(param_3 + (param_1 + lVar11 + -1) * 0x14);
          lVar12 = lVar11 + -1;
          lVar16 = lVar11;
          pPVar13 = param_3 + (param_1 + lVar11 + -1) * 0x14;
          if (fVar3 < *(float *)pPVar19 || fVar3 == *(float *)pPVar19) {
            lVar16 = lVar11 + 1;
            lVar12 = lVar11;
            pPVar13 = pPVar19;
          }
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          lVar11 = lVar16 * 2;
          pPVar19 = param_3 + (lVar18 + param_1) * 0x14;
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
          lVar18 = lVar12;
        } while (lVar14 != lVar11 && SBORROW8(lVar14,lVar11) == lVar14 + lVar16 * -2 < 0);
        pPVar19 = pPVar13;
        if (lVar14 == lVar11) {
LAB_00109104:
          lVar12 = lVar11 + -1;
          pPVar13 = param_3 + (param_1 + lVar12) * 0x14;
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
        }
        lVar11 = lVar12 + -1;
        stack0xffffffffffffffac = auVar5._4_12_;
        if (lVar12 <= lVar20) goto LAB_001091b2;
        do {
          lVar18 = lVar11 >> 1;
          pPVar19 = param_3 + (param_1 + lVar18) * 0x14;
          pPVar13 = param_3 + (lVar12 + param_1) * 0x14;
          if (local_78 < *(float *)pPVar19 || local_78 == *(float *)pPVar19) break;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          *(undefined8 *)pPVar13 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar13 + 8) = uVar7;
          *(float *)(pPVar13 + 0x10) = *(float *)(pPVar19 + 0x10);
          lVar11 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
          pPVar13 = pPVar19;
          lVar12 = lVar18;
        } while (lVar20 < lVar18);
        local_58._0_4_ = local_78;
        uStack_50 = auVar5._8_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
        if (lVar20 == 0) goto LAB_00108dda;
      }
      else {
        pPVar19 = pPVar17;
        if (lVar21 == lVar14) goto LAB_00109104;
        stack0xffffffffffffffac = SUB1612(*(undefined1 (*) [16])pPVar17,4);
        pPVar13 = pPVar17;
LAB_001091b2:
        auVar10 = stack0xffffffffffffffac;
        local_58._0_4_ = local_78;
        uStack_50 = auVar10._4_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
      }
      lVar20 = lVar20 + -1;
      pPVar17 = pPVar17 + -0x14;
      lVar21 = lVar21 + -2;
    } while( true );
  }
  goto LAB_00108f5c;
LAB_00108d40:
  introsort(param_2,lVar21,param_3,local_b8);
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) goto LAB_00108f5c;
  lVar21 = param_2;
  if (local_b8 == 0) goto LAB_00108fa6;
  goto LAB_00108c01;
LAB_00108dda:
  pPVar17 = param_3 + param_1 * 0x14;
  pPVar19 = param_3 + (param_2 + -1) * 0x14 + -0x14;
  lVar14 = (param_2 + -1) - param_1;
  do {
    uVar7 = *(undefined8 *)(pPVar17 + 8);
    pPVar13 = pPVar19 + 0x14;
    uVar8 = *(undefined8 *)pPVar13;
    auVar9 = *(undefined1 (*) [16])pPVar13;
    auVar5 = *(undefined1 (*) [16])pPVar13;
    fVar2 = *(float *)(pPVar19 + 0x24);
    *(undefined8 *)(pPVar19 + 0x14) = *(undefined8 *)pPVar17;
    *(undefined8 *)(pPVar19 + 0x1c) = uVar7;
    *(float *)(pPVar19 + 0x24) = *(float *)(pPVar17 + 0x10);
    local_78 = (float)uVar8;
    if (lVar14 < 3) {
      pPVar15 = pPVar17;
      if (lVar14 == 2) goto LAB_0010913a;
      stack0xffffffffffffffac = auVar9._4_12_;
    }
    else {
      lVar21 = 2;
      lVar20 = 0;
      do {
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        fVar3 = *(float *)(param_3 + (param_1 + lVar21 + -1) * 0x14);
        lVar11 = lVar21 + -1;
        lVar18 = lVar21;
        pPVar15 = param_3 + (param_1 + lVar21 + -1) * 0x14;
        if (fVar3 < *(float *)pPVar1 || fVar3 == *(float *)pPVar1) {
          lVar18 = lVar21 + 1;
          lVar11 = lVar21;
          pPVar15 = pPVar1;
        }
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar21 = lVar18 * 2;
        pPVar1 = param_3 + (lVar20 + param_1) * 0x14;
        *(undefined8 *)pPVar1 = *(undefined8 *)pPVar15;
        *(undefined8 *)(pPVar1 + 8) = uVar7;
        *(float *)(pPVar1 + 0x10) = *(float *)(pPVar15 + 0x10);
        lVar20 = lVar11;
      } while (lVar21 < lVar14);
      if (lVar21 == lVar14) {
LAB_0010913a:
        uVar7 = *(undefined8 *)(pPVar19 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar19;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar19 + 0x10);
        lVar11 = lVar14 + -1;
        lVar21 = lVar14 + -2 >> 1;
      }
      else {
        stack0xffffffffffffffac = auVar5._4_12_;
        lVar21 = (lVar11 + -1) / 2;
        if (lVar11 == 0) goto LAB_00108f2c;
      }
      do {
        _local_58 = *(undefined1 (*) [16])pPVar13;
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        pPVar15 = param_3 + (lVar11 + param_1) * 0x14;
        if (local_78 < *(float *)pPVar1 || local_78 == *(float *)pPVar1) break;
        uVar7 = *(undefined8 *)(pPVar1 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar1;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar1 + 0x10);
        bVar22 = lVar21 != 0;
        lVar11 = lVar21;
        pPVar15 = pPVar1;
        lVar21 = (lVar21 + -1) / 2;
      } while (bVar22);
    }
LAB_00108f2c:
    auVar10 = stack0xffffffffffffffac;
    pPVar19 = pPVar19 + -0x14;
    local_58._0_4_ = local_78;
    uStack_50 = auVar10._4_8_;
    *(float *)(pPVar15 + 0x10) = fVar2;
    *(undefined1 (*) [8])pPVar15 = local_58;
    *(undefined8 *)(pPVar15 + 8) = uStack_50;
    bVar22 = 1 < lVar14;
    lVar14 = lVar14 + -1;
  } while (bVar22);
LAB_00108f5c:
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditorPlugin::get_plugin_name() const */

GradientEditorPlugin * __thiscall GradientEditorPlugin::get_plugin_name(GradientEditorPlugin *this)

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
    if ((code *)PTR__notification_00119048 != Container::_notification) {
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
  if ((code *)PTR__notification_00119048 == Container::_notification) {
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



/* GradientEdit::_get_class_namev() const */

undefined8 * GradientEdit::_get_class_namev(void)

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
LAB_00109433:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109433;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GradientEdit");
      goto LAB_0010949e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GradientEdit");
LAB_0010949e:
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
LAB_00109523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_0010958e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_0010958e:
  return &_get_class_namev()::_class_name_static;
}



/* GradientEditorPlugin::_get_class_namev() const */

undefined8 * GradientEditorPlugin::_get_class_namev(void)

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
LAB_00109613:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109613;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GradientEditorPlugin");
      goto LAB_0010967e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GradientEditorPlugin");
LAB_0010967e:
  return &_get_class_namev()::_class_name_static;
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
LAB_001096f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001096f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010975e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010975e:
  return &_get_class_namev()::_class_name_static;
}



/* GradientEditor::_get_class_namev() const */

undefined8 * GradientEditor::_get_class_namev(void)

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
LAB_001097e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001097e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GradientEditor");
      goto LAB_0010984e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GradientEditor");
LAB_0010984e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginGradient::_get_class_namev() const */

undefined8 * EditorInspectorPluginGradient::_get_class_namev(void)

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
LAB_001098e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001098e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginGradient");
      goto LAB_0010994e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginGradient");
LAB_0010994e:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::linear_srgb_to_oklab(ok_color::RGB) */

undefined8 __thiscall ok_color::linear_srgb_to_oklab(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qb;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  fVar1 = cbrtf(_LC18 * local_28 + _LC19 * uStack_24 + param_2 * __LC20);
  fVar5 = fVar1 * (float)_LC21;
  fVar1 = fVar1 * _LC21._4_4_;
  fVar2 = cbrtf(_LC22 * local_28 + _LC23 * uStack_24 + param_2 * __LC24);
  fVar3 = fVar2 * (float)_LC25;
  fVar2 = fVar2 * _LC25._4_4_;
  fVar4 = cbrtf(local_28 * __LC26 + uStack_24 * __LC27 + param_2 * __LC28);
  auVar6._4_4_ = (fVar1 - fVar2) + fVar4 * _LC29._4_4_;
  auVar6._8_4_ = (float)extraout_XMM0_Qb * 0.0 + 0.0;
  auVar6._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0 + 0.0;
  auVar6._0_4_ = (fVar5 + fVar3) - fVar4 * (float)_LC29;
  return auVar6._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::oklab_to_linear_srgb(ok_color::Lab) */

undefined8 __thiscall ok_color::oklab_to_linear_srgb(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  fVar1 = _LC33 * fVar2 + fVar3 + _LC34 * param_2;
  fVar4 = (fVar3 - _LC35 * fVar2) - _LC36 * param_2;
  fVar1 = fVar1 * fVar1 * fVar1;
  fVar3 = (fVar3 - fVar2 * __LC37) - param_2 * __LC38;
  fVar4 = fVar4 * fVar4 * fVar4;
  fVar3 = fVar3 * fVar3 * fVar3;
  return CONCAT44((fVar1 * _LC39._4_4_ + fVar4 * _LC40._4_4_) - fVar3 * _LC41._4_4_,
                  (fVar1 * (float)_LC39 - fVar4 * (float)_LC40) + fVar3 * (float)_LC41);
}



/* WARNING: Removing unreachable block (ram,0x0010a080) */
/* GradientEdit::_notificationv(int, bool) */

void __thiscall GradientEdit::_notificationv(GradientEdit *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00119050 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00119050 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010a190) */
/* GradientEditor::_notificationv(int, bool) */

void __thiscall GradientEditor::_notificationv(GradientEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00119058 != Container::_notification) {
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
  if ((code *)PTR__notification_00119058 != Container::_notification) {
    BoxContainer::_notification(iVar1);
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



/* GradientEditorPlugin::get_class() const */

void GradientEditorPlugin::get_class(void)

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



/* GradientEdit::get_class() const */

void GradientEdit::get_class(void)

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



/* GradientEditor::get_class() const */

void GradientEditor::get_class(void)

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



/* EditorInspectorPluginGradient::get_class() const */

void EditorInspectorPluginGradient::get_class(void)

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



/* void Ref<EditorInspectorPluginGradient>::instantiate<>() */

void __thiscall
Ref<EditorInspectorPluginGradient>::instantiate<>(Ref<EditorInspectorPluginGradient> *this)

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
  *(undefined ***)this_00 = &PTR__initialize_classv_00113db0;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_0010a925;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0010a925;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010a925:
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
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010af3a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010af3a:
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



/* GradientEditorPlugin::~GradientEditorPlugin() */

void __thiscall GradientEditorPlugin::~GradientEditorPlugin(GradientEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113428;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* GradientEditorPlugin::~GradientEditorPlugin() */

void __thiscall GradientEditorPlugin::~GradientEditorPlugin(GradientEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113428;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* GradientEditor::_initialize_classv() */

void GradientEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00119070 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00119060 !=
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
        if ((code *)PTR__bind_methods_00119068 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GradientEditor";
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



/* EditorInspectorPluginGradient::_initialize_classv() */

void EditorInspectorPluginGradient::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00119070 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00119078 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00119080 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginGradient";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GradientEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void>::call
          (CallableCustomMethodPointer<GradientEdit,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010bc2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010bc2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010bce0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010bc2f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010bce0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CanvasItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::call
          (CallableCustomMethodPointer<CanvasItem,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010be3f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010be3f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010be18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010bef0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010be3f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010bef0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GradientEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::call
          (CallableCustomMethodPointer<GradientEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_0010c0b8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010c0b8;
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
        uVar3 = _LC159;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010c169;
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
LAB_0010c0b8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010c169:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GradientEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::call
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0010c329;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010c329;
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
        uVar3 = _LC160;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010c3da;
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
LAB_0010c329:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010c3da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::call
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010c615;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010c615;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010c520:
          uVar3 = _LC161;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&ColorPicker::typeinfo,0), lVar7 == 0
              )) && (pOVar5 != (Object *)0x0)) goto LAB_0010c520;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ColorPicker::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010c6c6;
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
LAB_0010c615:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c6c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void CallableCustomMethodPointer<GradientEdit,void,Color_const&>::call
               (Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  Variant *pVVar7;
  undefined4 in_register_00000034;
  undefined4 *in_R8;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> aCStack_68 [8];
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  String local_50 [8];
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)param_1[6] & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_50[0] = (String)0x0;
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
    if (((ulong)param_1[6] >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        pVVar1 = param_1[5];
        pVVar7 = param_1[7];
        pVVar2 = param_1[8];
        if ((uint)param_3 < 2) {
          if ((uint)param_3 == 0) {
            *in_R8 = 4;
            in_R8[2] = 1;
          }
          else {
            *in_R8 = 0;
            if (((ulong)pVVar7 & 1) != 0) {
              pVVar7 = *(Variant **)(pVVar7 + *(long *)(pVVar1 + (long)pVVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict
                              (**(undefined4 **)CONCAT44(in_register_00000034,param_2),0x14);
            uVar3 = _LC162;
            if (cVar4 == '\0') {
              *in_R8 = 2;
              *(undefined8 *)(in_R8 + 1) = uVar3;
            }
            local_48[0] = Variant::operator_cast_to_Color
                                    (*(Variant **)CONCAT44(in_register_00000034,param_2));
            (*(code *)pVVar7)(pVVar1 + (long)pVVar2,local_48);
          }
        }
        else {
          *in_R8 = 3;
          in_R8[2] = 1;
        }
        goto LAB_0010c79e;
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
  local_58 = 0;
  String::parse_latin1((String *)&local_58,"\', can\'t call method.");
  uitos((ulong)aCStack_68);
  operator+((char *)local_60,(String *)"Invalid Object id \'");
  String::operator+(local_50,(String *)local_60);
  _err_print_error(&_LC158,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_50,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref(aCStack_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0010c79e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  if (in_EDX != 0) goto LAB_0010c979;
  local_78 = 0;
  local_68 = &_LC49;
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
LAB_0010ca75:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ca75;
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
LAB_0010c979:
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
    if ((code *)PTR__bind_methods_00119088 != Object::_bind_methods) {
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



/* GradientEditorPlugin::_initialize_classv() */

void GradientEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00119070 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00119090 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00119098 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GradientEditorPlugin";
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
              if ((code *)PTR__bind_methods_00119070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119060 !=
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
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"Control");
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "FlowContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      if ((code *)PTR__bind_methods_001190a0 != Container::_bind_methods) {
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
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
        if (pvVar5 == (void *)0x0) goto LAB_0010d786;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010d786:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
    if (cVar5 != '\0') goto LAB_0010d8db;
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
      if (cVar5 != '\0') goto LAB_0010d8db;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010d8db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginGradient::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginGradient::is_class(EditorInspectorPluginGradient *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010dadb;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginGradient");
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
      if (cVar5 != '\0') goto LAB_0010dadb;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010dbde;
    }
  }
LAB_0010dadb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dbde:
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
    if (cVar5 != '\0') goto LAB_0010dceb;
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
      if (cVar5 != '\0') goto LAB_0010dceb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010dceb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditorPlugin::is_class(String const&) const */

undefined8 __thiscall GradientEditorPlugin::is_class(GradientEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010deeb;
  }
  cVar5 = String::operator==(param_1,"GradientEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0010deeb;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010dfee;
    }
  }
LAB_0010deeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dfee:
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
    if (cVar5 != '\0') goto LAB_0010e0fb;
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
      if (cVar5 != '\0') goto LAB_0010e0fb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010e1fe;
    }
  }
LAB_0010e0fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e1fe:
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
    if (cVar4 != '\0') goto LAB_0010e30b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010e30b:
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
    if (cVar5 != '\0') goto LAB_0010e45b;
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
      if (cVar5 != '\0') goto LAB_0010e45b;
    }
    cVar5 = String::operator==(param_1,"FlowContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010e55e;
    }
  }
LAB_0010e45b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e55e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEditor::is_class(String const&) const */

undefined8 __thiscall GradientEditor::is_class(GradientEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010e66b;
  }
  cVar5 = String::operator==(param_1,"GradientEditor");
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
      if (cVar5 != '\0') goto LAB_0010e66b;
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
        if (cVar5 != '\0') goto LAB_0010e66b;
      }
      cVar5 = String::operator==(param_1,"BoxContainer");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Container::is_class((Container *)this,param_1);
          return uVar6;
        }
        goto LAB_0010e80e;
      }
    }
  }
LAB_0010e66b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e80e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::is_class(String const&) const */

undefined8 __thiscall GradientEdit::is_class(GradientEdit *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010e91b;
  }
  cVar4 = String::operator==(param_1,"GradientEdit");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010e91b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  local_78 = &_LC109;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC109;
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
      goto LAB_0010eacc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010eacc:
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
      goto LAB_0010ed1c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ed1c:
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
      goto LAB_0010ef81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ef81:
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



/* EditorInspectorPluginGradient::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginGradient::_get_property_listv
          (EditorInspectorPluginGradient *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginGradient";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginGradient";
  local_98 = 0;
  local_70 = 0x1d;
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
      goto LAB_0010f231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f231:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginGradient",false);
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
      goto LAB_0010f4e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f4e1:
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



/* GradientEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GradientEditorPlugin::_get_property_listv(GradientEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "GradientEditorPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GradientEditorPlugin";
  local_98 = 0;
  local_70 = 0x14;
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
      goto LAB_0010f791;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f791:
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
  StringName::StringName((StringName *)&local_78,"GradientEditorPlugin",false);
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
      goto LAB_0010fa41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fa41:
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
  if ((code *)PTR__get_property_list_001190a8 != Object::_get_property_list) {
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
      goto LAB_0010fd11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fd11:
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
  if ((code *)PTR__get_property_list_001190b0 != CanvasItem::_get_property_list) {
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
      goto LAB_0010ffe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ffe1:
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
      goto LAB_00110291;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110291:
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
      goto LAB_00110541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110541:
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



/* GradientEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GradientEditor::_get_property_listv(GradientEditor *this,List *param_1,bool param_2)

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
  local_78 = "GradientEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GradientEditor";
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
      goto LAB_001107f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001107f1:
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
  StringName::StringName((StringName *)&local_78,"GradientEditor",false);
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
      goto LAB_00110aa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110aa1:
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
      goto LAB_00110d51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110d51:
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



/* GradientEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GradientEdit::_get_property_listv(GradientEdit *this,List *param_1,bool param_2)

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
  local_78 = "GradientEdit";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GradientEdit";
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
      goto LAB_00111001;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111001:
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
  StringName::StringName((StringName *)&local_78,"GradientEdit",false);
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



/* void LocalVector<Gradient::Point, unsigned int, false,
   false>::sort_custom<_DefaultComparator<Gradient::Point> >() */

void __thiscall
LocalVector<Gradient::Point,unsigned_int,false,false>::
sort_custom<_DefaultComparator<Gradient::Point>>
          (LocalVector<Gradient::Point,unsigned_int,false,false> *this)

{
  Point *__dest;
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  Point *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  Point *pPVar15;
  Point *pPVar16;
  ulong uVar17;
  long lVar18;
  size_t sVar19;
  long in_FS_OFFSET;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    __src = *(Point **)(this + 8);
    uVar17 = (ulong)uVar3;
    if (uVar3 == 1) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort(0,1,__src,0);
        return;
      }
      goto LAB_00111534;
    }
    lVar11 = 0;
    uVar14 = uVar17;
    do {
      uVar14 = (long)uVar14 >> 1;
      lVar11 = lVar11 + 1;
    } while (uVar14 != 1);
    SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
              (0,uVar17,__src,lVar11 * 2);
    __dest = __src + 0x14;
    if (uVar17 < 0x11) {
      sVar19 = 0x14;
      uVar14 = 1;
      pPVar15 = __dest;
      do {
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        fVar4 = *(float *)(pPVar15 + 0x10);
        if (fVar1 < *(float *)__src) {
          memmove(__dest,__src,sVar19);
          *(float *)(__src + 0x10) = fVar4;
          *(undefined8 *)__src = uVar6;
          *(undefined8 *)(__src + 8) = uVar7;
        }
        else {
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            uVar9 = uVar14;
            while (uVar9 = uVar9 - 1, uVar9 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + uVar9 * 0x14;
                goto LAB_001114bc;
              }
              sVar10 = sVar10 - 0x14;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_001114bc:
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          *(float *)(pPVar16 + 0x10) = fVar4;
        }
        uVar14 = uVar14 + 1;
        sVar19 = sVar19 + 0x14;
        pPVar15 = pPVar15 + 0x14;
      } while (uVar17 != uVar14);
    }
    else {
      pPVar15 = __dest;
      lVar11 = 0;
      sVar19 = 0x14;
      do {
        while( true ) {
          fVar1 = *(float *)pPVar15;
          lVar18 = lVar11 + 1;
          uVar6 = *(undefined8 *)pPVar15;
          uVar7 = *(undefined8 *)(pPVar15 + 8);
          fVar4 = *(float *)(pPVar15 + 0x10);
          if (fVar1 < *(float *)__src) break;
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            while (lVar11 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + lVar11 * 0x14;
                goto LAB_001112e0;
              }
              sVar10 = sVar10 - 0x14;
              lVar11 = lVar11 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_001112e0:
          pPVar15 = pPVar15 + 0x14;
          *(float *)(pPVar16 + 0x10) = fVar4;
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          lVar11 = lVar18;
          sVar19 = sVar19 + 0x14;
          if (lVar18 == 0xf) goto LAB_00111302;
        }
        memmove(__dest,__src,sVar19);
        pPVar15 = pPVar15 + 0x14;
        *(float *)(__src + 0x10) = fVar4;
        *(undefined8 *)__src = uVar6;
        *(undefined8 *)(__src + 8) = uVar7;
        lVar11 = lVar18;
        sVar19 = sVar19 + 0x14;
      } while (lVar18 != 0xf);
LAB_00111302:
      pPVar15 = __src + 0x140;
      lVar11 = -0x140;
      uVar14 = 0x10;
      do {
        fVar4 = *(float *)(pPVar15 + 0x10);
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar13 = -lVar11;
        lVar18 = uVar14 - 1;
        pPVar16 = pPVar15;
        if (fVar1 < *(float *)(pPVar15 + -0x14)) {
          do {
            uVar8 = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14 + 8);
            fVar2 = *(float *)(__src + lVar13 + -0x28);
            *(undefined8 *)(__src + lVar13) = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14);
            *(undefined8 *)(__src + lVar13 + 8) = uVar8;
            *(undefined4 *)(__src + lVar13 + 0x10) = *(undefined4 *)(pPVar15 + lVar13 + lVar11 + -4)
            ;
            lVar12 = lVar18 + -1;
            if (fVar2 <= fVar1) {
              pPVar16 = __src + lVar18 * 0x14;
              goto LAB_001113a8;
            }
            lVar13 = lVar13 + -0x14;
            lVar18 = lVar12;
          } while (lVar12 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pPVar16 = __dest;
        }
LAB_001113a8:
        uVar14 = uVar14 + 1;
        pPVar15 = pPVar15 + 0x14;
        lVar11 = lVar11 + -0x14;
        *(float *)(pPVar16 + 0x10) = fVar4;
        *(undefined8 *)pPVar16 = uVar6;
        *(undefined8 *)(pPVar16 + 8) = uVar7;
      } while (uVar17 != uVar14);
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00111534:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GradientEdit, int>(void (GradientEdit::*)(int)) */

MethodBind * create_method_bind<GradientEdit,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001142a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientEdit";
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



/* GradientEdit::_bind_methods() [clone .cold] */

void GradientEdit::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GradientEdit::_initialize_classv() */

void GradientEdit::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00119070 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00119060 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_001190b8 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GradientEdit";
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
      if (StringName::configured == '\0') goto LAB_00111c09;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c09;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c09;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c09;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111c09;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00111c09:
  plVar4 = *(long **)(this + 0x180);
  if (plVar4 != (long *)0x0) {
    do {
      pEVar1 = (Element *)*plVar4;
      if (pEVar1 == (Element *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00111c75;
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
LAB_00111c75:
  *(undefined ***)this = &PTR__initialize_classv_00112f50;
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



/* EditorInspectorPluginGradient::~EditorInspectorPluginGradient() */

void __thiscall
EditorInspectorPluginGradient::~EditorInspectorPluginGradient(EditorInspectorPluginGradient *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113db0;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  return;
}



/* EditorInspectorPluginGradient::~EditorInspectorPluginGradient() */

void __thiscall
EditorInspectorPluginGradient::~EditorInspectorPluginGradient(EditorInspectorPluginGradient *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113db0;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  operator_delete(this,0x218);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111f08) */
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
      goto LAB_00112341;
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
                    /* WARNING: Could not recover jumptable at 0x001121cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112341:
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
      goto LAB_00112521;
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
                    /* WARNING: Could not recover jumptable at 0x001123ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00112521:
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
    goto LAB_0011263d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001126a0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001126a0:
      uVar6 = 4;
LAB_0011263d:
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
      goto LAB_001125bb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001125bb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC159;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00112616. Too many branches */
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
      _err_print_error(&_LC158,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112796;
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
LAB_00112796:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientEdit::_get_point_at(int) const */

void GradientEdit::_GLOBAL__sub_I__get_point_at(void)

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
  if (ColorPicker::wheel_shader == '\0') {
    ColorPicker::wheel_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::wheel_shader,&__dso_handle);
  }
  if (ColorPicker::circle_shader == '\0') {
    ColorPicker::circle_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::circle_shader,&__dso_handle);
  }
  if (ColorPicker::circle_ok_color_shader == '\0') {
    ColorPicker::circle_ok_color_shader = '\x01';
    __cxa_atexit(Ref<Shader>::~Ref,&ColorPicker::circle_ok_color_shader,&__dso_handle);
  }
  if (ColorPicker::preset_cache == '\0') {
    ColorPicker::preset_cache = '\x01';
    ColorPicker::preset_cache = 0;
    __cxa_atexit(List<Color,DefaultAllocator>::~List,&ColorPicker::preset_cache,&__dso_handle);
  }
  if (ColorPicker::recent_preset_cache != '\0') {
    return;
  }
  ColorPicker::recent_preset_cache = 1;
  ColorPicker::recent_preset_cache = 0;
  __cxa_atexit(List<Color,DefaultAllocator>::~List,&ColorPicker::recent_preset_cache,&__dso_handle,
               uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginGradient::~EditorInspectorPluginGradient() */

void __thiscall
EditorInspectorPluginGradient::~EditorInspectorPluginGradient(EditorInspectorPluginGradient *this)

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
/* GradientEditorPlugin::~GradientEditorPlugin() */

void __thiscall GradientEditorPlugin::~GradientEditorPlugin(GradientEditorPlugin *this)

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
/* GradientEditor::~GradientEditor() */

void __thiscall GradientEditor::~GradientEditor(GradientEditor *this)

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
/* GradientEdit::~GradientEdit() */

void __thiscall GradientEdit::~GradientEdit(GradientEdit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Color, DefaultAllocator>::~List() */

void __thiscall List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<Shader>::~Ref() */

void __thiscall Ref<Shader>::~Ref(Ref<Shader> *this)

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
/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientEdit, void, Color const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void,Color_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorNode, void, ColorPicker*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNode,void,ColorPicker*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNode,void,ColorPicker*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientEdit,void> *this)

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


