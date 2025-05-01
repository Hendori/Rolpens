
/* AnimationNodeBlendSpace1DEditor::_snap_toggled() */

void AnimationNodeBlendSpace1DEditor::_snap_toggled(void)

{
  CanvasItem::queue_redraw();
  return;
}



/* AnimationNodeBlendSpace1DEditor::_update_edited_point_pos() */

void __thiscall
AnimationNodeBlendSpace1DEditor::_update_edited_point_pos(AnimationNodeBlendSpace1DEditor *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  if (this[0xad0] == (AnimationNodeBlendSpace1DEditor)0x0) {
    iVar1 = *(int *)(this + 0xab0);
    if (-1 < iVar1) {
      iVar3 = AnimationNodeBlendSpace1D::get_blend_point_count();
      if (iVar1 < iVar3) {
        fVar4 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                                 ((int)*(undefined8 *)(this + 0xa10));
        if (this[0xb11] != (AnimationNodeBlendSpace1DEditor)0x0) {
          fVar4 = fVar4 + *(float *)(this + 0xb1c);
          cVar2 = BaseButton::is_pressed();
          if (cVar2 != '\0') {
            fVar5 = (float)AnimationNodeBlendSpace1D::get_snap();
            dVar6 = (double)Math::snapped((double)fVar4,(double)fVar5);
            fVar4 = (float)dVar6;
          }
        }
        this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
        Range::set_value((double)fVar4);
        this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
      }
    }
    return;
  }
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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



/* AnimationNodeBlendSpace1DEditor::can_edit(Ref<AnimationNode> const&) */

undefined4 __thiscall
AnimationNodeBlendSpace1DEditor::can_edit(AnimationNodeBlendSpace1DEditor *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,
                               &AnimationNodeBlendSpace1D::typeinfo,0), pOVar3 == (Object *)0x0)) ||
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



/* AnimationNodeBlendSpace1DEditor::_update_tool_erase() */

void __thiscall
AnimationNodeBlendSpace1DEditor::_update_tool_erase(AnimationNodeBlendSpace1DEditor *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  iVar1 = *(int *)(this + 0xab0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < iVar1) {
    iVar3 = AnimationNodeBlendSpace1D::get_blend_point_count();
    if (iVar1 < iVar3) {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
      AnimationNodeBlendSpace1D::get_blend_point_node((int)&local_28);
      local_30 = (Object *)0x0;
      if (local_28 != (Object *)0x0) {
        pOVar4 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&AnimationNode::typeinfo,0);
        if (pOVar4 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          local_30 = pOVar4;
          if (cVar2 == '\0') {
            local_30 = (Object *)0x0;
          }
          if (local_28 == (Object *)0x0) goto LAB_001003ae;
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_28);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_28 + 0x140))(local_28);
            Memory::free_static(local_28,false);
          }
        }
      }
LAB_001003ae:
      cVar2 = AnimationTreeEditor::can_edit(AnimationTreeEditor::singleton);
      if (cVar2 == '\0') {
        CanvasItem::hide();
      }
      else {
        CanvasItem::show();
      }
      if (this[0xa18] == (AnimationNodeBlendSpace1DEditor)0x0) {
        CanvasItem::show();
      }
      else {
        CanvasItem::hide();
      }
      if (local_30 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_30);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100491;
    }
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa58),0));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
LAB_00100491:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_tool_switch(int) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_tool_switch(AnimationNodeBlendSpace1DEditor *this,int param_1)

{
  if (param_1 == 0) {
    CanvasItem::show();
    CanvasItem::show();
  }
  else {
    CanvasItem::hide();
    CanvasItem::hide();
  }
  _update_tool_erase(this);
  CanvasItem::queue_redraw();
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



/* AnimationNodeBlendSpace1DEditor::get_blend_position_path() const */

AnimationNodeBlendSpace1DEditor * __thiscall
AnimationNodeBlendSpace1DEditor::get_blend_position_path(AnimationNodeBlendSpace1DEditor *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_update_space() [clone .part.0] */

void __thiscall
AnimationNodeBlendSpace1DEditor::_update_space(AnimationNodeBlendSpace1DEditor *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float fVar2;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
  fVar2 = (float)AnimationNodeBlendSpace1D::get_max_space();
  Range::set_value((double)fVar2);
  fVar2 = (float)AnimationNodeBlendSpace1D::get_min_space();
  Range::set_value((double)fVar2);
  uVar1 = *(undefined8 *)(this + 0xa88);
  AnimationNodeBlendSpace1D::is_using_sync();
  BaseButton::set_pressed(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(this + 0xa90);
  AnimationNodeBlendSpace1D::get_blend_mode();
  OptionButton::select((int)uVar1);
  uVar1 = *(undefined8 *)(this + 0xa70);
  AnimationNodeBlendSpace1D::get_value_label();
  LineEdit::set_text(uVar1,aCStack_28);
  CowData<char32_t>::_unref(aCStack_28);
  fVar2 = (float)AnimationNodeBlendSpace1D::get_snap();
  Range::set_value((double)fVar2);
  CanvasItem::queue_redraw();
  this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_update_space() */

void __thiscall
AnimationNodeBlendSpace1DEditor::_update_space(AnimationNodeBlendSpace1DEditor *this)

{
  if (this[0xad0] != (AnimationNodeBlendSpace1DEditor)0x0) {
    return;
  }
  _update_space(this);
  return;
}



/* AnimationNodeBlendSpace1DEditor::edit(Ref<AnimationNode> const&) */

void __thiscall
AnimationNodeBlendSpace1DEditor::edit(AnimationNodeBlendSpace1DEditor *this,Ref *param_1)

{
  undefined8 uVar1;
  char cVar2;
  AnimationNodeBlendSpace1DEditor AVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pOVar5 = *(Object **)(this + 0xa10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (pOVar5 == (Object *)0x0) {
      this[0xa18] = (AnimationNodeBlendSpace1DEditor)0x0;
      goto LAB_001009c0;
    }
    *(undefined8 *)(this + 0xa10) = 0;
LAB_00100a90:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
LAB_00100928:
    pOVar5 = *(Object **)(this + 0xa10);
  }
  else {
    pOVar4 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&AnimationNodeBlendSpace1D::typeinfo,
                            0);
    if (pOVar4 != pOVar5) {
      *(Object **)(this + 0xa10) = pOVar4;
      if ((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        *(undefined8 *)(this + 0xa10) = 0;
      }
      if (pOVar5 != (Object *)0x0) goto LAB_00100a90;
      goto LAB_00100928;
    }
  }
  this[0xa18] = (AnimationNodeBlendSpace1DEditor)0x0;
  uVar1 = EditorNode::singleton;
  if (pOVar5 != (Object *)0x0) {
    local_28 = (Object *)0x0;
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar5 != (Object *)0x0) &&
       (local_28 = pOVar5, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_28 = (Object *)0x0;
    }
    AVar3 = (AnimationNodeBlendSpace1DEditor)EditorNode::is_resource_read_only(uVar1,&local_28,0);
    this[0xa18] = AVar3;
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar5 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (this[0xad0] == (AnimationNodeBlendSpace1DEditor)0x0) {
      _update_space(this);
    }
  }
LAB_001009c0:
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa48),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xaa0),0));
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa70),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xa80),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xa78),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa88),0));
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa90),0));
  return;
}



/* AnimationNodeBlendSpace1DEditor::_config_changed(double) */

double AnimationNodeBlendSpace1DEditor::_config_changed(double param_1)

{
  StringName *pSVar1;
  bool bVar2;
  int iVar3;
  Object *pOVar4;
  int iVar5;
  StringName *in_RDI;
  long in_FS_OFFSET;
  float fVar6;
  double dVar7;
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
  if (in_RDI[0xad0] == (StringName)0x0) {
    in_RDI[0xad0] = (StringName)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a8 = 0;
    local_90 = 0;
    local_98 = "";
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = "Change BlendSpace1D Config";
    local_a0 = 0;
    local_90 = 0x1a;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_98,(String *)&local_a0);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_98,"set_max_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,dVar7);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar5 = (int)local_88;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    fVar6 = (float)AnimationNodeBlendSpace1D::get_max_space();
    StringName::StringName((StringName *)&local_98,"set_max_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,fVar6);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_98,"set_min_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,dVar7);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    fVar6 = (float)AnimationNodeBlendSpace1D::get_min_space();
    StringName::StringName((StringName *)&local_98,"set_min_space",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,fVar6);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    dVar7 = (double)Range::get_value();
    StringName::StringName((StringName *)&local_98,"set_snap",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,dVar7);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    fVar6 = (float)AnimationNodeBlendSpace1D::get_snap();
    StringName::StringName((StringName *)&local_98,"set_snap",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,fVar6);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    bVar2 = (bool)BaseButton::is_pressed();
    StringName::StringName((StringName *)&local_98,"set_use_sync",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    bVar2 = (bool)AnimationNodeBlendSpace1D::is_using_sync();
    StringName::StringName((StringName *)&local_98,"set_use_sync",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    iVar3 = OptionButton::get_selected();
    StringName::StringName((StringName *)&local_98,"set_blend_mode",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,iVar3);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    iVar3 = AnimationNodeBlendSpace1D::get_blend_mode();
    StringName::StringName((StringName *)&local_98,"set_blend_mode",false);
    pSVar1 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_78,iVar3);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_98,iVar5);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
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
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_98,0);
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
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_98,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    in_RDI[0xad0] = (StringName)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      dVar7 = (double)CanvasItem::queue_redraw();
      return dVar7;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_labels_changed(String) */

void AnimationNodeBlendSpace1DEditor::_labels_changed(StringName *param_1)

{
  StringName *pSVar1;
  Object *pOVar2;
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
  if (param_1[0xad0] == (StringName)0x0) {
    param_1[0xad0] = (StringName)0x1;
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a8 = 0;
    local_90 = 0;
    local_98 = "";
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = "Change BlendSpace1D Labels";
    local_a0 = 0;
    local_90 = 0x1a;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_98,(String *)&local_a0);
    EditorUndoRedoManager::create_action(pOVar2,(String *)&local_98,1,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    LineEdit::get_text();
    StringName::StringName((StringName *)&local_98,"set_value_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar2,pSVar1,(Variant **)&local_98,(int)local_88);
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
    AnimationNodeBlendSpace1D::get_value_label();
    StringName::StringName((StringName *)&local_98,"set_value_label",false);
    pSVar1 = *(StringName **)(param_1 + 0xa10);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,pSVar1,(Variant **)&local_98,(int)local_88);
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
    param_1[0xad0] = (StringName)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_edit_point_pos(double) */

double AnimationNodeBlendSpace1DEditor::_edit_point_pos(double param_1)

{
  Variant *pVVar1;
  int iVar2;
  StringName *pSVar3;
  Object *pOVar4;
  Variant *pVVar5;
  StringName *in_RDI;
  Variant *pVVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
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
  if (in_RDI[0xad0] == (StringName)0x0) {
    in_RDI[0xad0] = (StringName)0x1;
    pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
    local_c8 = 0;
    local_b0 = 0;
    local_b8 = "";
    String::parse_latin1((StrRange *)&local_c8);
    local_b8 = "Move BlendSpace1D Node Point";
    local_c0 = 0;
    local_b0 = 0x1c;
    String::parse_latin1((StrRange *)&local_c0);
    TTR((String *)&local_b8,(String *)&local_c0);
    EditorUndoRedoManager::create_action(pOVar4,(String *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    dVar8 = (double)Range::get_value();
    iVar2 = *(int *)(in_RDI + 0xab0);
    StringName::StringName((StringName *)&local_b8,"set_blend_point_position",false);
    pSVar3 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_88,iVar2);
    pVVar6 = (Variant *)local_40;
    Variant::Variant(local_70,dVar8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar3,(Variant **)&local_b8,(int)&local_a8);
    pVVar5 = pVVar6;
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
    fVar7 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                             ((int)*(undefined8 *)(in_RDI + 0xa10));
    iVar2 = *(int *)(in_RDI + 0xab0);
    StringName::StringName((StringName *)&local_b8,"set_blend_point_position",false);
    pSVar3 = *(StringName **)(in_RDI + 0xa10);
    Variant::Variant((Variant *)local_88,iVar2);
    Variant::Variant(local_70,fVar7);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar3,(Variant **)&local_b8,(int)&local_a8);
    do {
      pVVar5 = pVVar6 + -0x18;
      pVVar6 = pVVar6 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar6 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_edited_point_pos",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar4,in_RDI,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_edited_point_pos",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar4,in_RDI,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    in_RDI[0xad0] = (StringName)0x0;
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      dVar8 = (double)CanvasItem::queue_redraw();
      return dVar8;
    }
  }
  else if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_erase_selected() [clone .part.0] */

void __thiscall
AnimationNodeBlendSpace1DEditor::_erase_selected(AnimationNodeBlendSpace1DEditor *this)

{
  Variant *pVVar1;
  int iVar2;
  StringName *pSVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined8 local_108;
  long local_100;
  Object *local_f8;
  undefined8 local_f0;
  Variant *local_e8 [2];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_100 = 0;
  local_f0 = 0;
  local_f8 = (Object *)&_LC0;
  String::parse_latin1((StrRange *)&local_100);
  local_f8 = (Object *)0x10a66d;
  local_108 = 0;
  local_f0 = 0x19;
  String::parse_latin1((StrRange *)&local_108);
  TTR((String *)&local_f8,(String *)&local_108);
  EditorUndoRedoManager::create_action(pOVar6,(String *)&local_f8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  iVar2 = *(int *)(this + 0xab0);
  StringName::StringName((StringName *)&local_f8,"remove_blend_point",false);
  pSVar3 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)&local_d8,iVar2);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_e8[0] = (Variant *)&local_d8;
  EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar3,(Variant **)&local_f8,(int)local_e8);
  if (Variant::needs_deinit[(int)local_c0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
    StringName::unref();
  }
  iVar2 = *(int *)(this + 0xab0);
  fVar8 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                           ((int)*(undefined8 *)(this + 0xa10));
  AnimationNodeBlendSpace1D::get_blend_point_node((int)(String *)&local_f8);
  StringName::StringName((StringName *)&local_100,"add_blend_point",false);
  pSVar3 = *(StringName **)(this + 0xa10);
  Variant::Variant((Variant *)local_a8,local_f8);
  Variant::Variant(local_90,fVar8);
  Variant::Variant(local_78,iVar2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d8 = (Variant *)local_a8;
  pVStack_d0 = local_90;
  local_c8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar6,pSVar3,(Variant **)&local_100,(int)(Variant *)&local_d8);
  pVVar7 = local_48;
  do {
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar7 != (Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (local_f8 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_f8;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_f8);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  StringName::StringName((StringName *)&local_f8,"_update_space",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_f8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_f8,"_update_space",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_f8,0);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_erase_selected() */

void __thiscall
AnimationNodeBlendSpace1DEditor::_erase_selected(AnimationNodeBlendSpace1DEditor *this)

{
  if (*(int *)(this + 0xab0) == -1) {
    return;
  }
  _erase_selected(this);
  return;
}



/* AnimationNodeBlendSpace1DEditor::_open_editor() */

void __thiscall AnimationNodeBlendSpace1DEditor::_open_editor(AnimationNodeBlendSpace1DEditor *this)

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
  
  iVar1 = *(int *)(this + 0xab0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < iVar1) && (iVar4 = AnimationNodeBlendSpace1D::get_blend_point_count(), iVar1 < iVar4)) {
    AnimationNodeBlendSpace1D::get_blend_point_node((int)(CowData<char32_t> *)&local_38);
    local_40 = (Object *)0x0;
    if (local_38 != (Object *)0x0) {
      pOVar5 = (Object *)__dynamic_cast(local_38,&Object::typeinfo,&AnimationNode::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        local_40 = pOVar5;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_40 = (Object *)0x0;
          if (local_38 == (Object *)0x0) goto LAB_00102355;
          cVar3 = RefCounted::unreference();
          goto joined_r0x0010242b;
        }
        if ((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
        goto LAB_00102433;
LAB_001023a7:
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
          goto LAB_00102469;
        }
        goto LAB_00102298;
      }
      cVar3 = RefCounted::unreference();
joined_r0x0010242b:
      if (cVar3 != '\0') {
        pOVar5 = (Object *)0x0;
LAB_00102433:
        cVar3 = predelete_handler(local_38);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001023a7;
      }
    }
LAB_00102355:
    _err_print_error("_open_editor","editor/plugins/animation_blend_space_1d_editor.cpp",0x237,
                     "Condition \"an.is_null()\" is true.",0,0);
    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_40);
  }
LAB_00102298:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102469:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_add_animation_type(int) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_add_animation_type
          (AnimationNodeBlendSpace1DEditor *this,int param_1)

{
  Variant *pVVar1;
  float fVar2;
  long lVar3;
  StringName *pSVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  AnimationNodeAnimation *this_00;
  Object *pOVar8;
  Object *pOVar9;
  Variant *pVVar10;
  long lVar11;
  long lVar12;
  AnimationNodeAnimation *pAVar13;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
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
  
  pAVar13 = (AnimationNodeAnimation *)0x0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (AnimationNodeAnimation *)operator_new(0x3e0,"");
  AnimationNodeAnimation::AnimationNodeAnimation(this_00);
  postinitialize_handler((Object *)this_00);
  cVar6 = RefCounted::init_ref();
  if (cVar6 != '\0') {
    cVar6 = RefCounted::reference();
    if (cVar6 != '\0') {
      pAVar13 = this_00;
    }
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler((Object *)this_00);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
  lVar11 = (long)param_1;
  lVar3 = *(long *)(this + 0xaf0);
  if (lVar11 < 0) {
    if (lVar3 != 0) {
      lVar12 = *(long *)(lVar3 + -8);
      goto LAB_00102935;
    }
  }
  else if (lVar3 != 0) {
    lVar12 = *(long *)(lVar3 + -8);
    if (lVar12 <= lVar11) goto LAB_00102935;
    StringName::StringName((StringName *)&local_b8,(String *)(lVar3 + lVar11 * 8),false);
    AnimationNodeAnimation::set_animation((StringName *)pAVar13);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
    pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = "";
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "Add Animation Point";
    local_c8 = 0;
    local_b0 = 0x13;
    String::parse_latin1((StrRange *)&local_c8);
    TTR((String *)&local_b8,(String *)&local_c8);
    EditorUndoRedoManager::create_action(pOVar8,(StringName *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    fVar2 = *(float *)(this + 0xaf8);
    cVar6 = RefCounted::reference();
    pOVar9 = (Object *)0x0;
    if (cVar6 != '\0') {
      pOVar9 = (Object *)pAVar13;
    }
    StringName::StringName((StringName *)&local_b8,"add_blend_point",false);
    pSVar4 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_88,pOVar9);
    Variant::Variant((Variant *)local_70,fVar2);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar8,pSVar4,(Variant **)&local_b8,(int)&local_a8);
    pVVar10 = (Variant *)local_40;
    do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar10 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (pOVar9 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar9);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
    }
    iVar7 = AnimationNodeBlendSpace1D::get_blend_point_count();
    StringName::StringName((StringName *)&local_b8,"remove_blend_point",false);
    pSVar4 = *(StringName **)(this + 0xa10);
    Variant::Variant((Variant *)local_88,iVar7);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar8,pSVar4,(Variant **)&local_b8,(int)&local_a8);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_do_methodp(pOVar8,(StringName *)this,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_space",false);
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    EditorUndoRedoManager::add_undo_methodp(pOVar8,(StringName *)this,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
    this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
    CanvasItem::queue_redraw();
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler((Object *)pAVar13);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pAVar13 + 0x140))(pAVar13);
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pAVar13,false);
          return;
        }
        goto LAB_00102a38;
      }
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102a38:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar12 = 0;
LAB_00102935:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* WARNING: Removing unreachable block (ram,0x00102bd9) */
/* WARNING: Removing unreachable block (ram,0x00104310) */
/* WARNING: Removing unreachable block (ram,0x00104289) */
/* WARNING: Removing unreachable block (ram,0x00104350) */
/* WARNING: Removing unreachable block (ram,0x00104360) */
/* WARNING: Removing unreachable block (ram,0x00104323) */
/* WARNING: Removing unreachable block (ram,0x00104342) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendSpace1DEditor::AnimationNodeBlendSpace1DEditor() */

void __thiscall
AnimationNodeBlendSpace1DEditor::AnimationNodeBlendSpace1DEditor
          (AnimationNodeBlendSpace1DEditor *this)

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
  BoxContainer *pBVar12;
  PanelContainer *pPVar13;
  Control *this_03;
  CallableCustom *pCVar14;
  LineEdit *this_04;
  PopupMenu *pPVar15;
  EditorFileDialog *this_05;
  int iVar16;
  ButtonGroup *pBVar17;
  long in_FS_OFFSET;
  ButtonGroup *local_78;
  String local_70 [8];
  long local_68 [2];
  undefined8 local_58 [2];
  undefined4 local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (AnimationNodeBlendSpace1DEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00114a60;
  *(undefined8 *)(this + 0xa10) = 0;
  this[0xa18] = (AnimationNodeBlendSpace1DEditor)0x0;
  *(undefined4 *)(this + 0xab0) = 0xffffffff;
  *(undefined8 *)(this + 0xac8) = 0;
  this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined2 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xb14) = 0;
  *(undefined8 *)(this + 0xb1c) = 0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb28) = (undefined1  [16])0x0;
  singleton = this;
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00114370;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  local_78 = (ButtonGroup *)0x0;
  this_00 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_00);
  postinitialize_handler((Object *)this_00);
  cVar6 = RefCounted::init_ref();
  if (cVar6 != '\0') {
    pBVar17 = local_78;
    if ((this_00 != (ButtonGroup *)0x0) &&
       (cVar6 = RefCounted::reference(), pBVar17 = this_00, local_78 = this_00, cVar6 == '\0')) {
      local_78 = (ButtonGroup *)0x0;
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)pBVar17), cVar6 != '\0')) {
      (**(code **)(*(long *)pBVar17 + 0x140))(pBVar17);
      Memory::free_static(pBVar17,false);
    }
  }
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa38) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa38));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa38),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa38));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa38),0,0);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa38),0));
  pSVar1 = *(String **)(this + 0xa38);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Set the blending position within the space");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace1DEditor::_tool_switch");
  iVar16 = (int)(String *)local_68;
  Callable::bind<int>(iVar16);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa40) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa40));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa40),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa40));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa40),0,0);
  pSVar1 = *(String **)(this + 0xa40);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Select and move points, create points with RMB.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace1DEditor::_tool_switch");
  Callable::bind<int>(iVar16);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa48) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa48));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa48),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa48));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa48),0,0);
  pSVar1 = *(String **)(this + 0xa48);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Create points.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xa48);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace1DEditor::_tool_switch");
  Callable::bind<int>(iVar16);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  *(VSeparator **)(this + 0xa50) = pVVar9;
  Node::add_child(pBVar7,pVVar9,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa58) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa58));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa58),0,0);
  pSVar1 = *(String **)(this + 0xa58);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Erase points.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace1DEditor::_erase_selected");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa60) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa60),0,0);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
  pSVar1 = *(String **)(this + 0xa60);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Enable snap and show grid.");
  TTR(local_70,(String *)local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace1DEditor::_snap_toggled");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa68) = pSVar10;
  Node::add_child(pBVar7,pSVar10,0,0);
  Range::set_min(_LC61);
  Range::set_step(_LC61);
  Range::set_max(_LC62);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Sync:");
  TTR(local_70,(String *)local_68);
  Label::Label(pLVar11,local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(pBVar7,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_01 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  CheckBox::CheckBox(this_01,(String *)local_58);
  postinitialize_handler((Object *)this_01);
  *(CheckBox **)(this + 0xa88) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa88),0,0);
  plVar2 = *(long **)(this + 0xa88);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(pBVar7,pVVar9,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Blend:");
  TTR(local_70,(String *)local_68);
  Label::Label(pLVar11,local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(pBVar7,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_02 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(this_02,(String *)local_58);
  postinitialize_handler((Object *)this_02);
  *(OptionButton **)(this + 0xa90) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa90),0,0);
  plVar2 = *(long **)(this + 0xa90);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114370;
  postinitialize_handler((Object *)pBVar12);
  *(BoxContainer **)(this + 0xa98) = pBVar12;
  Node::add_child(pBVar7,pBVar12,0,0);
  uVar4 = *(undefined8 *)(this + 0xa98);
  pVVar9 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar9);
  postinitialize_handler((Object *)pVVar9);
  Node::add_child(uVar4,pVVar9,0,0);
  uVar4 = *(undefined8 *)(this + 0xa98);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Point");
  TTR(local_70,(String *)local_68);
  Label::Label(pLVar11,local_70);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar4,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xaa0) = pSVar10;
  Node::add_child(*(undefined8 *)(this + 0xa98),pSVar10,0,0);
  Range::set_min(_LC67);
  Range::set_max(_LC62);
  Range::set_step(_LC61);
  plVar2 = *(long **)(this + 0xaa0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_edit_point_pos");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(pBVar8,(String *)local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xaa8) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa98),*(undefined8 *)(this + 0xaa8),0,0);
  pSVar1 = *(String **)(this + 0xaa8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Open Editor");
  TTR(local_70,(String *)local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar2 = *(long **)(this + 0xaa8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace1DEditor::_open_editor");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,1);
  Callable::~Callable((Callable *)local_58);
  CanvasItem::hide();
  CanvasItem::hide();
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001146e8;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(this,pBVar7,0,0);
  Control::set_v_size_flags(pBVar7,3);
  pPVar13 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar13);
  postinitialize_handler((Object *)pPVar13);
  *(PanelContainer **)(this + 0xa30) = pPVar13;
  Control::set_clip_contents(SUB81(pPVar13,0));
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa30),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa30),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa30),3);
  this_03 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_03);
  postinitialize_handler((Object *)this_03);
  lVar5 = *(long *)this_03;
  *(Control **)(this + 0xab8) = this_03;
  pcVar3 = *(code **)(lVar5 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar14 = &PTR_hash_00114f98;
  *(undefined8 *)(pCVar14 + 0x30) = uVar4;
  *(code **)(pCVar14 + 0x38) = _blend_space_gui_input;
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(AnimationNodeBlendSpace1DEditor **)(pCVar14 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "AnimationNodeBlendSpace1DEditor::_blend_space_gui_input";
  Callable::Callable((Callable *)local_58,pCVar14);
  (*pcVar3)(this_03,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 0xab8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void *)"&AnimationNodeBlendSpace1DEditor::_blend_space_draw");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  Control::set_focus_mode(*(undefined8 *)(this + 0xab8),2);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xab8),0,0);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114370;
  postinitialize_handler((Object *)pBVar12);
  Node::add_child(pBVar7,pBVar12,0,0);
  Control::set_h_size_flags(pBVar12,3);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa80) = pSVar10;
  Range::set_min(_LC73);
  Range::set_max(0.0);
  Range::set_step(_LC61);
  pSVar10 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SpinBox **)(this + 0xa78) = pSVar10;
  Range::set_min(_LC61);
  Range::set_max(_LC75);
  Range::set_step(_LC61);
  this_04 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(this_04,(String *)local_58);
  postinitialize_handler((Object *)this_04);
  *(LineEdit **)(this + 0xa70) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  LineEdit::set_expand_to_text_length_enabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa80),0,0);
  BoxContainer::add_spacer(SUB81(pBVar12,0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa70),0,0);
  BoxContainer::add_spacer(SUB81(pBVar12,0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa78),0,0);
  plVar2 = *(long **)(this + 0xa68);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 0xa80);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 0xa78);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_double *)"&AnimationNodeBlendSpace1DEditor::_config_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 0xa70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC0;
  *(AnimationNodeBlendSpace1DEditor **)(pCVar14 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00115028;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar4;
  *(code **)(pCVar14 + 0x38) = _labels_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "AnimationNodeBlendSpace1DEditor::_labels_changed";
  Callable::Callable((Callable *)local_58,pCVar14);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)local_58);
  Callable::~Callable((Callable *)local_58);
  pPVar13 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar13);
  postinitialize_handler((Object *)pPVar13);
  *(PanelContainer **)(this + 0xac0) = pPVar13;
  Node::add_child(this,pPVar13,0,0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar11,(String *)local_58);
  postinitialize_handler((Object *)pLVar11);
  *(Label **)(this + 0xac8) = pLVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xac0),*(undefined8 *)(this + 0xac8),0,0);
  pPVar15 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar15);
  postinitialize_handler((Object *)pPVar15);
  *(PopupMenu **)(this + 0xad8) = pPVar15;
  Node::add_child(this,pPVar15,0,0);
  plVar2 = *(long **)(this + 0xad8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace1DEditor::_add_menu_type");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pPVar15 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(pPVar15);
  postinitialize_handler((Object *)pPVar15);
  *(PopupMenu **)(this + 0xae0) = pPVar15;
  Node::set_auto_translate_mode(pPVar15,2);
  Node::add_child(*(undefined8 *)(this + 0xad8),*(undefined8 *)(this + 0xae0),0,0);
  plVar2 = *(long **)(this + 0xae0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
            ((AnimationNodeBlendSpace1DEditor *)local_58,(char *)this,
             (_func_void_int *)"&AnimationNodeBlendSpace1DEditor::_add_animation_type");
  StringName::StringName((StringName *)local_68,"index_pressed",false);
  (*pcVar3)(plVar2,(String *)local_68,(CowData<char32_t> *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  this_05 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorFileDialog **)(this + 0xb28) = this_05;
  Node::add_child(this,this_05,0,0);
  pSVar1 = *(String **)(this + 0xb28);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Open Animation Node");
  TTR(local_70,(String *)local_68);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xb28),0);
  plVar2 = *(long **)(this + 0xb28);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC0;
  *(AnimationNodeBlendSpace1DEditor **)(pCVar14 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_001150b8;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar4;
  *(code **)(pCVar14 + 0x38) = _file_opened;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "AnimationNodeBlendSpace1DEditor::_file_opened";
  Callable::Callable((Callable *)local_58,pCVar14);
  StringName::StringName((StringName *)local_68,"file_selected",false);
  (*pcVar3)(plVar2,(String *)local_68,(CowData<char32_t> *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  local_44 = (float)EditorScale::get_scale();
  local_44 = local_44 * __LC83;
  local_48 = 0;
  Control::set_custom_minimum_size((Vector2 *)this);
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



/* AnimationNodeBlendSpace1DEditor::_notification(int) */

void AnimationNodeBlendSpace1DEditor::_notification(int param_1)

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
    goto LAB_00104f21;
  }
  if (iVar6 < 0x20) {
    if (iVar6 == 10) {
LAB_001044d5:
      pSVar1 = *(StringName **)(pSVar7 + 0xac0);
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                    in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_theme_stylebox((StringName *)&local_60,pSVar7);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (local_60 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar3 = local_60;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_60);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      pSVar1 = *(StringName **)(pSVar7 + 0xac8);
      if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
      }
      local_58 = Control::get_theme_color
                           (pSVar7,(StringName *)
                                   &_notification(int)::{lambda()#2}::operator()()::sname);
      Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
      pSVar1 = *(StringName **)(pSVar7 + 0xa30);
      if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
        }
      }
      Control::get_theme_stylebox((StringName *)&local_60,pSVar7);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (local_60 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar3 = local_60;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_60);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      pRVar2 = *(Ref **)(pSVar7 + 0xa38);
      if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa40);
      if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#5}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa48);
      if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#6}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa58);
      if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#7}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xa60);
      if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#8}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      pRVar2 = *(Ref **)(pSVar7 + 0xaa8);
      if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#9}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_60);
      Button::set_button_icon(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      OptionButton::clear();
      pRVar2 = *(Ref **)(pSVar7 + 0xa90);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Continuous");
      TTR((String *)&local_60,(String *)&local_70);
      if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#10}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      iVar6 = (int)(StringName *)&local_60;
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pRVar2 = *(Ref **)(pSVar7 + 0xa90);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Discrete");
      TTR((String *)&local_60,(String *)&local_70);
      if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#11}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pRVar2 = *(Ref **)(pSVar7 + 0xa90);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"Capture");
      TTR((String *)&local_60,(String *)&local_70);
      if (_notification(int)::{lambda()#12}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#12}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      OptionButton::add_icon_item(pRVar2,(String *)&local_78,iVar6);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else if ((iVar6 == 0x11) && (*(long *)(AnimationTreeEditor::singleton + 0xa20) != 0)) {
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          local_78 = local_60;
          local_60 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        cVar4 = AnimationTree::is_state_invalid();
        if (cVar4 != '\0') {
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
        Label::set_text(*(String **)(pSVar7 + 0xac8));
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
  else if (iVar6 == 0x2d) goto LAB_001044d5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104f21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_add_menu_type(int) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_add_menu_type(AnimationNodeBlendSpace1DEditor *this,int param_1)

{
  Variant *pVVar1;
  Ref<AnimationNode> *this_00;
  float fVar2;
  String *pSVar3;
  StringName *pSVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  undefined8 local_e0;
  undefined8 local_d8;
  String local_d0 [8];
  long *local_c8;
  undefined8 local_c0;
  char *local_b8;
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
    local_c8 = (long *)0x0;
    local_b8 = (char *)0x0;
    String::parse_latin1((String *)&local_b8,"AnimationRootNode");
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_b8,(List *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((local_c8 != (long *)0x0) && (lVar7 = *local_c8, lVar7 != 0)) {
      do {
        pSVar3 = *(String **)(this + 0xb28);
        local_c0 = 0;
        local_b8 = "";
        local_b0 = 0;
        String::parse_latin1((StrRange *)&local_c0);
        operator+((char *)&local_b8,(String *)&_LC118);
        EditorFileDialog::add_filter(pSVar3,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != 0);
    }
    EditorFileDialog::popup_file_dialog();
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c8);
  }
  else {
    if (param_1 == 0x3ea) {
      this_00 = (Ref<AnimationNode> *)(this + 0xb30);
      if ((*(long *)(this + 0xb30) == 0) ||
         (pOVar9 = (Object *)
                   __dynamic_cast(*(long *)(this + 0xb30),&Object::typeinfo,
                                  &AnimationRootNode::typeinfo,0), pOVar9 == (Object *)0x0)) {
        Ref<AnimationNode>::unref(this_00);
      }
      else {
        local_b8 = (char *)0x0;
        cVar5 = RefCounted::reference();
        if (cVar5 != '\0') {
          Ref<AnimationRootNode>::unref((Ref<AnimationRootNode> *)&local_b8);
          Ref<AnimationNode>::unref(this_00);
LAB_00105421:
          this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
          pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
          local_b8 = "";
          local_c0 = 0;
          local_b0 = 0;
          String::parse_latin1((StrRange *)&local_c0);
          local_c8 = (long *)0x0;
          local_b8 = "Add Node Point";
          local_b0 = 0xe;
          String::parse_latin1((StrRange *)&local_c8);
          TTR((String *)&local_b8,(String *)&local_c8);
          EditorUndoRedoManager::create_action(pOVar10,(String *)&local_b8,0,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          fVar2 = *(float *)(this + 0xaf8);
          cVar5 = RefCounted::reference();
          pOVar8 = (Object *)0x0;
          if (cVar5 != '\0') {
            pOVar8 = pOVar9;
          }
          StringName::StringName((StringName *)&local_b8,"add_blend_point",false);
          pSVar4 = *(StringName **)(this + 0xa10);
          Variant::Variant((Variant *)local_88,pOVar8);
          Variant::Variant((Variant *)local_70,fVar2);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          local_a8 = (Variant *)local_88;
          pVStack_a0 = (Variant *)local_70;
          EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar4,(Variant **)&local_b8,(int)&local_a8)
          ;
          pVVar11 = (Variant *)local_40;
          do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar11 != (Variant *)local_88);
          if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
            StringName::unref();
          }
          if (((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
             (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          iVar6 = AnimationNodeBlendSpace1D::get_blend_point_count();
          StringName::StringName((StringName *)&local_b8,"remove_blend_point",false);
          pSVar4 = *(StringName **)(this + 0xa10);
          Variant::Variant((Variant *)local_88,iVar6);
          local_70[0] = 0;
          local_70[1] = 0;
          local_68 = (undefined1  [16])0x0;
          local_a8 = (Variant *)local_88;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar10,pSVar4,(Variant **)&local_b8,(int)&local_a8);
          if (Variant::needs_deinit[local_70[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_b8,"_update_space",false);
          local_80 = (undefined1  [16])0x0;
          local_88[0] = 0;
          local_88[1] = 0;
          EditorUndoRedoManager::add_do_methodp(pOVar10,(StringName *)this,(Variant **)&local_b8,0);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_b8,"_update_space",false);
          local_80 = (undefined1  [16])0x0;
          local_88[0] = 0;
          local_88[1] = 0;
          EditorUndoRedoManager::add_undo_methodp
                    (pOVar10,(StringName *)this,(Variant **)&local_b8,0);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
            StringName::unref();
          }
          EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
          this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
          CanvasItem::queue_redraw();
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar9,false);
              return;
            }
            goto LAB_00105937;
          }
          goto LAB_00105120;
        }
        Ref<AnimationRootNode>::unref((Ref<AnimationRootNode> *)&local_b8);
        Ref<AnimationNode>::unref(this_00);
      }
    }
    else {
      if (param_1 != 0x3e9) {
        PopupMenu::get_item_metadata((int)local_88);
        Variant::operator_cast_to_String((Variant *)&local_c0);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
        lVar7 = ClassDB::instantiate((StringName *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        if (lVar7 == 0) {
          _err_print_error("_add_menu_type","editor/plugins/animation_blend_space_1d_editor.cpp",
                           0x1a8,"Parameter \"obj\" is null.",0,0);
        }
        else {
          pOVar8 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&AnimationNode::typeinfo,0);
          if (pOVar8 != (Object *)0x0) {
            cVar5 = RefCounted::init_ref();
            if (cVar5 != '\0') {
              pOVar9 = (Object *)
                       __dynamic_cast(pOVar8,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
              if ((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
                cVar5 = RefCounted::unreference();
                if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar8), cVar5 == '\0')) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  goto LAB_00105421;
                }
LAB_00105255:
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                goto LAB_00105893;
              }
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar9 = (Object *)0x0;
                cVar5 = predelete_handler(pOVar8);
                if (cVar5 != '\0') goto LAB_00105255;
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            goto LAB_00105047;
          }
          _err_print_error("_add_menu_type","editor/plugins/animation_blend_space_1d_editor.cpp",
                           0x1aa,"Parameter \"an\" is null.",0,0);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        goto LAB_00105120;
      }
      lVar7 = EditorSettings::get_singleton();
      pOVar8 = *(Object **)(lVar7 + 0x300);
      if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
        pOVar9 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&AnimationRootNode::typeinfo,0);
        if ((pOVar9 == (Object *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
          cVar5 = RefCounted::unreference();
          if (cVar5 != '\0') {
            pOVar9 = (Object *)0x0;
            cVar5 = predelete_handler(pOVar8);
            if (cVar5 != '\0') goto LAB_00105873;
          }
        }
        else {
          cVar5 = RefCounted::unreference();
          if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar8), cVar5 == '\0'))
          goto LAB_00105421;
LAB_00105873:
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
LAB_00105893:
          if (pOVar9 != (Object *)0x0) goto LAB_00105421;
        }
      }
    }
LAB_00105047:
    pSVar3 = EditorNode::singleton;
    local_b8 = (char *)0x0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Warning!");
    TTR((String *)&local_c8,(String *)&local_c0);
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"");
    local_e0 = 0;
    String::parse_latin1
              ((String *)&local_e0,"This type of node can\'t be used. Only root nodes are allowed.")
    ;
    TTR(local_d0,(String *)&local_e0);
    EditorNode::show_warning(pSVar3,local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
LAB_00105120:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105937:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::_file_opened(String const&) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_file_opened(AnimationNodeBlendSpace1DEditor *this,String *param_1)

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
  local_58 = (Object *)&_LC0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  ResourceLoader::load((String *)&local_58,param_1,(StrRange *)&local_60,1,0);
  if (local_58 == (Object *)0x0) {
    pOVar4 = *(Object **)(this + 0xb30);
    if (pOVar4 == (Object *)0x0) goto LAB_00105a40;
    *(undefined8 *)(this + 0xb30) = 0;
    goto LAB_00105aed;
  }
  pOVar3 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&AnimationNode::typeinfo,0);
  pOVar4 = *(Object **)(this + 0xb30);
  if (pOVar4 != pOVar3) {
    *(Object **)(this + 0xb30) = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar4 != (Object *)0x0) goto LAB_00105aed;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xb30) = 0;
      }
      if (pOVar4 != (Object *)0x0) {
LAB_00105aed:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      if (local_58 == (Object *)0x0) goto LAB_00105a40;
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
LAB_00105a40:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar1 = EditorNode::singleton;
  if (*(long *)(this + 0xb30) == 0) {
    local_58 = (Object *)&_LC0;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x10a844;
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR(local_70,(String *)&local_68);
    local_58 = (Object *)&_LC0;
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = (Object *)0x10db58;
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



/* AnimationNodeBlendSpace1DEditor::_bind_methods() */

void AnimationNodeBlendSpace1DEditor::_bind_methods(void)

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
  pMVar1 = create_method_bind<AnimationNodeBlendSpace1DEditor>(_update_space);
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
  pMVar1 = create_method_bind<AnimationNodeBlendSpace1DEditor>(_update_tool_erase);
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
  pMVar1 = create_method_bind<AnimationNodeBlendSpace1DEditor>(_update_edited_point_pos);
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
/* AnimationNodeBlendSpace1DEditor::_blend_space_gui_input(Ref<InputEvent> const&) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_blend_space_gui_input
          (AnimationNodeBlendSpace1DEditor *this,Ref *param_1)

{
  Variant *pVVar1;
  CowData<String> *this_00;
  CowData<char32_t> *this_01;
  List *pLVar2;
  long *plVar3;
  Vector2i *pVVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  Object *pOVar8;
  String *pSVar9;
  ulong uVar10;
  long lVar11;
  StringName *pSVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  long lVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  Object *local_148;
  Object *local_140;
  Ref<AnimationNode> *local_118;
  long *local_e8;
  undefined8 *local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  String *local_b8;
  long local_b0;
  undefined8 local_a8;
  Variant *pVStack_a0;
  undefined8 local_88;
  undefined8 local_80;
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pLVar2 = *(List **)(AnimationTreeEditor::singleton + 0xa20);
  if (pLVar2 != (List *)0x0) {
    if ((*(long *)param_1 == 0) ||
       (local_140 = (Object *)
                    __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
       local_140 == (Object *)0x0)) {
      BaseButton::is_pressed();
LAB_00106046:
      lVar15 = *(long *)param_1;
      local_140 = (Object *)0x0;
      if (lVar15 != 0) {
LAB_00106062:
        local_148 = (Object *)
                    __dynamic_cast(lVar15,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
        if (local_148 == (Object *)0x0) {
LAB_001060a3:
          pOVar8 = (Object *)
                   __dynamic_cast(lVar15,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
          if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
            cVar5 = Control::has_focus();
            if (cVar5 == '\0') {
              Control::grab_focus();
              CanvasItem::queue_redraw();
            }
            if (this[0xb10] == (AnimationNodeBlendSpace1DEditor)0x0) {
              cVar5 = BaseButton::is_pressed();
            }
            else {
              this[0xb11] = (AnimationNodeBlendSpace1DEditor)0x1;
              fVar16 = (float)AnimationNodeBlendSpace1D::get_max_space();
              fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
              uVar21 = Control::get_size();
              uVar22 = InputEventMouse::get_position();
              auVar24._0_4_ = (float)uVar22 - (float)*(undefined8 *)(this + 0xb14);
              auVar24._4_4_ =
                   (float)((ulong)uVar22 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(this + 0xb14) >> 0x20);
              auVar24._8_4_ = (float)extraout_XMM0_Qb - 0.0;
              auVar24._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) - 0.0;
              auVar25._8_8_ = _LC146;
              auVar25._0_8_ = uVar21;
              auVar24 = divps(auVar24,auVar25);
              *(ulong *)(this + 0xb1c) =
                   CONCAT44(auVar24._4_4_ * (fVar16 - fVar17) * 0.0,
                            auVar24._0_4_ * (fVar16 - fVar17));
              CanvasItem::queue_redraw();
              _update_edited_point_pos(this);
              cVar5 = BaseButton::is_pressed();
            }
            if ((cVar5 != '\0') && (uVar10 = InputEventMouse::get_button_mask(), (uVar10 & 1) != 0))
            {
              fVar16 = (float)InputEventMouse::get_position();
              fVar17 = (float)Control::get_size();
              fVar18 = (float)AnimationNodeBlendSpace1D::get_max_space();
              fVar19 = (float)AnimationNodeBlendSpace1D::get_min_space();
              fVar20 = (float)AnimationNodeBlendSpace1D::get_min_space();
              Variant::Variant((Variant *)&local_88,fVar20 + (fVar18 - fVar19) * (fVar16 / fVar17));
              get_blend_position_path((AnimationNodeBlendSpace1DEditor *)&local_b0);
              Object::set((StringName *)pLVar2,(Variant *)&local_b0,(bool *)&local_88);
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_88] != '\0') {
                Variant::_clear_internal();
              }
              CanvasItem::queue_redraw();
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
          if (local_148 != (Object *)0x0) {
LAB_00106117:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
              (**(code **)(*(long *)local_148 + 0x140))(local_148);
              Memory::free_static(local_148,false);
            }
          }
        }
        else {
          cVar5 = RefCounted::reference();
          if (cVar5 != '\0') {
            cVar5 = InputEvent::is_pressed();
            if ((cVar5 != '\0') &&
               ((((cVar5 = BaseButton::is_pressed(), cVar5 != '\0' &&
                  (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 2)) ||
                 ((iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 1 &&
                  (cVar5 = BaseButton::is_pressed(), cVar5 != '\0')))) &&
                (this[0xa18] == (AnimationNodeBlendSpace1DEditor)0x0)))) {
              PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xad8),0));
              PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xae0),0));
              this_00 = (CowData<String> *)(this + 0xaf0);
              CowData<String>::resize<false>(this_00,0);
              local_e8 = (long *)0x0;
              StringName::StringName((StringName *)&local_b0,"AnimationRootNode",false);
              ClassDB::get_inheriters_from_class((StringName *)&local_b0,(List *)&local_e8);
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
              List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
                        ((List<StringName,DefaultAllocator> *)&local_e8);
              pSVar9 = *(String **)(this + 0xad8);
              uVar21 = *(undefined8 *)(this + 0xae0);
              local_b8 = (String *)0x0;
              String::parse_latin1((String *)&local_b8,"");
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"Add Animation");
              TTR((String *)&local_b0,(String *)&local_c0);
              PopupMenu::add_submenu_node_item(pSVar9,(PopupMenu *)&local_b0,(int)uVar21);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_e0 = (undefined8 *)0x0;
              AnimationMixer::get_animation_list(pLVar2);
              if (local_e0 != (undefined8 *)0x0) {
                for (plVar3 = (long *)*local_e0; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1])
                {
                  lVar15 = *plVar3;
                  uVar21 = *(undefined8 *)(this + 0xae0);
                  if (lVar15 == 0) {
                    local_b0 = 0;
                  }
                  else {
                    local_b0 = 0;
                    if (*(char **)(lVar15 + 8) == (char *)0x0) {
                      if (*(long *)(lVar15 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_b0,(CowData *)(lVar15 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_b0,*(char **)(lVar15 + 8));
                    }
                  }
                  if ((_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                       sname == '\0') &&
                     (iVar6 = __cxa_guard_acquire(&_blend_space_gui_input(Ref<InputEvent>const&)::
                                                   {lambda()#1}::operator()()::sname), iVar6 != 0))
                  {
                    _scs_create((char *)&_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}
                                         ::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}::
                                  operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&_blend_space_gui_input(Ref<InputEvent>const&)::{lambda()#1}
                                         ::operator()()::sname);
                  }
                  Control::get_editor_theme_icon((StringName *)&local_b8);
                  PopupMenu::add_icon_item
                            (uVar21,(String *)&local_b8,(StringName *)&local_b0,0xffffffff);
                  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  lVar15 = *plVar3;
                  if (lVar15 == 0) {
                    local_b0 = 0;
                  }
                  else {
                    local_b0 = 0;
                    if (*(char **)(lVar15 + 8) == (char *)0x0) {
                      if (*(long *)(lVar15 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_b0,(CowData *)(lVar15 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_b0,*(char **)(lVar15 + 8));
                    }
                  }
                  if (*(long *)(this + 0xaf0) == 0) {
                    lVar15 = 1;
                  }
                  else {
                    lVar15 = *(long *)(*(long *)(this + 0xaf0) + -8) + 1;
                  }
                  iVar6 = CowData<String>::resize<false>(this_00,lVar15);
                  if (iVar6 == 0) {
                    if (*(long *)(this + 0xaf0) == 0) {
                      lVar11 = -1;
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = *(long *)(*(long *)(this + 0xaf0) + -8);
                      lVar11 = lVar15 + -1;
                      if (-1 < lVar11) {
                        CowData<String>::_copy_on_write(this_00);
                        this_01 = (CowData<char32_t> *)(*(long *)(this + 0xaf0) + lVar11 * 8);
                        if (*(long *)this_01 != local_b0) {
                          CowData<char32_t>::_ref(this_01,(CowData *)&local_b0);
                        }
                        goto LAB_00106927;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar15,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true",0,0);
                  }
LAB_00106927:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                }
              }
              if ((local_e8 != (long *)0x0) &&
                 (pSVar12 = (StringName *)*local_e8, pSVar12 != (StringName *)0x0)) {
                do {
                  lVar15 = *(long *)pSVar12;
                  if (lVar15 == 0) {
                    local_b0 = 0;
                  }
                  else {
                    local_b0 = 0;
                    if (*(char **)(lVar15 + 8) == (char *)0x0) {
                      if (*(long *)(lVar15 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_b0,(CowData *)(lVar15 + 0x10));
                      }
                    }
                    else {
                      String::parse_latin1((String *)&local_b0,*(char **)(lVar15 + 8));
                    }
                  }
                  String::replace_first((char *)&local_d8,(char *)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  cVar5 = String::operator==((String *)&local_d8,"Animation");
                  if (((cVar5 == '\0') &&
                      (cVar5 = String::operator==((String *)&local_d8,"StartState"), cVar5 == '\0'))
                     && (cVar5 = String::operator==((String *)&local_d8,"EndState"), cVar5 == '\0'))
                  {
                    uVar7 = PopupMenu::get_item_count();
                    local_b8 = (String *)0x0;
                    uVar21 = *(undefined8 *)(this + 0xad8);
                    if (local_d8 != 0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d8);
                    }
                    local_c8 = 0;
                    String::parse_latin1((String *)&local_c8,"");
                    local_d0 = 0;
                    String::parse_latin1((String *)&local_d0,"Add %s");
                    TTR((String *)&local_c0,(String *)&local_d0);
                    vformat<String>((StringName *)&local_b0,(String *)&local_c0,(String *)&local_b8)
                    ;
                    PopupMenu::add_item(uVar21,(StringName *)&local_b0,uVar7,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    uVar21 = *(undefined8 *)(this + 0xad8);
                    Variant::Variant((Variant *)&local_88,pSVar12);
                    PopupMenu::set_item_metadata((int)uVar21,(Variant *)(ulong)uVar7);
                    if (Variant::needs_deinit[(int)local_88] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  pSVar12 = *(StringName **)(pSVar12 + 8);
                } while (pSVar12 != (StringName *)0x0);
              }
              local_118 = (Ref<AnimationNode> *)&local_c8;
              lVar15 = EditorSettings::get_singleton();
              pOVar8 = *(Object **)(lVar15 + 0x300);
              iVar6 = (int)(StringName *)&local_b0;
              if (pOVar8 == (Object *)0x0) {
                local_c8 = 0;
              }
              else {
                cVar5 = RefCounted::reference();
                local_c8 = 0;
                if (cVar5 != '\0') {
                  lVar15 = __dynamic_cast(pOVar8,&Object::typeinfo,&AnimationNode::typeinfo,0);
                  if ((lVar15 != 0) &&
                     (local_c8 = lVar15, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                    local_c8 = 0;
                  }
                  cVar5 = RefCounted::unreference();
                  lVar15 = local_c8;
                  if ((cVar5 != '\0') &&
                     (cVar5 = predelete_handler(pOVar8), lVar15 = local_c8, cVar5 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  if (lVar15 != 0) {
                    local_b0 = 0;
                    PopupMenu::add_separator(*(String **)(this + 0xad8),iVar6);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    uVar21 = *(undefined8 *)(this + 0xad8);
                    local_b8 = (String *)0x0;
                    String::parse_latin1((String *)&local_b8,"");
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"Paste");
                    TTR((String *)&local_b0,(String *)&local_c0);
                    PopupMenu::add_item(uVar21,(StringName *)&local_b0,0x3e9,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  }
                }
              }
              local_b0 = 0;
              PopupMenu::add_separator(*(String **)(this + 0xad8),iVar6);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              uVar21 = *(undefined8 *)(this + 0xad8);
              local_b8 = (String *)0x0;
              String::parse_latin1((String *)&local_b8,"");
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"Load...");
              TTR((String *)&local_b0,(String *)&local_c0);
              PopupMenu::add_item(uVar21,(StringName *)&local_b0,1000,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              pVVar4 = *(Vector2i **)(this + 0xad8);
              uVar21 = InputEventMouse::get_position();
              uVar22 = Control::get_screen_position();
              local_a8 = (Variant *)
                         CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                                  (float)uVar21 + (float)uVar22);
              local_88 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
              Window::set_position(pVVar4);
              Window::reset_size();
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(long **)(this + 0xad8) + 0x240))();
              fVar16 = (float)Control::get_size();
              fVar17 = (float)InputEventMouse::get_position();
              *(float *)(this + 0xaf8) = fVar17 / fVar16;
              fVar16 = (float)AnimationNodeBlendSpace1D::get_max_space();
              fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
              *(float *)(this + 0xaf8) = (fVar16 - fVar17) * *(float *)(this + 0xaf8);
              fVar16 = (float)AnimationNodeBlendSpace1D::get_min_space();
              *(float *)(this + 0xaf8) = fVar16 + *(float *)(this + 0xaf8);
              cVar5 = BaseButton::is_pressed();
              if (cVar5 != '\0') {
                fVar16 = (float)AnimationNodeBlendSpace1D::get_snap();
                dVar23 = (double)Math::snapped((double)*(float *)(this + 0xaf8),(double)fVar16);
                *(float *)(this + 0xaf8) = (float)dVar23;
              }
              Ref<AnimationNode>::unref(local_118);
              List<StringName,DefaultAllocator>::~List
                        ((List<StringName,DefaultAllocator> *)&local_e0);
              List<StringName,DefaultAllocator>::~List
                        ((List<StringName,DefaultAllocator> *)&local_e8);
            }
            cVar5 = InputEvent::is_pressed();
            if (((cVar5 != '\0') && (cVar5 = BaseButton::is_pressed(), cVar5 != '\0')) &&
               (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 1)) {
              CanvasItem::queue_redraw();
              *(undefined4 *)(this + 0xab0) = 0xffffffff;
              _update_tool_erase(this);
              lVar15 = *(long *)(this + 0xb08);
              if (lVar15 != 0) {
                lVar11 = 0;
                do {
                  if (*(long *)(lVar15 + -8) <= lVar11) break;
                  fVar16 = *(float *)(lVar15 + lVar11 * 4);
                  fVar17 = (float)InputEventMouse::get_position();
                  fVar18 = (float)EditorScale::get_scale();
                  if (ABS(fVar16 - fVar17) < fVar18 * __LC144) {
                    *(int *)(this + 0xab0) = (int)lVar11;
                    AnimationNodeBlendSpace1D::get_blend_point_node
                              ((int)(Ref<AnimationRootNode> *)&local_b0);
                    local_b8 = (String *)0x0;
                    if ((local_b0 == 0) ||
                       (pSVar9 = (String *)
                                 __dynamic_cast(local_b0,&Object::typeinfo,&AnimationNode::typeinfo,
                                                0), pSVar9 == (String *)0x0)) {
LAB_00106395:
                      pSVar9 = (String *)0x0;
                    }
                    else {
                      local_b8 = pSVar9;
                      cVar5 = RefCounted::reference();
                      if (cVar5 == '\0') {
                        local_b8 = (String *)0x0;
                        goto LAB_00106395;
                      }
                    }
                    Ref<AnimationRootNode>::unref((Ref<AnimationRootNode> *)&local_b0);
                    pOVar8 = EditorNode::singleton;
                    local_b0 = 0;
                    String::parse_latin1((String *)&local_b0,"");
                    EditorNode::push_item
                              (pOVar8,pSVar9,SUB81((Ref<AnimationRootNode> *)&local_b0,0));
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    this[0xb10] = (AnimationNodeBlendSpace1DEditor)0x1;
                    uVar21 = InputEventMouse::get_position();
                    *(undefined8 *)(this + 0xb14) = uVar21;
                    _update_tool_erase(this);
                    _update_edited_point_pos(this);
                    Ref<AnimationNode>::unref((Ref<AnimationNode> *)&local_b8);
                    cVar5 = RefCounted::unreference();
                    if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_148), cVar5 != '\0')) {
                      (**(code **)(*(long *)local_148 + 0x140))(local_148);
                      Memory::free_static(local_148,false);
                    }
                    if ((local_140 == (Object *)0x0) ||
                       (cVar5 = RefCounted::unreference(), cVar5 == '\0')) goto LAB_00106142;
                    goto LAB_00106448;
                  }
                  lVar15 = *(long *)(this + 0xb08);
                  lVar11 = lVar11 + 1;
                } while (lVar15 != 0);
              }
            }
            cVar5 = InputEvent::is_pressed();
            if ((((cVar5 == '\0') && (this[0xb10] != (AnimationNodeBlendSpace1DEditor)0x0)) &&
                (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 1)) &&
               (this[0xa18] == (AnimationNodeBlendSpace1DEditor)0x0)) {
              if (this[0xb11] != (AnimationNodeBlendSpace1DEditor)0x0) {
                fVar16 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                                          ((int)*(undefined8 *)(this + 0xa10));
                fVar16 = fVar16 + *(float *)(this + 0xb1c);
                cVar5 = BaseButton::is_pressed();
                if (cVar5 != '\0') {
                  fVar17 = (float)AnimationNodeBlendSpace1D::get_snap();
                  dVar23 = (double)Math::snapped((double)fVar16,(double)fVar17);
                  fVar16 = (float)dVar23;
                }
                this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x1;
                pOVar8 = (Object *)EditorUndoRedoManager::get_singleton();
                local_b8 = (String *)0x0;
                String::parse_latin1((String *)&local_b8,"");
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"Move Node Point");
                TTR((String *)&local_b0,(String *)&local_c0);
                EditorUndoRedoManager::create_action(pOVar8,(String *)&local_b0,0,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                iVar6 = *(int *)(this + 0xab0);
                StringName::StringName((StringName *)&local_b0,"set_blend_point_position",false);
                pSVar12 = *(StringName **)(this + 0xa10);
                Variant::Variant((Variant *)&local_88,iVar6);
                Variant::Variant(local_70,fVar16);
                local_50 = (undefined1  [16])0x0;
                local_58 = 0;
                local_a8 = (Variant *)&local_88;
                pVStack_a0 = local_70;
                EditorUndoRedoManager::add_do_methodp
                          (pOVar8,pSVar12,(Variant **)&local_b0,(int)&local_a8);
                pVVar14 = (Variant *)local_40;
                pVVar13 = pVVar14;
                do {
                  pVVar1 = pVVar13 + -0x18;
                  pVVar13 = pVVar13 + -0x18;
                  if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                    Variant::_clear_internal();
                  }
                } while (pVVar13 != (Variant *)&local_88);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                fVar16 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                                          ((int)*(undefined8 *)(this + 0xa10));
                iVar6 = *(int *)(this + 0xab0);
                StringName::StringName((StringName *)&local_b0,"set_blend_point_position",false);
                pSVar12 = *(StringName **)(this + 0xa10);
                Variant::Variant((Variant *)&local_88,iVar6);
                Variant::Variant(local_70,fVar16);
                local_50 = (undefined1  [16])0x0;
                local_58 = 0;
                local_a8 = (Variant *)&local_88;
                pVStack_a0 = local_70;
                EditorUndoRedoManager::add_undo_methodp
                          (pOVar8,pSVar12,(Variant **)&local_b0,(int)&local_a8);
                do {
                  pVVar13 = pVVar14 + -0x18;
                  pVVar14 = pVVar14 + -0x18;
                  if (Variant::needs_deinit[*(int *)pVVar13] != '\0') {
                    Variant::_clear_internal();
                  }
                } while (pVVar14 != (Variant *)&local_88);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_b0,"_update_space",false);
                EditorUndoRedoManager::add_do_method<>
                          ((EditorUndoRedoManager *)pOVar8,(Object *)this,(StringName *)&local_b0);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_b0,"_update_space",false);
                EditorUndoRedoManager::add_undo_method<>
                          ((EditorUndoRedoManager *)pOVar8,(Object *)this,(StringName *)&local_b0);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_b0,"_update_edited_point_pos",false);
                EditorUndoRedoManager::add_do_method<>
                          ((EditorUndoRedoManager *)pOVar8,(Object *)this,(StringName *)&local_b0);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_b0,"_update_edited_point_pos",false);
                EditorUndoRedoManager::add_undo_method<>
                          ((EditorUndoRedoManager *)pOVar8,(Object *)this,(StringName *)&local_b0);
                if ((StringName::configured != '\0') && (local_b0 != 0)) {
                  StringName::unref();
                }
                EditorUndoRedoManager::commit_action(SUB81(pOVar8,0));
                this[0xad0] = (AnimationNodeBlendSpace1DEditor)0x0;
                _update_edited_point_pos(this);
              }
              *(undefined2 *)(this + 0xb10) = 0;
              CanvasItem::queue_redraw();
            }
            cVar5 = InputEvent::is_pressed();
            if (((cVar5 == '\0') && (cVar5 = BaseButton::is_pressed(), cVar5 != '\0')) &&
               (iVar6 = InputEventMouseButton::get_button_index(), iVar6 == 1)) {
              fVar16 = (float)InputEventMouse::get_position();
              fVar17 = (float)Control::get_size();
              fVar18 = (float)AnimationNodeBlendSpace1D::get_max_space();
              fVar19 = (float)AnimationNodeBlendSpace1D::get_min_space();
              fVar20 = (float)AnimationNodeBlendSpace1D::get_min_space();
              Variant::Variant((Variant *)&local_88,fVar20 + (fVar18 - fVar19) * (fVar16 / fVar17));
              get_blend_position_path((AnimationNodeBlendSpace1DEditor *)&local_b0);
              Object::set((StringName *)pLVar2,(Variant *)&local_b0,(bool *)&local_88);
              if ((StringName::configured != '\0') && (local_b0 != 0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_88] != '\0') {
                Variant::_clear_internal();
              }
              CanvasItem::queue_redraw();
            }
            lVar15 = *(long *)param_1;
            if (lVar15 != 0) goto LAB_001060a3;
            goto LAB_00106117;
          }
          lVar15 = *(long *)param_1;
          if (lVar15 != 0) {
            local_148 = (Object *)0x0;
            goto LAB_001060a3;
          }
        }
        if (local_140 != (Object *)0x0) goto LAB_00106130;
      }
    }
    else {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        BaseButton::is_pressed();
        goto LAB_00106046;
      }
      cVar5 = BaseButton::is_pressed();
      if ((((cVar5 != '\0') && (cVar5 = InputEvent::is_pressed(), cVar5 != '\0')) &&
          (iVar6 = InputEventKey::get_keycode(), iVar6 == 0x400008)) &&
         ((cVar5 = (**(code **)(*(long *)local_140 + 0x1c8))(), cVar5 == '\0' &&
          (*(int *)(this + 0xab0) != -1)))) {
        if (this[0xa18] == (AnimationNodeBlendSpace1DEditor)0x0) {
          _erase_selected(this);
        }
        Control::accept_event();
      }
      lVar15 = *(long *)param_1;
      if (lVar15 != 0) goto LAB_00106062;
LAB_00106130:
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
LAB_00106448:
        cVar5 = predelete_handler(local_140);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)local_140 + 0x140))(local_140);
          if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(local_140,false);
            return;
          }
          goto LAB_00107714;
        }
      }
    }
  }
LAB_00106142:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107714:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationNodeBlendSpace1DEditor::_blend_space_draw() */

void __thiscall
AnimationNodeBlendSpace1DEditor::_blend_space_draw(AnimationNodeBlendSpace1DEditor *this)

{
  CowData<float> *this_00;
  bool *pbVar1;
  Vector2 *pVVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  float fVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  AnimationNodeBlendSpace1DEditor *local_e0;
  float local_cc;
  Object *local_b0;
  Object *local_a8;
  Object *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  float fStack_7c;
  undefined1 local_78 [12];
  float fStack_6c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = *(bool **)(AnimationTreeEditor::singleton + 0xa20);
  if (pbVar1 != (bool *)0x0) {
    if ((_blend_space_draw()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#1}::operator()()::sname),
       iVar12 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#1}::operator()()::sname);
    }
    auVar30 = Control::get_theme_color
                        ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
    local_88 = auVar30._0_8_;
    uStack_80 = auVar30._8_4_;
    fStack_7c = auVar30._12_4_;
    fStack_6c = _LC149 * fStack_7c;
    local_78 = auVar30._0_12_;
    if ((_blend_space_draw()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#2}::operator()()::sname),
       iVar12 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#2}::operator()()::sname);
    }
    Control::get_theme_font((StringName *)&local_b0,(StringName *)this);
    if ((_blend_space_draw()::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#3}::operator()()::sname),
       iVar12 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#3}::operator()()::sname);
    }
    uVar9 = Control::get_theme_font_size
                      ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
    if ((_blend_space_draw()::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#4}::operator()()::sname),
       iVar12 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_a8);
    if ((_blend_space_draw()::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#5}::operator()()::sname),
       iVar12 != 0)) {
      _scs_create((char *)&_blend_space_draw()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_blend_space_draw()::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_a0);
    uVar19 = Control::get_size();
    fVar22 = (float)uVar19;
    fVar24 = (float)((ulong)uVar19 >> 0x20);
    cVar8 = Control::has_focus();
    if (cVar8 != '\0') {
      if ((_blend_space_draw()::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#6}::operator()()::sname),
         iVar12 != 0)) {
        _scs_create((char *)&_blend_space_draw()::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#6}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_blend_space_draw()::{lambda()#6}::operator()()::sname);
      }
      _local_68 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_blend_space_draw()::{lambda()#6}::operator()()::sname);
      local_58 = 0;
      uStack_50 = uVar19;
      CanvasItem::draw_rect
                (*(Rect2 **)(this + 0xab8),(Color *)&local_58,SUB81(local_68,0),(float)_LC153,false)
      ;
    }
    pVVar2 = *(Vector2 **)(this + 0xab8);
    fVar21 = (float)_LC153 + fVar22;
    fVar23 = _LC153._4_4_ + fVar24;
    fVar16 = (float)EditorScale::get_scale();
    fVar16 = roundf(fVar16);
    local_58 = CONCAT44(fVar23,0x3f800000);
    bVar11 = SUB81(&local_88,0);
    local_68 = (undefined1  [8])CONCAT44(fVar23,fVar21);
    CanvasItem::draw_line(pVVar2,(Vector2 *)&local_58,(Color *)local_68,fVar16,bVar11);
    fVar16 = (float)AnimationNodeBlendSpace1D::get_min_space();
    if (fVar16 < 0.0) {
      fVar16 = (float)AnimationNodeBlendSpace1D::get_min_space();
      fVar21 = (float)AnimationNodeBlendSpace1D::get_max_space();
      fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
      pVVar2 = *(Vector2 **)(this + 0xab8);
      fVar26 = fVar22 * ((0.0 - fVar16) / (fVar21 - fVar17));
      fVar16 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar16);
      fVar17 = (float)EditorScale::get_scale();
      fVar16 = _LC156;
      local_cc = _LC156;
      local_58 = CONCAT44(fVar24 - fVar17 * _LC156,fVar26);
      local_68 = (undefined1  [8])CONCAT44(fVar23,fVar26);
      CanvasItem::draw_line(pVVar2,(Vector2 *)local_68,(Color *)&local_58,fVar21,bVar11);
      uVar19 = *(undefined8 *)(this + 0xab8);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"0");
      fVar21 = (float)EditorScale::get_scale();
      fVar23 = (float)(**(code **)(*(long *)local_b0 + 0x218))(local_b0,uVar9);
      fVar17 = (float)(**(code **)(*(long *)local_b0 + 0x220))(local_b0,uVar9);
      fVar18 = (float)EditorScale::get_scale();
      local_58 = CONCAT44(((fVar24 - (fVar21 + fVar21)) - fVar23) + fVar17,fVar18 + fVar18 + fVar26)
      ;
      CanvasItem::draw_string
                (uVar19,(StringName *)&local_b0,(StringName *)&local_58,(String *)&local_98,0,uVar9,
                 &local_88,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      pVVar2 = *(Vector2 **)(this + 0xab8);
      fVar21 = (float)EditorScale::get_scale();
      fVar21 = roundf(fVar21);
      local_58 = (ulong)(uint)fVar26;
      fVar23 = (float)EditorScale::get_scale();
      local_68 = (undefined1  [8])CONCAT44(fVar24 - fVar23 * fVar16,fVar26);
      CanvasItem::draw_line(pVVar2,(Vector2 *)local_68,(Color *)&local_58,fVar21,SUB81(local_78,0));
    }
    else {
      local_cc = _LC156;
    }
    local_e0 = (AnimationNodeBlendSpace1DEditor *)&local_98;
    cVar8 = BaseButton::is_pressed();
    if (cVar8 != '\0') {
      fStack_6c = (float)((double)fStack_7c * __LC158);
      fVar16 = (float)AnimationNodeBlendSpace1D::get_snap();
      if (0.0 < fVar16) {
        iVar12 = 0;
        if (0.0 < fVar22) {
          fVar16 = 0.0;
          iVar10 = -1;
          do {
            fVar21 = (float)AnimationNodeBlendSpace1D::get_min_space();
            fVar23 = (float)AnimationNodeBlendSpace1D::get_max_space();
            fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
            fVar18 = (float)AnimationNodeBlendSpace1D::get_snap();
            iVar13 = (int)((fVar21 + (fVar16 * (fVar23 - fVar17)) / fVar22) / fVar18);
            if ((0 < iVar12) && (iVar13 != iVar10)) {
              pVVar2 = *(Vector2 **)(this + 0xab8);
              fVar21 = (float)EditorScale::get_scale();
              fVar21 = roundf(fVar21);
              local_58 = (ulong)(uint)fVar16;
              local_68 = (undefined1  [8])CONCAT44(fVar24,fVar16);
              CanvasItem::draw_line
                        (pVVar2,(Vector2 *)&local_58,(Color *)local_68,fVar21,SUB81(local_78,0));
            }
            iVar12 = iVar12 + 1;
            fVar16 = (float)iVar12;
            iVar10 = iVar13;
          } while (fVar16 < fVar22);
        }
      }
    }
    this_00 = (CowData<float> *)(this + 0xb08);
    CowData<float>::resize<false>(this_00,0);
    for (iVar12 = 0; iVar10 = AnimationNodeBlendSpace1D::get_blend_point_count(), iVar12 < iVar10;
        iVar12 = iVar12 + 1) {
      fVar16 = (float)AnimationNodeBlendSpace1D::get_blend_point_position
                                ((int)*(undefined8 *)(this + 0xa10));
      if (((this[0xa18] == (AnimationNodeBlendSpace1DEditor)0x0) &&
          (this[0xb11] != (AnimationNodeBlendSpace1DEditor)0x0)) &&
         (*(int *)(this + 0xab0) == iVar12)) {
        fVar16 = fVar16 + *(float *)(this + 0xb1c);
        cVar8 = BaseButton::is_pressed();
        if (cVar8 != '\0') {
          fVar21 = (float)AnimationNodeBlendSpace1D::get_snap();
          dVar20 = (double)Math::snapped((double)fVar16,(double)fVar21);
          fVar16 = (float)dVar20;
        }
      }
      fVar21 = (float)AnimationNodeBlendSpace1D::get_min_space();
      fVar23 = (float)AnimationNodeBlendSpace1D::get_max_space();
      fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
      fVar16 = ((fVar16 - fVar21) / (fVar23 - fVar17)) * fVar22;
      if (*(long *)(this + 0xb08) == 0) {
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(*(long *)(this + 0xb08) + -8) + 1;
      }
      iVar10 = CowData<float>::resize<false>(this_00,lVar14);
      if (iVar10 == 0) {
        if (*(long *)(this + 0xb08) == 0) {
          lVar15 = -1;
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(*(long *)(this + 0xb08) + -8);
          lVar15 = lVar14 + -1;
          if (-1 < lVar15) {
            CowData<float>::_copy_on_write(this_00);
            *(float *)(*(long *)(this + 0xb08) + lVar15 * 4) = fVar16;
            goto LAB_00107aca;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar14,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00107aca:
      local_68._4_4_ = _LC149 * fVar24;
      local_68._0_4_ = fVar16;
      uVar19 = (**(code **)(*(long *)local_a8 + 0x1d8))();
      local_68 = (undefined1  [8])
                 CONCAT44((float)local_68._4_4_ - _UNK_001154bc * (float)((ulong)uVar19 >> 0x20),
                          (float)local_68._0_4_ - _LC149 * (float)uVar19);
      local_68 = (undefined1  [8])Vector2::floor();
      local_58 = CONCAT44(_LC155,_LC155);
      uStack_50 = CONCAT44(_LC155,_LC155);
      if (*(int *)(this + 0xab0) == iVar12) {
        CanvasItem::draw_texture(*(Ref **)(this + 0xab8),(Vector2 *)&local_a0,(Color *)local_68);
      }
      else {
        CanvasItem::draw_texture(*(Ref **)(this + 0xab8),(Vector2 *)&local_a8,(Color *)local_68);
      }
    }
    uStack_60 = CONCAT44(_LC155,_UNK_001154d8);
    local_68 = (undefined1  [8])__LC161;
    cVar8 = BaseButton::is_pressed();
    if (cVar8 == '\0') {
      uStack_60 = CONCAT44(_LC149 * fStack_7c,uStack_80);
      local_68 = (undefined1  [8])local_88;
    }
    else {
      if ((_blend_space_draw()::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&_blend_space_draw()::{lambda()#7}::operator()()::sname),
         iVar12 != 0)) {
        _scs_create((char *)&_blend_space_draw()::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_blend_space_draw()::{lambda()#7}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_blend_space_draw()::{lambda()#7}::operator()()::sname);
      }
      _local_68 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_blend_space_draw()::{lambda()#7}::operator()()::sname);
    }
    get_blend_position_path(local_e0);
    Object::get((StringName *)&local_58,pbVar1);
    fVar16 = Variant::operator_cast_to_float((Variant *)&local_58);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    fVar21 = (float)AnimationNodeBlendSpace1D::get_min_space();
    fVar23 = (float)AnimationNodeBlendSpace1D::get_max_space();
    fVar17 = (float)AnimationNodeBlendSpace1D::get_min_space();
    fVar22 = ((fVar16 - fVar21) / (fVar23 - fVar17)) * fVar22;
    fVar24 = _LC149 * fVar24;
    uVar19 = EditorScale::get_scale();
    local_cc = (float)uVar19 * local_cc;
    fVar16 = (float)((ulong)uVar19 >> 0x20);
    auVar7._4_8_ = 0;
    auVar7._0_4_ = fVar24 - local_cc;
    auVar28._0_12_ = auVar7 << 0x20;
    auVar28._12_4_ = 0.0 - fVar16;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = fVar22 + 0.0;
    auVar3._4_8_ = auVar28._8_8_;
    auVar3._0_4_ = fVar24 + 0.0;
    auVar27._0_8_ = auVar3._0_8_ << 0x20;
    auVar27._8_4_ = fVar16 + 0.0;
    auVar5._4_8_ = auVar27._4_8_;
    auVar5._0_4_ = fVar22 - local_cc;
    uVar19 = EditorScale::get_scale();
    pVVar2 = *(Vector2 **)(this + 0xab8);
    fVar16 = (float)uVar19 * __LC162;
    auVar30._0_12_ = ZEXT812(0);
    fVar21 = (float)((ulong)uVar19 >> 0x20);
    auVar30._12_4_ = fVar21;
    auVar4._4_8_ = auVar30._8_8_;
    auVar4._0_4_ = fVar24 + 0.0;
    auVar25._0_8_ = auVar4._0_8_ << 0x20;
    auVar25._8_4_ = fVar21 + 0.0;
    auVar6._4_8_ = auVar25._4_8_;
    auVar6._0_4_ = fVar22 - fVar16;
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    bVar11 = SUB81((Vector2 *)local_68,0);
    local_90 = CONCAT44(fVar24 + 0.0,local_cc + fVar22);
    local_58 = CONCAT44(fVar24 + 0.0,fVar16 + fVar22);
    CanvasItem::draw_line(pVVar2,(Vector2 *)&local_90,(Color *)&local_58,fVar21,bVar11);
    pVVar2 = *(Vector2 **)(this + 0xab8);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    local_90 = auVar5._0_8_;
    local_58 = auVar6._0_8_;
    CanvasItem::draw_line(pVVar2,(Vector2 *)&local_90,(Color *)&local_58,fVar21,bVar11);
    pVVar2 = *(Vector2 **)(this + 0xab8);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    local_90 = CONCAT44(local_cc + fVar24,fVar22 + 0.0);
    local_58 = CONCAT44(fVar24 + fVar16,fVar22 + 0.0);
    CanvasItem::draw_line(pVVar2,(Vector2 *)&local_90,(Color *)&local_58,fVar21,bVar11);
    pVVar2 = *(Vector2 **)(this + 0xab8);
    fVar21 = (float)EditorScale::get_scale();
    fVar21 = roundf(fVar21 + fVar21);
    local_58 = CONCAT44(fVar24 - fVar16,fVar22 + 0.0);
    local_90 = auVar29._0_8_;
    CanvasItem::draw_line(pVVar2,(Vector2 *)&local_90,(Color *)&local_58,fVar21,bVar11);
    if (local_a0 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_a0);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
          Memory::free_static(local_a0,false);
        }
      }
    }
    if (local_a8 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_a8);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
          Memory::free_static(local_a8,false);
        }
      }
    }
    if (local_b0 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_b0);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
          Memory::free_static(local_b0,false);
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this)

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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::
get_argument_count(CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   double>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00115148;
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



/* AnimationNodeBlendSpace1DEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AnimationNodeBlendSpace1DEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationNodeBlendSpace1DEditor::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeBlendSpace1DEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC0;
LAB_00108dc4:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00108d70;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00108d70;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_00108e16:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_00108d70;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00108d70;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC0;
            uVar4 = 0;
            goto LAB_00108e16;
          }
          uVar8 = 0;
          pbVar14 = &_LC0;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_00108dc4;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_00108d70;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_00108d70;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_00108d98;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_00108d70;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_00108d70;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_00108d98:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_00108d70:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_0010919d;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_00108f9a;
LAB_0010919d:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC0;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC0;
          goto LAB_0010901a;
        }
LAB_0010907a:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_00108f90;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_00108f90;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_00108f90;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_00108f90;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_0010907a;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_00108f90;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_00108f90;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_00108f90;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_00108fc5;
LAB_00109014:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010901a:
          if (bVar5 == 0) goto LAB_00108f90;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_00108f90;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_00108f90;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00108f90;
          }
        }
      }
LAB_00108f60:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC0;
      if (pbVar14 != (byte *)0x0) goto LAB_00109014;
LAB_00108fc5:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_00108f90;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_00108f90;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_00108f90;
        }
        goto LAB_00108f60;
      }
    }
LAB_00108f90:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_00108f9a:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_00109260:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x00109311;
        uVar7 = 0;
        pbVar11 = &_LC0;
LAB_0010929c:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_0010942b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010942b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010942b;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010942b;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_0010933c;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_0010929c;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010942b;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010942b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010942b;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010942b;
        }
      }
      if (param_1 == 1) goto LAB_00109400;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC0;
LAB_0010933c:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_001093af;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_0010942b;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_0010942b;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010942b;
      }
      goto LAB_00109390;
    }
  }
  goto LAB_0010942b;
code_r0x00109311:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC0;
  uVar8 = 0;
LAB_001093af:
  if (bVar4 == 0) goto LAB_0010942b;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_0010942b;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_0010942b;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010942b;
  }
LAB_00109390:
  if (param_1 == 1) {
LAB_00109400:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_0010942b:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_00109260;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_00109600;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC0;
LAB_001095b4:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_00109550;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_00109550;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_00109600;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_00109627:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_00109550;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_00109550;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar9 = 0;
        goto LAB_00109627;
      }
      uVar8 = 0;
      pbVar10 = &_LC0;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_001095b4;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_00109550;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_00109550;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_00109600;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_00109550:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_00109550;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_00109600:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_0010a010:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_001098de:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_001098e4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_00109bd9;
LAB_00109a32:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00109862:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00109950:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00109998;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00109998;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_001098c8;
        }
        goto LAB_0010a010;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00109998;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00109998;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001098c8;
      }
      if (lVar9 == 0) goto LAB_00109c31;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_001098e4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00109a29;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00109f16;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00109bc0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_00109f1f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00109da6:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00109e08:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00109950;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_00109742:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00109998;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00109998;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_001098c8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_001098de;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00109cc8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00109f83;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00109bc0;
        }
LAB_00109f16:
        if (pbVar15 != (byte *)0x0) goto LAB_00109e08;
        goto LAB_00109f1f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00109fe1;
      }
LAB_00109c31:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00109a29:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00109a32;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00109862;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00109742;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00109b38:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00109998;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00109b38;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_001098c8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00109cc8;
      }
LAB_00109fe1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_00109f83:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00109bc0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00109da6;
  }
LAB_00109bd9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00109998:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00109a87;
LAB_001099b4:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00109b50;
    }
LAB_0010a01e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_00109d3e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_001099b4;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00109eb9;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00109b50;
        }
LAB_00109eb9:
        if (pbVar16 == (byte *)0x0) goto LAB_00109ebe;
        goto LAB_00109e66;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00109a87:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0010a01e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00109b50:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_00109ebe:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_00109d3e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00109e66:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x0010a0c7:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_0010a1f8;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC0;
LAB_0010a17e:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_0010a148;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_0010a148;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_0010a1f8;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010a445:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_0010a148;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_0010a148;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC0;
        goto LAB_0010a445;
      }
      uVar9 = 0;
      pbVar13 = &_LC0;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_0010a17e;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_0010a148;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0010a148;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_0010a1f8;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_0010a148;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_0010a148;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_0010a1f8;
LAB_0010a148:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_0010a1f8:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_0010a3f8;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC0;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_0010a2cc:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_0010a3f8;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_0010a3f8;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_0010a3f8;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a3f8;
          }
        }
        else {
LAB_0010a32b:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010a331:
          if (bVar6 == 0) goto LAB_0010a3f8;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_0010a3f8;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_0010a3f8;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010a3f8;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC0;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC0;
            goto LAB_0010a331;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_0010a2cc;
            goto LAB_0010a32b;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_0010a3f8;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_0010a3f8;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a3f8;
              }
              goto LAB_0010a290;
            }
            goto LAB_0010a3f8;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a3f8;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_0010a3f8;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_0010a3f8;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a3f8;
        }
      }
LAB_0010a290:
      if (lVar10 == param_1) goto LAB_0010a3d0;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_0010a156:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x0010a0c7;
LAB_0010a3d0:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010a3f8:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_0010a156;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
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
      goto LAB_0010aa2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aa2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aa2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this)

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
      goto LAB_0010ab2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ab2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ab2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this)

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
      goto LAB_0010ac2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ac2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ac2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this)

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
      goto LAB_0010ad2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ad2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ad2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, double>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this)

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
      goto LAB_0010ae2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ae2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ae2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::get_object
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this)

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
      goto LAB_0010af2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010af2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010af2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_0010b0dc;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_0010b030:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC0;
LAB_0010b144:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_0010b0b0;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010b0b0;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_0010b1a6:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_0010b0b0;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010b0b0;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC0;
        uVar11 = 0;
        goto LAB_0010b1a6;
      }
      uVar10 = 0;
      pbVar14 = &_LC0;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_0010b144;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_0010b0b0;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_0010b0b0;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_0010b0c4;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_0010b0b0;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_0010b0b0;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_0010b0c4;
LAB_0010b0b0:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_0010b0c4:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x0010b0d1;
  goto LAB_0010b030;
code_r0x0010b0d1:
  if (lVar16 < 2) {
    return;
  }
LAB_0010b0dc:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeBlendSpace1DEditor::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeBlendSpace1DEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationNodeBlendSpace1DEditor::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeBlendSpace1DEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b618) */
/* AnimationNodeBlendSpace1DEditor::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeBlendSpace1DEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b688) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b6f8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1153,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1153,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1153,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AnimationNodeBlendSpace1DEditor::is_class_ptr(void*) const */

uint AnimationNodeBlendSpace1DEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x1152,in_RSI == &AnimationTreeNodeEditorPlugin::get_class_ptr_static()::
                                           ptr) |
          (uint)CONCAT71(0x1152,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &VBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x1153,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1153,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
      if (StringName::configured == '\0') goto LAB_0010b8e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b8e0:
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
      if (StringName::configured == '\0') goto LAB_0010b940;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b940:
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
      if (StringName::configured == '\0') goto LAB_0010b9a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b9a0:
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
      if (StringName::configured == '\0') goto LAB_0010ba10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ba10:
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
LAB_0010bae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010bb4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010bb4e:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationNodeBlendSpace1DEditor::_get_class_namev() const */

undefined8 * AnimationNodeBlendSpace1DEditor::_get_class_namev(void)

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
LAB_0010bbe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bbe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationNodeBlendSpace1DEditor");
      goto LAB_0010bc4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeBlendSpace1DEditor"
            );
LAB_0010bc4e:
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
LAB_0010bcd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bcd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010bd3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010bd3e:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010c683:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_0010bdd3:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_0010be5c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_0010bef4:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x0010bf40;
LAB_0010c3d6:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_0010c3e6;
            goto LAB_0010c583;
          }
LAB_0010c5f8:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0010c50f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x0010c5c1;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_0010c65c;
  goto LAB_0010c683;
code_r0x0010bf40:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0010bf7c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_0010c002:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_0010c083:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_0010c101:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_0010c177:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0010c30c;
                                      goto LAB_0010c177;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x0010c420;
                                goto LAB_0010c101;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0010c30c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0010c39b;
                          goto LAB_0010c083;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x0010c420:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x0010c460;
                    goto LAB_0010c002;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0010c39b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_0010c3d6;
              goto LAB_0010bf7c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x0010c460:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0010c50f;
        goto LAB_0010bef4;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_0010c583:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0010be5c;
    goto joined_r0x0010c5c1;
  }
LAB_0010c3e6:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_0010c5f8;
  goto LAB_0010bef4;
joined_r0x0010c5c1:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_0010c65c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_0010bdd3;
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



/* AnimationNodeBlendSpace1DEditor::get_class() const */

void AnimationNodeBlendSpace1DEditor::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x0010ca90) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119028 != Container::_notification) {
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
  if ((code *)PTR__notification_00119028 == Container::_notification) {
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



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_0010ce20;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_0010ce20:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
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



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,
   int>(AnimationNodeBlendSpace1DEditor*, char const*, void
   (AnimationNodeBlendSpace1DEditor::*)(int)) */

AnimationNodeBlendSpace1DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,int>
          (AnimationNodeBlendSpace1DEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114de8;
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



/* Callable
   create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>(AnimationNodeBlendSpace1DEditor*,
   char const*, void (AnimationNodeBlendSpace1DEditor::*)()) */

AnimationNodeBlendSpace1DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor>
          (AnimationNodeBlendSpace1DEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114e78;
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



/* Callable create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,
   double>(AnimationNodeBlendSpace1DEditor*, char const*, void
   (AnimationNodeBlendSpace1DEditor::*)(double)) */

AnimationNodeBlendSpace1DEditor *
create_custom_callable_function_pointer<AnimationNodeBlendSpace1DEditor,double>
          (AnimationNodeBlendSpace1DEditor *param_1,char *param_2,_func_void_double *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114f08;
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



/* WARNING: Removing unreachable block (ram,0x0010d598) */
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



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this,Variant **param_1
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
      goto LAB_0010deaf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010deaf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010de88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010df71;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010deaf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010df71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
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
          goto LAB_0010e04e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010e04e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC91;
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
LAB_0010e11d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010e11d;
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
        goto LAB_0010e04e;
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
  local_48 = (Object *)0x10dcbf;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010e04e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, double>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010e4b6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010e4b6;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC92;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_double(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0010e567;
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
LAB_0010e4b6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e567:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010e728;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e728;
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
        uVar3 = _LC93;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010e7d9;
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
LAB_0010e728:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e7d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC94;
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
        goto LAB_0010e8ae;
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
  _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010e8ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::call
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC94;
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
        goto LAB_0010eb0e;
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
  _err_print_error(&_LC90,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010eb0e:
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
            if (lVar3 == 0) goto LAB_0010ed2f;
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
LAB_0010ed2f:
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
    if (cVar6 != '\0') goto LAB_0010ede3;
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
      if (cVar6 != '\0') goto LAB_0010ede3;
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
        if (cVar6 != '\0') goto LAB_0010ede3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==((String *)param_1,"Object");
        return uVar8;
      }
      goto LAB_0010efc8;
    }
  }
LAB_0010ede3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010efc8:
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
            if (lVar3 == 0) goto LAB_0010f05f;
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
LAB_0010f05f:
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
    if (cVar6 != '\0') goto LAB_0010f113;
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
      if (cVar6 != '\0') goto LAB_0010f113;
    }
    cVar6 = String::operator==((String *)param_1,"Container");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==((String *)param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_0010f113;
      }
      cVar6 = String::operator==((String *)param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_0010f2ae;
      }
    }
  }
LAB_0010f113:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f2ae:
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
            if (lVar4 == 0) goto LAB_0010f32f;
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
LAB_0010f32f:
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
    if (cVar5 != '\0') goto LAB_0010f3e3;
  }
  cVar5 = String::operator==((String *)param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f3e3:
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
            if (lVar4 == 0) goto LAB_0010f4af;
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
LAB_0010f4af:
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
    if (cVar5 != '\0') goto LAB_0010f563;
  }
  cVar5 = String::operator==((String *)param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010f563:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::is_class(String const&) const */

undefined8 __thiscall
AnimationNodeBlendSpace1DEditor::is_class(AnimationNodeBlendSpace1DEditor *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010f64f;
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
LAB_0010f64f:
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
    if (cVar6 != '\0') goto LAB_0010f703;
  }
  cVar6 = String::operator==((String *)param_1,"AnimationNodeBlendSpace1DEditor");
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
      if (cVar6 != '\0') goto LAB_0010f703;
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
        if (cVar6 != '\0') goto LAB_0010f703;
      }
      cVar6 = String::operator==((String *)param_1,"VBoxContainer");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = BoxContainer::is_class((BoxContainer *)this,param_1);
          return uVar8;
        }
        goto LAB_0010f8f8;
      }
    }
  }
LAB_0010f703:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f8f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
              if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
      if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
      if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
        if (pvVar5 == (void *)0x0) goto LAB_00110675;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110675:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
  local_78 = &_LC96;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC96;
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
      goto LAB_0011082c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011082c:
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
      goto LAB_00110a91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110a91:
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
  if ((code *)PTR__get_property_list_00119048 != Object::_get_property_list) {
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
      goto LAB_00110d61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110d61:
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
  if ((code *)PTR__get_property_list_00119050 != CanvasItem::_get_property_list) {
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
      goto LAB_00111031;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111031:
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
      goto LAB_001112e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001112e1:
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
      goto LAB_00111591;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111591:
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



/* AnimationTreeNodeEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTreeNodeEditorPlugin::_get_property_listv
          (AnimationTreeNodeEditorPlugin *this,List *param_1,bool param_2)

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
      goto LAB_00111841;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111841:
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



/* AnimationNodeBlendSpace1DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationNodeBlendSpace1DEditor::_get_property_listv
          (AnimationNodeBlendSpace1DEditor *this,List *param_1,bool param_2)

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
    AnimationTreeNodeEditorPlugin::_get_property_listv
              ((AnimationTreeNodeEditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeBlendSpace1DEditor";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeBlendSpace1DEditor";
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
      goto LAB_00111af1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111af1:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeBlendSpace1DEditor",false);
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
      goto LAB_00111da1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111da1:
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



/* AnimationNodeBlendSpace1DEditor::_notificationv(int, bool) */

void __thiscall
AnimationNodeBlendSpace1DEditor::_notificationv
          (AnimationNodeBlendSpace1DEditor *this,int param_1,bool param_2)

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



/* Ref<AnimationRootNode>::unref() */

void __thiscall Ref<AnimationRootNode>::unref(Ref<AnimationRootNode> *this)

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



/* MethodBind* create_method_bind<AnimationNodeBlendSpace1DEditor>(void
   (AnimationNodeBlendSpace1DEditor::*)()) */

MethodBind * create_method_bind<AnimationNodeBlendSpace1DEditor>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00115148;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationNodeBlendSpace1DEditor";
  local_30 = 0x1f;
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



/* AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor() */

void __thiscall
AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor
          (AnimationNodeBlendSpace1DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00114a60;
  if (*(long *)(this + 0xb30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb30);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb08);
      *(undefined8 *)(this + 0xb08) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0xaf0));
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
      if (StringName::configured == '\0') goto LAB_00112261;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112261:
  Control::~Control((Control *)this);
  return;
}



/* AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor() */

void __thiscall
AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor
          (AnimationNodeBlendSpace1DEditor *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00114a60;
  if (*(long *)(this + 0xb30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb30);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb08);
      *(undefined8 *)(this + 0xb08) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0xaf0));
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
      if (StringName::configured == '\0') goto LAB_001123c5;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001123c5:
  Control::~Control((Control *)this);
  operator_delete(this,0xb38);
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



/* AnimationNodeBlendSpace1DEditor::_initialize_classv() */

void AnimationNodeBlendSpace1DEditor::_initialize_classv(void)

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
                  if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
                if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
          if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
    local_58 = "AnimationNodeBlendSpace1DEditor";
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
LAB_00113030:
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
  if (lVar9 == 0) goto LAB_00113030;
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
    goto LAB_00113086;
  }
  if (lVar9 == lVar5) {
LAB_00112fab:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00113086:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00112f1f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00112fab;
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
LAB_00112f1f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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
/* Error CowData<float>::resize<false>(long) */

undefined8 __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

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
LAB_00113310:
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
  if (lVar8 == 0) goto LAB_00113310;
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
        goto LAB_00113221;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00113221:
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



/* WARNING: Removing unreachable block (ram,0x00113498) */
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001137d0;
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
LAB_001137d0:
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
      goto LAB_00113bdf;
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
                    /* WARNING: Could not recover jumptable at 0x00113a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00113bdf:
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
      goto LAB_00113d9f;
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
                    /* WARNING: Could not recover jumptable at 0x00113c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00113d9f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeBlendSpace1DEditor::get_blend_position_path() const */

void AnimationNodeBlendSpace1DEditor::_GLOBAL__sub_I_get_blend_position_path(void)

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
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   double>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,Ref<InputEvent>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationNodeBlendSpace1DEditor,void,String_const&> *this)

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
/* AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor() */

void __thiscall
AnimationNodeBlendSpace1DEditor::~AnimationNodeBlendSpace1DEditor
          (AnimationNodeBlendSpace1DEditor *this)

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


