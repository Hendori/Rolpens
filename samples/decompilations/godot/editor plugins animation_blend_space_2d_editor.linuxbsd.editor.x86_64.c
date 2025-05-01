
/* AnimationNodeBlendSpace2DEditor::_snap_toggled() */

void AnimationNodeBlendSpace2DEditor::_snap_toggled(void)

{
  CanvasItem::queue_redraw();
  return;
}



/* AnimationNodeBlendSpace2DEditor::_update_edited_point_pos() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_update_edited_point_pos(AnimationNodeBlendSpace2DEditor *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xaf8] == (AnimationNodeBlendSpace2DEditor)0x0) &&
     (iVar1 = *(int *)(this + 0xad8), -1 < iVar1)) {
    iVar3 = AnimationNodeBlendSpace2D::get_blend_point_count();
    if (iVar1 < iVar3) {
      local_30 = AnimationNodeBlendSpace2D::get_blend_point_position
                           ((int)*(undefined8 *)(this + 0xa10));
      if (this[0xb39] != (AnimationNodeBlendSpace2DEditor)0x0) {
        local_30 = CONCAT44((float)((ulong)local_30 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0xb44) >> 0x20),
                            (float)local_30 + (float)*(undefined8 *)(this + 0xb44));
        cVar2 = BaseButton::is_pressed();
        if (cVar2 != '\0') {
          local_28 = AnimationNodeBlendSpace2D::get_snap();
          local_30 = Vector2::snapped((Vector2 *)&local_30);
        }
      }
      this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
      Range::set_value((double)(float)local_30);
      Range::set_value((double)local_30._4_4_);
      this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Delaunay2D::Triangle>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Delaunay2D::Triangle>::_copy_on_write(CowData<Delaunay2D::Triangle> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0x18;
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



/* AnimationNodeBlendSpace2DEditor::_blend_space_changed() */

void AnimationNodeBlendSpace2DEditor::_blend_space_changed(void)

{
  CanvasItem::queue_redraw();
  return;
}



/* AnimationNodeBlendSpace2DEditor::can_edit(Ref<AnimationNode> const&) */

undefined4 __thiscall
AnimationNodeBlendSpace2DEditor::can_edit(AnimationNodeBlendSpace2DEditor *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                               &AnimationNodeBlendSpace2D::typeinfo,0), pOVar3 == (Object *)0x0)) ||
     (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* CowData<Delaunay2D::Edge>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Delaunay2D::Edge>::_copy_on_write(CowData<Delaunay2D::Edge> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* AnimationNodeBlendSpace2DEditor::_update_tool_erase() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_update_tool_erase(AnimationNodeBlendSpace2DEditor *this)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  iVar1 = *(int *)(this + 0xad8);
  uVar2 = *(undefined8 *)(this + 0xa50);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((iVar1 < 0) || (iVar4 = AnimationNodeBlendSpace2D::get_blend_point_count(), iVar4 <= iVar1))
     && (-1 < *(int *)(this + 0xadc))) {
    AnimationNodeBlendSpace2D::get_triangle_count();
  }
  BaseButton::set_disabled(SUB81(uVar2,0));
  iVar1 = *(int *)(this + 0xad8);
  if ((iVar1 < 0) || (iVar4 = AnimationNodeBlendSpace2D::get_blend_point_count(), iVar4 <= iVar1)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
    goto LAB_00100768;
  }
  AnimationNodeBlendSpace2D::get_blend_point_node((int)&local_28);
  local_30 = (Object *)0x0;
  if (local_28 != (Object *)0x0) {
    pOVar5 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&AnimationNode::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      local_30 = pOVar5;
      if (cVar3 == '\0') {
        local_30 = (Object *)0x0;
      }
      if (local_28 == (Object *)0x0) goto LAB_0010067b;
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_28), cVar3 != '\0')) {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
LAB_0010067b:
  cVar3 = AnimationTreeEditor::can_edit(AnimationTreeEditor::singleton);
  if (cVar3 == '\0') {
    CanvasItem::hide();
  }
  else {
    CanvasItem::show();
  }
  if (this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0) {
    CanvasItem::show();
  }
  else {
    CanvasItem::hide();
  }
  if (((local_30 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_30), cVar3 != '\0')) {
    (**(code **)(*(long *)local_30 + 0x140))(local_30);
    Memory::free_static(local_30,false);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100768:
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



/* AnimationNodeBlendSpace2DEditor::get_blend_position_path() const */

AnimationNodeBlendSpace2DEditor * __thiscall
AnimationNodeBlendSpace2DEditor::get_blend_position_path(AnimationNodeBlendSpace2DEditor *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "blend_position";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_50);
  AnimationTreeEditor::get_base_path();
  String::operator+((String *)&local_48,(String *)&local_58);
  StringName::StringName((StringName *)this,(String *)&local_48,false);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_update_space() [clone .part.0] */

void __thiscall
AnimationNodeBlendSpace2DEditor::_update_space(AnimationNodeBlendSpace2DEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
  cVar2 = AnimationNodeBlendSpace2D::get_auto_triangles();
  if (cVar2 == '\0') {
    CanvasItem::show();
  }
  else {
    CanvasItem::hide();
  }
  uVar1 = *(undefined8 *)(this + 0xa80);
  AnimationNodeBlendSpace2D::get_auto_triangles();
  BaseButton::set_pressed(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(this + 0xa70);
  AnimationNodeBlendSpace2D::is_using_sync();
  BaseButton::set_pressed(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(this + 0xa78);
  AnimationNodeBlendSpace2D::get_blend_mode();
  OptionButton::select((int)uVar1);
  fVar3 = (float)AnimationNodeBlendSpace2D::get_max_space();
  Range::set_value((double)fVar3);
  AnimationNodeBlendSpace2D::get_max_space();
  Range::set_value((double)extraout_XMM0_Db);
  fVar3 = (float)AnimationNodeBlendSpace2D::get_min_space();
  Range::set_value((double)fVar3);
  AnimationNodeBlendSpace2D::get_min_space();
  Range::set_value((double)extraout_XMM0_Db_00);
  uVar1 = *(undefined8 *)(this + 0xa88);
  AnimationNodeBlendSpace2D::get_x_label();
  LineEdit::set_text(uVar1,aCStack_28);
  CowData<char32_t>::_unref(aCStack_28);
  uVar1 = *(undefined8 *)(this + 0xa90);
  AnimationNodeBlendSpace2D::get_y_label();
  LineEdit::set_text(uVar1,aCStack_28);
  CowData<char32_t>::_unref(aCStack_28);
  fVar3 = (float)AnimationNodeBlendSpace2D::get_snap();
  Range::set_value((double)fVar3);
  AnimationNodeBlendSpace2D::get_snap();
  Range::set_value((double)extraout_XMM0_Db_01);
  CanvasItem::queue_redraw();
  this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_update_space() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_update_space(AnimationNodeBlendSpace2DEditor *this)

{
  if (this[0xaf8] != (AnimationNodeBlendSpace2DEditor)0x0) {
    return;
  }
  _update_space(this);
  return;
}



/* AnimationNodeBlendSpace2DEditor::edit(Ref<AnimationNode> const&) */

void __thiscall
AnimationNodeBlendSpace2DEditor::edit(AnimationNodeBlendSpace2DEditor *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  AnimationNodeBlendSpace2DEditor AVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58 [3];
  long local_40;
  
  plVar1 = *(long **)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    if ((*(long *)param_1 == 0) ||
       (lVar8 = __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                               &AnimationNodeBlendSpace2D::typeinfo,0), lVar8 == 0)) {
LAB_00100f40:
      this[0xa18] = (AnimationNodeBlendSpace2DEditor)0x0;
      goto LAB_00100d66;
    }
    *(long *)(this + 0xa10) = lVar8;
    pOVar7 = (Object *)0x0;
LAB_00100edd:
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)(this + 0xa10) = 0;
    }
joined_r0x00100efb:
    if (pOVar7 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
joined_r0x00100f6a:
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
    pOVar7 = *(Object **)(this + 0xa10);
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
              ((AnimationNodeBlendSpace2DEditor *)local_58,(char *)this,
               (_func_void *)"&AnimationNodeBlendSpace2DEditor::_blend_space_changed");
    StringName::StringName((StringName *)&local_60,"triangles_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,(AnimationNodeBlendSpace2DEditor *)local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    pOVar7 = *(Object **)(this + 0xa10);
    if (*(long *)param_1 == 0) {
      if (pOVar7 == (Object *)0x0) goto LAB_00100f40;
      *(undefined8 *)(this + 0xa10) = 0;
      cVar4 = RefCounted::unreference();
      goto joined_r0x00100f6a;
    }
    pOVar6 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&AnimationNodeBlendSpace2D::typeinfo,
                            0);
    if (pOVar6 != pOVar7) {
      *(Object **)(this + 0xa10) = pOVar6;
      if (pOVar6 != (Object *)0x0) goto LAB_00100edd;
      goto joined_r0x00100efb;
    }
  }
  this[0xa18] = (AnimationNodeBlendSpace2DEditor)0x0;
  uVar3 = EditorNode::singleton;
  if (pOVar7 != (Object *)0x0) {
    local_58[0] = (Object *)0x0;
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar7 != (Object *)0x0) &&
       (local_58[0] = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_58[0] = (Object *)0x0;
    }
    AVar5 = (AnimationNodeBlendSpace2DEditor)
            EditorNode::is_resource_read_only(uVar3,(AnimationNodeBlendSpace2DEditor *)local_58,0);
    this[0xa18] = AVar5;
    if (((local_58[0] != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar7 = local_58[0], cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_58[0]), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    plVar1 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
              ((AnimationNodeBlendSpace2DEditor *)local_58,(char *)this,
               (_func_void *)"&AnimationNodeBlendSpace2DEditor::_blend_space_changed");
    StringName::StringName((StringName *)&local_60,"triangles_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,(AnimationNodeBlendSpace2DEditor *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (this[0xaf8] == (AnimationNodeBlendSpace2DEditor)0x0) {
      _update_space(this);
    }
  }
LAB_00100d66:
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa38),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xa98),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xaa0),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xaa8),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xab0),0));
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa88),0));
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa90),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xac0),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xac8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa40),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa78),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_edit_point_pos(double) */

double AnimationNodeBlendSpace2DEditor::_edit_point_pos(double param_1)

{
  Variant *pVVar1;
  int iVar2;
  StringName *pSVar3;
  Object *pOVar4;
  Variant *pVVar5;
  StringName *in_RDI;
  Variant *pVVar6;
  long in_FS_OFFSET;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDI[0xaf8] == (StringName)0x0) {
    in_RDI[0xaf8] = (StringName)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_d8 = 0;
    local_c0 = 0;
    local_c8 = "";
    String::parse_latin1((StrRange *)&local_d8);
    local_c8 = "Move Node Point";
    local_d0 = 0;
    local_c0 = 0xf;
    String::parse_latin1((StrRange *)&local_d0);
    TTR((String *)&local_c8,(String *)&local_d0);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_c8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    dVar7 = (double)Range::get_value();
    dVar8 = (double)Range::get_value();
    iVar2 = *(int *)(in_RDI + 0xad8);
    StringName::StringName((StringName *)&local_c8,"set_blend_point_position",false);
    pSVar3 = *(StringName **)(in_RDI + 0xa10);
    pVVar6 = (Variant *)local_40;
    local_b0 = CONCAT44((float)dVar7,(float)dVar8);
    Variant::Variant((Variant *)local_88,iVar2);
    Variant::Variant(local_70,(Vector2 *)&local_b0);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar3,(Variant **)&local_c8,(int)&local_a8);
    pVVar5 = pVVar6;
    do {
      pVVar1 = pVVar5 + -0x18;
      pVVar5 = pVVar5 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar5 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    uVar9 = AnimationNodeBlendSpace2D::get_blend_point_position
                      ((int)*(undefined8 *)(in_RDI + 0xa10));
    iVar2 = *(int *)(in_RDI + 0xad8);
    StringName::StringName((StringName *)&local_c8,"set_blend_point_position",false);
    pSVar3 = *(StringName **)(in_RDI + 0xa10);
    local_b0 = uVar9;
    Variant::Variant((Variant *)local_88,iVar2);
    Variant::Variant(local_70,(Vector2 *)&local_b0);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar3,(Variant **)&local_c8,(int)&local_a8);
    do {
      pVVar5 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_edited_point_pos",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_edited_point_pos",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    in_RDI[0xaf8] = (StringName)0x0;
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      dVar7 = (double)CanvasItem::queue_redraw();
      return dVar7;
    }
  }
  else if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_auto_triangles_toggled() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_auto_triangles_toggled(AnimationNodeBlendSpace2DEditor *this)

{
  char cVar1;
  StringName *pSVar2;
  bool bVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Toggle Auto Triangles";
  local_a8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  bVar3 = (bool)BaseButton::is_pressed();
  StringName::StringName((StringName *)&local_98,"set_auto_triangles",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar2,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  bVar3 = (bool)AnimationNodeBlendSpace2D::get_auto_triangles();
  StringName::StringName((StringName *)&local_98,"set_auto_triangles",false);
  pSVar2 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_78,bVar3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar2,(Variant **)&local_98,(int)local_88);
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_space",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_space",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
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



/* AnimationNodeBlendSpace2DEditor::_config_changed(double) */

double AnimationNodeBlendSpace2DEditor::_config_changed(double param_1)

{
  StringName *pSVar1;
  bool bVar2;
  int iVar3;
  Object *pOVar4;
  int iVar5;
  StringName *in_RDI;
  long in_FS_OFFSET;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDI[0xaf8] == (StringName)0x0) {
    in_RDI[0xaf8] = (StringName)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    local_a0 = 0;
    local_a8 = "";
    String::parse_latin1((StrRange *)&local_b8);
    local_a8 = "Change BlendSpace2D Config";
    local_b0 = 0;
    local_a0 = 0x1a;
    String::parse_latin1((StrRange *)&local_b0);
    TTR((String *)&local_a8,(String *)&local_b0);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_a8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    dVar6 = (double)Range::get_value();
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_a8,"set_max_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = CONCAT44((float)dVar6,(float)dVar7);
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar5 = (int)local_88;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    uVar8 = AnimationNodeBlendSpace2D::get_max_space();
    StringName::StringName((StringName *)&local_a8,"set_max_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = uVar8;
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    dVar6 = (double)Range::get_value();
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_a8,"set_min_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = CONCAT44((float)dVar6,(float)dVar7);
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    uVar8 = AnimationNodeBlendSpace2D::get_min_space();
    StringName::StringName((StringName *)&local_a8,"set_min_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = uVar8;
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    dVar6 = (double)Range::get_value();
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_a8,"set_snap",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = CONCAT44((float)dVar6,(float)dVar7);
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    uVar8 = AnimationNodeBlendSpace2D::get_snap();
    StringName::StringName((StringName *)&local_a8,"set_snap",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    local_90 = uVar8;
    Variant::Variant((Variant *)local_78,(Vector2 *)&local_90);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    bVar2 = (bool)BaseButton::is_pressed();
    StringName::StringName((StringName *)&local_a8,"set_use_sync",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    bVar2 = (bool)AnimationNodeBlendSpace2D::is_using_sync();
    StringName::StringName((StringName *)&local_a8,"set_use_sync",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    iVar3 = OptionButton::get_selected();
    StringName::StringName((StringName *)&local_a8,"set_blend_mode",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,iVar3);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    iVar3 = AnimationNodeBlendSpace2D::get_blend_mode();
    StringName::StringName((StringName *)&local_a8,"set_blend_mode",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,iVar3);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_a8,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"_update_space",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_a8,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"_update_space",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_a8,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    in_RDI[0xaf8] = (StringName)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      dVar6 = (double)CanvasItem::queue_redraw();
      return dVar6;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_labels_changed(String) */

void AnimationNodeBlendSpace2DEditor::_labels_changed(StringName *param_1)

{
  StringName *pSVar1;
  Object *pOVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0xaf8] == (StringName)0x0) {
    param_1[0xaf8] = (StringName)0x1;
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a8 = 0;
    local_90 = 0;
    local_98 = "";
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = "Change BlendSpace2D Labels";
    local_a0 = 0;
    local_90 = 0x1a;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_98,(String *)&local_a0);
    EditorUndoRedoManager::create_action(pOVar2,(String *)&local_98,1,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    LineEdit::get_text();
    StringName::StringName((StringName *)&local_98,"set_x_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar3 = (int)local_88;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar2,pSVar1,(Variant **)&local_98,iVar3);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    AnimationNodeBlendSpace2D::get_x_label();
    StringName::StringName((StringName *)&local_98,"set_x_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,pSVar1,(Variant **)&local_98,iVar3);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    LineEdit::get_text();
    StringName::StringName((StringName *)&local_98,"set_y_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar2,pSVar1,(Variant **)&local_98,iVar3);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    AnimationNodeBlendSpace2D::get_y_label();
    StringName::StringName((StringName *)&local_98,"set_y_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,pSVar1,(Variant **)&local_98,iVar3);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    StringName::StringName((StringName *)&local_98,"_update_space",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar2,param_1,(Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"_update_space",false);
    local_70 = (undefined1  [16])0x0;
    local_78[0] = 0;
    local_78[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,param_1,(Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
    param_1[0xaf8] = (StringName)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_erase_selected() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_erase_selected(AnimationNodeBlendSpace2DEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Object *this_00;
  int iVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  undefined8 local_118;
  Object *local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f0;
  Variant *local_e8;
  undefined1 auStack_e0 [16];
  Variant *pVStack_d0;
  int local_b8 [6];
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  if (*(int *)(this + 0xad8) == -1) {
    if (*(int *)(this + 0xadc) != -1) {
      this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
      local_108 = "";
      local_110 = (Object *)0x0;
      local_100 = 0;
      String::parse_latin1((StrRange *)&local_110);
      local_108 = "Remove BlendSpace2D Triangle";
      local_118 = 0;
      local_100 = 0x1c;
      String::parse_latin1((StrRange *)&local_118);
      TTR((String *)&local_108,(String *)&local_118);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_108,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      iVar9 = *(int *)(this + 0xadc);
      StringName::StringName((StringName *)&local_108,"remove_triangle",false);
      pSVar2 = *(StringName **)(this + 0xa10);
      Variant::Variant((Variant *)local_b8,iVar9);
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_98 = (undefined1  [16])0x0;
      local_e8 = (Variant *)local_b8;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_108,(int)&local_e8);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      iVar9 = *(int *)(this + 0xadc);
      iVar5 = AnimationNodeBlendSpace2D::get_triangle_point
                        ((int)*(undefined8 *)(this + 0xa10),iVar9);
      iVar6 = AnimationNodeBlendSpace2D::get_triangle_point
                        ((int)*(undefined8 *)(this + 0xa10),*(int *)(this + 0xadc));
      iVar7 = AnimationNodeBlendSpace2D::get_triangle_point
                        ((int)*(undefined8 *)(this + 0xa10),*(int *)(this + 0xadc));
      StringName::StringName((StringName *)&local_108,"add_triangle",false);
      pSVar2 = *(StringName **)(this + 0xa10);
      Variant::Variant((Variant *)local_b8,iVar7);
      Variant::Variant((Variant *)local_a0,iVar6);
      Variant::Variant(local_88,iVar5);
      Variant::Variant((Variant *)&local_70,iVar9);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar10 = (Variant *)local_40;
      auStack_e0._8_8_ = local_88;
      auStack_e0._0_8_ = (Variant *)local_a0;
      local_e8 = (Variant *)local_b8;
      pVStack_d0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_108,(int)&local_e8);
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)local_b8);
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_108,"_update_space",false);
      EditorUndoRedoManager::add_do_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_108);
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_108,"_update_space",false);
      EditorUndoRedoManager::add_undo_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_108);
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_0010328c;
    }
  }
  else {
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
    local_108 = "";
    local_110 = (Object *)0x0;
    local_100 = 0;
    String::parse_latin1((StrRange *)&local_110);
    local_108 = "Remove BlendSpace2D Point";
    local_118 = 0;
    local_100 = 0x19;
    String::parse_latin1((StrRange *)&local_118);
    TTR((String *)&local_108,(String *)&local_118);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_108,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    iVar9 = *(int *)(this + 0xad8);
    StringName::StringName((StringName *)&local_108,"remove_blend_point",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_b8,iVar9);
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_98 = (undefined1  [16])0x0;
    iVar9 = (int)&local_e8;
    local_e8 = (Variant *)local_b8;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_108,iVar9);
    if (Variant::needs_deinit[local_a0[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
    iVar5 = *(int *)(this + 0xad8);
    uVar11 = AnimationNodeBlendSpace2D::get_blend_point_position((int)*(undefined8 *)(this + 0xa10))
    ;
    AnimationNodeBlendSpace2D::get_blend_point_node((int)(StrRange *)&local_110);
    StringName::StringName((StringName *)&local_108,"add_blend_point",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    local_f0 = uVar11;
    Variant::Variant((Variant *)local_b8,local_110);
    Variant::Variant((Variant *)local_a0,(Vector2 *)&local_f0);
    Variant::Variant(local_88,iVar5);
    local_68 = (undefined1  [16])0x0;
    local_70 = 0;
    pVVar10 = (Variant *)&local_58;
    auStack_e0._8_8_ = local_88;
    auStack_e0._0_8_ = (Variant *)local_a0;
    local_e8 = (Variant *)local_b8;
    EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_108,iVar9);
    do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar10 != (Variant *)local_b8);
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
    if (((local_110 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_110, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_110), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    iVar6 = 0;
    iVar5 = AnimationNodeBlendSpace2D::get_triangle_count();
    if (0 < iVar5) {
      do {
        iVar5 = 0;
LAB_00102f73:
        iVar7 = AnimationNodeBlendSpace2D::get_triangle_point
                          ((int)*(undefined8 *)(this + 0xa10),iVar6);
        if (iVar7 != *(int *)(this + 0xad8)) goto code_r0x00102f91;
        iVar5 = AnimationNodeBlendSpace2D::get_triangle_point
                          ((int)*(undefined8 *)(this + 0xa10),iVar6);
        iVar7 = AnimationNodeBlendSpace2D::get_triangle_point
                          ((int)*(undefined8 *)(this + 0xa10),iVar6);
        iVar8 = AnimationNodeBlendSpace2D::get_triangle_point
                          ((int)*(undefined8 *)(this + 0xa10),iVar6);
        StringName::StringName((StringName *)&local_108,"add_triangle",false);
        pSVar2 = *(StringName **)(this + 0xa10);
        Variant::Variant((Variant *)local_b8,iVar8);
        Variant::Variant((Variant *)local_a0,iVar7);
        Variant::Variant(local_88,iVar5);
        Variant::Variant((Variant *)&local_70,iVar6);
        local_50 = (undefined1  [16])0x0;
        pVVar10 = (Variant *)local_40;
        local_58 = 0;
        local_e8 = (Variant *)local_b8;
        pVStack_d0 = (Variant *)&local_70;
        EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_108,iVar9);
        do {
          pVVar1 = pVVar10 + -0x18;
          pVVar10 = pVVar10 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar10 != (Variant *)local_b8);
        if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
          StringName::unref();
        }
LAB_00102f9e:
        iVar6 = iVar6 + 1;
        iVar5 = AnimationNodeBlendSpace2D::get_triangle_count();
        if (iVar5 <= iVar6) break;
      } while( true );
    }
    StringName::StringName((StringName *)&local_108,"_update_space",false);
    local_e8 = (Variant *)0x0;
    auStack_e0 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_108,0);
    if (Variant::needs_deinit[(int)local_e8] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_108,"_update_space",false);
    local_e8 = (Variant *)0x0;
    auStack_e0 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_108,0);
    if (Variant::needs_deinit[(int)local_e8] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
    CanvasItem::queue_redraw();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010328c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00102f91:
  iVar5 = iVar5 + 1;
  if (iVar5 == 3) goto LAB_00102f9e;
  goto LAB_00102f73;
}



/* AnimationNodeBlendSpace2DEditor::_open_editor() */

void __thiscall AnimationNodeBlendSpace2DEditor::_open_editor(AnimationNodeBlendSpace2DEditor *this)

{
  int iVar1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  iVar1 = *(int *)(this + 0xad8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < iVar1) && (iVar4 = AnimationNodeBlendSpace2D::get_blend_point_count(), iVar1 < iVar4)) {
    AnimationNodeBlendSpace2D::get_blend_point_node((int)(CowData<char32_t> *)&local_38);
    local_40 = (Object *)0x0;
    if (local_38 != (Object *)0x0) {
      pOVar5 = (Object *)__dynamic_cast(local_38,&Object::typeinfo,&AnimationNode::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        local_40 = pOVar5;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_40 = (Object *)0x0;
          if (local_38 == (Object *)0x0) goto LAB_00103385;
          cVar3 = RefCounted::unreference();
          goto joined_r0x0010345b;
        }
        if ((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
        goto LAB_00103463;
LAB_001033d7:
        pSVar2 = AnimationTreeEditor::singleton;
        itos((long)&local_38);
        AnimationTreeEditor::enter_editor(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar5,false);
            return;
          }
          goto LAB_00103499;
        }
        goto LAB_001032c8;
      }
      cVar3 = RefCounted::unreference();
joined_r0x0010345b:
      if (cVar3 != '\0') {
        pOVar5 = (Object *)0x0;
LAB_00103463:
        cVar3 = predelete_handler(local_38);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001033d7;
      }
    }
LAB_00103385:
    _err_print_error("_open_editor","editor/plugins/animation_blend_space_2d_editor.cpp",0x350,
                     "Condition \"an.is_null()\" is true.",0,0);
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_40);
  }
LAB_001032c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103499:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_add_animation_type(int) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_add_animation_type
          (AnimationNodeBlendSpace2DEditor *this,int param_1)

{
  Variant *pVVar1;
  long lVar2;
  StringName *pSVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  AnimationNodeAnimation *this_00;
  Object *pOVar7;
  Object *pOVar8;
  Variant *pVVar9;
  long lVar10;
  long lVar11;
  AnimationNodeAnimation *pAVar12;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pAVar12 = (AnimationNodeAnimation *)0x0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (AnimationNodeAnimation *)operator_new(0x3e0,"");
  AnimationNodeAnimation::AnimationNodeAnimation(this_00);
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 != '\0') {
    cVar5 = RefCounted::reference();
    if (cVar5 != '\0') {
      pAVar12 = this_00;
    }
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler((Object *)this_00);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
  lVar10 = (long)param_1;
  lVar2 = *(long *)(this + 0xb18);
  if (lVar10 < 0) {
    if (lVar2 != 0) {
      lVar11 = *(long *)(lVar2 + -8);
      goto LAB_00103985;
    }
  }
  else if (lVar2 != 0) {
    lVar11 = *(long *)(lVar2 + -8);
    if (lVar11 <= lVar10) goto LAB_00103985;
    StringName::StringName((StringName *)&local_c8,(String *)(lVar2 + lVar10 * 8),false);
    AnimationNodeAnimation::set_animation((StringName *)pAVar12);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
    pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
    local_c8 = "";
    local_d0 = 0;
    local_c0 = 0;
    String::parse_latin1((StrRange *)&local_d0);
    local_c8 = "Add Animation Point";
    local_d8 = 0;
    local_c0 = 0x13;
    String::parse_latin1((StrRange *)&local_d8);
    TTR((String *)&local_c8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(pOVar7,(StringName *)&local_c8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    cVar5 = RefCounted::reference();
    pOVar8 = (Object *)0x0;
    if (cVar5 != '\0') {
      pOVar8 = (Object *)pAVar12;
    }
    StringName::StringName((StringName *)&local_c8,"add_blend_point",false);
    local_b0 = *(undefined8 *)(this + 0xb20);
    pSVar3 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_88,pOVar8);
    Variant::Variant((Variant *)local_70,(Vector2 *)&local_b0);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar3,(Variant **)&local_c8,(int)&local_a8);
    pVVar9 = (Variant *)local_40;
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    if (pOVar8 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(pOVar8);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
    }
    iVar6 = AnimationNodeBlendSpace2D::get_blend_point_count();
    StringName::StringName((StringName *)&local_c8,"remove_blend_point",false);
    pSVar3 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_88,iVar6);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar3,(Variant **)&local_c8,(int)&local_a8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
    CanvasItem::queue_redraw();
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler((Object *)pAVar12);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pAVar12 + 0x140))(pAVar12);
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pAVar12,false);
          return;
        }
        goto LAB_00103a88;
      }
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103a88:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar11 = 0;
LAB_00103985:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x00103c3b) */
/* WARNING: Removing unreachable block (ram,0x00105c00) */
/* WARNING: Removing unreachable block (ram,0x00105b79) */
/* WARNING: Removing unreachable block (ram,0x00105c40) */
/* WARNING: Removing unreachable block (ram,0x00105c50) */
/* WARNING: Removing unreachable block (ram,0x00105c13) */
/* WARNING: Removing unreachable block (ram,0x00105c32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendSpace2DEditor::AnimationNodeBlendSpace2DEditor() */

void __thiscall
AnimationNodeBlendSpace2DEditor::AnimationNodeBlendSpace2DEditor
          (AnimationNodeBlendSpace2DEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  BoxContainer *pBVar7;
  ButtonGroup *this_00;
  Button *pBVar8;
  VSeparator *pVVar9;
  SpinBox *pSVar10;
  Label *pLVar11;
  CheckBox *this_01;
  OptionButton *this_02;
  BoxContainer *this_03;
  GridContainer *this_04;
  LineEdit *pLVar12;
  PanelContainer *pPVar13;
  Control *pCVar14;
  CallableCustom *pCVar15;
  PopupMenu *pPVar16;
  EditorFileDialog *this_05;
  int iVar17;
  Object *pOVar18;
  long in_FS_OFFSET;
  ButtonGroup *local_78;
  undefined8 local_70;
  long local_68 [2];
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (AnimationNodeBlendSpace2DEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001182a0;
  *(undefined8 *)(this + 0xa10) = 0;
  this[0xa18] = (AnimationNodeBlendSpace2DEditor)0x0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined8 *)(this + 0xb20) = 0;
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xb3c) = 0;
  *(undefined8 *)(this + 0xb44) = 0;
  *(undefined8 *)(this + 0xb68) = 0;
  this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb58) = (undefined1  [16])0x0;
  singleton = this;
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117bb0;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  local_78 = (ButtonGroup *)0x0;
  this_00 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_00);
  postinitialize_handler((Object *)this_00);
  cVar6 = RefCounted::init_ref();
  if (cVar6 != '\0') {
    pOVar18 = (Object *)0x0;
    if ((this_00 != (ButtonGroup *)0x0) &&
       (cVar6 = RefCounted::reference(), pOVar18 = (Object *)this_00, local_78 = this_00,
       cVar6 == '\0')) {
      local_78 = (ButtonGroup *)0x0;
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar18), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
      Memory::free_static(pOVar18,false);
    }
  }
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa28) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa28));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa28),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa28));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa28),0,0);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
  pSVar1 = *(String **)(this + 0xa28);
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Set the blending position within the space");
  TTR((String *)&local_70,(String *)&local_58);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa28);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_tool_switch");
  iVar17 = (int)(StrRange *)local_68;
  Callable::bind<int>(iVar17);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa30) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa30));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa30),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa30));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa30),0,0);
  pSVar1 = *(String **)(this + 0xa30);
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Select and move points, create points with RMB.";
  local_70 = 0;
  local_50 = 0x2f;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa30);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_tool_switch");
  Callable::bind<int>(iVar17);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa38) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa38));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa38),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa38));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa38),0,0);
  pSVar1 = *(String **)(this + 0xa38);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_58 = "Create points.";
  local_70 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_tool_switch");
  Callable::bind<int>(iVar17);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_68);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa40) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa40));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa40),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa40));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa40),0,0);
  pSVar1 = *(String **)(this + 0xa40);
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Create triangles by connecting points.";
  local_70 = 0;
  local_50 = 0x26;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_tool_switch");
  Callable::bind<int>(iVar17);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StrRange *)local_68);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  *(VSeparator **)(this + 0xa48) = pVVar9;
  Node::add_child(pBVar7,pVVar9,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa50) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa50));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa50),0,0);
  local_58 = "";
  local_68[0] = 0;
  pSVar1 = *(String **)(this + 0xa50);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Erase points and triangles.");
  TTR((String *)&local_70,(String *)&local_58);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace2DEditor::_erase_selected");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa50),0));
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa80) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa80));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa80),0,0);
  plVar2 = *(long **)(this + 0xa80);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace2DEditor::_auto_triangles_toggled");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa80),0));
  pSVar1 = *(String **)(this + 0xa80);
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Generate blend triangles automatically (instead of manually)";
  local_70 = 0;
  local_50 = 0x3c;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa58) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa58));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa58),0));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa58),0,0);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
  pSVar1 = *(String **)(this + 0xa58);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Enable snap and show grid.");
  TTR((String *)&local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  plVar2 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace2DEditor::_snap_toggled");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa60) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  pSVar1 = *(String **)(this + 0xa60);
  local_68[0] = 0;
  local_58 = "x:";
  local_50 = 2;
  String::parse_latin1((StrRange *)local_68);
  SpinBox::set_prefix(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Range::set_min(_LC69);
  Range::set_step(_LC69);
  Range::set_max(_LC70);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa68) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  pSVar1 = *(String **)(this + 0xa68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"y:");
  SpinBox::set_prefix(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Range::set_min(_LC69);
  Range::set_step(_LC69);
  Range::set_max(_LC70);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58 = "";
  local_68[0] = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Sync:");
  TTR((String *)&local_70,(String *)&local_58);
  Label::Label(pLVar11,(String *)&local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(pBVar7,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_01 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(CheckBox **)(this + 0xa70) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa70),0,0);
  plVar2 = *(long **)(this + 0xa70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Blend:");
  TTR((String *)&local_70,(String *)&local_58);
  Label::Label(pLVar11,(String *)&local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(pBVar7,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_02 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (char *)0x0;
  OptionButton::OptionButton(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(OptionButton **)(this + 0xa78) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa78),0,0);
  plVar2 = *(long **)(this + 0xa78);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,false);
  this_03[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_00117bb0;
  postinitialize_handler((Object *)this_03);
  *(BoxContainer **)(this + 0xab8) = this_03;
  Node::add_child(pBVar7,this_03,0,0);
  uVar4 = *(undefined8 *)(this + 0xab8);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(uVar4,pVVar9,0,0);
  uVar4 = *(undefined8 *)(this + 0xab8);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Point");
  TTR((String *)&local_70,(String *)local_68);
  Label::Label(pLVar11,(String *)&local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar4,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xac0) = pSVar10;
  Node::add_child(*(undefined8 *)(this + 0xab8),pSVar10,0,0);
  Range::set_min(_LC76);
  Range::set_step(_LC69);
  Range::set_max(_LC70);
  plVar2 = *(long **)(this + 0xac0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_edit_point_pos");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xac8) = pSVar10;
  Node::add_child(*(undefined8 *)(this + 0xab8),pSVar10,0,0);
  Range::set_min(_LC76);
  Range::set_step(_LC69);
  Range::set_max(_LC70);
  plVar2 = *(long **)(this + 0xac8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_edit_point_pos");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xad0) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xab8),*(undefined8 *)(this + 0xad0),0,0);
  pSVar1 = *(String **)(this + 0xad0);
  local_68[0] = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Open Editor");
  TTR((String *)&local_70,(String *)&local_58);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xad0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace2DEditor::_open_editor");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  CanvasItem::hide();
  CanvasItem::hide();
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117bb0;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  Control::set_v_size_flags(pBVar7,3);
  this_04 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_04);
  postinitialize_handler((Object *)this_04);
  GridContainer::set_columns((int)this_04);
  Node::add_child(pBVar7,this_04,0,0);
  Control::set_h_size_flags(this_04,3);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117f28;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this_04,pBVar7,0,0);
  Control::set_v_size_flags(pBVar7,3);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xaa8) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  pLVar12 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar12,(String *)&local_58);
  postinitialize_handler((Object *)pLVar12);
  *(LineEdit **)(this + 0xa90) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa90),0,0);
  LineEdit::set_expand_to_text_length_enabled(SUB81(*(undefined8 *)(this + 0xa90),0));
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xab0) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  Range::set_max(_LC80);
  Range::set_min(_LC69);
  Range::set_step(_LC69);
  Range::set_min(_LC81);
  Range::set_max(0.0);
  Range::set_step(_LC69);
  pPVar13 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar13);
  postinitialize_handler((Object *)pPVar13);
  *(PanelContainer **)(this + 0xa20) = pPVar13;
  Control::set_clip_contents(SUB81(pPVar13,0));
  Node::add_child(this_04,*(undefined8 *)(this + 0xa20),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  pCVar14 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar14);
  postinitialize_handler((Object *)pCVar14);
  lVar5 = *(long *)pCVar14;
  *(Control **)(this + 0xae0) = pCVar14;
  pcVar3 = *(code **)(lVar5 + 0x108);
  pCVar15 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar15);
  *(undefined **)(pCVar15 + 0x20) = &_LC14;
  *(undefined1 (*) [16])(pCVar15 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar15 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar15 = &PTR_hash_001187d8;
  *(undefined8 *)(pCVar15 + 0x30) = uVar4;
  *(code **)(pCVar15 + 0x38) = _blend_space_gui_input;
  *(undefined8 *)(pCVar15 + 0x10) = 0;
  *(AnimationNodeBlendSpace2DEditor **)(pCVar15 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar15,(int)pCVar15 + 0x28);
  *(char **)(pCVar15 + 0x20) = "AnimationNodeBlendSpace2DEditor::_blend_space_gui_input";
  Callable::Callable((Callable *)&local_58,pCVar15);
  (*pcVar3)(pCVar14,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xae0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace2DEditor::_blend_space_draw");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  Control::set_focus_mode(*(undefined8 *)(this + 0xae0),2);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xae0),0,0);
  pCVar14 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar14);
  postinitialize_handler((Object *)pCVar14);
  Node::add_child(this_04,pCVar14,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00117bb0;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this_04,pBVar7,0,0);
  Control::set_h_size_flags(pBVar7,3);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xaa0) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  pLVar12 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar12,(String *)&local_58);
  postinitialize_handler((Object *)pLVar12);
  *(LineEdit **)(this + 0xa88) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa88),0,0);
  LineEdit::set_expand_to_text_length_enabled(SUB81(*(undefined8 *)(this + 0xa88),0));
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa98) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  Range::set_max(_LC80);
  Range::set_min(_LC69);
  Range::set_step(_LC69);
  Range::set_min(_LC81);
  Range::set_max(0.0);
  Range::set_step(_LC69);
  plVar2 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa68);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa98);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xaa0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xaa8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xab0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace2DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa88);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,String>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_String *)"&AnimationNodeBlendSpace2DEditor::_labels_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xa90);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,String>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_String *)"&AnimationNodeBlendSpace2DEditor::_labels_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pPVar13 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar13);
  postinitialize_handler((Object *)pPVar13);
  *(PanelContainer **)(this + 0xae8) = pPVar13;
  Node::add_child(this,pPVar13,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar11,(String *)&local_58);
  postinitialize_handler((Object *)pLVar11);
  *(Label **)(this + 0xaf0) = pLVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xae8),*(undefined8 *)(this + 0xaf0),0,0);
  local_44 = (float)EditorScale::get_scale();
  local_44 = local_44 * __LC87;
  local_48 = 0;
  Control::set_custom_minimum_size(this);
  pPVar16 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar16);
  postinitialize_handler((Object *)pPVar16);
  *(PopupMenu **)(this + 0xb00) = pPVar16;
  Node::add_child(this,pPVar16,0,0);
  plVar2 = *(long **)(this + 0xb00);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_add_menu_type");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pPVar16 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar16);
  postinitialize_handler((Object *)pPVar16);
  *(PopupMenu **)(this + 0xb08) = pPVar16;
  Node::set_auto_translate_mode(pPVar16,2);
  Node::add_child(*(undefined8 *)(this + 0xb00),*(undefined8 *)(this + 0xb08),0,0);
  plVar2 = *(long **)(this + 0xb08);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
            ((AnimationNodeBlendSpace2DEditor *)&local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace2DEditor::_add_animation_type");
  StringName::StringName((StringName *)local_68,"index_pressed",false);
  (*pcVar3)(plVar2,(StrRange *)local_68,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  this_05 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorFileDialog **)(this + 0xb60) = this_05;
  Node::add_child(this,this_05,0,0);
  local_58 = "";
  local_68[0] = 0;
  pSVar1 = *(String **)(this + 0xb60);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Open Animation Node");
  TTR((String *)&local_70,(String *)&local_58);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xb60),0);
  plVar2 = *(long **)(this + 0xb60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar15 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar15);
  *(undefined **)(pCVar15 + 0x20) = &_LC14;
  *(AnimationNodeBlendSpace2DEditor **)(pCVar15 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar15 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar15 = &PTR_hash_001188f8;
  *(undefined8 *)(pCVar15 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar15 + 0x10) = 0;
  *(undefined8 *)(pCVar15 + 0x30) = uVar4;
  *(code **)(pCVar15 + 0x38) = _file_opened;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar15,(int)pCVar15 + 0x28);
  *(char **)(pCVar15 + 0x20) = "AnimationNodeBlendSpace2DEditor::_file_opened";
  Callable::Callable((Callable *)&local_58,pCVar15);
  StringName::StringName((StringName *)local_68,"file_selected",false);
  (*pcVar3)(plVar2,(StrRange *)local_68,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  *(undefined8 *)(this + 0xad8) = 0xffffffffffffffff;
  *(undefined2 *)(this + 0xb38) = 0;
  if (((local_78 != (ButtonGroup *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)local_78), cVar6 != '\0')) {
    (**(code **)(*(long *)local_78 + 0x140))(local_78);
    Memory::free_static(local_78,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_add_menu_type(int) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_add_menu_type(AnimationNodeBlendSpace2DEditor *this,int param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined8 local_e8;
  String local_e0 [8];
  long *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
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
  if (param_1 == 1000) {
    EditorFileDialog::clear_filters();
    local_d8 = (long *)0x0;
    local_c8 = (char *)0x0;
    String::parse_latin1((String *)&local_c8,"AnimationRootNode");
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_c8,(List *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((local_d8 != (long *)0x0) && (lVar6 = *local_d8, lVar6 != 0)) {
      do {
        pSVar3 = *(String **)(this + 0xb60);
        local_d0 = 0;
        local_c8 = "";
        local_c0 = 0;
        String::parse_latin1((StrRange *)&local_d0);
        operator+((char *)&local_c8,(String *)&_LC98);
        EditorFileDialog::add_filter(pSVar3,(String *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    EditorFileDialog::popup_file_dialog();
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d8);
  }
  else if (param_1 == 0x3ea) {
    if (((*(long *)(this + 0xb68) == 0) ||
        (pOVar8 = (Object *)
                  __dynamic_cast(*(long *)(this + 0xb68),&Object::typeinfo,
                                 &AnimationRootNode::typeinfo,0), pOVar8 == (Object *)0x0)) ||
       (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      Ref<AnimationNode>::unref((Ref<AnimationNode> *)(this + 0xb68));
      goto LAB_00105d77;
    }
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)(this + 0xb68));
LAB_00106039:
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
    pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
    local_c8 = "";
    local_d0 = 0;
    local_c0 = 0;
    String::parse_latin1((StrRange *)&local_d0);
    local_d8 = (long *)0x0;
    local_c8 = "Add Node Point";
    local_c0 = 0xe;
    String::parse_latin1((StrRange *)&local_d8);
    TTR((String *)&local_c8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(pOVar9,(String *)&local_c8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    cVar4 = RefCounted::reference();
    pOVar7 = (Object *)0x0;
    if (cVar4 != '\0') {
      pOVar7 = pOVar8;
    }
    StringName::StringName((StringName *)&local_c8,"add_blend_point",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    local_b0 = *(undefined8 *)(this + 0xb20);
    Variant::Variant((Variant *)local_88,pOVar7);
    Variant::Variant((Variant *)local_70,(Vector2 *)&local_b0);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar9,pSVar2,(Variant **)&local_c8,(int)&local_a8);
    pVVar10 = (Variant *)local_40;
    do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar10 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    iVar5 = AnimationNodeBlendSpace2D::get_blend_point_count();
    StringName::StringName((StringName *)&local_c8,"remove_blend_point",false);
    pSVar2 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_88,iVar5);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar9,pSVar2,(Variant **)&local_c8,(int)&local_a8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar9,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar9,(StringName *)this,(Variant **)&local_c8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
    CanvasItem::queue_redraw();
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar8,false);
        return;
      }
      goto LAB_0010663f;
    }
  }
  else if (param_1 == 0x3e9) {
    lVar6 = EditorSettings::get_singleton();
    pOVar7 = *(Object **)(lVar6 + 0x300);
    if ((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
      pOVar8 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
      if ((pOVar8 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar8 = (Object *)0x0;
          cVar4 = predelete_handler(pOVar7);
          if (cVar4 != '\0') goto LAB_00106593;
        }
      }
      else {
        cVar4 = RefCounted::unreference();
        if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar7), cVar4 == '\0'))
        goto LAB_00106039;
LAB_00106593:
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
LAB_001065b3:
        if (pOVar8 != (Object *)0x0) goto LAB_00106039;
      }
    }
LAB_00105d77:
    pSVar3 = EditorNode::singleton;
    local_c8 = (char *)0x0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"Warning!");
    TTR((String *)&local_d8,(String *)&local_d0);
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"");
    local_f0 = 0;
    String::parse_latin1
              ((String *)&local_f0,"This type of node can\'t be used. Only root nodes are allowed.")
    ;
    TTR(local_e0,(String *)&local_f0);
    EditorNode::show_warning(pSVar3,local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  }
  else {
    PopupMenu::get_item_metadata((int)local_88);
    Variant::operator_cast_to_String((Variant *)&local_d0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_c8,(String *)&local_d0,false);
    lVar6 = ClassDB::instantiate((StringName *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    if (lVar6 == 0) {
      _err_print_error("_add_menu_type","editor/plugins/animation_blend_space_2d_editor.cpp",0x15d,
                       "Parameter \"obj\" is null.",0,0);
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&AnimationNode::typeinfo,0);
      if (pOVar7 != (Object *)0x0) {
        cVar4 = RefCounted::init_ref();
        if (cVar4 != '\0') {
          pOVar8 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&AnimationRootNode::typeinfo,0)
          ;
          if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
            cVar4 = RefCounted::unreference();
            if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar7), cVar4 == '\0')) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              goto LAB_00106039;
            }
LAB_00105f85:
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            goto LAB_001065b3;
          }
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar8 = (Object *)0x0;
            cVar4 = predelete_handler(pOVar7);
            if (cVar4 != '\0') goto LAB_00105f85;
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        goto LAB_00105d77;
      }
      _err_print_error("_add_menu_type","editor/plugins/animation_blend_space_2d_editor.cpp",0x15f,
                       "Parameter \"an\" is null.",0,0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010663f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_file_opened(String const&) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_file_opened(AnimationNodeBlendSpace2DEditor *this,String *param_1)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (Object *)&_LC14;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  ResourceLoader::load((String *)&local_58,param_1,(StrRange *)&local_60,1,0);
  if (local_58 == (Object *)0x0) {
    pOVar4 = *(Object **)(this + 0xb68);
    if (pOVar4 == (Object *)0x0) goto LAB_00106740;
    *(undefined8 *)(this + 0xb68) = 0;
    goto LAB_001067ed;
  }
  pOVar3 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&AnimationNode::typeinfo,0);
  pOVar4 = *(Object **)(this + 0xb68);
  if (pOVar4 != pOVar3) {
    *(Object **)(this + 0xb68) = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar4 != (Object *)0x0) goto LAB_001067ed;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xb68) = 0;
      }
      if (pOVar4 != (Object *)0x0) {
LAB_001067ed:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      if (local_58 == (Object *)0x0) goto LAB_00106740;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar4 = local_58;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_58);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
LAB_00106740:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar1 = EditorNode::singleton;
  if (*(long *)(this + 0xb68) == 0) {
    local_58 = (Object *)&_LC14;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x10c7cb;
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(String *)&local_68);
    local_58 = (Object *)&_LC14;
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = (Object *)0x10f090;
    local_80 = 0;
    local_50 = 0x42;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_58,(String *)&local_80);
    EditorNode::show_warning(pSVar1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _add_menu_type(this,0x3ea);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::_notification(int) */

void AnimationNodeBlendSpace2DEditor::_notification(int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  long in_FS_OFFSET;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  undefined8 local_58;
  long local_40;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = (int)in_RSI;
  if (iVar6 == 0x1f) {
    CanvasItem::is_visible_in_tree();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process(SUB41(param_1,0));
      return;
    }
    goto LAB_001076d9;
  }
  if (iVar6 < 0x20) {
    if (iVar6 == 10) {
LAB_00106ad5:
      pSVar1 = *(StringName **)(pSVar7 + 0xae8);
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                      in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname)
         , iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)&local_60,pSVar7);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (((local_60 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      pSVar1 = *(StringName **)(pSVar7 + 0xaf0);
      if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      local_58 = Control::get_theme_color
                           (pSVar7,(StringName *)
                                   &_notification(int)::{lambda()#2}::operator()()::sname);
      Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
      pSVar1 = *(StringName **)(pSVar7 + 0xa20);
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)&local_60,pSVar7);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (((local_60 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      pRVar2 = *(Ref **)(pSVar7 + 0xa28);
      if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa30);
      if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa38);
      if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa40);
      if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa50);
      if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa58);
      if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xad0);
      if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa80);
      if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      OptionButton::clear();
      pRVar2 = *(Ref **)(pSVar7 + 0xa78);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Continuous");
      TTR((String *)&local_60,(String *)&local_70);
      if ((_notification(int)::{lambda()#12}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      iVar6 = (int)(StringName *)&local_60;
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pRVar2 = *(Ref **)(pSVar7 + 0xa78);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Discrete");
      TTR((String *)&local_60,(String *)&local_70);
      if ((_notification(int)::{lambda()#13}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pRVar2 = *(Ref **)(pSVar7 + 0xa78);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Capture");
      TTR((String *)&local_60,(String *)&local_70);
      if ((_notification(int)::{lambda()#14}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      if ((iVar6 != 0x11) || (*(long *)(AnimationTreeEditor::singleton + 0xa20) == 0))
      goto LAB_00106aad;
      local_78 = (Object *)0x0;
      cVar4 = AnimationMixer::is_active();
      if (cVar4 == '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1
                  ((String *)&local_70,
                   "AnimationTree is inactive.\nActivate to enable playback, check node warnings if activation fails."
                  );
        TTR((String *)&local_60,(String *)&local_70);
        if (local_78 != local_60) {
LAB_00106a44:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          local_78 = local_60;
          local_60 = (Object *)0x0;
        }
LAB_00106a5f:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        cVar4 = AnimationTree::is_state_invalid();
        if (cVar4 == '\0') {
          iVar6 = AnimationNodeBlendSpace2D::get_triangle_count();
          if (iVar6 == 0) {
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"");
            local_70 = 0;
            String::parse_latin1
                      ((String *)&local_70,"No triangles exist, so no blending can take place.");
            TTR((String *)&local_60,(String *)&local_70);
            if (local_78 != local_60) goto LAB_00106a44;
            goto LAB_00106a5f;
          }
        }
        else {
          AnimationTree::get_invalid_state_reason();
          if (local_78 != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            local_78 = local_60;
            local_60 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
      }
      Label::get_text();
      cVar4 = String::operator!=((String *)&local_78,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') {
        Label::set_text(*(String **)(pSVar7 + 0xaf0));
        if ((local_78 == (Object *)0x0) || (*(uint *)(local_78 + -8) < 2)) {
          CanvasItem::hide();
        }
        else {
          CanvasItem::show();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
  }
  else if (iVar6 == 0x2d) goto LAB_00106ad5;
LAB_00106aad:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001076d9:
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



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* AnimationNodeBlendSpace2DEditor::_bind_methods() */

void AnimationNodeBlendSpace2DEditor::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar1 = create_method_bind<AnimationNodeBlendSpace2DEditor>(_update_space);
  StringName::StringName((StringName *)local_68,"_update_space",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<AnimationNodeBlendSpace2DEditor>(_update_tool_erase);
  StringName::StringName((StringName *)local_68,"_update_tool_erase",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<AnimationNodeBlendSpace2DEditor>(_update_edited_point_pos);
  StringName::StringName((StringName *)local_68,"_update_edited_point_pos",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendSpace2DEditor::_blend_space_gui_input(Ref<InputEvent> const&) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_blend_space_gui_input
          (AnimationNodeBlendSpace2DEditor *this,Ref *param_1)

{
  Variant *pVVar1;
  CowData<String> *this_00;
  CowData<int> *this_01;
  CowData<char32_t> *this_02;
  List *pLVar2;
  long *plVar3;
  Vector2i *pVVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  Object *pOVar12;
  String *pSVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  StringName *pSVar17;
  Variant *pVVar18;
  Variant *pVVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  Object *local_198;
  Object *local_188;
  float local_170;
  float fStack_16c;
  Ref<AnimationNode> *local_160;
  long *local_120;
  undefined8 *local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  String *local_f0;
  Object *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pLVar2 = *(List **)(AnimationTreeEditor::singleton + 0xa20);
  if (pLVar2 != (List *)0x0) {
    if ((*(long *)param_1 == 0) ||
       (local_188 = (Object *)
                    __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
       local_188 == (Object *)0x0)) {
      BaseButton::is_pressed();
LAB_00107cb8:
      local_188 = (Object *)0x0;
      lVar20 = *(long *)param_1;
      if (lVar20 != 0) {
LAB_00107cd9:
        local_198 = (Object *)
                    __dynamic_cast(lVar20,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
        if (local_198 == (Object *)0x0) {
LAB_00107d1f:
          pOVar12 = (Object *)
                    __dynamic_cast(lVar20,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
          if ((pOVar12 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 != '\0')) {
            cVar7 = Control::has_focus();
            if (cVar7 == '\0') {
              Control::grab_focus();
              CanvasItem::queue_redraw();
            }
            if (this[0xb38] != (AnimationNodeBlendSpace2DEditor)0x0) {
              this[0xb39] = (AnimationNodeBlendSpace2DEditor)0x1;
              if (this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0) {
                uVar27 = AnimationNodeBlendSpace2D::get_min_space();
                uVar28 = AnimationNodeBlendSpace2D::get_max_space();
                uVar25 = Control::get_size();
                uVar26 = InputEventMouse::get_position();
                *(ulong *)(this + 0xb44) =
                     CONCAT44((uint)((((float)((ulong)uVar26 >> 0x20) - *(float *)(this + 0xb40)) /
                                     (float)((ulong)uVar25 >> 0x20)) *
                                    ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20)
                                    )) ^ __LC16,
                              ((float)uVar28 - (float)uVar27) *
                              (((float)uVar26 - *(float *)(this + 0xb3c)) / (float)uVar25));
              }
              CanvasItem::queue_redraw();
              _update_edited_point_pos(this);
            }
            cVar7 = BaseButton::is_pressed();
            if (((cVar7 != '\0') && (*(long *)(this + 0xb58) != 0)) &&
               (*(long *)(*(long *)(this + 0xb58) + -8) != 0)) {
              CanvasItem::queue_redraw();
            }
            cVar7 = BaseButton::is_pressed();
            if (((cVar7 == '\0') && (*(long *)(this + 0xb58) != 0)) &&
               (*(long *)(*(long *)(this + 0xb58) + -8) != 0)) {
              CowData<int>::resize<false>((CowData<int> *)(this + 0xb58),0);
              CanvasItem::queue_redraw();
            }
            cVar7 = BaseButton::is_pressed();
            if ((cVar7 != '\0') && (uVar15 = InputEventMouse::get_button_mask(), (uVar15 & 1) != 0))
            {
              uVar27 = Control::get_size();
              uVar28 = InputEventMouse::get_position();
              local_c8._0_4_ = (float)uVar28 / (float)uVar27;
              local_c8._4_4_ =
                   _LC159 - (float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar27 >> 0x20);
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              uVar28 = AnimationNodeBlendSpace2D::get_max_space();
              local_c8._0_4_ = (float)local_c8 * ((float)uVar28 - (float)uVar27);
              local_c8._4_4_ =
                   local_c8._4_4_ *
                   ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20));
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              local_c8 = (Variant *)
                         CONCAT44((float)((ulong)uVar27 >> 0x20) + local_c8._4_4_,
                                  (float)uVar27 + (float)local_c8);
              Variant::Variant((Variant *)&local_a8,(Vector2 *)&local_c8);
              get_blend_position_path((AnimationNodeBlendSpace2DEditor *)&local_e8);
              Object::set((StringName *)pLVar2,(Variant *)&local_e8,(bool *)&local_a8);
              if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_a8] != '\0') {
                Variant::_clear_internal();
              }
              CanvasItem::queue_redraw();
            }
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar12), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
          }
          if (local_198 != (Object *)0x0) {
LAB_00107e07:
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_198), cVar7 != '\0')) {
              (**(code **)(*(long *)local_198 + 0x140))(local_198);
              Memory::free_static(local_198,false);
            }
          }
        }
        else {
          cVar7 = RefCounted::reference();
          if (cVar7 != '\0') {
            cVar7 = InputEvent::is_pressed();
            if ((cVar7 != '\0') &&
               ((((cVar7 = BaseButton::is_pressed(), cVar7 != '\0' &&
                  (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 2)) ||
                 ((iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 1 &&
                  (cVar7 = BaseButton::is_pressed(), cVar7 != '\0')))) &&
                (this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0)))) {
              PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xb00),0));
              PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xb08),0));
              this_00 = (CowData<String> *)(this + 0xb18);
              CowData<String>::resize<false>(this_00,0);
              local_120 = (long *)0x0;
              StringName::StringName((StringName *)&local_e8,"AnimationRootNode",false);
              ClassDB::get_inheriters_from_class((StringName *)&local_e8,(List *)&local_120);
              if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                StringName::unref();
              }
              pSVar13 = *(String **)(this + 0xb00);
              uVar27 = *(undefined8 *)(this + 0xb08);
              local_f0 = (String *)0x0;
              String::parse_latin1((String *)&local_f0,"");
              local_f8 = 0;
              String::parse_latin1((String *)&local_f8,"Add Animation");
              TTR((String *)&local_e8,(String *)&local_f8);
              PopupMenu::add_submenu_node_item(pSVar13,(PopupMenu *)&local_e8,(int)uVar27);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              local_118 = (undefined8 *)0x0;
              AnimationMixer::get_animation_list(pLVar2);
              if (local_118 != (undefined8 *)0x0) {
                for (plVar3 = (long *)*local_118; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1])
                {
                  lVar20 = *plVar3;
                  uVar27 = *(undefined8 *)(this + 0xb08);
                  if (lVar20 == 0) {
                    local_e8 = (Object *)0x0;
                  }
                  else {
                    local_e8 = (Object *)0x0;
                    if (*(char **)(lVar20 + 8) == (char *)0x0) {
                      if (*(long *)(lVar20 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_e8,(CowData *)(lVar20 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_e8,*(char **)(lVar20 + 8));
                    }
                  }
                  if ((_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                       sname == '\0') &&
                     (iVar8 = __cxa_guard_acquire(&_blend_space_gui_input(Ref<InputEvent>const&)::
                                                   {lambda()#1}::operator()()::sname), iVar8 != 0))
                  {
                    _scs_create((char *)&_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}
                                         ::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}::
                                  operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}
                                         ::operator()()::sname);
                  }
                  Control::get_editor_theme_icon((StringName *)&local_f0);
                  PopupMenu::add_icon_item
                            (uVar27,(String *)&local_f0,(StringName *)&local_e8,0xffffffff);
                  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  lVar20 = *plVar3;
                  if (lVar20 == 0) {
                    local_e8 = (Object *)0x0;
                  }
                  else {
                    local_e8 = (Object *)0x0;
                    if (*(char **)(lVar20 + 8) == (char *)0x0) {
                      if (*(long *)(lVar20 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_e8,(CowData *)(lVar20 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_e8,*(char **)(lVar20 + 8));
                    }
                  }
                  if (*(long *)(this + 0xb18) == 0) {
                    lVar20 = 1;
                  }
                  else {
                    lVar20 = *(long *)(*(long *)(this + 0xb18) + -8) + 1;
                  }
                  iVar8 = CowData<String>::resize<false>(this_00,lVar20);
                  if (iVar8 == 0) {
                    if (*(long *)(this + 0xb18) == 0) {
                      lVar21 = -1;
                      lVar20 = 0;
                    }
                    else {
                      lVar20 = *(long *)(*(long *)(this + 0xb18) + -8);
                      lVar21 = lVar20 + -1;
                      if (-1 < lVar21) {
                        CowData<String>::_copy_on_write(this_00);
                        this_02 = (CowData<char32_t> *)(*(long *)(this + 0xb18) + lVar21 * 8);
                        if (*(Object **)this_02 != local_e8) {
                          CowData<char32_t>::_ref(this_02,(CowData *)&local_e8);
                        }
                        goto LAB_00108706;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar21,lVar20,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true");
                  }
LAB_00108706:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                }
              }
              if ((local_120 != (long *)0x0) &&
                 (pSVar17 = (StringName *)*local_120, pSVar17 != (StringName *)0x0)) {
                do {
                  lVar20 = *(long *)pSVar17;
                  if (lVar20 == 0) {
                    local_e8 = (Object *)0x0;
                  }
                  else {
                    local_e8 = (Object *)0x0;
                    if (*(char **)(lVar20 + 8) == (char *)0x0) {
                      if (*(long *)(lVar20 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_e8,(CowData *)(lVar20 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_e8,*(char **)(lVar20 + 8));
                    }
                  }
                  String::replace_first((char *)&local_110,(char *)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  cVar7 = String::operator==((String *)&local_110,"Animation");
                  if (((cVar7 == '\0') &&
                      (cVar7 = String::operator==((String *)&local_110,"StartState"), cVar7 == '\0')
                      ) && (cVar7 = String::operator==((String *)&local_110,"EndState"),
                           cVar7 == '\0')) {
                    uVar11 = PopupMenu::get_item_count();
                    local_f0 = (String *)0x0;
                    uVar27 = *(undefined8 *)(this + 0xb00);
                    if (local_110 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_110);
                    }
                    local_100 = 0;
                    String::parse_latin1((String *)&local_100,"");
                    local_108 = 0;
                    String::parse_latin1((String *)&local_108,"Add %s");
                    TTR((String *)&local_f8,(String *)&local_108);
                    vformat<String>((StringName *)&local_e8,(String *)&local_f8,(String *)&local_f0)
                    ;
                    PopupMenu::add_item(uVar27,(StringName *)&local_e8,uVar11,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                    uVar27 = *(undefined8 *)(this + 0xb00);
                    Variant::Variant((Variant *)&local_a8,pSVar17);
                    PopupMenu::set_item_metadata((int)uVar27,(Variant *)(ulong)uVar11);
                    if (Variant::needs_deinit[(int)local_a8] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                  pSVar17 = *(StringName **)(pSVar17 + 8);
                } while (pSVar17 != (StringName *)0x0);
              }
              local_160 = (Ref<AnimationNode> *)&local_100;
              lVar20 = EditorSettings::get_singleton();
              pOVar12 = *(Object **)(lVar20 + 0x300);
              iVar8 = (int)(StringName *)&local_e8;
              if (pOVar12 == (Object *)0x0) {
                local_100 = 0;
              }
              else {
                cVar7 = RefCounted::reference();
                local_100 = 0;
                if (cVar7 != '\0') {
                  lVar20 = __dynamic_cast(pOVar12,&Object::typeinfo,&AnimationNode::typeinfo,0);
                  if ((lVar20 != 0) &&
                     (local_100 = lVar20, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                    local_100 = 0;
                  }
                  cVar7 = RefCounted::unreference();
                  lVar20 = local_100;
                  if ((cVar7 != '\0') &&
                     (cVar7 = predelete_handler(pOVar12), lVar20 = local_100, cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                    Memory::free_static(pOVar12,false);
                  }
                  if (lVar20 != 0) {
                    local_e8 = (Object *)0x0;
                    PopupMenu::add_separator(*(String **)(this + 0xb00),iVar8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    local_f0 = (String *)0x0;
                    uVar27 = *(undefined8 *)(this + 0xb00);
                    String::parse_latin1((String *)&local_f0,"");
                    local_f8 = 0;
                    String::parse_latin1((String *)&local_f8,"Paste");
                    TTR((String *)&local_e8,(String *)&local_f8);
                    PopupMenu::add_item(uVar27,(StringName *)&local_e8,0x3e9,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                  }
                }
              }
              local_e8 = (Object *)0x0;
              PopupMenu::add_separator(*(String **)(this + 0xb00),iVar8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              local_f0 = (String *)0x0;
              uVar27 = *(undefined8 *)(this + 0xb00);
              String::parse_latin1((String *)&local_f0,"");
              local_f8 = 0;
              String::parse_latin1((String *)&local_f8,"Load...");
              TTR((String *)&local_e8,(String *)&local_f8);
              PopupMenu::add_item(uVar27,(StringName *)&local_e8,1000,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              pVVar4 = *(Vector2i **)(this + 0xb00);
              uVar27 = InputEventMouse::get_position();
              uVar28 = Control::get_screen_position();
              local_c8 = (Variant *)
                         CONCAT44((float)((ulong)uVar27 >> 0x20) + (float)((ulong)uVar28 >> 0x20),
                                  (float)uVar27 + (float)uVar28);
              local_a8 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
              Window::set_position(pVVar4);
              Window::reset_size();
              local_a8 = 0;
              local_a0 = 0;
              (**(code **)(**(long **)(this + 0xb00) + 0x240))();
              uVar27 = Control::get_size();
              uVar28 = InputEventMouse::get_position();
              *(ulong *)(this + 0xb20) =
                   CONCAT44(_LC159 - (float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar27 >> 0x20)
                            ,(float)uVar28 / (float)uVar27);
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              uVar28 = AnimationNodeBlendSpace2D::get_max_space();
              local_170 = (float)uVar27;
              fStack_16c = (float)((ulong)uVar27 >> 0x20);
              *(ulong *)(this + 0xb20) =
                   CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb20) >> 0x20) *
                            ((float)((ulong)uVar28 >> 0x20) - fStack_16c),
                            (float)*(undefined8 *)(this + 0xb20) * ((float)uVar28 - local_170));
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              *(ulong *)(this + 0xb20) =
                   CONCAT44((float)((ulong)uVar27 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0xb20) >> 0x20),
                            (float)uVar27 + (float)*(undefined8 *)(this + 0xb20));
              cVar7 = BaseButton::is_pressed();
              if (cVar7 != '\0') {
                local_a8 = AnimationNodeBlendSpace2D::get_snap();
                uVar27 = Vector2::snapped(this + 0xb20);
                *(undefined8 *)(this + 0xb20) = uVar27;
              }
              Ref<AnimationNode>::unref(local_160);
              List<StringName,DefaultAllocator>::~List
                        ((List<StringName,DefaultAllocator> *)&local_118);
              List<StringName,DefaultAllocator>::~List
                        ((List<StringName,DefaultAllocator> *)&local_120);
            }
            cVar7 = InputEvent::is_pressed();
            if (((cVar7 != '\0') && (cVar7 = BaseButton::is_pressed(), cVar7 != '\0')) &&
               (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 1)) {
              CanvasItem::queue_redraw();
              *(undefined8 *)(this + 0xad8) = 0xffffffffffffffff;
              _update_tool_erase(this);
              lVar20 = *(long *)(this + 0xb30);
              for (lVar21 = 0; (lVar20 != 0 && (lVar21 < *(long *)(lVar20 + -8)));
                  lVar21 = lVar21 + 1) {
                local_a8 = InputEventMouse::get_position();
                fVar23 = (float)Vector2::distance_to((Vector2 *)(lVar20 + lVar21 * 8));
                fVar24 = (float)EditorScale::get_scale();
                if (fVar23 < fVar24 * __LC160) {
                  *(int *)(this + 0xad8) = (int)lVar21;
                  AnimationNodeBlendSpace2D::get_blend_point_node((int)(String *)&local_e8);
                  local_f0 = (String *)0x0;
                  if (local_e8 != (Object *)0x0) {
                    pSVar13 = (String *)
                              __dynamic_cast(local_e8,&Object::typeinfo,&AnimationNode::typeinfo,0);
                    if (pSVar13 != (String *)0x0) {
                      local_f0 = pSVar13;
                      cVar7 = RefCounted::reference();
                      if (cVar7 == '\0') {
                        local_f0 = (String *)0x0;
                      }
                      if (local_e8 == (Object *)0x0) goto LAB_00108043;
                    }
                    cVar7 = RefCounted::unreference();
                    pOVar12 = local_e8;
                    if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_e8), cVar7 != '\0')) {
                      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
                      Memory::free_static(pOVar12,false);
                    }
                  }
LAB_00108043:
                  pOVar12 = EditorNode::singleton;
                  local_e8 = (Object *)0x0;
                  String::parse_latin1((String *)&local_e8,"");
                  EditorNode::push_item(pOVar12,local_f0,SUB81((String *)&local_e8,0));
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  this[0xb38] = (AnimationNodeBlendSpace2DEditor)0x1;
                  uVar27 = InputEventMouse::get_position();
                  *(undefined8 *)(this + 0xb3c) = uVar27;
                  _update_tool_erase(this);
                  _update_edited_point_pos(this);
                  Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_f0);
                  goto LAB_001080ba;
                }
                lVar20 = *(long *)(this + 0xb30);
              }
              cVar7 = AnimationNodeBlendSpace2D::get_auto_triangles();
              if (cVar7 == '\0') {
                for (iVar8 = 0; iVar9 = AnimationNodeBlendSpace2D::get_triangle_count(),
                    iVar8 < iVar9; iVar8 = iVar8 + 1) {
                  local_e0 = (undefined8 *)0x0;
                  iVar9 = 0;
                  do {
                    iVar10 = AnimationNodeBlendSpace2D::get_triangle_point
                                       ((int)*(undefined8 *)(this + 0xa10),iVar8);
                    lVar21 = (long)iVar10;
                    lVar20 = *(long *)(this + 0xb30);
                    if (iVar10 < 0) {
                      if (lVar20 == 0) goto LAB_001097d1;
LAB_0010977f:
                      lVar20 = *(long *)(lVar20 + -8);
LAB_00109783:
                      _err_print_index_error
                                ("_blend_space_gui_input",
                                 "editor/plugins/animation_blend_space_2d_editor.cpp",0xc2,lVar21,
                                 lVar20,"idx","points.size()","",false,false);
                      goto LAB_001097ba;
                    }
                    if (lVar20 == 0) {
LAB_001097d1:
                      lVar20 = 0;
                      goto LAB_00109783;
                    }
                    if (*(long *)(lVar20 + -8) <= lVar21) goto LAB_0010977f;
                    iVar9 = iVar9 + 1;
                    Vector<Vector2>::push_back(*(Vector<Vector2> **)(lVar20 + lVar21 * 8),&local_e8)
                    ;
                    puVar6 = local_e0;
                  } while (iVar9 != 3);
                  if (local_e0 == (undefined8 *)0x0) {
                    lVar20 = 0;
                    goto LAB_00109c77;
                  }
                  lVar20 = local_e0[-1];
                  if (lVar20 < 3) goto LAB_00109c77;
                  uVar27 = InputEventMouse::get_position();
                  fVar23 = (float)uVar27;
                  fVar24 = (float)((ulong)uVar27 >> 0x20);
                  local_d0 = CONCAT44((float)((ulong)*puVar6 >> 0x20) - fVar24,
                                      (float)*puVar6 - fVar23);
                  local_a8 = CONCAT44((float)((ulong)puVar6[2] >> 0x20) - fVar24,
                                      (float)puVar6[2] - fVar23);
                  local_c8 = (Variant *)
                             CONCAT44((float)((ulong)puVar6[1] >> 0x20) - fVar24,
                                      (float)puVar6[1] - fVar23);
                  fVar23 = (float)Vector2::cross((Vector2 *)&local_d0);
                  fVar24 = (float)Vector2::cross((Vector2 *)&local_c8);
                  if ((0.0 < fVar23 == 0.0 < fVar24) &&
                     (fVar24 = (float)Vector2::cross((Vector2 *)&local_a8),
                     0.0 < fVar23 == 0.0 < fVar24)) {
                    *(int *)(this + 0xadc) = iVar8;
                    _update_tool_erase(this);
LAB_001097ba:
                    CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
                    goto LAB_001080ba;
                  }
                  CowData<Vector2>::_unref((CowData<Vector2> *)&local_e0);
                }
              }
            }
            cVar7 = InputEvent::is_pressed();
            if (((cVar7 != '\0') && (cVar7 = BaseButton::is_pressed(), cVar7 != '\0')) &&
               (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 1)) {
              lVar21 = 0;
              CanvasItem::queue_redraw();
              lVar20 = *(long *)(this + 0xb30);
              *(undefined4 *)(this + 0xad8) = 0xffffffff;
LAB_00108800:
              if (lVar20 != 0) {
                while( true ) {
                  if (*(long *)(lVar20 + -8) <= lVar21) goto LAB_00107eb3;
                  lVar22 = *(long *)(this + 0xb58);
                  if ((lVar22 == 0) || (*(long *)(lVar22 + -8) < 1)) break;
                  lVar14 = 0;
                  while (*(int *)(lVar22 + lVar14 * 4) != (int)lVar21) {
                    lVar14 = lVar14 + 1;
                    if (*(long *)(lVar22 + -8) == lVar14) goto LAB_00108bc0;
                  }
                  lVar21 = lVar21 + 1;
                }
LAB_00108bc0:
                local_a8 = InputEventMouse::get_position();
                fVar23 = (float)Vector2::distance_to((Vector2 *)(lVar20 + lVar21 * 8));
                fVar24 = (float)EditorScale::get_scale();
                if (fVar24 * __LC160 <= fVar23) goto code_r0x00108c07;
                if (*(long *)(this + 0xb58) == 0) {
                  lVar20 = 0;
                }
                else {
                  lVar20 = *(long *)(*(long *)(this + 0xb58) + -8);
                }
                this_01 = (CowData<int> *)(this + 0xb58);
                iVar8 = CowData<int>::resize<false>(this_01,lVar20 + 1);
                if (iVar8 == 0) {
                  if (*(long *)(this + 0xb58) == 0) {
                    lVar22 = -1;
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = *(long *)(*(long *)(this + 0xb58) + -8);
                    lVar22 = lVar20 + -1;
                    if (-1 < lVar22) {
                      CowData<int>::_copy_on_write(this_01);
                      piVar16 = *(int **)(this + 0xb58);
                      piVar16[lVar22] = (int)lVar21;
                      goto LAB_00109850;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar22,lVar20,"p_index",
                             "size()","",false,false);
                  piVar16 = *(int **)(this + 0xb58);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true");
                  piVar16 = *(int **)(this + 0xb58);
                }
LAB_00109850:
                if ((piVar16 == (int *)0x0) || (*(long *)(piVar16 + -2) != 3)) goto LAB_001080ba;
                cVar7 = AnimationNodeBlendSpace2D::has_triangle
                                  ((int)*(undefined8 *)(this + 0xa10),*piVar16,piVar16[1]);
                if (cVar7 != '\0') {
                  CowData<int>::resize<false>(this_01,0);
                  pSVar13 = (String *)EditorNode::singleton;
                  local_e8 = (Object *)0x0;
                  String::parse_latin1((String *)&local_e8,"");
                  local_f0 = (String *)0x0;
                  String::parse_latin1((String *)&local_f0,"Warning!");
                  TTR((String *)&local_f8,(String *)&local_f0);
                  local_108 = 0;
                  String::parse_latin1((String *)&local_108,"");
                  local_110 = 0;
                  String::parse_latin1((String *)&local_110,"Triangle already exists.");
                  TTR((String *)&local_100,(String *)&local_110);
                  EditorNode::show_warning(pSVar13,(String *)&local_100);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  goto LAB_001080ba;
                }
                this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
                pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
                local_f0 = (String *)0x0;
                String::parse_latin1((String *)&local_f0,"");
                local_f8 = 0;
                String::parse_latin1((String *)&local_f8,"Add Triangle");
                TTR((String *)&local_e8,(String *)&local_f8);
                EditorUndoRedoManager::create_action(pOVar12,(String *)&local_e8,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                piVar16 = *(int **)(this + 0xb58);
                if (piVar16 == (int *)0x0) {
                  lVar20 = 0;
                }
                else {
                  lVar20 = *(long *)(piVar16 + -2);
                  if (2 < lVar20) {
                    iVar8 = piVar16[1];
                    iVar9 = piVar16[2];
                    iVar10 = *piVar16;
                    StringName::StringName((StringName *)&local_e8,"add_triangle",false);
                    pSVar17 = *(StringName **)(this + 0xa10);
                    Variant::Variant((Variant *)&local_a8,iVar10);
                    Variant::Variant((Variant *)&local_90,iVar8);
                    Variant::Variant((Variant *)&local_78,iVar9);
                    local_58 = (undefined1  [16])0x0;
                    local_60 = 0;
                    pVVar19 = local_48;
                    local_c8 = (Variant *)&local_a8;
                    pVStack_c0 = (Variant *)&local_90;
                    local_b8 = (Variant *)&local_78;
                    EditorUndoRedoManager::add_do_methodp
                              (pOVar12,pSVar17,(Variant **)&local_e8,(int)&local_c8);
                    do {
                      pVVar18 = pVVar19 + -0x18;
                      pVVar19 = pVVar19 + -0x18;
                      if (Variant::needs_deinit[*(int *)pVVar18] != '\0') {
                        Variant::_clear_internal();
                      }
                    } while (pVVar19 != (Variant *)&local_a8);
                    if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    iVar8 = AnimationNodeBlendSpace2D::get_triangle_count();
                    StringName::StringName((StringName *)&local_e8,"remove_triangle",false);
                    pSVar17 = *(StringName **)(this + 0xa10);
                    Variant::Variant((Variant *)&local_a8,iVar8);
                    local_90 = 0;
                    local_88 = (undefined1  [16])0x0;
                    local_c8 = (Variant *)&local_a8;
                    EditorUndoRedoManager::add_undo_methodp
                              (pOVar12,pSVar17,(Variant **)&local_e8,(int)&local_c8);
                    if (Variant::needs_deinit[(int)local_90] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_a8] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    StringName::StringName((StringName *)&local_e8,"_update_space",false);
                    EditorUndoRedoManager::add_do_method<>
                              ((EditorUndoRedoManager *)pOVar12,(Object *)this,
                               (StringName *)&local_e8);
                    if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    StringName::StringName((StringName *)&local_e8,"_update_space",false);
                    EditorUndoRedoManager::add_undo_method<>
                              ((EditorUndoRedoManager *)pOVar12,(Object *)this,
                               (StringName *)&local_e8);
                    if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
                    this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
                    CowData<int>::resize<false>(this_01,0);
LAB_001080ba:
                    cVar7 = RefCounted::unreference();
                    if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_198), cVar7 != '\0')) {
                      (**(code **)(*(long *)local_198 + 0x140))(local_198);
                      Memory::free_static(local_198,false);
                    }
                    if (local_188 != (Object *)0x0) {
                      cVar7 = RefCounted::unreference();
                      goto joined_r0x001080e3;
                    }
                    goto LAB_00107e32;
                  }
                }
LAB_00109c77:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,2,lVar20,"p_index","size()","",
                           false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
            }
LAB_00107eb3:
            cVar7 = InputEvent::is_pressed();
            if (((cVar7 == '\0') && (this[0xb38] != (AnimationNodeBlendSpace2DEditor)0x0)) &&
               (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 1)) {
              if (this[0xb39] != (AnimationNodeBlendSpace2DEditor)0x0) {
                uVar27 = AnimationNodeBlendSpace2D::get_blend_point_position
                                   ((int)*(undefined8 *)(this + 0xa10));
                local_d8 = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(this + 0xb44) >> 0x20),
                                    (float)uVar27 + (float)*(undefined8 *)(this + 0xb44));
                cVar7 = BaseButton::is_pressed();
                if (cVar7 != '\0') {
                  local_a8 = AnimationNodeBlendSpace2D::get_snap();
                  local_d8 = Vector2::snapped((Vector2 *)&local_d8);
                }
                if (this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0) {
                  this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x1;
                  pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
                  local_f0 = (String *)0x0;
                  String::parse_latin1((String *)&local_f0,"");
                  local_f8 = 0;
                  String::parse_latin1((String *)&local_f8,"Move Node Point");
                  TTR((String *)&local_e8,(String *)&local_f8);
                  EditorUndoRedoManager::create_action(pOVar12,(String *)&local_e8,0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                  iVar8 = *(int *)(this + 0xad8);
                  StringName::StringName((StringName *)&local_e8,"set_blend_point_position",false);
                  pSVar17 = *(StringName **)(this + 0xa10);
                  local_d0 = local_d8;
                  Variant::Variant((Variant *)&local_a8,iVar8);
                  Variant::Variant((Variant *)&local_90,(Vector2 *)&local_d0);
                  local_70 = (undefined1  [16])0x0;
                  local_78 = 0;
                  local_c8 = (Variant *)&local_a8;
                  pVStack_c0 = (Variant *)&local_90;
                  EditorUndoRedoManager::add_do_methodp
                            (pOVar12,pSVar17,(Variant **)&local_e8,(int)&local_c8);
                  pVVar19 = (Variant *)&local_60;
                  pVVar18 = pVVar19;
                  do {
                    pVVar1 = pVVar18 + -0x18;
                    pVVar18 = pVVar18 + -0x18;
                    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                      Variant::_clear_internal();
                    }
                  } while (pVVar18 != (Variant *)&local_a8);
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  uVar27 = AnimationNodeBlendSpace2D::get_blend_point_position
                                     ((int)*(undefined8 *)(this + 0xa10));
                  iVar8 = *(int *)(this + 0xad8);
                  StringName::StringName((StringName *)&local_e8,"set_blend_point_position",false);
                  pSVar17 = *(StringName **)(this + 0xa10);
                  local_d0 = uVar27;
                  Variant::Variant((Variant *)&local_a8,iVar8);
                  Variant::Variant((Variant *)&local_90,(Vector2 *)&local_d0);
                  local_70 = (undefined1  [16])0x0;
                  local_78 = 0;
                  local_c8 = (Variant *)&local_a8;
                  pVStack_c0 = (Variant *)&local_90;
                  EditorUndoRedoManager::add_undo_methodp
                            (pOVar12,pSVar17,(Variant **)&local_e8,(int)&local_c8);
                  do {
                    pVVar18 = pVVar19 + -0x18;
                    pVVar19 = pVVar19 + -0x18;
                    if (Variant::needs_deinit[*(int *)pVVar18] != '\0') {
                      Variant::_clear_internal();
                    }
                  } while (pVVar19 != (Variant *)&local_a8);
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_e8,"_update_space",false);
                  EditorUndoRedoManager::add_do_method<>
                            ((EditorUndoRedoManager *)pOVar12,(Object *)this,(StringName *)&local_e8
                            );
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_e8,"_update_space",false);
                  EditorUndoRedoManager::add_undo_method<>
                            ((EditorUndoRedoManager *)pOVar12,(Object *)this,(StringName *)&local_e8
                            );
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_e8,"_update_edited_point_pos",false);
                  EditorUndoRedoManager::add_do_method<>
                            ((EditorUndoRedoManager *)pOVar12,(Object *)this,(StringName *)&local_e8
                            );
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_e8,"_update_edited_point_pos",false);
                  EditorUndoRedoManager::add_undo_method<>
                            ((EditorUndoRedoManager *)pOVar12,(Object *)this,(StringName *)&local_e8
                            );
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
                  this[0xaf8] = (AnimationNodeBlendSpace2DEditor)0x0;
                  _update_edited_point_pos(this);
                }
              }
              *(undefined2 *)(this + 0xb38) = 0;
              CanvasItem::queue_redraw();
            }
            cVar7 = InputEvent::is_pressed();
            if (((cVar7 != '\0') && (cVar7 = BaseButton::is_pressed(), cVar7 != '\0')) &&
               (iVar8 = InputEventMouseButton::get_button_index(), iVar8 == 1)) {
              uVar27 = Control::get_size();
              uVar28 = InputEventMouse::get_position();
              local_c8._0_4_ = (float)uVar28 / (float)uVar27;
              local_c8._4_4_ =
                   _LC159 - (float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar27 >> 0x20);
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              uVar28 = AnimationNodeBlendSpace2D::get_max_space();
              local_c8._0_4_ = (float)local_c8 * ((float)uVar28 - (float)uVar27);
              local_c8._4_4_ =
                   local_c8._4_4_ *
                   ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20));
              uVar27 = AnimationNodeBlendSpace2D::get_min_space();
              local_c8 = (Variant *)
                         CONCAT44((float)((ulong)uVar27 >> 0x20) + local_c8._4_4_,
                                  (float)uVar27 + (float)local_c8);
              Variant::Variant((Variant *)&local_a8,(Vector2 *)&local_c8);
              get_blend_position_path((AnimationNodeBlendSpace2DEditor *)&local_e8);
              Object::set((StringName *)pLVar2,(Variant *)&local_e8,(bool *)&local_a8);
              if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_a8] != '\0') {
                Variant::_clear_internal();
              }
              CanvasItem::queue_redraw();
            }
            lVar20 = *(long *)param_1;
            if (lVar20 != 0) goto LAB_00107d1f;
            goto LAB_00107e07;
          }
          lVar20 = *(long *)param_1;
          if (lVar20 != 0) {
            local_198 = (Object *)0x0;
            goto LAB_00107d1f;
          }
        }
        if (local_188 != (Object *)0x0) goto LAB_00107e20;
      }
    }
    else {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        BaseButton::is_pressed();
        goto LAB_00107cb8;
      }
      cVar7 = BaseButton::is_pressed();
      if ((((cVar7 != '\0') && (cVar7 = InputEvent::is_pressed(), cVar7 != '\0')) &&
          (iVar8 = InputEventKey::get_keycode(), iVar8 == 0x400008)) &&
         ((cVar7 = (**(code **)(*(long *)local_188 + 0x1c8))(), cVar7 == '\0' &&
          (*(long *)(this + 0xad8) != -1)))) {
        if (this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0) {
          _erase_selected(this);
        }
        Control::accept_event();
      }
      lVar20 = *(long *)param_1;
      if (lVar20 != 0) goto LAB_00107cd9;
LAB_00107e20:
      cVar7 = RefCounted::unreference();
joined_r0x001080e3:
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_188), cVar7 != '\0')) {
        (**(code **)(*(long *)local_188 + 0x140))(local_188);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_188,false);
          return;
        }
        goto LAB_00109c63;
      }
    }
  }
LAB_00107e32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109c63:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00108c07:
  lVar20 = *(long *)(this + 0xb30);
  lVar21 = lVar21 + 1;
  goto LAB_00108800;
}



/* AnimationNodeBlendSpace2DEditor::_tool_switch(int) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_tool_switch(AnimationNodeBlendSpace2DEditor *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50;
  Delaunay2D local_48 [8];
  int *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<int>::resize<false>((CowData<int> *)(this + 0xb58),0);
  if (param_1 == 2) {
    local_50 = 0;
    for (iVar6 = 0; iVar5 = AnimationNodeBlendSpace2D::get_blend_point_count(), iVar6 < iVar5;
        iVar6 = iVar6 + 1) {
      AnimationNodeBlendSpace2D::get_blend_point_position((int)*(undefined8 *)(this + 0xa10));
      Vector<Vector2>::push_back((Vector<Vector2> *)aVStack_58);
    }
    Delaunay2D::triangulate(local_48,aVStack_58);
    piVar4 = local_40;
    if (local_40 != (int *)0x0) {
      lVar8 = 0;
      piVar7 = local_40;
      if (0 < *(long *)(local_40 + -2)) {
        do {
          piVar1 = piVar7 + 2;
          piVar2 = piVar7 + 1;
          lVar8 = lVar8 + 1;
          iVar6 = *piVar7;
          piVar7 = piVar7 + 6;
          AnimationNodeBlendSpace2D::add_triangle
                    ((int)*(undefined8 *)(this + 0xa10),iVar6,*piVar2,*piVar1);
        } while (lVar8 < *(long *)(piVar4 + -2));
      }
      LOCK();
      plVar3 = (long *)(piVar4 + -4);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        Memory::free_static(local_40 + -4,false);
      }
    }
    if (local_50 != 0) {
      LOCK();
      plVar3 = (long *)(local_50 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
    }
  }
  else if (param_1 == 0) {
    CanvasItem::show();
    CanvasItem::show();
    goto LAB_00109ee6;
  }
  CanvasItem::hide();
  CanvasItem::hide();
LAB_00109ee6:
  _update_tool_erase(this);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendSpace2DEditor::_blend_space_draw() */

void __thiscall
AnimationNodeBlendSpace2DEditor::_blend_space_draw(AnimationNodeBlendSpace2DEditor *this)

{
  long *plVar1;
  undefined8 *__dest;
  bool *pbVar2;
  Vector2 *pVVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  Color *pCVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  size_t __n;
  Color *pCVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined8 uVar27;
  float fVar30;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar28;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float extraout_XMM0_Db_07;
  float extraout_XMM0_Db_08;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  Color *local_160;
  Object *local_118;
  long *local_110;
  StringName local_108 [8];
  undefined8 local_100;
  undefined1 local_f8 [8];
  long local_f0;
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  long local_d8;
  Color *local_d0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar2 = *(bool **)(AnimationTreeEditor::singleton + 0xa20);
  if (pbVar2 != (bool *)0x0) {
    if ((_blend_space_draw()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#1}::operator()()::sname),
       iVar17 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#1}::operator()()::sname);
    }
    auVar33 = Control::get_theme_color
                        ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
    local_a8 = auVar33._0_4_;
    uStack_a4 = auVar33._4_4_;
    uStack_a0 = auVar33._8_4_;
    fStack_9c = auVar33._12_4_;
    local_98._12_4_ = _LC170 * fStack_9c;
    local_98._0_12_ = auVar33._0_12_;
    if ((_blend_space_draw()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#2}::operator()()::sname),
       iVar17 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#2}::operator()()::sname);
    }
    Control::get_theme_font((StringName *)&local_118,(StringName *)this);
    if ((_blend_space_draw()::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#3}::operator()()::sname),
       iVar17 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#3}::operator()()::sname);
    }
    uVar8 = Control::get_theme_font_size
                      ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
    if ((_blend_space_draw()::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#4}::operator()()::sname),
       iVar17 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_110);
    if ((_blend_space_draw()::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#5}::operator()()::sname),
       iVar17 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_108);
    uVar27 = Control::get_size();
    fVar24 = (float)uVar27;
    fVar25 = (float)((ulong)uVar27 >> 0x20);
    cVar7 = Control::has_focus();
    if (cVar7 != '\0') {
      if ((_blend_space_draw()::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#6}::operator()()::sname),
         iVar17 != 0)) {
        _scs_create((char *)&_blend_space_draw()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#6}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_blend_space_draw()::{lambda()#6}::operator()()::sname);
      }
      _local_88 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_blend_space_draw()::{lambda()#6}::operator()()::sname);
      local_78 = 0;
      uStack_70 = uVar27;
      CanvasItem::draw_rect
                (*(Rect2 **)(this + 0xae0),(Color *)&local_78,SUB81(local_88,0),(float)_LC179,false)
      ;
    }
    local_160 = (Color *)local_88;
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar21 = (float)_LC179 + fVar24;
    fVar30 = _LC179._4_4_ + fVar25;
    fVar22 = (float)EditorScale::get_scale();
    fVar22 = roundf(fVar22);
    fVar31 = fVar25 - _LC159;
    local_78 = CONCAT44(fVar31,0x3f800000);
    local_88 = (undefined1  [8])0x3f800000;
    bVar13 = SUB81(&local_a8,0);
    CanvasItem::draw_line(pVVar3,local_160,(Color *)&local_78,fVar22,bVar13);
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar22 = (float)EditorScale::get_scale();
    fVar22 = roundf(fVar22);
    local_78 = CONCAT44(fVar31,0x3f800000);
    local_88 = (undefined1  [8])CONCAT44(fVar30,fVar21);
    CanvasItem::draw_line(pVVar3,(Color *)&local_78,local_160,fVar22,bVar13);
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21);
    fVar22 = (float)EditorScale::get_scale();
    local_88 = (undefined1  [8])0x0;
    local_78 = (ulong)(uint)(fVar22 * __LC182);
    CanvasItem::draw_line(pVVar3,local_160,(Color *)&local_78,fVar21,bVar13);
    AnimationNodeBlendSpace2D::get_min_space();
    if (extraout_XMM0_Db < 0.0) {
      AnimationNodeBlendSpace2D::get_max_space();
      AnimationNodeBlendSpace2D::get_max_space();
      AnimationNodeBlendSpace2D::get_min_space();
      pVVar3 = *(Vector2 **)(this + 0xae0);
      fVar21 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar21);
      fVar23 = (float)(int)((extraout_XMM0_Db_06 / (extraout_XMM0_Db_07 - extraout_XMM0_Db_08)) *
                           fVar25);
      fVar22 = (float)EditorScale::get_scale();
      local_78 = (ulong)(uint)fVar23 << 0x20;
      local_88 = (undefined1  [8])CONCAT44(fVar23,fVar22 * __LC182);
      CanvasItem::draw_line(pVVar3,(Color *)&local_78,local_160,fVar21,bVar13);
      uVar27 = *(undefined8 *)(this + 0xae0);
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"0");
      fVar21 = (float)(**(code **)(*(long *)local_118 + 0x218))(local_118,uVar8);
      fVar22 = (float)(**(code **)(*(long *)local_118 + 0x220))(local_118,uVar8);
      fVar30 = (float)EditorScale::get_scale();
      local_78 = CONCAT44((fVar23 - fVar21) + fVar22,fVar30 + fVar30);
      CanvasItem::draw_string
                (uVar27,(StringName *)&local_118,(Color *)&local_78,(String *)&local_d8,0,uVar8,
                 &local_a8,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      pVVar3 = *(Vector2 **)(this + 0xae0);
      fVar21 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar21);
      local_78 = CONCAT44(fVar23,fVar24);
      fVar22 = (float)EditorScale::get_scale();
      local_88 = (undefined1  [8])CONCAT44(fVar23,fVar22 * __LC182);
      CanvasItem::draw_line(pVVar3,local_160,(Color *)&local_78,fVar21,SUB81(local_98,0));
    }
    fVar21 = (float)AnimationNodeBlendSpace2D::get_min_space();
    if (fVar21 < 0.0) {
      uVar26 = AnimationNodeBlendSpace2D::get_min_space();
      fVar32 = (float)(uVar26 ^ __LC16);
      fVar21 = (float)AnimationNodeBlendSpace2D::get_max_space();
      fVar22 = (float)AnimationNodeBlendSpace2D::get_min_space();
      pVVar3 = *(Vector2 **)(this + 0xae0);
      fVar30 = (float)EditorScale::get_scale();
      fVar30 = roundf(fVar30);
      fVar23 = (float)EditorScale::get_scale();
      fVar32 = (float)(int)((fVar32 / (fVar21 - fVar22)) * fVar24);
      local_78 = CONCAT44(fVar25 - fVar23 * __LC182,fVar32);
      local_88 = (undefined1  [8])CONCAT44(fVar31,fVar32);
      CanvasItem::draw_line(pVVar3,local_160,(Color *)&local_78,fVar30,bVar13);
      uVar27 = *(undefined8 *)(this + 0xae0);
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"0");
      fVar21 = (float)EditorScale::get_scale();
      fVar22 = (float)(**(code **)(*(long *)local_118 + 0x218))(local_118,uVar8);
      fVar30 = (float)(**(code **)(*(long *)local_118 + 0x220))(local_118,uVar8);
      fVar31 = (float)EditorScale::get_scale();
      local_78 = CONCAT44(((fVar25 - (fVar21 + fVar21)) - fVar22) + fVar30,fVar31 + fVar31 + fVar32)
      ;
      CanvasItem::draw_string
                (uVar27,(StringName *)&local_118,(Color *)&local_78,(String *)&local_d8,0,uVar8,
                 &local_a8,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      pVVar3 = *(Vector2 **)(this + 0xae0);
      fVar21 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar21);
      local_78 = (ulong)(uint)fVar32;
      fVar22 = (float)EditorScale::get_scale();
      local_88 = (undefined1  [8])CONCAT44(fVar25 - fVar22 * __LC182,fVar32);
      CanvasItem::draw_line(pVVar3,local_160,(Color *)&local_78,fVar21,SUB81(local_98,0));
    }
    cVar7 = BaseButton::is_pressed();
    if (cVar7 != '\0') {
      local_98._12_4_ = (float)((double)fStack_9c * __LC184);
      fVar21 = (float)AnimationNodeBlendSpace2D::get_snap();
      if (0.0 < fVar21) {
        iVar17 = 0;
        if (0.0 < fVar24) {
          fVar21 = 0.0;
          iVar9 = 0;
          do {
            fVar22 = (float)AnimationNodeBlendSpace2D::get_min_space();
            fVar30 = (float)AnimationNodeBlendSpace2D::get_max_space();
            fVar31 = (float)AnimationNodeBlendSpace2D::get_min_space();
            fVar23 = (float)AnimationNodeBlendSpace2D::get_snap();
            iVar20 = (int)((((fVar30 - fVar31) * fVar21) / fVar24 + fVar22) / fVar23);
            if ((0 < iVar17) && (iVar20 != iVar9)) {
              pVVar3 = *(Vector2 **)(this + 0xae0);
              fVar22 = (float)EditorScale::get_scale();
              fVar22 = roundf(fVar22);
              local_78 = (ulong)(uint)fVar21;
              local_88 = (undefined1  [8])CONCAT44(fVar25,fVar21);
              CanvasItem::draw_line(pVVar3,(Color *)&local_78,local_160,fVar22,SUB81(local_98,0));
            }
            iVar17 = iVar17 + 1;
            fVar21 = (float)iVar17;
            iVar9 = iVar20;
          } while (fVar21 < fVar24);
        }
      }
      AnimationNodeBlendSpace2D::get_snap();
      if (0.0 < extraout_XMM0_Db_01) {
        iVar17 = 0;
        if (0.0 < fVar25) {
          fVar21 = 0.0;
          iVar9 = 0;
          do {
            AnimationNodeBlendSpace2D::get_max_space();
            AnimationNodeBlendSpace2D::get_max_space();
            AnimationNodeBlendSpace2D::get_min_space();
            AnimationNodeBlendSpace2D::get_snap();
            iVar20 = (int)((extraout_XMM0_Db_02 -
                           ((extraout_XMM0_Db_03 - extraout_XMM0_Db_04) * fVar21) / fVar25) /
                          extraout_XMM0_Db_05);
            if ((0 < iVar17) && (iVar20 != iVar9)) {
              pVVar3 = *(Vector2 **)(this + 0xae0);
              fVar22 = (float)EditorScale::get_scale();
              fVar22 = roundf(fVar22);
              local_78 = (ulong)(uint)fVar21 << 0x20;
              local_88 = (undefined1  [8])CONCAT44(fVar21,fVar24);
              CanvasItem::draw_line(pVVar3,(Color *)&local_78,local_160,fVar22,SUB81(local_98,0));
            }
            iVar17 = iVar17 + 1;
            fVar21 = (float)iVar17;
            iVar9 = iVar20;
          } while (fVar21 < fVar25);
        }
      }
    }
    for (iVar17 = 0; iVar9 = AnimationNodeBlendSpace2D::get_triangle_count(), iVar17 < iVar9;
        iVar17 = iVar17 + 1) {
      lVar19 = 0;
      local_f0 = 0;
      CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_f0,3);
      do {
        iVar9 = AnimationNodeBlendSpace2D::get_triangle_point
                          ((int)*(undefined8 *)(this + 0xa10),iVar17);
        local_88 = (undefined1  [8])
                   AnimationNodeBlendSpace2D::get_blend_point_position
                             ((int)*(undefined8 *)(this + 0xa10));
        if ((this[0xb39] != (AnimationNodeBlendSpace2DEditor)0x0) &&
           (*(int *)(this + 0xad8) == iVar9)) {
          local_88 = (undefined1  [8])
                     CONCAT44((float)((ulong)local_88 >> 0x20) +
                              (float)((ulong)*(undefined8 *)(this + 0xb44) >> 0x20),
                              SUB84(local_88,0) + (float)*(undefined8 *)(this + 0xb44));
          cVar7 = BaseButton::is_pressed();
          if (cVar7 != '\0') {
            local_78 = AnimationNodeBlendSpace2D::get_snap();
            local_88 = (undefined1  [8])Vector2::snapped(local_160);
          }
        }
        uVar27 = AnimationNodeBlendSpace2D::get_min_space();
        AnimationNodeBlendSpace2D::get_max_space();
        uVar28 = AnimationNodeBlendSpace2D::get_min_space();
        local_88 = (undefined1  [8])
                   CONCAT44(fVar25 - (((float)local_88._4_4_ - (float)((ulong)uVar28 >> 0x20)) /
                                     (extraout_XMM0_Db_00 - (float)((ulong)uVar27 >> 0x20))) *
                                     fVar25,
                            (((float)local_88._0_4_ - (float)uVar28) /
                            (extraout_XMM0_Da - (float)uVar27)) * fVar24);
        if (local_f0 == 0) {
          lVar18 = 0;
LAB_0010b183:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar19,lVar18,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar18 = *(long *)(local_f0 + -8);
        if (lVar18 <= lVar19) goto LAB_0010b183;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_f0);
        *(undefined1 (*) [8])(local_f0 + lVar19 * 8) = local_88;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      lVar19 = 0;
      do {
        pVVar3 = *(Vector2 **)(this + 0xae0);
        fVar21 = (float)EditorScale::get_scale();
        fVar21 = roundf(fVar21);
        lVar10 = (long)(int)(((int)lVar19 + 1U) % 3);
        lVar18 = lVar10;
        if (local_f0 == 0) {
          lVar16 = 0;
          goto LAB_0010b77e;
        }
        lVar16 = *(long *)(local_f0 + -8);
        if ((lVar16 <= lVar10) || (lVar18 = lVar19, lVar16 <= lVar19)) goto LAB_0010b77e;
        lVar18 = lVar19 * 8;
        lVar19 = lVar19 + 1;
        CanvasItem::draw_line
                  (pVVar3,(Vector2 *)(local_f0 + lVar18),(Color *)(local_f0 + lVar10 * 8),fVar21,
                   bVar13);
      } while (lVar19 != 3);
      if (*(int *)(this + 0xadc) == iVar17) {
        if ((_blend_space_draw()::{lambda()#7}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#7}::operator()()::sname),
           iVar9 != 0)) {
          _scs_create((char *)&_blend_space_draw()::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_blend_space_draw()::{lambda()#7}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_blend_space_draw()::{lambda()#7}::operator()()::sname);
        }
        auVar33 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_blend_space_draw()::{lambda()#7}::operator()()::sname);
        auVar5 = auVar33._0_12_;
        uVar8 = auVar33._4_4_;
        fVar21 = auVar33._12_4_ * _LC170;
      }
      else {
        auVar5._4_4_ = 0;
        auVar5._0_4_ = local_a8;
        auVar5._8_4_ = uStack_a0;
        fVar21 = (float)((double)fStack_9c * __LC185);
        uVar8 = uStack_a4;
      }
      uStack_70 = CONCAT44(fVar21,auVar5._8_4_);
      local_78 = CONCAT44(uVar8,auVar5._0_4_);
      local_e0 = (undefined8 *)0x0;
      local_68 = local_78;
      uStack_60 = uStack_70;
      local_58 = local_78;
      uStack_50 = uStack_70;
      puVar11 = (undefined8 *)Memory::alloc_static(0x50,false);
      if (puVar11 != (undefined8 *)0x0) {
        local_e0 = puVar11 + 2;
        lVar19 = 0;
        *puVar11 = 1;
        puVar11[1] = 3;
        uVar28 = __LC186;
        uVar27 = CONCAT44(_LC159,_UNK_00118d18);
        puVar11[2] = __LC186;
        puVar11[3] = uVar27;
        puVar11[4] = uVar28;
        puVar11[5] = uVar27;
        puVar11[6] = uVar28;
        puVar11[7] = uVar27;
        if (local_e0 != (undefined8 *)0x0) goto LAB_0010a68d;
LAB_0010a630:
        lVar18 = 0;
        do {
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar18,"p_index","size()","",
                     false,false);
          while( true ) {
            lVar19 = lVar19 + 1;
            if (lVar19 == 3) goto LAB_0010a6c8;
            if (local_e0 == (undefined8 *)0x0) goto LAB_0010a630;
LAB_0010a68d:
            lVar18 = local_e0[-1];
            if (lVar18 <= lVar19) break;
            if (1 < (ulong)local_e0[-2]) {
              if (local_e0 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              lVar18 = local_e0[-1];
              uVar15 = 0x10;
              __n = lVar18 * 0x10;
              if (__n != 0) {
                uVar15 = __n - 1 | __n - 1 >> 1;
                uVar15 = uVar15 | uVar15 >> 2;
                uVar15 = uVar15 | uVar15 >> 4;
                uVar15 = uVar15 | uVar15 >> 8;
                uVar15 = uVar15 | uVar15 >> 0x10;
                uVar15 = (uVar15 | uVar15 >> 0x20) + 0x11;
              }
              puVar12 = (undefined8 *)Memory::alloc_static(uVar15,false);
              puVar11 = local_e0;
              if (puVar12 == (undefined8 *)0x0) {
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                __dest = puVar12 + 2;
                *puVar12 = 1;
                puVar12[1] = lVar18;
                memcpy(__dest,local_e0,__n);
                puVar12 = local_e0;
                LOCK();
                plVar1 = puVar11 + -2;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                local_e0 = __dest;
                if (*plVar1 == 0) {
                  local_e0 = (undefined8 *)0x0;
                  Memory::free_static(puVar12 + -2,false);
                  local_e0 = __dest;
                }
              }
            }
            uVar27 = (&uStack_70)[lVar19 * 2];
            local_e0[lVar19 * 2] = *(undefined8 *)((Color *)&local_78 + lVar19 * 0x10);
            (local_e0 + lVar19 * 2)[1] = uVar27;
          }
        } while( true );
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
LAB_0010a6c8:
      local_100 = 0;
      local_d0[0] = (Color *)0x0;
      CanvasItem::draw_primitive(*(undefined8 *)(this + 0xae0),local_f8,local_e8,&local_d8);
      CowData<Vector2>::_unref((CowData<Vector2> *)local_d0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_100);
      puVar11 = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_e0 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = (undefined8 *)0x0;
          Memory::free_static(puVar11 + -2,false);
        }
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_f0);
    }
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 0xb30),0);
    fVar22 = _UNK_00118d8c;
    fVar21 = _LC170;
    for (iVar17 = 0; iVar9 = AnimationNodeBlendSpace2D::get_blend_point_count(), iVar17 < iVar9;
        iVar17 = iVar17 + 1) {
      local_88 = (undefined1  [8])
                 AnimationNodeBlendSpace2D::get_blend_point_position
                           ((int)*(undefined8 *)(this + 0xa10));
      if (((this[0xa18] == (AnimationNodeBlendSpace2DEditor)0x0) &&
          (this[0xb39] != (AnimationNodeBlendSpace2DEditor)0x0)) &&
         (*(int *)(this + 0xad8) == iVar17)) {
        local_88 = (undefined1  [8])
                   CONCAT44((float)((ulong)local_88 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0xb44) >> 0x20),
                            SUB84(local_88,0) + (float)*(undefined8 *)(this + 0xb44));
        cVar7 = BaseButton::is_pressed();
        if (cVar7 != '\0') {
          local_78 = AnimationNodeBlendSpace2D::get_snap();
          local_88 = (undefined1  [8])Vector2::snapped(local_160);
        }
      }
      uVar27 = AnimationNodeBlendSpace2D::get_min_space();
      uVar28 = AnimationNodeBlendSpace2D::get_max_space();
      uVar29 = AnimationNodeBlendSpace2D::get_min_space();
      local_88._0_4_ =
           (((float)local_88._0_4_ - (float)uVar29) / ((float)uVar28 - (float)uVar27)) * fVar24;
      local_88._4_4_ =
           fVar25 - (((float)local_88._4_4_ - (float)((ulong)uVar29 >> 0x20)) /
                    ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20))) * fVar25;
      Vector<Vector2>::push_back((Vector<Vector2> *)(this + 0xb28));
      uVar27 = (**(code **)(*local_110 + 0x1d8))();
      local_88 = (undefined1  [8])
                 CONCAT44((float)local_88._4_4_ - fVar22 * (float)((ulong)uVar27 >> 0x20),
                          (float)local_88._0_4_ - fVar21 * (float)uVar27);
      local_88 = (undefined1  [8])Vector2::floor();
      local_78 = CONCAT44(_LC159,_LC159);
      uStack_70 = CONCAT44(_LC159,_LC159);
      if (*(int *)(this + 0xad8) == iVar17) {
        CanvasItem::draw_texture(*(Ref **)(this + 0xae0),local_108,local_160);
      }
      else {
        CanvasItem::draw_texture(*(Ref **)(this + 0xae0),(StringName *)&local_110,local_160);
      }
    }
    if ((*(long *)(this + 0xb58) != 0) &&
       (lVar19 = *(long *)(*(long *)(this + 0xb58) + -8), lVar19 != 0)) {
      local_d0[0] = (Color *)0x0;
      lVar18 = 0;
      while (lVar18 < lVar19) {
        lVar18 = lVar18 + 1;
        AnimationNodeBlendSpace2D::get_blend_point_position((int)*(undefined8 *)(this + 0xa10));
        AnimationNodeBlendSpace2D::get_min_space();
        AnimationNodeBlendSpace2D::get_max_space();
        AnimationNodeBlendSpace2D::get_min_space();
        Vector<Vector2>::push_back((Vector<Vector2> *)&local_d8);
        if (*(long *)(this + 0xb58) == 0) break;
        lVar19 = *(long *)(*(long *)(this + 0xb58) + -8);
      }
      pCVar6 = local_d0[0];
      if (local_d0[0] == (Color *)0x0) {
        EditorScale::get_scale();
        local_78 = CanvasItem::get_local_mouse_position();
        lVar16 = 0;
        lVar18 = -1;
LAB_0010b77e:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar18,lVar16,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pCVar14 = local_d0[0];
      lVar19 = 0;
      while (pVVar3 = *(Vector2 **)(this + 0xae0), lVar19 < *(long *)(pCVar6 + -8) + -1) {
        fVar21 = (float)EditorScale::get_scale();
        lVar10 = lVar19 + 1;
        fVar21 = roundf(fVar21 + fVar21);
        lVar16 = *(long *)(pCVar6 + -8);
        lVar18 = lVar10;
        if ((lVar16 <= lVar10) || (lVar18 = lVar19, lVar16 <= lVar19)) goto LAB_0010b77e;
        CanvasItem::draw_line(pVVar3,pCVar14,pCVar14 + 8,fVar21,bVar13);
        pCVar14 = pCVar14 + 8;
        lVar19 = lVar10;
      }
      fVar21 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar21 + fVar21);
      local_78 = CanvasItem::get_local_mouse_position();
      lVar16 = *(long *)(pCVar6 + -8);
      lVar18 = lVar16 + -1;
      if (lVar18 < 0) goto LAB_0010b77e;
      CanvasItem::draw_line(pVVar3,pCVar6 + lVar18 * 8,(Color *)&local_78,fVar21,bVar13);
      CowData<Vector2>::_unref((CowData<Vector2> *)local_d0);
    }
    uStack_80 = CONCAT44(_LC159,_UNK_00118d18);
    local_88 = (undefined1  [8])__LC186;
    cVar7 = BaseButton::is_pressed();
    if (cVar7 == '\0') {
      local_88._4_4_ = uStack_a4;
      local_88._0_4_ = local_a8;
      uStack_80 = CONCAT44(_LC170 * fStack_9c,uStack_a0);
    }
    else {
      if ((_blend_space_draw()::{lambda()#8}::operator()()::sname == '\0') &&
         (iVar17 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#8}::operator()()::sname),
         iVar17 != 0)) {
        _scs_create((char *)&_blend_space_draw()::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#8}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_blend_space_draw()::{lambda()#8}::operator()()::sname);
      }
      _local_88 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_blend_space_draw()::{lambda()#8}::operator()()::sname);
    }
    get_blend_position_path((AnimationNodeBlendSpace2DEditor *)&local_d8);
    Object::get((StringName *)&local_78,pbVar2);
    local_b0 = Variant::operator_cast_to_Vector2((Variant *)&local_78);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
    local_c0 = local_b0;
    uVar27 = AnimationNodeBlendSpace2D::get_min_space();
    uVar28 = AnimationNodeBlendSpace2D::get_max_space();
    uVar29 = AnimationNodeBlendSpace2D::get_min_space();
    local_c0 = CONCAT44(fVar25 - ((local_c0._4_4_ - (float)((ulong)uVar29 >> 0x20)) /
                                 ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20)))
                                 * fVar25,
                        (((float)local_c0 - (float)uVar29) / ((float)uVar28 - (float)uVar27)) *
                        fVar24);
    iVar17 = AnimationNodeBlendSpace2D::get_triangle_count();
    if (iVar17 != 0) {
      local_b8 = AnimationNodeBlendSpace2D::get_closest_point(*(Vector2 **)(this + 0xa10));
      uVar27 = AnimationNodeBlendSpace2D::get_min_space();
      uVar28 = AnimationNodeBlendSpace2D::get_max_space();
      uVar29 = AnimationNodeBlendSpace2D::get_min_space();
      pVVar3 = *(Vector2 **)(this + 0xae0);
      local_78 = (ulong)local_88;
      uStack_70._4_4_ = SUB164(_local_88,0xc);
      uStack_70 = CONCAT44((float)((double)uStack_70._4_4_ * __LC189),SUB164(_local_88,8));
      local_b8 = CONCAT44(fVar25 - ((local_b8._4_4_ - (float)((ulong)uVar29 >> 0x20)) /
                                   ((float)((ulong)uVar28 >> 0x20) - (float)((ulong)uVar27 >> 0x20))
                                   ) * fVar25,
                          fVar24 * (((float)local_b8 - (float)uVar29) /
                                   ((float)uVar28 - (float)uVar27)));
      fVar24 = (float)EditorScale::get_scale();
      fVar24 = roundf(fVar24 + fVar24);
      CanvasItem::draw_line
                (pVVar3,(Vector2 *)&local_c0,(Color *)&local_b8,fVar24,SUB81((Color *)&local_78,0));
    }
    fVar24 = (float)EditorScale::get_scale();
    fVar24 = fVar24 * __LC182;
    fVar25 = (float)EditorScale::get_scale();
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar25 = _LC190 * fVar25;
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    local_78 = CONCAT44(local_c0._4_4_ + 0.0,fVar25 + (float)local_c0);
    local_b8 = CONCAT44(local_c0._4_4_ + 0.0,(float)local_c0 + fVar24);
    bVar13 = SUB81(local_160,0);
    CanvasItem::draw_line(pVVar3,(Color *)&local_b8,(Color *)&local_78,fVar21,bVar13);
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    fVar22 = (float)((ulong)local_c0 >> 0x20);
    local_78 = CONCAT44(fVar22 + 0.0,(float)local_c0 - fVar25);
    local_b8 = CONCAT44(fVar22 + 0.0,(float)local_c0 - fVar24);
    CanvasItem::draw_line(pVVar3,(Color *)&local_b8,(Color *)&local_78,fVar21,bVar13);
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    local_78 = CONCAT44(fVar25 + local_c0._4_4_,(float)local_c0 + 0.0);
    local_b8 = CONCAT44(local_c0._4_4_ + fVar24,(float)local_c0 + 0.0);
    CanvasItem::draw_line(pVVar3,(Color *)&local_b8,(Color *)&local_78,fVar21,bVar13);
    pVVar3 = *(Vector2 **)(this + 0xae0);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    fVar22 = (float)((ulong)local_c0 >> 0x20);
    local_78 = CONCAT44(fVar22 - fVar25,(float)local_c0 + 0.0);
    local_b8 = CONCAT44(fVar22 - fVar24,(float)local_c0 + 0.0);
    CanvasItem::draw_line(pVVar3,(Color *)&local_b8,(Color *)&local_78,fVar21,bVar13);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_108);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_110);
    if (local_118 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_118);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)local_118 + 0x140))(local_118);
          Memory::free_static(local_118,false);
        }
      }
    }
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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this)

{
  return;
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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118988;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118988;
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



/* AnimationNodeBlendSpace2DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AnimationNodeBlendSpace2DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeBlendSpace2DEditor::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeBlendSpace2DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<Delaunay2D::Triangle>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Delaunay2D::Triangle>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Delaunay2D::Edge>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Delaunay2D::Edge>::_copy_on_write(void)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationNodeBlendSpace2DEditor::_blend_space_draw() [clone .cold] */

void AnimationNodeBlendSpace2DEditor::_blend_space_draw(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this)

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
      goto LAB_0010cacd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cacd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cacd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this)

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
      goto LAB_0010cbcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cbcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cbcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this)

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
      goto LAB_0010cccd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cccd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cccd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this)

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
      goto LAB_0010cdcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cdcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cdcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this)

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
      goto LAB_0010cecd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cecd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cecd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
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
      goto LAB_0010cfcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010cfcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010cfcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AnimationNodeBlendSpace2DEditor::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeBlendSpace2DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeBlendSpace2DEditor::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeBlendSpace2DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d398) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d408) */
/* AnimationNodeBlendSpace2DEditor::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendSpace2DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010d478) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x118b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x118b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AnimationNodeBlendSpace2DEditor::is_class_ptr(void*) const */

uint AnimationNodeBlendSpace2DEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x118b,in_RSI == &AnimationTreeNodeEditorPlugin::get_class_ptr_static()::
                                           ptr) |
          (uint)CONCAT71(0x118b,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x118b,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118c,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118c,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
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
      if (StringName::configured == '\0') goto LAB_0010d660;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d660:
  Control::~Control((Control *)this);
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
      if (StringName::configured == '\0') goto LAB_0010d6c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d6c0:
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
      if (StringName::configured == '\0') goto LAB_0010d720;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d720:
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
      if (StringName::configured == '\0') goto LAB_0010d790;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d790:
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
LAB_0010d863:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d863;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010d8ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010d8ce:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationNodeBlendSpace2DEditor::_get_class_namev() const */

undefined8 * AnimationNodeBlendSpace2DEditor::_get_class_namev(void)

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
LAB_0010d963:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d963;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationNodeBlendSpace2DEditor");
      goto LAB_0010d9ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeBlendSpace2DEditor"
            );
LAB_0010d9ce:
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
LAB_0010da53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010da53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010dabe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010dabe:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* AnimationNodeBlendSpace2DEditor::get_class() const */

void AnimationNodeBlendSpace2DEditor::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x0010dee0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d028 == Container::_notification) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Delaunay2D::create_triangle(Vector<Vector2> const&, int, int, int) */

Delaunay2D * __thiscall
Delaunay2D::create_triangle(Delaunay2D *this,Vector *param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined1 auVar12 [16];
  
  lVar6 = (long)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)this = param_2;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = 0;
  *(int *)(this + 4) = param_3;
  *(int *)(this + 8) = param_4;
  lVar5 = lVar6;
  if (lVar6 < 0) {
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      goto LAB_0010e13b;
    }
  }
  else if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + -8);
    if (lVar7 <= lVar6) goto LAB_0010e13b;
    lVar5 = (long)param_3;
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 8);
    if ((lVar7 <= lVar5) || (lVar5 < 0)) goto LAB_0010e13b;
    uVar10 = *(undefined8 *)(lVar3 + lVar5 * 8);
    uVar2 = *puVar1;
    lVar5 = (long)param_4;
    local_48 = CONCAT44((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                        (float)uVar10 - (float)uVar2);
    if ((lVar5 < 0) || (lVar7 <= lVar5)) goto LAB_0010e13b;
    uVar10 = *puVar1;
    uVar2 = *(undefined8 *)(lVar3 + lVar5 * 8);
    local_40 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                        (float)uVar2 - (float)uVar10);
    fVar8 = (float)Vector2::cross((Vector2 *)&local_48);
    auVar13._0_4_ = fVar8 + fVar8;
    auVar13._4_4_ = auVar13._0_4_;
    fVar8 = (float)Vector2::length_squared();
    fVar14 = local_48._4_4_ * fVar8;
    fVar8 = fVar8 * (float)local_48;
    uVar10 = Vector2::length_squared();
    auVar11._0_4_ = local_40._4_4_ * (float)uVar10 - fVar14;
    auVar12._4_8_ = 0;
    auVar12._0_4_ = auVar11._0_4_;
    auVar12._12_4_ = (uint)((ulong)uVar10 >> 0x20) ^ _UNK_00118d04;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = (uint)((float)uVar10 * (float)local_40 - fVar8) ^ __LC16;
    auVar13._8_8_ = _LC17;
    auVar13 = divps(auVar11,auVar13);
    local_38 = auVar13._0_8_;
    uVar9 = Vector2::length_squared();
    lVar3 = *(long *)(param_1 + 8);
    *(undefined4 *)(this + 0x14) = uVar9;
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = lVar6;
      if (lVar6 < lVar7) {
        uVar10 = *(undefined8 *)(lVar3 + lVar6 * 8);
        *(ulong *)(this + 0xc) =
             CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)local_38 >> 0x20),
                      (float)uVar10 + (float)local_38);
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return this;
      }
      goto LAB_0010e13b;
    }
  }
  lVar7 = 0;
  lVar5 = lVar6;
LAB_0010e13b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* Callable
   create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>(AnimationNodeBlendSpace2DEditor*,
   char const*, void (AnimationNodeBlendSpace2DEditor::*)()) */

AnimationNodeBlendSpace2DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor>
          (AnimationNodeBlendSpace2DEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00118628;
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



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_undo_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<AnimationNode>::unref() */

void __thiscall Ref<AnimationNode>::unref(Ref<AnimationNode> *this)

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



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,
   int>(AnimationNodeBlendSpace2DEditor*, char const*, void
   (AnimationNodeBlendSpace2DEditor::*)(int)) */

AnimationNodeBlendSpace2DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,int>
          (AnimationNodeBlendSpace2DEditor *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_001186b8;
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



/* Callable Callable::bind<int>(int) const */

Variant ** Callable::bind<int>(int param_1)

{
  char cVar1;
  int in_EDX;
  int in_ESI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_EDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT44(in_register_0000003c,param_1),in_ESI);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Variant **)CONCAT44(in_register_0000003c,param_1);
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,
   double>(AnimationNodeBlendSpace2DEditor*, char const*, void
   (AnimationNodeBlendSpace2DEditor::*)(double)) */

AnimationNodeBlendSpace2DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,double>
          (AnimationNodeBlendSpace2DEditor *param_1,char *param_2,_func_void_double *param_3)

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
  *(undefined ***)this = &PTR_hash_00118748;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_double **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,
   String>(AnimationNodeBlendSpace2DEditor*, char const*, void
   (AnimationNodeBlendSpace2DEditor::*)(String)) */

AnimationNodeBlendSpace2DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace2DEditor,String>
          (AnimationNodeBlendSpace2DEditor *param_1,char *param_2,_func_void_String *param_3)

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
  *(undefined ***)this = &PTR_hash_00118868;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String **)(this + 0x20) = param_3 + 1;
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



/* WARNING: Removing unreachable block (ram,0x0010ea58) */
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
        if (pvVar5 == (void *)0x0) goto LAB_0010f304;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010f304:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010f63f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f63f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f701;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f63f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f701:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010f7de;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010f7de;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC111;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010f8ad:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010f8ad;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010f7de;
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
  local_48 = (Object *)0x10f44f;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010f7de:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, double>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010fc46;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010fc46;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar4 = _LC112;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0010fd08;
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
LAB_0010fc46:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fd08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fec8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010fec8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC113;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fe77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010ff8a;
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
LAB_0010fec8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ff8a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC114;
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
        goto LAB_0011005e;
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
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011005e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC114;
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
        goto LAB_001102ce;
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
  _err_print_error(&_LC110,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001102ce:
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
            if (lVar3 == 0) goto LAB_001104ff;
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
LAB_001104ff:
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
    if (cVar6 != '\0') goto LAB_001105b3;
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
      if (cVar6 != '\0') goto LAB_001105b3;
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
        if (cVar6 != '\0') goto LAB_001105b3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==((String *)param_1,"Object");
        return uVar8;
      }
      goto LAB_00110798;
    }
  }
LAB_001105b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110798:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011082f;
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
LAB_0011082f:
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
    if (cVar6 != '\0') goto LAB_001108e3;
  }
  cVar6 = String::operator==((String *)param_1,"BoxContainer");
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
      if (cVar6 != '\0') goto LAB_001108e3;
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
        if (cVar6 != '\0') goto LAB_001108e3;
      }
      cVar6 = String::operator==((String *)param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_00110a9e;
      }
    }
  }
LAB_001108e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110a9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00110b1f;
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
LAB_00110b1f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110bd3;
  }
  cVar5 = String::operator==((String *)param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110bd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00110c9f;
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
LAB_00110c9f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110d53;
  }
  cVar5 = String::operator==((String *)param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110d53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeBlendSpace2DEditor::is_class(AnimationNodeBlendSpace2DEditor *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00110e3f;
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
LAB_00110e3f:
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
    if (cVar6 != '\0') goto LAB_00110ef3;
  }
  cVar6 = String::operator==((String *)param_1,"AnimationNodeBlendSpace2DEditor");
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
      if (cVar6 != '\0') goto LAB_00110ef3;
    }
    cVar6 = String::operator==((String *)param_1,"AnimationTreeNodeEditorPlugin");
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
        if (cVar6 != '\0') goto LAB_00110ef3;
      }
      cVar6 = String::operator==((String *)param_1,"VBoxContainer");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = BoxContainer::is_class((BoxContainer *)this,param_1);
          return uVar8;
        }
        goto LAB_001110e8;
      }
    }
  }
LAB_00110ef3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001110e8:
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
              if ((code *)PTR__bind_methods_0011d040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d030 !=
                Object::_bind_compatibility_methods) {
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
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
      local_58 = "BoxContainer";
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
      if ((code *)PTR__bind_methods_0011d038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
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
              if ((code *)PTR__bind_methods_0011d040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d030 !=
                Object::_bind_compatibility_methods) {
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
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
      local_58 = "BoxContainer";
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
      if ((code *)PTR__bind_methods_0011d038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
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
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC116;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC116;
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
LAB_00111efd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111efd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00111f1f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00111f1f:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
LAB_0011227d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011227d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011229f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011229f:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011d048 != Object::_get_property_list) {
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
LAB_0011266d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011266d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011268f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011268f:
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011d050 != CanvasItem::_get_property_list) {
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
LAB_00112a5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112a5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112a7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112a7f:
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
  if (local_90 == 0) {
LAB_00112e3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112e3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112e5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112e5f:
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
  if (local_90 == 0) {
LAB_0011321d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011321d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011323f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011323f:
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



/* AnimationTreeNodeEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTreeNodeEditorPlugin::_get_property_listv
          (AnimationTreeNodeEditorPlugin *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationTreeNodeEditorPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationTreeNodeEditorPlugin";
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
  if (local_90 == 0) {
LAB_001135fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001135fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011361f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011361f:
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
  StringName::StringName((StringName *)&local_78,"AnimationTreeNodeEditorPlugin",false);
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



/* AnimationNodeBlendSpace2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationNodeBlendSpace2DEditor::_get_property_listv
          (AnimationNodeBlendSpace2DEditor *this,List *param_1,bool param_2)

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
    AnimationTreeNodeEditorPlugin::_get_property_listv
              ((AnimationTreeNodeEditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeBlendSpace2DEditor";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeBlendSpace2DEditor";
  local_98 = 0;
  local_70 = 0x1f;
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
LAB_001139dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001139dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001139ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001139ff:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeBlendSpace2DEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTreeNodeEditorPlugin::_get_property_listv
                ((AnimationTreeNodeEditorPlugin *)this,param_1,true);
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
  if (local_90 == 0) {
LAB_00113dbd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113dbd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113ddf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113ddf:
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



/* AnimationNodeBlendSpace2DEditor::_notificationv(int, bool) */

void __thiscall
AnimationNodeBlendSpace2DEditor::_notificationv
          (AnimationNodeBlendSpace2DEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification((int)this);
  return;
}



/* MethodBind* create_method_bind<AnimationNodeBlendSpace2DEditor>(void
   (AnimationNodeBlendSpace2DEditor::*)()) */

MethodBind * create_method_bind<AnimationNodeBlendSpace2DEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00118988;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace2DEditor";
  local_30 = 0x1f;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00114560:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_00114560;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_001144ec:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00114491;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001144ec;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00114491:
  puVar8[-1] = param_1;
  return 0;
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



/* AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor() */

void __thiscall
AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor
          (AnimationNodeBlendSpace2DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_001182a0;
  if (*(long *)(this + 0xb68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb58);
      *(undefined8 *)(this + 0xb58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb30);
      *(undefined8 *)(this + 0xb30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0xb18));
  if (*(long *)(this + 0xa10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa10);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011474d;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011474d:
  Control::~Control((Control *)this);
  return;
}



/* AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor() */

void __thiscall
AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor
          (AnimationNodeBlendSpace2DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_001182a0;
  if (*(long *)(this + 0xb68) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb58);
      *(undefined8 *)(this + 0xb58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb30);
      *(undefined8 *)(this + 0xb30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0xb18));
  if (*(long *)(this + 0xa10) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa10);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001148ed;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001148ed:
  Control::~Control((Control *)this);
  operator_delete(this,0xb70);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* AnimationNodeBlendSpace2DEditor::_initialize_classv() */

void AnimationNodeBlendSpace2DEditor::_initialize_classv(void)

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
    if (AnimationTreeNodeEditorPlugin::initialize_class()::initialized == '\0') {
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
                  if ((code *)PTR__bind_methods_0011d040 != Node::_bind_methods) {
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
                if ((code *)PTR__bind_compatibility_methods_0011d030 !=
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
          if ((code *)PTR__bind_methods_0011d038 != Container::_bind_methods) {
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
      local_58 = "AnimationTreeNodeEditorPlugin";
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
      AnimationTreeNodeEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "AnimationTreeNodeEditorPlugin";
    local_68 = 0;
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimationNodeBlendSpace2DEditor";
    local_70 = 0;
    local_50 = 0x1f;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_001154f0:
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
  if (lVar9 == 0) goto LAB_001154f0;
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
    goto LAB_00115546;
  }
  if (lVar9 == lVar5) {
LAB_0011546b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00115546:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001153df;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011546b;
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
LAB_001153df:
  puVar7[-1] = param_1;
  return 0;
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
LAB_001157d0:
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
  if (lVar8 == 0) goto LAB_001157d0;
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
        goto LAB_001156e1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001156e1:
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



/* CowData<Delaunay2D::Triangle>::_realloc(long) */

undefined8 __thiscall
CowData<Delaunay2D::Triangle>::_realloc(CowData<Delaunay2D::Triangle> *this,long param_1)

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
/* Error CowData<Delaunay2D::Triangle>::resize<false>(long) */

undefined8 __thiscall
CowData<Delaunay2D::Triangle>::resize<false>(CowData<Delaunay2D::Triangle> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 0x18;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00115b20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x18 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00115b20;
  if (param_1 <= lVar10) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar9 == lVar3) {
LAB_00115a8c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00115a19;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00115a8c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar11 = puVar8 + param_1 * 3;
  puVar5 = puVar8 + lVar3 * 3;
  if (((int)puVar11 - (int)puVar5 & 8U) != 0) {
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    puVar5 = puVar5 + 3;
    if (puVar5 == puVar11) goto LAB_00115a19;
  }
  do {
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    puVar6 = puVar5 + 6;
    *(undefined8 *)((long)puVar5 + 0x24) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar11);
LAB_00115a19:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Delaunay2D::Triangle>::push_back(Delaunay2D::Triangle) [clone .isra.0] */

void Vector<Delaunay2D::Triangle>::push_back(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<Delaunay2D::Triangle>::resize<false>
                    ((CowData<Delaunay2D::Triangle> *)(param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Delaunay2D::Triangle>::_copy_on_write
                  ((CowData<Delaunay2D::Triangle> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0x18);
        *puVar1 = in_stack_00000008;
        puVar1[1] = in_stack_00000010;
        puVar1[2] = in_stack_00000018;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<Delaunay2D::Edge>::_realloc(long) */

undefined8 __thiscall
CowData<Delaunay2D::Edge>::_realloc(CowData<Delaunay2D::Edge> *this,long param_1)

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
/* Error CowData<Delaunay2D::Edge>::resize<false>(long) */

undefined8 __thiscall
CowData<Delaunay2D::Edge>::resize<false>(CowData<Delaunay2D::Edge> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    lVar6 = *(long *)(lVar3 + -8);
    if (param_1 == lVar6) {
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
    lVar3 = lVar6 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0xc;
  if (lVar10 == 0) {
LAB_00115f70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00115f70;
  if (param_1 <= lVar6) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar9 == lVar3) {
LAB_00115edc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00115e69;
  }
  else {
    if (lVar6 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00115edc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  lVar10 = lVar10 + (long)puVar8;
  lVar3 = (long)puVar8 + lVar3 * 0xc;
  lVar6 = lVar3;
  if (((int)lVar10 - (int)lVar3 & 4U) != 0) {
    *(undefined1 *)(lVar3 + 8) = 0;
    lVar6 = lVar3 + 0xc;
    if (lVar3 + 0xc == lVar10) goto LAB_00115e69;
  }
  do {
    *(undefined1 *)(lVar6 + 8) = 0;
    lVar3 = lVar6 + 0x18;
    *(undefined1 *)(lVar6 + 0x14) = 0;
    lVar6 = lVar3;
  } while (lVar3 != lVar10);
LAB_00115e69:
  puVar8[-1] = param_1;
  return 0;
}



/* Vector<Delaunay2D::Edge>::push_back(Delaunay2D::Edge) [clone .isra.0] */

void Vector<Delaunay2D::Edge>::push_back(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<Delaunay2D::Edge>::resize<false>((CowData<Delaunay2D::Edge> *)(param_1 + 8),lVar3)
  ;
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Delaunay2D::Edge>::_copy_on_write((CowData<Delaunay2D::Edge> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined1 *)(puVar1 + 1) = param_3;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Delaunay2D::triangulate(Vector<Vector2> const&) */

Delaunay2D * __thiscall Delaunay2D::triangulate(Delaunay2D *this,Vector *param_1)

{
  long *plVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long in_FS_OFFSET;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong local_e8;
  Vector local_a8 [8];
  float *local_a0;
  undefined1 local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  Delaunay2D local_78 [32];
  Delaunay2D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (float *)0x0;
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    do {
      lVar16 = *plVar1;
      if (lVar16 == 0) {
        pfVar14 = *(float **)(param_1 + 8);
        goto LAB_0011622e;
      }
      LOCK();
      lVar18 = *plVar1;
      bVar24 = lVar16 == lVar18;
      if (bVar24) {
        *plVar1 = lVar16 + 1;
        lVar18 = lVar16;
      }
      UNLOCK();
    } while (!bVar24);
    pfVar14 = *(float **)(param_1 + 8);
    if (lVar18 != -1) {
      local_a0 = pfVar14;
    }
LAB_0011622e:
    *(undefined8 *)(this + 8) = 0;
    if (pfVar14 != (float *)0x0) {
      uVar5 = *(ulong *)(pfVar14 + -2);
      iVar15 = (int)uVar5;
      if (2 < iVar15) {
        if ((long)uVar5 < 1) {
          uVar21 = 0;
          uVar19 = uVar5;
        }
        else {
          fVar27 = 0.0;
          fVar30 = *pfVar14;
          fVar28 = pfVar14[1];
          fVar25 = 0.0;
          uVar21 = 1;
          while (pfVar14 != (float *)0x0) {
            uVar19 = *(ulong *)(pfVar14 + -2);
            if ((long)uVar19 <= (long)uVar21) goto LAB_001163b1;
            lVar16 = uVar21 * 2;
            if ((fVar25 < 0.0) || (fVar27 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar29 = pfVar14[lVar16];
            fVar25 = fVar25 + fVar30;
            uVar21 = uVar21 + 1;
            fVar4 = (pfVar14 + lVar16)[1];
            fVar26 = fVar29;
            if (fVar30 <= fVar29) {
              fVar26 = fVar30;
            }
            fVar30 = fVar26;
            if (fVar29 <= fVar25) {
              fVar29 = fVar25;
            }
            fVar26 = fVar4;
            if (fVar4 <= fVar27 + fVar28) {
              fVar26 = fVar27 + fVar28;
            }
            if (fVar28 <= fVar4) {
              fVar4 = fVar28;
            }
            fVar28 = fVar4;
            fVar25 = fVar29 - fVar30;
            fVar27 = fVar26 - fVar28;
            if (uVar21 == (ulong)(iVar15 - 2) + 2) {
              fVar29 = fVar25;
              if (fVar25 <= fVar27) {
                fVar29 = fVar27;
              }
              fVar28 = fVar28 + fVar27 * _LC170;
              fVar30 = fVar25 * _LC170 + fVar30;
              fVar27 = fVar28 - fVar29;
              fVar29 = _LC171 * fVar29;
              Vector<Vector2>::push_back
                        ((Vector<Vector2> *)CONCAT44(fVar27,fVar30 - fVar29),local_a8);
              Vector<Vector2>::push_back
                        ((Vector<Vector2> *)CONCAT44(fVar29 + fVar28,fVar30),local_a8);
              Vector<Vector2>::push_back
                        ((Vector<Vector2> *)CONCAT44(fVar27,fVar29 + fVar30),local_a8);
              create_triangle(local_78,local_a8,iVar15,iVar15 + 1,iVar15 + 2);
              Vector<Delaunay2D::Triangle>::push_back(this);
              local_e8 = 0;
              goto LAB_00116508;
            }
            pfVar14 = *(float **)(param_1 + 8);
          }
          uVar19 = 0;
        }
        goto LAB_001163b1;
      }
    }
  }
  goto LAB_00116358;
LAB_00116890:
  uVar19 = 0;
LAB_001163b1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar21,uVar19,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_00116508:
  do {
    pfVar14 = local_a0;
    local_90 = 0;
    if ((*(long *)(this + 8) != 0) &&
       (uVar20 = (int)*(undefined8 *)(*(long *)(this + 8) + -8) - 1, -1 < (int)uVar20)) {
      if (local_a0 == (float *)0x0) {
        uVar19 = 0;
        uVar21 = local_e8;
        goto LAB_001163b1;
      }
      uVar22 = (ulong)uVar20;
      pfVar2 = local_a0 + local_e8 * 2;
      lVar16 = uVar22 * 0x18;
      do {
        uVar19 = *(ulong *)(pfVar14 + -2);
        uVar21 = local_e8;
        if ((long)uVar19 <= (long)local_e8) goto LAB_001163b1;
        uVar21 = uVar22;
        if (*(long *)(this + 8) == 0) goto LAB_00116890;
        uVar19 = *(ulong *)(*(long *)(this + 8) + -8);
        if ((long)uVar19 <= (long)uVar22) goto LAB_001163b1;
        fVar30 = (float)Vector2::distance_squared_to((Vector2 *)pfVar2);
        lVar18 = *(long *)(this + 8);
        if (lVar18 == 0) goto LAB_00116890;
        uVar19 = *(ulong *)(lVar18 + -8);
        if ((long)uVar19 <= (long)uVar22) goto LAB_001163b1;
        piVar9 = (int *)(lVar18 + lVar16);
        if (fVar30 < (float)piVar9[5]) {
          iVar11 = piVar9[1];
          iVar8 = *piVar9;
          local_80 = 0;
          iVar13 = iVar11;
          if (iVar11 < iVar8) {
            iVar13 = iVar8;
            iVar8 = iVar11;
          }
          local_88 = CONCAT44(iVar13,iVar8);
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          lVar18 = *(long *)(this + 8);
          if (lVar18 == 0) goto LAB_00116890;
          uVar19 = *(ulong *)(lVar18 + -8);
          if ((long)uVar19 <= (long)uVar22) goto LAB_001163b1;
          local_80 = 0;
          iVar11 = *(int *)(lVar18 + lVar16 + 8);
          iVar8 = *(int *)(lVar18 + lVar16 + 4);
          iVar13 = iVar11;
          if (iVar11 < iVar8) {
            iVar13 = iVar8;
            iVar8 = iVar11;
          }
          local_88 = CONCAT44(iVar13,iVar8);
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          lVar18 = *(long *)(this + 8);
          if (lVar18 == 0) goto LAB_00116890;
          uVar19 = *(ulong *)(lVar18 + -8);
          if ((long)uVar19 <= (long)uVar22) goto LAB_001163b1;
          local_80 = 0;
          iVar11 = ((int *)(lVar18 + lVar16))[2];
          iVar8 = *(int *)(lVar18 + lVar16);
          local_88 = CONCAT44(iVar11,iVar8);
          if (iVar11 <= iVar8) {
            local_88 = CONCAT44(iVar8,iVar11);
          }
          Vector<Delaunay2D::Edge>::push_back(local_98,local_88,0);
          if (*(long *)(this + 8) == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = *(long *)(*(long *)(this + 8) + -8);
            if ((long)uVar22 < lVar18) {
              CowData<Delaunay2D::Triangle>::_copy_on_write
                        ((CowData<Delaunay2D::Triangle> *)(this + 8));
              lVar18 = *(long *)(this + 8);
              if (lVar18 == 0) {
                lVar12 = -1;
              }
              else {
                lVar12 = *(long *)(lVar18 + -8) + -1;
                if ((long)uVar22 < lVar12) {
                  memmove((void *)(lVar18 + lVar16),(void *)(lVar18 + 0x18 + lVar16),
                          (*(long *)(lVar18 + -8) - uVar22) * 0x18 - 0x18);
                }
              }
              CowData<Delaunay2D::Triangle>::resize<false>
                        ((CowData<Delaunay2D::Triangle> *)(this + 8),lVar12);
              goto LAB_00116710;
            }
          }
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,uVar22,lVar18,"p_index","size()",
                     "",false,false);
        }
LAB_00116710:
        uVar20 = uVar20 - 1;
        lVar16 = lVar16 + -0x18;
        uVar22 = uVar22 - 1;
      } while (uVar20 != 0xffffffff);
      if (local_90 != 0) {
        lVar16 = local_90;
        uVar21 = 0;
        do {
          while( true ) {
            lVar18 = *(long *)(lVar16 + -8);
            if (lVar18 <= (long)uVar21) {
              LOCK();
              plVar1 = (long *)(lVar16 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_90 + -0x10),false);
              }
              goto LAB_00116983;
            }
            uVar22 = uVar21 + 1;
            lVar12 = uVar21 * 0xc;
            piVar9 = (int *)(lVar16 + lVar12);
            if ((char)piVar9[2] != '\0') break;
            if ((long)uVar22 < lVar18) {
              lVar23 = (long)(int)uVar22;
              lVar17 = lVar23 * 0xc;
              do {
                if ((*(int *)(lVar16 + lVar17) == *piVar9) &&
                   (*(int *)(lVar16 + 4 + lVar17) == piVar9[1])) {
                  CowData<Delaunay2D::Edge>::_copy_on_write((CowData<Delaunay2D::Edge> *)&local_90);
                  *(undefined1 *)(local_90 + 8 + lVar12) = 1;
                  if (local_90 == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = *(long *)(local_90 + -8);
                    if (lVar23 < lVar16) {
                      CowData<Delaunay2D::Edge>::_copy_on_write
                                ((CowData<Delaunay2D::Edge> *)&local_90);
                      *(undefined1 *)(local_90 + 8 + lVar17) = 1;
                      break;
                    }
                  }
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar23,lVar16,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                lVar23 = lVar23 + 1;
                lVar17 = lVar17 + 0xc;
              } while (lVar18 != lVar23);
            }
            lVar16 = local_90;
            if (local_90 == 0) goto LAB_00116890;
            uVar19 = *(ulong *)(local_90 + -8);
            if ((long)uVar19 <= (long)uVar21) goto LAB_001163b1;
            piVar9 = (int *)(local_90 + lVar12);
            uVar21 = uVar22;
            if ((char)piVar9[2] == '\0') {
              create_triangle(local_58,local_a8,*piVar9,piVar9[1],(int)local_e8);
              Vector<Delaunay2D::Triangle>::push_back(this);
            }
          }
          lVar16 = local_90;
          uVar21 = uVar22;
        } while (local_90 != 0);
      }
    }
LAB_00116983:
    local_e8 = local_e8 + 1;
  } while ((uVar5 & 0xffffffff) != local_e8);
  CowData<Delaunay2D::Triangle>::_copy_on_write((CowData<Delaunay2D::Triangle> *)(this + 8));
  piVar9 = *(int **)(this + 8);
  if ((piVar9 == (int *)0x0) || (lVar16 = *(long *)(piVar9 + -2), lVar16 < 1)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    piVar10 = piVar9;
    do {
      if (((*piVar10 < iVar15) && (piVar10[1] < iVar15)) && (piVar10[2] < iVar15)) {
        lVar18 = (long)iVar11;
        uVar7 = *(undefined8 *)(piVar10 + 2);
        iVar11 = iVar11 + 1;
        piVar3 = piVar9 + lVar18 * 6;
        *(undefined8 *)piVar3 = *(undefined8 *)piVar10;
        *(undefined8 *)(piVar3 + 2) = uVar7;
        *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar10 + 4);
      }
      piVar10 = piVar10 + 6;
    } while (piVar9 + lVar16 * 6 != piVar10);
  }
  CowData<Delaunay2D::Triangle>::resize<false>
            ((CowData<Delaunay2D::Triangle> *)(this + 8),(long)iVar11);
LAB_00116358:
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x00116c78) */
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
      _err_print_error(&_LC110,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116fb0;
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
LAB_00116fb0:
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
      goto LAB_001173bf;
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
                    /* WARNING: Could not recover jumptable at 0x00117266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001173bf:
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
      goto LAB_0011757f;
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
                    /* WARNING: Could not recover jumptable at 0x00117426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011757f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace2DEditor::can_edit(Ref<AnimationNode> const&) */

void AnimationNodeBlendSpace2DEditor::_GLOBAL__sub_I_can_edit(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,Ref<InputEvent>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace2DEditor,void,String_const&> *this)

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
/* AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor() */

void __thiscall
AnimationNodeBlendSpace2DEditor::~AnimationNodeBlendSpace2DEditor
          (AnimationNodeBlendSpace2DEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


