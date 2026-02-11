
/* QuickOpenResultListItem::_notification(int) [clone .part.0] */

void QuickOpenResultListItem::_notification(int param_1)

{
  StringName *pSVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  long local_30;
  
  pSVar1 = *(StringName **)((StringName *)CONCAT44(in_register_0000003c,param_1) + 0xa30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,"font_disabled_color",false);
  local_48 = Control::get_theme_color
                       ((StringName *)CONCAT44(in_register_0000003c,param_1),(StringName *)&local_50
                       );
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void CowData<Vector2i>::_copy_on_write(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *in_RDI;
  ulong uVar5;
  size_t __n;
  
  if ((*in_RDI == 0) || (*(ulong *)(*in_RDI + -0x10) < 2)) {
    return;
  }
  if (*in_RDI == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*in_RDI + -8);
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
    memcpy(puVar4 + 2,(void *)*in_RDI,__n);
    if (*in_RDI != 0) {
      LOCK();
      plVar1 = (long *)(*in_RDI + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *in_RDI;
        *in_RDI = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *in_RDI = (long)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<QuickOpenResultItem*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<QuickOpenResultItem*>::_copy_on_write(CowData<QuickOpenResultItem*> *this)

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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HighlightedLabel::draw_substr_rects(Vector2i const&, Vector2, int, int) */

void __thiscall
HighlightedLabel::draw_substr_rects
          (undefined8 param_1_00,HighlightedLabel *this,int *param_1,int param_4,int param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  float *pfVar7;
  Object *pOVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  float fVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM1_Qa;
  float fVar12;
  undefined4 local_c0;
  float local_b0;
  undefined8 local_80;
  undefined1 local_78 [8];
  float *local_70;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_b0 = (float)((ulong)param_1_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = Label::get_lines_skipped();
  if (iVar5 < param_4) {
    do {
      local_80 = Label::get_line_rid((int)this);
      pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar6 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar6 + 0x760))
                (local_78,pOVar6,&local_80,(long)*param_1,(long)(param_1[1] + *param_1));
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      uVar11 = Label::get_line_rect((int)this);
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_70);
      pfVar9 = local_70;
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_70);
      pfVar7 = local_70;
      if (local_70 != (float *)0x0) {
        pfVar7 = local_70 + *(long *)(local_70 + -2) * 2;
      }
      if (pfVar9 != pfVar7) {
        local_c0 = (undefined4)((ulong)extraout_XMM1_Qa >> 0x20);
        do {
          _local_68 = CONCAT44((float)((ulong)uVar11 >> 0x20) + local_b0,
                               *pfVar9 + (float)param_1_00 + (float)uVar11);
          fVar10 = (float)extraout_XMM1_Qa - *pfVar9;
          fVar12 = pfVar9[1] - *pfVar9;
          if (fVar10 <= pfVar9[1] - *pfVar9) {
            fVar12 = fVar10;
          }
          uStack_60 = CONCAT44(local_c0,fVar12);
          if (0.0 < fVar12) {
            local_58 = CONCAT44(_UNK_0011c704,_LC25);
            uStack_50 = _UNK_0011c708;
            CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_68,SUB81(&local_58,0),_LC23,true);
            local_58 = __LC24;
            uStack_50 = _UNK_0011c718;
            CanvasItem::draw_rect((Rect2 *)this,(Color *)&local_68,SUB81(&local_58,0),_LC25,false);
          }
          pfVar9 = pfVar9 + 2;
        } while (pfVar7 != pfVar9);
      }
      pOVar6 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar6 == (Object *)0x0) {
        FUN_0010a88e();
        return;
      }
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      dVar2 = (double)(**(code **)(*(long *)pOVar6 + 0x728))(pOVar6,&local_80);
      pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar8 = (Object *)0x0;
      }
      dVar3 = (double)(**(code **)(*(long *)pOVar8 + 0x730))(pOVar8);
      local_b0 = (float)((double)local_b0 + dVar3 + (double)param_5 + dVar2);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      pfVar7 = local_70;
      if (local_70 != (float *)0x0) {
        LOCK();
        pfVar9 = local_70 + -4;
        *(long *)pfVar9 = *(long *)pfVar9 + -1;
        UNLOCK();
        if (*(long *)pfVar9 == 0) {
          local_70 = (float *)0x0;
          Memory::free_static(pfVar7 + -4,false);
        }
      }
      iVar5 = iVar5 + 1;
    } while (param_4 != iVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HighlightedLabel::reset_highlights() */

void __thiscall HighlightedLabel::reset_highlights(HighlightedLabel *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xae0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xae0);
      *(undefined8 *)(this + 0xae0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      CanvasItem::queue_redraw();
      return;
    }
    *(undefined8 *)(this + 0xae0) = 0;
  }
  CanvasItem::queue_redraw();
  return;
}



/* HighlightedLabel::_notification(int) */

void __thiscall HighlightedLabel::_notification(HighlightedLabel *this,int param_1)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_30;
  undefined4 local_2c;
  HighlightedLabel *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0x1e) && (*(long *)(this + 0xae0) != 0)) {
    local_28 = (HighlightedLabel *)0x0;
    Label::get_layout_data(this,(int *)&local_28,&local_30);
    CowData<Vector2i>::_copy_on_write();
    lVar1 = *(long *)(this + 0xae0);
    CowData<Vector2i>::_copy_on_write();
    lVar2 = *(long *)(this + 0xae0);
    if (lVar2 != 0) {
      lVar2 = lVar2 + *(long *)(lVar2 + -8) * 8;
    }
    for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
      draw_substr_rects(local_28,this,lVar1,local_30,local_2c);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* style_button(Button*) */

void style_button(Button *param_1)

{
  Button::set_flat(SUB81(param_1,0));
  Control::set_focus_mode(param_1,0);
  Control::set_default_cursor_shape(param_1,2);
  return;
}



/* QuickOpenResultContainer::_get_result_root() */

undefined8 __thiscall QuickOpenResultContainer::_get_result_root(QuickOpenResultContainer *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xad8);
  if (*(int *)(this + 0xab0) == 1) {
    uVar1 = *(undefined8 *)(this + 0xad0);
  }
  return uVar1;
}



/* QuickOpenResultContainer::has_nothing_selected() const */

uint __thiscall QuickOpenResultContainer::has_nothing_selected(QuickOpenResultContainer *this)

{
  return *(uint *)(this + 0xa98) >> 0x1f;
}



/* QuickOpenResultContainer::get_selected() const */

void QuickOpenResultContainer::get_selected(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long in_RSI;
  String *in_RDI;
  long lVar4;
  long in_FS_OFFSET;
  
  iVar1 = *(int *)(in_RSI + 0xa98);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 0) {
    _err_print_error("get_selected","editor/gui/editor_quick_open_dialog.cpp",0x2d9,
                     "Condition \"has_nothing_selected()\" is true. Returning: String()",
                     "Tried to get selected file, but nothing was selected.",0,0);
    *(undefined8 *)in_RDI = 0;
LAB_00100ad9:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*(long *)(in_RSI + 0xa68) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(in_RSI + 0xa68) + -8);
    if (iVar1 < lVar4) {
      ResourceUID::ensure_path(in_RDI);
      goto LAB_00100ad9;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,(long)iVar1,lVar4,"p_index","size()","",false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* QuickOpenResultItem::highlight_item(bool) */

void __thiscall QuickOpenResultItem::highlight_item(QuickOpenResultItem *this,bool param_1)

{
  StringName *pSVar1;
  char cVar2;
  
  this[0xa41] = (QuickOpenResultItem)param_1;
  cVar2 = CanvasItem::is_visible();
  if (cVar2 == '\0') {
    pSVar1 = *(StringName **)(*(long *)(this + 0xa18) + 0xa20);
  }
  else {
    pSVar1 = *(StringName **)(*(long *)(this + 0xa10) + 0xa28);
  }
  if (!param_1) {
    Control::remove_theme_color_override(pSVar1);
    CanvasItem::queue_redraw();
    return;
  }
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  CanvasItem::queue_redraw();
  return;
}



/* QuickOpenResultItem::_set_enabled(bool) */

void QuickOpenResultItem::_set_enabled(bool param_1)

{
  CanvasItem::set_visible(param_1);
  Node::set_process(param_1);
  Node::set_process_input(param_1);
  return;
}



/* QuickOpenResultItem::_notification(int) */

void QuickOpenResultItem::_notification(int param_1)

{
  Object *pOVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int in_ESI;
  undefined4 in_register_0000003c;
  Ref *pRVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 uVar8;
  undefined8 in_XMM1_Qa;
  long local_70;
  long local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  pRVar5 = (Ref *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI < 0x2b) {
    if (0x28 < in_ESI) {
      bVar2 = CanvasItem::is_visible();
      pRVar5[0xa40] = (Ref)(in_ESI == 0x29 & bVar2);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_001010c4;
    }
    if (in_ESI == 0x1e) {
      if (pRVar5[0xa41] == (Ref)0x0) {
        if (pRVar5[0xa40] != (Ref)0x0) {
          local_50 = Control::get_size();
          local_58 = 0;
          CanvasItem::draw_style_box(pRVar5,(Rect2 *)(pRVar5 + 0xa28));
        }
      }
      else {
        local_50 = Control::get_size();
        local_58 = 0;
        CanvasItem::draw_style_box(pRVar5,(Rect2 *)(pRVar5 + 0xa20));
      }
    }
  }
  else if (in_ESI == 0x2d) {
    StringName::StringName((StringName *)&local_68,"Tree",false);
    StringName::StringName((StringName *)&local_70,"selected",false);
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)pRVar5);
    pOVar1 = *(Object **)(pRVar5 + 0xa20);
    pOVar6 = pOVar1;
    if (local_60 == pOVar1) {
LAB_00100df9:
      if (((pOVar6 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar1 = local_60, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    else {
      *(Object **)(pRVar5 + 0xa20) = local_60;
      if (local_60 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(pRVar5 + 0xa20) = 0;
        }
        pOVar6 = local_60;
        if (pOVar1 != (Object *)0x0) goto LAB_00100de4;
        goto LAB_00100df9;
      }
      if (pOVar1 != (Object *)0x0) {
LAB_00100de4:
        cVar3 = RefCounted::unreference();
        pOVar6 = local_60;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), pOVar6 = local_60, cVar3 != '\0')
           ) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          pOVar6 = local_60;
        }
        goto LAB_00100df9;
      }
    }
    if (((StringName::configured != '\0') &&
        ((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_68 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,"Tree",false);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)pRVar5);
    pOVar1 = *(Object **)(pRVar5 + 0xa28);
    pOVar6 = pOVar1;
    if (local_60 == pOVar1) {
LAB_00100ec3:
      if (((pOVar6 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar1 = local_60, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    else {
      *(Object **)(pRVar5 + 0xa28) = local_60;
      if (local_60 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)(pRVar5 + 0xa28) = 0;
        }
        pOVar6 = local_60;
        if (pOVar1 != (Object *)0x0) goto LAB_00100eae;
        goto LAB_00100ec3;
      }
      if (pOVar1 != (Object *)0x0) {
LAB_00100eae:
        cVar3 = RefCounted::unreference();
        pOVar6 = local_60;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), pOVar6 = local_60, cVar3 != '\0')
           ) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          pOVar6 = local_60;
        }
        goto LAB_00100ec3;
      }
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_60,"font_focus_color",false);
    uVar8 = Control::get_theme_color((StringName *)pRVar5,(StringName *)&local_60);
    bVar7 = StringName::configured != '\0';
    *(undefined8 *)(pRVar5 + 0xa30) = uVar8;
    *(undefined8 *)(pRVar5 + 0xa38) = in_XMM1_Qa;
    if ((bVar7) && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001010c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultListItem::highlight_item(Color const&) */

void QuickOpenResultListItem::highlight_item(Color *param_1)

{
  Control::add_theme_color_override
            (*(StringName **)(param_1 + 0xa28),(Color *)(SceneStringNames::singleton + 0xb0));
  return;
}



/* QuickOpenResultListItem::remove_highlight() */

void __thiscall QuickOpenResultListItem::remove_highlight(QuickOpenResultListItem *this)

{
  Control::remove_theme_color_override(*(StringName **)(this + 0xa28));
  return;
}



/* QuickOpenResultListItem::_notification(int) */

void __thiscall QuickOpenResultListItem::_notification(QuickOpenResultListItem *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* QuickOpenResultGridItem::highlight_item(Color const&) */

void QuickOpenResultGridItem::highlight_item(Color *param_1)

{
  Control::add_theme_color_override
            (*(StringName **)(param_1 + 0xa20),(Color *)(SceneStringNames::singleton + 0xb0));
  return;
}



/* QuickOpenResultGridItem::remove_highlight() */

void __thiscall QuickOpenResultGridItem::remove_highlight(QuickOpenResultGridItem *this)

{
  Control::remove_theme_color_override(*(StringName **)(this + 0xa20));
  return;
}



/* QuickOpenResultContainer::_get_cache_file_path() const */

QuickOpenResultContainer * __thiscall
QuickOpenResultContainer::_get_cache_file_path(QuickOpenResultContainer *this)

{
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPaths::get_project_settings_dir();
  local_38 = "quick_open_dialog_cache.cfg";
  local_40 = 0;
  local_30 = 0x1b;
  String::parse_latin1((StrRange *)&local_40);
  String::path_join((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref(aCStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_select_item(int) */

void __thiscall QuickOpenResultContainer::_select_item(QuickOpenResultContainer *this,int param_1)

{
  long lVar1;
  String *pSVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = (long)*(int *)(this + 0xa98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xa98) < 0) {
LAB_0010128a:
    *(int *)(this + 0xa98) = param_1;
    if (param_1 < 0) {
      pSVar2 = *(String **)(this + 0xb00);
      local_48 = 0;
      String::parse_latin1((String *)&local_48,"");
      Label::set_text(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001013da:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_001015b5:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar1 = *(long *)(this + 0xac0);
    lVar5 = (long)param_1;
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      if (lVar6 <= lVar5) goto LAB_00101547;
      QuickOpenResultItem::highlight_item(*(QuickOpenResultItem **)(lVar1 + lVar5 * 8),true);
      pSVar2 = *(String **)(this + 0xb00);
      if (this[0xaa4] == (QuickOpenResultContainer)0x0) {
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"");
        get_selected();
        String::operator+((String *)&local_48,(String *)local_68);
        Label::set_text(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref(local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      else {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"");
        local_60 = 0;
        String::parse_latin1((String *)&local_60," (recently opened)");
        TTR((String *)&local_50,(String *)&local_60);
        get_selected();
        String::operator+((String *)&local_48,(String *)local_68);
        Label::set_text(pSVar2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref(local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      lVar5 = (long)*(int *)(this + 0xa98);
      lVar1 = *(long *)(this + 0xac0);
      if (lVar5 < 0) {
        if (lVar1 != 0) {
          lVar6 = *(long *)(lVar1 + -8);
          goto LAB_00101547;
        }
      }
      else if (lVar1 != 0) {
        lVar6 = *(long *)(lVar1 + -8);
        if (lVar6 <= lVar5) goto LAB_00101547;
        Control::get_position();
        Control::get_size();
        Control::get_size();
        iVar4 = ScrollContainer::get_v_scroll();
        if ((int)extraout_XMM0_Db <= iVar4) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar4 = (int)*(undefined8 *)(this + 0xac8);
LAB_001014de:
            ScrollContainer::set_v_scroll(iVar4);
            return;
          }
          goto LAB_001015b5;
        }
        if (iVar4 + (int)extraout_XMM0_Db_01 < (int)extraout_XMM0_Db_00 + (int)extraout_XMM0_Db) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar4 = (int)*(undefined8 *)(this + 0xac8);
            goto LAB_001014de;
          }
          goto LAB_001015b5;
        }
        goto LAB_001013da;
      }
      lVar6 = 0;
      goto LAB_00101547;
    }
  }
  else {
    lVar1 = *(long *)(this + 0xac0);
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      if (lVar6 <= lVar5) goto LAB_00101547;
      QuickOpenResultItem::highlight_item(*(QuickOpenResultItem **)(lVar1 + lVar5 * 8),false);
      goto LAB_0010128a;
    }
  }
  lVar6 = 0;
LAB_00101547:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* QuickOpenResultContainer::_move_selection_index(Key) */

void __thiscall
QuickOpenResultContainer::_move_selection_index(QuickOpenResultContainer *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0xa9c) < 1) {
    return;
  }
  iVar3 = *(int *)(this + 0xa9c) + -1;
  iVar1 = *(int *)(this + 0xa98);
  iVar4 = iVar1;
  if (*(int *)(this + 0xab0) == 1) {
    if (param_2 == 0x400010) {
switchD_00101655_caseD_40000f:
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      goto switchD_00101655_default;
    }
    if (param_2 == 0x400012) goto switchD_00101655_caseD_400011;
    if (param_2 != 0x400013) {
      if (((iVar3 != iVar1) && (param_2 == 0x400014)) && (iVar4 = iVar3, iVar1 + 10 < iVar3)) {
        iVar4 = iVar1 + 10;
      }
      goto switchD_00101655_default;
    }
    if (iVar1 != 0) {
      iVar4 = iVar1 + -10;
      if (iVar1 + -10 < 0) {
        iVar4 = 0;
      }
      goto switchD_00101655_default;
    }
    goto LAB_00101715;
  }
  iVar2 = FlowContainer::get_line_max_child_count();
  switch(param_2) {
  case 0x40000f:
    goto switchD_00101655_caseD_40000f;
  case 0x400010:
    iVar4 = iVar3;
    if ((iVar1 != 0) && (iVar4 = iVar1 - iVar2, iVar1 - iVar2 < 0)) {
      iVar4 = 0;
    }
    goto switchD_00101655_default;
  case 0x400011:
switchD_00101655_caseD_400011:
    if (iVar3 != iVar1) {
      iVar4 = iVar1 + 1;
      goto switchD_00101655_default;
    }
    break;
  case 0x400012:
    if (iVar3 != iVar1) goto LAB_001016cd;
    break;
  case 0x400013:
    if (iVar1 != 0) {
      iVar4 = iVar2 * -3 + iVar1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      goto switchD_00101655_default;
    }
    break;
  case 0x400014:
    iVar2 = iVar2 * 3;
    if (iVar3 == iVar1) goto switchD_00101655_default;
LAB_001016cd:
    iVar4 = iVar3;
    if (iVar2 + iVar1 < iVar3) {
      iVar4 = iVar2 + iVar1;
    }
  default:
    goto switchD_00101655_default;
  }
LAB_00101715:
  iVar4 = 0;
switchD_00101655_default:
  _select_item(this,iVar4);
  return;
}



/* QuickOpenResultContainer::handle_search_box_input(Ref<InputEvent> const&) */

void __thiscall
QuickOpenResultContainer::handle_search_box_input(QuickOpenResultContainer *this,Ref *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long lVar4;
  
  if (*(int *)(this + 0xa9c) < 0) {
    return;
  }
  if (*(long *)param_1 == 0) {
    return;
  }
  pOVar3 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if (pOVar3 == (Object *)0x0) {
    return;
  }
  cVar1 = RefCounted::reference();
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = InputEvent::is_pressed();
  if (cVar1 == '\0') goto LAB_001017a4;
  iVar2 = InputEventKey::get_keycode();
  if (iVar2 == 0x400011) {
LAB_00101840:
    if ((*(int *)(this + 0xab0) != 0) ||
       (lVar4 = InputEventWithModifiers::get_modifiers_mask(), lVar4 != 0)) goto LAB_001017a4;
  }
  else if (iVar2 < 0x400012) {
    if (iVar2 == 0x40000f) goto LAB_00101840;
    if (iVar2 != 0x400010) goto LAB_001017a4;
  }
  else if (2 < iVar2 - 0x400012U) goto LAB_001017a4;
  InputEventKey::get_keycode();
  _move_selection_index(this);
  CanvasItem::queue_redraw();
  Control::accept_event();
LAB_001017a4:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    return;
  }
  return;
}



/* QuickOpenResultContainer::_item_input(Ref<InputEvent> const&, int) */

void __thiscall
QuickOpenResultContainer::_item_input(QuickOpenResultContainer *this,Ref *param_1,int param_2)

{
  Vector2i *pVVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    pOVar6 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') {
        cVar4 = InputEvent::is_pressed();
        if (cVar4 != '\0') {
          iVar5 = InputEventMouseButton::get_button_index();
          if (iVar5 == 1) {
            _select_item(this,param_2);
            if (_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::operator()()::sname == '\0') {
              iVar5 = __cxa_guard_acquire(&_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::
                                           operator()()::sname);
              if (iVar5 != 0) {
                _scs_create((char *)&_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::
                                     operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::operator()()::
                              sname,&__dso_handle);
                __cxa_guard_release(&_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::
                                     operator()()::sname);
              }
            }
            local_48 = 0;
            local_40 = (undefined1  [16])0x0;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&_item_input(Ref<InputEvent>const&,int)::{lambda()#1}::operator()()::
                             sname,0,0);
            if (Variant::needs_deinit[(int)local_48] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            iVar5 = InputEventMouseButton::get_button_index();
            if (iVar5 == 2) {
              _select_item(this,param_2);
              pVVar1 = *(Vector2i **)(this + 0xae0);
              uVar9 = InputEventMouse::get_position();
              lVar7 = (long)param_2;
              lVar8 = *(long *)(this + 0xac0);
              if (lVar7 < 0) {
                if (lVar8 != 0) {
LAB_00101ae1:
                  lVar8 = *(long *)(lVar8 + -8);
                  goto LAB_00101ae5;
                }
              }
              else if (lVar8 != 0) {
                if (*(long *)(lVar8 + -8) <= lVar7) goto LAB_00101ae1;
                uVar10 = Control::get_screen_position();
                local_50 = CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar10 >> 0x20),
                                    (float)uVar9 + (float)uVar10);
                local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
                Window::set_position(pVVar1);
                Window::reset_size();
                local_48 = 0;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = local_40._8_8_;
                local_40 = auVar3 << 0x40;
                (**(code **)(**(long **)(this + 0xae0) + 0x240))();
                goto LAB_00101904;
              }
              lVar8 = 0;
LAB_00101ae5:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
        }
LAB_00101904:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar6);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar6,false);
              return;
            }
            goto LAB_00101b2d;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101b2d:
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



/* EditorQuickOpenDialog::get_dialog_title(Vector<StringName> const&) */

EditorQuickOpenDialog * __thiscall
EditorQuickOpenDialog::get_dialog_title(EditorQuickOpenDialog *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  String *this_00;
  long lVar4;
  String *this_01;
  long in_FS_OFFSET;
  CowData<char32_t> *local_90;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + -8) < 2)) {
    if (get_dialog_title(Vector<StringName>const&)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&get_dialog_title(Vector<StringName>const&)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&get_dialog_title(Vector<StringName>const&)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_dialog_title(Vector<StringName>const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&get_dialog_title(Vector<StringName>const&)::{lambda()#1}::operator()()
                             ::sname);
      }
    }
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == (long *)0x0) {
      lVar4 = 0;
LAB_00101eb3:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar4,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = plVar1[-1];
    if (lVar4 < 1) goto LAB_00101eb3;
    lVar4 = *plVar1;
    if (lVar4 != get_dialog_title(Vector<StringName>const&)::{lambda()#1}::operator()()::sname) {
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar4 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar4 + 8));
        }
      }
      local_90 = (CowData<char32_t> *)&local_60;
      local_68 = 0;
      local_50 = 1;
      local_58 = " ";
      String::parse_latin1((StrRange *)&local_68);
      local_58 = "";
      local_78 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_58 = "Select";
      local_80 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_70,(String *)&local_80);
      String::operator+((String *)&local_58,local_70);
      String::operator+((String *)this,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_90);
      goto LAB_00101d29;
    }
    this_00 = (String *)&local_58;
    local_58 = (char *)0x0;
    this_01 = (String *)&local_60;
    String::parse_latin1(this_00,"");
    local_60 = 0;
    String::parse_latin1(this_01,"Select Scene");
  }
  else {
    this_00 = (String *)&local_60;
    local_60 = 0;
    this_01 = (String *)&local_68;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)this_00);
    local_68 = 0;
    local_58 = "Select Resource";
    local_50 = 0xf;
    String::parse_latin1((StrRange *)this_01);
  }
  TTR((String *)this,this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
LAB_00101d29:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_menu_option(int) */

void __thiscall QuickOpenResultContainer::_menu_option(QuickOpenResultContainer *this,int param_1)

{
  code *pcVar1;
  String *pSVar2;
  long *plVar3;
  long in_FS_OFFSET;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  pSVar2 = FileSystemDock::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    get_selected();
    FileSystemDock::navigate_to_path(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  else if (param_1 == 1) {
    ProjectSettings::get_singleton();
    get_selected();
    ProjectSettings::globalize_path(local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    plVar3 = (long *)OS::get_singleton();
    pcVar1 = *(code **)(*plVar3 + 0x158);
    local_38 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)local_40);
    (*pcVar1)(plVar3,(CowData<char32_t> *)&local_38,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* QuickOpenResultContainer::QuickOpenResultContainer() */

void __thiscall QuickOpenResultContainer::QuickOpenResultContainer(QuickOpenResultContainer *this)

{
  StringName *pSVar1;
  long *plVar2;
  code *pcVar3;
  String *pSVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  RefCounted *this_00;
  PanelContainer *this_01;
  CenterContainer *this_02;
  Label *pLVar10;
  ScrollContainer *this_03;
  BoxContainer *pBVar11;
  FlowContainer *this_04;
  PopupMenu *this_05;
  CallableCustom *pCVar12;
  CheckButton *pCVar13;
  VSeparator *this_06;
  Button *this_07;
  long lVar14;
  int iVar15;
  RefCounted *pRVar16;
  Object *pOVar17;
  Object *pOVar18;
  long in_FS_OFFSET;
  byte bVar19;
  float fVar20;
  String local_78 [8];
  undefined8 local_70;
  long local_68 [3];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  uVar9 = _LC58;
  this[0xa0c] = (QuickOpenResultContainer)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0011aa38;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa58) = uVar9;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  uVar7 = Memory::alloc_static(0x200,false);
  *(undefined8 *)(this + 0xa48) = uVar7;
  uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0xa58) << 3,false);
  *(undefined8 *)(this + 0xa40) = uVar7;
  pvVar8 = (void *)Memory::alloc_static((ulong)*(uint *)(this + 0xa58) << 2,false);
  *(void **)(this + 0xa50) = pvVar8;
  if (*(uint *)(this + 0xa58) != 0) {
    memset(pvVar8,0,(ulong)*(uint *)(this + 0xa58) << 2);
  }
  *(undefined8 *)(this + 0xa88) = uVar9;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  uVar7 = Memory::alloc_static(0x200,false);
  *(undefined8 *)(this + 0xa78) = uVar7;
  uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0xa88) << 4,false);
  *(undefined8 *)(this + 0xa70) = uVar7;
  pvVar8 = (void *)Memory::alloc_static((ulong)*(uint *)(this + 0xa88) << 2,false);
  *(void **)(this + 0xa80) = pvVar8;
  if (*(uint *)(this + 0xa88) != 0) {
    memset(pvVar8,0,(ulong)*(uint *)(this + 0xa88) << 2);
  }
  uVar7 = _LC59;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined4 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xa98) = uVar7;
  *(undefined2 *)(this + 0xaa4) = 0x100;
  *(undefined8 *)(this + 0xaa8) = 0;
  *(undefined4 *)(this + 0xab0) = 1;
  *(undefined8 *)(this + 0xb30) = 0;
  *(undefined8 *)(this + 0xb38) = uVar9;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb20) = (undefined1  [16])0x0;
  uVar9 = Memory::alloc_static(0x200,false);
  *(undefined8 *)(this + 0xb28) = uVar9;
  uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0xb38) << 3,false);
  *(undefined8 *)(this + 0xb20) = uVar9;
  pvVar8 = (void *)Memory::alloc_static((ulong)*(uint *)(this + 0xb38) << 2,false);
  *(void **)(this + 0xb30) = pvVar8;
  if (*(uint *)(this + 0xb38) != 0) {
    memset(pvVar8,0,(ulong)*(uint *)(this + 0xb38) << 2);
  }
  Control::set_h_size_flags(this,3);
  Control::set_v_size_flags(this,3);
  StringName::StringName((StringName *)local_68,"separation",false);
  iVar15 = (int)(StringName *)local_68;
  Control::add_theme_constant_override((StringName *)this,iVar15);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar16 = this_00;
  for (lVar14 = 0x36; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)pRVar16 = 0;
    pRVar16 = pRVar16 + (ulong)bVar19 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0011b818;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar18 = *(Object **)(this + 0xaa8);
    if (pOVar18 == (Object *)0x0) goto LAB_00102436;
    *(undefined8 *)(this + 0xaa8) = 0;
    cVar5 = RefCounted::unreference();
    if (cVar5 == '\0') goto LAB_00102436;
    this_00 = (RefCounted *)0x0;
    cVar5 = predelete_handler(pOVar18);
    if (cVar5 == '\0') goto LAB_00102436;
LAB_001030fb:
    (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
    Memory::free_static(pOVar18,false);
    pOVar17 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_00102436;
  }
  else {
    pOVar18 = *(Object **)(this + 0xaa8);
    pOVar17 = pOVar18;
    if (this_00 != (RefCounted *)pOVar18) {
      *(RefCounted **)(this + 0xaa8) = this_00;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xaa8) = 0;
      }
      pOVar17 = (Object *)this_00;
      if (((pOVar18 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar18), cVar5 != '\0')) goto LAB_001030fb;
    }
  }
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar17), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
    Memory::free_static(pOVar17,false);
  }
LAB_00102436:
  this_01 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_01);
  postinitialize_handler((Object *)this_01);
  *(PanelContainer **)(this + 0xae8) = this_01;
  Control::set_v_size_flags(this_01,3);
  Node::add_child(this,*(undefined8 *)(this + 0xae8),0,0);
  this_02 = (CenterContainer *)operator_new(0xa08,"");
  CenterContainer::CenterContainer(this_02);
  postinitialize_handler((Object *)this_02);
  *(CenterContainer **)(this + 0xaf0) = this_02;
  Control::set_h_size_flags(this_02,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xaf0),3);
  Node::add_child(*(undefined8 *)(this + 0xae8),*(undefined8 *)(this + 0xaf0),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar10,(String *)local_68);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xaf8) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(StringName **)(this + 0xaf8);
  EditorScale::get_scale();
  Control::add_theme_font_size_override(pSVar1,(int)SceneStringNames::singleton + 0xa8);
  Node::add_child(*(undefined8 *)(this + 0xaf0),*(undefined8 *)(this + 0xaf8),0,0);
  CanvasItem::hide();
  this_03 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(ScrollContainer **)(this + 0xac8) = this_03;
  Control::set_h_size_flags(this_03,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xac8),3);
  ScrollContainer::set_horizontal_scroll_mode(*(undefined8 *)(this + 0xac8),0);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xae8),*(undefined8 *)(this + 0xac8),0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,true);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_0011a358;
  postinitialize_handler((Object *)pBVar11);
  *(BoxContainer **)(this + 0xad0) = pBVar11;
  Control::set_h_size_flags(pBVar11,3);
  pSVar1 = *(StringName **)(this + 0xad0);
  if ((QuickOpenResultContainer()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&QuickOpenResultContainer()::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&QuickOpenResultContainer()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &QuickOpenResultContainer()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&QuickOpenResultContainer()::{lambda()#1}::operator()()::sname);
  }
  Control::add_theme_constant_override(pSVar1,0x109c58);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xac8),*(undefined8 *)(this + 0xad0),0,0);
  this_04 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_04,false);
  this_04[0xa24] = (FlowContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_0011b978;
  postinitialize_handler((Object *)this_04);
  *(FlowContainer **)(this + 0xad8) = this_04;
  Control::set_h_size_flags(this_04,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xad8),3);
  pSVar1 = *(StringName **)(this + 0xad8);
  if ((QuickOpenResultContainer()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&QuickOpenResultContainer()::{lambda()#2}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&QuickOpenResultContainer()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &QuickOpenResultContainer()::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&QuickOpenResultContainer()::{lambda()#2}::operator()()::sname);
  }
  Control::add_theme_constant_override(pSVar1,0x109c48);
  pSVar1 = *(StringName **)(this + 0xad8);
  if ((QuickOpenResultContainer()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&QuickOpenResultContainer()::{lambda()#3}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&QuickOpenResultContainer()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &QuickOpenResultContainer()::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&QuickOpenResultContainer()::{lambda()#3}::operator()()::sname);
  }
  Control::add_theme_constant_override(pSVar1,0x109c38);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xac8),*(undefined8 *)(this + 0xad8),0,0);
  this_05 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_05);
  postinitialize_handler((Object *)this_05);
  *(PopupMenu **)(this + 0xae0) = this_05;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Show in FileSystem");
  TTR(local_78,(String *)&local_70);
  PopupMenu::add_item(this_05,local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar9 = *(undefined8 *)(this + 0xae0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Show in File Manager");
  TTR(local_78,(String *)&local_70);
  PopupMenu::add_item(uVar9,local_78,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xae0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC33;
  *(QuickOpenResultContainer **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_0011c118;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar9;
  *(code **)(pCVar12 + 0x38) = _menu_option;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "QuickOpenResultContainer::_menu_option";
  Callable::Callable((Callable *)local_68,pCVar12);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Window::hide();
  Node::add_child(*(undefined8 *)(this + 0xac8),*(undefined8 *)(this + 0xae0),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar10,(String *)local_68);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xb00) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xb00),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xb00),1);
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xb00),3);
  Node::add_child(this,*(undefined8 *)(this + 0xb00),0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,false);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_00119fe0;
  postinitialize_handler((Object *)pBVar11);
  Control::set_h_size_flags(pBVar11,3);
  BoxContainer::set_alignment(pBVar11,2);
  StringName::StringName((StringName *)local_68,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar11,iVar15);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(this,pBVar11,0,0);
  pCVar13 = (CheckButton *)operator_new(0xc60,"");
  local_68[0] = 0;
  CheckButton::CheckButton(pCVar13,(String *)local_68);
  postinitialize_handler((Object *)pCVar13);
  *(CheckButton **)(this + 0xb18) = pCVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar9 = *(undefined8 *)(this + 0xb18);
  Button::set_flat(SUB81(uVar9,0));
  Control::set_focus_mode(uVar9,0);
  Control::set_default_cursor_shape(uVar9,2);
  pSVar4 = *(String **)(this + 0xb18);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Fuzzy Search");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar4 = *(String **)(this + 0xb18);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Enable fuzzy matching");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xb18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<QuickOpenResultContainer,bool>
            ((QuickOpenResultContainer *)local_68,(char *)this,
             (_func_void_bool *)"&QuickOpenResultContainer::_toggle_fuzzy_search");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xb18),0,0);
  pCVar13 = (CheckButton *)operator_new(0xc60,"");
  local_68[0] = 0;
  CheckButton::CheckButton(pCVar13,(String *)local_68);
  postinitialize_handler((Object *)pCVar13);
  *(CheckButton **)(this + 0xb10) = pCVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar9 = *(undefined8 *)(this + 0xb10);
  Button::set_flat(SUB81(uVar9,0));
  Control::set_focus_mode(uVar9,0);
  Control::set_default_cursor_shape(uVar9,2);
  pSVar4 = *(String **)(this + 0xb10);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Addons");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar4 = *(String **)(this + 0xb10);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Include files from addons");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xb10);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<QuickOpenResultContainer,bool>
            ((QuickOpenResultContainer *)local_68,(char *)this,
             (_func_void_bool *)"&QuickOpenResultContainer::_toggle_include_addons");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xb10),0,0);
  this_06 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_06);
  postinitialize_handler((Object *)this_06);
  Control::set_v_size_flags(this_06,4);
  fVar20 = (float)EditorScale::get_scale();
  local_48 = 0;
  local_44 = (int)(fVar20 * __LC75);
  local_50 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
  Control::set_custom_minimum_size(this_06);
  Node::add_child(pBVar11,this_06,0,0);
  this_07 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(this_07,(String *)local_68);
  postinitialize_handler((Object *)this_07);
  *(Button **)(this + 0xb08) = this_07;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  uVar9 = *(undefined8 *)(this + 0xb08);
  Button::set_flat(SUB81(uVar9,0));
  Control::set_focus_mode(uVar9,0);
  Control::set_default_cursor_shape(uVar9,2);
  plVar2 = *(long **)(this + 0xb08);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar12 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar12);
  *(undefined **)(pCVar12 + 0x20) = &_LC33;
  *(QuickOpenResultContainer **)(pCVar12 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar12 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar12 = &PTR_hash_0011c238;
  *(undefined8 *)(pCVar12 + 0x40) = 0;
  uVar9 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar12 + 0x10) = 0;
  *(undefined8 *)(pCVar12 + 0x30) = uVar9;
  *(code **)(pCVar12 + 0x38) = _toggle_display_mode;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar12,(int)pCVar12 + 0x28);
  *(char **)(pCVar12 + 0x20) = "QuickOpenResultContainer::_toggle_display_mode";
  Callable::Callable((Callable *)local_68,pCVar12);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xb08),0,0);
  return;
}



/* EditorQuickOpenDialog::EditorQuickOpenDialog() */

void __thiscall EditorQuickOpenDialog::EditorQuickOpenDialog(EditorQuickOpenDialog *this)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  BoxContainer *this_00;
  MarginContainer *this_01;
  LineEdit *this_02;
  QuickOpenResultContainer *this_03;
  CallableCustom *pCVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdc0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011bcf0;
  *(undefined8 *)(this + 0xdc8) = 0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011a358;
  postinitialize_handler((Object *)this_00);
  StringName::StringName((StringName *)&local_58,"separation",false);
  iVar6 = (int)(StringName *)&local_58;
  Control::add_theme_constant_override((StringName *)this_00,iVar6);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this,this_00,0,0);
  this_01 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_01);
  postinitialize_handler((Object *)this_01);
  StringName::StringName((StringName *)&local_58,"margin_top",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar6);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_58,"margin_bottom",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar6);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_58,"margin_left",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar6);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_58,"margin_right",false);
  Control::add_theme_constant_override((StringName *)this_01,iVar6);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this_00,this_01,0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xdb0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb0),3);
  uVar1 = *(undefined8 *)(this + 0xdb0);
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Search files...";
  local_68 = 0;
  local_50 = 0xf;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  LineEdit::set_placeholder(uVar1,(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdb0),0));
  Node::add_child(this_01,*(undefined8 *)(this + 0xdb0),0,0);
  this_03 = (QuickOpenResultContainer *)operator_new(0xb40,"");
  QuickOpenResultContainer::QuickOpenResultContainer(this_03);
  postinitialize_handler((Object *)this_03);
  lVar2 = *(long *)this_03;
  *(QuickOpenResultContainer **)(this + 0xdb8) = this_03;
  pcVar3 = *(code **)(lVar2 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC33;
  *(EditorQuickOpenDialog **)(pCVar5 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0011bf68;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar1;
  *(undefined8 *)(pCVar5 + 0x38) = 0x251;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "EditorQuickOpenDialog::ok_pressed";
  Callable::Callable((Callable *)&local_58,pCVar5);
  StringName::StringName((StringName *)&local_60,"result_clicked",false);
  (*pcVar3)(this_03,(StrRange *)&local_60,(StringName *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
  plVar4 = *(long **)(this + 0xdb0);
  pcVar3 = *(code **)(*plVar4 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC33;
  *(EditorQuickOpenDialog **)(pCVar5 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0011bff8;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar1;
  *(code **)(pCVar5 + 0x38) = _search_box_text_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "EditorQuickOpenDialog::_search_box_text_changed";
  Callable::Callable((Callable *)&local_58,pCVar5);
  (*pcVar3)(plVar4,SceneStringNames::singleton + 0x270,(StringName *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar4 = *(long **)(this + 0xdb0);
  lVar2 = *(long *)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar4 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC33;
  *(long *)(pCVar5 + 0x28) = lVar2;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0011c088;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar1;
  *(code **)(pCVar5 + 0x38) = QuickOpenResultContainer::handle_search_box_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "QuickOpenResultContainer::handle_search_box_input";
  Callable::Callable((Callable *)&local_58,pCVar5);
  (*pcVar3)(plVar4,SceneStringNames::singleton + 0x28,(StringName *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  AcceptDialog::register_text_enter((LineEdit *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_update_fuzzy_search_results() */

void __thiscall
QuickOpenResultContainer::_update_fuzzy_search_results(QuickOpenResultContainer *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  CowData<char32_t> *this_00;
  long in_FS_OFFSET;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  String local_88 [8];
  long local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  local_68 = 1;
  local_70 = _LC87;
  local_80 = 0;
  local_78 = 6;
  FuzzySearch::set_query(local_88);
  local_a0 = 0;
  local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(this + 0xaa0));
  local_98 = "filesystem/quick_open_dialog/enable_fuzzy_matching";
  local_90 = 0x32;
  String::parse_latin1((StrRange *)&local_a0);
  _EDITOR_GET((String *)local_58);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  local_98 = "filesystem/quick_open_dialog/max_fuzzy_misses";
  local_a0 = 0;
  local_90 = 0x2d;
  String::parse_latin1((StrRange *)&local_a0);
  _EDITOR_GET((String *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (!bVar5) {
    iVar6 = 0;
  }
  local_70 = CONCAT44(iVar6,(undefined4)local_70);
  local_68 = bVar5;
  FuzzySearch::search_all((Vector *)local_88,(Vector *)(this + 0xa30));
  lVar4 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_80 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_80 + -8);
      local_80 = 0;
      if (lVar2 != 0) {
        lVar7 = 0;
        this_00 = (CowData<char32_t> *)(lVar4 + 8);
        do {
          lVar7 = lVar7 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar2 != lVar7);
      }
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultGridItem::QuickOpenResultGridItem() */

void __thiscall QuickOpenResultGridItem::QuickOpenResultGridItem(QuickOpenResultGridItem *this)

{
  StringName *pSVar1;
  Vector2 *pVVar2;
  int iVar3;
  BoxContainer *this_00;
  TextureRect *this_01;
  Label *this_02;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011adb0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  fVar4 = (float)EditorScale::get_scale();
  local_48 = (ulong)(uint)(int)(fVar4 * __LC106);
  local_50 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
  Control::set_custom_minimum_size(this);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"margin_top",false);
  iVar3 = (int)(StringName *)&local_58;
  Control::add_theme_constant_override((StringName *)this,iVar3);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"margin_left",false);
  Control::add_theme_constant_override((StringName *)this,iVar3);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"margin_right",false);
  Control::add_theme_constant_override((StringName *)this,iVar3);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011a358;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa10) = this_00;
  Control::set_h_size_flags(this_00,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa10),3);
  pSVar1 = *(StringName **)(this + 0xa10);
  if (QuickOpenResultGridItem()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&QuickOpenResultGridItem()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&QuickOpenResultGridItem()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &QuickOpenResultGridItem()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&QuickOpenResultGridItem()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override(pSVar1,0x109b28);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  fVar4 = (float)EditorScale::get_scale();
  fVar4 = fVar4 * __LC108;
  this_01 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_01);
  postinitialize_handler((Object *)this_01);
  *(TextureRect **)(this + 0xa18) = this_01;
  Control::set_h_size_flags(this_01,4);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),4);
  pVVar2 = *(Vector2 **)(this + 0xa18);
  local_50 = CONCAT44((int)fVar4,(int)fVar4);
  local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
  Control::set_custom_minimum_size(pVVar2);
  Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xa18),0,0);
  this_02 = (Label *)operator_new(0xae8,"");
  local_58 = 0;
  Label::Label(this_02,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  *(undefined8 *)(this_02 + 0xae0) = 0;
  *(undefined ***)this_02 = &PTR__initialize_classv_0011a6d0;
  postinitialize_handler((Object *)this_02);
  *(Label **)(this + 0xa20) = this_02;
  Control::set_h_size_flags(this_02,3);
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xa20),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa20),1);
  pSVar1 = *(StringName **)(this + 0xa20);
  EditorScale::get_scale();
  Control::add_theme_font_size_override(pSVar1,(int)SceneStringNames::singleton + 0xa8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xa20),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultListItem::QuickOpenResultListItem() */

void __thiscall QuickOpenResultListItem::QuickOpenResultListItem(QuickOpenResultListItem *this)

{
  Vector2 *pVVar1;
  StringName *pSVar2;
  int iVar3;
  BoxContainer *pBVar4;
  TextureRect *this_00;
  Label *pLVar5;
  long in_FS_OFFSET;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011b128;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  Control::set_h_size_flags(this,3);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"margin_left",false);
  iVar3 = (int)(StringName *)&local_58;
  Control::add_theme_constant_override((StringName *)this,iVar3);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"margin_right",false);
  Control::add_theme_constant_override((StringName *)this,iVar3);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,false);
  pBVar4[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar4 = &PTR__initialize_classv_00119fe0;
  postinitialize_handler((Object *)pBVar4);
  *(BoxContainer **)(this + 0xa10) = pBVar4;
  auVar7._0_8_ = EditorScale::get_scale();
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (float)auVar7._0_8_ * __LC110;
  if (QuickOpenResultListItem()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(auVar8._0_8_,
                                &QuickOpenResultListItem()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&QuickOpenResultListItem()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &QuickOpenResultListItem()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&QuickOpenResultListItem()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar4,0x109b48);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  fVar6 = (float)EditorScale::get_scale();
  fVar6 = fVar6 * __LC111;
  this_00 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_00);
  postinitialize_handler((Object *)this_00);
  *(TextureRect **)(this + 0xa20) = this_00;
  Control::set_h_size_flags(this_00,4);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa20),4);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa20),1);
  TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa20),5);
  pVVar1 = *(Vector2 **)(this + 0xa20);
  local_50 = CONCAT44((int)fVar6,(int)fVar6);
  local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
  Control::set_custom_minimum_size(pVVar1);
  Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xa20),0,0);
  pBVar4 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar4,true);
  pBVar4[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar4 = &PTR__initialize_classv_0011a358;
  postinitialize_handler((Object *)pBVar4);
  *(BoxContainer **)(this + 0xa18) = pBVar4;
  auVar9._0_8_ = EditorScale::get_scale();
  auVar9._8_8_ = extraout_XMM0_Qb_00;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = (float)auVar9._0_8_ * __LC112;
  if (QuickOpenResultListItem()::{lambda()#2}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(auVar10._0_8_,
                                &QuickOpenResultListItem()::{lambda()#2}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&QuickOpenResultListItem()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &QuickOpenResultListItem()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&QuickOpenResultListItem()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)pBVar4,0x109b38);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),1);
  Node::add_child(*(undefined8 *)(this + 0xa10),*(undefined8 *)(this + 0xa18),0,0);
  pLVar5 = (Label *)operator_new(0xae8,"");
  local_58 = 0;
  Label::Label(pLVar5,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  *(undefined ***)pLVar5 = &PTR__initialize_classv_0011a6d0;
  *(undefined8 *)(pLVar5 + 0xae0) = 0;
  postinitialize_handler((Object *)pLVar5);
  *(Label **)(this + 0xa28) = pLVar5;
  Control::set_h_size_flags(pLVar5,3);
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xa28),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa28),0);
  Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa28),0,0);
  pLVar5 = (Label *)operator_new(0xae8,"");
  local_58 = 0;
  Label::Label(pLVar5,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  *(undefined ***)pLVar5 = &PTR__initialize_classv_0011a6d0;
  *(undefined8 *)(pLVar5 + 0xae0) = 0;
  postinitialize_handler((Object *)pLVar5);
  *(Label **)(this + 0xa30) = pLVar5;
  Control::set_h_size_flags(pLVar5,3);
  Label::set_text_overrun_behavior(*(undefined8 *)(this + 0xa30),3);
  pSVar2 = *(StringName **)(this + 0xa30);
  EditorScale::get_scale();
  Control::add_theme_font_size_override(pSVar2,(int)SceneStringNames::singleton + 0xa8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xa18),*(undefined8 *)(this + 0xa30),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultItem::QuickOpenResultItem() */

void __thiscall QuickOpenResultItem::QuickOpenResultItem(QuickOpenResultItem *this)

{
  undefined8 uVar1;
  QuickOpenResultListItem *this_00;
  QuickOpenResultGridItem *this_01;
  bool bVar2;
  
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined2 *)(this + 0xa40) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011b4a0;
  *(undefined2 *)(this + 0xa0c) = 0x101;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  uVar1 = _UNK_0011c728;
  *(undefined8 *)(this + 0xa30) = __LC115;
  *(undefined8 *)(this + 0xa38) = uVar1;
  Control::set_focus_mode(this,2);
  bVar2 = SUB81(this,0);
  CanvasItem::set_visible(bVar2);
  Node::set_process(bVar2);
  Node::set_process_input(bVar2);
  Control::set_default_cursor_shape(this,2);
  this_00 = (QuickOpenResultListItem *)operator_new(0xa38,"");
  QuickOpenResultListItem::QuickOpenResultListItem(this_00);
  postinitialize_handler((Object *)this_00);
  *(QuickOpenResultListItem **)(this + 0xa10) = this_00;
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  this_01 = (QuickOpenResultGridItem *)operator_new(0xa28,"");
  QuickOpenResultGridItem::QuickOpenResultGridItem(this_01);
  postinitialize_handler((Object *)this_01);
  *(QuickOpenResultGridItem **)(this + 0xa18) = this_01;
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  return;
}



/* Container::initialize_class() [clone .part.0] */

void Container::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((code *)PTR__bind_methods_00123008 != Control::_bind_methods) {
    Container::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultContainer::_bind_methods() */

void QuickOpenResultContainer::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_b0 = 0xe;
  local_b8 = "result_clicked";
  String::parse_latin1((StrRange *)&local_d0);
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  local_c8 = "QuickOpenResultContainer";
  local_d8 = 0;
  local_c0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_notification(int) [clone .part.0] */

void QuickOpenResultContainer::_notification(int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined4 in_register_0000003c;
  StringName *pSVar6;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  long local_30;
  
  pSVar6 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,"font_readonly_color",false);
  local_48 = Control::get_theme_color(pSVar6,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
    StringName::unref();
  }
  Control::add_theme_color_override
            (*(StringName **)(pSVar6 + 0xb00),(Color *)(SceneStringNames::singleton + 0xb0));
  Control::add_theme_color_override
            (*(StringName **)(pSVar6 + 0xaf8),(Color *)(SceneStringNames::singleton + 0xb0));
  pSVar1 = *(StringName **)(pSVar6 + 0xae8);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_50,pSVar6);
  Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar2 = *(Ref **)(pSVar6 + 0xb08);
  if (*(int *)(pSVar6 + 0xab0) == 1) {
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
  }
  else {
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar2);
    if (local_50 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_50);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_50 + 0x140))(local_50);
          Memory::free_static(local_50,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_notification(int) */

void __thiscall QuickOpenResultContainer::_notification(QuickOpenResultContainer *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* QuickOpenResultContainer::_setup_candidate(QuickOpenResultCandidate&, String const&) */

void __thiscall
QuickOpenResultContainer::_setup_candidate
          (QuickOpenResultContainer *this,QuickOpenResultCandidate *param_1,String *param_2)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  Ref *pRVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  CowData<char32_t> *local_80;
  long local_70;
  undefined8 local_68;
  Ref *local_60;
  Ref *local_58;
  Object *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EditorFileSystem::get_file_uid(EditorFileSystem::singleton);
  if (lVar6 == -1) {
    if (*(long *)param_1 != *(long *)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)param_2);
    }
  }
  else {
    ResourceUID::id_to_text((long)&local_58);
    if (*(Ref **)param_1 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_1);
      pRVar8 = local_58;
      local_58 = (Ref *)0x0;
      *(Ref **)param_1 = pRVar8;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  local_80 = (CowData<char32_t> *)&local_58;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_70 = 0;
  uVar4 = String::hash();
  lVar6 = *(long *)(this + 0xa50);
  uVar7 = 1;
  if (uVar4 != 0) {
    uVar7 = (ulong)uVar4;
  }
  uVar9 = uVar7 % (ulong)*(uint *)(this + 0xa58);
  uVar4 = *(uint *)(lVar6 + uVar9 * 4);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      if ((uint)uVar7 == uVar4) {
        cVar3 = String::operator==((String *)(*(long *)(this + 0xa48) + uVar9 * 8),param_2);
        if (cVar3 != '\0') {
          pSVar1 = (StringName *)(*(long *)(this + 0xa40) + uVar9 * 8);
          if (pSVar1 != (StringName *)0x0) {
            StringName::operator=((StringName *)&local_70,pSVar1);
            goto LAB_00104efb;
          }
          break;
        }
        lVar6 = *(long *)(this + 0xa50);
      }
      uVar11 = *(uint *)(this + 0xa58);
      uVar12 = uVar12 + 1;
      uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar11;
      uVar4 = *(uint *)(lVar6 + uVar9 * 4);
      if ((uVar4 == 0) || (((uVar11 + (int)uVar9) - uVar4 % uVar11) % uVar11 < uVar12)) break;
    } while( true );
  }
  local_60 = (Ref *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_2);
  }
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"EditorQuickOpenDialog: No type for path %s.");
  vformat<String>(local_80,(String *)&local_68,(CowData<char32_t> *)&local_60);
  _err_print_error("_setup_candidate","editor/gui/editor_quick_open_dialog.cpp",0x1b2,local_80,0);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00104efb:
  EditorResourcePreview::get_singleton();
  EditorResourcePreview::get_resource_preview_if_available((String *)local_80);
  pRVar8 = local_58;
  if (local_58 == (Ref *)0x0) {
    if (local_70 == 0) {
      uVar4 = StringName::get_empty_hash();
    }
    else {
      uVar4 = *(uint *)(local_70 + 0x20);
    }
    uVar12 = *(uint *)(this + 0xb38);
    uVar7 = (ulong)uVar12;
    lVar6 = *(long *)(this + 0xb30);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    uVar9 = (ulong)uVar4 % uVar7;
    uVar11 = *(uint *)(lVar6 + uVar9 * 4);
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        if ((uVar4 == uVar11) && (*(long *)(*(long *)(this + 0xb28) + uVar9 * 8) == local_70)) {
          if (local_70 == 0) {
            uVar4 = StringName::get_empty_hash();
            lVar6 = *(long *)(this + 0xb30);
            uVar7 = (ulong)*(uint *)(this + 0xb38);
          }
          else {
            uVar4 = *(uint *)(local_70 + 0x20);
          }
          if (uVar4 == 0) {
            uVar4 = 1;
          }
          uVar9 = (ulong)uVar4 % uVar7;
          uVar12 = *(uint *)(lVar6 + uVar9 * 4);
          if (uVar12 == 0) goto LAB_001053ca;
          uVar11 = 0;
          goto LAB_00105199;
        }
        uVar10 = uVar10 + 1;
        uVar9 = (ulong)((int)uVar9 + 1) % uVar7;
        uVar11 = *(uint *)(lVar6 + uVar9 * 4);
      } while ((uVar11 != 0) && (uVar10 <= ((uVar12 + (int)uVar9) - uVar11 % uVar12) % uVar12));
    }
    cVar3 = Control::has_theme_icon((StringName *)this,(StringName *)&local_70);
    if (cVar3 == '\0') {
      if ((_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}::operator()()::
           sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_setup_candidate(QuickOpenResultCandidate&,String_const&)::
                                       {lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}
                             ::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}
                             ::operator()()::sname);
      }
      if (_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}::operator()()::
          sname == 0) {
        uVar4 = StringName::get_empty_hash();
      }
      else {
        uVar4 = *(uint *)(_setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}::
                          operator()()::sname + 0x20);
      }
      uVar12 = *(uint *)(this + 0xb38);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      uVar9 = (ulong)uVar4 % (ulong)uVar12;
      uVar11 = *(uint *)(*(long *)(this + 0xb30) + uVar9 * 4);
      if (uVar11 != 0) {
        uVar10 = 0;
        do {
          if ((uVar11 == uVar4) &&
             (*(long *)(*(long *)(this + 0xb28) + uVar9 * 8) ==
              _setup_candidate(QuickOpenResultCandidate&,String_const&)::{lambda()#1}::operator()()
              ::sname)) goto LAB_001051ab;
          uVar10 = uVar10 + 1;
          uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar12;
          uVar11 = *(uint *)(*(long *)(this + 0xb30) + uVar9 * 4);
        } while ((uVar11 != 0) && (uVar10 <= ((uVar12 + (int)uVar9) - uVar11 % uVar12) % uVar12));
      }
      goto LAB_001053ca;
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(param_1 + 8),local_60);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
    insert((OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
            *)(this + 0xb20),(StringName *)&local_70,(Ref *)(param_1 + 8));
    goto LAB_00104f27;
  }
LAB_00104f1e:
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(param_1 + 8),pRVar8);
LAB_00104f27:
  if (((local_50 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_50), cVar3 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  if (((local_58 != (Ref *)0x0) &&
      (cVar3 = RefCounted::unreference(), pRVar8 = local_58, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_58), cVar3 != '\0')) {
    (**(code **)(*(long *)pRVar8 + 0x140))(pRVar8);
    Memory::free_static(pRVar8,false);
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001051ab:
  pRVar8 = *(Ref **)(*(long *)(this + 0xb20) + uVar9 * 8);
  goto LAB_00104f1e;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar9 = (ulong)((int)uVar9 + 1) % uVar7;
    uVar12 = *(uint *)(lVar6 + uVar9 * 4);
    if ((uVar12 == 0) ||
       ((uint)((ulong)(uint)(((int)uVar9 + (int)uVar7) - (int)((ulong)uVar12 % uVar7)) % uVar7) <
        uVar11)) break;
LAB_00105199:
    if ((uVar4 == uVar12) && (*(long *)(*(long *)(this + 0xb28) + uVar9 * 8) == local_70))
    goto LAB_001051ab;
  }
LAB_001053ca:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* QuickOpenResultContainer::_setup_candidate(QuickOpenResultCandidate&, FuzzySearchResult const&)
    */

void __thiscall
QuickOpenResultContainer::_setup_candidate
          (QuickOpenResultContainer *this,QuickOpenResultCandidate *param_1,
          FuzzySearchResult *param_2)

{
  _setup_candidate(this,param_1,(String *)(param_2 + 0x10));
  *(FuzzySearchResult **)(param_1 + 0x10) = param_2;
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* QuickOpenResultContainer::get_adaptive_display_mode(Vector<StringName> const&) */

undefined8 QuickOpenResultContainer::get_adaptive_display_mode(Vector *param_1)

{
  StringName *pSVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  StringName *pSVar7;
  long lVar8;
  long *plVar9;
  StringName *pSVar10;
  long lVar11;
  long in_FS_OFFSET;
  StringName local_68 [8];
  StringName local_60 [8];
  StringName local_58 [8];
  StringName local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types == '\0') &&
     (iVar4 = __cxa_guard_acquire(&get_adaptive_display_mode(Vector<StringName>const&)::
                                   grid_preferred_types), iVar4 != 0)) {
    StringName::StringName(local_68,"Font",false);
    StringName::StringName(local_60,"Texture2D",false);
    StringName::StringName(local_58,"Material",false);
    StringName::StringName(local_50,"Mesh",false);
    get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_ = 0;
    CowData<StringName>::_copy_on_write
              ((CowData<StringName> *)
               (get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types + 8));
    puVar6 = (undefined8 *)Memory::alloc_static(0x30,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      lVar8 = 0;
      *puVar6 = 1;
      get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_ = puVar6 + 2;
      *(undefined1 (*) [16])(puVar6 + 4) = (undefined1  [16])0x0;
      puVar6[1] = 4;
      *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
      puVar6 = puVar6 + 2;
      do {
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = 0;
LAB_00105868:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar11,"p_index","size()","",
                     false,false);
        }
        else {
          lVar11 = puVar6[-1];
          if (lVar11 <= lVar8) goto LAB_00105868;
          CowData<StringName>::_copy_on_write
                    ((CowData<StringName> *)
                     (get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types + 8)
                    );
          StringName::operator=
                    ((StringName *)
                     (get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types.
                      _8_8_ + lVar8 * 8),local_60 + lVar8 * 8 + -8);
        }
        lVar8 = lVar8 + 1;
        puVar6 = (undefined8 *)
                 get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_;
      } while (lVar8 != 4);
    }
    plVar9 = &local_48;
    __cxa_atexit(Vector<StringName>::~Vector,
                 get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types,
                 &__dso_handle);
    __cxa_guard_release(&get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types);
    do {
      plVar9 = plVar9 + -1;
      if ((StringName::configured != '\0') && (*plVar9 != 0)) {
        StringName::unref();
      }
    } while ((StringName *)plVar9 != local_68);
  }
  if (get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_ != 0) {
    pSVar2 = (StringName *)
             (get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_ +
             *(long *)(get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types.
                       _8_8_ + -8) * 8);
    for (pSVar10 = (StringName *)
                   get_adaptive_display_mode(Vector<StringName>const&)::grid_preferred_types._8_8_;
        pSVar2 != pSVar10; pSVar10 = pSVar10 + 8) {
      pSVar7 = *(StringName **)(param_1 + 8);
      if (pSVar7 != (StringName *)0x0) {
        pSVar1 = pSVar7 + *(long *)(pSVar7 + -8) * 8;
        for (; pSVar1 != pSVar7; pSVar7 = pSVar7 + 8) {
          if ((*(long *)pSVar7 == *(long *)pSVar10) ||
             (cVar3 = ClassDB::is_parent_class(pSVar7,pSVar10), cVar3 != '\0')) {
            uVar5 = 0;
            goto LAB_001056d3;
          }
        }
      }
    }
  }
  uVar5 = 1;
LAB_001056d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* QuickOpenResultContainer::_find_filepaths_in_folder(EditorFileSystemDirectory*, bool) */

void __thiscall
QuickOpenResultContainer::_find_filepaths_in_folder
          (QuickOpenResultContainer *this,EditorFileSystemDirectory *param_1,bool param_2)

{
  long *plVar1;
  String *pSVar2;
  CowData<char32_t> *this_00;
  char *pcVar3;
  char cVar4;
  int iVar5;
  EditorFileSystemDirectory *pEVar6;
  StringName *pSVar7;
  int iVar8;
  StringName *pSVar9;
  long lVar10;
  long lVar11;
  StringName *pSVar12;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar5) {
    do {
      if (!param_2) {
        while( true ) {
          EditorFileSystemDirectory::get_name();
          cVar4 = String::operator!=((String *)&local_58,"addons");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          if (cVar4 != '\0') break;
          iVar8 = iVar8 + 1;
          iVar5 = EditorFileSystemDirectory::get_subdir_count();
          if (iVar5 <= iVar8) goto LAB_00105958;
        }
      }
      iVar8 = iVar8 + 1;
      pEVar6 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
      _find_filepaths_in_folder(this,pEVar6,param_2);
      iVar5 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar8 < iVar5);
  }
LAB_00105958:
  iVar8 = 0;
  iVar5 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar5) {
    do {
      EditorFileSystemDirectory::get_file_path((int)(CowData<char32_t> *)&local_80);
      EditorFileSystemDirectory::get_file_type((int)(StringName *)&local_78);
      EditorFileSystemDirectory::get_file_resource_script_class((int)(StringName *)&local_70);
      lVar11 = local_70;
      pSVar7 = (StringName *)&local_70;
      if (local_70 == 0) {
        pSVar7 = (StringName *)&local_78;
      }
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0xa28));
      pSVar12 = *(StringName **)(this + 0xa28);
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0xa28));
      pSVar9 = *(StringName **)(this + 0xa28);
      if (pSVar9 != (StringName *)0x0) {
        pSVar9 = pSVar9 + *(long *)(pSVar9 + -8) * 8;
      }
      for (; pSVar12 != pSVar9; pSVar12 = pSVar12 + 8) {
        cVar4 = ClassDB::is_parent_class((StringName *)&local_78,pSVar12);
        if (cVar4 != '\0') {
LAB_00105b72:
          local_58 = (char *)0x0;
          if (local_80 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_80);
          }
          if (*(long *)(this + 0xa38) == 0) {
            lVar11 = 1;
          }
          else {
            lVar11 = *(long *)(*(long *)(this + 0xa38) + -8) + 1;
          }
          iVar5 = CowData<String>::resize<false>((CowData<String> *)(this + 0xa38),lVar11);
          if (iVar5 == 0) {
            if (*(long *)(this + 0xa38) == 0) {
              lVar10 = -1;
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(*(long *)(this + 0xa38) + -8);
              lVar10 = lVar11 + -1;
              if (-1 < lVar10) {
                CowData<String>::_copy_on_write((CowData<String> *)(this + 0xa38));
                this_00 = (CowData<char32_t> *)(*(long *)(this + 0xa38) + lVar10 * 8);
                if (*(char **)this_00 != local_58) {
                  CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
                }
                goto LAB_00105c16;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar11,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_00105c16:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>
                      *)(this + 0xa40),(String *)&local_80,pSVar7);
          break;
        }
        if (lVar11 != 0) {
          lVar10 = *(long *)pSVar12;
          pSVar2 = (String *)(EditorNode::singleton + 0x430);
          if (lVar10 == 0) {
            local_60 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar10 + 8);
            local_60 = 0;
            if (pcVar3 == (char *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          if (local_70 == 0) {
            local_68 = 0;
          }
          else {
            pcVar3 = *(char **)(local_70 + 8);
            local_68 = 0;
            if (pcVar3 == (char *)0x0) {
              if (*(long *)(local_70 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10))
                ;
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          cVar4 = EditorData::script_class_is_parent(pSVar2,(String *)&local_68);
          lVar10 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          lVar10 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          if (cVar4 != '\0') goto LAB_00105b72;
        }
      }
      if ((StringName::configured != '\0') &&
         (((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_78 != 0)))) {
        StringName::unref();
      }
      iVar8 = iVar8 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      iVar5 = EditorFileSystemDirectory::get_file_count();
    } while (iVar8 < iVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<QuickOpenResultCandidate>::_ref(CowData<QuickOpenResultCandidate> const&) [clone .part.0]
    */

void __thiscall
CowData<QuickOpenResultCandidate>::_ref(CowData<QuickOpenResultCandidate> *this,CowData *param_1)

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



/* CowData<QuickOpenResultCandidate>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<QuickOpenResultCandidate>::_copy_on_write(CowData<QuickOpenResultCandidate> *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  CowData *pCVar5;
  CowData<char32_t> *this_00;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,pCVar5);
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          *(long *)(this_00 + 8) = *(long *)(pCVar5 + 8);
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this_00 + 8) = 0;
          }
        }
        lVar7 = lVar7 + 1;
        *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(pCVar5 + 0x10);
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* QuickOpenResultContainer::_use_default_candidates() */

void __thiscall QuickOpenResultContainer::_use_default_candidates(QuickOpenResultContainer *this)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  String *pSVar4;
  QuickOpenResultCandidate *pQVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  String *pSVar10;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  undefined8 local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa38) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xa38) + -8);
    if (0x1e < lVar8) {
      plVar2 = *(long **)(this + 0xa28);
      if ((plVar2 != (long *)0x0) && (plVar2[-1] == 1)) {
        if (*plVar2 == 0) {
          uVar3 = StringName::get_empty_hash();
        }
        else {
          uVar3 = *(uint *)(*plVar2 + 0x20);
        }
        uVar1 = *(uint *)(this + 0xa88);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        uVar7 = (ulong)uVar3 % (ulong)uVar1;
        uVar6 = *(uint *)(*(long *)(this + 0xa80) + uVar7 * 4);
        if (uVar6 != 0) {
          uVar9 = 0;
          while ((uVar3 != uVar6 || (*(long *)(*(long *)(this + 0xa78) + uVar7 * 8) != *plVar2))) {
            uVar9 = uVar9 + 1;
            uVar7 = (ulong)((int)uVar7 + 1) % (ulong)uVar1;
            uVar6 = *(uint *)(*(long *)(this + 0xa80) + uVar7 * 4);
            if ((uVar6 == 0) || (((uVar1 + (int)uVar7) - uVar6 % uVar1) % uVar1 < uVar9))
            goto LAB_0010603c;
          }
          lVar8 = uVar7 * 0x10 + *(long *)(this + 0xa70);
          if (lVar8 != 0) {
            this[0xaa4] = (QuickOpenResultContainer)0x1;
            local_40[0] = 0;
            if (*(long *)(lVar8 + 8) != 0) {
              CowData<QuickOpenResultCandidate>::_ref
                        ((CowData<QuickOpenResultCandidate> *)local_40,(CowData *)(lVar8 + 8));
            }
            Vector<QuickOpenResultCandidate>::append_array
                      ((Vector<QuickOpenResultCandidate> *)(this + 0xa60),auStack_48);
            CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)local_40)
            ;
          }
        }
      }
      goto LAB_0010603c;
    }
  }
  CowData<QuickOpenResultCandidate>::resize<false>
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68),lVar8);
  CowData<QuickOpenResultCandidate>::_copy_on_write
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68));
  pQVar5 = *(QuickOpenResultCandidate **)(this + 0xa68);
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xa38));
  pSVar4 = *(String **)(this + 0xa38);
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xa38));
  pSVar10 = *(String **)(this + 0xa38);
  if (pSVar10 != (String *)0x0) {
    pSVar10 = pSVar10 + *(long *)(pSVar10 + -8) * 8;
  }
  for (; pSVar4 != pSVar10; pSVar4 = pSVar4 + 8) {
    _setup_candidate(this,pQVar5,pSVar4);
    pQVar5 = pQVar5 + 0x18;
  }
LAB_0010603c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultContainer::save_selected_item() */

void __thiscall QuickOpenResultContainer::save_selected_item(QuickOpenResultContainer *this)

{
  long lVar1;
  String *pSVar2;
  uint uVar3;
  StringName *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Object *pOVar7;
  Object *pOVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  CowData *pCVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  CowData<char32_t> *pCVar21;
  long lVar22;
  long lVar23;
  CowData *pCVar24;
  long in_FS_OFFSET;
  Ref<Texture2D> *local_a0;
  CowData<QuickOpenResultCandidate> *local_98;
  CowData<char32_t> *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> *local_70;
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = *(StringName **)(this + 0xa28);
  if (pSVar4 == (StringName *)0x0) {
    lVar16 = 0;
LAB_0010693b:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar16,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  lVar16 = *(long *)(pSVar4 + -8);
  if (lVar16 < 2) {
    if (lVar16 != 1) goto LAB_0010693b;
    lVar15 = (long)*(int *)(this + 0xa98);
    lVar16 = *(long *)(this + 0xa68);
    if (lVar15 < 0) {
      if (lVar16 != 0) {
        lVar16 = *(long *)(lVar16 + -8);
        goto LAB_0010687d;
      }
    }
    else if (lVar16 != 0) {
      lVar16 = *(long *)(lVar16 + -8);
      if (lVar15 < lVar16) {
        CowData<QuickOpenResultCandidate>::_copy_on_write
                  ((CowData<QuickOpenResultCandidate> *)(this + 0xa68));
        pSVar2 = (String *)(*(long *)(this + 0xa68) + lVar15 * 0x18);
        if (*(long *)pSVar4 == 0) {
          uVar13 = StringName::get_empty_hash();
        }
        else {
          uVar13 = *(uint *)(*(long *)pSVar4 + 0x20);
        }
        uVar3 = *(uint *)(this + 0xa88);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        uVar14 = (ulong)uVar13 % (ulong)uVar3;
        uVar19 = *(uint *)(*(long *)(this + 0xa80) + uVar14 * 4);
        if (uVar19 != 0) {
          uVar18 = 0;
          while ((uVar13 != uVar19 ||
                 (*(long *)(*(long *)(this + 0xa78) + uVar14 * 8) != *(long *)pSVar4))) {
            uVar18 = uVar18 + 1;
            uVar14 = (ulong)((int)uVar14 + 1) % (ulong)uVar3;
            uVar19 = *(uint *)(*(long *)(this + 0xa80) + uVar14 * 4);
            if ((uVar19 == 0) || (((uVar3 + (int)uVar14) - uVar19 % uVar3) % uVar3 < uVar18))
            goto LAB_00106980;
          }
          lVar16 = uVar14 * 0x10 + *(long *)(this + 0xa70);
          if (lVar16 != 0) {
            lVar15 = *(long *)(lVar16 + 8);
            lVar22 = 0;
            if (lVar15 != 0) goto LAB_00106392;
            local_98 = (CowData<QuickOpenResultCandidate> *)(lVar16 + 8);
            goto LAB_0010672b;
          }
        }
LAB_00106980:
        local_70 = (CowData<char32_t> *)0x0;
        OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
        ::insert((OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                  *)(this + 0xa70),pSVar4,(Vector *)&local_78);
        CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)&local_70);
        if (*(long *)pSVar4 == 0) {
          uVar13 = StringName::get_empty_hash();
        }
        else {
          uVar13 = *(uint *)(*(long *)pSVar4 + 0x20);
        }
        uVar3 = *(uint *)(this + 0xa88);
        uVar14 = 1;
        if (uVar13 != 0) {
          uVar14 = (ulong)uVar13;
        }
        uVar20 = uVar14 % (ulong)uVar3;
        uVar13 = *(uint *)(*(long *)(this + 0xa80) + uVar20 * 4);
        if (uVar13 != 0) {
          uVar19 = 0;
          do {
            if ((uVar13 == (uint)uVar14) &&
               (*(long *)(*(long *)(this + 0xa78) + uVar20 * 8) == *(long *)pSVar4)) {
              lVar16 = uVar20 * 0x10 + *(long *)(this + 0xa70);
              local_98 = (CowData<QuickOpenResultCandidate> *)(lVar16 + 8);
              goto LAB_0010672b;
            }
            uVar19 = uVar19 + 1;
            uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
            uVar13 = *(uint *)(*(long *)(this + 0xa80) + uVar20 * 4);
          } while ((uVar13 != 0) && (uVar19 <= ((uVar3 + (int)uVar20) - uVar13 % uVar3) % uVar3));
        }
        *(undefined8 *)(pSVar2 + 0x10) = 0;
        local_78 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pSVar2);
        local_70 = (CowData<char32_t> *)0x0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_70,*(Ref **)(pSVar2 + 8));
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      goto LAB_0010687d;
    }
    lVar16 = 0;
LAB_0010687d:
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar16,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  goto LAB_001066ef;
LAB_00106392:
  do {
    if (*(long *)(lVar15 + -8) <= lVar22) break;
    local_78 = 0;
    pCVar17 = (CowData *)(lVar15 + lVar22 * 0x18);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar17);
    local_70 = (CowData<char32_t> *)0x0;
    if ((*(CowData<char32_t> **)(pCVar17 + 8) != (CowData<char32_t> *)0x0) &&
       (local_70 = *(CowData<char32_t> **)(pCVar17 + 8), cVar11 = RefCounted::reference(),
       cVar11 == '\0')) {
      local_70 = (CowData<char32_t> *)0x0;
    }
    local_68 = *(undefined8 *)(pCVar17 + 0x10);
    cVar11 = String::operator==(pSVar2,(String *)&local_78);
    if (((local_70 == (CowData<char32_t> *)0x0) ||
        (cVar10 = RefCounted::unreference(), pCVar21 = local_70, cVar10 == '\0')) ||
       (cVar10 = predelete_handler((Object *)local_70), cVar10 == '\0')) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (cVar11 == '\0') goto LAB_00106381;
LAB_00106470:
      local_98 = (CowData<QuickOpenResultCandidate> *)(lVar16 + 8);
      if (*(long *)(lVar16 + 8) == 0) {
        lVar15 = 0;
LAB_00106af2:
        _err_print_index_error
                  ("remove_at","./core/templates/cowdata.h",0xe4,lVar22,lVar15,"p_index","size()",""
                   ,false,false);
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar16 + 8) + -8);
        if (lVar15 <= lVar22) goto LAB_00106af2;
        CowData<QuickOpenResultCandidate>::_copy_on_write(local_98);
        lVar15 = *(long *)(lVar16 + 8);
        if (lVar15 == 0) {
          lVar23 = -1;
        }
        else {
          lVar1 = *(long *)(lVar15 + -8) + -1;
          lVar23 = lVar1;
          if (lVar22 < lVar1) {
            pCVar21 = (CowData<char32_t> *)(lVar22 * 0x18 + lVar15);
            do {
              if (*(long *)pCVar21 != *(long *)(pCVar21 + 0x18)) {
                CowData<char32_t>::_unref(pCVar21);
                uVar5 = *(undefined8 *)(pCVar21 + 0x18);
                *(undefined8 *)(pCVar21 + 0x18) = 0;
                *(undefined8 *)pCVar21 = uVar5;
              }
              lVar22 = lVar22 + 1;
              Ref<Texture2D>::operator=((Ref<Texture2D> *)(pCVar21 + 8),*(Ref **)(pCVar21 + 0x20));
              *(undefined8 *)(pCVar21 + 0x10) = *(undefined8 *)(pCVar21 + 0x28);
              pCVar21 = pCVar21 + 0x18;
              lVar23 = lVar22;
            } while (lVar1 != lVar22);
          }
        }
        CowData<QuickOpenResultCandidate>::resize<false>(local_98,lVar23);
      }
      goto LAB_0010672b;
    }
    (**(code **)(*(long *)pCVar21 + 0x140))();
    Memory::free_static(pCVar21,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (cVar11 != '\0') goto LAB_00106470;
LAB_00106381:
    lVar15 = *(long *)(lVar16 + 8);
    lVar22 = lVar22 + 1;
  } while (lVar15 != 0);
  local_98 = (CowData<QuickOpenResultCandidate> *)(lVar16 + 8);
LAB_0010672b:
  local_a0 = (Ref<Texture2D> *)&local_70;
  *(undefined8 *)(pSVar2 + 0x10) = 0;
  local_78 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pSVar2);
  local_70 = (CowData<char32_t> *)0x0;
  Ref<Texture2D>::operator=(local_a0,*(Ref **)(pSVar2 + 8));
  uVar5 = *(undefined8 *)(pSVar2 + 0x10);
  local_68 = uVar5;
  if (*(long *)(lVar16 + 8) == 0) {
    iVar12 = CowData<QuickOpenResultCandidate>::resize<false>(local_98,1);
    if (iVar12 == 0) {
      CowData<QuickOpenResultCandidate>::_copy_on_write(local_98);
      local_90 = *(CowData<char32_t> **)(lVar16 + 8);
      goto LAB_00106558;
    }
LAB_00106ac5:
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
  }
  else {
    lVar22 = *(long *)(*(long *)(lVar16 + 8) + -8);
    lVar15 = lVar22 + 1;
    if (lVar15 < 1) {
      _err_print_index_error
                ("insert","./core/templates/cowdata.h",0xf0,0,lVar15,"p_pos","new_size","",false,
                 false);
    }
    else {
      iVar12 = CowData<QuickOpenResultCandidate>::resize<false>(local_98,lVar15);
      if (iVar12 != 0) goto LAB_00106ac5;
      CowData<QuickOpenResultCandidate>::_copy_on_write(local_98);
      local_90 = *(CowData<char32_t> **)(lVar16 + 8);
      if (lVar22 != 0) {
        pCVar21 = local_90 + lVar22 * 0x18;
        do {
          if (*(long *)pCVar21 != *(long *)(pCVar21 + -0x18)) {
            CowData<char32_t>::_unref(pCVar21);
            uVar6 = *(undefined8 *)(pCVar21 + -0x18);
            *(undefined8 *)(pCVar21 + -0x18) = 0;
            *(undefined8 *)pCVar21 = uVar6;
          }
          pOVar7 = *(Object **)(pCVar21 + -0x10);
          pOVar8 = *(Object **)(pCVar21 + 8);
          if (pOVar7 != pOVar8) {
            *(Object **)(pCVar21 + 8) = pOVar7;
            if ((pOVar7 != (Object *)0x0) && (cVar11 = RefCounted::reference(), cVar11 == '\0')) {
              *(undefined8 *)(pCVar21 + 8) = 0;
            }
            if (((pOVar8 != (Object *)0x0) && (cVar11 = RefCounted::unreference(), cVar11 != '\0'))
               && (cVar11 = predelete_handler(pOVar8), cVar11 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
          *(undefined8 *)(pCVar21 + 0x10) = *(undefined8 *)(pCVar21 + -8);
          lVar22 = lVar22 + -1;
          pCVar21 = pCVar21 + -0x18;
        } while (lVar22 != 0);
      }
LAB_00106558:
      CowData<char32_t>::_ref(local_90,(CowData *)&local_78);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)(local_90 + 8),(Ref *)local_70);
      *(undefined8 *)(local_90 + 0x10) = uVar5;
    }
  }
  Ref<Texture2D>::unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  lVar15 = *(long *)(lVar16 + 8);
  if (lVar15 == 0) {
    lVar15 = 0;
  }
  else {
    if (0x14 < *(long *)(lVar15 + -8)) {
      CowData<QuickOpenResultCandidate>::resize<false>(local_98,0x14);
      lVar15 = *(long *)(lVar16 + 8);
      if (lVar15 == 0) {
        lVar15 = 0;
        goto LAB_001065b6;
      }
    }
    lVar15 = *(long *)(lVar15 + -8);
  }
LAB_001065b6:
  local_70 = (CowData<char32_t> *)0x0;
  CowData<String>::resize<false>((CowData<String> *)local_a0,lVar15);
  CowData<String>::_copy_on_write((CowData<String> *)local_a0);
  pCVar21 = local_70;
  CowData<QuickOpenResultCandidate>::_copy_on_write(local_98);
  pCVar24 = *(CowData **)(lVar16 + 8);
  CowData<QuickOpenResultCandidate>::_copy_on_write(local_98);
  pCVar17 = *(CowData **)(lVar16 + 8);
  if (pCVar17 != (CowData *)0x0) {
    pCVar17 = pCVar17 + *(long *)(pCVar17 + -8) * 0x18;
  }
  for (; pCVar24 != pCVar17; pCVar24 = pCVar24 + 0x18) {
    if (*(long *)pCVar21 != *(long *)pCVar24) {
      CowData<char32_t>::_ref(pCVar21,pCVar24);
    }
    pCVar21 = pCVar21 + 8;
  }
  pSVar2 = *(String **)(this + 0xaa8);
  Variant::Variant((Variant *)local_58,(Vector *)&local_78);
  lVar16 = *(long *)pSVar4;
  if (lVar16 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = 0;
    if (*(char **)(lVar16 + 8) == (char *)0x0) {
      if (*(long *)(lVar16 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(lVar16 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_80,*(char **)(lVar16 + 8));
    }
  }
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"selected_history");
  ConfigFile::set_value(pSVar2,(String *)&local_88,(Variant *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar2 = *(String **)(this + 0xaa8);
  _get_cache_file_path((QuickOpenResultContainer *)&local_80);
  ConfigFile::save(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<String>::_unref((CowData<String> *)local_a0);
LAB_001066ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
        CowData<Vector2i>::_copy_on_write();
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



/* HighlightedLabel::add_highlight(Vector2i const&) */

void __thiscall HighlightedLabel::add_highlight(HighlightedLabel *this,Vector2i *param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  Vector<Vector2i>::push_back((Vector<Vector2i> *)(this + 0xad8),*(undefined8 *)param_1);
  CanvasItem::queue_redraw();
  return;
}



/* QuickOpenResultGridItem::reset() */

void __thiscall QuickOpenResultGridItem::reset(QuickOpenResultGridItem *this)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (Object *)0x0;
  TextureRect::set_texture(*(Ref **)(this + 0xa18));
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
  pSVar1 = *(String **)(this + 0xa20);
  local_48 = (Object *)&_LC33;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa20) + 0xae0),0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultListItem::reset() */

void __thiscall QuickOpenResultListItem::reset(QuickOpenResultListItem *this)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (Object *)0x0;
  TextureRect::set_texture(*(Ref **)(this + 0xa20));
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
  pSVar1 = *(String **)(this + 0xa28);
  local_48 = (Object *)&_LC33;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = (Object *)&_LC33;
  local_50 = 0;
  pSVar1 = *(String **)(this + 0xa30);
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa28) + 0xae0),0);
  CanvasItem::queue_redraw();
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa30) + 0xae0),0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultItem::set_display_mode(QuickOpenDisplayMode) */

void __thiscall QuickOpenResultItem::set_display_mode(QuickOpenResultItem *this,int param_2)

{
  if (param_2 != 1) {
    CanvasItem::hide();
    QuickOpenResultListItem::reset(*(QuickOpenResultListItem **)(this + 0xa10));
    CanvasItem::show();
    CanvasItem::queue_redraw();
    return;
  }
  CanvasItem::hide();
  QuickOpenResultGridItem::reset(*(QuickOpenResultGridItem **)(this + 0xa18));
  CanvasItem::show();
  CanvasItem::queue_redraw();
  return;
}



/* QuickOpenResultContainer::_layout_result_item(QuickOpenResultItem*) */

void __thiscall
QuickOpenResultContainer::_layout_result_item
          (QuickOpenResultContainer *this,QuickOpenResultItem *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  
  QuickOpenResultItem::set_display_mode(param_1,*(undefined4 *)(this + 0xab0));
  pNVar1 = (Node *)Node::get_parent();
  if (pNVar1 != (Node *)0x0) {
    Node::remove_child(pNVar1);
  }
  uVar2 = *(undefined8 *)(this + 0xad8);
  if (*(int *)(this + 0xab0) == 1) {
    uVar2 = *(undefined8 *)(this + 0xad0);
  }
  Node::add_child(uVar2,param_1,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultContainer::_ensure_result_vector_capacity() */

void __thiscall
QuickOpenResultContainer::_ensure_result_vector_capacity(QuickOpenResultContainer *this)

{
  long *plVar1;
  QuickOpenResultContainer QVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  QuickOpenResultItem *this_00;
  CallableCustom *this_01;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  int local_d0;
  CowData<QuickOpenResultItem*> *local_b8;
  undefined8 local_a8 [2];
  char *local_98;
  undefined8 local_90;
  String *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8[0] = 0;
  local_98 = "filesystem/quick_open_dialog/max_results";
  local_90 = 0x28;
  String::parse_latin1((StrRange *)local_a8);
  _EDITOR_GET((String *)local_78);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  lVar14 = *(long *)(this + 0xac0);
  lVar11 = (long)iVar5;
  lVar12 = lVar11;
  if (lVar14 == 0) {
    lVar13 = 0;
    if (iVar5 < 0) goto LAB_00107165;
    if (lVar11 == 0) goto LAB_00107645;
    local_d0 = 0;
LAB_0010753c:
    local_b8 = (CowData<QuickOpenResultItem*> *)(this + 0xac0);
    CowData<QuickOpenResultItem*>::_copy_on_write(local_b8);
    lVar13 = 0;
LAB_00107553:
    uVar7 = lVar11 * 8 - 1;
    uVar7 = uVar7 >> 1 | uVar7;
    uVar7 = uVar7 >> 2 | uVar7;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 >> 8 | uVar7;
    uVar7 = uVar7 | uVar7 >> 0x10;
    lVar14 = (uVar7 | uVar7 >> 0x20) + 1;
    if (lVar13 < lVar11) {
LAB_00107686:
      local_b8 = (CowData<QuickOpenResultItem*> *)(this + 0xac0);
      if (lVar13 == 0) {
        puVar9 = (undefined8 *)Memory::alloc_static(lVar14 + 0x10,false);
        if (puVar9 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar10 = puVar9 + 2;
          *puVar9 = 1;
          puVar9[1] = 0;
          *(undefined8 **)(this + 0xac0) = puVar10;
LAB_001072b6:
          puVar10[-1] = lVar11;
        }
      }
      else {
        iVar6 = CowData<QuickOpenResultItem*>::_realloc(local_b8,lVar14);
        if (iVar6 == 0) {
LAB_001072a6:
          puVar10 = *(undefined8 **)(this + 0xac0);
          if (puVar10 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          goto LAB_001072b6;
        }
      }
    }
    else {
LAB_001075a3:
      local_b8 = (CowData<QuickOpenResultItem*> *)(this + 0xac0);
      iVar6 = CowData<QuickOpenResultItem*>::_realloc(local_b8,lVar14);
      if (iVar6 == 0) {
LAB_001075ed:
        if (*(long *)(this + 0xac0) == 0) {
          _ensure_result_vector_capacity();
          return;
        }
        *(long *)(*(long *)(this + 0xac0) + -8) = lVar11;
      }
    }
  }
  else {
    lVar13 = *(long *)(lVar14 + -8);
    local_d0 = (int)lVar13;
    if (iVar5 < local_d0) {
      if (-1 < lVar11) {
        while (lVar14 != 0) {
          lVar13 = *(long *)(lVar14 + -8);
          if (lVar13 <= lVar12) goto LAB_00107165;
          lVar12 = lVar12 + 1;
          Node::queue_free();
          if ((ulong)(uint)((local_d0 + -1) - iVar5) + 1 + lVar11 == lVar12) {
            lVar14 = *(long *)(this + 0xac0);
            if (lVar14 == 0) {
              if (lVar11 == 0) goto LAB_001072c0;
              goto LAB_0010753c;
            }
            lVar13 = *(long *)(lVar14 + -8);
            goto LAB_001071d3;
          }
          lVar14 = *(long *)(this + 0xac0);
        }
        lVar13 = 0;
      }
LAB_00107165:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (iVar5 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else {
LAB_001071d3:
      local_b8 = (CowData<QuickOpenResultItem*> *)(this + 0xac0);
      if (lVar13 != lVar11) {
        if (lVar11 != 0) {
          CowData<QuickOpenResultItem*>::_copy_on_write(local_b8);
          uVar7 = lVar11 * 8 - 1;
          uVar7 = uVar7 >> 1 | uVar7;
          uVar7 = uVar7 >> 2 | uVar7;
          uVar7 = uVar7 >> 4 | uVar7;
          uVar7 = uVar7 >> 8 | uVar7;
          uVar7 = uVar7 >> 0x10 | uVar7;
          uVar7 = uVar7 >> 0x20 | uVar7;
          lVar14 = uVar7 + 1;
          if (lVar13 * 8 == 0) goto LAB_00107553;
          uVar8 = lVar13 * 8 - 1;
          uVar8 = uVar8 | uVar8 >> 1;
          uVar8 = uVar8 | uVar8 >> 2;
          uVar8 = uVar8 | uVar8 >> 4;
          uVar8 = uVar8 | uVar8 >> 8;
          uVar8 = uVar8 | uVar8 >> 0x10;
          uVar8 = uVar8 | uVar8 >> 0x20;
          if (lVar13 < lVar11) {
            if (uVar8 != uVar7) goto LAB_00107686;
            goto LAB_001072a6;
          }
          if (uVar8 != uVar7) goto LAB_001075a3;
          goto LAB_001075ed;
        }
        LOCK();
        plVar1 = (long *)(lVar14 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar14 = *(long *)(this + 0xac0);
          *(undefined8 *)(this + 0xac0) = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0xac0) = 0;
        }
      }
    }
  }
LAB_001072c0:
  local_b8 = (CowData<QuickOpenResultItem*> *)(this + 0xac0);
  lVar14 = (long)local_d0;
  if (local_d0 < iVar5) {
    do {
      this_00 = (QuickOpenResultItem *)operator_new(0xa48,"");
      QuickOpenResultItem::QuickOpenResultItem(this_00);
      postinitialize_handler((Object *)this_00);
      pcVar4 = *(code **)(*(long *)this_00 + 0x108);
      this_01 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_01);
      *(QuickOpenResultContainer **)(this_01 + 0x28) = this;
      *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
      *(undefined **)(this_01 + 0x20) = &_LC33;
      *(undefined8 *)(this_01 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined ***)this_01 = &PTR_hash_0011c2c8;
      *(undefined8 *)(this_01 + 0x30) = uVar3;
      *(code **)(this_01 + 0x38) = _item_input;
      *(undefined8 *)(this_01 + 0x10) = 0;
      CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
      *(char **)(this_01 + 0x20) = "QuickOpenResultContainer::_item_input";
      Callable::Callable((Callable *)local_a8,this_01);
      Variant::Variant((Variant *)local_78,local_d0);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88 = (String *)local_78;
      Callable::bindp((Variant **)&local_98,(int)(StrRange *)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      (*pcVar4)(this_00,SceneStringNames::singleton + 0x28,(Callable *)&local_98,0);
      Callable::~Callable((Callable *)&local_98);
      Callable::~Callable((Callable *)local_a8);
      lVar12 = *(long *)(this + 0xac0);
      if (lVar14 < 0) {
        if (lVar12 != 0) {
LAB_001074b9:
          lVar12 = *(long *)(lVar12 + -8);
          goto LAB_001074bd;
        }
LAB_001075e0:
        lVar12 = 0;
LAB_001074bd:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar14,lVar12,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (lVar12 == 0) goto LAB_001075e0;
      if (*(long *)(lVar12 + -8) <= lVar14) goto LAB_001074b9;
      CowData<QuickOpenResultItem*>::_copy_on_write(local_b8);
      QVar2 = this[0xaa5];
      *(QuickOpenResultItem **)(*(long *)(this + 0xac0) + lVar14 * 8) = this_00;
      if (QVar2 == (QuickOpenResultContainer)0x0) {
        _layout_result_item(this,this_00);
      }
      local_d0 = local_d0 + 1;
      lVar14 = lVar14 + 1;
    } while (iVar5 != local_d0);
  }
LAB_00107645:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultItem::reset() */

void __thiscall QuickOpenResultItem::reset(QuickOpenResultItem *this)

{
  bool bVar1;
  
  bVar1 = SUB81(this,0);
  CanvasItem::set_visible(bVar1);
  Node::set_process(bVar1);
  Node::set_process_input(bVar1);
  *(undefined2 *)(this + 0xa40) = 0;
  QuickOpenResultListItem::reset(*(QuickOpenResultListItem **)(this + 0xa10));
  QuickOpenResultGridItem::reset(*(QuickOpenResultGridItem **)(this + 0xa18));
  return;
}



/* QuickOpenResultContainer::cleanup() */

void __thiscall QuickOpenResultContainer::cleanup(QuickOpenResultContainer *this)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  
  *(undefined4 *)(this + 0xa9c) = 0;
  CowData<QuickOpenResultCandidate>::resize<false>
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68),0);
  _select_item(this,-1);
  CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
  plVar2 = *(long **)(this + 0xac0);
  CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
  plVar4 = *(long **)(this + 0xac0);
  if (plVar4 != (long *)0x0) {
    plVar4 = plVar4 + plVar4[-1];
  }
  for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
    lVar1 = *plVar2;
    bVar3 = SUB81(lVar1,0);
    CanvasItem::set_visible(bVar3);
    Node::set_process(bVar3);
    Node::set_process_input(bVar3);
    *(undefined2 *)(lVar1 + 0xa40) = 0;
    QuickOpenResultListItem::reset(*(QuickOpenResultListItem **)(lVar1 + 0xa10));
    QuickOpenResultGridItem::reset(*(QuickOpenResultGridItem **)(lVar1 + 0xa18));
  }
  return;
}



/* EditorQuickOpenDialog::cancel_pressed() */

void __thiscall EditorQuickOpenDialog::cancel_pressed(EditorQuickOpenDialog *this)

{
  QuickOpenResultContainer::cleanup(*(QuickOpenResultContainer **)(this + 0xdb8));
  LineEdit::clear();
  return;
}



/* EditorQuickOpenDialog::ok_pressed() */

void __thiscall EditorQuickOpenDialog::ok_pressed(EditorQuickOpenDialog *this)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_c0 [8];
  undefined4 local_b8;
  undefined8 local_b4;
  Variant *local_a8 [2];
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  QuickOpenResultContainer::get_selected();
  Variant::Variant((Variant *)local_78,(String *)local_c0);
  Variant::Variant((Variant *)local_60,0);
  local_98[0] = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_90 = (undefined1  [16])0x0;
  local_a8[0] = (Variant *)local_78;
  Callable::callp((Variant **)(this + 0xdc0),(int)local_a8,(Variant *)0x1,(CallError *)local_98);
  if (Variant::needs_deinit[local_60[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_c0);
  QuickOpenResultContainer::save_selected_item(*(QuickOpenResultContainer **)(this + 0xdb8));
  QuickOpenResultContainer::cleanup(*(QuickOpenResultContainer **)(this + 0xdb8));
  LineEdit::clear();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Window::hide();
  return;
}



/* QuickOpenResultListItem::set_content(QuickOpenResultCandidate const&, bool) */

void __thiscall
QuickOpenResultListItem::set_content
          (QuickOpenResultListItem *this,QuickOpenResultCandidate *param_1,bool param_2)

{
  int *piVar1;
  long lVar2;
  String *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long in_FS_OFFSET;
  String local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextureRect::set_texture(*(Ref **)(this + 0xa20));
  ResourceUID::ensure_path(local_50);
  pSVar3 = *(String **)(this + 0xa28);
  String::get_file();
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref(local_48);
  pSVar3 = *(String **)(this + 0xa30);
  String::get_base_dir();
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref(local_48);
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa28) + 0xae0),0);
  CanvasItem::queue_redraw();
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa30) + 0xae0),0);
  CanvasItem::queue_redraw();
  if (((param_2) && (*(long *)(param_1 + 0x10) != 0)) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar11 != 0)) {
    lVar2 = lVar11 + *(long *)(lVar11 + -8) * 0x28;
    for (; lVar2 != lVar11; lVar11 = lVar11 + 0x28) {
      piVar7 = *(int **)(lVar11 + 0x20);
      if (piVar7 != (int *)0x0) {
        piVar1 = piVar7 + *(long *)(piVar7 + -2) * 2;
joined_r0x00107b58:
        if (piVar1 != piVar7) {
          do {
            iVar5 = *piVar7;
            iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x1c);
            iVar4 = piVar7[1];
            iVar8 = iVar5 + iVar4;
            bVar9 = iVar4 < 1;
            if ((iVar5 < iVar6) && (0 < iVar4)) {
              iVar10 = iVar8;
              if (iVar6 <= iVar8) {
                iVar10 = iVar6;
              }
              if (0 < iVar10 - iVar5) {
                Vector<Vector2i>::push_back
                          ((Vector<Vector2i> *)(*(long *)(this + 0xa30) + 0xad8),
                           CONCAT44(iVar10 - iVar5,iVar5));
                CanvasItem::queue_redraw();
                iVar5 = *piVar7;
                iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x1c);
                iVar4 = piVar7[1];
                iVar8 = iVar4 + iVar5;
                bVar9 = iVar4 < 1;
              }
            }
            if ((iVar6 < iVar8) && (!bVar9)) {
              iVar6 = iVar6 + 1;
              iVar8 = iVar5;
              if (iVar5 <= iVar6) {
                iVar8 = iVar6;
              }
              iVar5 = (iVar4 - iVar8) + iVar5;
              if (0 < iVar5) goto code_r0x00107bb9;
            }
            piVar7 = piVar7 + 2;
            if (piVar1 == piVar7) break;
          } while( true );
        }
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00107bb9:
  piVar7 = piVar7 + 2;
  Vector<Vector2i>::push_back
            ((Vector<Vector2i> *)(*(long *)(this + 0xa28) + 0xad8),CONCAT44(iVar5,iVar8 - iVar6));
  CanvasItem::queue_redraw();
  goto joined_r0x00107b58;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultGridItem::set_content(QuickOpenResultCandidate const&, bool) */

void __thiscall
QuickOpenResultGridItem::set_content
          (QuickOpenResultGridItem *this,QuickOpenResultCandidate *param_1,bool param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  String *pSVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float extraout_XMM0_Db;
  String local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextureRect::set_texture(*(Ref **)(this + 0xa18));
  ResourceUID::ensure_path(local_50);
  pSVar4 = *(String **)(this + 0xa20);
  String::get_file();
  Label::set_text(pSVar4);
  CowData<char32_t>::_unref(local_48);
  Control::set_tooltip_text(*(String **)(this + 0xa20));
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(*(long *)(this + 0xa20) + 0xae0),0);
  CanvasItem::queue_redraw();
  if (((param_2) && (*(long *)(param_1 + 0x10) != 0)) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar8 != 0)) {
    lVar2 = lVar8 + *(long *)(lVar8 + -8) * 0x28;
    for (; lVar2 != lVar8; lVar8 = lVar8 + 0x28) {
      piVar7 = *(int **)(lVar8 + 0x20);
      if (piVar7 != (int *)0x0) {
        piVar1 = piVar7 + *(long *)(piVar7 + -2) * 2;
joined_r0x00107d7c:
        if (piVar1 != piVar7) {
          do {
            iVar5 = *piVar7;
            iVar3 = piVar7[1];
            if ((*(int *)(*(long *)(param_1 + 0x10) + 0x1c) < iVar5 + iVar3) && (0 < iVar3)) {
              iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x1c) + 1;
              iVar9 = iVar6;
              if (iVar6 <= iVar5) {
                iVar9 = iVar5;
              }
              iVar5 = (iVar3 - iVar9) + iVar5;
              if (0 < iVar5) goto code_r0x00107dc5;
            }
            piVar7 = piVar7 + 2;
            if (piVar1 == piVar7) break;
          } while( true );
        }
      }
    }
  }
  iVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x1c8))();
  fVar10 = (float)EditorScale::get_scale();
  if (fVar10 * __LC158 <= (float)iVar5) {
    iVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x1d0))();
    Control::get_custom_minimum_size();
    if (extraout_XMM0_Db < (float)iVar5) {
      TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa18),3);
      TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa18),0);
      goto LAB_00107e6d;
    }
  }
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa18),0);
  TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xa18),3);
LAB_00107e6d:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00107dc5:
  piVar7 = piVar7 + 2;
  Vector<Vector2i>::push_back
            ((Vector<Vector2i> *)(*(long *)(this + 0xa20) + 0xad8),CONCAT44(iVar5,iVar9 - iVar6));
  CanvasItem::queue_redraw();
  goto joined_r0x00107d7c;
}



/* QuickOpenResultItem::set_content(QuickOpenResultCandidate const&) */

void __thiscall
QuickOpenResultItem::set_content(QuickOpenResultItem *this,QuickOpenResultCandidate *param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = SUB81(this,0);
  CanvasItem::set_visible(bVar2);
  Node::set_process(bVar2);
  Node::set_process_input(bVar2);
  cVar1 = CanvasItem::is_visible();
  if (cVar1 != '\0') {
    QuickOpenResultListItem::set_content
              (*(QuickOpenResultListItem **)(this + 0xa10),param_1,(bool)this[0xa0d]);
    CanvasItem::queue_redraw();
    return;
  }
  QuickOpenResultGridItem::set_content
            (*(QuickOpenResultGridItem **)(this + 0xa18),param_1,(bool)this[0xa0d]);
  CanvasItem::queue_redraw();
  return;
}



/* QuickOpenResultContainer::_update_result_items(int, int) */

void __thiscall
QuickOpenResultContainer::_update_result_items
          (QuickOpenResultContainer *this,int param_1,int param_2)

{
  long lVar1;
  QuickOpenResultItem *this_00;
  code *pcVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  String *pSVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  iVar7 = *(int *)(this + 0xa9c);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xa9c) = param_1;
  if (iVar7 <= param_1) {
    iVar7 = param_1;
  }
  if (0 < iVar7) {
    lVar4 = 0;
LAB_00107fd6:
    do {
      lVar1 = *(long *)(this + 0xac0);
      if (lVar1 == 0) {
LAB_001080a8:
        lVar3 = 0;
LAB_001080ab:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar3 = *(long *)(lVar1 + -8);
      if (lVar3 <= lVar4) goto LAB_001080ab;
      this_00 = *(QuickOpenResultItem **)(lVar1 + lVar4 * 8);
      if (*(int *)(this + 0xa9c) <= (int)lVar4) {
        lVar4 = lVar4 + 1;
        bVar6 = SUB81(this_00,0);
        CanvasItem::set_visible(bVar6);
        Node::set_process(bVar6);
        Node::set_process_input(bVar6);
        *(undefined2 *)(this_00 + 0xa40) = 0;
        QuickOpenResultListItem::reset(*(QuickOpenResultListItem **)(this_00 + 0xa10));
        QuickOpenResultGridItem::reset(*(QuickOpenResultGridItem **)(this_00 + 0xa18));
        if (lVar4 == iVar7) break;
        goto LAB_00107fd6;
      }
      lVar1 = *(long *)(this + 0xa68);
      if (lVar1 == 0) goto LAB_001080a8;
      lVar3 = *(long *)(lVar1 + -8);
      if (lVar3 <= lVar4) goto LAB_001080ab;
      lVar3 = lVar4 + 1;
      QuickOpenResultItem::set_content(this_00,(QuickOpenResultCandidate *)(lVar1 + lVar4 * 0x18));
      lVar4 = lVar3;
    } while (lVar3 != iVar7);
    param_1 = *(int *)(this + 0xa9c);
  }
  if (param_1 < 1) {
    _select_item(this,-1);
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xac8),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xaf0),0));
    if (*(long *)(this + 0xa38) == 0) {
      pSVar8 = *(String **)(this + 0xaf8);
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"");
      pcVar5 = "No files found for this type";
    }
    else {
      pSVar8 = *(String **)(this + 0xaf8);
      if ((*(long *)(this + 0xa90) == 0) || (*(uint *)(*(long *)(this + 0xa90) + -8) < 2)) {
        local_40 = 0;
        String::parse_latin1((String *)&local_40,"");
        pcVar5 = "Start searching to find files...";
      }
      else {
        local_40 = 0;
        String::parse_latin1((String *)&local_40,"");
        pcVar5 = "No results found";
      }
    }
    local_48 = 0;
    String::parse_latin1((String *)&local_48,pcVar5);
    TTR(local_38,(String *)&local_48);
    Label::set_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    _select_item(this,param_2);
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xac8),0));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xaf0),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_set_display_mode(QuickOpenDisplayMode) */

void __thiscall
QuickOpenResultContainer::_set_display_mode(QuickOpenResultContainer *this,int param_2)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  String *pSVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = CanvasItem::is_visible();
  if ((cVar3 == '\0') || (*(int *)(this + 0xab0) != param_2)) {
    *(int *)(this + 0xab0) = param_2;
    pSVar5 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,*(int *)(this + 0xab0));
    local_68 = (Object *)0x10a81e;
    local_70 = 0;
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (Object *)0x10a828;
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    EditorSettings::set_project_metadata(pSVar5,(String *)&local_78,(Variant *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CanvasItem::hide();
    CanvasItem::show();
    CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
    puVar6 = *(undefined8 **)(this + 0xac0);
    CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
    puVar7 = *(undefined8 **)(this + 0xac0);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7 = puVar7 + puVar7[-1];
    }
    for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      _layout_result_item(this,(QuickOpenResultItem *)*puVar6);
    }
    _update_result_items(this,*(int *)(this + 0xa9c),*(int *)(this + 0xa98));
    if (*(int *)(this + 0xab0) == 1) {
      pRVar1 = *(Ref **)(this + 0xb08);
      if ((_set_display_mode(QuickOpenDisplayMode)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_set_display_mode(QuickOpenDisplayMode)::{lambda()#1}::
                                       operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&_set_display_mode(QuickOpenDisplayMode)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_set_display_mode(QuickOpenDisplayMode)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set_display_mode(QuickOpenDisplayMode)::{lambda()#1}::operator()()::
                             sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_68);
      Button::set_button_icon(pRVar1);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
      local_70 = 0;
      pSVar5 = *(String **)(this + 0xb08);
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"Grid view");
    }
    else {
      pRVar1 = *(Ref **)(this + 0xb08);
      if ((_set_display_mode(QuickOpenDisplayMode)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_set_display_mode(QuickOpenDisplayMode)::{lambda()#2}::
                                       operator()()::sname), iVar4 != 0)) {
        _scs_create((char *)&_set_display_mode(QuickOpenDisplayMode)::{lambda()#2}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_set_display_mode(QuickOpenDisplayMode)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set_display_mode(QuickOpenDisplayMode)::{lambda()#2}::operator()()::
                             sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_68);
      Button::set_button_icon(pRVar1);
      if (((local_68 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar2 = local_68, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      local_70 = 0;
      local_68 = (Object *)&_LC33;
      pSVar5 = *(String **)(this + 0xb08);
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_78 = 0;
      local_68 = (Object *)0x10a844;
      local_60 = 9;
      String::parse_latin1((StrRange *)&local_78);
    }
    TTR((String *)&local_68,(String *)&local_78);
    Control::set_tooltip_text(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultContainer::_toggle_display_mode() */

void __thiscall QuickOpenResultContainer::_toggle_display_mode(QuickOpenResultContainer *this)

{
  _set_display_mode(this,*(int *)(this + 0xab0) != 1);
  return;
}



/* CowData<FuzzySearchResult>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<FuzzySearchResult>::_copy_on_write(CowData<FuzzySearchResult> *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  CowData<FuzzyTokenMatch> *this_00;
  CowData<FuzzyTokenMatch> *pCVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar2 * 0x30 != 0) {
    uVar9 = lVar2 * 0x30 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<FuzzyTokenMatch> *)(puVar6 + 7);
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar2;
  if (lVar2 != 0) {
    do {
      pCVar8 = this_00 + *(long *)this + (-0x38 - (long)puVar6);
      *(undefined4 *)(this_00 + -0x28) = *(undefined4 *)pCVar8;
      uVar3 = *(undefined8 *)(pCVar8 + 4);
      *(undefined8 *)(this_00 + -0x18) = 0;
      lVar4 = *(long *)(pCVar8 + 0x10);
      *(undefined8 *)(this_00 + -0x24) = uVar3;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + -0x18),(CowData *)(pCVar8 + 0x10));
      }
      uVar3 = *(undefined8 *)(pCVar8 + 0x18);
      *(undefined8 *)this_00 = 0;
      lVar4 = *(long *)(pCVar8 + 0x28);
      *(undefined8 *)(this_00 + -0x10) = uVar3;
      if (lVar4 != 0) {
        CowData<FuzzyTokenMatch>::_unref(this_00);
        if (*(long *)(pCVar8 + 0x28) != 0) {
          plVar1 = (long *)(*(long *)(pCVar8 + 0x28) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001087ed;
            LOCK();
            lVar7 = *plVar1;
            bVar11 = lVar4 == lVar7;
            if (bVar11) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar7 != -1) {
            *(undefined8 *)this_00 = *(undefined8 *)(pCVar8 + 0x28);
          }
        }
      }
LAB_001087ed:
      lVar10 = lVar10 + 1;
      this_00 = this_00 + 0x30;
    } while (lVar2 != lVar10);
  }
  _unref(this);
  *(undefined8 **)this = puVar6 + 2;
  return;
}



/* QuickOpenResultContainer::_score_and_sort_candidates() */

void __thiscall QuickOpenResultContainer::_score_and_sort_candidates(QuickOpenResultContainer *this)

{
  long lVar1;
  QuickOpenResultCandidate *pQVar2;
  long lVar3;
  
  _update_fuzzy_search_results(this);
  if (*(long *)(this + 0xa18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0xa18) + -8);
  }
  CowData<QuickOpenResultCandidate>::resize<false>
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68),lVar1);
  CowData<QuickOpenResultCandidate>::_copy_on_write
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68));
  pQVar2 = *(QuickOpenResultCandidate **)(this + 0xa68);
  CowData<FuzzySearchResult>::_copy_on_write((CowData<FuzzySearchResult> *)(this + 0xa18));
  lVar1 = *(long *)(this + 0xa18);
  CowData<FuzzySearchResult>::_copy_on_write((CowData<FuzzySearchResult> *)(this + 0xa18));
  lVar3 = *(long *)(this + 0xa18);
  if (lVar3 != 0) {
    lVar3 = lVar3 + *(long *)(lVar3 + -8) * 0x30;
  }
  for (; lVar1 != lVar3; lVar1 = lVar1 + 0x30) {
    _setup_candidate(this,pQVar2,(String *)(lVar1 + 0x10));
    *(long *)(pQVar2 + 0x10) = lVar1;
    pQVar2 = pQVar2 + 0x18;
  }
  return;
}



/* QuickOpenResultContainer::update_results() */

void __thiscall QuickOpenResultContainer::update_results(QuickOpenResultContainer *this)

{
  long lVar1;
  int iVar2;
  
  this[0xaa4] = (QuickOpenResultContainer)0x0;
  CowData<QuickOpenResultCandidate>::resize<false>
            ((CowData<QuickOpenResultCandidate> *)(this + 0xa68),0);
  if ((*(long *)(this + 0xa90) == 0) || (*(uint *)(*(long *)(this + 0xa90) + -8) < 2)) {
    _use_default_candidates(this);
  }
  else {
    _score_and_sort_candidates(this);
  }
  iVar2 = *(int *)(this + 0xaa0);
  if (*(long *)(this + 0xa68) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0xa68) + -8);
  }
  if (lVar1 < iVar2) {
    iVar2 = (int)lVar1;
  }
  _update_result_items(this,iVar2,0);
  return;
}



/* QuickOpenResultContainer::_create_initial_results() */

void __thiscall QuickOpenResultContainer::_create_initial_results(QuickOpenResultContainer *this)

{
  int *piVar1;
  Object *pOVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  EditorFileSystemDirectory *pEVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xb38) != 0) {
    lVar8 = 0;
    do {
      piVar1 = (int *)(*(long *)(this + 0xb30) + lVar8 * 4);
      if (*piVar1 != 0) {
        lVar7 = *(long *)(this + 0xb20);
        *piVar1 = 0;
        plVar9 = (long *)(lVar7 + lVar8 * 8);
        if (*plVar9 != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = (Object *)*plVar9;
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        if ((StringName::configured != '\0') &&
           (*(long *)(lVar8 * 8 + *(long *)(this + 0xb28)) != 0)) {
          StringName::unref();
        }
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(this + 0xb38));
  }
  *(undefined4 *)(this + 0xb3c) = 0;
  if (_create_initial_results()::{lambda()#2}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_initial_results()::{lambda()#2}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_initial_results()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_initial_results()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_initial_results()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  if (_create_initial_results()::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_initial_results()::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_initial_results()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_initial_results()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_initial_results()::{lambda()#1}::operator()()::sname);
    }
  }
  OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
  insert((OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
          *)(this + 0xb20),
         (StringName *)&_create_initial_results()::{lambda()#1}::operator()()::sname,
         (Ref *)&local_38);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  CowData<String>::resize<false>((CowData<String> *)(this + 0xa38),0);
  if (*(int *)(this + 0xa58) != 0) {
    lVar8 = 0;
    do {
      piVar1 = (int *)(*(long *)(this + 0xa50) + lVar8 * 4);
      if (*piVar1 != 0) {
        lVar7 = *(long *)(this + 0xa40);
        *piVar1 = 0;
        if ((StringName::configured != '\0') && (*(long *)(lVar7 + lVar8 * 8) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(*(long *)(this + 0xa48) + lVar8 * 8));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(this + 0xa58));
  }
  *(undefined4 *)(this + 0xa5c) = 0;
  bVar4 = (bool)BaseButton::is_pressed();
  pEVar6 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
  _find_filepaths_in_folder(this,pEVar6,bVar4);
  if (*(long *)(this + 0xac0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xac0) + -8);
  }
  if (*(long *)(this + 0xa38) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0xa38) + -8);
  }
  if (lVar8 < lVar7) {
    lVar7 = lVar8;
  }
  *(int *)(this + 0xaa0) = (int)lVar7;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    update_results(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::_toggle_include_addons(bool) */

void __thiscall
QuickOpenResultContainer::_toggle_include_addons(QuickOpenResultContainer *this,bool param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  StringName::StringName
            ((StringName *)&local_50,"filesystem/quick_open_dialog/include_addons",false);
  Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  cleanup(this);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _create_initial_results(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::init(Vector<StringName> const&) */

void __thiscall QuickOpenResultContainer::init(QuickOpenResultContainer *this,Vector *param_1)

{
  CowData<char32_t> *this_00;
  QuickOpenResultContainer QVar1;
  String *pSVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  String *pSVar16;
  long *plVar17;
  String *pSVar18;
  long *plVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long *local_d0;
  long local_c8;
  undefined8 local_c0;
  Variant local_b8 [8];
  String *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_98._8_8_ = local_98._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_result_vector_capacity(this);
  if (*(long *)(this + 0xa28) != *(long *)(param_1 + 8)) {
    CowData<StringName>::_unref((CowData<StringName> *)(this + 0xa28));
    if (*(long *)(param_1 + 8) != 0) {
      plVar19 = (long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        lVar20 = *plVar19;
        if (lVar20 == 0) goto LAB_00108e5a;
        LOCK();
        lVar15 = *plVar19;
        bVar21 = lVar20 == lVar15;
        if (bVar21) {
          *plVar19 = lVar20 + 1;
          lVar15 = lVar20;
        }
        UNLOCK();
      } while (!bVar21);
      if (lVar15 != -1) {
        *(undefined8 *)(this + 0xa28) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_00108e5a:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_98._8_8_;
  local_98 = auVar8 << 0x40;
  String::parse_latin1((String *)local_98,"filesystem/quick_open_dialog/default_display_mode");
  _EDITOR_GET((String *)local_58);
  iVar13 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  QVar1 = this[0xaa5];
  if (iVar13 == 0) {
    uVar14 = get_adaptive_display_mode(param_1);
    _set_display_mode(this,uVar14);
  }
  else if (QVar1 != (QuickOpenResultContainer)0x0) {
    pSVar16 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_78,1);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_98._8_8_;
    local_98 = auVar6 << 0x40;
    String::parse_latin1((String *)local_98,"last_mode");
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"quick_open_dialog");
    EditorSettings::get_project_metadata((String *)local_58,pSVar16,(Variant *)&local_a8);
    iVar13 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    _set_display_mode(this,iVar13);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_98._8_8_;
  local_98 = auVar9 << 0x40;
  String::parse_latin1((String *)local_98,"filesystem/quick_open_dialog/enable_fuzzy_matching");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_98._8_8_;
  local_98 = auVar4 << 0x40;
  String::parse_latin1((String *)local_98,"filesystem/quick_open_dialog/include_addons");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xb18),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xb10),0));
  this[0xaa5] = (QuickOpenResultContainer)0x0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_98._8_8_;
  local_98 = auVar5 << 0x40;
  String::parse_latin1((String *)local_98,"filesystem/quick_open_dialog/show_search_highlight");
  _EDITOR_GET((String *)local_58);
  bVar21 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
  plVar17 = *(long **)(this + 0xac0);
  CowData<QuickOpenResultItem*>::_copy_on_write((CowData<QuickOpenResultItem*> *)(this + 0xac0));
  plVar19 = *(long **)(this + 0xac0);
  if (plVar19 != (long *)0x0) {
    plVar19 = plVar19 + plVar19[-1];
  }
  for (; plVar17 != plVar19; plVar17 = plVar17 + 1) {
    *(bool *)(*plVar17 + 0xa0d) = bVar21;
  }
  if (QVar1 != (QuickOpenResultContainer)0x0) {
    pSVar16 = *(String **)(this + 0xaa8);
    _get_cache_file_path((QuickOpenResultContainer *)local_98);
    iVar13 = ConfigFile::load(pSVar16);
    if (iVar13 == 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if ((init(Vector<StringName>const&)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&init(Vector<StringName>const&)::{lambda()#2}::operator()()::
                                        sname), iVar13 != 0)) {
        _scs_create((char *)&init(Vector<StringName>const&)::{lambda()#2}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &init(Vector<StringName>const&)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&init(Vector<StringName>const&)::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_98);
      if ((init(Vector<StringName>const&)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&init(Vector<StringName>const&)::{lambda()#1}::operator()()::
                                        sname), iVar13 != 0)) {
        _scs_create((char *)&init(Vector<StringName>const&)::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &init(Vector<StringName>const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&init(Vector<StringName>const&)::{lambda()#1}::operator()()::sname);
      }
      OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
      ::insert((OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                *)(this + 0xb20),
               (StringName *)&init(Vector<StringName>const&)::{lambda()#1}::operator()()::sname,
               (Ref *)local_98);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
      local_d0 = (long *)0x0;
      pSVar16 = *(String **)(this + 0xaa8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_98._8_8_;
      local_98 = auVar7 << 0x40;
      String::parse_latin1((String *)local_98,"selected_history");
      ConfigFile::get_section_keys(pSVar16,(List *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if ((local_d0 != (long *)0x0) && (pSVar16 = (String *)*local_d0, pSVar16 != (String *)0x0)) {
        do {
          StringName::StringName((StringName *)&local_c8,pSVar16,false);
          local_78 = 0;
          pSVar2 = *(String **)(this + 0xaa8);
          local_70 = (undefined1  [16])0x0;
          local_a8 = 0;
          local_98._8_8_ = 0x10;
          local_98._0_8_ = "selected_history";
          String::parse_latin1((StrRange *)&local_a8);
          ConfigFile::get_value((String *)local_58,pSVar2,(Variant *)&local_a8);
          Variant::operator_cast_to_Vector(local_b8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          local_a0 = 0;
          if (local_b0 == (String *)0x0) {
            lVar20 = 0;
          }
          else {
            lVar20 = *(long *)(local_b0 + -8);
          }
          CowData<QuickOpenResultCandidate>::resize<false>
                    ((CowData<QuickOpenResultCandidate> *)&local_a0,lVar20);
          CowData<QuickOpenResultCandidate>::_copy_on_write
                    ((CowData<QuickOpenResultCandidate> *)&local_a0);
          lVar20 = local_a0;
          if ((local_b0 == (String *)0x0) ||
             (pSVar2 = local_b0 + *(long *)(local_b0 + -8) * 8, pSVar2 == local_b0)) {
            lVar20 = 0;
          }
          else {
            iVar13 = 0;
            pSVar18 = local_b0;
            do {
              local_c0 = 0;
              local_98 = ZEXT816(0x10a587);
              String::parse_latin1((StrRange *)&local_c0);
              cVar12 = ResourceLoader::exists(pSVar18,(String *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              if (cVar12 != '\0') {
                OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>::
                insert((OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>
                        *)(this + 0xa40),pSVar18,(StringName *)&local_c8);
                local_88 = 0;
                local_98 = (undefined1  [16])0x0;
                _setup_candidate(this,(QuickOpenResultCandidate *)local_98,pSVar18);
                this_00 = (CowData<char32_t> *)(lVar20 + (long)iVar13 * 0x18);
                if (*(long *)this_00 != local_98._0_8_) {
                  CowData<char32_t>::_ref(this_00,(CowData *)local_98);
                }
                uVar11 = local_88;
                uVar10 = local_98._8_8_;
                iVar13 = iVar13 + 1;
                pOVar3 = *(Object **)(this_00 + 8);
                if ((Object *)local_98._8_8_ == pOVar3) {
LAB_001095f7:
                  *(undefined8 *)(this_00 + 0x10) = uVar11;
                  if ((Object *)uVar10 != (Object *)0x0) {
                    cVar12 = RefCounted::unreference();
joined_r0x00109494:
                    if ((cVar12 != '\0') &&
                       (cVar12 = predelete_handler((Object *)uVar10), cVar12 != '\0')) {
                      (**(code **)(*(long *)uVar10 + 0x140))(uVar10);
                      Memory::free_static((void *)uVar10,false);
                    }
                  }
                }
                else {
                  *(undefined8 *)(this_00 + 8) = local_98._8_8_;
                  if ((Object *)local_98._8_8_ != (Object *)0x0) {
                    cVar12 = RefCounted::reference();
                    if (cVar12 == '\0') {
                      *(undefined8 *)(this_00 + 8) = 0;
                    }
                    if (((pOVar3 != (Object *)0x0) &&
                        (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
                       (cVar12 = predelete_handler(pOVar3), cVar12 != '\0')) goto LAB_001095da;
                    *(undefined8 *)(this_00 + 0x10) = uVar11;
                    cVar12 = RefCounted::unreference();
                    goto joined_r0x00109494;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
                     (cVar12 = predelete_handler(pOVar3), cVar12 != '\0')) {
LAB_001095da:
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                    goto LAB_001095f7;
                  }
                  *(undefined8 *)(this_00 + 0x10) = uVar11;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              }
              pSVar18 = pSVar18 + 8;
            } while (pSVar2 != pSVar18);
            lVar20 = (long)iVar13;
          }
          CowData<QuickOpenResultCandidate>::resize<false>
                    ((CowData<QuickOpenResultCandidate> *)&local_a0,lVar20);
          StringName::StringName((StringName *)local_98,pSVar16,false);
          OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
          ::insert((OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                    *)(this + 0xa70),(StringName *)local_98,(Vector *)&local_a8);
          if ((StringName::configured != '\0') && (local_98._0_8_ != 0)) {
            StringName::unref();
          }
          CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)&local_a0);
          CowData<String>::_unref((CowData<String> *)&local_b0);
          if ((StringName::configured != '\0') && (local_c8 != 0)) {
            StringName::unref();
          }
          pSVar16 = *(String **)(pSVar16 + 8);
        } while (pSVar16 != (String *)0x0);
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_d0);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _create_initial_results(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorQuickOpenDialog::popup_dialog(Vector<StringName> const&, Callable const&) */

void __thiscall
EditorQuickOpenDialog::popup_dialog(EditorQuickOpenDialog *this,Vector *param_1,Callable *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  EditorQuickOpenDialog aEStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = 0x93;
      pcVar2 = "Condition \"p_base_types.is_empty()\" is true.";
LAB_00109982:
      _err_print_error("popup_dialog","editor/gui/editor_quick_open_dialog.cpp",uVar3,pcVar2,0,0);
      return;
    }
  }
  else {
    cVar1 = Callable::is_valid();
    if (cVar1 == '\0') {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = 0x94;
        pcVar2 = "Condition \"!p_item_selected_callback.is_valid()\" is true.";
        goto LAB_00109982;
      }
    }
    else {
      Callable::operator=((Callable *)(this + 0xdc0),param_2);
      QuickOpenResultContainer::init(*(QuickOpenResultContainer **)(this + 0xdb8),param_1);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
      get_dialog_title(aEStack_38,param_1);
      Window::set_title((String *)this);
      CowData<char32_t>::_unref((CowData<char32_t> *)aEStack_38);
      fVar4 = (float)EditorScale::get_scale();
      local_30 = CONCAT44(fVar4 * _LC173._4_4_,fVar4 * (float)_LC173);
      local_28 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_30);
      Window::popup_centered_clamped((Vector2i *)this,_LC174);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Control::grab_focus();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultContainer::set_query_and_update(String const&) */

void __thiscall
QuickOpenResultContainer::set_query_and_update(QuickOpenResultContainer *this,String *param_1)

{
  if (*(long *)(this + 0xa90) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa90),(CowData *)param_1);
  }
  update_results(this);
  return;
}



/* QuickOpenResultContainer::_toggle_fuzzy_search(bool) */

void __thiscall
QuickOpenResultContainer::_toggle_fuzzy_search(QuickOpenResultContainer *this,bool param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (StringName *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  StringName::StringName
            ((StringName *)&local_50,"filesystem/quick_open_dialog/enable_fuzzy_matching",false);
  Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    update_results(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorQuickOpenDialog::_search_box_text_changed(String const&) */

void __thiscall
EditorQuickOpenDialog::_search_box_text_changed(EditorQuickOpenDialog *this,String *param_1)

{
  QuickOpenResultContainer *this_00;
  
  this_00 = *(QuickOpenResultContainer **)(this + 0xdb8);
  if (*(long *)(this_00 + 0xa90) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 0xa90),(CowData *)param_1);
  }
  QuickOpenResultContainer::update_results(this_00);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* HighlightedLabel::is_class_ptr(void*) const */

uint HighlightedLabel::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11c5,in_RSI == &Label::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorQuickOpenDialog::is_class_ptr(void*) const */

uint EditorQuickOpenDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11c5,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c5,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* EditorQuickOpenDialog::_property_can_revertv(StringName const&) const */

undefined8 EditorQuickOpenDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorQuickOpenDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorQuickOpenDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Vector<StringName>::~Vector() */

void __thiscall Vector<StringName>::~Vector(Vector<StringName> *this)

{
  CowData<StringName>::_unref((CowData<StringName> *)(this + 8));
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::
get_argument_count(CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::get_argument_count
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::get_argument_count
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::get_argument_count
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::get_argument_count
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HighlightedLabel::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HighlightedLabel::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 QuickOpenResultContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultGridItem::_property_get_revertv(StringName const&, Variant&) const */

undefined8 QuickOpenResultGridItem::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultListItem::_property_get_revertv(StringName const&, Variant&) const */

undefined8 QuickOpenResultListItem::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultItem::_property_get_revertv(StringName const&, Variant&) const */

undefined8 QuickOpenResultItem::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HighlightedLabel::_property_can_revertv(StringName const&) const */

undefined8 HighlightedLabel::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultContainer::_property_can_revertv(StringName const&) const */

undefined8 QuickOpenResultContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultGridItem::_property_can_revertv(StringName const&) const */

undefined8 QuickOpenResultGridItem::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultListItem::_property_can_revertv(StringName const&) const */

undefined8 QuickOpenResultListItem::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* QuickOpenResultItem::_property_can_revertv(StringName const&) const */

undefined8 QuickOpenResultItem::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00119e80;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00119e80;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorQuickOpenDialog::~EditorQuickOpenDialog() */

void __thiscall EditorQuickOpenDialog::~EditorQuickOpenDialog(EditorQuickOpenDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011bcf0;
  Callable::~Callable((Callable *)(this + 0xdc0));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* EditorQuickOpenDialog::_getv(StringName const&, Variant&) const */

undefined8 EditorQuickOpenDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123028 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorQuickOpenDialog::_setv(StringName const&, Variant const&) */

undefined8 EditorQuickOpenDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123030 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<QuickOpenResultItem*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<QuickOpenResultItem*>::_copy_on_write(void)

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



/* HighlightedLabel::draw_substr_rects(Vector2i const&, Vector2, int, int) [clone .cold] */

void HighlightedLabel::draw_substr_rects(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010a88e(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* QuickOpenResultContainer::_update_fuzzy_search_results() [clone .cold] */

void QuickOpenResultContainer::_update_fuzzy_search_results(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* QuickOpenResultContainer::_bind_methods() [clone .cold] */

void QuickOpenResultContainer::_bind_methods(void)

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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<QuickOpenResultCandidate>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<QuickOpenResultCandidate>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickOpenResultContainer::_ensure_result_vector_capacity() [clone .cold] */

void QuickOpenResultContainer::_ensure_result_vector_capacity(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<FuzzySearchResult>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<FuzzySearchResult>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010a923:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a923;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010a98e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010a98e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::get_object
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this)

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
      goto LAB_0010aabd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aabd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aabd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010abbd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010abbd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010abbd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::get_object
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
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
      goto LAB_0010acbd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010acbd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010acbd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this)

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
      goto LAB_0010adbd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010adbd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010adbd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::get_object
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this)

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
      goto LAB_0010aebd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aebd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aebd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::get_object
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this)

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
      goto LAB_0010afbd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010afbd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010afbd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::get_object
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this)

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
      goto LAB_0010b0bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b0bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b0bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorQuickOpenDialog::_validate_propertyv(PropertyInfo&) const */

void EditorQuickOpenDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123038 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HFlowContainer::is_class_ptr(void*) const */

uint HFlowContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c3,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorQuickOpenDialog::~EditorQuickOpenDialog() */

void __thiscall EditorQuickOpenDialog::~EditorQuickOpenDialog(EditorQuickOpenDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011bcf0;
  Callable::~Callable((Callable *)(this + 0xdc0));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdd0);
  return;
}



/* EditorQuickOpenDialog::_notificationv(int, bool) */

void __thiscall
EditorQuickOpenDialog::_notificationv(EditorQuickOpenDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123040 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_00123040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* QuickOpenResultGridItem::is_class_ptr(void*) const */

uint QuickOpenResultGridItem::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c5,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* QuickOpenResultListItem::is_class_ptr(void*) const */

uint QuickOpenResultListItem::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c5,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* QuickOpenResultListItem::_validate_propertyv(PropertyInfo&) const */

void QuickOpenResultListItem::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* QuickOpenResultGridItem::_validate_propertyv(PropertyInfo&) const */

void QuickOpenResultGridItem::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HighlightedLabel::_validate_propertyv(PropertyInfo&) const */

void HighlightedLabel::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123048 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* QuickOpenResultContainer::_validate_propertyv(PropertyInfo&) const */

void QuickOpenResultContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00123050 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* QuickOpenResultItem::_validate_propertyv(PropertyInfo&) const */

void QuickOpenResultItem::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00123050 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00123058 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* QuickOpenResultItem::is_class_ptr(void*) const */

ulong QuickOpenResultItem::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x11c5,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* QuickOpenResultContainer::is_class_ptr(void*) const */

ulong QuickOpenResultContainer::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x11c5,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x11c5,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11c6,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* QuickOpenResultContainer::_setv(StringName const&, Variant const&) */

undefined8 QuickOpenResultContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* QuickOpenResultGridItem::_setv(StringName const&, Variant const&) */

undefined8 QuickOpenResultGridItem::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* QuickOpenResultItem::_setv(StringName const&, Variant const&) */

undefined8 QuickOpenResultItem::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* QuickOpenResultListItem::_setv(StringName const&, Variant const&) */

undefined8 QuickOpenResultListItem::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00123060 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HighlightedLabel::_setv(StringName const&, Variant const&) */

undefined8 HighlightedLabel::_setv(StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = CanvasItem::_set(param_1,param_2);
  if ((cVar1 == '\0') && (cVar1 = Control::_set(param_1,param_2), cVar1 == '\0')) {
    if ((code *)PTR__set_00123068 == Control::_set) {
      return 0;
    }
    uVar2 = Label::_set(param_1,param_2);
    return uVar2;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0010be88) */
/* QuickOpenResultContainer::_getv(StringName const&, Variant&) const */

undefined8 QuickOpenResultContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bef8) */
/* QuickOpenResultGridItem::_getv(StringName const&, Variant&) const */

undefined8 QuickOpenResultGridItem::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bf68) */
/* QuickOpenResultItem::_getv(StringName const&, Variant&) const */

undefined8 QuickOpenResultItem::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bfd8) */
/* QuickOpenResultListItem::_getv(StringName const&, Variant&) const */

undefined8 QuickOpenResultListItem::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c048) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c0b8) */
/* HighlightedLabel::_getv(StringName const&, Variant&) const */

undefined8 HighlightedLabel::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c128) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c198) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HighlightedLabel::~HighlightedLabel() */

void __thiscall HighlightedLabel::~HighlightedLabel(HighlightedLabel *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011a6d0;
  if (*(long *)(this + 0xae0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xae0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xae0);
      *(undefined8 *)(this + 0xae0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Label::~Label((Label *)this);
      return;
    }
  }
  Label::~Label((Label *)this);
  return;
}



/* HighlightedLabel::~HighlightedLabel() */

void __thiscall HighlightedLabel::~HighlightedLabel(HighlightedLabel *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011a6d0;
  if (*(long *)(this + 0xae0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xae0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xae0);
      *(undefined8 *)(this + 0xae0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Label::~Label((Label *)this);
  operator_delete(this,0xae8);
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



/* HighlightedLabel::_get_class_namev() const */

undefined8 * HighlightedLabel::_get_class_namev(void)

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
LAB_0010c323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HighlightedLabel");
      goto LAB_0010c38e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HighlightedLabel");
LAB_0010c38e:
  return &_get_class_namev()::_class_name_static;
}



/* QuickOpenResultListItem::_get_class_namev() const */

undefined8 * QuickOpenResultListItem::_get_class_namev(void)

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
LAB_0010c413:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c413;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultListItem");
      goto LAB_0010c47e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultListItem");
LAB_0010c47e:
  return &_get_class_namev()::_class_name_static;
}



/* QuickOpenResultContainer::_get_class_namev() const */

undefined8 * QuickOpenResultContainer::_get_class_namev(void)

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
LAB_0010c503:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c503;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultContainer");
      goto LAB_0010c56e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultContainer");
LAB_0010c56e:
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
LAB_0010c5f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c5f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010c65e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010c65e:
  return &_get_class_namev()::_class_name_static;
}



/* QuickOpenResultGridItem::_get_class_namev() const */

undefined8 * QuickOpenResultGridItem::_get_class_namev(void)

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
LAB_0010c6e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c6e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultGridItem");
      goto LAB_0010c74e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultGridItem");
LAB_0010c74e:
  return &_get_class_namev()::_class_name_static;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_0010c7c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c7c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010c82e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010c82e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorQuickOpenDialog::_get_class_namev() const */

undefined8 * EditorQuickOpenDialog::_get_class_namev(void)

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
LAB_0010c8b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c8b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorQuickOpenDialog");
      goto LAB_0010c91e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorQuickOpenDialog");
LAB_0010c91e:
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
LAB_0010c9a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c9a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_0010ca0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_0010ca0e:
  return &_get_class_namev()::_class_name_static;
}



/* QuickOpenResultItem::_get_class_namev() const */

undefined8 * QuickOpenResultItem::_get_class_namev(void)

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
LAB_0010ca93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ca93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultItem");
      goto LAB_0010cafe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"QuickOpenResultItem");
LAB_0010cafe:
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
LAB_0010cb73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cb73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010cbde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010cbde:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cc70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cc70:
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
      if (StringName::configured == '\0') goto LAB_0010ccd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ccd0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cd30:
  Control::~Control((Control *)this);
  return;
}



/* QuickOpenResultListItem::~QuickOpenResultListItem() */

void __thiscall QuickOpenResultListItem::~QuickOpenResultListItem(QuickOpenResultListItem *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cd90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cd90:
  Control::~Control((Control *)this);
  return;
}



/* QuickOpenResultGridItem::~QuickOpenResultGridItem() */

void __thiscall QuickOpenResultGridItem::~QuickOpenResultGridItem(QuickOpenResultGridItem *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cdf0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cdf0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ce50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ce50:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* QuickOpenResultListItem::~QuickOpenResultListItem() */

void __thiscall QuickOpenResultListItem::~QuickOpenResultListItem(QuickOpenResultListItem *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cec0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cec0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa38);
  return;
}



/* QuickOpenResultGridItem::~QuickOpenResultGridItem() */

void __thiscall QuickOpenResultGridItem::~QuickOpenResultGridItem(QuickOpenResultGridItem *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cf30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cf30:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
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
      if (StringName::configured == '\0') goto LAB_0010cfa0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cfa0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d010;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d010:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HFlowContainer::_notificationv(int, bool) */

void __thiscall HFlowContainer::_notificationv(HFlowContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123078 != Container::_notification) {
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
  if ((code *)PTR__notification_00123078 == Container::_notification) {
    return;
  }
  FlowContainer::_notification(iVar1);
  return;
}



/* QuickOpenResultGridItem::_notificationv(int, bool) */

void __thiscall
QuickOpenResultGridItem::_notificationv(QuickOpenResultGridItem *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123080 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00123080 == Container::_notification) {
    return;
  }
  MarginContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123088 != Container::_notification) {
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
  if ((code *)PTR__notification_00123088 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123088 != Container::_notification) {
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
  if ((code *)PTR__notification_00123088 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* QuickOpenResultListItem::_notificationv(int, bool) */

void __thiscall
QuickOpenResultListItem::_notificationv(QuickOpenResultListItem *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00123080 != Container::_notification) {
      MarginContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00123080 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
  return;
}



/* QuickOpenResultItem::~QuickOpenResultItem() */

void __thiscall QuickOpenResultItem::~QuickOpenResultItem(QuickOpenResultItem *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b4a0;
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa20) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa20);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d68d;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d68d:
  Control::~Control((Control *)this);
  return;
}



/* QuickOpenResultItem::~QuickOpenResultItem() */

void __thiscall QuickOpenResultItem::~QuickOpenResultItem(QuickOpenResultItem *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b4a0;
  if (*(long *)(this + 0xa28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa20) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa20);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d79d;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d79d:
  Control::~Control((Control *)this);
  operator_delete(this,0xa48);
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



/* WARNING: Removing unreachable block (ram,0x0010d94a) */
/* Container::_notificationv(int, bool) */

void __thiscall Container::_notificationv(Container *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123090 != Control::_notification) {
      Container::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00123090 == Control::_notification) {
    return;
  }
  Container::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010da20) */
/* HighlightedLabel::_notificationv(int, bool) */

void __thiscall HighlightedLabel::_notificationv(HighlightedLabel *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00123098 != Control::_notification) {
      Label::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00123098 != Control::_notification) {
    Label::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* QuickOpenResultItem::_notificationv(int, bool) */

void __thiscall
QuickOpenResultItem::_notificationv(QuickOpenResultItem *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Control::_notification(iVar1);
    Container::_notification(iVar1);
    if ((code *)PTR__notification_00123088 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    _notification(iVar1);
    return;
  }
  _notification(iVar1);
  if ((code *)PTR__notification_00123088 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  Container::_notificationv((Container *)this,param_1,true);
  return;
}



/* Callable create_custom_callable_function_pointer<QuickOpenResultContainer,
   bool>(QuickOpenResultContainer*, char const*, void (QuickOpenResultContainer::*)(bool)) */

QuickOpenResultContainer *
create_custom_callable_function_pointer<QuickOpenResultContainer,bool>
          (QuickOpenResultContainer *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC33;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c1a8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
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



/* EditorQuickOpenDialog::_initialize_classv() */

void EditorQuickOpenDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Viewport");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Window");
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Window");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"AcceptDialog");
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
      if ((code *)PTR__bind_methods_001230a0 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_001230a8 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorQuickOpenDialog";
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



/* WARNING: Removing unreachable block (ram,0x0010e7d8) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* EditorQuickOpenDialog::get_class() const */

void EditorQuickOpenDialog::get_class(void)

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



/* HighlightedLabel::get_class() const */

void HighlightedLabel::get_class(void)

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



/* QuickOpenResultListItem::get_class() const */

void QuickOpenResultListItem::get_class(void)

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



/* QuickOpenResultGridItem::get_class() const */

void QuickOpenResultGridItem::get_class(void)

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



/* QuickOpenResultContainer::get_class() const */

void QuickOpenResultContainer::get_class(void)

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



/* QuickOpenResultItem::get_class() const */

void QuickOpenResultItem::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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



/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::call
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010f70f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f70f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f7c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f70f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f7c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::call
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010f91f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f91f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f9d0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f91f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f9d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
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
          goto LAB_0010faae;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010faae;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC101;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_0010fb7d:
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
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010fb7d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010faae;
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
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010faae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::call
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010ff08;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010ff08;
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
        uVar3 = _LC102;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010feb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010ffb9;
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
LAB_0010ff08:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ffb9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::call
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00110085;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00110085;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC103;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[1]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC101;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar8 != local_48) {
          if (pOVar8 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_001101b3:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar8) {
              local_48 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_001101b3;
            }
          }
        }
        (*pcVar11)((long *)(lVar1 + lVar2),(String *)&local_48,iVar7);
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_00110085;
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
  _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00110085:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::call
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00110509;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00110509;
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
        uVar3 = _LC104;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001104b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_001105ba;
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
LAB_00110509:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001105ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::call
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this,
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
            uVar3 = _LC105;
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
        goto LAB_0011068e;
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
  _err_print_error(&_LC100,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011068e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if ((code *)PTR__bind_methods_001230b0 != Object::_bind_methods) {
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00123010 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_001230b8 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultListItem::_initialize_classv() */

void QuickOpenResultListItem::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "MarginContainer";
      local_60 = 0;
      local_40 = 0xf;
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
      if ((code *)PTR__bind_methods_001230c0 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "MarginContainer";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "QuickOpenResultListItem";
    local_60 = 0;
    local_40 = 0x17;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HFlowContainer::_initialize_classv() */

void HFlowContainer::_initialize_classv(void)

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
    if (FlowContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "FlowContainer";
      local_60 = 0;
      local_40 = 0xd;
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
      if ((code *)PTR__bind_methods_001230c8 != Container::_bind_methods) {
        FlowContainer::_bind_methods();
      }
      FlowContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "FlowContainer";
    local_58 = 0;
    local_40 = 0xd;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "HFlowContainer";
    local_60 = 0;
    local_40 = 0xe;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultGridItem::_initialize_classv() */

void QuickOpenResultGridItem::_initialize_classv(void)

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
    if (MarginContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "MarginContainer";
      local_60 = 0;
      local_40 = 0xf;
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
      if ((code *)PTR__bind_methods_001230c0 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "MarginContainer";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "QuickOpenResultGridItem";
    local_60 = 0;
    local_40 = 0x17;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "BoxContainer";
      local_60 = 0;
      local_40 = 0xc;
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
      if ((code *)PTR__bind_methods_001230d0 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "BoxContainer";
    local_58 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VBoxContainer";
    local_60 = 0;
    local_40 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "BoxContainer";
      local_60 = 0;
      local_40 = 0xc;
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
      if ((code *)PTR__bind_methods_001230d0 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "BoxContainer";
    local_58 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "HBoxContainer";
    local_60 = 0;
    local_40 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* QuickOpenResultItem::_initialize_classv() */

void QuickOpenResultItem::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
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
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_001230d0 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_48 = "BoxContainer";
      local_58 = 0;
      local_40 = 0xc;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "HBoxContainer";
      local_60 = 0;
      local_40 = 0xd;
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "HBoxContainer";
    local_58 = 0;
    local_40 = 0xd;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "QuickOpenResultItem";
    local_60 = 0;
    local_40 = 0x13;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HighlightedLabel::_initialize_classv() */

void HighlightedLabel::_initialize_classv(void)

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
    if (Label::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
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
          if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
      String::parse_latin1((String *)&local_70,"Label");
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
      if ((code *)PTR__bind_methods_001230d8 != Control::_bind_methods) {
        Label::_bind_methods();
      }
      Label::initialize_class()::initialized = '\x01';
    }
    local_58 = "Label";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HighlightedLabel";
    local_70 = 0;
    local_50 = 0x10;
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
    if (cVar5 != '\0') goto LAB_0011202b;
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
      if (cVar5 != '\0') goto LAB_0011202b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011202b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011222b;
  }
  cVar5 = String::operator==(param_1,"Window");
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
      if (cVar5 != '\0') goto LAB_0011222b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011232e;
    }
  }
LAB_0011222b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011232e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorQuickOpenDialog::is_class(String const&) const */

undefined8 __thiscall EditorQuickOpenDialog::is_class(EditorQuickOpenDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011243b;
  }
  cVar5 = String::operator==(param_1,"EditorQuickOpenDialog");
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
      if (cVar5 != '\0') goto LAB_0011243b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0011253e;
    }
  }
LAB_0011243b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011253e:
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
    if (cVar5 != '\0') goto LAB_0011264b;
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
      if (cVar5 != '\0') goto LAB_0011264b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011274e;
    }
  }
LAB_0011264b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011274e:
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
    if (cVar4 != '\0') goto LAB_0011285b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011285b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001129ab;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001129ab:
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
    if (cVar5 != '\0') goto LAB_00112afb;
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
      if (cVar5 != '\0') goto LAB_00112afb;
    }
    cVar5 = String::operator==(param_1,"FlowContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00112bfe;
    }
  }
LAB_00112afb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112bfe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HighlightedLabel::is_class(String const&) const */

undefined8 __thiscall HighlightedLabel::is_class(HighlightedLabel *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00112d0b;
  }
  cVar5 = String::operator==(param_1,"HighlightedLabel");
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
      if (cVar5 != '\0') goto LAB_00112d0b;
    }
    cVar5 = String::operator==(param_1,"Label");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00112e0e;
    }
  }
LAB_00112d0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112e0e:
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
    if (cVar5 != '\0') goto LAB_00112f1b;
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
      if (cVar5 != '\0') goto LAB_00112f1b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00112f1b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011311b;
  }
  cVar4 = String::operator==(param_1,"ConfigFile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011311b:
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
        if (pvVar3 == (void *)0x0) goto LAB_0011325f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011325f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* QuickOpenResultContainer::is_class(String const&) const */

undefined8 __thiscall
QuickOpenResultContainer::is_class(QuickOpenResultContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001133bb;
  }
  cVar5 = String::operator==(param_1,"QuickOpenResultContainer");
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
      if (cVar5 != '\0') goto LAB_001133bb;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_001134be;
    }
  }
LAB_001133bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001134be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultItem::is_class(String const&) const */

undefined8 __thiscall QuickOpenResultItem::is_class(QuickOpenResultItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001135cb;
  }
  cVar5 = String::operator==(param_1,"QuickOpenResultItem");
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
      if (cVar5 != '\0') goto LAB_001135cb;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_001136ce;
    }
  }
LAB_001135cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001136ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultListItem::is_class(String const&) const */

undefined8 __thiscall
QuickOpenResultListItem::is_class(QuickOpenResultListItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001137db;
  }
  cVar5 = String::operator==(param_1,"QuickOpenResultListItem");
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
      if (cVar5 != '\0') goto LAB_001137db;
    }
    cVar5 = String::operator==(param_1,"MarginContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001138de;
    }
  }
LAB_001137db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001138de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultGridItem::is_class(String const&) const */

undefined8 __thiscall
QuickOpenResultGridItem::is_class(QuickOpenResultGridItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001139eb;
  }
  cVar5 = String::operator==(param_1,"QuickOpenResultGridItem");
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
      if (cVar5 != '\0') goto LAB_001139eb;
    }
    cVar5 = String::operator==(param_1,"MarginContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00113aee;
    }
  }
LAB_001139eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113aee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00113bfb;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar5 != '\0') goto LAB_00113bfb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00113cfe;
    }
  }
LAB_00113bfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113cfe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00113e0b;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar5 != '\0') goto LAB_00113e0b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00113f0e;
    }
  }
LAB_00113e0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113f0e:
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
  local_78 = &_LC41;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC41;
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
      goto LAB_0011407c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011407c:
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
      goto LAB_001142cc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001142cc:
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ConfigFile";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Viewport";
  local_90 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Viewport",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001230e0 != Object::_get_property_list) {
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Window";
  local_90 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001230e8 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
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
      goto LAB_00114cb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114cb1:
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorQuickOpenDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorQuickOpenDialog::_get_property_listv(EditorQuickOpenDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorQuickOpenDialog";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorQuickOpenDialog";
  local_90 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorQuickOpenDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001230f0 != CanvasItem::_get_property_list) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Container";
  local_90 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BoxContainer";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
      goto LAB_001156c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001156c1:
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



/* QuickOpenResultContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
QuickOpenResultContainer::_get_property_listv
          (QuickOpenResultContainer *this,List *param_1,bool param_2)

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
  local_78 = "QuickOpenResultContainer";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "QuickOpenResultContainer";
  local_98 = 0;
  local_70 = 0x18;
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
      goto LAB_00115971;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115971:
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
  StringName::StringName((StringName *)&local_78,"QuickOpenResultContainer",false);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* QuickOpenResultItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
QuickOpenResultItem::_get_property_listv(QuickOpenResultItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "QuickOpenResultItem";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "QuickOpenResultItem";
  local_90 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"QuickOpenResultItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "FlowContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "FlowContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    FlowContainer::_get_property_listv((FlowContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HFlowContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HFlowContainer";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MarginContainer";
  local_90 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MarginContainer",false);
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



/* QuickOpenResultListItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
QuickOpenResultListItem::_get_property_listv
          (QuickOpenResultListItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "QuickOpenResultListItem";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "QuickOpenResultListItem";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"QuickOpenResultListItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuickOpenResultGridItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
QuickOpenResultGridItem::_get_property_listv
          (QuickOpenResultGridItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "QuickOpenResultGridItem";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "QuickOpenResultGridItem";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"QuickOpenResultGridItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MarginContainer::_get_property_listv((MarginContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Label::_get_property_listv(Label *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Label";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Label";
  local_90 = 0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Label",false);
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



/* HighlightedLabel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HighlightedLabel::_get_property_listv(HighlightedLabel *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Label::_get_property_listv((Label *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HighlightedLabel";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HighlightedLabel";
  local_90 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HighlightedLabel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Label::_get_property_listv((Label *)this,param_1,true);
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



/* QuickOpenResultContainer::_initialize_classv() */

void QuickOpenResultContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          Container::initialize_class();
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
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_001230d0 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_48 = "BoxContainer";
      local_58 = 0;
      local_40 = 0xc;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VBoxContainer";
      local_60 = 0;
      local_40 = 0xd;
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "VBoxContainer";
    local_58 = 0;
    local_40 = 0xd;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "QuickOpenResultContainer";
    local_60 = 0;
    local_40 = 0x18;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* QuickOpenResultContainer::_notificationv(int, bool) */

void __thiscall
QuickOpenResultContainer::_notificationv(QuickOpenResultContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00123088 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notificationv((Container *)this,param_1,true);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00123088 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  if (param_1 == 0x2d) {
    _notification(iVar1);
    return;
  }
  return;
}



/* OAHashMap<StringName, Ref<Texture2D>, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_insert_with_hash(unsigned int, StringName const&, Ref<Texture2D> const&) */

void __thiscall
OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
_insert_with_hash(OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                  *this,uint param_1,StringName *param_2,Ref *param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  Object *pOVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  Object *pOVar13;
  long lVar14;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  StringName::StringName((StringName *)&local_50,param_2);
  local_78 = *(Object **)param_3;
  if (local_78 == (Object *)0x0) {
    lVar12 = *(long *)(this + 0x10);
    lVar14 = uVar7 * 4;
    puVar11 = (uint *)(lVar12 + lVar14);
    uVar9 = *puVar11;
    if (uVar9 != 0) goto LAB_00117133;
    StringName::StringName((StringName *)(*(long *)(this + 8) + uVar7 * 8),(StringName *)&local_50);
    *(undefined8 *)(*(long *)this + uVar7 * 8) = 0;
  }
  else {
    cVar2 = RefCounted::reference();
    lVar12 = *(long *)(this + 0x10);
    lVar14 = uVar7 * 4;
    puVar11 = (uint *)(lVar12 + lVar14);
    if (cVar2 == '\0') {
      local_78 = (Object *)0x0;
    }
    uVar9 = *puVar11;
    if (uVar9 != 0) {
LAB_00117133:
      uVar3 = (ulong)*(uint *)(this + 0x18);
      uVar10 = 0;
      pOVar13 = local_78;
      do {
        lVar14 = local_50;
        uVar4 = (uint)((ulong)(uint)(((int)uVar7 + (int)uVar3) - (int)((ulong)uVar9 % uVar3)) %
                      uVar3);
        local_78 = pOVar13;
        if (uVar4 < uVar10) {
          lVar1 = *(long *)(this + 8);
          lVar12 = uVar7 * 8;
          *puVar11 = param_1;
          plVar6 = (long *)(lVar1 + lVar12);
          local_50 = 0;
          local_48 = lVar14;
          if (*plVar6 == 0) {
            if (lVar14 != 0) {
LAB_001171da:
              StringName::unref();
              *plVar6 = local_48;
              goto LAB_001171f2;
            }
            plVar6 = (long *)(*(long *)this + lVar12);
            if (pOVar13 == (Object *)0x0) goto LAB_00117420;
LAB_00117202:
            cVar2 = RefCounted::reference();
            pOVar5 = (Object *)*plVar6;
            local_78 = pOVar5;
            if (cVar2 == '\0') {
              if (pOVar13 == pOVar5) {
                *plVar6 = 0;
LAB_00117458:
                cVar2 = RefCounted::unreference();
                if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar5);
                  local_70 = (Object *)0x0;
                  if (cVar2 != '\0') {
LAB_001174ca:
                    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                    Memory::free_static(pOVar5,false);
                    goto LAB_001174eb;
                  }
                }
                goto LAB_001172c3;
              }
              local_70 = (Object *)0x0;
LAB_0011722b:
              if ((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
                local_78 = (Object *)0x0;
                cVar2 = RefCounted::unreference();
                if (cVar2 != '\0') goto LAB_001172f8;
LAB_00117257:
                pOVar5 = (Object *)*plVar6;
                pOVar13 = local_78;
              }
              else {
                cVar2 = RefCounted::unreference();
                if (cVar2 == '\0') goto LAB_00117257;
LAB_001172f8:
                cVar2 = predelete_handler(pOVar13);
                if (cVar2 == '\0') goto LAB_00117257;
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
                pOVar5 = (Object *)*plVar6;
                pOVar13 = local_78;
              }
              local_78 = pOVar13;
              if (local_70 != pOVar5) {
                *plVar6 = (long)local_70;
                if (local_70 == (Object *)0x0) goto LAB_00117490;
                cVar2 = RefCounted::reference();
                if (cVar2 == '\0') {
                  *plVar6 = 0;
                }
                if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')
                    ) && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) goto LAB_001174ca;
                goto LAB_001172b1;
              }
LAB_001174eb:
              if (local_70 == (Object *)0x0) goto LAB_001172c3;
              cVar2 = RefCounted::unreference();
              pOVar13 = local_78;
            }
            else {
              local_70 = pOVar13;
              if (pOVar13 != pOVar5) goto LAB_0011722b;
LAB_001172b1:
              cVar2 = RefCounted::unreference();
            }
            local_78 = pOVar13;
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_70), cVar2 != '\0')) {
              (**(code **)(*(long *)local_70 + 0x140))(local_70);
              Memory::free_static(local_70,false);
            }
          }
          else {
            StringName::unref();
            local_50 = *plVar6;
            *plVar6 = 0;
            if (local_48 != 0) goto LAB_001171da;
LAB_001171f2:
            plVar6 = (long *)(*(long *)this + lVar12);
            if (pOVar13 != (Object *)0x0) goto LAB_00117202;
LAB_00117420:
            pOVar13 = (Object *)*plVar6;
            if (pOVar13 != (Object *)0x0) {
              cVar2 = RefCounted::reference();
              pOVar5 = (Object *)*plVar6;
              if (cVar2 == '\0') {
                if (pOVar5 == (Object *)0x0) goto LAB_001172c3;
                *plVar6 = 0;
                local_78 = (Object *)0x0;
                goto LAB_00117458;
              }
              local_78 = pOVar13;
              if (pOVar5 == (Object *)0x0) goto LAB_001172c3;
              *plVar6 = 0;
LAB_00117490:
              if (pOVar5 != (Object *)0x0) goto LAB_00117458;
            }
          }
LAB_001172c3:
          uVar3 = (ulong)*(uint *)(this + 0x18);
          lVar12 = *(long *)(this + 0x10);
          param_1 = uVar9;
          uVar10 = uVar4;
        }
        uVar10 = uVar10 + 1;
        uVar7 = (ulong)((int)uVar7 + 1) % uVar3;
        lVar14 = uVar7 * 4;
        puVar11 = (uint *)(lVar12 + lVar14);
        uVar9 = *puVar11;
        pOVar13 = local_78;
      } while (uVar9 != 0);
    }
    StringName::StringName((StringName *)(*(long *)(this + 8) + uVar7 * 8),(StringName *)&local_50);
    puVar8 = (undefined8 *)(uVar7 * 8 + *(long *)this);
    if (local_78 != (Object *)0x0) {
      *puVar8 = local_78;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *puVar8 = 0;
      }
      *(uint *)(*(long *)(this + 0x10) + lVar14) = param_1;
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_78), cVar2 != '\0')) {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
      goto LAB_001173ba;
    }
    *puVar8 = 0;
  }
  *(uint *)(*(long *)(this + 0x10) + lVar14) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
LAB_001173ba:
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<StringName, Ref<Texture2D>, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&, Ref<Texture2D> const&) */

void __thiscall
OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
insert(OAHashMap<StringName,Ref<Texture2D>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
       *this,StringName *param_1,Ref *param_2)

{
  StringName *pSVar1;
  Ref *pRVar2;
  uint *puVar3;
  Object *pOVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  Ref *pRVar13;
  StringName *pSVar14;
  
  uVar6 = *(uint *)(this + 0x18);
  if ((double)uVar6 * __LC127 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar12 = (ulong)(uVar6 * 2);
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar6 * 2 == 0) {
      uVar12 = 1;
    }
    pSVar1 = *(StringName **)(this + 8);
    pRVar2 = *(Ref **)this;
    *(int *)(this + 0x18) = (int)uVar12;
    puVar3 = *(uint **)(this + 0x10);
    uVar7 = Memory::alloc_static(uVar12 << 3,false);
    *(undefined8 *)(this + 8) = uVar7;
    uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 3,false);
    *(undefined8 *)this = uVar7;
    lVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(long *)(this + 0x10) = lVar8;
    if (*(int *)(this + 0x18) != 0) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar8 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < *(uint *)(this + 0x18));
    }
    if (uVar6 != 0) {
      puVar10 = puVar3;
      pRVar13 = pRVar2;
      pSVar14 = pSVar1;
      do {
        if (*puVar10 != 0) {
          _insert_with_hash(this,*puVar10,pSVar14,pRVar13);
          if ((StringName::configured != '\0') && (*(long *)pSVar14 != 0)) {
            StringName::unref();
          }
          if ((*(long *)pRVar13 != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
            pOVar4 = *(Object **)pRVar13;
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))();
              Memory::free_static(pOVar4,false);
            }
          }
        }
        pRVar13 = pRVar13 + 8;
        puVar10 = puVar10 + 1;
        pSVar14 = pSVar14 + 8;
      } while (pRVar13 != pRVar2 + (ulong)uVar6 * 8);
      Memory::free_static(pSVar1,false);
      Memory::free_static(pRVar2,false);
      Memory::free_static(puVar3,false);
      lVar8 = *(long *)param_1;
      goto joined_r0x001177cb;
    }
  }
  lVar8 = *(long *)param_1;
joined_r0x001177cb:
  if (lVar8 == 0) {
    uVar6 = StringName::get_empty_hash();
  }
  else {
    uVar6 = *(uint *)(lVar8 + 0x20);
  }
  uVar11 = 1;
  if (uVar6 != 0) {
    uVar11 = uVar6;
  }
  _insert_with_hash(this,uVar11,param_1,param_2);
  return;
}



/* OAHashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::_insert_with_hash(unsigned int, String const&, StringName const&) */

void __thiscall
OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>::
_insert_with_hash(OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>
                  *this,uint param_1,String *param_2,StringName *param_3)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  CowData<char32_t> *pCVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  uVar4 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  uVar7 = uVar4 % (ulong)*(uint *)(this + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_2);
  StringName::StringName((StringName *)&local_50,param_3);
  lVar9 = *(long *)(this + 0x10);
  lVar10 = uVar7 * 4;
  puVar8 = (uint *)(lVar9 + lVar10);
  uVar11 = *puVar8;
  if (uVar11 != 0) {
    uVar1 = (ulong)*(uint *)(this + 0x18);
    uVar5 = 0;
    do {
      lVar10 = local_58;
      uVar2 = (uint)((ulong)(uint)(((int)uVar7 + (int)uVar1) - (int)((ulong)uVar11 % uVar1)) % uVar1
                    );
      if (uVar2 < uVar5) {
        lVar9 = *(long *)(this + 8);
        *puVar8 = (uint)uVar4;
        local_58 = 0;
        pCVar6 = (CowData<char32_t> *)(lVar9 + uVar7 * 8);
        local_48 = lVar10;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          local_58 = *(long *)pCVar6;
          *(undefined8 *)pCVar6 = 0;
        }
        if (lVar10 != 0) {
          CowData<char32_t>::_unref(pCVar6);
          *(long *)pCVar6 = lVar10;
          local_48 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        local_48 = local_50;
        plVar3 = (long *)(uVar7 * 8 + *(long *)this);
        local_50 = 0;
        if (*plVar3 != 0) {
          StringName::unref();
          local_50 = *plVar3;
          *plVar3 = 0;
        }
        if (local_48 != 0) {
          StringName::unref();
          *plVar3 = local_48;
        }
        uVar1 = (ulong)*(uint *)(this + 0x18);
        lVar9 = *(long *)(this + 0x10);
        uVar4 = (ulong)uVar11;
        uVar5 = uVar2;
      }
      param_1 = (uint)uVar4;
      uVar5 = uVar5 + 1;
      uVar7 = (ulong)((int)uVar7 + 1) % uVar1;
      lVar10 = uVar7 * 4;
      puVar8 = (uint *)(lVar9 + lVar10);
      uVar11 = *puVar8;
    } while (uVar11 != 0);
  }
  pCVar6 = (CowData<char32_t> *)(*(long *)(this + 8) + uVar7 * 8);
  *(undefined8 *)pCVar6 = 0;
  CowData<char32_t>::_ref(pCVar6,(CowData *)&local_58);
  StringName::StringName((StringName *)(*(long *)this + uVar7 * 8),(StringName *)&local_50);
  *(uint *)(*(long *)(this + 0x10) + lVar10) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>
   >::insert(String const&, StringName const&) */

void __thiscall
OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
          (OAHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,StringName *param_2)

{
  CowData<char32_t> *pCVar1;
  StringName *pSVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  CowData<char32_t> *this_00;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  StringName *pSVar11;
  
  uVar8 = *(uint *)(this + 0x18);
  if ((double)uVar8 * __LC127 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar9 = (ulong)(uVar8 * 2);
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar8 * 2 == 0) {
      uVar9 = 1;
    }
    pCVar1 = *(CowData<char32_t> **)(this + 8);
    pSVar2 = *(StringName **)this;
    *(int *)(this + 0x18) = (int)uVar9;
    puVar3 = *(uint **)(this + 0x10);
    uVar5 = Memory::alloc_static(uVar9 << 3,false);
    *(undefined8 *)(this + 8) = uVar5;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 3,false);
    *(undefined8 *)this = uVar5;
    lVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(long *)(this + 0x10) = lVar6;
    if (*(int *)(this + 0x18) != 0) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x18));
    }
    if (uVar8 != 0) {
      this_00 = pCVar1;
      puVar10 = puVar3;
      pSVar11 = pSVar2;
      do {
        if (*puVar10 != 0) {
          _insert_with_hash(this,*puVar10,(String *)this_00,pSVar11);
          CowData<char32_t>::_unref(this_00);
          if ((StringName::configured != '\0') && (*(long *)pSVar11 != 0)) {
            StringName::unref();
          }
        }
        pSVar11 = pSVar11 + 8;
        puVar10 = puVar10 + 1;
        this_00 = this_00 + 8;
      } while (pSVar11 != pSVar2 + (ulong)uVar8 * 8);
      Memory::free_static(pCVar1,false);
      Memory::free_static(pSVar2,false);
      Memory::free_static(puVar3,false);
    }
  }
  uVar4 = String::hash();
  uVar8 = 1;
  if (uVar4 != 0) {
    uVar8 = uVar4;
  }
  _insert_with_hash(this,uVar8,param_1,param_2);
  return;
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



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
LAB_00118130:
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
  if (lVar9 == 0) goto LAB_00118130;
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
    goto LAB_00118186;
  }
  if (lVar9 == lVar5) {
LAB_001180ab:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00118186:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011801f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_001180ab;
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
LAB_0011801f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<QuickOpenResultCandidate>::_unref() */

void __thiscall CowData<QuickOpenResultCandidate>::_unref(CowData<QuickOpenResultCandidate> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  Object *pOVar4;
  code *pcVar5;
  char cVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  
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
        lVar7 = 0;
        this_00 = pCVar2;
        do {
          if (*(long *)(this_00 + 8) != 0) {
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              pOVar4 = *(Object **)(this_00 + 8);
              cVar6 = predelete_handler(pOVar4);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          lVar7 = lVar7 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* OAHashMap<StringName, Vector<QuickOpenResultCandidate>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::_insert_with_hash(unsigned int, StringName const&,
   Vector<QuickOpenResultCandidate> const&) */

void __thiscall
OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
::_insert_with_hash(OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                    *this,uint param_1,StringName *param_2,Vector *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  long local_70 [2];
  long local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  StringName::StringName((StringName *)local_70,param_2);
  local_60 = 0;
  lVar2 = *(long *)(param_3 + 8);
  if (*(long *)(param_3 + 8) != 0) {
    CowData<QuickOpenResultCandidate>::_ref
              ((CowData<QuickOpenResultCandidate> *)&local_60,(CowData *)(param_3 + 8));
    lVar2 = local_60;
  }
  lVar7 = *(long *)(this + 0x10);
  lVar5 = uVar6 * 4;
  puVar9 = (uint *)(lVar7 + lVar5);
  uVar11 = *puVar9;
  if (uVar11 != 0) {
    uVar3 = (ulong)*(uint *)(this + 0x18);
    uVar8 = 0;
    lVar10 = lVar2;
    do {
      lVar5 = local_70[0];
      uVar4 = (uint)((ulong)(uint)(((int)uVar6 + (int)uVar3) - (int)((ulong)uVar11 % uVar3)) % uVar3
                    );
      lVar2 = lVar10;
      if (uVar4 < uVar8) {
        lVar2 = *(long *)(this + 8);
        *puVar9 = param_1;
        local_70[0] = 0;
        plVar1 = (long *)(lVar2 + uVar6 * 8);
        local_58 = lVar5;
        if (*plVar1 != 0) {
          StringName::unref();
          local_70[0] = *plVar1;
          *plVar1 = 0;
        }
        if (local_58 != 0) {
          StringName::unref();
          *plVar1 = local_58;
        }
        lVar5 = uVar6 * 0x10 + *(long *)this;
        local_60 = 0;
        lVar2 = *(long *)(lVar5 + 8);
        local_50[0] = lVar10;
        if (lVar2 != 0) {
          CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)&local_60);
          lVar2 = *(long *)(lVar5 + 8);
          *(undefined8 *)(lVar5 + 8) = 0;
          local_60 = lVar2;
        }
        if (lVar10 != 0) {
          CowData<QuickOpenResultCandidate>::_unref
                    ((CowData<QuickOpenResultCandidate> *)(lVar5 + 8));
          *(long *)(lVar5 + 8) = lVar10;
          local_50[0] = 0;
        }
        CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)local_50);
        uVar3 = (ulong)*(uint *)(this + 0x18);
        lVar7 = *(long *)(this + 0x10);
        param_1 = uVar11;
        uVar8 = uVar4;
      }
      uVar8 = uVar8 + 1;
      uVar6 = (ulong)((int)uVar6 + 1) % uVar3;
      lVar5 = uVar6 * 4;
      puVar9 = (uint *)(lVar7 + lVar5);
      uVar11 = *puVar9;
      lVar10 = lVar2;
    } while (uVar11 != 0);
  }
  StringName::StringName((StringName *)(*(long *)(this + 8) + uVar6 * 8),(StringName *)local_70);
  lVar7 = uVar6 * 0x10 + *(long *)this;
  *(undefined8 *)(lVar7 + 8) = 0;
  if (lVar2 != 0) {
    CowData<QuickOpenResultCandidate>::_ref
              ((CowData<QuickOpenResultCandidate> *)(lVar7 + 8),(CowData *)&local_60);
  }
  *(uint *)(*(long *)(this + 0x10) + lVar5) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)&local_60);
  if ((StringName::configured != '\0') && (local_70[0] != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<StringName, Vector<QuickOpenResultCandidate>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >::insert(StringName const&,
   Vector<QuickOpenResultCandidate> const&) */

void __thiscall
OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
::insert(OAHashMap<StringName,Vector<QuickOpenResultCandidate>,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
         *this,StringName *param_1,Vector *param_2)

{
  StringName *pSVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  StringName *pSVar11;
  CowData<QuickOpenResultCandidate> *this_00;
  
  uVar4 = *(uint *)(this + 0x18);
  if ((double)uVar4 * __LC127 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar10 = (ulong)(uVar4 * 2);
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar4 * 2 == 0) {
      uVar10 = 1;
    }
    pSVar1 = *(StringName **)(this + 8);
    pvVar2 = *(void **)this;
    *(int *)(this + 0x18) = (int)uVar10;
    puVar3 = *(uint **)(this + 0x10);
    uVar5 = Memory::alloc_static(uVar10 << 3,false);
    *(undefined8 *)(this + 8) = uVar5;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
    *(undefined8 *)this = uVar5;
    lVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(long *)(this + 0x10) = lVar6;
    if (*(int *)(this + 0x18) != 0) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x18));
    }
    if (uVar4 != 0) {
      this_00 = (CowData<QuickOpenResultCandidate> *)((long)pvVar2 + 8);
      puVar8 = puVar3;
      pSVar11 = pSVar1;
      do {
        if (*puVar8 != 0) {
          _insert_with_hash(this,*puVar8,pSVar11,(Vector *)(this_00 + -8));
          if ((StringName::configured != '\0') && (*(long *)pSVar11 != 0)) {
            StringName::unref();
          }
          CowData<QuickOpenResultCandidate>::_unref(this_00);
        }
        pSVar11 = pSVar11 + 8;
        puVar8 = puVar8 + 1;
        this_00 = this_00 + 0x10;
      } while (pSVar11 != pSVar1 + (ulong)uVar4 * 8);
      Memory::free_static(pSVar1,false);
      Memory::free_static(pvVar2,false);
      Memory::free_static(puVar3,false);
      lVar6 = *(long *)param_1;
      goto joined_r0x001186a9;
    }
  }
  lVar6 = *(long *)param_1;
joined_r0x001186a9:
  if (lVar6 == 0) {
    uVar4 = StringName::get_empty_hash();
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0x20);
  }
  uVar9 = 1;
  if (uVar4 != 0) {
    uVar9 = uVar4;
  }
  _insert_with_hash(this,uVar9,param_1,param_2);
  return;
}



/* CowData<QuickOpenResultItem*>::_realloc(long) */

undefined8 __thiscall
CowData<QuickOpenResultItem*>::_realloc(CowData<QuickOpenResultItem*> *this,long param_1)

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



/* CowData<QuickOpenResultCandidate>::_realloc(long) */

undefined8 __thiscall
CowData<QuickOpenResultCandidate>::_realloc(CowData<QuickOpenResultCandidate> *this,long param_1)

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
/* Error CowData<QuickOpenResultCandidate>::resize<false>(long) */

undefined8 __thiscall
CowData<QuickOpenResultCandidate>::resize<false>
          (CowData<QuickOpenResultCandidate> *this,long param_1)

{
  CowData<char32_t> *this_00;
  Object *pOVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
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
    lVar9 = 0;
    lVar11 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar11 = lVar9 * 0x18;
    if (lVar11 != 0) {
      uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      lVar11 = (uVar12 | uVar12 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00118a80:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar12 = param_1 * 0x18 - 1;
  uVar12 = uVar12 >> 1 | uVar12;
  uVar12 = uVar12 | uVar12 >> 2;
  uVar12 = uVar12 | uVar12 >> 4;
  uVar12 = uVar12 | uVar12 >> 8;
  uVar12 = uVar12 | uVar12 >> 0x10;
  uVar12 = uVar12 | uVar12 >> 0x20;
  lVar5 = uVar12 + 1;
  if (lVar5 == 0) goto LAB_00118a80;
  uVar13 = param_1;
  if (param_1 <= lVar9) {
    while (lVar9 = *(long *)this, lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar13) {
        if (lVar5 != lVar11) {
          uVar8 = _realloc(this,lVar5);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar9 + uVar13 * 0x18);
      if ((*(long *)(this_00 + 8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar1 = *(Object **)(this_00 + 8);
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      CowData<char32_t>::_unref(this_00);
      uVar13 = uVar13 + 1;
    }
    goto LAB_00118ad6;
  }
  if (lVar5 == lVar11) {
LAB_001189b5:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00118ad6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = puVar10[-1];
    if (param_1 <= lVar9) goto LAB_00118905;
  }
  else {
    if (lVar9 != 0) {
      uVar8 = _realloc(this,lVar5);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_001189b5;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar12 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar9 = 0;
  }
  pauVar7 = (undefined1 (*) [16])(puVar10 + lVar9 * 3);
  do {
    *(undefined8 *)pauVar7[1] = 0;
    pauVar3 = pauVar7 + 1;
    *pauVar7 = (undefined1  [16])0x0;
    pauVar7 = (undefined1 (*) [16])(*pauVar3 + 8);
  } while ((undefined1 (*) [16])(*pauVar3 + 8) != (undefined1 (*) [16])(puVar10 + param_1 * 3));
LAB_00118905:
  puVar10[-1] = param_1;
  return 0;
}



/* Vector<QuickOpenResultCandidate>::append_array(Vector<QuickOpenResultCandidate>) */

void __thiscall
Vector<QuickOpenResultCandidate>::append_array(Vector<QuickOpenResultCandidate> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  Object *pOVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  CowData<char32_t> *this_00;
  long lVar10;
  
  if ((*(long *)(param_2 + 8) != 0) && (lVar2 = *(long *)(*(long *)(param_2 + 8) + -8), lVar2 != 0))
  {
    if (*(long *)(this + 8) == 0) {
      lVar8 = 0;
      lVar10 = lVar2;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 8) + -8);
      lVar10 = lVar2 + lVar8;
    }
    CowData<QuickOpenResultCandidate>::resize<false>
              ((CowData<QuickOpenResultCandidate> *)(this + 8),lVar10);
    if (0 < lVar2) {
      lVar10 = 0;
      lVar8 = lVar8 * 0x18;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar9 = 0;
LAB_00118c53:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar3 + -8);
        if (lVar9 <= lVar10) goto LAB_00118c53;
        pCVar1 = (CowData *)(lVar3 + lVar10 * 0x18);
        CowData<QuickOpenResultCandidate>::_copy_on_write
                  ((CowData<QuickOpenResultCandidate> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar8);
        if (*(long *)this_00 != *(long *)pCVar1) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        pOVar4 = *(Object **)(pCVar1 + 8);
        pOVar5 = *(Object **)(this_00 + 8);
        if (pOVar4 != pOVar5) {
          *(Object **)(this_00 + 8) = pOVar4;
          if (pOVar4 != (Object *)0x0) {
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              *(undefined8 *)(this_00 + 8) = 0;
            }
          }
          if (pOVar5 != (Object *)0x0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 0x18;
        *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(pCVar1 + 0x10);
      } while (lVar10 != lVar2);
    }
  }
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
    _copy_on_write();
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
    _copy_on_write();
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
LAB_00118f60:
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
  if (lVar7 == 0) goto LAB_00118f60;
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
LAB_00118ecc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00118e61;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00118ecc;
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
LAB_00118e61:
  puVar9[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011908f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0011908f:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b818;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00119191;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00119191:
  *(undefined ***)this = &PTR__initialize_classv_00119e80;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b818;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00119281;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00119281:
  *(undefined ***)this = &PTR__initialize_classv_00119e80;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* CowData<FuzzyTokenMatch>::_unref() */

void __thiscall CowData<FuzzyTokenMatch>::_unref(CowData<FuzzyTokenMatch> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<FuzzySearchResult>::_unref() */

void __thiscall CowData<FuzzySearchResult>::_unref(CowData<FuzzySearchResult> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<FuzzyTokenMatch> *this_00;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        this_00 = (CowData<FuzzyTokenMatch> *)(lVar2 + 0x28);
        lVar6 = 0;
        do {
          CowData<FuzzyTokenMatch>::_unref(this_00);
          if (*(long *)(this_00 + -0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + -0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + -0x18);
              *(undefined8 *)(this_00 + -0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          this_00 = this_00 + 0x30;
        } while (lVar3 != lVar6);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* QuickOpenResultContainer::~QuickOpenResultContainer() */

void __thiscall QuickOpenResultContainer::~QuickOpenResultContainer(QuickOpenResultContainer *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  lVar3 = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011aa38;
  if (*(int *)(this + 0xb38) != 0) {
    do {
      if (*(int *)(*(long *)(this + 0xb30) + lVar3 * 4) != 0) {
        plVar4 = (long *)(*(long *)(this + 0xb20) + lVar3 * 8);
        if ((*plVar4 != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
          pOVar1 = (Object *)*plVar4;
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        if ((StringName::configured != '\0') &&
           (*(long *)(lVar3 * 8 + *(long *)(this + 0xb28)) != 0)) {
          StringName::unref();
        }
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 0xb38));
  }
  Memory::free_static(*(void **)(this + 0xb28),false);
  Memory::free_static(*(void **)(this + 0xb20),false);
  Memory::free_static(*(void **)(this + 0xb30),false);
  if (*(long *)(this + 0xac0) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0xac0) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar3 = *(long *)(this + 0xac0);
      *(undefined8 *)(this + 0xac0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((*(long *)(this + 0xaa8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0xaa8);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  lVar3 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa90));
  if (*(int *)(this + 0xa88) != 0) {
    do {
      if (*(int *)(*(long *)(this + 0xa80) + lVar3 * 4) != 0) {
        CowData<QuickOpenResultCandidate>::_unref
                  ((CowData<QuickOpenResultCandidate> *)(lVar3 * 0x10 + *(long *)(this + 0xa70) + 8)
                  );
        if ((StringName::configured != '\0') &&
           (*(long *)(*(long *)(this + 0xa78) + lVar3 * 8) != 0)) {
          StringName::unref();
        }
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 0xa88));
  }
  lVar3 = 0;
  Memory::free_static(*(void **)(this + 0xa78),false);
  Memory::free_static(*(void **)(this + 0xa70),false);
  Memory::free_static(*(void **)(this + 0xa80),false);
  CowData<QuickOpenResultCandidate>::_unref((CowData<QuickOpenResultCandidate> *)(this + 0xa68));
  if (*(int *)(this + 0xa58) != 0) {
    do {
      if (*(int *)(*(long *)(this + 0xa50) + lVar3 * 4) != 0) {
        if ((StringName::configured != '\0') &&
           (*(long *)(*(long *)(this + 0xa40) + lVar3 * 8) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(*(long *)(this + 0xa48) + lVar3 * 8));
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 0xa58));
  }
  Memory::free_static(*(void **)(this + 0xa48),false);
  Memory::free_static(*(void **)(this + 0xa40),false);
  Memory::free_static(*(void **)(this + 0xa50),false);
  CowData<String>::_unref((CowData<String> *)(this + 0xa38));
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0xa28));
  CowData<FuzzySearchResult>::_unref((CowData<FuzzySearchResult> *)(this + 0xa18));
  bVar5 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if ((bVar5) &&
     (((*(long *)(this + 0x9e8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x9d0) != 0)))) {
    StringName::unref();
  }
  Control::~Control((Control *)this);
  return;
}



/* QuickOpenResultContainer::~QuickOpenResultContainer() */

void __thiscall QuickOpenResultContainer::~QuickOpenResultContainer(QuickOpenResultContainer *this)

{
  ~QuickOpenResultContainer(this);
  operator_delete(this,0xb40);
  return;
}



/* HighlightedLabel::draw_substr_rects(Vector2i const&, Vector2, int, int) */

void HighlightedLabel::_GLOBAL__sub_I_draw_substr_rects(void)

{
  undefined8 uStack_8;
  
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
/* QuickOpenResultContainer::~QuickOpenResultContainer() */

void __thiscall QuickOpenResultContainer::~QuickOpenResultContainer(QuickOpenResultContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* QuickOpenResultItem::~QuickOpenResultItem() */

void __thiscall QuickOpenResultItem::~QuickOpenResultItem(QuickOpenResultItem *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* QuickOpenResultGridItem::~QuickOpenResultGridItem() */

void __thiscall QuickOpenResultGridItem::~QuickOpenResultGridItem(QuickOpenResultGridItem *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* QuickOpenResultListItem::~QuickOpenResultListItem() */

void __thiscall QuickOpenResultListItem::~QuickOpenResultListItem(QuickOpenResultListItem *this)

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
/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

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
/* HighlightedLabel::~HighlightedLabel() */

void __thiscall HighlightedLabel::~HighlightedLabel(HighlightedLabel *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorQuickOpenDialog::~EditorQuickOpenDialog() */

void __thiscall EditorQuickOpenDialog::~EditorQuickOpenDialog(EditorQuickOpenDialog *this)

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
/* CallableCustomMethodPointer<EditorQuickOpenDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorQuickOpenDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorQuickOpenDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<QuickOpenResultContainer, void, int>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<QuickOpenResultContainer, void, bool>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<QuickOpenResultContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<QuickOpenResultContainer, void, Ref<InputEvent> const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<QuickOpenResultContainer,void,Ref<InputEvent>const&,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<StringName>::~Vector() */

void __thiscall Vector<StringName>::~Vector(Vector<StringName> *this)

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


