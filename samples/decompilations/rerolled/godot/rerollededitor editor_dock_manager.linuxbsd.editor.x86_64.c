/* EditorDockManager::_dock_split_dragged(int) */

void EditorDockManager::_dock_split_dragged(int param_1)

{
  EditorNode::save_editor_layout_delayed();
  return;
}



/* DockContextPopup::_dock_select_mouse_exited() */

void __thiscall DockContextPopup::_dock_select_mouse_exited(DockContextPopup *this)

{
  *(undefined4 *)(this + 0xe58) = 0xffffffff;
  CanvasItem::queue_redraw();
  return;
}



/* CowData<DockSplitContainer*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DockSplitContainer*>::_copy_on_write(CowData<DockSplitContainer*> *this)

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



/* CowData<WindowWrapper*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<WindowWrapper*>::_copy_on_write(CowData<WindowWrapper*> *this)

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



/* HashMap<Control*, EditorDockManager::DockInfo, HashMapHasherDefault,
   HashMapComparatorDefault<Control*>, DefaultTypedAllocator<HashMapElement<Control*,
   EditorDockManager::DockInfo> > >::_lookup_pos(Control* const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
::_lookup_pos(HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              *this,Control **param_1,uint *param_2)

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
           (*(Control ***)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
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



/* StringName::operator void const*() const [clone .isra.0] */

void * __thiscall StringName::operator_cast_to_void_(StringName *this)

{
  void *pvVar1;
  
  if (this == (StringName *)0x0) {
    return (void *)0x0;
  }
  pvVar1 = (void *)0x1;
  if ((*(long *)(this + 8) == 0) && (pvVar1 = *(void **)(this + 0x10), pvVar1 != (void *)0x0)) {
    return (void *)(ulong)(1 < *(uint *)((long)pvVar1 + -8));
  }
  return pvVar1;
}



/* DockSplitContainer::_update_visibility() [clone .part.0] */

void __thiscall DockSplitContainer::_update_visibility(DockSplitContainer *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  this[0xa69] = (DockSplitContainer)0x1;
  bVar5 = SUB81(this,0);
  iVar2 = Node::get_child_count(bVar5);
  if (0 < iVar2) {
    do {
      lVar3 = Node::get_child((int)this,SUB41(iVar4,0));
      if ((((lVar3 != 0) &&
           (lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&Control::typeinfo,0), lVar3 != 0)) &&
          (cVar1 = CanvasItem::is_visible(), cVar1 != '\0')) &&
         (cVar1 = CanvasItem::is_set_as_top_level(), cVar1 == '\0')) break;
      iVar4 = iVar4 + 1;
      iVar2 = Node::get_child_count(bVar5);
    } while (iVar4 < iVar2);
  }
  CanvasItem::set_visible(bVar5);
  this[0xa69] = (DockSplitContainer)0x0;
  return;
}



/* DockSplitContainer::_update_visibility() */

void __thiscall DockSplitContainer::_update_visibility(DockSplitContainer *this)

{
  if (this[0xa69] == (DockSplitContainer)0x0) {
    _update_visibility(this);
    return;
  }
  return;
}



/* EditorDockManager::_dock_container_update_visibility(TabContainer*) */

void __thiscall
EditorDockManager::_dock_container_update_visibility(EditorDockManager *this,TabContainer *param_1)

{
  if (this[0x218] == (EditorDockManager)0x0) {
    return;
  }
  TabContainer::get_tab_count();
  CanvasItem::set_visible(SUB81(param_1,0));
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
/* DockContextPopup::_dock_select_draw() */

void __thiscall DockContextPopup::_dock_select_draw(DockContextPopup *this)

{
  StringName *pSVar1;
  Control *pCVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  Control *pCVar11;
  undefined1 uVar12;
  int iVar13;
  DockContextPopup *pDVar14;
  Rect2 *pRVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float local_138;
  int local_f8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uStack_c0 = _UNK_00119ea8;
  uStack_bc = _LC10;
  pSVar1 = *(StringName **)(this + 0xdd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = __LC8;
  local_b8 = _LC10;
  uStack_b4 = _LC10;
  uStack_b0 = _LC10;
  uStack_ac = _LC10;
  if ((_dock_select_draw()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_dock_select_draw()::{lambda()#1}::operator()()::sname),
     iVar8 != 0)) {
    _scs_create((char *)&_dock_select_draw()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_dock_select_draw()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_dock_select_draw()::{lambda()#1}::operator()()::sname);
  }
  auVar26 = Control::get_theme_color
                      (pSVar1,(StringName *)&_dock_select_draw()::{lambda()#1}::operator()()::sname)
  ;
  uVar5 = uStack_bc;
  uVar4 = uStack_c0;
  uVar3 = local_c8;
  local_a8 = local_c8;
  uStack_a0 = CONCAT44(0x3ecccccd,uStack_c0);
  local_98 = local_c8;
  uStack_90 = CONCAT44(0x3dcccccd,uStack_c0);
  uVar20 = Control::get_size();
  fVar21 = (float)uVar20 / __LC14;
  fVar16 = (float)((ulong)uVar20 >> 0x20) * __LC15;
  cVar6 = (**(code **)(**(long **)(this + 0xdd0) + 0x340))();
  fVar22 = _LC17;
  if (cVar6 == '\0') {
    *(undefined8 *)(this + 0xdd8) = 0;
    *(ulong *)(this + 0xde0) = CONCAT44(fVar16,fVar21);
    *(undefined4 *)(this + 0xde8) = 0;
    fVar22 = fVar22 * fVar21;
    *(undefined4 *)(this + 0xdfc) = 0;
    *(undefined4 *)(this + 0xe1c) = 0;
    *(undefined4 *)(this + 0xe3c) = 0;
    *(float *)(this + 0xdec) = fVar16;
    *(float *)(this + 0xe18) = fVar22;
    *(float *)(this + 0xe28) = fVar22;
    fVar22 = _LC18;
    *(float *)(this + 0xdf0) = fVar21;
    *(float *)(this + 0xdf4) = fVar16;
    *(float *)(this + 0xdf8) = fVar21;
    *(float *)(this + 0xe00) = fVar21;
    *(float *)(this + 0xe04) = fVar16;
    *(float *)(this + 0xe08) = fVar21;
    *(float *)(this + 0xe0c) = fVar16;
    *(float *)(this + 0xe10) = fVar21;
    *(float *)(this + 0xe14) = fVar16;
    *(float *)(this + 0xe20) = fVar21;
    *(float *)(this + 0xe24) = fVar16;
    *(float *)(this + 0xe2c) = fVar16;
    *(float *)(this + 0xe30) = fVar21;
    *(float *)(this + 0xe34) = fVar16;
    *(float *)(this + 0xe38) = fVar22 * fVar21;
    *(float *)(this + 0xe40) = fVar21;
    *(float *)(this + 0xe44) = fVar16;
    *(float *)(this + 0xe48) = fVar22 * fVar21;
    *(float *)(this + 0xe4c) = fVar16;
    *(float *)(this + 0xe50) = fVar21;
    *(float *)(this + 0xe54) = fVar16;
  }
  else {
    *(undefined8 *)(this + 0xe38) = 0;
    *(ulong *)(this + 0xe40) = CONCAT44(fVar16,fVar21);
    *(undefined4 *)(this + 0xe48) = 0;
    fVar22 = fVar22 * fVar21;
    *(undefined4 *)(this + 0xe1c) = 0;
    *(undefined4 *)(this + 0xdfc) = 0;
    *(undefined4 *)(this + 0xddc) = 0;
    *(float *)(this + 0xe4c) = fVar16;
    *(float *)(this + 0xdf8) = fVar22;
    *(float *)(this + 0xe08) = fVar22;
    fVar22 = _LC18;
    *(float *)(this + 0xe50) = fVar21;
    *(float *)(this + 0xe54) = fVar16;
    *(float *)(this + 0xe18) = fVar21;
    *(float *)(this + 0xe20) = fVar21;
    *(float *)(this + 0xe24) = fVar16;
    *(float *)(this + 0xe28) = fVar21;
    *(float *)(this + 0xe2c) = fVar16;
    *(float *)(this + 0xe30) = fVar21;
    *(float *)(this + 0xe34) = fVar16;
    *(float *)(this + 0xe00) = fVar21;
    *(float *)(this + 0xe04) = fVar16;
    *(float *)(this + 0xe0c) = fVar16;
    *(float *)(this + 0xe10) = fVar21;
    *(float *)(this + 0xe14) = fVar16;
    *(float *)(this + 0xdd8) = fVar22 * fVar21;
    *(float *)(this + 0xde0) = fVar21;
    *(float *)(this + 0xde4) = fVar16;
    *(float *)(this + 0xde8) = fVar22 * fVar21;
    *(float *)(this + 0xdec) = fVar16;
    *(float *)(this + 0xdf0) = fVar21;
    *(float *)(this + 0xdf4) = fVar16;
  }
  cVar6 = (**(code **)(**(long **)(this + 0xdd0) + 0x340))();
  fVar22 = (float)EditorScale::get_scale();
  fVar22 = fVar22 * __LC19;
  fVar17 = (float)EditorScale::get_scale();
  fVar18 = (float)EditorScale::get_scale();
  fVar18 = fVar18 + fVar18;
  fVar24 = fVar18 + fVar22;
  lVar10 = Node::get_parent();
  if (lVar10 == 0) {
    local_f8 = -1;
    pCVar11 = (Control *)0x0;
  }
  else {
    pCVar11 = (Control *)__dynamic_cast(lVar10,&Object::typeinfo,&TabContainer::typeinfo,0);
    local_f8 = -1;
    if ((pCVar11 != (Control *)0x0) && (iVar8 = TabContainer::get_tab_count(), 0 < iVar8)) {
      local_f8 = TabContainer::get_tab_idx_from_control(pCVar11);
    }
  }
  iVar8 = 0;
  pDVar14 = this + 0xdd8;
  fVar23 = (float)((uint)fVar18 ^ __LC20) - fVar18;
  fVar25 = (float)((uint)fVar18 ^ __LC20) - fVar24;
  local_88 = CONCAT44(fVar24 + 0.0,fVar18 + fVar21 + fVar21);
  uStack_80 = CONCAT44(fVar16 + fVar16 + fVar25,fVar21 + fVar21 + fVar23);
  CanvasItem::draw_rect(*(Rect2 **)(this + 0xdd0),(Color *)&local_88,SUB81(&local_98,0),_LC21,true);
  do {
    fVar16 = *(float *)(pDVar14 + 4);
    fVar21 = fVar23 + *(float *)(pDVar14 + 8);
    local_138 = fVar18 + *(float *)pDVar14;
    uStack_70 = CONCAT44(fVar25 + *(float *)(pDVar14 + 0xc),fVar21);
    local_78 = CONCAT44(fVar24 + fVar16,local_138);
    fVar21 = roundf(fVar21 / __LC19);
    cVar7 = (**(code **)(**(long **)(this + 0xdd0) + 0x340))();
    if (cVar7 != '\0') {
      local_138 = ((float)uStack_70 - (fVar21 - fVar17)) + local_138;
    }
    pCVar2 = *(Control **)(*(long *)(this + 0xe68) + 0x1a8 + (long)iVar8 * 8);
    iVar9 = TabContainer::get_tab_count();
    iVar13 = 3;
    if (iVar9 < 4) {
      iVar13 = iVar9;
    }
    if (*(int *)(this + 0xe58) == iVar8) {
      pRVar15 = *(Rect2 **)(this + 0xdd0);
      uVar12 = SUB81(&local_b8,0);
LAB_00100a82:
      CanvasItem::draw_rect(pRVar15,(Color *)&local_78,(bool)uVar12,_LC21,true);
      if (0 < iVar9) {
        iVar9 = 0;
        do {
          if ((local_f8 != iVar9) || (local_68 = auVar26, pCVar11 != pCVar2)) {
            local_68._12_4_ = uVar5;
            local_68._8_4_ = uVar4;
            local_68._0_8_ = uVar3;
          }
          fVar19 = (float)iVar9;
          iVar9 = iVar9 + 1;
          local_58 = CONCAT44(fVar16,fVar19 * fVar21 *
                                     (float)(int)((-(uint)(cVar6 == '\0') & 2) - 1) + local_138);
          uStack_50 = CONCAT44(fVar22,fVar21 - fVar17);
          CanvasItem::draw_rect
                    (*(Rect2 **)(this + 0xdd0),(Color *)&local_58,SUB81(local_68,0),_LC21,true);
        } while (iVar9 < iVar13);
      }
    }
    else {
      pRVar15 = *(Rect2 **)(this + 0xdd0);
      if (iVar9 != 0) {
        uVar12 = SUB81(&local_c8,0);
        goto LAB_00100a82;
      }
      CanvasItem::draw_rect(pRVar15,(Color *)&local_78,SUB81(&local_a8,0),_LC21,true);
    }
    pDVar14 = pDVar14 + 0x10;
    iVar8 = iVar8 + 1;
    if (iVar8 == 8) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* CowData<Control*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Control*>::_copy_on_write(CowData<Control*> *this)

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



/* EditorDockManager::get_dock_tab_container(Control*) const */

undefined8 EditorDockManager::get_dock_tab_container(Control *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Node::get_parent();
  if (lVar1 != 0) {
    uVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&TabContainer::typeinfo,0);
    return uVar2;
  }
  return 0;
}



/* EditorDockManager::are_docks_visible() const */

EditorDockManager __thiscall EditorDockManager::are_docks_visible(EditorDockManager *this)

{
  return this[0x218];
}



/* EditorDockManager::set_tab_icon_max_width(int) */

void EditorDockManager::set_tab_icon_max_width(int param_1)

{
  long lVar1;
  StringName *pSVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  puVar4 = (undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x1a8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pSVar2 = (StringName *)*puVar4;
    if (set_tab_icon_max_width(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&set_tab_icon_max_width(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&set_tab_icon_max_width(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_tab_icon_max_width(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_tab_icon_max_width(int)::{lambda()#1}::operator()()::sname);
      }
    }
    puVar4 = puVar4 + 1;
    Control::add_theme_constant_override(pSVar2,0x10a840);
  } while (puVar4 != (undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x1e8));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::get_vsplit_count() const */

undefined4 __thiscall EditorDockManager::get_vsplit_count(EditorDockManager *this)

{
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x180) + -8);
  }
  return 0;
}



/* EditorDockManager::get_docks_menu() */

undefined8 __thiscall EditorDockManager::get_docks_menu(EditorDockManager *this)

{
  return *(undefined8 *)(this + 0x228);
}



/* DockContextPopup::get_dock() const */

undefined8 __thiscall DockContextPopup::get_dock(DockContextPopup *this)

{
  return *(undefined8 *)(this + 0xe60);
}



/* DockSplitContainer::add_child_notify(Node*) */

void __thiscall DockSplitContainer::add_child_notify(DockSplitContainer *this,Node *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  int iVar6;
  long in_FS_OFFSET;
  DockSplitContainer aDStack_58 [24];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Container::add_child_notify((Node *)this);
  do {
    iVar3 = Node::get_child_count(SUB81(this,0));
    if (iVar3 <= iVar6) {
LAB_001010cb:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00101168:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = Node::get_child((int)this,SUB41(iVar6,0));
    if (lVar4 != 0) {
      pNVar5 = (Node *)__dynamic_cast(lVar4,&Object::typeinfo,&Control::typeinfo,0);
      if (pNVar5 != (Node *)0x0) {
        cVar2 = CanvasItem::is_set_as_top_level();
        if ((param_1 == pNVar5) && (cVar2 != '\x01')) {
          pcVar1 = *(code **)(*(long *)pNVar5 + 0x108);
          create_custom_callable_function_pointer<DockSplitContainer>
                    (aDStack_58,(char *)this,(_func_void *)"&DockSplitContainer::_update_visibility"
                    );
          (*pcVar1)(pNVar5,SceneStringNames::singleton + 0x18,aDStack_58,0);
          Callable::~Callable((Callable *)aDStack_58);
          if (this[0xa69] == (DockSplitContainer)0x0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _update_visibility(this);
              return;
            }
            goto LAB_00101168;
          }
          goto LAB_001010cb;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



/* DockSplitContainer::remove_child_notify(Node*) */

void __thiscall DockSplitContainer::remove_child_notify(DockSplitContainer *this,Node *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  int iVar6;
  long in_FS_OFFSET;
  DockSplitContainer aDStack_58 [24];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Container::remove_child_notify((Node *)this);
  do {
    iVar3 = Node::get_child_count(SUB81(this,0));
    if (iVar3 <= iVar6) {
LAB_001011fb:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00101296:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = Node::get_child((int)this,SUB41(iVar6,0));
    if (lVar4 != 0) {
      pNVar5 = (Node *)__dynamic_cast(lVar4,&Object::typeinfo,&Control::typeinfo,0);
      if (pNVar5 != (Node *)0x0) {
        cVar2 = CanvasItem::is_set_as_top_level();
        if ((param_1 == pNVar5) && (cVar2 != '\x01')) {
          pcVar1 = *(code **)(*(long *)pNVar5 + 0x110);
          create_custom_callable_function_pointer<DockSplitContainer>
                    (aDStack_58,(char *)this,(_func_void *)"&DockSplitContainer::_update_visibility"
                    );
          (*pcVar1)(pNVar5,SceneStringNames::singleton + 0x18,aDStack_58);
          Callable::~Callable((Callable *)aDStack_58);
          if (this[0xa69] == (DockSplitContainer)0x0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _update_visibility(this);
              return;
            }
            goto LAB_00101296;
          }
          goto LAB_001011fb;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



/* EditorDockManager::register_dock_slot(EditorDockManager::DockSlot, TabContainer*) */

void __thiscall
EditorDockManager::register_dock_slot(EditorDockManager *this,uint param_2,Vector2 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  CallableCustom *pCVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  float fVar7;
  long local_b0;
  Callable local_a8 [16];
  Callable local_98 [16];
  Variant *local_88;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (Vector2 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("register_dock_slot","editor/editor_dock_manager.cpp",0x32d,
                       "Parameter \"p_tab_container\" is null.",0,0);
      return;
    }
  }
  else if (param_2 < 8) {
    *(Vector2 **)(this + (long)(int)param_2 * 8 + 0x1a8) = param_3;
    fVar7 = (float)EditorScale::get_scale();
    local_78[0] = CONCAT44(fVar7 * _LC36._4_4_,fVar7 * (float)_LC36);
    Control::set_custom_minimum_size(param_3);
    Control::set_v_size_flags(param_3,3);
    TabContainer::set_popup((Node *)param_3);
    lVar1 = *(long *)(this + 0x220);
    pcVar2 = *(code **)(*(long *)param_3 + 0x108);
    pCVar4 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar4);
    *(long *)(pCVar4 + 0x28) = lVar1;
    *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar4 = &PTR_hash_001197a8;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(pCVar4 + 0x10) = 0;
    *(undefined8 *)(pCVar4 + 0x30) = uVar3;
    *(code **)(pCVar4 + 0x38) = DockContextPopup::select_current_dock_in_dock_slot;
    *(undefined **)(pCVar4 + 0x20) = &_LC29;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
    *(char **)(pCVar4 + 0x20) = "DockContextPopup::select_current_dock_in_dock_slot";
    Callable::Callable(local_a8,pCVar4);
    Variant::Variant((Variant *)local_78,param_2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88 = (Variant *)local_78;
    Callable::bindp((Variant **)local_98,(int)local_a8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_b0,"pre_popup_pressed",false);
    (*pcVar2)(param_3,(StringName *)&local_b0,local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    Callable::~Callable(local_a8);
    TabContainer::set_drag_to_rearrange_enabled(SUB81(param_3,0));
    TabContainer::set_tabs_rearrange_group((int)param_3);
    pcVar2 = *(code **)(*(long *)param_3 + 0x108);
    create_custom_callable_function_pointer<EditorDockManager>
              ((EditorDockManager *)local_a8,(char *)this,
               (_func_void *)"&EditorDockManager::_update_layout");
    iVar6 = (int)local_98;
    Callable::unbind(iVar6);
    StringName::StringName((StringName *)&local_b0,"tab_changed",false);
    (*pcVar2)(param_3,(StringName *)&local_b0,local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    Callable::~Callable(local_a8);
    pcVar2 = *(code **)(*(long *)param_3 + 0x108);
    create_custom_callable_function_pointer<EditorDockManager>
              ((EditorDockManager *)local_a8,(char *)this,
               (_func_void *)"&EditorDockManager::_update_layout");
    Callable::unbind(iVar6);
    StringName::StringName((StringName *)&local_b0,"active_tab_rearranged",false);
    (*pcVar2)(param_3,(StringName *)&local_b0,local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    Callable::~Callable(local_a8);
    pcVar2 = *(code **)(*(long *)param_3 + 0x108);
    pCVar4 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar4);
    *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined ***)pCVar4 = &PTR_hash_001198c8;
    *(undefined8 *)(pCVar4 + 0x30) = uVar3;
    *(code **)(pCVar4 + 0x38) = _dock_container_update_visibility;
    *(undefined8 *)(pCVar4 + 0x10) = 0;
    *(undefined **)(pCVar4 + 0x20) = &_LC29;
    *(EditorDockManager **)(pCVar4 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
    *(char **)(pCVar4 + 0x20) = "EditorDockManager::_dock_container_update_visibility";
    Callable::Callable(local_a8,pCVar4);
    Callable::bind<TabContainer*>((TabContainer *)local_98);
    StringName::StringName((StringName *)&local_b0,"child_order_changed",false);
    (*pcVar2)(param_3,(StringName *)&local_b0,local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_98);
    Callable::~Callable(local_a8);
    TabContainer::set_use_hidden_tabs_for_min_size(SUB81(param_3,0));
    plVar5 = (long *)TabContainer::get_tab_bar();
    pcVar2 = *(code **)(*plVar5 + 0x108);
    pCVar4 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar4);
    *(undefined **)(pCVar4 + 0x20) = &_LC29;
    *(EditorDockManager **)(pCVar4 + 0x28) = this;
    *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar4 = &PTR_hash_00119958;
    *(undefined8 *)(pCVar4 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar4 + 0x10) = 0;
    *(undefined8 *)(pCVar4 + 0x30) = uVar3;
    *(code **)(pCVar4 + 0x38) = _dock_container_gui_input;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
    *(char **)(pCVar4 + 0x20) = "EditorDockManager::_dock_container_gui_input";
    Callable::Callable(local_a8,pCVar4);
    Callable::bind<TabContainer*>((TabContainer *)local_98);
    (*pcVar2)(plVar5,SceneStringNames::singleton + 0x28,local_98,0);
    Callable::~Callable(local_98);
    Callable::~Callable(local_a8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
  }
  else {
    _err_print_index_error
              ("register_dock_slot","editor/editor_dock_manager.cpp",0x32e,(long)(int)param_2,8,
               "p_dock_slot","DOCK_SLOT_MAX","",false,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::DockContextPopup() */

void __thiscall DockContextPopup::DockContextPopup(DockContextPopup *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  char cVar5;
  DockContextPopup *pDVar6;
  DockContextPopup *pDVar7;
  BoxContainer *pBVar8;
  Button *pBVar9;
  Label *this_00;
  Control *this_01;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  float fVar10;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupPanel::PopupPanel((PopupPanel *)this);
  *(undefined8 *)(this + 0xdd0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00118898;
  *(undefined1 (*) [16])(this + 0xda0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  pDVar6 = this + 0xdd8;
  do {
    *(undefined8 *)pDVar6 = 0;
    pDVar7 = pDVar6 + 0x10;
    *(undefined8 *)(pDVar6 + 8) = 0;
    uVar3 = EditorDockManager::singleton;
    pDVar6 = pDVar7;
  } while (pDVar7 != this + 0xe58);
  *(undefined4 *)(this + 0xe58) = 0xffffffff;
  *(undefined8 *)(this + 0xe60) = 0;
  *(undefined8 *)(this + 0xe68) = uVar3;
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00118e78;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xda0) = pBVar8;
  Node::add_child(this,pBVar8,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00118b00;
  postinitialize_handler((Object *)pBVar8);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xdb0) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xdb0),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xdb0),0);
  plVar1 = *(long **)(this + 0xdb0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_tab_move_left");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdb0),0,0);
  this_00 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_58 = "Dock Position";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_h_size_flags(this_00,3);
  Label::set_horizontal_alignment(this_00,1);
  Node::add_child(pBVar8,this_00,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xdb8) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xdb8),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xdb8),0);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_tab_move_right");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdb8),0,0);
  Node::add_child(*(undefined8 *)(this + 0xda0),pBVar8,0,0);
  this_01 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_01);
  postinitialize_handler((Object *)this_01);
  *(Control **)(this + 0xdd0) = this_01;
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar10 * _LC57._4_4_,fVar10 * (float)_LC57);
  Control::set_custom_minimum_size((Vector2 *)this_01);
  plVar1 = *(long **)(this + 0xdd0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(DockContextPopup **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC29;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_02 = &PTR_hash_00119a78;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _dock_select_input;
  *(undefined8 *)(this_02 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "DockContextPopup::_dock_select_input";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xdd0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_dock_select_draw");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 8,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xdd0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_dock_select_mouse_exited");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0xc0,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdd0),3);
  Node::add_child(*(undefined8 *)(this + 0xda0),*(undefined8 *)(this + 0xdd0),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xda8) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  pSVar4 = *(String **)(this + 0xda8);
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (char *)0x0;
  String::parse_latin1((String *)&local_58,"Make Floating");
  TTR((String *)&local_68,(String *)&local_58);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  cVar5 = EditorNode::is_multi_window_enabled();
  if (cVar5 == '\0') {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xda8),0));
    pSVar4 = *(String **)(this + 0xda8);
    EditorNode::get_multiwindow_support_tooltip_text();
    Control::set_tooltip_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else {
    pSVar4 = *(String **)(this + 0xda8);
    local_58 = (char *)0x0;
    String::parse_latin1((String *)&local_58,"");
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Make this dock floating.");
    TTR((String *)&local_68,(String *)&local_60);
    Control::set_tooltip_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  Control::set_focus_mode(*(undefined8 *)(this + 0xda8),0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xda8),3);
  plVar1 = *(long **)(this + 0xda8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_float_dock");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xda0),*(undefined8 *)(this + 0xda8),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xdc8) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xdc8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Move to Bottom";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xdc8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Move this dock to the bottom panel.";
  local_68 = 0;
  local_50 = 0x23;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xdc8),0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  plVar1 = *(long **)(this + 0xdc8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_move_dock_to_bottom");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xda0),*(undefined8 *)(this + 0xdc8),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xdc0) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Close";
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Close this dock.";
  local_68 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xdc0),0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc0),3);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DockContextPopup>
            ((DockContextPopup *)&local_58,(char *)this,
             (_func_void *)"&DockContextPopup::_close_dock");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xda0),*(undefined8 *)(this + 0xdc0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::EditorDockManager() */

void __thiscall EditorDockManager::EditorDockManager(EditorDockManager *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  DockContextPopup *this_00;
  PopupMenu *this_01;
  long in_FS_OFFSET;
  EditorDockManager aEStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00118738;
  lVar4 = EditorNode::singleton;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(lVar4 + 0x6c8);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x210) = 2;
  this[0x218] = (EditorDockManager)0x1;
  *(undefined8 *)(this + 0x240) = uVar1;
  singleton = this;
  this_00 = (DockContextPopup *)operator_new(0xe70,"");
  DockContextPopup::DockContextPopup(this_00);
  postinitialize_handler((Object *)this_00);
  lVar4 = EditorNode::singleton;
  *(DockContextPopup **)(this + 0x220) = this_00;
  Node::add_child(*(undefined8 *)(lVar4 + 0x6c8),this_00,0,0);
  this_01 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_01);
  postinitialize_handler((Object *)this_01);
  *(PopupMenu **)(this + 0x228) = this_01;
  PopupMenu::set_hide_on_item_selection(SUB81(this_01,0));
  plVar2 = *(long **)(this + 0x228);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorDockManager,int>
            (aEStack_48,(char *)this,(_func_void_int *)"&EditorDockManager::_docks_menu_option");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,aEStack_48,0);
  Callable::~Callable((Callable *)aEStack_48);
  plVar2 = *(long **)(EditorNode::singleton + 0x6c8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorDockManager>
            (aEStack_48,(char *)this,(_func_void *)"&EditorDockManager::_update_docks_menu");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x210,aEStack_48,0);
  Callable::~Callable((Callable *)aEStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorDockManager::save_docks_to_config(Ref<ConfigFile>, String const&) const */

void __thiscall
EditorDockManager::save_docks_to_config(EditorDockManager *this,long *param_2,String *param_3)

{
  char *pcVar1;
  String *pSVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  Control **ppCVar9;
  Variant *pVVar10;
  long lVar11;
  EditorDockManager *pEVar12;
  long *plVar13;
  Object *pOVar14;
  long lVar15;
  int iVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 auVar19 [16];
  long local_1a0;
  long local_190;
  Dictionary local_138 [8];
  Dictionary local_130 [8];
  ulong local_128;
  long local_120;
  CowData<char32_t> local_118 [8];
  ulong local_110;
  long local_108;
  ulong local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e8 [2];
  undefined1 local_e0 [16];
  undefined1 local_c8 [32];
  int local_a8 [8];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pEVar12 = this + 0x1a8;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = 1;
  do {
    local_120 = 0;
    for (iVar16 = 0; iVar6 = TabContainer::get_tab_count(), iVar16 < iVar6; iVar16 = iVar16 + 1) {
      TabContainer::get_tab_control((int)*(undefined8 *)pEVar12);
      Node::get_name();
      if (local_100 == 0) {
        local_108 = 0;
      }
      else {
        pcVar1 = *(char **)(local_100 + 8);
        local_108 = 0;
        if (pcVar1 == (char *)0x0) {
          if (*(long *)(local_100 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)(local_100 + 0x10));
            goto LAB_0010283d;
          }
          if (StringName::configured == '\0') goto LAB_00102859;
        }
        else {
          sVar8 = strlen(pcVar1);
          local_f8 = (int)pcVar1;
          uStack_f4 = (undefined4)((ulong)pcVar1 >> 0x20);
          local_f0 = (undefined4)sVar8;
          uStack_ec = (undefined4)(sVar8 >> 0x20);
          String::parse_latin1((StrRange *)&local_108);
LAB_0010283d:
          if ((StringName::configured == '\0') || (local_100 == 0)) goto LAB_00102859;
        }
        StringName::unref();
      }
LAB_00102859:
      if ((local_120 != 0) && (1 < *(uint *)(local_120 + -8))) {
        String::operator+=((String *)&local_120,",");
      }
      String::operator+=((String *)&local_120,(String *)&local_108);
      lVar11 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar13 = (long *)(local_108 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
    }
    itos((long)&local_f8);
    operator+((char *)local_118,(String *)"dock_");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    cVar5 = ConfigFile::has_section_key((String *)*param_2,param_3);
    if (cVar5 != '\0') {
      ConfigFile::erase_section_key((String *)*param_2,param_3);
    }
    if ((local_120 != 0) && (1 < *(uint *)(local_120 + -8))) {
      pSVar2 = (String *)*param_2;
      Variant::Variant((Variant *)local_88,(String *)&local_120);
      ConfigFile::set_value(pSVar2,param_3,(Variant *)local_118);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    iVar16 = TabContainer::get_current_tab();
    if (-1 < iVar16) {
      pSVar2 = (String *)*param_2;
      Variant::Variant((Variant *)local_88,iVar16);
      local_f8 = 0x10af1c;
      uStack_f4 = 0;
      local_100 = 0;
      local_f0 = 0x11;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_100);
      itos((long)&local_110);
      operator+((char *)&local_108,(String *)"dock_");
      String::operator+((String *)&local_f8,(String *)&local_108);
      ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    pEVar12 = pEVar12 + 8;
    CowData<char32_t>::_unref(local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    local_1a0 = local_1a0 + 1;
  } while (local_1a0 != 9);
  local_f8 = 0;
  uStack_f4 = 0;
  pSVar2 = (String *)*param_2;
  String::parse_latin1((String *)&local_f8,"dock_0");
  cVar5 = ConfigFile::has_section_key(pSVar2,param_3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (cVar5 != '\0') {
    local_f8 = 0;
    uStack_f4 = 0;
    pSVar2 = (String *)*param_2;
    String::parse_latin1((String *)&local_f8,"dock_0");
    ConfigFile::erase_section_key(pSVar2,param_3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  Dictionary::Dictionary(local_138);
  auVar19._8_8_ = local_c8._8_8_;
  auVar19._0_8_ = local_c8._0_8_;
  local_190 = *(long *)(this + 0x1a0);
  if ((local_190 != 0) &&
     (lVar11 = local_190 + *(long *)(local_190 + -8) * 8, local_c8._0_16_ = auVar19,
     lVar11 != local_190)) {
    do {
      ppCVar9 = (Control **)WindowWrapper::get_wrapped_control();
      Dictionary::Dictionary(local_130);
      auVar19 = WindowWrapper::get_window_rect();
      local_c8._0_16_ = auVar19;
      Variant::Variant((Variant *)local_88,(Rect2i *)local_c8);
      Variant::Variant((Variant *)local_a8,"window_rect");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)local_130);
      if (pVVar10 != (Variant *)local_88) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar10 = 0;
        *(int *)pVVar10 = local_88[0];
        *(undefined8 *)(pVVar10 + 8) = local_80;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_78;
        local_88[0] = 0;
      }
      if (Variant::needs_deinit[local_a8[0]] == '\0') {
        cVar5 = Variant::needs_deinit[local_88[0]];
      }
      else {
        Variant::_clear_internal();
        cVar5 = Variant::needs_deinit[local_88[0]];
      }
      if (cVar5 != '\0') {
        Variant::_clear_internal();
      }
      uVar7 = WindowWrapper::get_window_screen();
      iVar16 = WindowWrapper::get_window_screen();
      Variant::Variant((Variant *)local_88,iVar16);
      Variant::Variant((Variant *)local_a8,"window_screen");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)local_130);
      if (pVVar10 != (Variant *)local_88) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar10 = 0;
        *(int *)pVVar10 = local_88[0];
        *(undefined8 *)(pVVar10 + 8) = local_80;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_78;
        local_88[0] = 0;
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      auVar19 = (**(code **)(*DisplayServer::singleton + 0x428))(DisplayServer::singleton,uVar7);
      local_c8._0_16_ = auVar19;
      Variant::Variant((Variant *)local_88,(Rect2i *)local_c8);
      Variant::Variant((Variant *)local_a8,"window_screen_rect");
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)local_130);
      if (pVVar10 != (Variant *)local_88) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar10 = 0;
        *(int *)pVVar10 = local_88[0];
        *(undefined8 *)(pVVar10 + 8) = local_80;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_78;
        local_88[0] = 0;
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      Node::get_name();
      if (local_100 == 0) {
        local_128 = 0;
      }
      else {
        pcVar1 = *(char **)(local_100 + 8);
        local_128 = 0;
        if (pcVar1 == (char *)0x0) {
          if (*(long *)(local_100 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(local_100 + 0x10));
            goto LAB_00102aff;
          }
          if (StringName::configured == '\0') goto LAB_00102b1d;
        }
        else {
          sVar8 = strlen(pcVar1);
          local_f8 = (int)pcVar1;
          uStack_f4 = (undefined4)((ulong)pcVar1 >> 0x20);
          local_f0 = (undefined4)sVar8;
          uStack_ec = (undefined4)(sVar8 >> 0x20);
          String::parse_latin1((StrRange *)&local_128);
LAB_00102aff:
          if ((StringName::configured == '\0') || (local_100 == 0)) goto LAB_00102b1d;
        }
        StringName::unref();
      }
LAB_00102b1d:
      Variant::Variant((Variant *)local_88,local_130);
      Variant::Variant((Variant *)local_a8,(String *)&local_128);
      pVVar10 = (Variant *)Dictionary::operator[]((Variant *)local_138);
      if (pVVar10 != (Variant *)local_88) {
        if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar10 = 0;
        *(int *)pVVar10 = local_88[0];
        *(undefined8 *)(pVVar10 + 8) = local_80;
        *(undefined8 *)(pVVar10 + 0x10) = uStack_78;
        local_88[0] = 0;
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_100 = local_100 & 0xffffffff00000000;
      cVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                             *)(this + 0x1e8),ppCVar9,(uint *)&local_100);
      if (cVar5 == '\0') goto LAB_0010310e;
      itos((long)&local_f8);
      operator+((char *)&local_108,(String *)"dock_");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      pSVar2 = (String *)*param_2;
      Variant::Variant((Variant *)local_a8,"");
      ConfigFile::get_value((String *)local_88,pSVar2,(Variant *)param_3);
      Variant::operator_cast_to_String((Variant *)&local_100);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((local_100 == 0) || (*(uint *)(local_100 - 8) < 2)) {
        if (local_100 != local_128) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_128);
        }
      }
      else {
        operator+((char *)&local_f8,(String *)&_LC75);
        String::operator+=((String *)&local_100,(String *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      }
      pSVar2 = (String *)*param_2;
      Variant::Variant((Variant *)local_88,(String *)&local_100);
      ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_108);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      Dictionary::~Dictionary(local_130);
      local_190 = local_190 + 8;
    } while (lVar11 != local_190);
  }
  pSVar2 = (String *)*param_2;
  Variant::Variant((Variant *)local_88,local_138);
  local_f8 = 0;
  uStack_f4 = 0;
  String::parse_latin1((String *)&local_f8,"dock_floating");
  ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_120);
  Array::Array((Array *)local_118);
  plVar13 = *(long **)(this + 0x200);
  if (plVar13 != (long *)0x0) {
    do {
      plVar3 = (long *)plVar13[2];
      local_100 = 0;
      if (*(long *)param_3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)param_3);
      }
      pOVar14 = (Object *)*param_2;
      if (pOVar14 != (Object *)0x0) {
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          pOVar14 = (Object *)0x0;
        }
      }
      if (const::{lambda()#1}::operator()()::sname == '\0') {
        iVar16 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
        if (iVar16 != 0) {
          _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
        }
      }
      Variant::Variant((Variant *)local_88,pOVar14);
      Variant::Variant(local_70,(String *)&local_100);
      local_50 = (undefined1  [16])0x0;
      local_f8 = 0;
      local_58 = 0;
      uStack_f4 = 0;
      local_f0 = 0;
      local_c8._0_8_ = (Variant *)local_88;
      local_c8._8_8_ = local_70;
      (**(code **)(*plVar3 + 0x68))
                ((Variant *)local_a8,plVar3,&const::{lambda()#1}::operator()()::sname,local_c8,2,
                 (String *)&local_f8);
      if (local_f8 == 0) {
        Variant::Variant((Variant *)local_e8,(Variant *)local_a8);
        cVar5 = Variant::needs_deinit[local_a8[0]];
      }
      else {
        local_e0 = (undefined1  [16])0x0;
        local_e8[0] = 0;
        cVar5 = Variant::needs_deinit[local_a8[0]];
      }
      pVVar10 = (Variant *)local_40;
      if (cVar5 != '\0') {
        Variant::_clear_internal();
      }
      do {
        pVVar17 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)(pVVar10 + -0x18)] != '\0') {
          Variant::_clear_internal();
        }
        pVVar10 = pVVar17;
      } while (pVVar17 != (Variant *)local_88);
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((pOVar14 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar14), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (((*(char *)((long)plVar13 + 0x22) != '\0') || ((char)plVar13[4] == '\0')) ||
         (((char)plVar13[5] != '\0' && (plVar13[6] != 0)))) {
        Node::get_name();
        if (local_100 == 0) {
          local_110 = 0;
        }
        else {
          pcVar1 = *(char **)(local_100 + 8);
          local_110 = 0;
          if (pcVar1 == (char *)0x0) {
            if (*(long *)(local_100 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)(local_100 + 0x10))
              ;
              goto LAB_00103441;
            }
            if (StringName::configured == '\0') goto LAB_0010345d;
          }
          else {
            sVar8 = strlen(pcVar1);
            local_f8 = (int)pcVar1;
            uStack_f4 = (undefined4)((ulong)pcVar1 >> 0x20);
            local_f0 = (undefined4)sVar8;
            uStack_ec = (undefined4)(sVar8 >> 0x20);
            String::parse_latin1((StrRange *)&local_110);
LAB_00103441:
            if ((StringName::configured == '\0') || (local_100 == 0)) goto LAB_0010345d;
          }
          StringName::unref();
        }
LAB_0010345d:
        if ((*(char *)((long)plVar13 + 0x22) != '\0') ||
           (((char)plVar13[5] != '\0' && (plVar13[6] != 0)))) {
          Variant::Variant((Variant *)local_88,(String *)&local_110);
          Array::push_back((Variant *)&local_120);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if ((char)plVar13[4] == '\0') {
          Variant::Variant((Variant *)local_88,(String *)&local_110);
          Array::push_back((Variant *)local_118);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        local_f8 = 0;
        cVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                               *)(this + 0x1e8),(Control **)plVar13[2],(uint *)&local_f8);
        if (cVar5 == '\0') {
LAB_0010310e:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        itos((long)&local_f8);
        operator+((char *)&local_108,(String *)"dock_");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        pSVar2 = (String *)*param_2;
        Variant::Variant((Variant *)local_a8,"");
        ConfigFile::get_value((String *)local_88,pSVar2,(Variant *)param_3);
        Variant::operator_cast_to_String((Variant *)&local_100);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((local_100 == 0) || (*(uint *)(local_100 - 8) < 2)) {
          if (local_100 != local_110) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_110);
          }
        }
        else {
          operator+((char *)&local_f8,(String *)&_LC75);
          String::operator+=((String *)&local_100,(String *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        }
        pSVar2 = (String *)*param_2;
        Variant::Variant((Variant *)local_88,(String *)&local_100);
        ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_108);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  pSVar2 = (String *)*param_2;
  Variant::Variant((Variant *)local_88,(Array *)&local_120);
  local_f8 = 0;
  uStack_f4 = 0;
  String::parse_latin1((String *)&local_f8,"dock_bottom");
  ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar2 = (String *)*param_2;
  Variant::Variant((Variant *)local_88,(Array *)local_118);
  local_f8 = 0;
  uStack_f4 = 0;
  String::parse_latin1((String *)&local_f8,"dock_closed");
  ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar16 = 0;
  lVar15 = 0;
  lVar11 = *(long *)(this + 0x180);
  while ((lVar11 != 0 && (lVar15 < *(long *)(lVar11 + -8)))) {
    cVar5 = CanvasItem::is_visible_in_tree();
    if (cVar5 == '\0') {
      lVar15 = (long)(iVar16 + 1);
    }
    else {
      pSVar2 = (String *)*param_2;
      if (*(long *)(this + 0x180) == 0) {
        lVar11 = 0;
LAB_00103c28:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar11,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar11 = *(long *)(*(long *)(this + 0x180) + -8);
      if (lVar11 <= lVar15) goto LAB_00103c28;
      lVar15 = (long)(iVar16 + 1);
      iVar6 = SplitContainer::get_split_offset();
      Variant::Variant((Variant *)local_88,iVar6);
      itos((long)&local_100);
      operator+((char *)&local_f8,(String *)"dock_split_");
      ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    iVar16 = iVar16 + 1;
    lVar11 = *(long *)(this + 0x180);
  }
  lVar11 = *(long *)(this + 400);
  if (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (*(long *)(lVar11 + -8) <= lVar15) break;
      lVar15 = lVar15 + 1;
      pSVar2 = (String *)*param_2;
      iVar16 = SplitContainer::get_split_offset();
      fVar18 = (float)EditorScale::get_scale();
      Variant::Variant((Variant *)local_88,(int)((float)iVar16 / fVar18));
      itos((long)&local_100);
      operator+((char *)&local_f8,(String *)"dock_hsplit_");
      ConfigFile::set_value(pSVar2,param_3,(Variant *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar11 = *(long *)(this + 400);
    } while (lVar11 != 0);
  }
  Array::~Array((Array *)local_118);
  Array::~Array((Array *)&local_120);
  Dictionary::~Dictionary(local_138);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DockContextPopup::_notification(int) [clone .part.0] */

void DockContextPopup::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  String *pSVar7;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(lVar6 + 0xda8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pRVar1 != (Ref *)0x0) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  }
  cVar3 = Window::is_layout_rtl();
  pRVar1 = *(Ref **)(lVar6 + 0xdb0);
  if (cVar3 == '\0') {
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    pRVar1 = *(Ref **)(lVar6 + 0xdb8);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    pSVar7 = *(String **)(lVar6 + 0xdb0);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Move this dock left one tab.");
    TTR((String *)&local_48,(String *)&local_58);
    Control::set_tooltip_text(pSVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    local_50 = 0;
    pSVar7 = *(String **)(lVar6 + 0xdb8);
    String::parse_latin1((String *)&local_50,"");
    pcVar5 = "Move this dock right one tab.";
  }
  else {
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    pRVar1 = *(Ref **)(lVar6 + 0xdb8);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_48);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
    pSVar7 = *(String **)(lVar6 + 0xdb0);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Move this dock right one tab.");
    TTR((String *)&local_48,(String *)&local_58);
    Control::set_tooltip_text(pSVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    local_50 = 0;
    pSVar7 = *(String **)(lVar6 + 0xdb8);
    String::parse_latin1((String *)&local_50,"");
    pcVar5 = "Move this dock left one tab.";
  }
  local_58 = 0;
  String::parse_latin1((String *)&local_58,pcVar5);
  TTR((String *)&local_48,(String *)&local_58);
  Control::set_tooltip_text(pSVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  pRVar1 = *(Ref **)(lVar6 + 0xdc8);
  if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
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
  pRVar1 = *(Ref **)(lVar6 + 0xdc0);
  if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::_notification(int) */

void __thiscall DockContextPopup::_notification(DockContextPopup *this,int param_1)

{
  if (param_1 != 0x20) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorDockManager::_dock_remove_from_bottom(Control*) */

void __thiscall
EditorDockManager::_dock_remove_from_bottom(EditorDockManager *this,Control *param_1)

{
  char cVar1;
  Control *pCVar2;
  long lVar3;
  long in_FS_OFFSET;
  Control *local_e0 [2];
  long local_d0;
  int local_c8;
  undefined8 local_c4;
  Variant *local_b8 [2];
  int local_a8 [2];
  undefined1 local_a0 [16];
  int local_88 [8];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0[0] = param_1;
  lVar3 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                        *)(this + 0x1e8),local_e0);
  *(undefined1 *)(lVar3 + 10) = 0;
  lVar3 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                        *)(this + 0x1e8),local_e0);
  pCVar2 = local_e0[0];
  *(undefined1 *)(lVar3 + 0x10) = 1;
  EditorBottomPanel::remove_item(*(Control **)(EditorNode::singleton + 0xa40));
  StringName::StringName((StringName *)&local_d0,"_set_dock_horizontal",false);
  Variant::Variant((Variant *)local_68,false);
  local_c8 = 0;
  local_50 = 0;
  local_c4 = 0;
  local_48 = (undefined1  [16])0x0;
  local_b8[0] = (Variant *)local_68;
  (**(code **)(*(long *)pCVar2 + 0x68))
            ((Variant *)local_88,pCVar2,(StringName *)&local_d0,local_b8,1,&local_c8);
  if (local_c8 == 0) {
    Variant::Variant((Variant *)local_a8,(Variant *)local_88);
  }
  else {
    local_a8[0] = 0;
    local_a0 = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_88[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_50];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDockManager::_is_dock_at_bottom(Control*) */

undefined1 __thiscall
EditorDockManager::_is_dock_at_bottom(EditorDockManager *this,Control *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  Control *local_40 [2];
  
  local_40[0] = param_1;
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4));
    lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
    uVar9 = (long)param_1 * 0x3ffff - 1;
    uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
    uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
    uVar9 = uVar9 >> 0x16 ^ uVar9;
    uVar13 = uVar9 & 0xffffffff;
    if ((int)uVar9 == 0) {
      uVar13 = 1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar13 * lVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    lVar12 = SUB168(auVar1 * auVar5,8);
    uVar14 = *(uint *)(*(long *)(this + 0x1f8) + lVar12 * 4);
    iVar11 = SUB164(auVar1 * auVar5,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (param_1 == *(Control **)(*(long *)(*(long *)(this + 0x1f0) + lVar12 * 8) + 0x10))) {
          lVar10 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                   ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                                 *)(this + 0x1e8),local_40);
          return *(undefined1 *)(lVar10 + 10);
        }
        uVar16 = uVar16 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)(iVar11 + 1) * lVar10;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar15;
        lVar12 = SUB168(auVar2 * auVar6,8);
        uVar14 = *(uint *)(*(long *)(this + 0x1f8) + lVar12 * 4);
        iVar11 = SUB164(auVar2 * auVar6,8);
      } while ((uVar14 != 0) &&
              (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar14 * lVar10, auVar7._8_8_ = 0,
              auVar7._0_8_ = uVar15, auVar4._8_8_ = 0,
              auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x210) * 4) + iVar11) -
                                    SUB164(auVar3 * auVar7,8)) * lVar10, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar15, uVar16 <= SUB164(auVar4 * auVar8,8)));
    }
  }
  _err_print_error("_is_dock_at_bottom","editor/editor_dock_manager.cpp",0x133,
                   "Condition \"!all_docks.has(p_dock)\" is true. Returning: false",0,0);
  return 0;
}



/* DockContextPopup::_update_buttons() */

void __thiscall DockContextPopup::_update_buttons(DockContextPopup *this)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Control *pCVar6;
  undefined1 uVar7;
  long in_FS_OFFSET;
  long local_b0;
  int local_a8 [4];
  int local_98 [2];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = Node::get_parent();
  if (lVar5 == 0) {
    cVar3 = EditorDockManager::_is_dock_at_bottom
                      (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb0),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
LAB_001048d7:
    uVar7 = (undefined1)*(undefined8 *)(this + 0xdc8);
    if (cVar3 != '\0') {
      CanvasItem::set_visible((bool)uVar7);
      goto LAB_001048f1;
    }
  }
  else {
    pCVar6 = (Control *)__dynamic_cast(lVar5,&Object::typeinfo,&TabContainer::typeinfo,0);
    cVar3 = EditorDockManager::_is_dock_at_bottom
                      (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb0),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
    if ((cVar3 == '\x01') || (pCVar6 == (Control *)0x0)) goto LAB_001048d7;
    iVar4 = TabContainer::get_tab_count();
    if (0 < iVar4) {
      TabContainer::get_tab_idx_from_control(pCVar6);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb0),0));
      uVar2 = *(undefined8 *)(this + 0xdb8);
      TabContainer::get_tab_count();
      BaseButton::set_disabled(SUB81(uVar2,0));
    }
    uVar7 = (undefined1)*(undefined8 *)(this + 0xdc8);
  }
  plVar1 = *(long **)(this + 0xe60);
  StringName::StringName((StringName *)&local_b0,"_can_dock_horizontal",false);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  (**(code **)(*plVar1 + 0x68))((Variant *)local_58,plVar1,(StringName *)&local_b0,0,0,local_a8);
  if (local_a8[0] == 0) {
    Variant::Variant((Variant *)local_98,(Variant *)local_58);
  }
  else {
    local_98[0] = 0;
    local_90 = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  Variant::operator_cast_to_bool((Variant *)local_98);
  CanvasItem::set_visible((bool)uVar7);
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
LAB_001048f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::reset_size();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::select_current_dock_in_dock_slot(int) */

void DockContextPopup::select_current_dock_in_dock_slot(int param_1)

{
  undefined8 uVar1;
  undefined4 in_register_0000003c;
  
  uVar1 = TabContainer::get_current_tab_control();
  *(undefined8 *)((DockContextPopup *)CONCAT44(in_register_0000003c,param_1) + 0xe60) = uVar1;
  _update_buttons((DockContextPopup *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* DockContextPopup::set_dock(Control*) */

void __thiscall DockContextPopup::set_dock(DockContextPopup *this,Control *param_1)

{
  *(Control **)(this + 0xe60) = param_1;
  _update_buttons(this);
  return;
}



/* EditorDockManager::_dock_container_gui_input(Ref<InputEvent> const&, TabContainer*) */

void __thiscall
EditorDockManager::_dock_container_gui_input
          (EditorDockManager *this,Ref *param_1,TabContainer *param_2)

{
  DockContextPopup *this_00;
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    pOVar4 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        iVar3 = InputEventMouseButton::get_button_index();
        if (iVar3 == 2) {
          cVar2 = InputEvent::is_pressed();
          if (cVar2 != '\0') {
            TabContainer::get_tab_bar();
            iVar3 = TabBar::get_hovered_tab();
            if (-1 < iVar3) {
              this_00 = *(DockContextPopup **)(this + 0x220);
              uVar5 = TabContainer::get_tab_control((int)param_2);
              *(undefined8 *)(this_00 + 0xe60) = uVar5;
              DockContextPopup::_update_buttons(this_00);
              pVVar1 = *(Vector2i **)(this + 0x220);
              uVar5 = InputEventMouse::get_position();
              uVar6 = Control::get_screen_position();
              local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                                  (float)uVar6 + (float)uVar5);
              local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
              Window::set_position(pVVar1);
              local_48 = 0;
              local_40 = 0;
              (**(code **)(**(long **)(this + 0x220) + 0x240))();
            }
          }
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar4,false);
              return;
            }
            goto LAB_00104b9f;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104b9f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::_bottom_dock_button_gui_input(Ref<InputEvent> const&, Control*, Button*) */

void EditorDockManager::_bottom_dock_button_gui_input(Ref *param_1,Control *param_2,Button *param_3)

{
  DockContextPopup *this;
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_2 != 0) {
    pOVar4 = (Object *)
             __dynamic_cast(*(long *)param_2,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        iVar3 = InputEventMouseButton::get_button_index();
        if (iVar3 == 2) {
          cVar2 = InputEvent::is_pressed();
          if (cVar2 != '\0') {
            this = *(DockContextPopup **)(param_1 + 0x220);
            *(Button **)(this + 0xe60) = param_3;
            DockContextPopup::_update_buttons(this);
            pVVar1 = *(Vector2i **)(param_1 + 0x220);
            uVar5 = InputEventMouse::get_position();
            uVar6 = Control::get_screen_position();
            local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                                (float)uVar6 + (float)uVar5);
            local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
            Window::set_position(pVVar1);
            local_48 = 0;
            local_40 = 0;
            (**(code **)(**(long **)(param_1 + 0x220) + 0x240))();
          }
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar4,false);
              return;
            }
            goto LAB_00104d26;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104d26:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::bottom_dock_show_placement_popup(Rect2i const&, Control*) */

void __thiscall
EditorDockManager::bottom_dock_show_placement_popup
          (EditorDockManager *this,Rect2i *param_1,Control *param_2)

{
  DockContextPopup *this_00;
  Vector2i *pVVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  uint local_44;
  float local_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         *)(this + 0x1e8),(Control **)param_2,&local_44);
  if (cVar2 == '\0') {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("bottom_dock_show_placement_popup","editor/editor_dock_manager.cpp",0x26c,
                       "Condition \"!all_docks.has(p_dock)\" is true.",0,0);
      return;
    }
  }
  else {
    this_00 = *(DockContextPopup **)(this + 0x220);
    *(Control **)(this_00 + 0xe60) = param_2;
    DockContextPopup::_update_buttons(this_00);
    uVar4 = Vector2i::operator_cast_to_Vector2((Vector2i *)param_1);
    fStack_3c = (float)((ulong)uVar4 >> 0x20);
    local_40 = (float)uVar4;
    _local_40 = CONCAT44((float)*(int *)(param_1 + 0xc) + fStack_3c,local_40);
    cVar2 = (**(code **)(**(long **)(EditorNode::singleton + 0x6c8) + 0x340))();
    if (cVar2 == '\0') {
      iVar3 = Window::get_size();
      _local_40 = CONCAT44(fStack_3c,(local_40 - (float)iVar3) + (float)*(int *)(param_1 + 8));
    }
    pVVar1 = *(Vector2i **)(this + 0x220);
    local_38 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_40);
    Window::set_position(pVVar1);
    local_38 = 0;
    local_30 = 0;
    (**(code **)(**(long **)(this + 0x220) + 0x240))(*(long **)(this + 0x220),&local_38);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::docks_updated() */

void __thiscall DockContextPopup::docks_updated(DockContextPopup *this)

{
  char cVar1;
  
  cVar1 = Window::is_visible();
  if (cVar1 == '\0') {
    return;
  }
  _update_buttons(this);
  return;
}



/* EditorDockManager::_move_dock_tab_index(Control*, int, bool) */

void __thiscall
EditorDockManager::_move_dock_tab_index
          (EditorDockManager *this,Control *param_1,int param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  Node *pNVar3;
  int iVar4;
  Control *local_40 [2];
  
  local_40[0] = param_1;
  lVar2 = Node::get_parent();
  if ((lVar2 != 0) &&
     (pNVar3 = (Node *)__dynamic_cast(lVar2,&Object::typeinfo,&TabContainer::typeinfo,0),
     pNVar3 != (Node *)0x0)) {
    Object::set_block_signals(SUB81(pNVar3,0));
    iVar1 = TabContainer::get_tab_count();
    iVar4 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar4 = param_2;
    }
    if (param_2 < 0) {
      iVar4 = 0;
    }
    lVar2 = TabContainer::get_tab_control((int)pNVar3);
    if (*(int *)(lVar2 + 0x21c) == 0) {
      if ((*(long *)(lVar2 + 400) != 0) && (*(char *)(*(long *)(lVar2 + 400) + 0x1d0) != '\0')) {
        Node::_update_children_cache_impl();
      }
    }
    else {
      _err_print_error("get_index","./scene/main/node.h",0x20a,
                       "Condition \"!p_include_internal && data.internal_mode != INTERNAL_MODE_DISABLED\" is true. Returning: -1"
                       ,"Node is internal. Can\'t get index with \'include_internal\' being false.",
                       0,0);
    }
    Node::move_child(pNVar3,(int)param_1);
    lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                          *)(this + 0x1e8),local_40);
    *(int *)(lVar2 + 0xc) = iVar4;
    if (param_3) {
      TabContainer::set_current_tab((int)pNVar3);
    }
    Object::set_block_signals(SUB81(pNVar3,0));
  }
  return;
}



/* EditorDockManager::_update_tab_style(Control*) */

void __thiscall EditorDockManager::_update_tab_style(EditorDockManager *this,Control *param_1)

{
  uint uVar1;
  int iVar2;
  CowData *pCVar3;
  long lVar4;
  Control *pCVar5;
  void *pvVar6;
  int iVar7;
  String *pSVar8;
  long in_FS_OFFSET;
  Control *local_70;
  long local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_1;
  pCVar3 = (CowData *)
           HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
           ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         *)(this + 0x1e8),&local_70);
  if ((((pCVar3[9] == (CowData)0x0) || (pCVar3[8] == (CowData)0x0)) ||
      (*(long *)(pCVar3 + 0x18) != 0)) || (pCVar3[10] != (CowData)0x0)) goto LAB_0010508e;
  lVar4 = Node::get_parent();
  if (lVar4 != 0) {
    pCVar5 = (Control *)__dynamic_cast(lVar4,&Object::typeinfo,&TabContainer::typeinfo,0);
    if (pCVar5 != (Control *)0x0) {
      uVar1 = TabContainer::get_tab_idx_from_control(pCVar5);
      pSVar8 = (String *)(ulong)uVar1;
      if (uVar1 == 0xffffffff) {
        _err_print_error("_update_tab_style","editor/editor_dock_manager.cpp",0x189,
                         "Condition \"index == -1\" is true.",0,0);
      }
      else {
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"interface/editor/dock_tab_style");
        _EDITOR_GET((String *)local_58);
        iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        iVar7 = (int)pCVar5;
        if (iVar2 == 1) {
          pvVar6 = StringName::operator_cast_to_void_(*(StringName **)(pCVar3 + 0x38));
          if (pvVar6 == (void *)0x0) {
            local_68 = 0;
            Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_68,*(Ref **)(pCVar3 + 0x30));
          }
          else {
            Control::get_editor_theme_icon((StringName *)&local_68);
          }
          local_60 = 0;
          if ((local_68 == 0) && (*(long *)pCVar3 != 0)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar3);
          }
          TabContainer::set_tab_title(iVar7,pSVar8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          TabContainer::set_tab_icon(iVar7,(Ref *)pSVar8);
          local_60 = 0;
          if ((local_68 != 0) && (*(long *)pCVar3 != 0)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar3);
          }
        }
        else {
          if (iVar2 != 2) {
            if (iVar2 == 0) {
              TabContainer::set_tab_title(iVar7,pSVar8);
              local_60 = 0;
              TabContainer::set_tab_icon(iVar7,(Ref *)(ulong)uVar1);
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
              local_60 = 0;
              TabContainer::set_tab_tooltip(iVar7,pSVar8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            }
            goto LAB_0010508e;
          }
          pvVar6 = StringName::operator_cast_to_void_(*(StringName **)(pCVar3 + 0x38));
          if (pvVar6 == (void *)0x0) {
            local_68 = 0;
            Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_68,*(Ref **)(pCVar3 + 0x30));
          }
          else {
            Control::get_editor_theme_icon((StringName *)&local_68);
          }
          TabContainer::set_tab_title(iVar7,pSVar8);
          TabContainer::set_tab_icon(iVar7,(Ref *)pSVar8);
          local_60 = 0;
        }
        TabContainer::set_tab_tooltip(iVar7,pSVar8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
      }
      goto LAB_0010508e;
    }
  }
  _err_print_error("_update_tab_style","editor/editor_dock_manager.cpp",0x187,
                   "Parameter \"tab_container\" is null.",0,0);
LAB_0010508e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::update_tab_styles() */

void __thiscall EditorDockManager::update_tab_styles(EditorDockManager *this)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x200); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    _update_tab_style(this,(Control *)puVar1[2]);
  }
  return;
}



/* EditorDockManager::set_dock_tab_icon(Control*, Ref<Texture2D> const&) */

void __thiscall
EditorDockManager::set_dock_tab_icon(EditorDockManager *this,Control *param_1,Ref *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  Control *local_50;
  long local_48;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("set_dock_tab_icon","editor/editor_dock_manager.cpp",0x2ff,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    cVar3 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                           *)(this + 0x1e8),(Control **)param_1,(uint *)local_38);
    if (cVar3 == '\0') {
      Node::get_name();
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"Cannot set tab icon for unknown dock \'%s\'.");
      vformat<StringName>(local_38,(String *)&local_40,&local_48);
      _err_print_error("set_dock_tab_icon","editor/editor_dock_manager.cpp",0x300,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_38,0,0);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                            *)(this + 0x1e8),&local_50);
      pOVar1 = *(Object **)param_2;
      pOVar2 = *(Object **)(lVar4 + 0x30);
      if (pOVar1 != pOVar2) {
        *(Object **)(lVar4 + 0x30) = pOVar1;
        if (pOVar1 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(lVar4 + 0x30) = 0;
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
      _update_tab_style(this,param_1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorDockManager::_update_docks_menu() */

void __thiscall EditorDockManager::_update_docks_menu(EditorDockManager *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  String *pSVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  CowData<char32_t> *local_b8;
  Object *local_98;
  Object *local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0x228),0));
  Window::reset_size();
  if ((_update_docks_menu()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_update_docks_menu()::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_update_docks_menu()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_docks_menu()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_docks_menu()::{lambda()#1}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_98);
  lVar8 = *(long *)(this + 0x238);
  local_58 = __LC143;
  uStack_54 = _UNK_00119ec4;
  uStack_50 = _UNK_00119ec8;
  uStack_4c = __LC15;
  if ((lVar8 != 0) && (*(long *)(lVar8 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x238);
      *(undefined8 *)(this + 0x238) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x238) = 0;
    }
  }
  puVar2 = *(undefined8 **)(this + 0x200);
  pSVar9 = (String *)0x0;
  do {
    if (puVar2 == (undefined8 *)0x0) {
      if (((local_98 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(char *)((long)puVar2 + 0x21) != '\0') {
      if (puVar2[8] == 0) {
        PopupMenu::add_item(*(Ref **)(this + 0x228),puVar2 + 3,pSVar9,0);
      }
      else {
        PopupMenu::add_shortcut(*(Ref **)(this + 0x228),(int)puVar2 + 0x40,SUB81(pSVar9,0),false);
        PopupMenu::set_item_text((int)*(undefined8 *)(this + 0x228),pSVar9);
      }
      lVar8 = puVar2[10];
      if ((lVar8 == 0) ||
         ((*(long *)(lVar8 + 8) == 0 &&
          ((*(long *)(lVar8 + 0x10) == 0 || (*(uint *)(*(long *)(lVar8 + 0x10) + -8) < 2)))))) {
        local_90 = (Object *)puVar2[9];
        if ((local_90 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0'))
        goto LAB_00105871;
        local_90 = (Object *)0x0;
        iVar6 = (int)*(undefined8 *)(this + 0x228);
      }
      else {
        Window::get_editor_theme_icon((StringName *)&local_90);
LAB_00105871:
        iVar6 = (int)*(undefined8 *)(this + 0x228);
      }
      PopupMenu::set_item_icon(iVar6,(Ref *)pSVar9);
      if (*(char *)(puVar2 + 4) == '\0') {
        PopupMenu::set_item_icon_modulate((int)*(undefined8 *)(this + 0x228),(Color *)pSVar9);
        uVar3 = *(undefined8 *)(this + 0x228);
        local_70 = 0;
        if (puVar2[3] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar2 + 3));
        }
        local_80 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "Open the %s dock.";
        local_88 = 0;
        local_60 = 0x11;
        String::parse_latin1((StrRange *)&local_88);
        TTR(local_78,(String *)&local_88);
        vformat<String>((CowData<char32_t> *)&local_68,local_78,(CowData<char32_t> *)&local_70);
        PopupMenu::set_item_tooltip((int)uVar3,pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      }
      else {
        local_70 = 0;
        uVar3 = *(undefined8 *)(this + 0x228);
        if (puVar2[3] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar2 + 3));
        }
        local_80 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "Focus on the %s dock.";
        local_88 = 0;
        local_60 = 0x15;
        String::parse_latin1((StrRange *)&local_88);
        TTR(local_78,(String *)&local_88);
        vformat<String>((CowData<char32_t> *)&local_68,local_78,(CowData<char32_t> *)&local_70);
        PopupMenu::set_item_tooltip((int)uVar3,pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      }
      local_b8 = (CowData<char32_t> *)&local_80;
      local_c0 = (CowData<char32_t> *)&local_70;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref(local_c0);
      uVar3 = puVar2[2];
      if (*(long *)(this + 0x238) == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 0x238) + -8) + 1;
      }
      iVar6 = CowData<Control*>::resize<false>((CowData<Control*> *)(this + 0x238),lVar8);
      if (iVar6 == 0) {
        if (*(long *)(this + 0x238) == 0) {
          lVar7 = -1;
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(this + 0x238) + -8);
          lVar7 = lVar8 + -1;
          if (-1 < lVar7) {
            CowData<Control*>::_copy_on_write((CowData<Control*> *)(this + 0x238));
            *(undefined8 *)(*(long *)(this + 0x238) + lVar7 * 8) = uVar3;
            goto LAB_001057d6;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_001057d6:
      pSVar9 = (String *)(ulong)((int)pSVar9 + 1);
      if (((local_90 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar4 = local_90, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_90), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



/* EditorDockManager::_update_layout() */

void __thiscall EditorDockManager::_update_layout(EditorDockManager *this)

{
  DockContextPopup *this_00;
  char cVar1;
  
  this_00 = *(DockContextPopup **)(this + 0x220);
  if ((((byte)this_00[0x2fa] & 0x40) != 0) && (*(char *)(EditorNode::singleton + 0x75c) == '\0')) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      DockContextPopup::_update_buttons(this_00);
    }
    _update_docks_menu(this);
    EditorNode::save_editor_layout_delayed();
    return;
  }
  return;
}



/* EditorDockManager::set_docks_visible(bool) */

void __thiscall EditorDockManager::set_docks_visible(EditorDockManager *this,bool param_1)

{
  undefined8 uVar1;
  EditorDockManager *pEVar2;
  
  if (this[0x218] != (EditorDockManager)param_1) {
    pEVar2 = this + 0x1a8;
    this[0x218] = (EditorDockManager)param_1;
    while( true ) {
      uVar1 = *(undefined8 *)pEVar2;
      if ((EditorDockManager)param_1 != (EditorDockManager)0x0) {
        TabContainer::get_tab_count();
      }
      pEVar2 = pEVar2 + 8;
      CanvasItem::set_visible(SUB81(uVar1,0));
      if (pEVar2 == this + 0x1e8) break;
      param_1 = *(bool *)(this + 0x218);
    }
    _update_layout(this);
    return;
  }
  return;
}



/* EditorDockManager::_close_window(WindowWrapper*) */

Control * __thiscall
EditorDockManager::_close_window(EditorDockManager *this,WindowWrapper *param_1)

{
  char cVar1;
  Control *pCVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  uint local_3c;
  Control *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::set_block_signals(SUB81(param_1,0));
  pCVar2 = (Control *)WindowWrapper::release_wrapped_control();
  local_38 = pCVar2;
  Object::set_block_signals(SUB81(param_1,0));
  cVar1 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         *)(this + 0x1e8),(Control **)pCVar2,&local_3c);
  if (cVar1 == '\0') {
    pCVar2 = (Control *)0x0;
    _err_print_error("_close_window","editor/editor_dock_manager.cpp",0xe4,
                     "Condition \"!all_docks.has(dock)\" is true. Returning: nullptr",0,0);
  }
  else {
    lVar3 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                          *)(this + 0x1e8),&local_38);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    lVar3 = *(long *)(this + 0x1a0);
    if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + -8), 0 < lVar5)) {
      lVar4 = 0;
      do {
        if (*(WindowWrapper **)(lVar3 + lVar4 * 8) == param_1) {
          if (lVar4 < lVar5) {
            CowData<WindowWrapper*>::_copy_on_write((CowData<WindowWrapper*> *)(this + 0x1a0));
            lVar3 = *(long *)(this + 0x1a0);
            if (lVar3 == 0) {
              lVar5 = -1;
            }
            else {
              lVar5 = *(long *)(lVar3 + -8) + -1;
              if (lVar4 < lVar5) {
                memmove((void *)(lVar3 + lVar4 * 8),(void *)(lVar3 + 8 + lVar4 * 8),
                        (lVar5 - lVar4) * 8);
              }
            }
            CowData<WindowWrapper*>::resize<false>((CowData<WindowWrapper*> *)(this + 0x1a0),lVar5);
          }
          else {
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar4,lVar5,"p_index","size()",
                       "",false,false);
          }
          break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
    Node::queue_free();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pCVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::_move_dock(Control*, Control*, int, bool) */

void __thiscall
EditorDockManager::_move_dock
          (EditorDockManager *this,Control *param_1,Control *param_2,int param_3,bool param_4)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  EditorDockManager EVar1;
  char cVar2;
  undefined4 uVar3;
  Node *pNVar4;
  long lVar5;
  Control *pCVar6;
  bool bVar7;
  long in_FS_OFFSET;
  Control *local_60;
  long local_58;
  undefined8 local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("_move_dock","editor/editor_dock_manager.cpp",0x149,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)param_1,(uint *)local_48);
    if (cVar2 == '\0') {
      Node::get_name();
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Cannot move unknown dock \'%s\'.");
      vformat<StringName>(local_48,(String *)&local_50,&local_58);
      _err_print_error("_move_dock","editor/editor_dock_manager.cpp",0x14a,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_48,0,0);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
    }
    else {
      pNVar4 = (Node *)Node::get_parent();
      if (pNVar4 == (Node *)param_2) {
        if ((-1 < param_3) && (pNVar4 != (Node *)0x0)) {
          _move_dock_tab_index(this,param_1,param_3,param_4);
        }
      }
      else {
        if (pNVar4 != (Node *)0x0) {
          lVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                  ::operator[](this_00,&local_60);
          if (*(long *)(lVar5 + 0x18) == 0) {
            lVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                    ::operator[](this_00,&local_60);
            if (*(char *)(lVar5 + 10) == '\0') {
              lVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                      ::operator[](this_00,&local_60);
              *(undefined1 *)(lVar5 + 0x10) = 0;
              pCVar6 = (Control *)__dynamic_cast(pNVar4,&Object::typeinfo,&TabContainer::typeinfo,0)
              ;
              bVar7 = SUB81(pNVar4,0);
              if (pCVar6 == (Control *)0x0) {
                Object::set_block_signals(bVar7);
                Node::remove_child(pNVar4);
                Object::set_block_signals(bVar7);
              }
              else {
                uVar3 = TabContainer::get_tab_idx_from_control(pCVar6);
                lVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                        ::operator[](this_00,&local_60);
                *(undefined4 *)(lVar5 + 0xc) = uVar3;
                Object::set_block_signals(bVar7);
                Node::remove_child(pNVar4);
                Object::set_block_signals(bVar7);
                if (this[0x218] != (EditorDockManager)0x0) {
                  TabContainer::get_tab_count();
                  CanvasItem::set_visible(SUB81(pCVar6,0));
                }
              }
            }
            else {
              _dock_remove_from_bottom(this,param_1);
            }
          }
          else {
            lVar5 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                    ::operator[](this_00,&local_60);
            _close_window(this,*(WindowWrapper **)(lVar5 + 0x18));
          }
        }
        if (param_2 != (Control *)0x0) {
          Object::set_block_signals(SUB81(param_2,0));
          Node::add_child(param_2,param_1,0,0);
          Object::set_block_signals(SUB81(param_2,0));
          lVar5 = __dynamic_cast(param_2,&Object::typeinfo,&TabContainer::typeinfo,0);
          if (lVar5 != 0) {
            if ((*(byte *)(lVar5 + 0x2fa) & 0x40) != 0) {
              _update_tab_style(this,param_1);
            }
            if (param_3 < 0) {
              EVar1 = this[0x218];
            }
            else {
              _move_dock_tab_index(this,param_1,param_3,param_4);
              EVar1 = this[0x218];
            }
            if (EVar1 != (EditorDockManager)0x0) {
              TabContainer::get_tab_count();
              CanvasItem::set_visible(SUB81(lVar5,0));
            }
          }
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



/* EditorDockManager::_dock_move_to_bottom(Control*, bool) */

void __thiscall
EditorDockManager::_dock_move_to_bottom(EditorDockManager *this,Control *param_1,bool param_2)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  CowData *pCVar5;
  Object *pOVar6;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  Control *local_100;
  Callable local_f8 [16];
  long local_e8 [2];
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  Variant *local_c8 [2];
  int local_b8 [2];
  undefined1 local_b0 [16];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             *)(this + 0x1e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = param_1;
  _move_dock(this,param_1,(Control *)0x0,-1,true);
  lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[](this_00,&local_100);
  *(undefined1 *)(lVar4 + 10) = 1;
  lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[](this_00,&local_100);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  StringName::StringName((StringName *)local_e8,"_set_dock_horizontal",false);
  Variant::Variant((Variant *)local_78,true);
  local_60 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_58 = (undefined1  [16])0x0;
  local_c8[0] = (Variant *)local_78;
  (**(code **)(*(long *)param_1 + 0x68))
            ((Variant *)local_98,param_1,(StringName *)local_e8,local_c8,1,
             (CowData<char32_t> *)&local_d8);
  if (local_d8 == 0) {
    Variant::Variant((Variant *)local_b8,(Variant *)local_98);
  }
  else {
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_60];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_60];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  uVar2 = *(undefined8 *)(EditorNode::singleton + 0xa40);
  lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[](this_00,&local_100);
  pCVar5 = (CowData *)
           HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
           ::operator[](this_00,&local_100);
  local_d8 = 0;
  uStack_d4 = 0;
  if (*(long *)pCVar5 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,pCVar5);
  }
  pOVar6 = (Object *)
           EditorBottomPanel::add_item(uVar2,(CowData<char32_t> *)&local_d8,param_1,lVar4 + 0x28,1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  pcVar3 = *(code **)(*(long *)pOVar6 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_01 + 0x20) = &_LC29;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_01 = &PTR_hash_00119688;
  *(EditorDockManager **)(this_01 + 0x28) = this;
  *(undefined8 *)(this_01 + 0x30) = uVar2;
  *(code **)(this_01 + 0x38) = _bottom_dock_button_gui_input;
  *(undefined8 *)(this_01 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorDockManager::_bottom_dock_button_gui_input";
  Callable::Callable(local_f8,this_01);
  Variant::Variant((Variant *)local_78,pOVar6);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_98[0] = (Variant *)local_78;
  Callable::bindp((Variant **)local_e8,(int)local_f8);
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
  Variant::Variant((Variant *)local_78,(Object *)param_1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_98[0] = (Variant *)local_78;
  Callable::bindp((Variant **)&local_d8,(int)(StringName *)local_e8);
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
  (*pcVar3)(pOVar6,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)&local_d8,0);
  Callable::~Callable((Callable *)&local_d8);
  Callable::~Callable((Callable *)local_e8);
  Callable::~Callable(local_f8);
  EditorBottomPanel::make_item_visible
            (*(Control **)(EditorNode::singleton + 0xa40),SUB81(param_1,0),param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::_move_dock_to_bottom() */

void __thiscall DockContextPopup::_move_dock_to_bottom(DockContextPopup *this)

{
  Window::hide();
  EditorDockManager::_dock_move_to_bottom
            (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60),true);
  EditorDockManager::_update_layout(*(EditorDockManager **)(this + 0xe68));
  return;
}



/* EditorDockManager::close_dock(Control*) */

void __thiscall EditorDockManager::close_dock(EditorDockManager *this,Control *param_1)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  Control *local_50;
  long local_48;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("close_dock","editor/editor_dock_manager.cpp",0x28c,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar1 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)param_1,(uint *)local_38);
    if (cVar1 == '\0') {
      Node::get_name();
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"Cannot close unknown dock \'%s\'.");
      vformat<StringName>(local_38,(String *)&local_40,&local_48);
      _err_print_error("close_dock","editor/editor_dock_manager.cpp",0x28d,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_38,0,0);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[](this_00,&local_50);
      if (*(char *)(lVar2 + 8) != '\0') {
        _move_dock(this,param_1,*(Control **)(this + 0x240),-1,true);
        lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_50);
        *(undefined1 *)(lVar2 + 8) = 0;
        CanvasItem::hide();
        _update_layout(this);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::_close_dock() */

void __thiscall DockContextPopup::_close_dock(DockContextPopup *this)

{
  Window::hide();
  EditorDockManager::close_dock(*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60));
  return;
}



/* EditorDockManager::remove_dock(Control*) */

void __thiscall EditorDockManager::remove_dock(EditorDockManager *this,Control *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  Object *pOVar12;
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
  uint uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  uint local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Control *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("remove_dock","editor/editor_dock_manager.cpp",0x2f5,
                       "Parameter \"p_dock\" is null.",0,0);
      return;
    }
  }
  else {
    cVar26 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                            *)(this + 0x1e8),(Control **)param_1,local_48);
    if (cVar26 == '\0') {
      Node::get_name();
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Cannot remove unknown dock \'%s\'.");
      vformat<StringName>((CowData<char32_t> *)local_48,(String *)&local_50,&local_58);
      _err_print_error("remove_dock","editor/editor_dock_manager.cpp",0x2f6,
                       "Condition \"!all_docks.has(p_dock)\" is true.",(CowData<char32_t> *)local_48
                       ,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      _move_dock(this,param_1,(Control *)0x0,-1,true);
      local_48[0] = 0;
      cVar26 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                              *)(this + 0x1e8),(Control **)param_1,local_48);
      if (cVar26 != '\0') {
        lVar8 = *(long *)(this + 0x1f8);
        lVar9 = *(long *)(this + 0x1f0);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
        uVar30 = CONCAT44(0,uVar6);
        lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(local_48[0] + 1) * lVar10;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar30;
        lVar29 = SUB168(auVar13 * auVar19,8);
        puVar1 = (uint *)(lVar8 + lVar29 * 4);
        uVar27 = SUB164(auVar13 * auVar19,8);
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar7 * lVar10;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar30;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)((uVar6 + uVar27) - SUB164(auVar14 * auVar20,8)) * lVar10;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar30;
          iVar28 = SUB164(auVar15 * auVar21,8);
          while (uVar25 = uVar27, iVar28 != 0) {
            puVar2 = (uint *)(lVar8 + (ulong)local_48[0] * 4);
            *puVar1 = *puVar2;
            puVar3 = (undefined8 *)(lVar9 + lVar29 * 8);
            *puVar2 = uVar7;
            puVar4 = (undefined8 *)(lVar9 + (ulong)local_48[0] * 8);
            uVar11 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar11;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar25 + 1) * lVar10;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar30;
            lVar29 = SUB168(auVar18 * auVar24,8);
            puVar1 = (uint *)(lVar8 + lVar29 * 4);
            uVar27 = SUB164(auVar18 * auVar24,8);
            uVar7 = *puVar1;
            local_48[0] = uVar25;
            if (uVar7 == 0) break;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar7 * lVar10;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar30;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)((uVar27 + uVar6) - SUB164(auVar16 * auVar22,8)) * lVar10;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar30;
            iVar28 = SUB164(auVar17 * auVar23,8);
          }
        }
        uVar30 = (ulong)local_48[0];
        plVar5 = (long *)(lVar9 + uVar30 * 8);
        *(undefined4 *)(lVar8 + uVar30 * 4) = 0;
        plVar31 = (long *)*plVar5;
        if (*(long **)(this + 0x200) == plVar31) {
          *(long *)(this + 0x200) = *plVar31;
          plVar31 = (long *)*plVar5;
        }
        if (*(long **)(this + 0x208) == plVar31) {
          *(long *)(this + 0x208) = plVar31[1];
          plVar31 = (long *)*plVar5;
        }
        if ((long *)plVar31[1] != (long *)0x0) {
          *(long *)plVar31[1] = *plVar31;
          plVar31 = (long *)*plVar5;
        }
        if (*plVar31 != 0) {
          *(long *)(*plVar31 + 8) = plVar31[1];
          plVar31 = (long *)*plVar5;
        }
        if ((StringName::configured != '\0') && (plVar31[10] != 0)) {
          StringName::unref();
        }
        if ((plVar31[9] != 0) && (cVar26 = RefCounted::unreference(), cVar26 != '\0')) {
          pOVar12 = (Object *)plVar31[9];
          cVar26 = predelete_handler(pOVar12);
          if (cVar26 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        if ((plVar31[8] != 0) && (cVar26 = RefCounted::unreference(), cVar26 != '\0')) {
          pOVar12 = (Object *)plVar31[8];
          cVar26 = predelete_handler(pOVar12);
          if (cVar26 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(plVar31 + 3));
        Memory::free_static(plVar31,false);
        *(undefined8 *)(*(long *)(this + 0x1f0) + uVar30 * 8) = 0;
        *(int *)(this + 0x214) = *(int *)(this + 0x214) + -1;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_layout(this);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::_tab_move_left() */

void __thiscall DockContextPopup::_tab_move_left(DockContextPopup *this)

{
  int iVar1;
  long lVar2;
  Control *pCVar3;
  
  lVar2 = Node::get_parent();
  if (lVar2 != 0) {
    pCVar3 = (Control *)__dynamic_cast(lVar2,&Object::typeinfo,&TabContainer::typeinfo,0);
    if (pCVar3 != (Control *)0x0) {
      iVar1 = TabContainer::get_tab_idx_from_control(pCVar3);
      EditorDockManager::_move_dock
                (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60),pCVar3,iVar1 + -1
                 ,true);
      EditorDockManager::_update_layout(*(EditorDockManager **)(this + 0xe68));
      CanvasItem::queue_redraw();
      return;
    }
  }
  return;
}



/* DockContextPopup::_tab_move_right() */

void __thiscall DockContextPopup::_tab_move_right(DockContextPopup *this)

{
  int iVar1;
  long lVar2;
  Control *pCVar3;
  
  lVar2 = Node::get_parent();
  if (lVar2 != 0) {
    pCVar3 = (Control *)__dynamic_cast(lVar2,&Object::typeinfo,&TabContainer::typeinfo,0);
    if (pCVar3 != (Control *)0x0) {
      iVar1 = TabContainer::get_tab_idx_from_control(pCVar3);
      EditorDockManager::_move_dock
                (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60),pCVar3,iVar1 + 1,
                 true);
      EditorDockManager::_update_layout(*(EditorDockManager **)(this + 0xe68));
      CanvasItem::queue_redraw();
      return;
    }
  }
  return;
}



/* DockContextPopup::_dock_select_input(Ref<InputEvent> const&) */

void __thiscall DockContextPopup::_dock_select_input(DockContextPopup *this,Ref *param_1)

{
  Control *pCVar1;
  EditorDockManager *pEVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  Object *pOVar6;
  Control *pCVar7;
  long lVar8;
  DockContextPopup *pDVar9;
  int iVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  if (((*(long *)param_1 != 0) &&
      (pOVar5 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouse::typeinfo,0),
      pOVar5 != (Object *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    pDVar9 = this + 0xdd8;
    iVar10 = 0;
    InputEventMouse::get_position();
    do {
      if ((*(float *)(pDVar9 + 8) <= 0.0 && *(float *)(pDVar9 + 8) != 0.0) ||
         (*(float *)(pDVar9 + 0xc) <= 0.0 && *(float *)(pDVar9 + 0xc) != 0.0)) {
        _err_print_error("has_point","./core/math/rect2.h",0xb9,
                         "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                         ,0,0);
      }
      if (((*(float *)pDVar9 <= extraout_XMM0_Da) && (*(float *)(pDVar9 + 4) <= extraout_XMM0_Db))
         && ((extraout_XMM0_Da < *(float *)pDVar9 + *(float *)(pDVar9 + 8) &&
             (extraout_XMM0_Db < *(float *)(pDVar9 + 4) + *(float *)(pDVar9 + 0xc))))) {
        if (*(int *)(this + 0xe58) != iVar10) {
          CanvasItem::queue_redraw();
          *(int *)(this + 0xe58) = iVar10;
        }
        pOVar6 = (Object *)
                 __dynamic_cast(pOVar5,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
        if ((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
          pCVar1 = *(Control **)(*(long *)(this + 0xe68) + 0x1a8 + (long)iVar10 * 8);
          iVar4 = InputEventMouseButton::get_button_index();
          if ((iVar4 == 1) && (cVar3 = InputEvent::is_pressed(), cVar3 != '\0')) {
            pCVar7 = (Control *)Node::get_parent();
            if (pCVar7 != (Control *)0x0) {
              pCVar7 = (Control *)__dynamic_cast(pCVar7,&Object::typeinfo,&TabContainer::typeinfo,0)
              ;
            }
            if (pCVar1 != pCVar7) {
              pEVar2 = *(EditorDockManager **)(this + 0xe68);
              iVar4 = TabContainer::get_tab_count();
              EditorDockManager::_move_dock(pEVar2,*(Control **)(this + 0xe60),pCVar1,iVar4,true);
              lVar8 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                      ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                                    *)(*(long *)(this + 0xe68) + 0x1e8),(Control **)(this + 0xe60));
              pEVar2 = *(EditorDockManager **)(this + 0xe68);
              *(int *)(lVar8 + 0x20) = iVar10;
              EditorDockManager::_update_layout(pEVar2);
              Window::hide();
            }
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        goto LAB_00106ff9;
      }
      iVar10 = iVar10 + 1;
      pDVar9 = pDVar9 + 0x10;
    } while (iVar10 != 8);
    if (*(int *)(this + 0xe58) == -1) {
LAB_00106ff9:
      cVar3 = RefCounted::unreference();
    }
    else {
      CanvasItem::queue_redraw();
      *(undefined4 *)(this + 0xe58) = 0xffffffff;
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      return;
    }
  }
  return;
}



/* EditorDockManager::_open_dock_in_window(Control*, bool, bool) */

void __thiscall
EditorDockManager::_open_dock_in_window
          (EditorDockManager *this,Control *param_1,bool param_2,bool param_3)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  WindowWrapper *this_01;
  CowData *pCVar5;
  long lVar6;
  CallableCustom *this_02;
  Vector2i *pVVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 uVar10;
  Control *local_e0 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8 [2];
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Variant *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0[0] = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("_open_dock_in_window","editor/editor_dock_manager.cpp",0xed,
                     "Parameter \"p_dock\" is null.",0,0);
    goto LAB_001075f1;
  }
  fVar9 = (float)EditorScale::get_scale();
  fVar9 = fVar9 * _LC17 + fVar9 * _LC17;
  uVar10 = Control::get_size();
  local_98 = CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar9,(float)uVar10 + fVar9);
  local_90 = Control::get_screen_position();
  this_01 = (WindowWrapper *)operator_new(0xa48,"");
  WindowWrapper::WindowWrapper(this_01);
  postinitialize_handler((Object *)this_01);
  this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             *)(this + 0x1e8);
  pCVar5 = (CowData *)
           HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
           ::operator[](this_00,local_e0);
  local_b8[0] = 0;
  if (*(long *)pCVar5 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,pCVar5);
  }
  local_c8 = 0;
  local_a8 = (Object *)&_LC29;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (Object *)0x10b1b6;
  local_d0 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  TTR((String *)&local_c0,(String *)&local_d0);
  vformat<String>((CowData<char32_t> *)&local_a8,(String *)&local_c0,(CowData<char32_t> *)local_b8);
  WindowWrapper::set_window_title((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  WindowWrapper::set_margins_enabled(SUB81(this_01,0));
  Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),this_01,0,0);
  _move_dock(this,param_1,(Control *)0x0,-1,true);
  local_a8 = (Object *)0x0;
  WindowWrapper::set_wrapped_control((Control *)this_01,(Ref *)param_1);
  if (local_a8 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_a8;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_a8);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  lVar6 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[](this_00,local_e0);
  *(WindowWrapper **)(lVar6 + 0x18) = this_01;
  lVar6 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[](this_00,local_e0);
  *(undefined1 *)(lVar6 + 8) = 1;
  CanvasItem::show();
  pcVar1 = *(code **)(*(long *)this_01 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(EditorDockManager **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC29;
  *(undefined ***)this_02 = &PTR_hash_001195f8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar10 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar10;
  *(code **)(this_02 + 0x38) = _window_close_request;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorDockManager::_window_close_request";
  Callable::Callable((Callable *)local_b8,this_02);
  Variant::Variant((Variant *)&local_78,(Object *)this_01);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)&local_78;
  Callable::bindp((Variant **)&local_a8,(int)(CowData<char32_t> *)local_b8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_c0,"window_close_requested",false);
  (*pcVar1)(this_01,(String *)&local_c0,(CowData<char32_t> *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_a8);
  Callable::~Callable((Callable *)local_b8);
  if (*(long *)(this + 0x1a0) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x1a0) + -8) + 1;
  }
  iVar4 = CowData<WindowWrapper*>::resize<false>((CowData<WindowWrapper*> *)(this + 0x1a0),lVar6);
  if (iVar4 == 0) {
    if (*(long *)(this + 0x1a0) == 0) {
      lVar8 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 0x1a0) + -8);
      lVar8 = lVar6 + -1;
      if (-1 < lVar8) {
        CowData<WindowWrapper*>::_copy_on_write((CowData<WindowWrapper*> *)(this + 0x1a0));
        *(WindowWrapper **)(*(long *)(this + 0x1a0) + lVar8 * 8) = this_01;
        goto LAB_001075ea;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001075ea:
  if (param_2) {
    Node::get_window();
    Window::get_current_screen();
    uVar10 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
    local_78 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_90);
    local_70 = uVar10;
    WindowWrapper::restore_window((Rect2i *)this_01,(int)(Variant *)&local_78);
    _update_layout(this);
    if (param_3) {
      Node::get_window();
      local_78 = Window::get_size();
      local_88 = (Variant *)Vector2i::operator/((Vector2i *)&local_78,3);
      pVVar7 = (Vector2i *)Node::get_window();
      Window::set_size(pVVar7);
      Node::get_window();
      Window::move_to_center();
    }
    Node::get_window();
    Window::grab_focus();
  }
LAB_001075f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* EditorDockManager::_restore_dock_to_saved_window(Control*, Dictionary const&) */

void __thiscall
EditorDockManager::_restore_dock_to_saved_window
          (EditorDockManager *this,Control *param_1,Dictionary *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Control *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  int local_158 [8];
  int local_138 [8];
  int local_118 [8];
  int local_f8 [8];
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_180 = param_1;
  lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                        *)(this + 0x1e8),&local_180);
  if (*(long *)(lVar4 + 0x18) == 0) {
    _open_dock_in_window(this,local_180,false,false);
  }
  lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                        *)(this + 0x1e8),&local_180);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  local_168 = 0;
  local_160 = 0;
  Variant::Variant((Variant *)local_78,(Rect2i *)&local_168);
  Variant::Variant((Variant *)local_98,"window_screen_rect");
  Dictionary::get((Variant *)local_58,(Variant *)param_2);
  Variant::operator_cast_to_Rect2((Variant *)local_58);
  Variant::Variant((Variant *)local_d8,-1);
  Variant::Variant((Variant *)local_f8,"window_screen");
  Dictionary::get((Variant *)local_b8,(Variant *)param_2);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_b8);
  local_178 = 0;
  local_170 = 0;
  Variant::Variant((Variant *)local_138,(Rect2i *)&local_178);
  Variant::Variant((Variant *)local_158,"window_rect");
  Dictionary::get((Variant *)local_118,(Variant *)param_2);
  Variant::operator_cast_to_Rect2((Variant *)local_118);
  WindowWrapper::restore_window_from_saved_position(uVar2,iVar3);
  if (Variant::needs_deinit[local_118[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_158[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_158[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_138[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_138[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_f8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_f8[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_d8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_d8[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_98[0]];
  }
  if (cVar1 == '\0') {
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
  return;
}



/* EditorDockManager::load_docks_from_config(Ref<ConfigFile>, String const&, bool) */

void __thiscall
EditorDockManager::load_docks_from_config
          (EditorDockManager *this,long *param_2,Variant *param_3,char param_4)

{
  Variant *pVVar1;
  int *piVar2;
  String *pSVar3;
  char *__s;
  undefined8 uVar4;
  void *pvVar5;
  Control *pCVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  ulong uVar16;
  CowData<char32_t> *pCVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  undefined1 uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  int *piVar32;
  Object *pOVar33;
  uint uVar34;
  CowData<char32_t> *pCVar35;
  long lVar36;
  Variant *pVVar37;
  ulong uVar38;
  uint uVar39;
  long in_FS_OFFSET;
  int local_238;
  char local_1e5;
  Variant local_1b8 [8];
  Variant local_1b0 [8];
  Variant local_1a8 [8];
  undefined8 local_1a0;
  Control *local_198;
  long local_190;
  int local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  char *local_178;
  CowData<char32_t> *local_170;
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined8 local_140;
  int local_138 [2];
  undefined1 local_130 [16];
  Variant *local_118;
  undefined1 auStack_110 [16];
  int local_f8 [8];
  Variant local_d8 [24];
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  int local_88 [6];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pSVar3 = (String *)*param_2;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)&local_178);
  Variant::Variant((Variant *)&local_118,(Dictionary *)&local_178);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"dock_floating");
  ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
  Variant::operator_cast_to_Dictionary(local_1b8);
  if (Variant::needs_deinit[local_f8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (Variant::needs_deinit[(int)local_118] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_178);
  pSVar3 = (String *)*param_2;
  Array::Array((Array *)&local_178);
  Variant::Variant((Variant *)&local_118,(Array *)&local_178);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"dock_bottom");
  ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
  Variant::operator_cast_to_Array(local_1b0);
  if (Variant::needs_deinit[local_f8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (Variant::needs_deinit[(int)local_118] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_178);
  pSVar3 = (String *)*param_2;
  Array::Array((Array *)&local_178);
  Variant::Variant((Variant *)&local_118,(Array *)&local_178);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"dock_closed");
  ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
  Variant::operator_cast_to_Array(local_1a8);
  if (Variant::needs_deinit[local_f8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (Variant::needs_deinit[(int)local_118] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_178);
  local_1e5 = EditorNode::is_multi_window_enabled();
  if ((local_1e5 != '\0') && (param_4 != '\0')) {
    local_168 = 0;
    String::parse_latin1((String *)&local_168,"interface/multi_window/restore_windows_on_load");
    _EDITOR_GET((String *)local_f8);
    local_1e5 = Variant::operator_cast_to_bool((Variant *)local_f8);
    if (Variant::needs_deinit[local_f8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  }
  local_140 = 2;
  local_160 = (undefined1  [16])0x0;
  puVar26 = *(undefined8 **)(this + 0x200);
  local_150 = (undefined1  [16])0x0;
  for (; puVar26 != (undefined8 *)0x0; puVar26 = (undefined8 *)*puVar26) {
    uVar4 = puVar26[2];
    Node::get_name();
    if (local_190 == 0) {
      local_188 = 0;
      uStack_184 = 0;
    }
    else {
      __s = *(char **)(local_190 + 8);
      local_188 = 0;
      uStack_184 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_190 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)(local_190 + 0x10));
        }
      }
      else {
        local_170 = (CowData<char32_t> *)strlen(__s);
        local_178 = __s;
        String::parse_latin1((StrRange *)&local_188);
      }
    }
    puVar25 = (undefined8 *)
              HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
              ::operator[]((HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
                            *)&local_168,(String *)&local_188);
    *puVar25 = uVar4;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if ((StringName::configured != '\0') && (local_190 != 0)) {
      StringName::unref();
    }
  }
  this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             *)(this + 0x1e8);
  lVar31 = -1;
  do {
    lVar36 = lVar31 + 1;
    pSVar3 = (String *)*param_2;
    itos((long)&local_188);
    operator+((char *)&local_178,(String *)"dock_");
    cVar19 = ConfigFile::has_section_key(pSVar3,(String *)param_3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if (cVar19 != '\0') {
      auStack_110 = (undefined1  [16])0x0;
      pSVar3 = (String *)*param_2;
      local_118 = (Variant *)0x0;
      itos((long)&local_198);
      operator+((char *)&local_190,(String *)"dock_");
      ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
      Variant::operator_cast_to_String((Variant *)&local_188);
      String::split((char *)&local_178,SUB81((StrRange *)&local_188,0),0x10af14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      if (Variant::needs_deinit[local_f8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      if (Variant::needs_deinit[(int)local_118] != '\0') {
        Variant::_clear_internal();
      }
      if (local_170 != (CowData<char32_t> *)0x0) {
        uVar34 = *(int *)(local_170 + -8) - 1;
        if (-1 < (int)uVar34) {
          local_238 = (int)lVar31;
          uVar38 = (ulong)uVar34;
          do {
            if (local_170 == (CowData<char32_t> *)0x0) {
              lVar27 = 0;
              goto LAB_00108d64;
            }
            lVar27 = *(long *)(local_170 + -8);
            if (lVar27 <= (long)uVar38) goto LAB_00108d64;
            local_1a0 = 0;
            if (*(long *)(local_170 + uVar38 * 8) != 0) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)&local_1a0,(CowData *)(local_170 + uVar38 * 8));
            }
            uVar4 = local_160._0_8_;
            if ((local_160._0_8_ != 0) && (local_140._4_4_ != 0)) {
              uVar30 = *(uint *)(hash_table_size_primes + (local_140 & 0xffffffff) * 4);
              lVar27 = *(long *)(hash_table_size_primes_inv + (local_140 & 0xffffffff) * 8);
              uVar24 = String::hash();
              uVar16 = CONCAT44(0,uVar30);
              uVar18 = local_160._8_8_;
              uVar28 = 1;
              if (uVar24 != 0) {
                uVar28 = uVar24;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar28 * lVar27;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar16;
              lVar29 = SUB168(auVar7 * auVar11,8);
              uVar24 = *(uint *)(local_160._8_8_ + lVar29 * 4);
              iVar22 = SUB164(auVar7 * auVar11,8);
              if (uVar24 != 0) {
                uVar39 = 0;
LAB_00108969:
                if ((uVar24 != uVar28) ||
                   (cVar19 = String::operator==((String *)(*(long *)(uVar4 + lVar29 * 8) + 0x10),
                                                (String *)&local_1a0), cVar19 == '\0'))
                goto LAB_00108920;
                puVar26 = (undefined8 *)
                          HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
                          ::operator[]((HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
                                        *)&local_168,(String *)&local_1a0);
                pCVar6 = (Control *)*puVar26;
                local_198 = pCVar6;
                lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         ::operator[](this_00,&local_198);
                if (*(char *)(lVar27 + 9) == '\0') {
                  local_190 = 0;
                  if (*(long *)param_3 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)param_3);
                  }
                  pOVar33 = (Object *)*param_2;
                  if ((pOVar33 != (Object *)0x0) &&
                     (cVar19 = RefCounted::reference(), cVar19 == '\0')) {
                    pOVar33 = (Object *)0x0;
                  }
                  if ((load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::{lambda()#1}::
                       operator()()::sname == '\0') &&
                     (iVar22 = __cxa_guard_acquire(&
                                                  load_docks_from_config(Ref<ConfigFile>,String_const&,bool)
                                                  ::{lambda()#1}::operator()()::sname), iVar22 != 0)
                     ) {
                    _scs_create((char *)&load_docks_from_config(Ref<ConfigFile>,String_const&,bool)
                                         ::{lambda()#1}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::
                                  {lambda()#1}::operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&load_docks_from_config(Ref<ConfigFile>,String_const&,bool)
                                         ::{lambda()#1}::operator()()::sname);
                  }
                  Variant::Variant(local_d8,pOVar33);
                  Variant::Variant(local_c0,(String *)&local_190);
                  local_a0 = (undefined1  [16])0x0;
                  local_188 = 0;
                  auStack_110._0_8_ = local_c0;
                  local_a8 = 0;
                  uStack_184 = 0;
                  uStack_180 = 0;
                  local_118 = local_d8;
                  (**(code **)(*(long *)pCVar6 + 0x68))
                            ((String *)local_f8,pCVar6,
                             &load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::
                              {lambda()#1}::operator()()::sname,(Variant *)&local_118,2,
                             (StrRange *)&local_188);
                  if (local_188 == 0) {
                    Variant::Variant((Variant *)local_138,(Variant *)local_f8);
                  }
                  else {
                    local_138[0] = 0;
                    local_130 = (undefined1  [16])0x0;
                  }
                  if (Variant::needs_deinit[local_f8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  pVVar37 = local_90;
                  do {
                    pVVar1 = pVVar37 + -0x18;
                    pVVar37 = pVVar37 + -0x18;
                    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                      Variant::_clear_internal();
                    }
                  } while (pVVar37 != local_d8);
                  if (Variant::needs_deinit[local_138[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (((pOVar33 != (Object *)0x0) &&
                      (cVar19 = RefCounted::unreference(), cVar19 != '\0')) &&
                     (cVar19 = predelete_handler(pOVar33), cVar19 != '\0')) {
                    (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
                    Memory::free_static(pOVar33,false);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
                  goto LAB_00108c9d;
                }
                if (local_1e5 == '\0') {
LAB_001089df:
                  Variant::Variant((Variant *)local_f8,(String *)&local_1a0);
                  cVar19 = Array::has(local_1b0);
                  if (Variant::needs_deinit[local_f8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (cVar19 == '\0') {
                    if (local_238 != -1) {
                      _move_dock(this,pCVar6,*(Control **)(this + lVar31 * 8 + 0x1a8),0,true);
                    }
                    goto LAB_00108a4d;
                  }
                  _dock_move_to_bottom(this,pCVar6,false);
                }
                else {
                  Variant::Variant((Variant *)local_f8,(String *)&local_1a0);
                  cVar19 = Dictionary::has(local_1b8);
                  if (Variant::needs_deinit[local_f8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (cVar19 == '\0') goto LAB_001089df;
                  Variant::Variant((Variant *)local_f8,(String *)&local_1a0);
                  uVar21 = Array::has(local_1b0);
                  lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                           ::operator[](this_00,&local_198);
                  *(undefined1 *)(lVar27 + 0x10) = uVar21;
                  if (Variant::needs_deinit[local_f8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)local_f8,(String *)&local_1a0);
                  Dictionary::operator[](local_1b8);
                  Variant::operator_cast_to_Dictionary((Variant *)&local_188);
                  _restore_dock_to_saved_window(this,pCVar6,(Dictionary *)&local_188);
                  Dictionary::~Dictionary((Dictionary *)&local_188);
                  if (Variant::needs_deinit[local_f8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
LAB_00108a4d:
                  cVar19 = '\0';
                }
                local_190 = 0;
                if (*(long *)param_3 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)param_3);
                }
                pOVar33 = (Object *)*param_2;
                if ((pOVar33 != (Object *)0x0) && (cVar20 = RefCounted::reference(), cVar20 == '\0')
                   ) {
                  pOVar33 = (Object *)0x0;
                }
                if ((load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::{lambda()#2}::
                     operator()()::sname == '\0') &&
                   (iVar22 = __cxa_guard_acquire(&load_docks_from_config(Ref<ConfigFile>,String_const&,bool)
                                                  ::{lambda()#2}::operator()()::sname), iVar22 != 0)
                   ) {
                  _scs_create((char *)&load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::
                                       {lambda()#2}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::
                                {lambda()#2}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::
                                       {lambda()#2}::operator()()::sname);
                }
                Variant::Variant((Variant *)local_88,pOVar33);
                Variant::Variant(local_70,(String *)&local_190);
                local_58 = 0;
                local_50 = (undefined1  [16])0x0;
                local_188 = 0;
                uStack_184 = 0;
                uStack_180 = 0;
                auStack_110._0_8_ = local_70;
                local_118 = (Variant *)local_88;
                (**(code **)(*(long *)pCVar6 + 0x68))
                          ((String *)local_f8,pCVar6,
                           &load_docks_from_config(Ref<ConfigFile>,String_const&,bool)::{lambda()#2}
                            ::operator()()::sname,(Variant *)&local_118,2,(StrRange *)&local_188);
                if (local_188 == 0) {
                  Variant::Variant((Variant *)local_138,(Variant *)local_f8);
                }
                else {
                  local_138[0] = 0;
                  local_130 = (undefined1  [16])0x0;
                }
                if (Variant::needs_deinit[local_f8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                pVVar37 = (Variant *)local_40;
                do {
                  pVVar1 = pVVar37 + -0x18;
                  pVVar37 = pVVar37 + -0x18;
                  if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                    Variant::_clear_internal();
                  }
                } while (pVVar37 != (Variant *)local_88);
                if (Variant::needs_deinit[local_138[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (((pOVar33 != (Object *)0x0) &&
                    (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
                   (cVar20 = predelete_handler(pOVar33), cVar20 != '\0')) {
                  (**(code **)(*(long *)pOVar33 + 0x140))(pOVar33);
                  Memory::free_static(pOVar33,false);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
                Variant::Variant((Variant *)local_88,(String *)&local_1a0);
                cVar20 = Array::has(local_1a8);
                if (Variant::needs_deinit[local_88[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (cVar20 == '\0') {
                  lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                           ::operator[](this_00,&local_198);
                  *(undefined1 *)(lVar27 + 8) = 1;
                  if (cVar19 == '\0') {
                    CanvasItem::show();
                  }
                }
                else {
                  _move_dock(this,pCVar6,*(Control **)(this + 0x240),-1,true);
                  lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                           ::operator[](this_00,&local_198);
                  *(undefined1 *)(lVar27 + 8) = 0;
                  CanvasItem::hide();
                }
                lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         ::operator[](this_00,&local_198);
                uVar30 = 0;
                if (local_238 != -1) {
                  uVar30 = uVar34;
                }
                *(int *)(lVar27 + 0x20) = local_238;
                lVar27 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         ::operator[](this_00,&local_198);
                *(uint *)(lVar27 + 0xc) = uVar30;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
                goto LAB_00108ca5;
              }
            }
LAB_00108c9d:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
LAB_00108ca5:
            uVar34 = uVar34 - 1;
            uVar38 = uVar38 - 1;
          } while (uVar34 != 0xffffffff);
          if (local_170 == (CowData<char32_t> *)0x0) goto LAB_001080e8;
        }
        pCVar17 = local_170;
        LOCK();
        pCVar35 = local_170 + -0x10;
        *(long *)pCVar35 = *(long *)pCVar35 + -1;
        UNLOCK();
        if (*(long *)pCVar35 == 0) {
          if (local_170 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)invalidInstructionException();
            (*pcVar15)();
          }
          lVar31 = *(long *)(local_170 + -8);
          lVar27 = 0;
          local_170 = (CowData<char32_t> *)0x0;
          pCVar35 = pCVar17;
          if (lVar31 != 0) {
            do {
              lVar27 = lVar27 + 1;
              CowData<char32_t>::_unref(pCVar35);
              pCVar35 = pCVar35 + 8;
            } while (lVar31 != lVar27);
          }
          Memory::free_static(pCVar17 + -0x10,false);
        }
      }
    }
LAB_001080e8:
    lVar31 = lVar36;
  } while (lVar36 != 8);
  lVar31 = 1;
  do {
    while (iVar22 = TabContainer::get_tab_count(), iVar22 == 0) {
LAB_00108108:
      lVar31 = lVar31 + 1;
      if (lVar31 == 9) goto LAB_00108310;
    }
    local_188 = 0;
    uStack_184 = 0;
    pSVar3 = (String *)*param_2;
    String::parse_latin1((String *)&local_188,"_selected_tab_idx");
    itos((long)&local_198);
    operator+((char *)&local_190,(String *)"dock_");
    String::operator+((String *)&local_178,(String *)&local_190);
    cVar19 = ConfigFile::has_section_key(pSVar3,(String *)param_3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if (cVar19 == '\0') goto LAB_00108108;
    auStack_110 = (undefined1  [16])0x0;
    local_118 = (Variant *)0x0;
    pSVar3 = (String *)*param_2;
    local_188 = 0;
    uStack_184 = 0;
    String::parse_latin1((String *)&local_188,"_selected_tab_idx");
    itos((long)&local_198);
    operator+((char *)&local_190,(String *)"dock_");
    String::operator+((String *)&local_178,(String *)&local_190);
    ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
    iVar22 = Variant::operator_cast_to_int((Variant *)local_f8);
    if (Variant::needs_deinit[local_f8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if (Variant::needs_deinit[(int)local_118] != '\0') {
      Variant::_clear_internal();
    }
    if ((iVar22 < 0) || (iVar23 = TabContainer::get_tab_count(), iVar23 <= iVar22))
    goto LAB_00108108;
    Object::set_block_signals(SUB81(*(undefined8 *)(this + lVar31 * 8 + 0x1a0),0));
    TabContainer::set_current_tab((int)*(undefined8 *)(this + lVar31 * 8 + 0x1a0));
    lVar36 = lVar31 * 8;
    lVar31 = lVar31 + 1;
    Object::set_block_signals(SUB81(*(undefined8 *)(this + lVar36 + 0x1a0),0));
  } while (lVar31 != 9);
LAB_00108310:
  lVar31 = *(long *)(this + 0x180);
  if (lVar31 != 0) {
    uVar38 = 0;
    do {
      if (*(long *)(lVar31 + -8) <= (long)uVar38) break;
      pSVar3 = (String *)*param_2;
      itos((long)&local_188);
      operator+((char *)&local_178,(String *)"dock_split_");
      cVar19 = ConfigFile::has_section_key(pSVar3,(String *)param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      if (cVar19 != '\0') {
        auStack_110 = (undefined1  [16])0x0;
        local_118 = (Variant *)0x0;
        pSVar3 = (String *)*param_2;
        itos((long)&local_188);
        operator+((char *)&local_178,(String *)"dock_split_");
        ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
        Variant::operator_cast_to_int((Variant *)local_f8);
        if (Variant::needs_deinit[local_f8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
        if (Variant::needs_deinit[(int)local_118] != '\0') {
          Variant::_clear_internal();
        }
        lVar31 = *(long *)(this + 0x180);
        if (lVar31 == 0) goto LAB_00108d87;
        lVar27 = *(long *)(lVar31 + -8);
        if (lVar27 <= (long)uVar38) goto LAB_00108d64;
        SplitContainer::set_split_offset((int)*(undefined8 *)(lVar31 + uVar38 * 8));
      }
      lVar31 = *(long *)(this + 0x180);
      uVar38 = uVar38 + 1;
    } while (lVar31 != 0);
  }
  lVar31 = *(long *)(this + 400);
  uVar38 = 0;
  do {
    if ((lVar31 == 0) || (*(long *)(lVar31 + -8) <= (long)uVar38)) {
      _update_docks_menu(this);
      uVar4 = local_160._0_8_;
      if ((undefined8 *)local_160._0_8_ != (undefined8 *)0x0) {
        uVar18 = local_160._8_8_;
        if ((local_140._4_4_ != 0) &&
           (*(uint *)(hash_table_size_primes + (local_140 & 0xffffffff) * 4) != 0)) {
          piVar2 = (int *)(local_160._8_8_ +
                          (ulong)*(uint *)(hash_table_size_primes + (local_140 & 0xffffffff) * 4) *
                          4);
          piVar32 = (int *)local_160._8_8_;
          puVar26 = (undefined8 *)local_160._0_8_;
          do {
            if (*piVar32 != 0) {
              pvVar5 = (void *)*puVar26;
              *piVar32 = 0;
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
              Memory::free_static(pvVar5,false);
              *puVar26 = 0;
            }
            piVar32 = piVar32 + 1;
            puVar26 = puVar26 + 1;
          } while (piVar32 != piVar2);
        }
        Memory::free_static((void *)uVar4,false);
        Memory::free_static((void *)uVar18,false);
      }
      Array::~Array((Array *)local_1a8);
      Array::~Array((Array *)local_1b0);
      Dictionary::~Dictionary((Dictionary *)local_1b8);
      if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pSVar3 = (String *)*param_2;
    itos((long)&local_188);
    operator+((char *)&local_178,(String *)"dock_hsplit_");
    cVar19 = ConfigFile::has_section_key(pSVar3,(String *)param_3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if (cVar19 != '\0') {
      auStack_110 = (undefined1  [16])0x0;
      local_118 = (Variant *)0x0;
      pSVar3 = (String *)*param_2;
      itos((long)&local_188);
      operator+((char *)&local_178,(String *)"dock_hsplit_");
      ConfigFile::get_value((String *)local_f8,pSVar3,param_3);
      Variant::operator_cast_to_int((Variant *)local_f8);
      if (Variant::needs_deinit[local_f8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      if (Variant::needs_deinit[(int)local_118] != '\0') {
        Variant::_clear_internal();
      }
      lVar31 = *(long *)(this + 400);
      if (lVar31 == 0) {
LAB_00108d87:
        lVar27 = 0;
LAB_00108d64:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar38,lVar27,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      lVar27 = *(long *)(lVar31 + -8);
      if (lVar27 <= (long)uVar38) goto LAB_00108d64;
      uVar4 = *(undefined8 *)(lVar31 + uVar38 * 8);
      EditorScale::get_scale();
      SplitContainer::set_split_offset((int)uVar4);
    }
    lVar31 = *(long *)(this + 400);
    uVar38 = uVar38 + 1;
  } while( true );
LAB_00108920:
  uVar39 = uVar39 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)(iVar22 + 1) * lVar27;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar16;
  lVar29 = SUB168(auVar8 * auVar12,8);
  uVar24 = *(uint *)(uVar18 + lVar29 * 4);
  iVar22 = SUB164(auVar8 * auVar12,8);
  if ((uVar24 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar24 * lVar27, auVar13._8_8_ = 0,
     auVar13._0_8_ = uVar16, auVar10._8_8_ = 0,
     auVar10._0_8_ = (ulong)((uVar30 + iVar22) - SUB164(auVar9 * auVar13,8)) * lVar27,
     auVar14._8_8_ = 0, auVar14._0_8_ = uVar16, SUB164(auVar10 * auVar14,8) < uVar39))
  goto LAB_00108c9d;
  goto LAB_00108969;
}



/* EditorDockManager::open_dock(Control*, bool) */

void __thiscall EditorDockManager::open_dock(EditorDockManager *this,Control *param_1,bool param_2)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  Control *pCVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Control *local_60;
  long local_58;
  undefined8 local_50;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("open_dock","editor/editor_dock_manager.cpp",0x29c,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)param_1,(uint *)local_48);
    if (cVar2 == '\0') {
      Node::get_name();
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Cannot open unknown dock \'%s\'.");
      vformat<StringName>(local_48,(String *)&local_50,&local_58);
      _err_print_error("open_dock","editor/editor_dock_manager.cpp",0x29d,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_48,0,0);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
    }
    else {
      lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[](this_00,&local_60);
      if (*(char *)(lVar4 + 8) == '\0') {
        lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_60);
        *(undefined1 *)(lVar4 + 8) = 1;
        CanvasItem::show();
        lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_60);
        if (*(char *)(lVar4 + 0x10) == '\0') {
          lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                  ::operator[](this_00,&local_60);
          if (*(int *)(lVar4 + 0x20) == -1) {
            _open_dock_in_window(this,param_1,true,true);
            goto LAB_001093ce;
          }
          lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                  ::operator[](this_00,&local_60);
          pCVar1 = *(Control **)(this + (long)*(int *)(lVar4 + 0x20) * 8 + 0x1a8);
          lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                  ::operator[](this_00,&local_60);
          iVar3 = *(int *)(lVar4 + 0xc);
          if (iVar3 < 0) {
            iVar3 = TabContainer::get_tab_count();
          }
          _move_dock(this,param_1,pCVar1,iVar3,param_2);
        }
        else {
          _dock_move_to_bottom(this,param_1,true);
        }
        _update_layout(this);
      }
    }
  }
LAB_001093ce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::set_dock_enabled(Control*, bool) */

void __thiscall
EditorDockManager::set_dock_enabled(EditorDockManager *this,Control *param_1,bool param_2)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  Control *local_50;
  long local_48;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("set_dock_enabled","editor/editor_dock_manager.cpp",0x27c,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar1 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)param_1,(uint *)local_38);
    if (cVar1 == '\0') {
      Node::get_name();
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"Cannot set enabled unknown dock \'%s\'.");
      vformat<StringName>(local_38,(String *)&local_40,&local_48);
      _err_print_error("set_dock_enabled","editor/editor_dock_manager.cpp",0x27d,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_38,0,0);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[](this_00,&local_50);
      if ((bool)*(char *)(lVar2 + 9) != param_2) {
        lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_50);
        *(bool *)(lVar2 + 9) = param_2;
        if (param_2) {
          open_dock(this,param_1,false);
        }
        else {
          close_dock(this,param_1);
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



/* EditorDockManager::focus_dock(Control*) */

void __thiscall EditorDockManager::focus_dock(EditorDockManager *this,Control *param_1)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  char cVar1;
  long lVar2;
  Control *pCVar3;
  long in_FS_OFFSET;
  Control *local_50;
  long local_48;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("focus_dock","editor/editor_dock_manager.cpp",0x2bd,
                     "Parameter \"p_dock\" is null.",0,0);
  }
  else {
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar1 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)param_1,(uint *)local_38);
    if (cVar1 == '\0') {
      Node::get_name();
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"Cannot focus unknown dock \'%s\'.");
      vformat<StringName>(local_38,(String *)&local_40,&local_48);
      _err_print_error("focus_dock","editor/editor_dock_manager.cpp",0x2be,
                       "Condition \"!all_docks.has(p_dock)\" is true.",local_38,0,0);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[](this_00,&local_50);
      if (*(char *)(lVar2 + 9) != '\0') {
        lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_50);
        if (*(char *)(lVar2 + 8) == '\0') {
          open_dock(this,param_1,true);
        }
        lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                ::operator[](this_00,&local_50);
        if (*(long *)(lVar2 + 0x18) == 0) {
          lVar2 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                  ::operator[](this_00,&local_50);
          if (*(char *)(lVar2 + 10) == '\0') {
            if (this[0x218] != (EditorDockManager)0x0) {
              lVar2 = Node::get_parent();
              if (lVar2 != 0) {
                pCVar3 = (Control *)
                         __dynamic_cast(lVar2,&Object::typeinfo,&TabContainer::typeinfo,0);
                if (pCVar3 != (Control *)0x0) {
                  TabContainer::get_tab_idx_from_control(pCVar3);
                  TabContainer::get_tab_bar();
                  Control::grab_focus();
                  TabContainer::set_current_tab((int)pCVar3);
                }
              }
            }
          }
          else {
            EditorBottomPanel::make_item_visible
                      (*(Control **)(EditorNode::singleton + 0xa40),SUB81(param_1,0),true);
          }
        }
        else {
          Node::get_window();
          Window::grab_focus();
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



/* EditorDockManager::_docks_menu_option(int) */

void __thiscall EditorDockManager::_docks_menu_option(EditorDockManager *this,int param_1)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  Control *pCVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  Control *local_50;
  long local_48;
  undefined8 local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  lVar5 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x238);
  if (lVar5 < 0) {
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + -8);
      goto LAB_00109ae5;
    }
  }
  else if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + -8);
    if (lVar8 <= lVar5) goto LAB_00109ae5;
    pCVar1 = *(Control **)(lVar4 + lVar5 * 8);
    local_50 = pCVar1;
    if (pCVar1 == (Control *)0x0) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00109c57;
      uVar7 = 200;
      pcVar6 = "Parameter \"dock\" is null.";
      goto LAB_00109b4e;
    }
    this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
               *)(this + 0x1e8);
    cVar3 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::_lookup_pos(this_00,(Control **)pCVar1,(uint *)local_38);
    if (cVar3 == '\0') {
      Node::get_name();
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"Menu option for unknown dock \'%s\'.");
      vformat<StringName>(local_38,(String *)&local_40,&local_48);
      _err_print_error("_docks_menu_option","editor/editor_dock_manager.cpp",0xc9,
                       "Condition \"!all_docks.has(dock)\" is true.",local_38,0,0);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109c57;
    }
    lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::operator[](this_00,&local_50);
    if (*(char *)(lVar4 + 9) != '\0') {
      lVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
              ::operator[](this_00,&local_50);
      if (*(char *)(lVar4 + 8) != '\0') {
        lVar4 = Node::get_parent();
        if (lVar4 != 0) {
          lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&PopupMenu::typeinfo,0);
          if (lVar4 != 0) {
            Window::hide();
            goto LAB_00109a54;
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = 0xcc;
          pcVar6 = "Parameter \"parent_menu\" is null.";
LAB_00109b4e:
          _err_print_error("_docks_menu_option","editor/editor_dock_manager.cpp",uVar7,pcVar6,0,0);
          return;
        }
        goto LAB_00109c57;
      }
    }
LAB_00109a54:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      focus_dock(this,pCVar1);
      return;
    }
LAB_00109c57:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar8 = 0;
LAB_00109ae5:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* EditorDockManager::_window_close_request(WindowWrapper*) */

void __thiscall
EditorDockManager::_window_close_request(EditorDockManager *this,WindowWrapper *param_1)

{
  HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
  *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  Control *pCVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  Control *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar9 = (Control *)_close_window(this,param_1);
  this_00 = (HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             *)(this + 0x1e8);
  local_48 = pCVar9;
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4));
    lVar11 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
    uVar10 = (long)pCVar9 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar14 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar14 = 1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar14 * lVar11;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar16;
    lVar13 = SUB168(auVar1 * auVar5,8);
    uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar13 * 4);
    iVar12 = SUB164(auVar1 * auVar5,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (((uint)uVar14 == uVar15) &&
           (pCVar9 == *(Control **)(*(long *)(*(long *)(this + 0x1f0) + lVar13 * 8) + 0x10))) {
          lVar11 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                   ::operator[](this_00,&local_48);
          if (*(char *)(lVar11 + 0x10) == '\0') {
            lVar11 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                     ::operator[](this_00,&local_48);
            if (*(int *)(lVar11 + 0x20) == -1) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                close_dock(this,pCVar9);
                return;
              }
              goto LAB_00109e93;
            }
          }
          lVar11 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                   ::operator[](this_00,&local_48);
          *(undefined1 *)(lVar11 + 8) = 0;
          open_dock(this,pCVar9,true);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            focus_dock(this,pCVar9);
            return;
          }
          goto LAB_00109e93;
        }
        uVar17 = uVar17 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)(iVar12 + 1) * lVar11;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar16;
        lVar13 = SUB168(auVar2 * auVar6,8);
        uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar13 * 4);
        iVar12 = SUB164(auVar2 * auVar6,8);
      } while ((uVar15 != 0) &&
              (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar15 * lVar11, auVar7._8_8_ = 0,
              auVar7._0_8_ = uVar16, auVar4._8_8_ = 0,
              auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x210) * 4) + iVar12) -
                                    SUB164(auVar3 * auVar7,8)) * lVar11, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, uVar17 <= SUB164(auVar4 * auVar8,8)));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_window_close_request","editor/editor_dock_manager.cpp",0xd5,
                     "Condition \"!all_docks.has(dock)\" is true.",0,0);
    return;
  }
LAB_00109e93:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::add_dock(Control*, String const&, EditorDockManager::DockSlot, Ref<Shortcut>
   const&, StringName const&) */

void __thiscall
EditorDockManager::add_dock
          (EditorDockManager *this,Control *param_1,CowData *param_2,uint param_4,long *param_5,
          StringName *param_6)

{
  Object *pOVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  CowData<char32_t> *this_00;
  long in_FS_OFFSET;
  Control *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined2 local_80;
  CowData<char32_t> local_7e;
  undefined4 local_7c;
  CowData<char32_t> local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_60 [16];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_1;
  if (param_1 == (Control *)0x0) {
    _err_print_error("add_dock","editor/editor_dock_manager.cpp",0x2e0,
                     "Parameter \"p_dock\" is null.",0,0);
    goto LAB_0010a192;
  }
  cVar4 = HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
          ::_lookup_pos((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                         *)(this + 0x1e8),(Control **)param_1,(uint *)&local_88);
  if (cVar4 != '\0') {
    Node::get_name();
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Cannot add dock \'%s\', already added.");
    vformat<StringName>((CowData<char32_t> *)&local_88,(String *)&local_90,&local_98);
    _err_print_error("add_dock","editor/editor_dock_manager.cpp",0x2e1,
                     "Condition \"all_docks.has(p_dock)\" is true.",(CowData<char32_t> *)&local_88,0
                    );
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_0010a192;
  }
  local_7e = (CowData<char32_t>)0x0;
  local_80 = 0x100;
  local_88 = 0;
  local_7c = 0xffffffff;
  local_78 = (CowData<char32_t>)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_50[0] = 0;
  local_60 = (undefined1  [16])0x0;
  if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
    Node::get_name();
    if (local_98 == 0) {
LAB_0010a1c9:
      local_90 = 0;
      if (local_88 != 0) {
LAB_00109fb5:
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_90);
      }
    }
    else {
      local_90 = 0;
      if (*(char **)(local_98 + 8) == (char *)0x0) {
        if (*(long *)(local_98 + 0x10) == 0) goto LAB_0010a1c9;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(local_98 + 0x10));
        if (local_88 != local_90) goto LAB_00109fb5;
      }
      else {
        String::parse_latin1((String *)&local_90,*(char **)(local_98 + 8));
        if (local_88 != local_90) goto LAB_00109fb5;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  else {
    local_90 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,param_2);
    if (local_90 == local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
  }
  uVar3 = local_60._0_8_;
  pOVar1 = (Object *)*param_5;
  local_68 = param_4;
  if (pOVar1 != (Object *)local_60._0_8_) {
    local_60._0_8_ = pOVar1;
    if ((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
    }
    if ((((Object *)uVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
       && (cVar4 = predelete_handler((Object *)uVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)uVar3 + 0x140))(uVar3);
      Memory::free_static((void *)uVar3,false);
    }
  }
  StringName::operator=((StringName *)local_50,param_6);
  this_00 = (CowData<char32_t> *)
            HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
            ::operator[]((HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
                          *)(this + 0x1e8),&local_a0);
  CowData<char32_t>::_ref(this_00,(CowData *)&local_88);
  pOVar1 = *(Object **)(this_00 + 0x28);
  *(undefined2 *)(this_00 + 8) = local_80;
  this_00[10] = local_7e;
  *(undefined4 *)(this_00 + 0xc) = local_7c;
  this_00[0x10] = local_78;
  *(undefined8 *)(this_00 + 0x18) = local_70;
  *(uint *)(this_00 + 0x20) = local_68;
  if ((Object *)local_60._0_8_ != pOVar1) {
    *(undefined8 *)(this_00 + 0x28) = local_60._0_8_;
    if (((Object *)local_60._0_8_ != (Object *)0x0) &&
       (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      *(undefined8 *)(this_00 + 0x28) = 0;
    }
    if (((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  pOVar1 = *(Object **)(this_00 + 0x30);
  if ((Object *)local_60._8_8_ != pOVar1) {
    *(undefined8 *)(this_00 + 0x30) = local_60._8_8_;
    if (((Object *)local_60._8_8_ != (Object *)0x0) &&
       (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      *(undefined8 *)(this_00 + 0x30) = 0;
    }
    if (((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  StringName::operator=((StringName *)(this_00 + 0x38),(StringName *)local_50);
  if (param_4 == 0xffffffff) {
    Node::add_child(*(undefined8 *)(this + 0x240),param_1,0,0);
    CanvasItem::hide();
    _update_layout(this);
  }
  else {
    if (7 < param_4) {
      _err_print_index_error
                ("add_dock","editor/editor_dock_manager.cpp",0x2eb,(long)(int)param_4,8,"p_slot",
                 "DOCK_SLOT_MAX","",false,false);
      DockInfo::~DockInfo((DockInfo *)&local_88);
      goto LAB_0010a192;
    }
    open_dock(this,param_1,false);
  }
  if ((StringName::configured != '\0') && (local_50[0] != 0)) {
    StringName::unref();
  }
  if ((local_60._8_8_ != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    uVar3 = local_60._8_8_;
    cVar4 = predelete_handler((Object *)local_60._8_8_);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)uVar3 + 0x140))(uVar3);
      Memory::free_static((void *)uVar3,false);
    }
  }
  if ((local_60._0_8_ != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    uVar3 = local_60._0_8_;
    cVar4 = predelete_handler((Object *)local_60._0_8_);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)uVar3 + 0x140))(uVar3);
      Memory::free_static((void *)uVar3,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_0010a192:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DockContextPopup::_float_dock() */

void __thiscall DockContextPopup::_float_dock(DockContextPopup *this)

{
  Window::hide();
  EditorDockManager::_open_dock_in_window
            (*(EditorDockManager **)(this + 0xe68),*(Control **)(this + 0xe60),true,false);
  return;
}



/* Vector<DockSplitContainer*>::push_back(DockSplitContainer*) [clone .isra.0] */

void __thiscall
Vector<DockSplitContainer*>::push_back
          (Vector<DockSplitContainer*> *this,DockSplitContainer *param_1)

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
  iVar1 = CowData<DockSplitContainer*>::resize<false>
                    ((CowData<DockSplitContainer*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<DockSplitContainer*>::_copy_on_write((CowData<DockSplitContainer*> *)(this + 8));
        *(DockSplitContainer **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* EditorDockManager::add_hsplit(DockSplitContainer*) */

void __thiscall EditorDockManager::add_hsplit(EditorDockManager *this,DockSplitContainer *param_1)

{
  code *pcVar1;
  long in_FS_OFFSET;
  long local_50;
  EditorDockManager local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<DockSplitContainer*>::push_back((Vector<DockSplitContainer*> *)(this + 0x188),param_1);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<EditorDockManager,int>
            (local_48,(char *)this,(_func_void_int *)"&EditorDockManager::_dock_split_dragged");
  StringName::StringName((StringName *)&local_50,"dragged",false);
  (*pcVar1)(param_1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::add_vsplit(DockSplitContainer*) */

void __thiscall EditorDockManager::add_vsplit(EditorDockManager *this,DockSplitContainer *param_1)

{
  code *pcVar1;
  long in_FS_OFFSET;
  long local_50;
  EditorDockManager local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<DockSplitContainer*>::push_back((Vector<DockSplitContainer*> *)(this + 0x178),param_1);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<EditorDockManager,int>
            (local_48,(char *)this,(_func_void_int *)"&EditorDockManager::_dock_split_dragged");
  StringName::StringName((StringName *)&local_50,"dragged",false);
  (*pcVar1)(param_1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorDockManager::is_class_ptr(void*) const */

uint __thiscall EditorDockManager::is_class_ptr(EditorDockManager *this,void *param_1)

{
  return (uint)CONCAT71(0x119c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x119c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorDockManager::_getv(StringName const&, Variant&) const */

undefined8 EditorDockManager::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorDockManager::_setv(StringName const&, Variant const&) */

undefined8 EditorDockManager::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorDockManager::_validate_propertyv(PropertyInfo&) const */

void EditorDockManager::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorDockManager::_property_can_revertv(StringName const&) const */

undefined8 EditorDockManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorDockManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorDockManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorDockManager::_notificationv(int, bool) */

void EditorDockManager::_notificationv(int param_1,bool param_2)

{
  return;
}



/* DockContextPopup::_property_can_revertv(StringName const&) const */

undefined8 DockContextPopup::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DockContextPopup::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DockContextPopup::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void,
   WindowWrapper*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this)

{
  return;
}



/* CallableCustomMethodPointer<DockSplitContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockSplitContainer,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<DockContextPopup, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::get_argument_count
          (CallableCustomMethodPointer<DockContextPopup,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::
get_argument_count(CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, TabContainer*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::get_argument_count
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDockManager, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::get_argument_count
          (CallableCustomMethodPointer<EditorDockManager,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<DockContextPopup, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::get_argument_count
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDockManager, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::
get_argument_count(CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorDockManager, void, WindowWrapper*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::get_argument_count
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<DockSplitContainer, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::get_argument_count
          (CallableCustomMethodPointer<DockSplitContainer,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<DockSplitContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockSplitContainer,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void,
   WindowWrapper*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DockContextPopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void> *this)

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



/* DockContextPopup::_getv(StringName const&, Variant&) const */

undefined8 DockContextPopup::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DockContextPopup::_setv(StringName const&, Variant const&) */

undefined8 DockContextPopup::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011f008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DockSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DockSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011f010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011f010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011f010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DockSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 DockSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011f018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011f018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011f018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<DockSplitContainer*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DockSplitContainer*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<WindowWrapper*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<WindowWrapper*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Control*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Control*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDockManager::load_docks_from_config(Ref<ConfigFile>, String const&, bool) [clone .cold] */

void EditorDockManager::load_docks_from_config(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<DockContextPopup, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::get_object
          (CallableCustomMethodPointer<DockContextPopup,void> *this)

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
      goto LAB_0010b39d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b39d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b39d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::
get_object(CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
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
      goto LAB_0010b49d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b49d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b49d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::get_object
          (CallableCustomMethodPointer<EditorDockManager,void> *this)

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
      goto LAB_0010b59d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b59d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b59d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::get_object
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
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
      goto LAB_0010b69d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b69d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b69d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DockSplitContainer, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::get_object
          (CallableCustomMethodPointer<DockSplitContainer,void> *this)

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
      goto LAB_0010b79d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b79d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b79d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent> const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010b89d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b89d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b89d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DockContextPopup, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::get_object
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this)

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
      goto LAB_0010b99d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b99d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b99d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, WindowWrapper*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::get_object
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this)

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
      goto LAB_0010ba9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ba9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ba9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, TabContainer*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::get_object
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this)

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
      goto LAB_0010bb9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bb9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bb9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDockManager, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::get_object
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this)

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
      goto LAB_0010bc9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bc9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bc9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011f020 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* DockSplitContainer::_validate_propertyv(PropertyInfo&) const */

void DockSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011f028 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011f020 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* DockContextPopup::_validate_propertyv(PropertyInfo&) const */

void DockContextPopup::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  Window::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011f030 == Window::_validate_property) {
    return;
  }
  Popup::_validate_property(param_1);
  return;
}



/* DockSplitContainer::is_class_ptr(void*) const */

uint DockSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x119c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* DockContextPopup::is_class_ptr(void*) const */

uint DockContextPopup::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x119c,in_RSI == &Popup::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &PopupPanel::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x119c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x119c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x119c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* DockContextPopup::~DockContextPopup() */

void __thiscall DockContextPopup::~DockContextPopup(DockContextPopup *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(code **)this = Popup::~Popup;
  if (*(long *)(this + 0xd88) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xd88);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Popup::~Popup((Popup *)this);
        return;
      }
    }
  }
  Popup::~Popup((Popup *)this);
  return;
}



/* DockContextPopup::~DockContextPopup() */

void __thiscall DockContextPopup::~DockContextPopup(DockContextPopup *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(code **)this = Popup::~Popup;
  if (*(long *)(this + 0xd88) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xd88);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Popup::~Popup((Popup *)this);
  operator_delete(this,0xe70);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011f038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* DockSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 DockSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011f038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c3b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c428) */
/* DockSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 DockSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c498) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011f040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c500;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c500:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c560;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c560:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c5c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c5c0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c630;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c630:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* DockSplitContainer::_notificationv(int, bool) */

void __thiscall
DockSplitContainer::_notificationv(DockSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011f048 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0011f048 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011f050 != Container::_notification) {
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
  if ((code *)PTR__notification_0011f050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011f050 != Container::_notification) {
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
  if ((code *)PTR__notification_0011f050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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
LAB_0010ca63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ca63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010cace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010cace:
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
LAB_0010cb53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cb53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010cbbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010cbbe:
  return &_get_class_namev()::_class_name_static;
}



/* DockContextPopup::_get_class_namev() const */

undefined8 * DockContextPopup::_get_class_namev(void)

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
LAB_0010cc43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cc43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DockContextPopup");
      goto LAB_0010ccae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DockContextPopup");
LAB_0010ccae:
  return &_get_class_namev()::_class_name_static;
}



/* DockSplitContainer::_get_class_namev() const */

undefined8 * DockSplitContainer::_get_class_namev(void)

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
LAB_0010cd33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cd33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DockSplitContainer");
      goto LAB_0010cd9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DockSplitContainer");
LAB_0010cd9e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorDockManager::_get_class_namev() const */

undefined8 * EditorDockManager::_get_class_namev(void)

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
LAB_0010ce23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ce23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorDockManager");
      goto LAB_0010ce8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorDockManager");
LAB_0010ce8e:
  return &_get_class_namev()::_class_name_static;
}



/* DockSplitContainer::~DockSplitContainer() */

void __thiscall DockSplitContainer::~DockSplitContainer(DockSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cf8f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cf8f:
  Control::~Control((Control *)this);
  return;
}



/* DockSplitContainer::~DockSplitContainer() */

void __thiscall DockSplitContainer::~DockSplitContainer(DockSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d13f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d13f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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



/* Callable create_custom_callable_function_pointer<DockSplitContainer>(DockSplitContainer*, char
   const*, void (DockSplitContainer::*)()) */

DockSplitContainer *
create_custom_callable_function_pointer<DockSplitContainer>
          (DockSplitContainer *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119568;
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



/* Callable create_custom_callable_function_pointer<EditorDockManager, int>(EditorDockManager*, char
   const*, void (EditorDockManager::*)(int)) */

EditorDockManager *
create_custom_callable_function_pointer<EditorDockManager,int>
          (EditorDockManager *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119718;
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



/* Callable create_custom_callable_function_pointer<EditorDockManager>(EditorDockManager*, char
   const*, void (EditorDockManager::*)()) */

EditorDockManager *
create_custom_callable_function_pointer<EditorDockManager>
          (EditorDockManager *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00119838;
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



/* Callable Callable::bind<TabContainer*>(TabContainer*) const */

TabContainer * Callable::bind<TabContainer*>(TabContainer *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<DockContextPopup>(DockContextPopup*, char
   const*, void (DockContextPopup::*)()) */

DockContextPopup *
create_custom_callable_function_pointer<DockContextPopup>
          (DockContextPopup *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC29;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001199e8;
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



/* EditorDockManager::_initialize_classv() */

void EditorDockManager::_initialize_classv(void)

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
    local_48 = "EditorDockManager";
    local_60 = 0;
    local_40 = 0x11;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010e1c8) */
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



/* WARNING: Removing unreachable block (ram,0x0010e478) */
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



/* EditorDockManager::DockInfo::~DockInfo() */

void __thiscall EditorDockManager::DockInfo::~DockInfo(DockInfo *this)

{
  Object *pOVar1;
  char cVar2;
  
  if ((StringName::configured != '\0') && (*(long *)(this + 0x38) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x28) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x28);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        CowData<char32_t>::_unref((CowData<char32_t> *)this);
        return;
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* EditorDockManager::get_class() const */

void EditorDockManager::get_class(void)

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



/* DockContextPopup::get_class() const */

void DockContextPopup::get_class(void)

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



/* DockSplitContainer::get_class() const */

void DockSplitContainer::get_class(void)

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



/* EditorDockManager::is_class(String const&) const */

undefined8 __thiscall EditorDockManager::is_class(EditorDockManager *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010ebfb;
  }
  cVar5 = String::operator==(param_1,"EditorDockManager");
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
      if (cVar5 != '\0') goto LAB_0010ebfb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010ebfb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0010ee3b;
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
      if (cVar5 != '\0') goto LAB_0010ee3b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010ee3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Control*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Control*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
::operator[](HashMap<String,Control*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Control*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010f6b8:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0010f53a;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0010f53e:
      if (iVar44 != 0) {
LAB_0010f546:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010f41b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_0010f064;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010f064;
    if (iVar44 != 0) goto LAB_0010f546;
LAB_0010f08a:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010f41b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010f41b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010f6b8;
LAB_0010f53a:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0010f53e;
    }
LAB_0010f064:
    if ((float)uVar39 * __LC94 < (float)(iVar44 + 1)) goto LAB_0010f08a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010f41b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DockContextPopup, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::call
          (CallableCustomMethodPointer<DockContextPopup,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f9bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f9bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010fa70;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f9bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fa70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDockManager, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::call
          (CallableCustomMethodPointer<EditorDockManager,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010fbcf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010fbcf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010fc80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fbcf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fc80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DockSplitContainer, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::call
          (CallableCustomMethodPointer<DockSplitContainer,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010fddf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010fddf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010fe90;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fddf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fe90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010ff6e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010ff6e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC103;
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
LAB_0011003d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011003d;
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
        goto LAB_0010ff6e;
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
  _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010ff6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, TabContainer*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::call
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00110445;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00110445;
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
LAB_00110350:
          uVar3 = _LC103;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&TabContainer::typeinfo,0),
              lVar7 == 0)) && (pOVar5 != (Object *)0x0)) goto LAB_00110350;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&TabContainer::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001103b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001104f6;
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
LAB_00110445:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001104f6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::call
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001105c5;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001105c5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar12 & 1) != 0) {
          pcVar12 = *(code **)(pcVar12 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_0011064f:
          uVar4 = _LC104;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar8 == (Object *)0x0) ||
              (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&TabContainer::typeinfo,0),
              lVar9 == 0)) && (pOVar6 != (Object *)0x0)) goto LAB_0011064f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&TabContainer::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC103;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar8 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_00110717:
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar8 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar8 != (Object *)0x0) goto LAB_00110717;
            }
          }
        }
        (*pcVar12)((long *)(lVar1 + lVar2),(String *)&local_48,pOVar6);
        if (((local_48 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar6 = local_48, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        goto LAB_001105c5;
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
  _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001105c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::call
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this,Variant **param_1,
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
      goto LAB_00110ab8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00110ab8;
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
        uVar3 = _LC105;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00110b69;
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
LAB_00110ab8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110b69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DockContextPopup, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::call
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this,Variant **param_1,
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
      goto LAB_00110d28;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00110d28;
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
        uVar3 = _LC105;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00110dd9;
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
LAB_00110d28:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110dd9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::call
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  Object *local_78;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar4 << 8);
      LOCK();
      bVar14 = (char)ObjectDB::spin_lock == '\0';
      if (bVar14) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar14) break;
      local_48 = (Object *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar12[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar13 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110ea4;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110ea4;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar13 & 1) != 0) {
          pcVar13 = *(code **)(pcVar13 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar6 == '\0') {
LAB_00110f2c:
          uVar5 = _LC106;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        else {
          pVVar3 = param_1[2];
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Button::typeinfo,0), lVar10 == 0))
             && (pOVar7 != (Object *)0x0)) goto LAB_00110f2c;
        }
        local_78 = Variant::operator_cast_to_Object_(param_1[2]);
        if (local_78 != (Object *)0x0) {
          local_78 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&Button::typeinfo,0);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar6 == '\0') {
LAB_00110f84:
          uVar5 = _LC104;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        else {
          pVVar3 = param_1[1];
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Control::typeinfo,0), lVar10 == 0))
             && (pOVar7 != (Object *)0x0)) goto LAB_00110f84;
        }
        pOVar7 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar7 != (Object *)0x0) {
          pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar5 = _LC103;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        local_48 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar9 = local_48;
        if (pOVar8 != local_48) {
          if (pOVar8 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_00111049:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                Memory::free_static(pOVar9,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar9 != pOVar8) {
              local_48 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar9 != (Object *)0x0) goto LAB_00111049;
            }
          }
        }
        (*pcVar13)((long *)(lVar1 + lVar2),(String *)&local_48,pOVar7,local_78);
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar7 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_00110ea4;
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
  _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00110ea4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDockManager, void, WindowWrapper*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::call
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_001114c5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_001114c5;
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
LAB_001113d0:
          uVar3 = _LC103;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&WindowWrapper::typeinfo,0),
              lVar7 == 0)) && (pOVar5 != (Object *)0x0)) goto LAB_001113d0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&WindowWrapper::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00111576;
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
LAB_001114c5:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC102,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111576:
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
    if (cVar5 != '\0') goto LAB_0011168b;
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
      if (cVar5 != '\0') goto LAB_0011168b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011178e;
    }
  }
LAB_0011168b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011178e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PopupPanel::is_class(String const&) const */

undefined8 __thiscall PopupPanel::is_class(PopupPanel *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001118ab;
  }
  cVar5 = String::operator==(param_1,"PopupPanel");
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
      if (cVar5 != '\0') goto LAB_001118ab;
    }
    cVar5 = String::operator==(param_1,"Popup");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_001119ae;
    }
  }
LAB_001118ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001119ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::is_class(String const&) const */

undefined8 __thiscall DockContextPopup::is_class(DockContextPopup *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00111abb;
  }
  cVar4 = String::operator==(param_1,"DockContextPopup");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = PopupPanel::is_class((PopupPanel *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00111abb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_00111c2b;
  }
  cVar5 = String::operator==(param_1,"Container");
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
      if (cVar5 != '\0') goto LAB_00111c2b;
    }
    cVar5 = String::operator==(param_1,"Control");
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
        if (cVar5 != '\0') goto LAB_00111c2b;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_00111dce;
      }
    }
  }
LAB_00111c2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111dce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockSplitContainer::is_class(String const&) const */

undefined8 __thiscall DockSplitContainer::is_class(DockSplitContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00111eeb;
  }
  cVar5 = String::operator==(param_1,"DockSplitContainer");
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
      if (cVar5 != '\0') goto LAB_00111eeb;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00111fee;
    }
  }
LAB_00111eeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111fee:
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
              if ((code *)PTR__bind_methods_0011f068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011f058 !=
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
      if ((code *)PTR__bind_methods_0011f060 != Container::_bind_methods) {
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



/* EditorDockManager::~EditorDockManager() */

void __thiscall EditorDockManager::~EditorDockManager(EditorDockManager *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00118738;
  if (*(long *)(this + 0x238) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x238) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x238);
      *(undefined8 *)(this + 0x238) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x1f0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar5) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x1f8) + lVar5) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            if ((bVar7) && (*(long *)((long)pvVar6 + 0x50) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar6 + 0x48) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x48);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if (*(long *)((long)pvVar6 + 0x40) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x40);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x18));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00112729;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_00112729:
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* EditorDockManager::~EditorDockManager() */

void __thiscall EditorDockManager::~EditorDockManager(EditorDockManager *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00118738;
  if (*(long *)(this + 0x238) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x238) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x238);
      *(undefined8 *)(this + 0x238) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x1f0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar5) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x1f8) + lVar5) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            if ((bVar7) && (*(long *)((long)pvVar6 + 0x50) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar6 + 0x48) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x48);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if (*(long *)((long)pvVar6 + 0x40) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x40);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x18));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001129ee;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_001129ee:
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  Object::~Object((Object *)this);
  operator_delete(this,0x248);
  return;
}



/* DockContextPopup::_initialize_classv() */

void DockContextPopup::_initialize_classv(void)

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
    if (PopupPanel::initialize_class()::initialized == '\0') {
      if (Popup::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0011f068 != Node::_bind_methods) {
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
        String::parse_latin1((String *)&local_70,"Popup");
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
        Popup::_bind_methods();
        Popup::initialize_class()::initialized = '\x01';
      }
      local_58 = "Popup";
      local_68 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "PopupPanel";
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
      if ((code *)PTR__bind_methods_0011f070 != Popup::_bind_methods) {
        PopupPanel::_bind_methods();
      }
      PopupPanel::initialize_class()::initialized = '\x01';
    }
    local_58 = "PopupPanel";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "DockContextPopup";
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



/* DockSplitContainer::_initialize_classv() */

void DockSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0011f068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011f058 !=
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
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Container");
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SplitContainer";
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
      if ((code *)PTR__bind_methods_0011f078 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "DockSplitContainer";
    local_70 = 0;
    local_50 = 0x12;
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
              if ((code *)PTR__bind_methods_0011f068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011f058 !=
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
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Container");
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
      if ((code *)PTR__bind_methods_0011f060 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_00113e4f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00113e4f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar5 != '\0') goto LAB_00113fab;
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
      if (cVar5 != '\0') goto LAB_00113fab;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001140ae;
    }
  }
LAB_00113fab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001140ae:
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
    if (cVar5 != '\0') goto LAB_001141bb;
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
      if (cVar5 != '\0') goto LAB_001141bb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001142be;
    }
  }
LAB_001141bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001142be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDockManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void EditorDockManager::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "EditorDockManager";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDockManager";
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
      goto LAB_0011442c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011442c:
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
  StringName::StringName((StringName *)&local_78,"EditorDockManager",false);
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
  local_78 = &_LC74;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC74;
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
      goto LAB_0011467c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011467c:
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_001148e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001148e1:
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
      goto LAB_00114b91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114b91:
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
  if ((code *)PTR__get_property_list_0011f080 != Object::_get_property_list) {
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
      goto LAB_00114e61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114e61:
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
  if ((code *)PTR__get_property_list_0011f088 != CanvasItem::_get_property_list) {
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
      goto LAB_00115131;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115131:
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
      goto LAB_001153e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001153e1:
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
      goto LAB_00115691;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115691:
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
      goto LAB_00115941;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115941:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
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
      goto LAB_00115bf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115bf1:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* DockSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DockSplitContainer::_get_property_listv(DockSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "DockSplitContainer";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DockSplitContainer";
  local_98 = 0;
  local_70 = 0x12;
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
      goto LAB_00115ea1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115ea1:
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
  StringName::StringName((StringName *)&local_78,"DockSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
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
      goto LAB_00116151;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116151:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011f090 != Object::_get_property_list) {
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



/* Popup::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Popup::_get_property_listv(Popup *this,List *param_1,bool param_2)

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
  local_78 = "Popup";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Popup";
  local_98 = 0;
  local_70 = 5;
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
      goto LAB_00116421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116421:
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
  StringName::StringName((StringName *)&local_78,"Popup",false);
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



/* PopupPanel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PopupPanel::_get_property_listv(PopupPanel *this,List *param_1,bool param_2)

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
    Popup::_get_property_listv((Popup *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PopupPanel";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PopupPanel";
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
      goto LAB_001166d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001166d1:
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
  StringName::StringName((StringName *)&local_78,"PopupPanel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Popup::_get_property_listv((Popup *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DockContextPopup::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DockContextPopup::_get_property_listv(DockContextPopup *this,List *param_1,bool param_2)

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
    PopupPanel::_get_property_listv((PopupPanel *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "DockContextPopup";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DockContextPopup";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_00116981;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116981:
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
  StringName::StringName((StringName *)&local_78,"DockContextPopup",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PopupPanel::_get_property_listv((PopupPanel *)this,param_1,true);
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



/* DockContextPopup::_notificationv(int, bool) */

void __thiscall DockContextPopup::_notificationv(DockContextPopup *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    Viewport::_notification(iVar1);
    Window::_notification(iVar1);
    Popup::_notification(iVar1);
    if ((code *)PTR__notification_0011f098 != Popup::_notification) {
      PopupPanel::_notification(iVar1);
    }
    if (param_1 == 0x20) {
      _notification(iVar1);
      return;
    }
    return;
  }
  if (param_1 == 0x20) {
    _notification(iVar1);
    if ((code *)PTR__notification_0011f098 == Popup::_notification) goto LAB_00116b6e;
  }
  else if ((code *)PTR__notification_0011f098 == Popup::_notification) goto LAB_00116b6e;
  PopupPanel::_notification(iVar1);
LAB_00116b6e:
  Popup::_notification(iVar1);
  Window::_notification(iVar1);
  Viewport::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Control*, EditorDockManager::DockInfo, HashMapHasherDefault,
   HashMapComparatorDefault<Control*>, DefaultTypedAllocator<HashMapElement<Control*,
   EditorDockManager::DockInfo> > >::operator[](Control* const&) */

CowData<char32_t> * __thiscall
HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
::operator[](HashMap<Control*,EditorDockManager::DockInfo,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorDockManager::DockInfo>>>
             *this,Control **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  Object *pOVar7;
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
  char cVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined8 *puVar27;
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  Control *pCVar34;
  uint uVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  long in_FS_OFFSET;
  uint local_138;
  CowData<char32_t> *local_118;
  CowData<char32_t> *local_110;
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  long local_d8;
  undefined1 local_d0 [4];
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  long local_a0;
  undefined1 local_98 [16];
  Control *local_88;
  long local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  Object *local_58;
  Object *local_50;
  long local_48;
  long local_40;
  
  pCVar34 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  cVar24 = _lookup_pos(this,(Control **)pCVar34,&local_e8);
  if (cVar24 != '\0') {
    local_110 = (CowData<char32_t> *)(*(long *)(*(long *)(this + 8) + (ulong)local_e8 * 8) + 0x18);
    goto LAB_001173c1;
  }
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_d8 = 0;
  stack0xffffffffffffff32 = SUB1614((undefined1  [16])0x0,2);
  local_d0._0_2_ = 0x100;
  uStack_cc = 0xffffffff;
  _uStack_c8 = 0;
  local_c0._0_12_ = ZEXT412(0xffffffff) << 0x40;
  local_c0._12_4_ = 0;
  local_a0 = 0;
  local_b0 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar33 = (ulong)uVar32;
    uVar25 = uVar33 * 4;
    uVar37 = uVar33 * 8;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar26;
    pvVar28 = (void *)Memory::alloc_static(uVar37,false);
    *(void **)(this + 8) = pvVar28;
    if (uVar32 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar28 + uVar37)) && (pvVar28 < (void *)((long)pvVar4 + uVar25))
         ) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar25 * 4) = 0;
          *(undefined8 *)((long)pvVar28 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar33 != uVar25);
      }
      else {
        memset(pvVar4,0,uVar25);
        memset(pvVar28,0,uVar37);
      }
    }
    pCVar34 = *param_1;
  }
  local_e4 = 0;
  cVar24 = _lookup_pos(this,(Control **)pCVar34,&local_e4);
  if (cVar24 == '\0') {
    if ((float)uVar32 * __LC94 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar32 = *(uint *)(this + 0x28);
      if (uVar32 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_110 = (CowData<char32_t> *)0x18;
        goto LAB_0011735d;
      }
      uVar25 = (ulong)(uVar32 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
      if (uVar32 + 1 < 2) {
        uVar25 = 2;
      }
      uVar32 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      uVar33 = (ulong)uVar32;
      *(int *)(this + 0x28) = (int)uVar25;
      pvVar28 = *(void **)(this + 8);
      uVar25 = uVar33 * 4;
      uVar37 = uVar33 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      __s_00 = (void *)Memory::alloc_static(uVar37,false);
      *(void **)(this + 8) = __s_00;
      if (uVar32 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar37)) && (__s_00 < (void *)((long)__s + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)__s + uVar25 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar33);
        }
        else {
          memset(__s,0,uVar25);
          memset(__s_00,0,uVar37);
        }
      }
      if (uVar3 == 0) {
        pCVar34 = *param_1;
      }
      else {
        uVar25 = 0;
        do {
          uVar32 = *(uint *)((long)pvVar4 + uVar25 * 4);
          if (uVar32 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar39 = 0;
            uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar37 = CONCAT44(0,uVar35);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar32 * lVar6;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar37;
            lVar30 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar5 + lVar30 * 4);
            iVar29 = SUB164(auVar8 * auVar16,8);
            uVar40 = *puVar1;
            uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
            while (uVar40 != 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar40 * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar37;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((uVar35 + iVar29) - SUB164(auVar9 * auVar17,8)) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar37;
              local_138 = SUB164(auVar10 * auVar18,8);
              uVar36 = uVar26;
              if (local_138 < uVar39) {
                *puVar1 = uVar32;
                puVar27 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                uVar36 = *puVar27;
                *puVar27 = uVar26;
                uVar32 = uVar40;
                uVar39 = local_138;
              }
              uVar39 = uVar39 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar29 + 1) * lVar6;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar37;
              lVar30 = SUB168(auVar11 * auVar19,8);
              puVar1 = (uint *)(lVar5 + lVar30 * 4);
              iVar29 = SUB164(auVar11 * auVar19,8);
              uVar26 = uVar36;
              uVar40 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar26;
            *puVar1 = uVar32;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar3);
        Memory::free_static(pvVar28,false);
        Memory::free_static(pvVar4,false);
        pCVar34 = *param_1;
      }
    }
    local_80 = 0;
    local_98 = (undefined1  [16])0x0;
    local_88 = pCVar34;
    if (local_d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d8);
    }
    local_58 = (Object *)0x0;
    local_78 = local_d0._0_2_;
    local_76 = local_d0[2];
    local_74 = uStack_cc;
    local_70 = uStack_c8;
    local_68 = local_c0._0_8_;
    local_60 = local_c0._8_4_;
    if ((Object *)local_b0._0_8_ != (Object *)0x0) {
      local_58 = (Object *)local_b0._0_8_;
      cVar24 = RefCounted::reference();
      if (cVar24 == '\0') {
        local_58 = (Object *)0x0;
      }
    }
    local_50 = (Object *)0x0;
    if ((Object *)local_b0._8_8_ != (Object *)0x0) {
      local_e0 = 0;
      local_50 = (Object *)local_b0._8_8_;
      cVar24 = RefCounted::reference();
      if (cVar24 == '\0') {
        local_50 = (Object *)0x0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e0);
    }
    StringName::StringName((StringName *)&local_48,(StringName *)&local_a0);
    puVar27 = (undefined8 *)operator_new(0x58,"");
    *puVar27 = local_98._0_8_;
    puVar27[1] = local_98._8_8_;
    puVar27[3] = 0;
    puVar27[2] = local_88;
    local_110 = (CowData<char32_t> *)(puVar27 + 3);
    if (local_80 != 0) {
      CowData<char32_t>::_ref(local_110,(CowData *)&local_80);
    }
    puVar27[8] = 0;
    *(undefined2 *)(puVar27 + 4) = local_78;
    *(undefined1 *)((long)puVar27 + 0x22) = local_76;
    *(undefined4 *)((long)puVar27 + 0x24) = local_74;
    *(undefined1 *)(puVar27 + 5) = local_70;
    puVar27[6] = local_68;
    *(undefined4 *)(puVar27 + 7) = local_60;
    if (local_58 != (Object *)0x0) {
      puVar27[8] = local_58;
      cVar24 = RefCounted::reference();
      if (cVar24 == '\0') {
        puVar27[8] = 0;
      }
    }
    puVar27[9] = 0;
    if (local_50 != (Object *)0x0) {
      puVar27[9] = local_50;
      local_e0 = 0;
      cVar24 = RefCounted::reference();
      if (cVar24 == '\0') {
        puVar27[9] = 0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e0);
    }
    StringName::StringName((StringName *)(puVar27 + 10),(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar24 = RefCounted::unreference(), pOVar7 = local_50, cVar24 != '\0')) &&
       (cVar24 = predelete_handler(local_50), cVar24 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar24 = RefCounted::unreference(), pOVar7 = local_58, cVar24 != '\0')) &&
       (cVar24 = predelete_handler(local_58), cVar24 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    puVar38 = *(undefined8 **)(this + 0x20);
    if (puVar38 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar27;
    }
    else {
      *puVar38 = puVar27;
      puVar27[1] = puVar38;
    }
    pCVar34 = *param_1;
    *(undefined8 **)(this + 0x20) = puVar27;
    lVar5 = *(long *)(this + 0x10);
    uVar25 = (long)pCVar34 * 0x3ffff - 1;
    uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
    uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
    uVar25 = uVar25 >> 0x16 ^ uVar25;
    uVar37 = uVar25 & 0xffffffff;
    if ((int)uVar25 == 0) {
      uVar37 = 1;
    }
    uVar40 = 0;
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar35 = (uint)uVar37;
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar25 = CONCAT44(0,uVar32);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar37 * lVar6;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar25;
    lVar31 = SUB168(auVar12 * auVar20,8);
    lVar30 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar31 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    uVar3 = *puVar1;
    while (uVar3 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar3 * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar25;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((iVar29 + uVar32) - SUB164(auVar13 * auVar21,8)) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar25;
      local_138 = SUB164(auVar14 * auVar22,8);
      puVar38 = puVar27;
      if (local_138 < uVar40) {
        *puVar1 = (uint)uVar37;
        uVar37 = (ulong)uVar3;
        puVar2 = (undefined8 *)(lVar30 + lVar31 * 8);
        puVar38 = (undefined8 *)*puVar2;
        *puVar2 = puVar27;
        uVar40 = local_138;
      }
      uVar35 = (uint)uVar37;
      uVar40 = uVar40 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar29 + 1) * lVar6;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar25;
      lVar31 = SUB168(auVar15 * auVar23,8);
      puVar1 = (uint *)(lVar5 + lVar31 * 4);
      iVar29 = SUB164(auVar15 * auVar23,8);
      puVar27 = puVar38;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar30 + lVar31 * 8) = puVar27;
    *puVar1 = uVar35;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar25 = (ulong)local_e4;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar25 * 8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x18),(CowData *)&local_d8);
    pOVar7 = *(Object **)(lVar5 + 0x40);
    *(undefined2 *)(lVar5 + 0x20) = local_d0._0_2_;
    *(undefined1 *)(lVar5 + 0x22) = local_d0[2];
    *(undefined4 *)(lVar5 + 0x24) = uStack_cc;
    *(undefined1 *)(lVar5 + 0x28) = uStack_c8;
    *(undefined8 *)(lVar5 + 0x30) = local_c0._0_8_;
    *(undefined4 *)(lVar5 + 0x38) = local_c0._8_4_;
    if ((Object *)local_b0._0_8_ != pOVar7) {
      *(undefined8 *)(lVar5 + 0x40) = local_b0._0_8_;
      if (((Object *)local_b0._0_8_ != (Object *)0x0) &&
         (cVar24 = RefCounted::reference(), cVar24 == '\0')) {
        *(undefined8 *)(lVar5 + 0x40) = 0;
      }
      if (((pOVar7 != (Object *)0x0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) &&
         (cVar24 = predelete_handler(pOVar7), cVar24 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
    Ref<Texture2D>::operator=((Ref<Texture2D> *)(lVar5 + 0x48),(Ref *)local_b0._8_8_);
    StringName::operator=((StringName *)(lVar5 + 0x50),(StringName *)&local_a0);
    local_110 = (CowData<char32_t> *)(*(long *)(*(long *)(this + 8) + uVar25 * 8) + 0x18);
  }
LAB_0011735d:
  local_118 = (CowData<char32_t> *)&local_d8;
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if ((local_b0._8_8_ != 0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) {
    uVar26 = local_b0._8_8_;
    cVar24 = predelete_handler((Object *)local_b0._8_8_);
    if (cVar24 != '\0') {
      (**(code **)(*(long *)uVar26 + 0x140))(uVar26);
      Memory::free_static((void *)uVar26,false);
    }
  }
  if ((local_b0._0_8_ != 0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) {
    uVar26 = local_b0._0_8_;
    cVar24 = predelete_handler((Object *)local_b0._0_8_);
    if (cVar24 != '\0') {
      (**(code **)(*(long *)uVar26 + 0x140))(uVar26);
      Memory::free_static((void *)uVar26,false);
    }
  }
  CowData<char32_t>::_unref(local_118);
LAB_001173c1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_110;
}



/* CowData<Control*>::_realloc(long) */

undefined8 __thiscall CowData<Control*>::_realloc(CowData<Control*> *this,long param_1)

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
/* Error CowData<Control*>::resize<false>(long) */

undefined8 __thiscall CowData<Control*>::resize<false>(CowData<Control*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_00117a90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00117a90;
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
        goto LAB_001179a1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001179a1:
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



/* CowData<WindowWrapper*>::_realloc(long) */

undefined8 __thiscall CowData<WindowWrapper*>::_realloc(CowData<WindowWrapper*> *this,long param_1)

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
/* Error CowData<WindowWrapper*>::resize<false>(long) */

undefined8 __thiscall
CowData<WindowWrapper*>::resize<false>(CowData<WindowWrapper*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_00117d70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00117d70;
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
        goto LAB_00117c81;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00117c81:
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



/* CowData<DockSplitContainer*>::_realloc(long) */

undefined8 __thiscall
CowData<DockSplitContainer*>::_realloc(CowData<DockSplitContainer*> *this,long param_1)

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
/* Error CowData<DockSplitContainer*>::resize<false>(long) */

undefined8 __thiscall
CowData<DockSplitContainer*>::resize<false>(CowData<DockSplitContainer*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_00118050:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00118050;
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
        goto LAB_00117f61;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00117f61:
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



/* EditorDockManager::singleton */

void EditorDockManager::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_8;
  
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorDockManager::~EditorDockManager() */

void __thiscall EditorDockManager::~EditorDockManager(EditorDockManager *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorDockManager::DockInfo::~DockInfo() */

void __thiscall EditorDockManager::DockInfo::~DockInfo(DockInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DockSplitContainer::~DockSplitContainer() */

void __thiscall DockSplitContainer::~DockSplitContainer(DockSplitContainer *this)

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
/* DockContextPopup::~DockContextPopup() */

void __thiscall DockContextPopup::~DockContextPopup(DockContextPopup *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DockSplitContainer, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockSplitContainer,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockSplitContainer,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void,
   WindowWrapper*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,WindowWrapper*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&, Control*,
   Button*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,Control*,Button*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DockContextPopup, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,TabContainer*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,TabContainer*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDockManager, void, Ref<InputEvent> const&,
   TabContainer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDockManager,void,Ref<InputEvent>const&,TabContainer*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DockContextPopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DockContextPopup, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DockContextPopup,void,Ref<InputEvent>const&> *this)

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



