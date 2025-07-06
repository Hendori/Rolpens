/* TileAtlasView::gui_input(Ref<InputEvent> const&) */

void __thiscall TileAtlasView::gui_input(TileAtlasView *this,Ref *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(this + 0xa08);
  Control::get_global_rect();
  cVar2 = ViewPanner::gui_input(uVar1,param_1);
  if (cVar2 == '\0') {
    return;
  }
  Control::accept_event();
  return;
}



/* TileAtlasView::_draw_background_left() */

void __thiscall TileAtlasView::_draw_background_left(TileAtlasView *this)

{
  Ref *pRVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  pRVar1 = *(Ref **)(this + 0xa68);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_size();
  CanvasItem::draw_texture_rect(pRVar1,this + 0xb20,true,(Color *)0x1,true);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_draw_background_right() */

void __thiscall TileAtlasView::_draw_background_right(TileAtlasView *this)

{
  Ref *pRVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  pRVar1 = *(Ref **)(this + 0xa70);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  Control::get_size();
  CanvasItem::draw_texture_rect(pRVar1,this + 0xb20,true,(Color *)0x1,true);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >::_lookup_pos(int const&, unsigned int&)
   const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
::_lookup_pos(HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar11) -
                           SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* TileAtlasView::_update_theme_item_cache() */

void __thiscall TileAtlasView::_update_theme_item_cache(TileAtlasView *this)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::_update_theme_item_cache();
  if ((_update_theme_item_cache()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  pOVar1 = *(Object **)(this + 0xb18);
  pOVar4 = pOVar1;
  if (local_38 == pOVar1) {
LAB_0010031a:
    if (((pOVar4 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_38, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  else {
    *(Object **)(this + 0xb18) = local_38;
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xb18) = 0;
      }
      pOVar4 = local_38;
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x001003eb;
      }
      goto LAB_0010031a;
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
joined_r0x001003eb:
      pOVar4 = local_38;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), pOVar4 = local_38, cVar2 != '\0'))
      {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        pOVar4 = local_38;
      }
      goto LAB_0010031a;
    }
  }
  if ((_update_theme_item_cache()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  pOVar1 = *(Object **)(this + 0xb20);
  pOVar4 = pOVar1;
  if (local_38 != pOVar1) {
    *(Object **)(this + 0xb20) = local_38;
    if (local_38 == (Object *)0x0) {
      if (pOVar1 == (Object *)0x0) goto LAB_001003b5;
      cVar2 = RefCounted::unreference();
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xb20) = 0;
      }
      pOVar4 = local_38;
      if (pOVar1 == (Object *)0x0) goto LAB_001003a0;
      cVar2 = RefCounted::unreference();
    }
    pOVar4 = local_38;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), pOVar4 = local_38, cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      pOVar4 = local_38;
    }
  }
LAB_001003a0:
  if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
LAB_001003b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileAtlasView::_draw_base_tiles_texture_grid() */

void TileAtlasView::_draw_base_tiles_texture_grid(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long in_RDI;
  Rect2 *pRVar8;
  long in_FS_OFFSET;
  Object *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RDI + 0x9d0) != 0) {
    TileSetAtlasSource::get_texture();
    if (local_c0 != (Object *)0x0) {
      local_b0 = TileSetAtlasSource::get_margins();
      local_a8 = TileSetAtlasSource::get_separation();
      local_a0 = TileSetAtlasSource::get_texture_region_size();
      lVar2 = TileSetAtlasSource::get_atlas_grid_size();
      uVar4 = (uint)((ulong)lVar2 >> 0x20);
      if ((0 < (int)(uint)lVar2) && (uVar4 != 0 && -1 < lVar2)) {
        uVar7 = 0;
        do {
          iVar6 = (int)uVar7;
          uVar5 = 0;
          do {
            while( true ) {
              local_68 = Vector2i::operator+((Vector2i *)&local_a0,(Vector2i *)&local_a8);
              local_78 = CONCAT44(uVar5,iVar6);
              local_58 = Vector2i::operator*((Vector2i *)&local_78,(Vector2i *)&local_68);
              uVar3 = Vector2i::operator+((Vector2i *)&local_b0,(Vector2i *)&local_58);
              local_98 = TileSetAtlasSource::get_tile_at_coords
                                   (*(undefined8 *)(in_RDI + 0x9d0),(ulong)uVar5 << 0x20 | uVar7);
              cVar1 = Vector2i::operator!=
                                ((Vector2i *)&local_98,
                                 (Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS);
              if (cVar1 != '\0') break;
              pRVar8 = *(Rect2 **)(in_RDI + 0xaf0);
              local_68 = __LC13;
              uStack_60 = _UNK_001114a8;
              local_70 = local_a0;
LAB_00100780:
              uVar5 = uVar5 + 1;
              local_78 = uVar3;
              local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_78);
              CanvasItem::draw_rect
                        (pRVar8,(Color *)&local_58,SUB81((Vector2i *)&local_68,0),_LC12,false);
              if (uVar4 == uVar5) goto LAB_001007cd;
            }
            local_58 = CONCAT44(uVar5,iVar6);
            cVar1 = Vector2i::operator==((Vector2i *)&local_98,(Vector2i *)&local_58);
            if (cVar1 != '\0') {
              local_90 = TileSetAtlasSource::get_tile_size_in_atlas
                                   (*(undefined8 *)(in_RDI + 0x9d0),local_98);
              local_b8 = _LC10;
              local_78 = Vector2i::operator-((Vector2i *)&local_90,(Vector2i *)&local_b8);
              local_68 = Vector2i::operator*((Vector2i *)&local_a8,(Vector2i *)&local_78);
              local_80 = Vector2i::operator*((Vector2i *)&local_a0,(Vector2i *)&local_90);
              local_58 = Vector2i::operator+((Vector2i *)&local_80,(Vector2i *)&local_68);
              local_88 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
              pRVar8 = *(Rect2 **)(in_RDI + 0xaf0);
              local_68 = __LC1;
              uStack_60 = _UNK_00111498;
              local_70 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_88);
              goto LAB_00100780;
            }
            uVar5 = uVar5 + 1;
          } while (uVar4 != uVar5);
LAB_001007cd:
          uVar7 = (ulong)(iVar6 + 1U);
        } while ((uint)lVar2 != iVar6 + 1U);
      }
      if (local_c0 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_c0);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
            Memory::free_static(local_c0,false);
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



/* TileAtlasView::_compute_base_tiles_control_size() */

undefined8 __thiscall TileAtlasView::_compute_base_tiles_control_size(TileAtlasView *this)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) != 0) {
    TileSetAtlasSource::get_texture();
    if (local_30 != (Object *)0x0) {
      local_28 = (**(code **)(*(long *)local_30 + 0x1d8))();
      uVar2 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_28);
      if (local_30 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_30);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_30 + 0x140))(local_30);
            Memory::free_static(local_30,false);
          }
        }
      }
      goto LAB_001009ba;
    }
  }
  uVar2 = 0;
LAB_001009ba:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_compute_alternative_tiles_control_size() */

undefined8 __thiscall TileAtlasView::_compute_alternative_tiles_control_size(TileAtlasView *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_48;
  int local_44;
  int local_40;
  
  if (*(long **)(this + 0x9d0) == (long *)0x0) {
    local_44 = 0;
    local_40 = 0;
  }
  else {
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    iVar2 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
    if (0 < iVar2) {
      do {
        uVar5 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),local_48);
        iVar2 = (**(code **)(**(long **)(this + 0x9d0) + 0x280))(*(long **)(this + 0x9d0),uVar5);
        TileSetAtlasSource::get_tile_texture_region(*(undefined8 *)(this + 0x9d0),uVar5,0);
        if (iVar2 < 2) {
          iVar9 = 0;
        }
        else {
          iVar8 = 0;
          iVar9 = 0;
          iVar7 = 1;
          do {
            uVar4 = (**(code **)(**(long **)(this + 0x9d0) + 0x288))
                              (*(long **)(this + 0x9d0),uVar5,iVar7);
            TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),uVar5,uVar4);
            cVar1 = TileData::get_transpose();
            iVar6 = (int)((ulong)extraout_RDX >> 0x20);
            iVar3 = (int)extraout_RDX;
            if (cVar1 == '\0') {
              iVar3 = iVar6;
              iVar6 = (int)extraout_RDX;
            }
            iVar9 = iVar9 + iVar6;
            if (iVar8 < iVar3) {
              iVar8 = iVar3;
            }
            iVar7 = iVar7 + 1;
          } while (iVar2 != iVar7);
          local_40 = local_40 + iVar8;
        }
        if (iVar9 <= local_44) {
          iVar9 = local_44;
        }
        local_48 = local_48 + 1;
        iVar2 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
        local_44 = iVar9;
      } while (local_48 < iVar2);
    }
  }
  return CONCAT44(local_40,local_44);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileAtlasView::_update_zoom_and_panning(bool) [clone .part.0] */

void __thiscall TileAtlasView::_update_zoom_and_panning(TileAtlasView *this,bool param_1)

{
  Vector2 *pVVar1;
  StringName *pSVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char *local_a8;
  Object *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = (float)EditorZoomWidget::get_zoom();
  local_80 = _compute_base_tiles_control_size(this);
  pVVar1 = *(Vector2 **)(this + 0xa78);
  uVar10 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
  local_68[0] = (char *)CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar8,(float)uVar10 * fVar8);
  Control::set_custom_minimum_size(pVVar1);
  local_78 = _compute_alternative_tiles_control_size(this);
  pVVar1 = *(Vector2 **)(this + 0xb00);
  uVar10 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
  local_68[0] = (char *)CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar8,(float)uVar10 * fVar8);
  Control::set_custom_minimum_size(pVVar1);
  TileSetAtlasSource::get_texture();
  if (((int)local_80 < 1) || (local_80._4_4_ < 1)) {
    local_a8 = __LC1;
    local_68[0] = __LC1;
    Control::set_scale(*(Vector2 **)(this + 0xa80));
  }
  else {
    local_68[0] = (char *)CONCAT44(fVar8,fVar8);
    Control::set_scale(*(Vector2 **)(this + 0xa80));
    local_a8 = __LC1;
  }
  if (((int)local_78 < 1) || (local_78._4_4_ < 1)) {
    local_68[0] = local_a8;
    Control::set_scale(*(Vector2 **)(this + 0xb08));
  }
  else {
    local_68[0] = (char *)CONCAT44(fVar8,fVar8);
    Control::set_scale(*(Vector2 **)(this + 0xb08));
  }
  lVar7 = 0;
  local_68[0] = "margin_left";
  local_68[1] = "margin_top";
  local_68[2] = "margin_right";
  local_68[3] = "margin_bottom";
  do {
    pSVar2 = *(StringName **)(this + 0xa40);
    StringName::StringName((StringName *)&local_88,*(char **)((long)local_68 + lVar7 * 2),false);
    Control::add_theme_constant_override(pSVar2,(int)(StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x10);
  pVVar1 = *(Vector2 **)(this + 0xa68);
  local_70 = Control::get_custom_minimum_size();
  bVar6 = SUB81(&local_70,0);
  Control::set_size(pVVar1,bVar6);
  pVVar1 = *(Vector2 **)(this + 0xa70);
  local_70 = Control::get_custom_minimum_size();
  Control::set_size(pVVar1,bVar6);
  if (param_1) {
    uVar11 = Control::get_size();
    uVar10 = _LC19;
    fVar9 = (float)_LC19;
    uVar4 = (ulong)_LC19 >> 0x20;
    uVar12 = CanvasItem::get_local_mouse_position();
    fVar9 = (float)uVar12 - (float)uVar11 * fVar9;
    fVar15 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar11 >> 0x20) * (float)uVar4;
    auVar17._0_4_ = (undefined4)*(undefined8 *)(this + 0x9e0);
    auVar17._4_4_ = auVar17._0_4_;
    auVar17._8_8_ = local_a8;
    auVar14._0_4_ = ((float)*(undefined8 *)(this + 0xa00) - fVar9) * fVar8;
    auVar14._4_4_ = ((float)((ulong)*(undefined8 *)(this + 0xa00) >> 0x20) - fVar15) * fVar8;
    auVar14._8_4_ = (0.0 - ((float)extraout_XMM0_Qb - 0.0)) * 0.0;
    auVar14._12_4_ = (0.0 - ((float)((ulong)extraout_XMM0_Qb >> 0x20) - 0.0)) * 0.0;
    auVar14 = divps(auVar14,auVar17);
    uVar11 = CONCAT44(fVar15 + auVar14._4_4_,fVar9 + auVar14._0_4_);
  }
  else {
    auVar13._4_4_ = fVar8 * (float)((ulong)*(undefined8 *)(this + 0xa00) >> 0x20);
    auVar13._0_4_ = fVar8 * (float)*(undefined8 *)(this + 0xa00);
    auVar16._0_4_ = (undefined4)*(undefined8 *)(this + 0x9e0);
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_8_ = local_a8;
    auVar13._8_8_ = 0;
    auVar14 = divps(auVar13,auVar16);
    uVar11 = auVar14._0_8_;
    uVar10 = _LC19;
  }
  uVar12 = *(undefined8 *)(this + 0x9f0);
  *(undefined8 *)(this + 0xa00) = uVar11;
  Vector2::is_zero_approx();
  BaseButton::set_disabled(SUB81(uVar12,0));
  plVar3 = *(long **)(this + 0x9f8);
  lVar7 = *plVar3;
  *(float *)(this + 0x9e0) = fVar8;
  uVar11 = (**(code **)(lVar7 + 0x2f8))(plVar3);
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa00) >> 0x20) -
                      (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar11 >> 0x20),
                      (float)*(undefined8 *)(this + 0xa00) - (float)uVar10 * (float)uVar11);
  Control::set_begin((Vector2 *)plVar3);
  plVar3 = *(long **)(this + 0x9f8);
  local_70 = (**(code **)(*plVar3 + 0x2f8))(plVar3);
  Control::set_size((Vector2 *)plVar3,bVar6);
  if (local_90 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_90);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_pan_callback(Vector2, Ref<InputEvent>) */

void TileAtlasView::_pan_callback(undefined8 param_1,TileAtlasView *param_2)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(ulong *)(param_2 + 0xa00) =
       CONCAT44((float)((ulong)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_2 + 0xa00) >> 0x20),
                (float)param_1 + (float)*(undefined8 *)(param_2 + 0xa00));
  if (*(long *)(param_2 + 0x9d0) != 0) {
    _update_zoom_and_panning(param_2,true);
  }
  fVar4 = (float)EditorZoomWidget::get_zoom();
  if (_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname
                  ,true);
      __cxa_atexit(StringName::~StringName,
                   &_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname
                         );
    }
  }
  local_a0 = *(undefined8 *)(param_2 + 0xa00);
  Variant::Variant(local_78,fVar4);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)&local_30;
  local_98 = local_78;
  pVStack_90 = local_60;
  (**(code **)(*(long *)param_2 + 0xd0))
            (param_2,&_pan_callback(Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname,
             &local_98,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_zoom_callback(float, Vector2, Ref<InputEvent>) */

void TileAtlasView::_zoom_callback(float param_1,TileAtlasView *param_2)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)EditorZoomWidget::get_zoom();
  EditorZoomWidget::set_zoom(fVar4 * param_1);
  if (*(long *)(param_2 + 0x9d0) != 0) {
    _update_zoom_and_panning(param_2,true);
  }
  fVar4 = (float)EditorZoomWidget::get_zoom();
  if (_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()
                           ::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()
                           ::sname);
    }
  }
  local_a0 = *(undefined8 *)(param_2 + 0xa00);
  Variant::Variant(local_78,fVar4);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)&local_30;
  local_98 = local_78;
  pVStack_90 = local_60;
  (**(code **)(*(long *)param_2 + 0xd0))
            (param_2,&_zoom_callback(float,Vector2,Ref<InputEvent>)::{lambda()#1}::operator()()::
                      sname,&local_98,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_zoom_widget_changed() */

void __thiscall TileAtlasView::_zoom_widget_changed(TileAtlasView *this)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) != 0) {
    _update_zoom_and_panning(this,false);
  }
  fVar4 = (float)EditorZoomWidget::get_zoom();
  if (_zoom_widget_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_zoom_widget_changed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_zoom_widget_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_zoom_widget_changed()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_zoom_widget_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  local_a0 = *(undefined8 *)(this + 0xa00);
  Variant::Variant(local_78,fVar4);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)&local_30;
  local_98 = local_78;
  pVStack_90 = local_60;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_zoom_widget_changed()::{lambda()#1}::operator()()::sname,&local_98,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_center_view() */

void __thiscall TileAtlasView::_center_view(TileAtlasView *this)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined8 local_a0;
  Variant *local_98;
  Variant *pVStack_90;
  Variant local_78 [24];
  Variant local_60 [24];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0xa00) = 0;
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x9f0),0));
  if (*(long *)(this + 0x9d0) != 0) {
    _update_zoom_and_panning(this,false);
  }
  fVar4 = (float)EditorZoomWidget::get_zoom();
  if (_center_view()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_center_view()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_center_view()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_center_view()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_center_view()::{lambda()#1}::operator()()::sname);
    }
  }
  local_a0 = *(undefined8 *)(this + 0xa00);
  Variant::Variant(local_78,fVar4);
  Variant::Variant(local_60,(Vector2 *)&local_a0);
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pVVar3 = (Variant *)&local_30;
  local_98 = local_78;
  pVStack_90 = local_60;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_center_view()::{lambda()#1}::operator()()::sname,&local_98,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_update_zoom_and_panning(bool) */

void __thiscall TileAtlasView::_update_zoom_and_panning(TileAtlasView *this,bool param_1)

{
  if (*(long *)(this + 0x9d0) != 0) {
    _update_zoom_and_panning(this,param_1);
    return;
  }
  return;
}



/* TileAtlasView::_clear_material_canvas_items() */

void __thiscall TileAtlasView::_clear_material_canvas_items(TileAtlasView *this)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(this + 0xaa8);
joined_r0x001016ff:
  if (plVar7 != (long *)0x0) {
    do {
      pOVar4 = (Object *)plVar7[2];
      if ((pOVar4 == (Object *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6);
      }
      else {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), cVar5 != '\0'))
        goto code_r0x00101783;
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) break;
    } while( true );
  }
  if ((*(long *)(this + 0xa98) != 0) && (*(int *)(this + 0xabc) != 0)) {
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xab8)];
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xaa0) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0xaa0) + lVar8) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xa98) + lVar8 * 2);
          if ((*(long *)((long)pvVar2 + 0x10) != 0) &&
             (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
            pOVar4 = *(Object **)((long)pvVar2 + 0x10);
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xa98) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar1 << 2 != lVar8);
    }
    *(undefined4 *)(this + 0xabc) = 0;
    *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  }
  puVar3 = *(undefined8 **)(this + 0xad8);
  do {
    while( true ) {
      if (puVar3 == (undefined8 *)0x0) {
        if ((*(long *)(this + 0xac8) != 0) && (*(int *)(this + 0xaec) != 0)) {
          uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xae8)];
          if (uVar1 != 0) {
            lVar8 = 0;
            do {
              if (*(int *)(*(long *)(this + 0xad0) + lVar8) != 0) {
                *(int *)(*(long *)(this + 0xad0) + lVar8) = 0;
                pvVar2 = *(void **)(*(long *)(this + 0xac8) + lVar8 * 2);
                if ((*(long *)((long)pvVar2 + 0x10) != 0) &&
                   (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
                  pOVar4 = *(Object **)((long)pvVar2 + 0x10);
                  cVar5 = predelete_handler(pOVar4);
                  if (cVar5 != '\0') {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                }
                Memory::free_static(pvVar2,false);
                *(undefined8 *)(*(long *)(this + 0xac8) + lVar8 * 2) = 0;
              }
              lVar8 = lVar8 + 4;
            } while ((ulong)uVar1 << 2 != lVar8);
          }
          *(undefined4 *)(this + 0xaec) = 0;
          *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
        }
        return;
      }
      pOVar4 = (Object *)puVar3[2];
      if ((pOVar4 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 != '\0')) break;
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0x11b0))(plVar7);
LAB_00101897:
      puVar3 = (undefined8 *)*puVar3;
    }
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x11b0))(plVar7);
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar4), cVar5 == '\0')) goto LAB_00101897;
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
code_r0x00101783:
  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
  Memory::free_static(pOVar4,false);
  plVar7 = (long *)*plVar7;
  goto joined_r0x001016ff;
}



/* TileAtlasView::~TileAtlasView() */

void __thiscall TileAtlasView::~TileAtlasView(TileAtlasView *this)

{
  uint uVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00110b68;
  _clear_material_canvas_items(this);
  if (*(long *)(this + 0xb20) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb20);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xb18) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xb18);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pvVar9 = *(void **)(this + 0xac8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xaec) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xae8)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xaec) = 0;
        *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xad0) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xad0) + lVar6) = 0;
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar9 + 0x10);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0xac8);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0xaec) = 0;
        *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00101b3e;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xad0),false);
  }
LAB_00101b3e:
  pvVar9 = *(void **)(this + 0xa98);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xabc) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xab8)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xabc) = 0;
        *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xaa0) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xaa0) + lVar6) = 0;
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar9 + 0x10);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0xa98);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0xabc) = 0;
        *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00101bf6;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xaa0),false);
  }
LAB_00101bf6:
  pvVar9 = *(void **)(this + 0xa18);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xa3c) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xa38)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa20) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xa20) + lVar6) = 0;
            pvVar8 = *(void **)((long)pvVar9 + 0x20);
            if (pvVar8 != (void *)0x0) {
              if (*(int *)((long)pvVar9 + 0x44) != 0) {
                uVar2 = (&hash_table_size_primes)[*(uint *)((long)pvVar9 + 0x40)];
                if (uVar2 == 0) {
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar7 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar9 + 0x28) + lVar7);
                    if (*piVar5 != 0) {
                      *piVar5 = 0;
                      Memory::free_static(*(void **)((long)pvVar8 + lVar7 * 2),false);
                      pvVar8 = *(void **)((long)pvVar9 + 0x20);
                      *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
                    }
                    lVar7 = lVar7 + 4;
                  } while (lVar7 != (ulong)uVar2 * 4);
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar8 == (void *)0x0) goto LAB_00101cf9;
                }
              }
              Memory::free_static(pvVar8,false);
              Memory::free_static(*(void **)((long)pvVar9 + 0x28),false);
            }
LAB_00101cf9:
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0xa18);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa3c) = 0;
        *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00101d3e;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
LAB_00101d3e:
  if (*(long *)(this + 0xa08) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa08);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x9d0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x9d0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x9c8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x9c8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* TileAtlasView::~TileAtlasView() */

void __thiscall TileAtlasView::~TileAtlasView(TileAtlasView *this)

{
  ~TileAtlasView(this);
  operator_delete(this,0xb28);
  return;
}



/* TileAtlasView::get_zoom() const */

void TileAtlasView::get_zoom(void)

{
  EditorZoomWidget::get_zoom();
  return;
}



/* TileAtlasView::set_transform(float, Vector2i) */

void __thiscall TileAtlasView::set_transform(float param_1,TileAtlasView *this,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_3;
  EditorZoomWidget::set_zoom(param_1);
  uVar1 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_10);
  *(undefined8 *)(this + 0xa00) = uVar1;
  if (*(long *)(this + 0x9d0) != 0) {
    _update_zoom_and_panning(this,false);
  }
  return;
}



/* TileAtlasView::set_padding(Side, int) */

void __thiscall TileAtlasView::set_padding(TileAtlasView *this,int param_2,int param_3)

{
  if (-1 < param_3) {
    *(int *)(this + (long)param_2 * 4 + 0xa48) = param_3;
    return;
  }
  _err_print_error("set_padding","editor/plugins/tiles/tile_atlas_view.cpp",0x1fa,
                   "Condition \"p_padding < 0\" is true.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileAtlasView::get_atlas_tile_coords_at_pos(Vector2, bool) const */

undefined8 __thiscall
TileAtlasView::get_atlas_tile_coords_at_pos(undefined8 param_1,TileAtlasView *this,char param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if ((*(long *)(this + 0x9d0) != 0) &&
     (TileSetAtlasSource::get_texture(), uVar2 = TileSetSource::INVALID_ATLAS_COORDS,
     local_78 != (Object *)0x0)) {
    local_68 = TileSetAtlasSource::get_margins();
    local_60 = TileSetAtlasSource::get_separation();
    local_58 = TileSetAtlasSource::get_texture_region_size();
    uVar2 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
    auVar3._0_4_ = (float)param_1 - (float)uVar2;
    auVar3._4_4_ = (float)((ulong)param_1 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
    local_40 = Vector2i::operator+((Vector2i *)&local_58,(Vector2i *)&local_60);
    uVar2 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_40);
    auVar3._8_8_ = 0;
    auVar4._8_4_ = (int)__LC1;
    auVar4._0_8_ = uVar2;
    auVar4._12_4_ = (int)((ulong)__LC1 >> 0x20);
    auVar4 = divps(auVar3,auVar4);
    local_48 = auVar4._0_8_;
    local_38 = Vector2::floor();
    local_50 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_38);
    if (param_3 != '\0') {
      local_48 = TileSetAtlasSource::get_atlas_grid_size();
      local_70 = _LC10;
      local_38 = Vector2i::operator-((Vector2i *)&local_48,(Vector2i *)&local_70);
      local_40 = 0;
      local_50 = Vector2i::clamp((Vector2i *)&local_50,(Vector2i *)&local_40);
    }
    uVar2 = local_50;
    if (((local_78 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_78), cVar1 != '\0')) {
      (**(code **)(*(long *)local_78 + 0x140))(local_78);
      Memory::free_static(local_78,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TileAtlasView::get_alternative_tile_at_pos(Vector2) const */

undefined8 __thiscall
TileAtlasView::get_alternative_tile_at_pos(undefined8 param_1,TileAtlasView *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_60 [4];
  long local_40;
  
  puVar1 = *(undefined8 **)(this + 0xa28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = param_1;
  uVar2 = TileSetSource::INVALID_ATLAS_COORDS;
  do {
    TileSetSource::INVALID_ATLAS_COORDS = uVar2;
    if (puVar1 == (undefined8 *)0x0) {
LAB_0010233b:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar3 = (long *)puVar1[6];
    if (plVar3 != (long *)0x0) {
      do {
        uVar2 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_60);
        if ((*(int *)((long)plVar3 + 0x1c) < 0) || ((int)plVar3[4] < 0)) {
          _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
        }
        if (*(int *)((long)plVar3 + 0x14) <= (int)uVar2) {
          iVar4 = (int)((ulong)uVar2 >> 0x20);
          if ((((int)plVar3[3] <= iVar4) &&
              ((int)uVar2 < *(int *)((long)plVar3 + 0x14) + *(int *)((long)plVar3 + 0x1c))) &&
             (iVar4 < (int)plVar3[3] + (int)plVar3[4])) {
            uVar2 = CONCAT44((int)(float)((ulong)puVar1[2] >> 0x20),(int)(float)puVar1[2]);
            goto LAB_0010233b;
          }
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = TileSetSource::INVALID_ATLAS_COORDS;
  } while( true );
}



/* TileAtlasView::queue_redraw() */

void TileAtlasView::queue_redraw(void)

{
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  CanvasItem::queue_redraw();
  return;
}



/* TileAtlasView::_get_canvas_item_to_draw(TileData const*, CanvasItem const*,
   HashMap<Ref<Material>, RID, HashMapHasherDefault, HashMapComparatorDefault<Ref<Material> >,
   DefaultTypedAllocator<HashMapElement<Ref<Material>, RID> > >&) */

undefined8 __thiscall
TileAtlasView::_get_canvas_item_to_draw
          (TileAtlasView *this,TileData *param_1,CanvasItem *param_2,HashMap *param_3)

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
  char cVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TileData::get_material();
  if (local_48 == (Object *)0x0) {
    uVar16 = *(undefined8 *)(param_2 + 0x428);
  }
  else {
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
      uVar22 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_3 + 0x28)]);
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      uVar13 = (long)local_48 * 0x3ffff - 1;
      uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
      uVar13 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
      uVar13 = uVar13 >> 0x16 ^ uVar13;
      uVar20 = uVar13 & 0xffffffff;
      if ((int)uVar13 == 0) {
        uVar20 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar20 * lVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar22;
      lVar19 = SUB168(auVar3 * auVar7,8);
      uVar21 = *(uint *)(*(long *)(param_3 + 0x10) + lVar19 * 4);
      iVar18 = SUB164(auVar3 * auVar7,8);
      if (uVar21 != 0) {
        uVar23 = 0;
        do {
          if (((uint)uVar20 == uVar21) &&
             (local_48 == *(Object **)(*(long *)(*(long *)(param_3 + 8) + lVar19 * 8) + 0x10))) {
            puVar14 = (undefined8 *)
                      HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
                      ::operator[]((HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
                                    *)param_3,(Ref *)&local_48);
            uVar16 = *puVar14;
            goto LAB_00102617;
          }
          uVar23 = uVar23 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar22;
          lVar19 = SUB168(auVar4 * auVar8,8);
          uVar21 = *(uint *)(*(long *)(param_3 + 0x10) + lVar19 * 4);
          iVar18 = SUB164(auVar4 * auVar8,8);
        } while ((uVar21 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar21 * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar22, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)(uint)(((&hash_table_size_primes)[*(uint *)(param_3 + 0x28)] +
                                             iVar18) - SUB164(auVar5 * auVar9,8)) * lVar1,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar22, uVar23 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    plVar15 = (long *)RenderingServer::get_singleton();
    uVar16 = (**(code **)(*plVar15 + 0xe78))(plVar15);
    plVar15 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar15 + 0xe80))(plVar15,uVar16,*(undefined8 *)(param_2 + 0x428));
    plVar15 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar15 + 0xfc8);
    uVar17 = (**(code **)(*(long *)local_48 + 0x1c0))();
    (*pcVar2)(plVar15,uVar16,uVar17);
    plVar15 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar15 + 0xe88);
    uVar12 = CanvasItem::get_texture_filter_in_tree();
    (*pcVar2)(plVar15,uVar16,uVar12);
    puVar14 = (undefined8 *)
              HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
              ::operator[]((HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
                            *)param_3,(Ref *)&local_48);
    *puVar14 = uVar16;
LAB_00102617:
    if (((local_48 != (Object *)0x0) && (cVar11 = RefCounted::unreference(), cVar11 != '\0')) &&
       (cVar11 = predelete_handler(local_48), cVar11 != '\0')) {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileAtlasView::_draw_base_tiles() */

void __thiscall TileAtlasView::_draw_base_tiles(TileAtlasView *this)

{
  undefined4 uVar1;
  Ref *pRVar2;
  Rect2 *pRVar3;
  CanvasItem *pCVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  Object *pOVar14;
  undefined4 uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  TileData *pTVar23;
  bool bVar24;
  undefined8 extraout_RDX;
  int iVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  int iVar29;
  long in_FS_OFFSET;
  float fVar30;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint uVar31;
  undefined1 auVar32 [16];
  Vector2 *local_148;
  Vector2i *local_138;
  Vector2i *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  Object *local_d8;
  Object *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  auVar13._8_8_ = local_88._8_8_;
  auVar13._0_8_ = local_88._0_8_;
  auVar8._8_8_ = local_58._8_8_;
  auVar8._0_8_ = local_58._0_8_;
  auVar32._8_8_ = local_78._8_8_;
  auVar32._0_8_ = local_78._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x9c8) != 0) &&
     (local_78 = auVar32, local_58 = auVar8, local_88 = auVar13, *(long *)(this + 0x9d0) != 0)) {
    TileSetAtlasSource::get_texture();
    if (local_d8 != (Object *)0x0) {
      local_c8 = TileSetAtlasSource::get_margins();
      local_c0 = TileSetAtlasSource::get_separation();
      local_b8 = TileSetAtlasSource::get_texture_region_size();
      uVar19 = TileSetAtlasSource::get_atlas_grid_size();
      uVar1 = _LC1;
      iVar27 = (int)uVar19;
      iVar18 = (int)((ulong)uVar19 >> 0x20);
      if ((iVar27 < 1) || (iVar18 < 1)) {
        local_108 = _LC12;
        local_118 = __LC35;
        uStack_110 = _UNK_001114b8;
      }
      else {
        iVar29 = 0;
        do {
          iVar25 = 0;
          do {
            while( true ) {
              local_a8 = CONCAT44(iVar25,iVar29);
              local_58._0_8_ =
                   TileSetAtlasSource::get_tile_at_coords(*(undefined8 *)(this + 0x9d0),local_a8);
              cVar16 = Vector2i::operator==
                                 ((Vector2i *)local_58,
                                  (Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS);
              if (cVar16 != '\0') break;
LAB_001027d8:
              iVar25 = iVar25 + 1;
              if (iVar18 == iVar25) goto LAB_00102ab0;
            }
            uVar19 = Vector2i::operator+((Vector2i *)&local_b8,(Vector2i *)&local_c0);
            uVar20 = Vector2i::operator+((Vector2i *)&local_b8,(Vector2i *)&local_c0);
            local_68._0_8_ = uVar20;
            local_58._0_8_ = Vector2i::operator*((Vector2i *)local_68,(Vector2i *)&local_a8);
            local_88._0_8_ = Vector2i::operator+((Vector2i *)local_58,(Vector2i *)&local_c8);
            local_88._8_8_ = uVar19;
            local_98 = (**(code **)(*(long *)local_d8 + 0x1d8))();
            uVar19 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
            local_a0 = 0;
            local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a0);
            local_68._8_8_ = uVar19;
            local_68._0_8_ = local_58._0_8_;
            if ((int)(local_88._8_4_ | local_88._12_4_) < 0) {
LAB_00103400:
              local_58._8_8_ = uVar19;
              _err_print_error("intersects","./core/math/rect2i.h",0x38,
                               "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                               ,0);
              uVar19 = local_58._8_8_;
            }
            else {
              local_58._8_4_ = (undefined4)uVar19;
              local_58._12_4_ = (undefined4)((ulong)uVar19 >> 0x20);
              if ((int)(local_58._8_4_ | local_58._12_4_) < 0) goto LAB_00103400;
            }
            local_58._8_8_ = uVar19;
            iVar17 = local_58._8_4_ + local_58._0_4_;
            if (((int)local_88._0_4_ < iVar17) &&
               ((int)local_58._0_4_ < (int)(local_88._8_4_ + local_88._0_4_))) {
              if (((int)(local_58._12_4_ + local_58._4_4_) <= (int)local_88._4_4_) ||
                 ((int)(local_88._12_4_ + local_88._4_4_) <= (int)local_58._4_4_))
              goto LAB_001033f0;
              local_58._4_4_ = local_88._4_4_;
              if ((int)local_88._4_4_ < (int)local_68._4_4_) {
                local_58._4_4_ = local_68._4_4_;
              }
              local_58._0_4_ = local_68._0_4_;
              if ((int)local_68._0_4_ < (int)local_88._0_4_) {
                local_58._0_4_ = local_88._0_4_;
              }
              uVar20 = Vector2i::operator+((Vector2i *)local_68,(Vector2i *)(local_68 + 8));
              uVar19 = Vector2i::operator+((Vector2i *)local_88,(Vector2i *)(local_88 + 8));
              local_78._4_4_ = (undefined4)((ulong)uVar19 >> 0x20);
              iVar17 = (int)((ulong)uVar20 >> 0x20);
              if (iVar17 < (int)local_78._4_4_) {
                local_78._4_4_ = iVar17;
              }
              if ((int)uVar20 < (int)uVar19) {
                uVar19 = uVar20;
              }
              local_78._0_4_ = (int)uVar19;
              uVar19 = Vector2i::operator-((Vector2i *)local_78,(Vector2i *)local_58);
              local_88._0_8_ = local_58._0_8_;
              local_58._8_8_ = uVar19;
            }
            else {
LAB_001033f0:
              local_88._0_8_ = 0;
              uVar19 = 0;
            }
            local_88._8_8_ = uVar19;
            if (((int)uVar19 < 1) ||
               (local_88._12_4_ = (undefined4)((ulong)uVar19 >> 0x20),
               bVar24 = (int)local_88._12_4_ < 1, bVar24)) goto LAB_001027d8;
            local_58._0_8_ = CONCAT44(uVar1,uVar1);
            local_58._8_8_ = CONCAT44(uVar1,uVar1);
            pRVar2 = *(Ref **)(this + 0xa88);
            iVar25 = iVar25 + 1;
            local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_88);
            auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_88);
            local_78 = auVar32;
            CanvasItem::draw_texture_rect_region
                      (pRVar2,(Rect2 *)&local_d8,(Vector2i *)local_78,(Color *)local_68,
                       SUB81((Vector2i *)local_58,0),false);
          } while (iVar18 != iVar25);
LAB_00102ab0:
          fVar30 = _LC12;
          uVar20 = _UNK_001114b8;
          uVar19 = __LC35;
          iVar29 = iVar29 + 1;
        } while (iVar27 != iVar29);
        iVar29 = 0;
        local_118 = __LC35;
        uStack_110 = _UNK_001114b8;
        local_108 = _LC12;
        do {
          iVar25 = 0;
          do {
            while( true ) {
              local_a8 = CONCAT44(iVar25,iVar29);
              uVar21 = TileSetAtlasSource::get_tile_at_coords
                                 (*(undefined8 *)(this + 0x9d0),local_a8);
              local_58._0_8_ = uVar21;
              cVar16 = Vector2i::operator==
                                 ((Vector2i *)local_58,
                                  (Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS);
              if (cVar16 != '\0') break;
LAB_00102b08:
              iVar25 = iVar25 + 1;
              if (iVar18 == iVar25) goto LAB_00102db0;
            }
            uVar21 = Vector2i::operator+((Vector2i *)&local_b8,(Vector2i *)&local_c0);
            uVar22 = Vector2i::operator+((Vector2i *)&local_b8,(Vector2i *)&local_c0);
            local_68._0_8_ = uVar22;
            local_58._0_8_ = Vector2i::operator*((Vector2i *)local_68,(Vector2i *)&local_a8);
            uVar22 = Vector2i::operator+((Vector2i *)local_58,(Vector2i *)&local_c8);
            local_78._0_8_ = uVar22;
            local_78._8_8_ = uVar21;
            local_98 = (**(code **)(*(long *)local_d8 + 0x1d8))();
            uVar21 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
            local_a0 = 0;
            local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a0);
            local_68._8_8_ = uVar21;
            local_68._0_8_ = local_58._0_8_;
            if ((int)(local_78._8_4_ | local_78._12_4_) < 0) {
LAB_00103448:
              local_58._8_8_ = uVar21;
              _err_print_error("intersects","./core/math/rect2i.h",0x38,
                               "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                               ,0);
              uVar21 = local_58._8_8_;
            }
            else {
              local_58._8_4_ = (undefined4)uVar21;
              local_58._12_4_ = (undefined4)((ulong)uVar21 >> 0x20);
              if ((int)(local_58._8_4_ | local_58._12_4_) < 0) goto LAB_00103448;
            }
            local_58._8_8_ = uVar21;
            iVar17 = local_58._8_4_ + local_58._0_4_;
            if (((int)local_78._0_4_ < iVar17) &&
               ((int)local_58._0_4_ < (int)(local_78._8_4_ + local_78._0_4_))) {
              if (((int)(local_58._12_4_ + local_58._4_4_) <= (int)local_78._4_4_) ||
                 ((int)(local_78._12_4_ + local_78._4_4_) <= (int)local_58._4_4_))
              goto LAB_00103438;
              local_58._4_4_ = local_78._4_4_;
              if ((int)local_78._4_4_ < (int)local_68._4_4_) {
                local_58._4_4_ = local_68._4_4_;
              }
              local_58._0_4_ = local_68._0_4_;
              if ((int)local_68._0_4_ < (int)local_78._0_4_) {
                local_58._0_4_ = local_78._0_4_;
              }
              uVar22 = Vector2i::operator+((Vector2i *)local_68,(Vector2i *)(local_68 + 8));
              uVar21 = Vector2i::operator+((Vector2i *)local_78,(Vector2i *)(local_78 + 8));
              local_88._4_4_ = (undefined4)((ulong)uVar21 >> 0x20);
              iVar17 = (int)((ulong)uVar22 >> 0x20);
              if (iVar17 < (int)local_88._4_4_) {
                local_88._4_4_ = iVar17;
              }
              if ((int)uVar22 < (int)uVar21) {
                uVar21 = uVar22;
              }
              local_88._0_4_ = (int)uVar21;
              uVar21 = Vector2i::operator-((Vector2i *)local_88,(Vector2i *)local_58);
              local_78._0_8_ = local_58._0_8_;
              local_58._8_8_ = uVar21;
            }
            else {
LAB_00103438:
              local_78._0_8_ = 0;
              uVar21 = 0;
            }
            auVar12._8_8_ = uVar21;
            auVar12._0_8_ = local_78._0_8_;
            local_78._8_8_ = uVar21;
            if (((int)uVar21 < 1) ||
               (local_78._12_4_ = (undefined4)((ulong)uVar21 >> 0x20),
               bVar24 = (int)local_78._12_4_ < 1, local_78 = auVar12, bVar24)) goto LAB_00102b08;
            iVar25 = iVar25 + 1;
            pRVar3 = *(Rect2 **)(this + 0xa88);
            local_68._8_8_ = uVar20;
            local_68._0_8_ = uVar19;
            local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_78);
            CanvasItem::draw_rect
                      (pRVar3,(Color *)local_58,SUB81((Vector2i *)local_68,0),fVar30,true);
          } while (iVar18 != iVar25);
LAB_00102db0:
          iVar29 = iVar29 + 1;
        } while (iVar27 != iVar29);
      }
      local_128 = (Vector2i *)&local_98;
      local_138 = (Vector2i *)local_78;
      local_148 = (Vector2 *)local_68;
      uVar15 = local_c8._4_4_;
      local_90 = 0;
      local_98 = 0;
      fVar30 = (float)(**(code **)(*(long *)local_d8 + 0x1d8))();
      local_58._0_8_ = CONCAT44(uVar15,(int)fVar30);
      local_90 = Vector2i::operator-((Vector2i *)local_58,local_128);
      local_58._0_8_ = CONCAT44(uVar1,uVar1);
      local_58._8_8_ = CONCAT44(uVar1,uVar1);
      pRVar2 = *(Ref **)(this + 0xa88);
      local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      uVar20 = 0x102e58;
      auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      uVar19 = 0;
      bVar28 = SUB81((Vector2i *)local_58,0);
      local_78 = auVar32;
      CanvasItem::draw_texture_rect_region
                (pRVar2,(Rect2 *)&local_d8,local_138,(Color *)local_148,bVar28,false);
      pRVar3 = *(Rect2 **)(this + 0xa88);
      local_68._0_8_ = local_118;
      local_68._8_8_ = uStack_110;
      local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      bVar24 = SUB81(local_148,0);
      CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
      uVar26 = (local_c0._4_4_ + local_b8._4_4_) * iVar18 + local_c8._4_4_;
      (**(code **)(*(long *)local_d8 + 0x1d8))();
      if ((float)(int)uVar26 < extraout_XMM0_Db) {
        local_98 = (ulong)uVar26 << 0x20;
        local_68._0_8_ =
             (**(code **)(*(long *)local_d8 + 0x1d8))(local_d8,uVar20,extraout_RDX,uVar19);
        uVar19 = Vector2::operator_cast_to_Vector2i(local_148);
        local_58._0_8_ = uVar19;
        local_90 = Vector2i::operator-((Vector2i *)local_58,local_128);
        local_58._0_8_ = CONCAT44(uVar1,uVar1);
        local_58._8_8_ = CONCAT44(uVar1,uVar1);
        pRVar2 = *(Ref **)(this + 0xa88);
        local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        local_78 = auVar32;
        CanvasItem::draw_texture_rect_region
                  (pRVar2,(Rect2 *)&local_d8,local_138,(Color *)local_148,bVar28,false);
        pRVar3 = *(Rect2 **)(this + 0xa88);
        local_68._0_8_ = local_118;
        local_68._8_8_ = uStack_110;
        local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
      }
      local_98 = (ulong)local_c8._4_4_ << 0x20;
      local_58._0_8_ =
           CONCAT44((local_c0._4_4_ + local_b8._4_4_) * iVar18 + local_c8._4_4_,(int)local_c8);
      local_90 = Vector2i::operator-((Vector2i *)local_58,local_128);
      local_58._0_8_ = CONCAT44(uVar1,uVar1);
      local_58._8_8_ = CONCAT44(uVar1,uVar1);
      pRVar2 = *(Ref **)(this + 0xa88);
      local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      local_78 = auVar32;
      CanvasItem::draw_texture_rect_region
                (pRVar2,(Rect2 *)&local_d8,local_138,(Color *)local_148,bVar28,false);
      pRVar3 = *(Rect2 **)(this + 0xa88);
      local_68._8_8_ = uStack_110;
      local_68._0_8_ = local_118;
      local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
      CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
      iVar27 = ((uint)local_c0 + (int)local_b8) * iVar27 + (int)local_c8;
      fVar30 = (float)(**(code **)(*(long *)local_d8 + 0x1d8))();
      if ((float)iVar27 < fVar30) {
        local_98 = CONCAT44(local_c8._4_4_,iVar27);
        iVar27 = (local_c0._4_4_ + local_b8._4_4_) * iVar18 + local_c8._4_4_;
        fVar30 = (float)(**(code **)(*(long *)local_d8 + 0x1d8))();
        local_58._4_4_ = iVar27;
        local_58._0_4_ = (int)fVar30;
        local_90 = Vector2i::operator-((Vector2i *)local_58,local_128);
        local_58._0_8_ = CONCAT44(uVar1,uVar1);
        local_58._8_8_ = CONCAT44(uVar1,uVar1);
        pRVar2 = *(Ref **)(this + 0xa88);
        local_68 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        local_78 = auVar32;
        CanvasItem::draw_texture_rect_region
                  (pRVar2,(Rect2 *)&local_d8,local_138,(Color *)local_148,bVar28,false);
        pRVar3 = *(Rect2 **)(this + 0xa88);
        local_68._8_8_ = uStack_110;
        local_68._0_8_ = local_118;
        local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_128);
        CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
      }
      iVar27 = 0;
      while( true ) {
        iVar18 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
        auVar9._8_8_ = local_88._8_8_;
        auVar9._0_8_ = local_88._0_8_;
        if (iVar18 <= iVar27) break;
        uVar19 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),iVar27);
        pCVar4 = *(CanvasItem **)(this + 0xa88);
        local_78._0_8_ = uVar19;
        pTVar23 = (TileData *)
                  TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),uVar19,0);
        iVar18 = 0;
        uVar19 = _get_canvas_item_to_draw(this,pTVar23,pCVar4,(HashMap *)(this + 0xa90));
        while( true ) {
          iVar29 = TileSetAtlasSource::get_tile_animation_frames_count
                             (*(undefined8 *)(this + 0x9d0),local_78._0_8_);
          if (iVar29 <= iVar18) break;
          auVar32 = TileSetAtlasSource::get_tile_texture_region
                              (*(undefined8 *)(this + 0x9d0),local_78._0_8_,iVar18);
          local_58 = auVar32;
          TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),local_78._0_8_,0);
          uVar20 = TileData::get_texture_origin();
          local_68._0_8_ = uVar20;
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_148);
          auVar32 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_58);
          local_d0 = (Object *)0x0;
          uVar1 = *(undefined4 *)(this + 0x9d8);
          local_88._0_8_ =
               CONCAT44(auVar32._12_4_ * _LC19._4_4_ + auVar32._4_4_ + extraout_XMM0_Db_00,
                        auVar32._8_4_ * (float)_LC19 + auVar32._0_4_ + extraout_XMM0_Da);
          if (*(Object **)(this + 0x9c8) != (Object *)0x0) {
            local_d0 = *(Object **)(this + 0x9c8);
            cVar16 = RefCounted::reference();
            if (cVar16 == '\0') {
              local_d0 = (Object *)0x0;
            }
          }
          TileMapLayer::draw_tile
                    (0x3f8000003f800000,0x3f8000003f800000,0,uVar19,local_88,&local_d0,uVar1,
                     local_138,0,iVar18,0);
          if (local_d0 != (Object *)0x0) {
            cVar16 = RefCounted::unreference();
            pOVar14 = local_d0;
            if (cVar16 != '\0') {
              cVar16 = predelete_handler(local_d0);
              if (cVar16 != '\0') {
                (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
                Memory::free_static(pOVar14,false);
              }
            }
          }
          iVar18 = iVar18 + 1;
        }
        iVar27 = iVar27 + 1;
      }
      iVar27 = 0;
      if ((0 < (int)(uint)local_c0) || (iVar27 = 0, local_88 = auVar9, 0 < (int)local_c0._4_4_)) {
        while( true ) {
          iVar18 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
          auVar9 = local_88;
          if (iVar18 <= iVar27) break;
          iVar18 = 0;
          uVar19 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),iVar27)
          ;
          auVar5 = local_58;
          while( true ) {
            local_58 = auVar5;
            iVar29 = TileSetAtlasSource::get_tile_animation_frames_count
                               (*(undefined8 *)(this + 0x9d0));
            if (iVar29 <= iVar18) break;
            auVar32 = TileSetAtlasSource::get_tile_texture_region
                                (*(undefined8 *)(this + 0x9d0),uVar19,iVar18);
            local_88 = auVar32;
            auVar5 = local_58;
            if (0 < (int)(uint)local_c0) {
              local_88._12_4_ = auVar32._12_4_;
              uVar26 = (uint)local_c0;
              uVar31 = local_88._12_4_;
              local_58._0_8_ = auVar32._8_8_ & 0xffffffff;
              uVar20 = Vector2i::operator+((Vector2i *)local_88,(Vector2i *)local_58);
              local_78._0_8_ = uVar20;
              local_78._8_4_ = uVar26;
              local_78._12_4_ = uVar31;
              local_a8 = (**(code **)(*(long *)local_d8 + 0x1d8))();
              uVar20 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
              local_b0 = 0;
              local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
              local_68._8_8_ = uVar20;
              local_68._0_8_ = local_58._0_8_;
              if ((int)(local_78._8_4_ | local_78._12_4_) < 0) {
LAB_001039d8:
                local_58._8_8_ = uVar20;
                _err_print_error("intersects","./core/math/rect2i.h",0x38,
                                 "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                                 ,0,0);
                uVar20 = local_58._8_8_;
              }
              else {
                local_58._8_4_ = (undefined4)uVar20;
                local_58._12_4_ = (undefined4)((ulong)uVar20 >> 0x20);
                if ((int)(local_58._8_4_ | local_58._12_4_) < 0) goto LAB_001039d8;
              }
              local_58._8_8_ = uVar20;
              iVar29 = local_58._8_4_ + local_58._0_4_;
              if (((int)local_78._0_4_ < iVar29) &&
                 ((int)local_58._0_4_ < (int)(local_78._8_4_ + local_78._0_4_))) {
                if (((int)(local_58._12_4_ + local_58._4_4_) <= (int)local_78._4_4_) ||
                   ((int)(local_78._12_4_ + local_78._4_4_) <= (int)local_58._4_4_))
                goto LAB_001039c8;
                local_58._4_4_ = local_78._4_4_;
                if ((int)local_78._4_4_ < (int)local_68._4_4_) {
                  local_58._4_4_ = local_68._4_4_;
                }
                local_58._0_4_ = local_68._0_4_;
                if ((int)local_68._0_4_ < (int)local_78._0_4_) {
                  local_58._0_4_ = local_78._0_4_;
                }
                uVar21 = Vector2i::operator+((Vector2i *)local_148,(Vector2i *)(local_68 + 8));
                uVar20 = Vector2i::operator+(local_138,(Vector2i *)(local_78 + 8));
                iVar29 = (int)((ulong)uVar20 >> 0x20);
                iVar25 = (int)((ulong)uVar21 >> 0x20);
                if (iVar25 < iVar29) {
                  iVar29 = iVar25;
                }
                if ((int)uVar21 < (int)uVar20) {
                  uVar20 = uVar21;
                }
                local_a0 = CONCAT44(iVar29,(int)uVar20);
                uVar20 = Vector2i::operator-((Vector2i *)&local_a0,(Vector2i *)local_58);
                local_78._0_8_ = local_58._0_8_;
                local_58._8_8_ = uVar20;
              }
              else {
LAB_001039c8:
                local_78._0_8_ = 0;
                uVar20 = 0;
              }
              auVar10._8_8_ = uVar20;
              auVar10._0_8_ = local_78._0_8_;
              local_78._8_8_ = uVar20;
              auVar7._8_8_ = local_58._8_8_;
              auVar7._0_8_ = local_58._0_8_;
              auVar5._8_8_ = local_58._8_8_;
              auVar5._0_8_ = local_58._0_8_;
              if ((0 < (int)uVar20) &&
                 (local_78._12_4_ = (undefined4)((ulong)uVar20 >> 0x20),
                 bVar28 = 0 < (int)local_78._12_4_, auVar5 = auVar7, local_78 = auVar10, bVar28)) {
                local_68._8_8_ = uStack_110;
                local_68._0_8_ = local_118;
                pRVar3 = *(Rect2 **)(this + 0xa88);
                local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_138);
                CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
                auVar5 = local_58;
              }
            }
            local_58._8_8_ = auVar5._8_8_;
            uVar20 = local_88._8_8_;
            if (0 < (int)local_c0._4_4_) {
              uVar26 = (uint)local_c0 + local_88._8_4_;
              uVar31 = local_c0._4_4_;
              local_58._0_8_ = uVar20 & 0xffffffff00000000;
              uVar20 = Vector2i::operator+((Vector2i *)local_88,(Vector2i *)local_58);
              local_78._0_8_ = uVar20;
              local_78._8_4_ = uVar26;
              local_78._12_4_ = uVar31;
              local_a8 = (**(code **)(*(long *)local_d8 + 0x1d8))();
              uVar20 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
              local_b0 = 0;
              local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
              local_68._8_8_ = uVar20;
              local_68._0_8_ = local_58._0_8_;
              if ((int)(local_78._8_4_ | local_78._12_4_) < 0) {
LAB_00103a10:
                local_58._8_8_ = uVar20;
                _err_print_error("intersects","./core/math/rect2i.h",0x38,
                                 "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                                 ,0,0);
                uVar20 = local_58._8_8_;
              }
              else {
                local_58._8_4_ = (undefined4)uVar20;
                local_58._12_4_ = (undefined4)((ulong)uVar20 >> 0x20);
                if ((int)(local_58._8_4_ | local_58._12_4_) < 0) goto LAB_00103a10;
              }
              local_58._8_8_ = uVar20;
              iVar29 = local_58._8_4_ + local_58._0_4_;
              if (((int)local_78._0_4_ < iVar29) &&
                 ((int)local_58._0_4_ < (int)(local_78._8_4_ + local_78._0_4_))) {
                if (((int)(local_58._12_4_ + local_58._4_4_) <= (int)local_78._4_4_) ||
                   ((int)(local_78._12_4_ + local_78._4_4_) <= (int)local_58._4_4_))
                goto LAB_001039b8;
                local_58._4_4_ = local_78._4_4_;
                if ((int)local_78._4_4_ < (int)local_68._4_4_) {
                  local_58._4_4_ = local_68._4_4_;
                }
                local_58._0_4_ = local_68._0_4_;
                if ((int)local_68._0_4_ < (int)local_78._0_4_) {
                  local_58._0_4_ = local_78._0_4_;
                }
                uVar21 = Vector2i::operator+((Vector2i *)local_148,(Vector2i *)(local_68 + 8));
                uVar20 = Vector2i::operator+(local_138,(Vector2i *)(local_78 + 8));
                iVar29 = (int)((ulong)uVar20 >> 0x20);
                iVar25 = (int)((ulong)uVar21 >> 0x20);
                if (iVar25 < iVar29) {
                  iVar29 = iVar25;
                }
                if ((int)uVar21 < (int)uVar20) {
                  uVar20 = uVar21;
                }
                local_a0 = CONCAT44(iVar29,(int)uVar20);
                uVar20 = Vector2i::operator-((Vector2i *)&local_a0,(Vector2i *)local_58);
                local_78._0_8_ = local_58._0_8_;
                local_58._8_8_ = uVar20;
              }
              else {
LAB_001039b8:
                local_78._0_8_ = 0;
                uVar20 = 0;
              }
              auVar11._8_8_ = uVar20;
              auVar11._0_8_ = local_78._0_8_;
              local_78._8_8_ = uVar20;
              auVar6._8_8_ = local_58._8_8_;
              auVar6._0_8_ = local_58._0_8_;
              auVar5._8_8_ = local_58._8_8_;
              auVar5._0_8_ = local_58._0_8_;
              if ((0 < (int)uVar20) &&
                 (local_78._12_4_ = (undefined4)((ulong)uVar20 >> 0x20),
                 bVar28 = 0 < (int)local_78._12_4_, auVar5 = auVar6, local_78 = auVar11, bVar28)) {
                local_68._8_8_ = uStack_110;
                local_68._0_8_ = local_118;
                pRVar3 = *(Rect2 **)(this + 0xa88);
                local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_138);
                CanvasItem::draw_rect(pRVar3,(Color *)local_58,bVar24,local_108,true);
                auVar5 = local_58;
              }
            }
            iVar18 = iVar18 + 1;
          }
          iVar27 = iVar27 + 1;
        }
      }
      local_88 = auVar9;
      if (local_d8 != (Object *)0x0) {
        cVar16 = RefCounted::unreference();
        if (cVar16 != '\0') {
          cVar16 = predelete_handler(local_d8);
          if (cVar16 != '\0') {
            (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
            Memory::free_static(local_d8,false);
          }
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



/* TileAtlasView::_draw_alternatives() */

void __thiscall TileAtlasView::_draw_alternatives(TileAtlasView *this)

{
  undefined4 uVar1;
  int iVar2;
  Object *pOVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  TileData *pTVar8;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  int iVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  undefined8 uVar14;
  float local_d8;
  float local_d4;
  Object *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x9c8) != 0) && (*(long *)(this + 0x9d0) != 0)) {
    iVar10 = 0;
    TileSetAtlasSource::get_texture();
    local_d4 = 0.0;
    if (local_80 != (Object *)0x0) {
      for (; iVar6 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))(), iVar10 < iVar6;
          iVar10 = iVar10 + 1) {
        local_60 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),iVar10)
        ;
        TileSetAtlasSource::get_tile_texture_region(*(undefined8 *)(this + 0x9d0),local_60,0);
        local_70 = extraout_RDX;
        iVar6 = (**(code **)(**(long **)(this + 0x9d0) + 0x280))();
        if (1 < iVar6) {
          iVar11 = 1;
          iVar12 = 0;
          local_d8 = 0.0;
          do {
            uVar7 = (**(code **)(**(long **)(this + 0x9d0) + 0x288))
                              (*(long **)(this + 0x9d0),local_60,iVar11);
            pTVar8 = (TileData *)
                     TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),local_60,uVar7)
            ;
            cVar5 = TileData::get_transpose();
            uVar9 = _get_canvas_item_to_draw
                              (this,pTVar8,*(CanvasItem **)(this + 0xb10),(HashMap *)(this + 0xac0))
            ;
            local_58 = 0;
            if (cVar5 == '\0') {
              local_48 = TileData::get_texture_origin();
              uVar13 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
              local_50 = Vector2i::operator/((Vector2i *)&local_70,2);
              uVar14 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
              local_68 = CONCAT44(local_d4 + (float)((ulong)uVar14 >> 0x20) +
                                  (float)((ulong)uVar13 >> 0x20),
                                  local_d8 + (float)uVar14 + (float)uVar13);
              local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
              if (iVar12 < local_70._4_4_) {
                iVar12 = local_70._4_4_;
              }
            }
            else {
              local_48 = TileData::get_texture_origin();
              uVar13 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
              local_50 = CONCAT44((float)(int)local_70 * _LC19._4_4_ + local_d4 +
                                  (float)((ulong)uVar13 >> 0x20),
                                  (float)(int)((ulong)local_70 >> 0x20) * (float)_LC19 + local_d8 +
                                  (float)uVar13);
              local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
              if (iVar12 < (int)local_70) {
                iVar12 = (int)local_70;
              }
            }
            uVar1 = *(undefined4 *)(this + 0x9d8);
            local_78 = (Object *)0x0;
            if ((*(Object **)(this + 0x9c8) != (Object *)0x0) &&
               (local_78 = *(Object **)(this + 0x9c8), cVar4 = RefCounted::reference(),
               cVar4 == '\0')) {
              local_78 = (Object *)0x0;
            }
            local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
            TileMapLayer::draw_tile
                      (0x3f8000003f800000,0x3f8000003f800000,0,uVar9,(Vector2i *)&local_48,&local_78
                       ,uVar1,&local_60,uVar7,0xffffffffffffffff,0);
            if (((local_78 != (Object *)0x0) &&
                (cVar4 = RefCounted::unreference(), pOVar3 = local_78, cVar4 != '\0')) &&
               (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
            if (cVar5 == '\0') {
              iVar2 = (int)local_70;
            }
            else {
              iVar2 = local_70._4_4_;
            }
            local_d8 = (float)iVar2 + local_d8;
            iVar11 = iVar11 + 1;
          } while (iVar6 != iVar11);
          local_d4 = (float)iVar12 + local_d4;
        }
      }
      if (((local_80 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileAtlasView::_draw_base_tiles_shape_grid() */

void __thiscall TileAtlasView::_draw_base_tiles_shape_grid(TileAtlasView *this)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_e0;
  int local_cc;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  auVar9._8_8_ = local_68._8_8_;
  auVar9._0_8_ = local_68._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x9c8) != 0) && (local_68 = auVar9, *(long *)(this + 0x9d0) != 0)) {
    local_90 = 0;
    local_88 = (Object *)0x108cf0;
    local_80 = 0x1f;
    String::parse_latin1((StrRange *)&local_90);
    _EDITOR_GET((String_conflict *)&local_58);
    auVar9 = Variant::operator_cast_to_Color((Variant *)&local_58);
    uVar7 = auVar9._8_8_;
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_78 = TileSet::get_tile_size();
    local_cc = 0;
    while( true ) {
      iVar4 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
      if (iVar4 <= local_cc) break;
      uVar6 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),local_cc);
      TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),uVar6,0);
      local_58 = TileData::get_texture_origin();
      uVar8 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
      uVar1 = *(undefined8 *)(this + 0x9d0);
      Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
      local_58 = Vector2i::operator-((Vector2i *)&local_78);
      Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
      cVar3 = TileSetAtlasSource::is_rect_in_tile_texture_region(uVar1,uVar6,0);
      if (cVar3 != '\0') {
        iVar4 = 0;
        while( true ) {
          iVar5 = TileSetAtlasSource::get_tile_animation_frames_count
                            (*(undefined8 *)(this + 0x9d0),uVar6);
          if (iVar5 <= iVar4) break;
          uVar7 = uVar7 & 0xffffffff;
          local_e0 = auVar9._12_4_;
          if (iVar4 != 0) {
            local_e0 = (float)((double)local_e0 * __LC44);
          }
          auVar10 = TileSetAtlasSource::get_tile_texture_region
                              (*(undefined8 *)(this + 0x9d0),uVar6,iVar4);
          local_58 = 0x3f800000;
          uStack_50 = 0x3f80000000000000;
          local_48 = 0;
          local_68 = auVar10;
          auVar10 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_68);
          local_48 = CONCAT44(auVar10._12_4_ * _LC19._4_4_ + auVar10._4_4_ +
                              (float)((ulong)uVar8 >> 0x20),
                              auVar10._8_4_ * (float)_LC19 + auVar10._0_4_ + (float)uVar8);
          local_70 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
          Transform2D::set_scale((String_conflict *)&local_58);
          local_88 = (Object *)0x0;
          TileSet::draw_tile_shape
                    (auVar9._0_8_,(ulong)(uint)local_e0 << 0x20 | uVar7,
                     *(undefined8 *)(this + 0x9c8),*(undefined8 *)(this + 0xaf8),0,&local_88,in_R8,
                     in_R9,local_58,uStack_50,local_48);
          if (local_88 != (Object *)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_88;
            if (cVar3 != '\0') {
              cVar3 = predelete_handler(local_88);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          iVar4 = iVar4 + 1;
        }
      }
      local_cc = local_cc + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_base_tiles_root_control_gui_input(Ref<InputEvent> const&) */

void __thiscall TileAtlasView::_base_tiles_root_control_gui_input(TileAtlasView *this,Ref *param_1)

{
  undefined4 uVar1;
  String_conflict *pSVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  CowData<char32_t> local_a0 [8];
  String_conflict local_98 [8];
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float local_68;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) != 0) {
    pSVar2 = *(String_conflict **)(this + 0xa78);
    local_90 = 0;
    local_88 = &_LC32;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    Control::set_tooltip_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (*(long *)param_1 != 0) {
      pOVar4 = (Object *)
               __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0)
      ;
      if (pOVar4 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 != '\0') {
          (**(code **)(**(long **)(this + 0xa80) + 0x290))((Vector2i *)local_58);
          Transform2D::affine_inverse();
          uVar5 = InputEventMouse::get_position();
          local_58[0] = get_atlas_tile_coords_at_pos
                                  ((TileAtlasView *)
                                   ((float)((ulong)uVar5 >> 0x20) * local_70 +
                                    (float)uVar5 * local_78 + local_68),this,0);
          cVar3 = Vector2i::operator!=
                            ((Vector2i *)local_58,(Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS);
          if (cVar3 != '\0') {
            local_58[0] = TileSetAtlasSource::get_tile_at_coords
                                    (*(undefined8 *)(this + 0x9d0),local_58[0]);
            cVar3 = Vector2i::operator!=
                              ((Vector2i *)local_58,(Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS
                              );
            if (cVar3 != '\0') {
              pSVar2 = *(String_conflict **)(this + 0xa78);
              uVar1 = *(undefined4 *)(this + 0x9d8);
              local_90 = 0;
              String::parse_latin1((String_conflict *)&local_90,"");
              local_88 = (undefined *)0x0;
              String::parse_latin1
                        ((String_conflict *)&local_88,
                         "Source: %d\nAtlas coordinates: %s\nAlternative: 0");
              TTR(local_98,(String_conflict *)&local_88);
              vformat<int,Vector2i>(local_a0,local_98,uVar1,local_58[0]);
              Control::set_tooltip_text(pSVar2);
              CowData<char32_t>::_unref(local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            }
          }
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar4);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                Memory::free_static(pOVar4,false);
                return;
              }
              goto LAB_001046e1;
            }
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001046e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_alternative_tiles_root_control_gui_input(Ref<InputEvent> const&) */

void __thiscall
TileAtlasView::_alternative_tiles_root_control_gui_input(TileAtlasView *this,Ref *param_1)

{
  undefined4 uVar1;
  String_conflict *pSVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_80;
  float local_78;
  float local_70;
  float local_68;
  undefined8 local_58;
  int local_50;
  long local_40;
  
  pSVar2 = *(String_conflict **)(this + 0xb00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_98 = &_LC32;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (((*(long *)param_1 != 0) &&
      (pOVar4 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0
                              ), pOVar4 != (Object *)0x0)) &&
     (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    (**(code **)(**(long **)(this + 0xb08) + 0x290))(&local_58);
    Transform2D::affine_inverse();
    uVar5 = InputEventMouse::get_position();
    auVar6 = get_alternative_tile_at_pos
                       ((TileAtlasView *)
                        ((float)((ulong)uVar5 >> 0x20) * local_70 + (float)uVar5 * local_78 +
                        local_68),this);
    local_80 = auVar6._0_8_;
    local_58 = local_80;
    local_50 = auVar6._8_4_;
    cVar3 = Vector2i::operator!=
                      ((Vector2i *)&local_80,(Vector2i *)&TileSetSource::INVALID_ATLAS_COORDS);
    if ((cVar3 == '\0') || ((int)TileSetSource::INVALID_TILE_ALTERNATIVE == auVar6._8_4_)) {
      cVar3 = RefCounted::unreference();
    }
    else {
      pSVar2 = *(String_conflict **)(this + 0xb00);
      uVar1 = *(undefined4 *)(this + 0x9d8);
      local_a8 = 0;
      String::parse_latin1((String_conflict *)&local_a8,"");
      local_b0 = 0;
      String::parse_latin1
                ((String_conflict *)&local_b0,"Source: %d\nAtlas coordinates: %s\nAlternative: %d");
      TTR((String_conflict *)&local_a0,(String_conflict *)&local_b0);
      vformat<int,Vector2i,int>
                ((CowData<char32_t> *)&local_98,(StrRange *)&local_a0,uVar1,local_80,
                 auVar6._8_8_ & 0xffffffff);
      Control::set_tooltip_text(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_0010496a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010496a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_notification(int) */

void __thiscall TileAtlasView::_notification(TileAtlasView *this,int param_1)

{
  undefined8 uVar1;
  Viewport *pVVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  String_conflict *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Button::set_button_icon(*(Ref **)(this + 0x9f0));
      return;
    }
    goto LAB_00104c3f;
  }
  if (param_1 == 10000) {
    pSVar6 = (String_conflict *)EditorSettings::get_singleton();
    local_80 = 0;
    String::parse_latin1((String_conflict *)&local_80,"editors/panning");
    cVar4 = EditorSettings::check_changed_settings_in_group(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar4 != '\0') goto LAB_001049bb;
  }
  else if (param_1 == 10) {
LAB_001049bb:
    uVar1 = *(undefined8 *)(this + 0xa08);
    local_80 = 0;
    String::parse_latin1((String_conflict *)&local_80,"editors/panning/simple_panning");
    _EDITOR_GET((String_conflict *)local_58);
    bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
    local_90 = 0;
    String::parse_latin1((String_conflict *)&local_90,"canvas_item_editor/pan_view");
    ED_GET_SHORTCUT((String_conflict *)&local_88);
    local_98 = 0;
    String::parse_latin1((String_conflict *)&local_98,"editors/panning/sub_editors_panning_scheme");
    _EDITOR_GET((String_conflict *)local_78);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_78);
    ViewPanner::setup(uVar1,iVar5,(String_conflict *)&local_88,bVar3);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (((local_88 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    pVVar2 = *(Viewport **)(this + 0xa08);
    local_80 = 0;
    String::parse_latin1((String_conflict *)&local_80,"editors/panning/warped_mouse_panning");
    _EDITOR_GET((String_conflict *)local_58);
    Variant::operator_cast_to_bool((Variant *)local_58);
    ViewPanner::setup_warped_panning(pVVar2,SUB81(*(undefined8 *)(this + 600),0));
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c3f:
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



/* TileAtlasView::TileAtlasView() */

void __thiscall TileAtlasView::TileAtlasView(TileAtlasView *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  String_conflict *pSVar4;
  long lVar5;
  StringName *pSVar6;
  Object *pOVar7;
  char cVar8;
  Panel *this_00;
  EditorZoomWidget *this_01;
  Button *this_02;
  CallableCustom *pCVar9;
  CenterContainer *this_03;
  Label *pLVar10;
  MarginContainer *this_04;
  BoxContainer *pBVar11;
  BoxContainer *this_05;
  Control *pCVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  float fVar14;
  Object *local_90;
  ViewPanner *local_88;
  long local_70;
  undefined8 local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00110b68;
  uVar13 = (undefined4)TileSet::INVALID_SOURCE;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined4 *)(this + 0x9d8) = uVar13;
  *(undefined8 *)(this + 0x9dc) = 0x3f80000000000000;
  uVar1 = _LC53;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa38) = uVar1;
  *(undefined8 *)(this + 0xab8) = uVar1;
  *(undefined8 *)(this + 0xae8) = uVar1;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xb20) = 0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb10) = (undefined1  [16])0x0;
  CanvasItem::set_texture_filter(this,1);
  this_00 = (Panel *)operator_new(0x9d0,"");
  Panel::Panel(this_00);
  postinitialize_handler((Object *)this_00);
  Control::set_clip_contents(SUB81(this_00,0));
  Control::set_mouse_filter(this_00,2);
  Control::set_anchors_and_offsets_preset(this_00,0xf,0,0);
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  this_01 = (EditorZoomWidget *)operator_new(0xa38,"");
  EditorZoomWidget::EditorZoomWidget(this_01);
  postinitialize_handler((Object *)this_01);
  *(EditorZoomWidget **)(this + 0x9e8) = this_01;
  uVar13 = 0;
  Node::add_child(this,this_01,0,0);
  uVar1 = *(undefined8 *)(this + 0x9e8);
  fVar14 = (float)EditorScale::get_scale();
  Control::set_anchors_and_offsets_preset(uVar1,0,0,CONCAT44(uVar13,(int)(fVar14 + fVar14)));
  plVar2 = *(long **)(this + 0x9e8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_zoom_widget_changed");
  Callable::unbind((int)(Callable *)local_68);
  StringName::StringName((StringName *)&local_70,"zoom_changed",false);
  (*pcVar3)(plVar2,(StringName *)&local_70,(Callable *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  EditorZoomWidget::set_shortcut_context(*(Node **)(this + 0x9e8));
  this_02 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(this_02,(String_conflict *)local_58);
  postinitialize_handler((Object *)this_02);
  *(Button **)(this + 0x9f0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x9f0),1,0,5);
  Control::set_grow_direction_preset(*(undefined8 *)(this + 0x9f0),1);
  plVar2 = *(long **)(this + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,(_func_void *)"&TileAtlasView::_center_view");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0x9f0),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0x9f0),0));
  pSVar4 = *(String_conflict **)(this + 0x9f0);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String_conflict *)local_68,"Center View");
  TTR((String_conflict *)&local_70,(String_conflict *)local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(this,*(undefined8 *)(this + 0x9f0),0,0);
  local_88 = (ViewPanner *)operator_new(0x1c8,"");
  ViewPanner::ViewPanner(local_88);
  postinitialize_handler((Object *)local_88);
  cVar8 = RefCounted::init_ref();
  local_90 = *(Object **)(this + 0xa08);
  if (cVar8 == '\0') {
    if (local_90 == (Object *)0x0) goto LAB_00105230;
    *(undefined8 *)(this + 0xa08) = 0;
    cVar8 = RefCounted::unreference();
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_90);
      local_88 = (ViewPanner *)0x0;
      if (cVar8 != '\0') {
LAB_0010603b:
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
        pOVar7 = (Object *)local_88;
        if (local_88 != (ViewPanner *)0x0) goto LAB_00105fab;
      }
    }
  }
  else {
    pOVar7 = local_90;
    if (local_88 != (ViewPanner *)local_90) {
      *(ViewPanner **)(this + 0xa08) = local_88;
      cVar8 = RefCounted::reference();
      pOVar7 = (Object *)local_88;
      if (cVar8 == '\0') {
        *(undefined8 *)(this + 0xa08) = 0;
        if (local_90 != (Object *)0x0) {
          cVar8 = RefCounted::unreference();
joined_r0x00106014:
          if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_90), cVar8 != '\0'))
          goto LAB_0010603b;
        }
      }
      else if (local_90 != (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        goto joined_r0x00106014;
      }
    }
LAB_00105fab:
    local_88 = (ViewPanner *)pOVar7;
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler((Object *)local_88), cVar8 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
      local_90 = *(Object **)(this + 0xa08);
      goto LAB_00105230;
    }
  }
  local_90 = *(Object **)(this + 0xa08);
LAB_00105230:
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC32;
  *(TileAtlasView **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_00110ff0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(code **)(pCVar9 + 0x38) = _zoom_callback;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "TileAtlasView::_zoom_callback";
  Callable::Callable((Callable *)local_58,pCVar9);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC32;
  *(TileAtlasView **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_00110f60;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(code **)(pCVar9 + 0x38) = _pan_callback;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "TileAtlasView::_pan_callback";
  Callable::Callable((Callable *)local_68,pCVar9);
  ViewPanner::set_callbacks(local_90,(Callable *)local_68,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  ViewPanner::set_enable_rmb(SUB81(*(undefined8 *)(this + 0xa08),0));
  this_03 = (CenterContainer *)operator_new(0xa08,"");
  CenterContainer::CenterContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(CenterContainer **)(this + 0x9f8) = this_03;
  Control::set_mouse_filter(this_03,2);
  Control::set_anchors_preset(*(undefined8 *)(this + 0x9f8),8,1);
  plVar2 = *(long **)(this + 0x9f8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView,Ref<InputEvent>const&>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&TileAtlasView::gui_input");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar2 = *(long **)(this + 0x9f8);
  lVar5 = *(long *)(this + 0xa08);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC32;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_00111110;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  *(long *)(pCVar9 + 0x28) = lVar5;
  *(undefined8 *)(pCVar9 + 0x30) = uVar1;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(code **)(pCVar9 + 0x38) = ViewPanner::release_pan_key;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "ViewPanner::release_pan_key";
  Callable::Callable((Callable *)local_58,pCVar9);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xe0,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Control::set_focus_mode(*(undefined8 *)(this + 0x9f8),1);
  Node::add_child(this_00,*(undefined8 *)(this + 0x9f8),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xa60) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar4 = *(String_conflict **)(this + 0xa60);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1
            ((String_conflict *)local_68,
             "The selected atlas source has no valid texture. Assign a texture in the TileSet bottom tab."
            );
  TTR((String_conflict *)&local_70,(String_conflict *)local_68);
  Label::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0x9f8),*(undefined8 *)(this + 0xa60),0,0);
  this_04 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_04);
  postinitialize_handler((Object *)this_04);
  *(MarginContainer **)(this + 0xa40) = this_04;
  Control::set_mouse_filter(this_04,2);
  Node::add_child(*(undefined8 *)(this + 0x9f8),*(undefined8 *)(this + 0xa40),0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,false);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_00110478;
  postinitialize_handler((Object *)pBVar11);
  *(BoxContainer **)(this + 0xa58) = pBVar11;
  Control::set_mouse_filter(pBVar11,2);
  pSVar6 = *(StringName **)(this + 0xa58);
  StringName::StringName((StringName *)local_58,"separation",false);
  Control::add_theme_constant_override(pSVar6,(int)(TileAtlasView *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xa40),*(undefined8 *)(this + 0xa58),0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,true);
  pBVar11[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar11 = &PTR__initialize_classv_001107f0;
  postinitialize_handler((Object *)pBVar11);
  Control::set_mouse_filter(pBVar11,2);
  Node::add_child(*(undefined8 *)(this + 0xa58),pBVar11,0,0);
  this_05 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_05,true);
  this_05[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_05 = &PTR__initialize_classv_001107f0;
  postinitialize_handler((Object *)this_05);
  Control::set_mouse_filter(this_05,2);
  Node::add_child(*(undefined8 *)(this + 0xa58),this_05,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_mouse_filter(pLVar10,1);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String_conflict *)local_68,"Base Tiles");
  TTR((String_conflict *)&local_70,(String_conflict *)local_68);
  Label::set_text((String_conflict *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar10,1);
  Node::add_child(pBVar11,pLVar10,0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xa78) = pCVar12;
  Control::set_mouse_filter(pCVar12,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa78),3);
  plVar2 = *(long **)(this + 0xa78);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView,Ref<InputEvent>const&>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&TileAtlasView::_base_tiles_root_control_gui_input");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xa78),0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xa68) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa68),0,0,0);
  (**(code **)(**(long **)(this + 0xa68) + 0x2d0))(*(long **)(this + 0xa68),2);
  plVar2 = *(long **)(this + 0xa68);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_draw_background_left");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa68),0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xa80) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  (**(code **)(**(long **)(this + 0xa80) + 0x2c8))(*(long **)(this + 0xa80),1);
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa80),0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xa88) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa88),0xf,0,0);
  plVar2 = *(long **)(this + 0xa88);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,(_func_void *)"&TileAtlasView::_draw_base_tiles"
            );
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa80),*(undefined8 *)(this + 0xa88),0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xaf0) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xaf0),0xf,0,0);
  plVar2 = *(long **)(this + 0xaf0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_draw_base_tiles_texture_grid");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa80),*(undefined8 *)(this + 0xaf0),0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xaf8) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xaf8),0xf,0,0);
  plVar2 = *(long **)(this + 0xaf8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_draw_base_tiles_shape_grid");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xa80),*(undefined8 *)(this + 0xaf8),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  Label::Label(pLVar10,(String_conflict *)local_58);
  postinitialize_handler((Object *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_mouse_filter(pLVar10,2);
  local_58[0] = 0;
  String::parse_latin1((String_conflict *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String_conflict *)local_68,"Alternative Tiles");
  TTR((String_conflict *)&local_70,(String_conflict *)local_68);
  Label::set_text((String_conflict *)pLVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Label::set_horizontal_alignment(pLVar10,1);
  Node::add_child(this_05,pLVar10,0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xb00) = pCVar12;
  Control::set_mouse_filter(pCVar12,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xb00),3);
  plVar2 = *(long **)(this + 0xb00);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView,Ref<InputEvent>const&>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void_Ref_ptr *)"&TileAtlasView::_alternative_tiles_root_control_gui_input");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this_05,*(undefined8 *)(this + 0xb00),0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xa70) = pCVar12;
  Control::set_mouse_filter(pCVar12);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa70),0,0,0);
  (**(code **)(**(long **)(this + 0xa70) + 0x2d0))(*(long **)(this + 0xa70),2);
  plVar2 = *(long **)(this + 0xa70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_draw_background_right");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xb00),*(undefined8 *)(this + 0xa70),0,0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xb08) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  (**(code **)(**(long **)(this + 0xb08) + 0x2c8))(*(long **)(this + 0xb08),1);
  Node::add_child(*(undefined8 *)(this + 0xb00),*(undefined8 *)(this + 0xb08),0);
  pCVar12 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar12);
  postinitialize_handler((Object *)pCVar12);
  *(Control **)(this + 0xb10) = pCVar12;
  Control::set_mouse_filter(pCVar12,2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xb10),0xf,0,0);
  plVar2 = *(long **)(this + 0xb10);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<TileAtlasView>
            ((TileAtlasView *)local_58,(char *)this,
             (_func_void *)"&TileAtlasView::_draw_alternatives");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 8,(TileAtlasView *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(this + 0xb08),*(undefined8 *)(this + 0xb10),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_bind_methods() */

void TileAtlasView::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  PropertyInfo local_148 [48];
  undefined4 local_118 [2];
  CowData local_110 [8];
  StringName local_108 [8];
  undefined4 local_100;
  CowData local_f8 [8];
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
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
  local_158 = 0;
  local_160 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_b8 = "scroll";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_168);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,5,(StrRange *)&local_168,0,(StrRange *)&local_160,6,
             &local_158);
  local_b8 = "";
  local_170 = 0;
  local_178 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_180 = 0;
  local_b8 = "zoom";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_180);
  PropertyInfo::PropertyInfo
            (local_148,3,(StrRange *)&local_180,0,(StrRange *)&local_178,6,&local_170);
  local_150 = 0;
  local_b8 = "transform_changed";
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_150);
  local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_150);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118[0]);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "TileAtlasView";
  local_188 = 0;
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_e8,(String_conflict *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  PropertyInfo::~PropertyInfo(local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileAtlasView::get_alternative_tile_rect(Vector2i, int) */

undefined8 __thiscall
TileAtlasView::get_alternative_tile_rect(TileAtlasView *this,undefined8 param_2,uint param_3)

{
  HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
  *this_00;
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
  *this_01;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  long local_40;
  
  this_00 = (HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
             *)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = param_3;
  local_60 = param_2;
  local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
  local_50[0] = 0;
  cVar11 = HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
           ::_lookup_pos(this_00,(Vector2 *)&local_48,(uint *)local_50);
  if (cVar11 == '\0') {
    local_58 = 0;
    String::parse_latin1((String_conflict *)&local_58,"No cached rect for tile coords:%s");
    vformat<Vector2i>((CowData<char32_t> *)local_50,(String_conflict *)&local_58,local_60);
    pcVar16 = 
    "Condition \"!alternative_tiles_rect_cache.has(p_coords)\" is true. Returning: Rect2i()";
    uVar19 = 0x248;
  }
  else {
    local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
    lVar13 = HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
             ::operator[](this_00,(Vector2 *)&local_48);
    uVar10 = local_64;
    if ((*(long *)(lVar13 + 8) != 0) && (*(int *)(lVar13 + 0x2c) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar13 + 0x28) * 8);
      uVar12 = (local_64 >> 0x10 ^ local_64) * -0x7a143595;
      uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
      uVar20 = uVar12 ^ uVar12 >> 0x10;
      if (uVar12 == uVar12 >> 0x10) {
        uVar20 = 1;
        uVar15 = uVar1;
      }
      else {
        uVar15 = uVar20 * uVar1;
      }
      uVar21 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar13 + 0x28)]);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar21;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar18 = SUB168(auVar2 * auVar6,8);
      uVar12 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar18 * 4);
      iVar17 = SUB164(auVar2 * auVar6,8);
      if (uVar12 != 0) {
        uVar22 = 0;
        do {
          if ((uVar20 == uVar12) &&
             (local_64 == *(uint *)(*(long *)(*(long *)(lVar13 + 8) + lVar18 * 8) + 0x10))) {
            local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
            this_01 = (HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                       *)HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
                         ::operator[](this_00,(Vector2 *)&local_48);
            puVar14 = (undefined8 *)
                      HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                      ::operator[](this_01,(int *)&local_64);
            uVar19 = *puVar14;
            goto LAB_00106795;
          }
          uVar22 = uVar22 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (iVar17 + 1) * uVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar21;
          lVar18 = SUB168(auVar3 * auVar7,8);
          uVar12 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar18 * 4);
          iVar17 = SUB164(auVar3 * auVar7,8);
        } while ((uVar12 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = uVar12 * uVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar21, auVar5._8_8_ = 0,
                auVar5._0_8_ = (uint)(((&hash_table_size_primes)[*(uint *)(lVar13 + 0x28)] + iVar17)
                                     - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar21, uVar22 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    local_58 = 0;
    String::parse_latin1
              ((String_conflict *)&local_58,"No cached rect for tile coords:%s alternative_id:%d");
    vformat<Vector2i,int>
              ((CowData<char32_t> *)local_50,(String_conflict *)&local_58,local_60,uVar10);
    pcVar16 = 
    "Condition \"!alternative_tiles_rect_cache[p_coords].has(p_alternative_tile)\" is true. Returning: Rect2i()"
    ;
    uVar19 = 0x249;
  }
  _err_print_error("get_alternative_tile_rect","editor/plugins/tiles/tile_atlas_view.cpp",uVar19,
                   pcVar16,(CowData<char32_t> *)local_50,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  uVar19 = 0;
LAB_00106795:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileAtlasView::_update_alternative_tiles_rect_cache() [clone .part.0] */

void __thiscall TileAtlasView::_update_alternative_tiles_rect_cache(TileAtlasView *this)

{
  HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
  *this_00;
  void *pvVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
  *pHVar5;
  undefined8 *puVar6;
  int iVar8;
  int *piVar9;
  undefined8 extraout_RDX;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long in_FS_OFFSET;
  undefined8 uVar20;
  int local_8c;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong uVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
             *)(this + 0xa10);
  if ((*(long *)(this + 0xa18) != 0) && (*(int *)(this + 0xa3c) != 0)) {
    lVar19 = 0;
    uVar13 = (&hash_table_size_primes)[*(uint *)(this + 0xa38)];
    if (uVar13 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xa20) + lVar19) != 0) {
          *(int *)(*(long *)(this + 0xa20) + lVar19) = 0;
          pvVar1 = *(void **)(*(long *)(this + 0xa18) + lVar19 * 2);
          pvVar14 = *(void **)((long)pvVar1 + 0x20);
          if (pvVar14 != (void *)0x0) {
            if (*(int *)((long)pvVar1 + 0x44) != 0) {
              uVar4 = (&hash_table_size_primes)[*(uint *)((long)pvVar1 + 0x40)];
              if (uVar4 == 0) {
                *(undefined4 *)((long)pvVar1 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar1 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar11 = 0;
                do {
                  piVar9 = (int *)(*(long *)((long)pvVar1 + 0x28) + lVar11);
                  if (*piVar9 != 0) {
                    *piVar9 = 0;
                    Memory::free_static(*(void **)((long)pvVar14 + lVar11 * 2),false);
                    pvVar14 = *(void **)((long)pvVar1 + 0x20);
                    *(undefined8 *)((long)pvVar14 + lVar11 * 2) = 0;
                  }
                  lVar11 = lVar11 + 4;
                } while ((ulong)uVar4 * 4 - lVar11 != 0);
                *(undefined4 *)((long)pvVar1 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar1 + 0x30) = (undefined1  [16])0x0;
                if (pvVar14 == (void *)0x0) goto LAB_001069e3;
              }
            }
            Memory::free_static(pvVar14,false);
            Memory::free_static(*(void **)((long)pvVar1 + 0x28),false);
          }
LAB_001069e3:
          Memory::free_static(pvVar1,false);
          *(undefined8 *)(*(long *)(this + 0xa18) + lVar19 * 2) = 0;
        }
        lVar19 = lVar19 + 4;
      } while ((ulong)uVar13 * 4 != lVar19);
    }
    *(undefined4 *)(this + 0xa3c) = 0;
    *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  }
  local_8c = 0;
  iVar18 = 0;
  do {
    iVar3 = (**(code **)(**(long **)(this + 0x9d0) + 0x268))();
    if (iVar3 <= iVar18) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_50 = (**(code **)(**(long **)(this + 0x9d0) + 0x270))(*(long **)(this + 0x9d0),iVar18);
    iVar3 = (**(code **)(**(long **)(this + 0x9d0) + 0x280))(*(long **)(this + 0x9d0),local_50);
    TileSetAtlasSource::get_tile_texture_region(*(undefined8 *)(this + 0x9d0),local_50,0);
    if (1 < iVar3) {
      iVar15 = 0;
      iVar16 = 0;
      iVar10 = 1;
      iVar8 = (int)((ulong)extraout_RDX >> 0x20);
      do {
        local_58[0] = (**(code **)(**(long **)(this + 0x9d0) + 0x288))
                                (*(long **)(this + 0x9d0),local_50,iVar10);
        TileSetAtlasSource::get_tile_data(*(undefined8 *)(this + 0x9d0),local_50,local_58[0]);
        cVar2 = TileData::get_transpose();
        iVar12 = (int)extraout_RDX;
        iVar17 = iVar8;
        if (cVar2 == '\0') {
          iVar12 = iVar8;
          iVar17 = (int)extraout_RDX;
        }
        uVar20 = CONCAT44(local_8c,iVar16);
        local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
        local_58[1] = 0;
        cVar2 = HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
                ::_lookup_pos(this_00,(Vector2 *)&local_48,(uint *)(local_58 + 1));
        if (cVar2 == '\0') {
          local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
          pHVar5 = (HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                    *)HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
                      ::operator[](this_00,(Vector2 *)&local_48);
          uVar13 = *(uint *)(pHVar5 + 0x28);
          if (*(int *)(pHVar5 + 0x2c) == 0) {
            uVar4 = (&hash_table_size_primes)[uVar13];
LAB_00106c20:
            if (0x16 < uVar4) goto LAB_00106b4d;
          }
          else {
            uVar4 = (&hash_table_size_primes)[uVar13];
            if (*(long *)(pHVar5 + 8) == 0) goto LAB_00106c20;
            lVar19 = 0;
            if (uVar4 != 0) {
              do {
                if (*(int *)(*(long *)(pHVar5 + 0x10) + lVar19) != 0) {
                  *(int *)(*(long *)(pHVar5 + 0x10) + lVar19) = 0;
                  Memory::free_static(*(void **)(*(long *)(pHVar5 + 8) + lVar19 * 2),false);
                  *(undefined8 *)(*(long *)(pHVar5 + 8) + lVar19 * 2) = 0;
                }
                lVar19 = lVar19 + 4;
              } while (lVar19 != (ulong)uVar4 << 2);
              uVar13 = *(uint *)(pHVar5 + 0x28);
              *(undefined4 *)(pHVar5 + 0x2c) = 0;
              *(undefined1 (*) [16])(pHVar5 + 0x18) = (undefined1  [16])0x0;
              uVar4 = (&hash_table_size_primes)[uVar13];
              goto LAB_00106c20;
            }
            *(undefined4 *)(pHVar5 + 0x2c) = 0;
            *(undefined1 (*) [16])(pHVar5 + 0x18) = (undefined1  [16])0x0;
          }
          if (uVar13 != 0x1c) {
            uVar7 = (ulong)uVar13;
            do {
              uVar4 = (int)uVar7 + 1;
              uVar7 = (ulong)uVar4;
              if (0x16 < (uint)(&hash_table_size_primes)[uVar7]) {
                if (uVar4 != uVar13) {
                  if (*(long *)(pHVar5 + 8) == 0) {
                    *(uint *)(pHVar5 + 0x28) = uVar4;
                  }
                  else {
                    HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                    ::_resize_and_rehash(pHVar5,uVar4);
                  }
                }
                goto LAB_00106b4d;
              }
            } while (uVar4 != 0x1c);
          }
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_00106b4d:
        iVar16 = iVar16 + iVar17;
        local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
        pHVar5 = (HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                  *)HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
                    ::operator[](this_00,(Vector2 *)&local_48);
        puVar6 = (undefined8 *)
                 HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                 ::operator[](pHVar5,local_58);
        if (iVar15 < iVar12) {
          iVar15 = iVar12;
        }
        iVar10 = iVar10 + 1;
        *puVar6 = uVar20;
        puVar6[1] = CONCAT44(iVar12,iVar17);
      } while (iVar3 != iVar10);
      local_8c = local_8c + iVar15;
    }
    iVar18 = iVar18 + 1;
  } while( true );
}



/* TileAtlasView::_update_alternative_tiles_rect_cache() */

void __thiscall TileAtlasView::_update_alternative_tiles_rect_cache(TileAtlasView *this)

{
  if (*(long *)(this + 0x9d0) != 0) {
    _update_alternative_tiles_rect_cache(this);
    return;
  }
  return;
}



/* TileAtlasView::set_atlas_source(TileSet*, TileSetAtlasSource*, int) */

void __thiscall
TileAtlasView::set_atlas_source
          (TileAtlasView *this,TileSet *param_1,TileSetAtlasSource *param_2,int param_3)

{
  Vector2 *pVVar1;
  TileSetAtlasSource *pTVar2;
  TileSetAtlasSource *pTVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  TileSetAtlasSource *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TileSet *)0x0) {
    pOVar7 = *(Object **)(this + 0x9c8);
joined_r0x0010721a:
    if (pOVar7 != (Object *)0x0) {
      *(undefined8 *)(this + 0x9c8) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        param_1 = (TileSet *)0x0;
        cVar4 = predelete_handler(pOVar7);
        if (cVar4 != '\0') goto LAB_001072c3;
      }
    }
LAB_00106e6e:
    if (param_2 != (TileSetAtlasSource *)0x0) goto LAB_00106e77;
LAB_001070e0:
    pOVar7 = *(Object **)(this + 0x9d0);
joined_r0x001070ea:
    if (pOVar7 != (Object *)0x0) {
      *(undefined8 *)(this + 0x9d0) = 0;
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  else {
    cVar4 = RefCounted::init_ref();
    pOVar7 = *(Object **)(this + 0x9c8);
    if (cVar4 == '\0') goto joined_r0x0010721a;
    if (param_1 != (TileSet *)pOVar7) {
      *(TileSet **)(this + 0x9c8) = param_1;
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') {
        if (pOVar7 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          goto joined_r0x00107183;
        }
        goto LAB_0010709b;
      }
      *(undefined8 *)(this + 0x9c8) = 0;
      if (pOVar7 == (Object *)0x0) goto LAB_0010709b;
      cVar4 = RefCounted::unreference();
joined_r0x00107183:
      if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar7), cVar4 == '\0')) goto LAB_0010709b;
LAB_001072c3:
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
      if (param_1 == (TileSet *)0x0) goto LAB_00106e6e;
    }
LAB_0010709b:
    cVar4 = RefCounted::unreference();
    if ((cVar4 == '\0') || (cVar4 = predelete_handler((Object *)param_1), cVar4 == '\0'))
    goto LAB_00106e6e;
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    if (param_2 == (TileSetAtlasSource *)0x0) goto LAB_001070e0;
LAB_00106e77:
    cVar4 = RefCounted::init_ref();
    pOVar7 = *(Object **)(this + 0x9d0);
    if (cVar4 == '\0') goto joined_r0x001070ea;
    if (param_2 != (TileSetAtlasSource *)pOVar7) {
      *(TileSetAtlasSource **)(this + 0x9d0) = param_2;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x9d0) = 0;
      }
      if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)param_2), cVar4 != '\0')) {
      (**(code **)(*(long *)param_2 + 0x140))(param_2);
      Memory::free_static(param_2,false);
    }
  }
  _clear_material_canvas_items(this);
  if (*(long *)(this + 0x9c8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (param_3 < 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x1d3;
      pcVar5 = "Condition \"p_source_id < 0\" is true.";
LAB_00107312:
      _err_print_error("set_atlas_source","editor/plugins/tiles/tile_atlas_view.cpp",uVar6,pcVar5,0,
                       0);
      return;
    }
  }
  else {
    TileSet::get_source((int)&local_58);
    pTVar2 = local_58;
    if (((local_58 != (TileSetAtlasSource *)0x0) &&
        (cVar4 = RefCounted::unreference(), pTVar3 = local_58, cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)local_58), cVar4 != '\0')) {
      (**(code **)(*(long *)pTVar3 + 0x140))(pTVar3);
      Memory::free_static(pTVar3,false);
    }
    if (param_2 == pTVar2) {
      *(int *)(this + 0x9d8) = param_3;
      TileSetAtlasSource::get_texture();
      if (((local_58 != (TileSetAtlasSource *)0x0) &&
          (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler((Object *)local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa58),0));
      CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa60),0));
      if ((*(long *)(this + 0x9d0) != 0) &&
         (_update_alternative_tiles_rect_cache(this), *(long *)(this + 0x9d0) != 0)) {
        _update_zoom_and_panning(this,false);
      }
      pVVar1 = *(Vector2 **)(this + 0xa80);
      local_50 = _compute_base_tiles_control_size(this);
      local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
      Control::set_size(pVVar1,SUB81(&local_48,0));
      pVVar1 = *(Vector2 **)(this + 0xb08);
      local_50 = _compute_alternative_tiles_control_size(this);
      local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
      Control::set_size(pVVar1,SUB81(&local_48,0));
      CanvasItem::queue_redraw();
      CanvasItem::queue_redraw();
      CanvasItem::queue_redraw();
      CanvasItem::queue_redraw();
      CanvasItem::queue_redraw();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x1d4;
      pcVar5 = 
      "Condition \"p_tile_set->get_source(p_source_id) != p_tile_set_atlas_source\" is true.";
      goto LAB_00107312;
    }
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* TileAtlasView::is_class_ptr(void*) const */

uint __thiscall TileAtlasView::is_class_ptr(TileAtlasView *this,void *param_1)

{
  return (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1111,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1112,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ViewPanner,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ViewPanner, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ViewPanner,void>::get_argument_count
          (CallableCustomMethodPointer<ViewPanner,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TileAtlasView, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::get_argument_count
          (CallableCustomMethodPointer<TileAtlasView,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ViewPanner,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void> *this)

{
  operator_delete(this,0x48);
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



/* TileAtlasView::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TileAtlasView::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* TileAtlasView::_property_can_revertv(StringName const&) const */

undefined8 TileAtlasView::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00115008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HashMap<Ref<Material>, RID, HashMapHasherDefault, HashMapComparatorDefault<Ref<Material> >,
   DefaultTypedAllocator<HashMapElement<Ref<Material>, RID> > >::_lookup_pos(Ref<Material> const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
::_lookup_pos(HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
              *this,Ref *param_1,uint *param_2)

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
    uVar15 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
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
           (*(Ref **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
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
        auVar5._0_8_ = (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar11) -
                              SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* CallableCustomMethodPointer<TileAtlasView, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::get_object
          (CallableCustomMethodPointer<TileAtlasView,void> *this)

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
      goto LAB_0010797d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010797d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010797d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00107a7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107a7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107a7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent> >::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this)

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
      goto LAB_00107b7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107b7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107b7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent> >::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this)

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
      goto LAB_00107c7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107c7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107c7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ViewPanner, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ViewPanner,void>::get_object
          (CallableCustomMethodPointer<ViewPanner,void> *this)

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
      goto LAB_00107d7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107d7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107d7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TileAtlasView::_validate_propertyv(PropertyInfo&) const */

void TileAtlasView::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00115010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00115018 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00115018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1112,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1112,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1112,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* TileAtlasView::_setv(StringName const&, Variant const&) */

undefined8 TileAtlasView::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00115020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00115020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00115020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108218) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108288) */
/* TileAtlasView::_getv(StringName const&, Variant&) const */

undefined8 TileAtlasView::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001082f8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00115028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108360;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108360:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001083c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001083c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108420;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108420:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108490;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108490:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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
LAB_001084f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001084f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010855e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010855e:
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
LAB_001085e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001085e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010864e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010864e:
  return &_get_class_namev()::_class_name_static;
}



/* TileAtlasView::_get_class_namev() const */

undefined8 * TileAtlasView::_get_class_namev(void)

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
LAB_001086d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001086d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TileAtlasView");
      goto LAB_0010873e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TileAtlasView");
LAB_0010873e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00115030 != Container::_notification) {
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
  if ((code *)PTR__notification_00115030 == Container::_notification) {
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
    if ((code *)PTR__notification_00115030 != Container::_notification) {
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
  if ((code *)PTR__notification_00115030 == Container::_notification) {
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



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

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
/* HashMap<Ref<Material>, RID, HashMapHasherDefault, HashMapComparatorDefault<Ref<Material> >,
   DefaultTypedAllocator<HashMapElement<Ref<Material>, RID> > >::operator[](Ref<Material> const&) */

undefined1 * __thiscall
HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
::operator[](HashMap<Ref<Material>,RID,HashMapHasherDefault,HashMapComparatorDefault<Ref<Material>>,DefaultTypedAllocator<HashMapElement<Ref<Material>,RID>>>
             *this,Ref *param_1)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
  long lVar5;
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
  undefined1 (*pauVar22) [16];
  char cVar23;
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  Object *pOVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_48;
  uint local_44;
  long local_40;
  
  pOVar35 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar23 = _lookup_pos(this,(Ref *)pOVar35,&local_48);
  if (cVar23 != '\0') {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
    goto LAB_001095a0;
  }
  uVar32 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
    uVar33 = (ulong)uVar32;
    uVar24 = uVar33 * 4;
    uVar39 = uVar33 * 8;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(this + 0x10) = uVar25;
    pvVar28 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = pvVar28;
    if (uVar32 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar28 + uVar39)) && (pvVar28 < (void *)((long)pvVar3 + uVar24))
         ) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar24 * 4) = 0;
          *(undefined8 *)((long)pvVar28 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar33 != uVar24);
      }
      else {
        memset(pvVar3,0,uVar24);
        memset(pvVar28,0,uVar39);
      }
    }
    pOVar35 = *(Object **)param_1;
  }
  local_44 = 0;
  cVar23 = _lookup_pos(this,(Ref *)pOVar35,&local_44);
  if (cVar23 != '\0') {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
    *(undefined8 *)(pauVar26[1] + 8) = 0;
    goto LAB_001095a0;
  }
  if ((float)uVar32 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar32 = *(uint *)(this + 0x28);
    if (uVar32 == 0x1c) {
      pauVar26 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001095a0;
    }
    uVar24 = (ulong)(uVar32 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar2 = (&hash_table_size_primes)[uVar32];
    if (uVar32 + 1 < 2) {
      uVar24 = 2;
    }
    uVar32 = (&hash_table_size_primes)[uVar24];
    uVar33 = (ulong)uVar32;
    *(int *)(this + 0x28) = (int)uVar24;
    pvVar28 = *(void **)(this + 8);
    uVar24 = uVar33 * 4;
    uVar39 = uVar33 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(this + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar32 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar33);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar39);
      }
    }
    if (uVar2 == 0) {
      pOVar35 = *(Object **)param_1;
    }
    else {
      uVar24 = 0;
      do {
        uVar32 = *(uint *)((long)pvVar3 + uVar24 * 4);
        if (uVar32 != 0) {
          lVar4 = *(long *)(this + 0x10);
          uVar36 = 0;
          uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar39 = CONCAT44(0,uVar38);
          lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar32 * lVar5;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar39;
          lVar30 = SUB168(auVar6 * auVar14,8);
          puVar1 = (uint *)(lVar4 + lVar30 * 4);
          iVar29 = SUB164(auVar6 * auVar14,8);
          uVar37 = *puVar1;
          uVar25 = *(undefined8 *)((long)pvVar28 + uVar24 * 8);
          while (uVar37 != 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar37 * lVar5;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar39;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar38 + iVar29) - SUB164(auVar7 * auVar15,8)) * lVar5;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar39;
            local_98 = SUB164(auVar8 * auVar16,8);
            uVar34 = uVar25;
            if (local_98 < uVar36) {
              *puVar1 = uVar32;
              puVar27 = (undefined8 *)((long)__s_00 + lVar30 * 8);
              uVar34 = *puVar27;
              *puVar27 = uVar25;
              uVar32 = uVar37;
              uVar36 = local_98;
            }
            uVar36 = uVar36 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar29 + 1) * lVar5;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar39;
            lVar30 = SUB168(auVar9 * auVar17,8);
            puVar1 = (uint *)(lVar4 + lVar30 * 4);
            iVar29 = SUB164(auVar9 * auVar17,8);
            uVar25 = uVar34;
            uVar37 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar25;
          *puVar1 = uVar32;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar2);
      Memory::free_static(pvVar28,false);
      Memory::free_static(pvVar3,false);
      pOVar35 = *(Object **)param_1;
    }
  }
  if ((pOVar35 == (Object *)0x0) || (cVar23 = RefCounted::reference(), cVar23 == '\0')) {
    pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar26[1] = 0;
    *pauVar26 = (undefined1  [16])0x0;
    puVar27 = *(undefined8 **)(this + 0x20);
    *(undefined8 *)(pauVar26[1] + 8) = 0;
    if (puVar27 == (undefined8 *)0x0) goto LAB_0010957b;
LAB_00109610:
    *puVar27 = pauVar26;
    *(undefined8 **)(*pauVar26 + 8) = puVar27;
  }
  else {
    pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
    *(Object **)pauVar26[1] = pOVar35;
    *pauVar26 = (undefined1  [16])0x0;
    cVar23 = RefCounted::reference();
    if (cVar23 == '\0') {
      *(undefined8 *)pauVar26[1] = 0;
    }
    *(undefined8 *)(pauVar26[1] + 8) = 0;
    cVar23 = RefCounted::unreference();
    if ((cVar23 != '\0') && (cVar23 = predelete_handler(pOVar35), cVar23 != '\0')) {
      (**(code **)(*(long *)pOVar35 + 0x140))(pOVar35);
      Memory::free_static(pOVar35,false);
    }
    puVar27 = *(undefined8 **)(this + 0x20);
    if (puVar27 != (undefined8 *)0x0) goto LAB_00109610;
LAB_0010957b:
    *(undefined1 (**) [16])(this + 0x18) = pauVar26;
  }
  lVar4 = *(long *)param_1;
  *(undefined1 (**) [16])(this + 0x20) = pauVar26;
  lVar5 = *(long *)(this + 0x10);
  uVar24 = lVar4 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar39 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar39 = 1;
  }
  uVar37 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = (uint)uVar39;
  uVar32 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar24 = CONCAT44(0,uVar32);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar39 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar31 = SUB168(auVar10 * auVar18,8);
  lVar30 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar5 + lVar31 * 4);
  iVar29 = SUB164(auVar10 * auVar18,8);
  uVar2 = *puVar1;
  pauVar22 = pauVar26;
  while (uVar2 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar2 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar32 + iVar29) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    local_98 = SUB164(auVar12 * auVar20,8);
    pauVar40 = pauVar22;
    if (local_98 < uVar37) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar2;
      puVar27 = (undefined8 *)(lVar30 + lVar31 * 8);
      pauVar40 = (undefined1 (*) [16])*puVar27;
      *puVar27 = pauVar22;
      uVar37 = local_98;
    }
    uVar38 = (uint)uVar39;
    uVar37 = uVar37 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar29 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar31 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar5 + lVar31 * 4);
    iVar29 = SUB164(auVar13 * auVar21,8);
    pauVar22 = pauVar40;
    uVar2 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar30 + lVar31 * 8) = pauVar22;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001095a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<TileAtlasView>(TileAtlasView*, char const*, void
   (TileAtlasView::*)()) */

TileAtlasView *
create_custom_callable_function_pointer<TileAtlasView>
          (TileAtlasView *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC32;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00110ed0;
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



/* Callable create_custom_callable_function_pointer<TileAtlasView, Ref<InputEvent>
   const&>(TileAtlasView*, char const*, void (TileAtlasView::*)(Ref<InputEvent> const&)) */

TileAtlasView *
create_custom_callable_function_pointer<TileAtlasView,Ref<InputEvent>const&>
          (TileAtlasView *param_1,char *param_2,_func_void_Ref_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC32;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111080;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr **)(this + 0x20) = param_3 + 1;
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



/* String vformat<int, Vector2i>(String const&, int const, Vector2i const) */

undefined8 * vformat<int,Vector2i>(undefined8 *param_1,bool *param_2,int param_3,undefined8 param_4)

{
  Variant *pVVar1;
  undefined8 uVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_e0;
  char local_d1;
  Array local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  String_conflict local_b8 [8];
  undefined8 local_b0;
  String_conflict local_a8 [8];
  String_conflict local_a0 [8];
  undefined8 local_98;
  String_conflict local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = param_4;
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,(Vector2i *)&local_e0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar4 = (int)local_d0;
  Array::resize(iVar4);
  pVVar3 = (Variant *)Array::operator[](iVar4);
  Variant::operator=(pVVar3,local_88);
  pVVar3 = (Variant *)Array::operator[](iVar4);
  Variant::operator=(pVVar3,local_70);
  local_d1 = '\0';
  String::sprintf((Array *)&local_c8,param_2);
  uVar2 = local_c8;
  if (local_d1 == '\0') {
    local_c8 = 0;
    *param_1 = uVar2;
  }
  else {
    local_98 = 0;
    String::parse_latin1((String_conflict *)&local_98,".");
    local_b0 = 0;
    String::parse_latin1((String_conflict *)&local_b0,"\": ");
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"Formatting error in string \"");
    String::operator+(local_b8,(String_conflict *)&local_c0);
    String::operator+(local_a8,local_b8);
    String::operator+(local_a0,local_a8);
    String::operator+(local_90,local_a0);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",local_90,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    *param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_d0);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String vformat<int, Vector2i, int>(String const&, int const, Vector2i const, int const) */

undefined8 *
vformat<int,Vector2i,int>
          (undefined8 *param_1,bool *param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  Variant *pVVar2;
  Variant *pVVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_100;
  char local_f1;
  Array local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  String_conflict local_d8 [8];
  undefined8 local_d0;
  String_conflict local_c8 [8];
  String_conflict local_c0 [8];
  undefined8 local_b8;
  String_conflict local_b0 [8];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = param_4;
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,(Vector2i *)&local_100);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f0);
  iVar4 = (int)local_f0;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar5 = iVar5 + 1;
    pVVar2 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar2,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar5 != 3);
  local_f1 = '\0';
  String::sprintf((Array *)&local_e8,param_2);
  uVar1 = local_e8;
  if (local_f1 == '\0') {
    local_e8 = 0;
    *param_1 = uVar1;
  }
  else {
    local_b8 = 0;
    String::parse_latin1((String_conflict *)&local_b8,".");
    local_d0 = 0;
    String::parse_latin1((String_conflict *)&local_d0,"\": ");
    local_e0 = 0;
    String::parse_latin1((String_conflict *)&local_e0,"Formatting error in string \"");
    String::operator+(local_d8,(String_conflict *)&local_e0);
    String::operator+(local_c8,local_d8);
    String::operator+(local_c0,local_c8);
    String::operator+(local_b0,local_c0);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",local_b0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    *param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  pVVar3 = local_48;
  Array::~Array(local_f0);
  do {
    pVVar2 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String vformat<Vector2i>(String const&, Vector2i const) */

undefined8 * vformat<Vector2i>(undefined8 *param_1,bool *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  Variant *this;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_d0;
  char local_c1;
  Array local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  String_conflict local_a8 [8];
  undefined8 local_a0;
  String_conflict local_98 [8];
  String_conflict local_90 [8];
  undefined8 local_88;
  String_conflict local_80 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = param_3;
  Variant::Variant((Variant *)local_78,(Vector2i *)&local_d0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar3 = (int)local_c0;
  Array::resize(iVar3);
  this = (Variant *)Array::operator[](iVar3);
  Variant::operator=(this,(Variant *)local_78);
  local_c1 = '\0';
  String::sprintf((Array *)&local_b8,param_2);
  uVar2 = local_b8;
  if (local_c1 == '\0') {
    local_b8 = 0;
    *param_1 = uVar2;
  }
  else {
    local_88 = 0;
    String::parse_latin1((String_conflict *)&local_88,".");
    local_a0 = 0;
    String::parse_latin1((String_conflict *)&local_a0,"\": ");
    local_b0 = 0;
    String::parse_latin1((String_conflict *)&local_b0,"Formatting error in string \"");
    String::operator+(local_a8,(String_conflict *)&local_b0);
    String::operator+(local_98,local_a8);
    String::operator+(local_90,local_98);
    String::operator+(local_80,local_90);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    *param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
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



/* String vformat<Vector2i, int>(String const&, Vector2i const, int const) */

undefined8 * vformat<Vector2i,int>(undefined8 *param_1,bool *param_2,undefined8 param_3,int param_4)

{
  Variant *pVVar1;
  undefined8 uVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_e0;
  char local_d1;
  Array local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  String_conflict local_b8 [8];
  undefined8 local_b0;
  String_conflict local_a8 [8];
  String_conflict local_a0 [8];
  undefined8 local_98;
  String_conflict local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = param_3;
  Variant::Variant(local_88,(Vector2i *)&local_e0);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar4 = (int)local_d0;
  Array::resize(iVar4);
  pVVar3 = (Variant *)Array::operator[](iVar4);
  Variant::operator=(pVVar3,local_88);
  pVVar3 = (Variant *)Array::operator[](iVar4);
  Variant::operator=(pVVar3,local_70);
  local_d1 = '\0';
  String::sprintf((Array *)&local_c8,param_2);
  uVar2 = local_c8;
  if (local_d1 == '\0') {
    local_c8 = 0;
    *param_1 = uVar2;
  }
  else {
    local_98 = 0;
    String::parse_latin1((String_conflict *)&local_98,".");
    local_b0 = 0;
    String::parse_latin1((String_conflict *)&local_b0,"\": ");
    local_c0 = 0;
    String::parse_latin1((String_conflict *)&local_c0,"Formatting error in string \"");
    String::operator+(local_b8,(String_conflict *)&local_c0);
    String::operator+(local_a8,local_b8);
    String::operator+(local_a0,local_a8);
    String::operator+(local_90,local_a0);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",local_90,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    *param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  pVVar3 = (Variant *)local_40;
  Array::~Array(local_d0);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a670) */
/* TileAtlasView::_notificationv(int, bool) */

void __thiscall TileAtlasView::_notificationv(TileAtlasView *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00115038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00115038 != CanvasItem::_notification) {
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



/* TileAtlasView::get_class() const */

void TileAtlasView::get_class(void)

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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String_conflict *param_1)

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
LAB_0010aaa7:
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
    uVar4 = String::operator==(param_1,(String_conflict *)&local_50);
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
      goto LAB_0010aaa7;
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
    StringName::StringName((StringName *)&local_48,(String_conflict *)(this + 0x20),false);
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



/* CallableCustomMethodPointer<ViewPanner, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ViewPanner,void>::call
          (CallableCustomMethodPointer<ViewPanner,void> *this,Variant **param_1,int param_2,
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
  String_conflict local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String_conflict)0x0;
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
      goto LAB_0010adcf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010adcf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ada8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ae80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010adcf:
    local_40 = 0;
    String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_38,(String_conflict *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ae80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileAtlasView, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::call
          (CallableCustomMethodPointer<TileAtlasView,void> *this,Variant **param_1,int param_2,
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
  String_conflict local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String_conflict)0x0;
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
      goto LAB_0010afdf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010afdf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010afb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010b090;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010afdf:
    local_40 = 0;
    String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
    String::operator+(local_38,(String_conflict *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010b090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010b16e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010b16e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC81;
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
LAB_0010b23d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010b23d;
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
        goto LAB_0010b16e;
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
  String::parse_latin1((String_conflict *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String_conflict *)"Invalid Object id \'");
  String::operator+((String_conflict *)&local_38,(String_conflict *)local_48);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String_conflict *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010b16e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  float fVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar4 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_48 = (Object *)(uVar4 << 8);
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
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010b4d5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010b4d5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[2]);
        uVar3 = _LC82;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_48 = (Object *)0x0;
        pOVar8 = (Object *)Variant::get_validated_object();
        pOVar6 = local_48;
        if (pOVar8 != local_48) {
          if (pOVar8 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010b5d0:
              cVar7 = RefCounted::unreference();
              if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
            }
          }
          else {
            pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar6 != pOVar8) {
              local_48 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar6 != (Object *)0x0) goto LAB_0010b5d0;
            }
          }
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],5);
        uVar3 = _LC83;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar3 = Variant::operator_cast_to_Vector2(param_1[1]);
        cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar5 = _LC84;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        fVar13 = Variant::operator_cast_to_float(*param_1);
        (*pcVar11)(fVar13,uVar3,(long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar6 = local_48, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        goto LAB_0010b4d5;
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
  String::parse_latin1((String_conflict *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
  String::operator+((String_conflict *)&local_48,(String_conflict *)local_58);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String_conflict *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010b4d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010b895;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010b895;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1]);
        uVar4 = _LC85;
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
LAB_0010b990:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010b990;
            }
          }
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC86;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010b895;
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
  String::parse_latin1((String_conflict *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
  String::operator+((String_conflict *)&local_48,(String_conflict *)local_58);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String_conflict *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010b895:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010bc5b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
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
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010bc5b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bd5e;
    }
  }
LAB_0010bc5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bd5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String_conflict *param_1)

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
    cVar4 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010be6b;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010be6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010bfdb;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010bfdb;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c0de;
    }
  }
LAB_0010bfdb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c0de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String_conflict *param_1)

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
    cVar4 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010c1eb;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c1eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String_conflict *param_1)

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
    cVar4 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010c33b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c33b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String_conflict *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String_conflict *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00115050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String_conflict *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00115040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String_conflict *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String_conflict *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String_conflict *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String_conflict *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String_conflict *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00115048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String_conflict *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String_conflict *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String_conflict *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String_conflict *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00115050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String_conflict *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00115040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String_conflict *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String_conflict *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String_conflict *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String_conflict *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String_conflict *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String_conflict *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00115048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String_conflict *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String_conflict *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String_conflict *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x38)];
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
        if (pvVar3 == (void *)0x0) goto LAB_0010cfff;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010cfff:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* TileAtlasView::is_class(String const&) const */

undefined8 __thiscall TileAtlasView::is_class(TileAtlasView *this,String_conflict *param_1)

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
    cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010d15b;
  }
  cVar5 = String::operator==(param_1,"TileAtlasView");
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
      cVar5 = String::operator==(param_1,(String_conflict *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010d15b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010d25e;
    }
  }
LAB_0010d15b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d25e:
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



/* TileAtlasView::_bind_methods() [clone .cold] */

void TileAtlasView::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* TileAtlasView::_initialize_classv() */

void TileAtlasView::_initialize_classv(void)

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
          String::parse_latin1((String_conflict *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String_conflict *)&local_70,"Node");
          StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_00115050 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String_conflict *)&local_60,"Node");
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String_conflict *)&local_70,"CanvasItem");
        StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
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
        if ((code *)PTR__bind_compatibility_methods_00115040 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String_conflict *)&local_60,"CanvasItem");
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String_conflict *)&local_70,"Control");
      StringName::StringName((StringName *)&local_68,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_00115058 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "TileAtlasView";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = &_LC88;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC88;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if ((code *)PTR__get_property_list_00115060 != Object::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if ((code *)PTR__get_property_list_00115068 != CanvasItem::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* TileAtlasView::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TileAtlasView::_get_property_listv(TileAtlasView *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "TileAtlasView";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TileAtlasView";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"TileAtlasView",false);
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



/* HashMap<Vector2, HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >, HashMapHasherDefault,
   HashMapComparatorDefault<Vector2>, DefaultTypedAllocator<HashMapElement<Vector2, HashMap<int,
   Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > > > > >::_lookup_pos(Vector2 const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
::_lookup_pos(HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
              *this,Vector2 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  float fVar19;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) == 0) {
    return 0;
  }
  fVar1 = *(float *)param_1;
  uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar13 = 0x3413905a;
  if (fVar1 == 0.0) {
LAB_0010ed01:
    fVar19 = *(float *)(param_1 + 4);
    if (fVar19 != 0.0) {
LAB_0010ee4c:
      if (NAN(fVar19)) {
        uVar13 = uVar13 ^ 0x2db3efa0;
      }
      else {
        uVar13 = uVar13 ^ ((int)fVar19 * 0x16a88000 | (uint)((int)fVar19 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      goto LAB_0010ee66;
    }
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    uVar13 = uVar13 >> 0x10 ^ uVar13;
  }
  else {
    if (NAN(fVar1)) {
      uVar13 = 0x22afa5cc;
      goto LAB_0010ed01;
    }
    fVar19 = *(float *)(param_1 + 4);
    uVar13 = ((int)fVar1 * 0x16a88000 | (uint)((int)fVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    if (fVar19 != 0.0) goto LAB_0010ee4c;
LAB_0010ee66:
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
    uVar12 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar13 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar13 = 1;
      uVar15 = uVar3;
      goto LAB_0010ed4a;
    }
  }
  uVar15 = uVar13 * uVar3;
LAB_0010ed4a:
  uVar17 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar17;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar15;
  lVar16 = SUB168(auVar4 * auVar8,8);
  uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
  uVar14 = SUB164(auVar4 * auVar8,8);
  if (uVar12 != 0) {
    uVar18 = 0;
    do {
      if (uVar13 == uVar12) {
        lVar16 = *(long *)(*(long *)(this + 8) + lVar16 * 8);
        fVar2 = *(float *)(lVar16 + 0x10);
        if (((fVar1 == fVar2) || ((NAN(fVar2) && (NAN(fVar1))))) &&
           ((fVar2 = *(float *)(lVar16 + 0x14), fVar2 == fVar19 || ((NAN(fVar2) && (NAN(fVar19))))))
           ) {
          *param_2 = uVar14;
          return 1;
        }
      }
      uVar18 = uVar18 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (uVar14 + 1) * uVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar17;
      lVar16 = SUB168(auVar5 * auVar9,8);
      uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar16 * 4);
      uVar14 = SUB164(auVar5 * auVar9,8);
    } while ((uVar12 != 0) &&
            (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12 * uVar3, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar17, auVar7._8_8_ = 0,
            auVar7._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar14) -
                           SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
            auVar11._0_8_ = uVar17, uVar18 <= SUB164(auVar7 * auVar11,8)));
  }
  return 0;
}



/* HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
::_resize_and_rehash
          (HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >::insert(int const&, Rect2i const&, bool) */

int * HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
      ::insert(int *param_1,Rect2i *param_2,bool param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__s;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 (*pauVar14) [16];
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar20;
  undefined7 in_register_00000011;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  char in_R8B;
  uint uVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  ulong uVar27;
  long in_FS_OFFSET;
  uint local_a8;
  uint local_6c [6];
  undefined8 local_54;
  undefined8 uStack_4c;
  long local_40;
  
  puVar21 = (uint *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar27 = (ulong)uVar16;
    uVar23 = uVar27 * 4;
    uVar19 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 0x10) = uVar19;
    uVar25 = uVar27 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar25,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar16 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar25 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)__s + uVar23 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
      else {
        memset(__s,0,uVar23);
        memset(__s_00,0,uVar25);
      }
    }
  }
  uVar17 = *puVar21;
  local_6c[0] = 0;
  cVar15 = _lookup_pos((HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                        *)param_2,(int *)(ulong)uVar17,local_6c);
  if (cVar15 == '\0') {
    if ((float)uVar16 * __LC27 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar18 = (undefined1 (*) [16])0x0;
        goto LAB_0010f355;
      }
      _resize_and_rehash((HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
      uVar17 = *puVar21;
    }
    local_54 = *in_RCX;
    uStack_4c = in_RCX[1];
    pauVar18 = (undefined1 (*) [16])operator_new(0x28,"");
    *(uint *)pauVar18[1] = uVar17;
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar18[1] + 4) = local_54;
    *(undefined8 *)(pauVar18[1] + 0xc) = uStack_4c;
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar18;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar18;
    }
    else if (in_R8B == '\0') {
      *puVar2 = pauVar18;
      *(undefined8 **)(*pauVar18 + 8) = puVar2;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar18;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar3 + 8) = pauVar18;
      *(long *)*pauVar18 = lVar3;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar18;
    }
    uVar16 = (*puVar21 >> 0x10 ^ *puVar21) * -0x7a143595;
    uVar17 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
    uVar16 = uVar17 ^ uVar17 >> 0x10;
    if (uVar17 == uVar17 >> 0x10) {
      uVar23 = 1;
      uVar16 = 1;
    }
    else {
      uVar23 = (ulong)uVar16;
    }
    uVar24 = 0;
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar17 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
    uVar25 = CONCAT44(0,uVar17);
    lVar4 = *(long *)(param_2 + 0x10);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar23 * lVar3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25;
    lVar22 = SUB168(auVar6 * auVar10,8);
    lVar5 = *(long *)(param_2 + 8);
    puVar21 = (uint *)(lVar4 + lVar22 * 4);
    iVar20 = SUB164(auVar6 * auVar10,8);
    uVar1 = *puVar21;
    pauVar14 = pauVar18;
    while (uVar1 != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar1 * lVar3;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar25;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)((uVar17 + iVar20) - SUB164(auVar7 * auVar11,8)) * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar25;
      local_a8 = SUB164(auVar8 * auVar12,8);
      pauVar26 = pauVar14;
      if (local_a8 < uVar24) {
        *puVar21 = uVar16;
        puVar2 = (undefined8 *)(lVar5 + lVar22 * 8);
        pauVar26 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar14;
        uVar16 = uVar1;
        uVar24 = local_a8;
      }
      uVar24 = uVar24 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(iVar20 + 1) * lVar3;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar25;
      lVar22 = SUB168(auVar9 * auVar13,8);
      puVar21 = (uint *)(lVar4 + lVar22 * 4);
      iVar20 = SUB164(auVar9 * auVar13,8);
      pauVar14 = pauVar26;
      uVar1 = *puVar21;
    }
    *(undefined1 (**) [16])(lVar5 + lVar22 * 8) = pauVar14;
    *puVar21 = uVar16;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar19 = in_RCX[1];
    pauVar18 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)local_6c[0] * 8);
    *(undefined8 *)(pauVar18[1] + 4) = *in_RCX;
    *(undefined8 *)(pauVar18[1] + 0xc) = uVar19;
  }
LAB_0010f355:
  *(undefined1 (**) [16])param_1 = pauVar18;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
::operator[](HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
             *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_70;
  uint local_6c [6];
  undefined8 local_54;
  undefined8 uStack_4c;
  long local_40;
  
  uVar17 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,(int *)(ulong)uVar17,&local_70);
  if (cVar16 == '\0') {
    uVar18 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    if (*(long *)(this + 8) == 0) {
      uVar26 = (ulong)uVar18;
      uVar23 = uVar26 * 4;
      uVar25 = uVar26 * 8;
      uVar20 = Memory::alloc_static(uVar23,false);
      *(undefined8 *)(this + 0x10) = uVar20;
      __s_00 = (void *)Memory::alloc_static(uVar25,false);
      *(void **)(this + 8) = __s_00;
      if (uVar18 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar23))) {
          uVar23 = 0;
          do {
            *(undefined4 *)((long)__s + uVar23 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
          } while (uVar26 != uVar23);
        }
        else {
          memset(__s,0,uVar23);
          memset(__s_00,0,uVar25);
        }
      }
      uVar17 = *param_1;
    }
    local_6c[0] = 0;
    cVar16 = _lookup_pos(this,(int *)(ulong)uVar17,local_6c);
    if (cVar16 == '\0') {
      if ((float)uVar18 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
        if (*(int *)(this + 0x28) == 0x1c) {
          pauVar19 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010f713;
        }
        _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
        uVar17 = *param_1;
      }
      local_54 = 0;
      uStack_4c = 0;
      pauVar19 = (undefined1 (*) [16])operator_new(0x28,"");
      *(uint *)pauVar19[1] = uVar17;
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar19[1] + 4) = local_54;
      *(undefined8 *)(pauVar19[1] + 0xc) = uStack_4c;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar19;
      }
      else {
        *puVar3 = pauVar19;
        *(undefined8 **)(*pauVar19 + 8) = puVar3;
      }
      uVar17 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar19;
      uVar17 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
      uVar18 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
      uVar17 = uVar18 ^ uVar18 >> 0x10;
      if (uVar18 == uVar18 >> 0x10) {
        uVar23 = 1;
        uVar17 = 1;
      }
      else {
        uVar23 = (ulong)uVar17;
      }
      uVar24 = 0;
      lVar4 = *(long *)(this + 0x10);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar18 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      uVar25 = CONCAT44(0,uVar18);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar23 * lVar5;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar25;
      lVar22 = SUB168(auVar7 * auVar11,8);
      lVar6 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar4 + lVar22 * 4);
      iVar21 = SUB164(auVar7 * auVar11,8);
      uVar2 = *puVar1;
      pauVar15 = pauVar19;
      while (uVar2 != 0) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar2 * lVar5;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)((uVar18 + iVar21) - SUB164(auVar8 * auVar12,8)) * lVar5;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar25;
        local_98 = SUB164(auVar9 * auVar13,8);
        pauVar27 = pauVar15;
        if (local_98 < uVar24) {
          *puVar1 = uVar17;
          puVar3 = (undefined8 *)(lVar6 + lVar22 * 8);
          pauVar27 = (undefined1 (*) [16])*puVar3;
          *puVar3 = pauVar15;
          uVar17 = uVar2;
          uVar24 = local_98;
        }
        uVar24 = uVar24 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar21 + 1) * lVar5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar22 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar4 + lVar22 * 4);
        iVar21 = SUB164(auVar10 * auVar14,8);
        pauVar15 = pauVar27;
        uVar2 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar6 + lVar22 * 8) = pauVar15;
      *puVar1 = uVar17;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined8 *)(pauVar19[1] + 4) = 0;
      *(undefined8 *)(pauVar19[1] + 0xc) = 0;
    }
  }
  else {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_0010f713:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar19[1] + 4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector2, HashMap<int, Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > >, HashMapHasherDefault,
   HashMapComparatorDefault<Vector2>, DefaultTypedAllocator<HashMapElement<Vector2, HashMap<int,
   Rect2i, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Rect2i> > > > > >::operator[](Vector2 const&) */

undefined1 * __thiscall
HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
::operator[](HashMap<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>>>>
             *this,Vector2 *param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 (*pauVar21) [16];
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  void *__s_00;
  undefined1 (*pauVar28) [16];
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  void *pvVar32;
  int *piVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  undefined1 (*pauVar42) [16];
  long in_FS_OFFSET;
  float fVar43;
  uint local_90;
  uint local_8c [5];
  undefined8 local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  cVar22 = _lookup_pos(this,param_1,&local_90);
  if (cVar22 != '\0') {
    pauVar28 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_90 * 8);
    goto LAB_0010fe80;
  }
  uVar24 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
    uVar37 = (ulong)uVar24;
    uVar26 = uVar37 * 4;
    uVar31 = uVar37 * 8;
    uVar27 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(this + 0x10) = uVar27;
    pvVar32 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(this + 8) = pvVar32;
    if (uVar24 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar32 + uVar31)) && (pvVar32 < (void *)((long)pvVar4 + uVar26))
         ) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar26 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar37 != uVar26);
      }
      else {
        memset(pvVar4,0,uVar26);
        memset(pvVar32,0,uVar31);
      }
    }
  }
  local_8c[0] = 0;
  cVar22 = _lookup_pos(this,param_1,local_8c);
  if (cVar22 != '\0') {
    uVar26 = (ulong)local_8c[0];
    lVar29 = *(long *)(*(long *)(this + 8) + uVar26 * 8);
    uVar24 = *(uint *)(lVar29 + 0x40);
    uVar25 = (&hash_table_size_primes)[uVar24];
    if ((*(int *)(lVar29 + 0x44) == 0) || (*(long *)(lVar29 + 0x20) == 0)) {
LAB_0010ff28:
      if (uVar25 < 0x17) goto LAB_0010ff2d;
    }
    else {
      lVar39 = 0;
      if (uVar25 != 0) {
        do {
          piVar33 = (int *)(*(long *)(lVar29 + 0x28) + lVar39);
          if (*piVar33 != 0) {
            *piVar33 = 0;
            Memory::free_static(*(void **)(*(long *)(lVar29 + 0x20) + lVar39 * 2),false);
            *(undefined8 *)(*(long *)(lVar29 + 0x20) + lVar39 * 2) = 0;
          }
          lVar39 = lVar39 + 4;
        } while (lVar39 != (ulong)uVar25 << 2);
        uVar24 = *(uint *)(lVar29 + 0x40);
        *(undefined4 *)(lVar29 + 0x44) = 0;
        *(undefined1 (*) [16])(lVar29 + 0x30) = (undefined1  [16])0x0;
        uVar25 = (&hash_table_size_primes)[uVar24];
        goto LAB_0010ff28;
      }
      *(undefined4 *)(lVar29 + 0x44) = 0;
      *(undefined1 (*) [16])(lVar29 + 0x30) = (undefined1  [16])0x0;
LAB_0010ff2d:
      if (uVar24 != 0x1c) {
        uVar31 = (ulong)uVar24;
        do {
          uVar25 = (int)uVar31 + 1;
          uVar31 = (ulong)uVar25;
          if (0x16 < (uint)(&hash_table_size_primes)[uVar31]) {
            if (uVar24 != uVar25) {
              if (*(long *)(lVar29 + 0x20) == 0) {
                *(uint *)(lVar29 + 0x40) = uVar25;
              }
              else {
                HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                ::_resize_and_rehash
                          ((HashMap<int,Rect2i,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Rect2i>>>
                            *)(lVar29 + 0x18),uVar25);
              }
            }
            goto LAB_0010ff83;
          }
        } while (uVar25 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0010ff83:
    pauVar28 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar26 * 8);
    goto LAB_0010fe80;
  }
  if ((float)uVar24 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar24 = *(uint *)(this + 0x28);
    if (uVar24 == 0x1c) {
      pauVar28 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010fe80;
    }
    uVar26 = (ulong)(uVar24 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar25 = (&hash_table_size_primes)[uVar24];
    if (uVar24 + 1 < 2) {
      uVar26 = 2;
    }
    uVar24 = (&hash_table_size_primes)[uVar26];
    uVar37 = (ulong)uVar24;
    *(int *)(this + 0x28) = (int)uVar26;
    pvVar32 = *(void **)(this + 8);
    uVar26 = uVar37 * 4;
    uVar31 = uVar37 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar27 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(this + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(this + 8) = __s_00;
    if (uVar24 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar37);
      }
      else {
        memset(__s,0,uVar26);
        memset(__s_00,0,uVar31);
      }
    }
    if (uVar25 != 0) {
      uVar26 = 0;
      do {
        uVar24 = *(uint *)((long)pvVar4 + uVar26 * 4);
        if (uVar24 != 0) {
          lVar29 = *(long *)(this + 0x10);
          uVar40 = 0;
          uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar31 = CONCAT44(0,uVar3);
          lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar24 * lVar39;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar31;
          lVar35 = SUB168(auVar5 * auVar13,8);
          puVar1 = (uint *)(lVar29 + lVar35 * 4);
          iVar34 = SUB164(auVar5 * auVar13,8);
          uVar41 = *puVar1;
          uVar27 = *(undefined8 *)((long)pvVar32 + uVar26 * 8);
          while (uVar41 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar41 * lVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar31;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar3 + iVar34) - SUB164(auVar6 * auVar14,8)) * lVar39;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar31;
            uVar23 = SUB164(auVar7 * auVar15,8);
            uVar38 = uVar27;
            if (uVar23 < uVar40) {
              *puVar1 = uVar24;
              puVar30 = (undefined8 *)((long)__s_00 + lVar35 * 8);
              uVar38 = *puVar30;
              *puVar30 = uVar27;
              uVar24 = uVar41;
              uVar40 = uVar23;
            }
            uVar40 = uVar40 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar34 + 1) * lVar39;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar31;
            lVar35 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar29 + lVar35 * 4);
            iVar34 = SUB164(auVar8 * auVar16,8);
            uVar27 = uVar38;
            uVar41 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar27;
          *puVar1 = uVar24;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar26 = uVar26 + 1;
      } while (uVar25 != uVar26);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_78 = *(undefined8 *)param_1;
  uVar26 = 1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar26]) {
      uVar26 = uVar26 & 0xffffffff;
      goto LAB_0010fbe2;
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != 0x1d);
  uVar26 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010fbe2:
  pauVar28 = (undefined1 (*) [16])operator_new(0x48,"");
  *pauVar28 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar28[4] = 0;
  *(undefined8 *)pauVar28[1] = local_78;
  uVar24 = (&hash_table_size_primes)[uVar26];
  pauVar28[2] = (undefined1  [16])0x0;
  lVar29 = 1;
  pauVar28[3] = (undefined1  [16])0x0;
  if (5 < uVar24) {
    do {
      if (uVar24 <= (uint)(&hash_table_size_primes)[lVar29]) {
        *(int *)pauVar28[4] = (int)lVar29;
        puVar30 = *(undefined8 **)(this + 0x20);
        if (puVar30 != (undefined8 *)0x0) goto LAB_0010fc84;
        goto LAB_0010fee8;
      }
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar30 = *(undefined8 **)(this + 0x20);
  if (puVar30 == (undefined8 *)0x0) {
LAB_0010fee8:
    *(undefined1 (**) [16])(this + 0x18) = pauVar28;
  }
  else {
LAB_0010fc84:
    *puVar30 = pauVar28;
    *(undefined8 **)(*pauVar28 + 8) = puVar30;
  }
  fVar2 = *(float *)param_1;
  *(undefined1 (**) [16])(this + 0x20) = pauVar28;
  uVar24 = 0x3413905a;
  if (fVar2 == 0.0) {
LAB_0010fd4d:
    fVar43 = *(float *)(param_1 + 4);
    if (fVar43 != 0.0) {
LAB_0010fce5:
      if (NAN(fVar43)) {
        uVar24 = uVar24 ^ 0x2db3efa0;
      }
      else {
        uVar24 = uVar24 ^ ((int)fVar43 * 0x16a88000 | (uint)((int)fVar43 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
      goto LAB_0010fd03;
    }
    uVar24 = (uVar24 << 0xd | uVar24 >> 0x13) * 5 + 0xe6546b64;
    uVar24 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = uVar24 >> 0x10 ^ uVar24;
LAB_0010fd8c:
    uVar26 = (ulong)uVar24;
  }
  else {
    if (NAN(fVar2)) {
      uVar24 = 0x22afa5cc;
      goto LAB_0010fd4d;
    }
    fVar43 = *(float *)(param_1 + 4);
    uVar24 = ((int)fVar2 * 0x16a88000 | (uint)((int)fVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar24 = (uVar24 << 0xd | uVar24 >> 0x13) * 5 + 0xe6546b64;
    if (fVar43 != 0.0) goto LAB_0010fce5;
LAB_0010fd03:
    uVar24 = (uVar24 << 0xd | uVar24 >> 0x13) * 5 + 0xe6546b64;
    uVar24 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
    uVar25 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
    uVar24 = uVar25 ^ uVar25 >> 0x10;
    if (uVar25 != uVar25 >> 0x10) goto LAB_0010fd8c;
    uVar26 = 1;
    uVar24 = 1;
  }
  uVar41 = 0;
  lVar29 = *(long *)(this + 0x10);
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar25 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar31 = CONCAT44(0,uVar25);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar26 * lVar39;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar31;
  lVar36 = SUB168(auVar9 * auVar17,8);
  lVar35 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar29 + lVar36 * 4);
  iVar34 = SUB164(auVar9 * auVar17,8);
  uVar3 = *puVar1;
  pauVar21 = pauVar28;
  while (uVar3 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar3 * lVar39;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar31;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar25 + iVar34) - SUB164(auVar10 * auVar18,8)) * lVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar31;
    uVar40 = SUB164(auVar11 * auVar19,8);
    pauVar42 = pauVar21;
    if (uVar40 < uVar41) {
      *puVar1 = uVar24;
      puVar30 = (undefined8 *)(lVar35 + lVar36 * 8);
      pauVar42 = (undefined1 (*) [16])*puVar30;
      *puVar30 = pauVar21;
      uVar24 = uVar3;
      uVar41 = uVar40;
    }
    uVar41 = uVar41 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar34 + 1) * lVar39;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar31;
    lVar36 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar29 + lVar36 * 4);
    iVar34 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar42;
    uVar3 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar35 + lVar36 * 8) = pauVar21;
  *puVar1 = uVar24;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010fe80:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar28[1] + 8;
}



/* TileAtlasView::gui_input(Ref<InputEvent> const&) */

void TileAtlasView::_GLOBAL__sub_I_gui_input(void)

{
  if (TileMap::base_property_helper != '\0') {
    return;
  }
  TileMap::base_property_helper = 1;
  TileMap::base_property_helper._56_8_ = 2;
  TileMap::base_property_helper._64_8_ = 0;
  TileMap::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TileMap::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TileMap::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TileMap::base_property_helper,&__dso_handle);
  return;
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
/* CallableCustomMethodPointer<TileAtlasView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileAtlasView, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileAtlasView, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,float,Vector2,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileAtlasView, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileAtlasView,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ViewPanner,void> *this)

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



