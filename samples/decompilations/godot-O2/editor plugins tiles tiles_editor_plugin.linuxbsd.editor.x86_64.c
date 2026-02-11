
/* TileMapEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */

void TileMapEditorPlugin::forward_canvas_gui_input(Ref *param_1)

{
  TileMapLayerEditor::forward_canvas_gui_input(*(Ref **)(param_1 + 0x660));
  return;
}



/* TileMapEditorPlugin::forward_canvas_draw_over_viewport(Control*) */

void TileMapEditorPlugin::forward_canvas_draw_over_viewport(Control *param_1)

{
  TileMapLayerEditor::forward_canvas_draw_over_viewport(*(Control **)(param_1 + 0x660));
  return;
}



/* TileMapEditorPlugin::make_visible(bool) */

void __thiscall TileMapEditorPlugin::make_visible(TileMapEditorPlugin *this,bool param_1)

{
  char cVar1;
  
  if (param_1) {
    CanvasItem::show();
    EditorBottomPanel::make_item_visible
              (*(Control **)(EditorNode::singleton + 0xa40),SUB81(*(undefined8 *)(this + 0x660),0),
               true);
    return;
  }
  CanvasItem::hide();
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    return;
  }
  EditorBottomPanel::hide_bottom_panel();
  return;
}



/* TileSetEditorPlugin::make_visible(bool) */

void __thiscall TileSetEditorPlugin::make_visible(TileSetEditorPlugin *this,bool param_1)

{
  char cVar1;
  
  if (param_1) {
    CanvasItem::show();
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 == '\0') {
      EditorBottomPanel::make_item_visible
                (*(Control **)(EditorNode::singleton + 0xa40),SUB81(*(undefined8 *)(this + 0x660),0)
                 ,true);
      return;
    }
  }
  else {
    CanvasItem::hide();
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 != '\0') {
      EditorBottomPanel::hide_bottom_panel();
      return;
    }
  }
  return;
}



/* TileSetEditorPlugin::handles(Object*) const */

bool __thiscall TileSetEditorPlugin::handles(TileSetEditorPlugin *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&TileSet::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* TileMapEditorPlugin::_tile_map_layer_removed() */

void __thiscall TileMapEditorPlugin::_tile_map_layer_removed(TileMapEditorPlugin *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x678) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x678) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar2 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar2 != 0) &&
         (lVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&TileMap::typeinfo,0), lVar3 != 0)) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this + 0x220))(this);
          return;
        }
        goto LAB_001002b9;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    return;
  }
LAB_001002b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TilesEditorUtils::_pattern_preview_done() */

void __thiscall TilesEditorUtils::_pattern_preview_done(TilesEditorUtils *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x230));
  if (iVar1 == 0) {
    *(int *)(this + 0x288) = *(int *)(this + 0x288) + 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x230));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* Ref<TileMapPattern>::TEMPNAMEPLACEHOLDERVALUE(Ref<TileMapPattern> const&) [clone .isra.0] */

void __thiscall Ref<TileMapPattern>::operator=(Ref<TileMapPattern> *this,Ref *param_1)

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



/* TileMapEditorPlugin::handles(Object*) const */

bool __thiscall TileMapEditorPlugin::handles(TileMapEditorPlugin *this,Object *param_1)

{
  int iVar1;
  long lVar2;
  NodePath *pNVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  NodePath aNStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (int)EditorNode::singleton;
  if (param_1 == (Object *)0x0) {
    EditorData::get_edited_scene_root(iVar4 + 0x430);
    bVar5 = false;
  }
  else {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&MultiNodeEdit::typeinfo,0);
    pNVar3 = (NodePath *)EditorData::get_edited_scene_root(iVar4 + 0x430);
    if ((lVar2 == 0) || (iVar4 = 0, pNVar3 == (NodePath *)0x0)) {
      lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&TileMapLayer::typeinfo,0);
      if (lVar2 == 0) {
        lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&TileMap::typeinfo,0);
        bVar5 = lVar2 != 0;
        goto LAB_00100425;
      }
    }
    else {
      while( true ) {
        iVar1 = MultiNodeEdit::get_node_count();
        if (iVar1 <= iVar4) break;
        MultiNodeEdit::get_node((int)aNStack_48);
        lVar2 = Node::get_node(pNVar3);
        if (lVar2 == 0) {
          NodePath::~NodePath(aNStack_48);
LAB_001004ab:
          bVar5 = false;
          goto LAB_00100425;
        }
        lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&TileMapLayer::typeinfo,0);
        NodePath::~NodePath(aNStack_48);
        if (lVar2 == 0) goto LAB_001004ab;
        iVar4 = iVar4 + 1;
      }
    }
    bVar5 = true;
  }
LAB_00100425:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100615) */
/* WARNING: Removing unreachable block (ram,0x0010061e) */
/* WARNING: Removing unreachable block (ram,0x0010062e) */
/* WARNING: Removing unreachable block (ram,0x0010063e) */
/* TileSetEditorPlugin::edit(Object*) */

void __thiscall TileSetEditorPlugin::edit(TileSetEditorPlugin *this,Object *param_1)

{
  char cVar1;
  long lVar2;
  Object *pOVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  uVar4 = *(undefined8 *)(this + 0x660);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,param_1);
  local_50 = (Object *)0x0;
  lVar2 = Variant::get_validated_object();
  if ((((lVar2 != 0) && (lVar2 != 0)) &&
      (pOVar3 = (Object *)__dynamic_cast(lVar2,&Object::typeinfo,&TileSet::typeinfo,0),
      pOVar3 != (Object *)0x0)) &&
     ((local_50 = pOVar3, pOVar3 != (Object *)0x0 &&
      (cVar1 = RefCounted::reference(), cVar1 == '\0')))) {
    local_50 = (Object *)0x0;
  }
  TileSetEditor::edit(uVar4);
  if (((local_50 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = 0;
  if (param_1 != (Object *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 *)(this + 0x670) = uVar4;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::_update_tile_map() */

void __thiscall TileMapEditorPlugin::_update_tile_map(TileMapEditorPlugin *this)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  uint7 uStack_27;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x670) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
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
    if ((*(ulong *)(this + 0x670) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      uVar2 = puVar7[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar2 != 0) &&
         (lVar5 = __dynamic_cast(uVar2,&Object::typeinfo,&TileMapLayer::typeinfo,0), lVar5 != 0)) {
        TileMapLayer::get_tile_set();
        lVar5 = (ulong)uStack_27 * 0x100;
        if ((ulong)uStack_27 == 0) {
          (**(code **)(*tile_set_plugin_singleton + 0x220))();
          (**(code **)(*tile_set_plugin_singleton + 0x210))();
          *(undefined8 *)(this + 0x688) = 0;
          if (uStack_27 == 0) goto LAB_001007d0;
        }
        else if (*(long *)(lVar5 + 0x60) != *(long *)(this + 0x688)) {
          (**(code **)(*tile_set_plugin_singleton + 0x220))(tile_set_plugin_singleton,lVar5);
          (**(code **)(*tile_set_plugin_singleton + 0x210))();
          *(undefined8 *)(this + 0x688) = *(undefined8 *)((ulong)uStack_27 * 0x100 + 0x60);
        }
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)((ulong)uStack_27 << 8);
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
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
LAB_001007d0:
  this[0x680] = (TileMapEditorPlugin)0x0;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TilesEditorUtils::~TilesEditorUtils() */

void __thiscall TilesEditorUtils::~TilesEditorUtils(TilesEditorUtils *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a240;
  cVar4 = Thread::is_started();
  if (cVar4 != '\0') {
    this[0x228] = (TilesEditorUtils)0x1;
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1b8));
    if (iVar5 != 0) goto LAB_00100c20;
    *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1b8));
    while (this[0x229] == (TilesEditorUtils)0x0) {
      plVar7 = (long *)OS::get_singleton();
      (**(code **)(*plVar7 + 0x1f8))(plVar7,10000);
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0x11d0))(plVar7);
    }
    Thread::wait_to_finish();
  }
  singleton = 0;
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x230));
  if (iVar5 == 0) {
    if (*(int *)(this + 0x28c) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 600));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x230));
    std::condition_variable::~condition_variable((condition_variable *)(this + 600));
    Thread::~Thread((Thread *)(this + 0x218));
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1b8));
    if (iVar5 == 0) {
      if (*(int *)(this + 0x214) != 0) {
        _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                         "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                         ,0,1);
        std::condition_variable::condition_variable((condition_variable *)(this + 0x1e0));
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1b8));
      std::condition_variable::~condition_variable((condition_variable *)(this + 0x1e0));
      plVar7 = *(long **)(this + 0x188);
      if (plVar7 != (long *)0x0) {
        do {
          plVar1 = (long *)*plVar7;
          if (plVar1 == (long *)0x0) {
            if ((int)plVar7[2] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00100a34;
            }
            break;
          }
          if ((long *)plVar1[6] == plVar7) {
            lVar6 = plVar1[4];
            lVar2 = plVar1[5];
            *plVar7 = lVar6;
            if (plVar1 == (long *)plVar7[1]) {
              plVar7[1] = lVar2;
            }
            if (lVar2 != 0) {
              *(long *)(lVar2 + 0x20) = lVar6;
              lVar6 = plVar1[4];
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x28) = lVar2;
            }
            Callable::~Callable((Callable *)(plVar1 + 2));
            if ((plVar1[1] == 0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) {
LAB_001009f0:
              lVar6 = *plVar1;
            }
            else {
              pOVar3 = (Object *)plVar1[1];
              cVar4 = predelete_handler(pOVar3);
              if (cVar4 == '\0') goto LAB_001009f0;
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
              lVar6 = *plVar1;
            }
            if ((lVar6 != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              pOVar3 = (Object *)*plVar1;
              cVar4 = predelete_handler(pOVar3);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
            Memory::free_static(plVar1,false);
            *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar7 = *(long **)(this + 0x188);
        } while ((int)plVar7[2] != 0);
        Memory::free_static(plVar7,false);
      }
LAB_00100a34:
      Object::~Object((Object *)this);
      return;
    }
  }
LAB_00100c20:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar5);
}



/* TilesEditorUtils::~TilesEditorUtils() */

void __thiscall TilesEditorUtils::~TilesEditorUtils(TilesEditorUtils *this)

{
  ~TilesEditorUtils(this);
  operator_delete(this,0x290);
  return;
}



/* TilesEditorUtils::queue_pattern_preview(Ref<TileSet>, Ref<TileMapPattern>, Callable) */

void __thiscall
TilesEditorUtils::queue_pattern_preview
          (TilesEditorUtils *this,long *param_2,long *param_3,Callable *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  char *pcVar6;
  undefined8 uVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x94;
      pcVar6 = "Condition \"p_tile_set.is_null()\" is true.";
LAB_00100fba:
      _err_print_error("queue_pattern_preview","editor/plugins/tiles/tiles_editor_plugin.cpp",uVar7,
                       pcVar6,0,0);
      return;
    }
    goto LAB_0010100b;
  }
  if (*param_3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x95;
      pcVar6 = "Condition \"p_pattern.is_null()\" is true.";
      goto LAB_00100fba;
    }
    goto LAB_0010100b;
  }
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 400));
  if (iVar4 != 0) goto LAB_00101004;
  pOVar8 = (Object *)*param_2;
  local_68 = (Object *)0x0;
  if (pOVar8 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    local_68 = pOVar8;
    if (cVar3 == '\0') {
      local_68 = (Object *)0x0;
    }
  }
  local_60 = (Object *)0x0;
  pOVar8 = (Object *)*param_3;
  if (pOVar8 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    local_60 = pOVar8;
    if (cVar3 == '\0') {
      local_60 = (Object *)0x0;
    }
  }
  Callable::Callable(local_58,param_4);
  if (*(long *)(this + 0x188) == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x188) = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  pauVar5 = (undefined1 (*) [16])operator_new(0x38,DefaultAllocator::alloc);
  *pauVar5 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar5[1] = 0;
  *(undefined8 *)(pauVar5[1] + 8) = 0;
  *(undefined8 *)pauVar5[3] = 0;
  pauVar5[2] = (undefined1  [16])0x0;
  if (local_68 == (Object *)0x0) {
    if (local_60 != (Object *)0x0) {
      *(Object **)(*pauVar5 + 8) = local_60;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar8 = (Object *)0x0;
LAB_00100d86:
        *(undefined8 *)(*pauVar5 + 8) = 0;
        goto LAB_00100d8e;
      }
    }
  }
  else {
    *(Object **)*pauVar5 = local_68;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)*pauVar5 = 0;
    }
    pOVar8 = *(Object **)(*pauVar5 + 8);
    if (local_60 != pOVar8) {
      *(Object **)(*pauVar5 + 8) = local_60;
      if (local_60 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00100d86;
      }
LAB_00100d8e:
      if (pOVar8 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar8);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
      }
    }
  }
  Callable::operator=((Callable *)(pauVar5 + 1),local_58);
  plVar1 = *(long **)(this + 0x188);
  lVar2 = plVar1[1];
  *(undefined8 *)pauVar5[2] = 0;
  *(long **)pauVar5[3] = plVar1;
  *(long *)(pauVar5[2] + 8) = lVar2;
  if (lVar2 != 0) {
    *(undefined1 (**) [16])(lVar2 + 0x20) = pauVar5;
  }
  plVar1[1] = (long)pauVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)pauVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  Callable::~Callable(local_58);
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_68 + 0x140))(local_68);
        Memory::free_static(local_68,false);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 400));
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1b8));
  if (iVar4 != 0) {
LAB_00101004:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
  std::condition_variable::notify_one();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1b8));
    return;
  }
LAB_0010100b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TilesEditorUtils::set_sources_lists_current(int) */

void __thiscall TilesEditorUtils::set_sources_lists_current(TilesEditorUtils *this,int param_1)

{
  *(int *)(this + 0x174) = param_1;
  return;
}



/* TilesEditorUtils::synchronize_sources_list(Object*, Object*) */

void __thiscall
TilesEditorUtils::synchronize_sources_list(TilesEditorUtils *this,Object *param_1,Object *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    plVar3 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&ItemList::typeinfo,0);
    if (param_2 == (Object *)0x0) {
      if (plVar3 != (long *)0x0) goto LAB_001012ad;
    }
    else {
      lVar4 = __dynamic_cast(param_2,&Object::typeinfo,&MenuButton::typeinfo,0);
      if (plVar3 != (long *)0x0) {
        if (lVar4 != 0) {
          cVar1 = CanvasItem::is_visible_in_tree();
          if (cVar1 == '\0') {
            cVar1 = CanvasItem::is_visible_in_tree();
          }
          else {
            iVar7 = 0;
            do {
              iVar2 = MenuButton::get_popup();
              iVar8 = iVar7 + 1;
              PopupMenu::set_item_checked(iVar2,SUB41(iVar7,0));
              iVar7 = iVar8;
            } while (iVar8 != 4);
            cVar1 = CanvasItem::is_visible_in_tree();
          }
          if (cVar1 != '\0') {
            iVar7 = *(int *)(this + 0x174);
            if ((synchronize_sources_list(Object*,Object*)::{lambda()#1}::operator()()::sname ==
                 '\0') &&
               (iVar2 = __cxa_guard_acquire(&synchronize_sources_list(Object*,Object*)::{lambda()#1}
                                             ::operator()()::sname), iVar2 != 0)) {
              _scs_create((char *)&synchronize_sources_list(Object*,Object*)::{lambda()#1}::
                                   operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &synchronize_sources_list(Object*,Object*)::{lambda()#1}::operator()()::
                            sname,&__dso_handle);
              __cxa_guard_release(&synchronize_sources_list(Object*,Object*)::{lambda()#1}::
                                   operator()()::sname);
            }
            local_60 = (undefined1  [16])0x0;
            local_68 = 0;
            (**(code **)(*plVar3 + 0xd0))
                      (plVar3,&synchronize_sources_list(Object*,Object*)::{lambda()#1}::operator()()
                               ::sname,0,0);
            if (Variant::needs_deinit[(int)local_68] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)(this + 0x174) = iVar7;
            if ((iVar7 < 0) || (iVar2 = ItemList::get_item_count(), iVar2 <= iVar7)) {
              if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                ItemList::deselect_all();
                return;
              }
              goto LAB_00101337;
            }
            ItemList::set_current((int)plVar3);
            ItemList::ensure_current_is_visible();
            lVar4 = SceneStringNames::singleton + 0x260;
            Variant::Variant((Variant *)&local_68,*(int *)(this + 0x174));
            local_48 = (undefined1  [16])0x0;
            local_50 = 0;
            local_78[0] = (Variant *)&local_68;
            (**(code **)(*plVar3 + 0xd0))(plVar3,lVar4,local_78,1);
            if (Variant::needs_deinit[(int)local_50] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_68] != '\0') {
              Variant::_clear_internal();
            }
          }
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00101337;
        }
LAB_001012ad:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = 0xa5;
          pcVar5 = "Parameter \"sorting_button\" is null.";
          goto LAB_001012cf;
        }
        goto LAB_00101337;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = 0xa4;
    pcVar5 = "Parameter \"item_list\" is null.";
LAB_001012cf:
    _err_print_error("synchronize_sources_list","editor/plugins/tiles/tiles_editor_plugin.cpp",uVar6
                     ,pcVar5,0,0);
    return;
  }
LAB_00101337:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TilesEditorUtils::set_atlas_view_transform(float, Vector2) */

void __thiscall
TilesEditorUtils::set_atlas_view_transform
          (undefined4 param_1,undefined8 param_2,TilesEditorUtils *this)

{
  *(undefined4 *)(this + 0x178) = param_1;
  *(undefined8 *)(this + 0x17c) = param_2;
  return;
}



/* TilesEditorUtils::synchronize_atlas_view(Object*) */

void __thiscall TilesEditorUtils::synchronize_atlas_view(TilesEditorUtils *this,Object *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  
  if (param_1 != (Object *)0x0) {
    lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&TileAtlasView::typeinfo,0);
    if (lVar3 != 0) {
      cVar2 = CanvasItem::is_visible_in_tree();
      if (cVar2 == '\0') {
        return;
      }
      uVar1 = Vector2::operator_cast_to_Vector2i((Vector2 *)(this + 0x17c));
      TileAtlasView::set_transform(*(undefined4 *)(this + 0x178),lVar3,uVar1);
      return;
    }
  }
  _err_print_error("synchronize_atlas_view","editor/plugins/tiles/tiles_editor_plugin.cpp",0xc4,
                   "Parameter \"tile_atlas_view\" is null.",0,0);
  return;
}



/* TilesEditorUtils::set_sorting_option(int) */

void __thiscall TilesEditorUtils::set_sorting_option(TilesEditorUtils *this,int param_1)

{
  *(int *)(this + 0x184) = param_1;
  return;
}



/* TilesEditorUtils::display_tile_set_editor_panel() */

void TilesEditorUtils::display_tile_set_editor_panel(void)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    EditorBottomPanel::hide_bottom_panel();
  }
                    /* WARNING: Could not recover jumptable at 0x00101449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*tile_set_plugin_singleton + 0x210))(tile_set_plugin_singleton,1);
  return;
}



/* TilesEditorUtils::draw_selection_rect(CanvasItem*, Rect2 const&, Color const&) */

void TilesEditorUtils::draw_selection_rect(CanvasItem *param_1,Rect2 *param_2,Color *param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  float fVar8;
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar7 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    pOVar7 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar7 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::operator()()::sname
       == '\0') &&
     (iVar4 = __cxa_guard_acquire(&draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::
                                   {lambda()#1}::operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::
                         operator()()::sname);
    (*pcVar2)(&local_80,pOVar7,
              &draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::
               operator()()::sname,lVar1);
    cVar3 = RefCounted::unreference();
  }
  else {
    (*pcVar2)(&local_80,pOVar7,
              &draw_selection_rect(CanvasItem*,Rect2_const&,Color_const&)::{lambda()#1}::
               operator()()::sname,lVar1);
    cVar3 = RefCounted::unreference();
  }
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  (**(code **)(*(long *)param_1 + 0x298))(&local_58,param_1);
  fVar8 = (float)Transform2D::get_scale();
  fVar8 = fVar8 * (float)_LC56;
  local_58 = CONCAT44((float)_LC57 / fVar8,(float)_LC57 / fVar8);
  CanvasItem::draw_set_transform(param_1,0.0,param_2);
  plVar5 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar5 + 0xf40);
  local_70 = _LC58;
  local_78 = _LC58;
  uVar6 = (**(code **)(*(long *)local_80 + 0x1c0))();
  local_58 = 0;
  local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar8,
                      (float)*(undefined8 *)(param_2 + 8) * fVar8);
  local_50 = 0;
  local_68 = 0;
  (*pcVar2)(plVar5,*(undefined8 *)(param_1 + 0x428),&local_68,&local_58,uVar6,&local_78,&local_70,0,
            0,0,param_3);
  local_58 = 0x3f800000;
  local_50 = 0x3f80000000000000;
  local_48 = 0;
  CanvasItem::draw_set_transform_matrix((Transform2D *)param_1);
  if (((local_80 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
    (**(code **)(*(long *)local_80 + 0x140))(local_80);
    Memory::free_static(local_80,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::_notification(int) */

void __thiscall TileMapEditorPlugin::_notification(TileMapEditorPlugin *this,int param_1)

{
  Object *pOVar1;
  
  if (param_1 != 0xb) {
    return;
  }
  pOVar1 = *(Object **)(this + 0x240);
  if (pOVar1 == (Object *)0x0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  SceneTree::queue_delete(pOVar1);
  return;
}



/* TileMapEditorPlugin::hide_editor() */

void TileMapEditorPlugin::hide_editor(void)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    return;
  }
  EditorBottomPanel::hide_bottom_panel();
  return;
}



/* TileMapEditorPlugin::is_editor_visible() const */

void TileMapEditorPlugin::is_editor_visible(void)

{
  CanvasItem::is_visible_in_tree();
  return;
}



/* TileSetEditorPlugin::get_edited_tileset() const */

undefined8 __thiscall TileSetEditorPlugin::get_edited_tileset(TileSetEditorPlugin *this)

{
  return *(undefined8 *)(this + 0x670);
}



/* TilesEditorUtils::_preview_frame_started() */

void __thiscall TilesEditorUtils::_preview_frame_started(TilesEditorUtils *this)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  TilesEditorUtils aTStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x11c0);
  create_custom_callable_function_pointer<TilesEditorUtils>
            (aTStack_48,(char *)this,(_func_void *)"&TilesEditorUtils::_pattern_preview_done");
  (*pcVar1)(plVar2,aTStack_48);
  Callable::~Callable((Callable *)aTStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::_tile_map_layer_changed() */

void __thiscall TileMapEditorPlugin::_tile_map_layer_changed(TileMapEditorPlugin *this)

{
  long in_FS_OFFSET;
  TileMapEditorPlugin aTStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x680] == (TileMapEditorPlugin)0x0) {
    this[0x680] = (TileMapEditorPlugin)0x1;
    create_custom_callable_function_pointer<TileMapEditorPlugin>
              (aTStack_48,(char *)this,(_func_void *)"&TileMapEditorPlugin::_update_tile_map");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aTStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aTStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::_edit_tile_map_layer(TileMapLayer*, bool) */

void TileMapEditorPlugin::_edit_tile_map_layer(TileMapLayer *param_1,bool param_2)

{
  code *pcVar1;
  char cVar2;
  undefined7 in_register_00000031;
  long *plVar3;
  long in_FS_OFFSET;
  Object *local_48 [3];
  long local_30;
  
  plVar3 = (long *)CONCAT71(in_register_00000031,param_2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_edit_tile_map_layer","editor/plugins/tiles/tiles_editor_plugin.cpp",0x179,
                       "Parameter \"p_tile_map_layer\" is null.",0,0);
      return;
    }
    goto LAB_00101b3f;
  }
  TileMapLayerEditor::edit(*(Object **)(param_1 + 0x660));
  TileMapLayerEditor::set_show_layer_selector(SUB81(*(undefined8 *)(param_1 + 0x660),0));
  *(long *)(param_1 + 0x670) = plVar3[0xc];
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileMapEditorPlugin>
            ((TileMapEditorPlugin *)local_48,(char *)param_1,
             (_func_void *)"&TileMapEditorPlugin::_tile_map_layer_changed");
  (*pcVar1)(plVar3,CoreStringNames::singleton + 8,local_48,0);
  Callable::~Callable((Callable *)local_48);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileMapEditorPlugin>
            ((TileMapEditorPlugin *)local_48,(char *)param_1,
             (_func_void *)"&TileMapEditorPlugin::_tile_map_layer_removed");
  (*pcVar1)(plVar3,SceneStringNames::singleton + 0x48,local_48,0);
  Callable::~Callable((Callable *)local_48);
  TileMapLayer::get_tile_set();
  if (local_48[0] == (Object *)0x0) {
    (**(code **)(*tile_set_plugin_singleton + 0x220))();
    (**(code **)(*tile_set_plugin_singleton + 0x210))();
    if (local_48[0] != (Object *)0x0) goto LAB_00101a7a;
  }
  else {
    (**(code **)(*tile_set_plugin_singleton + 0x220))();
    (**(code **)(*tile_set_plugin_singleton + 0x210))();
    *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(local_48[0] + 0x60);
LAB_00101a7a:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_48[0]), cVar2 != '\0')) {
      (**(code **)(*(long *)local_48[0] + 0x140))(local_48[0]);
      Memory::free_static(local_48[0],false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101b3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::_edit_tile_map(TileMap*) */

void __thiscall TileMapEditorPlugin::_edit_tile_map(TileMapEditorPlugin *this,TileMap *param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == (TileMap *)0x0) {
    _err_print_error("_edit_tile_map","editor/plugins/tiles/tiles_editor_plugin.cpp",400,
                     "Parameter \"p_tile_map\" is null.",0,0);
    return;
  }
  iVar2 = TileMap::get_layers_count();
  if (0 < iVar2) {
    lVar3 = Node::get_child((int)param_1,false);
    uVar1 = (undefined1)lVar3;
    if (lVar3 != 0) {
      uVar1 = __dynamic_cast(lVar3,&Object::typeinfo,&TileMapLayer::typeinfo,0);
    }
    _edit_tile_map_layer((TileMapLayer *)this,(bool)uVar1);
    return;
  }
  TileMapLayerEditor::edit(*(Object **)(this + 0x660));
  TileMapLayerEditor::set_show_layer_selector(SUB81(*(undefined8 *)(this + 0x660),0));
  return;
}



/* TileMapEditorPlugin::edit(Object*) */

void __thiscall TileMapEditorPlugin::edit(TileMapEditorPlugin *this,Object *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  TileMap *pTVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  bool bVar10;
  TileMapEditorPlugin local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x670) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (TileMapEditorPlugin)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x670) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      uVar1 = puVar8[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar1 != 0) &&
         (plVar3 = (long *)__dynamic_cast(uVar1,&Object::typeinfo,&TileMapLayer::typeinfo,0),
         plVar3 != (long *)0x0)) {
        pcVar2 = *(code **)(*plVar3 + 0x110);
        create_custom_callable_function_pointer<TileMapEditorPlugin>
                  (local_48,(char *)this,
                   (_func_void *)"&TileMapEditorPlugin::_tile_map_layer_changed");
        (*pcVar2)(plVar3,CoreStringNames::singleton + 8,local_48);
        Callable::~Callable((Callable *)local_48);
        pcVar2 = *(code **)(*plVar3 + 0x110);
        create_custom_callable_function_pointer<TileMapEditorPlugin>
                  (local_48,(char *)this,
                   (_func_void *)"&TileMapEditorPlugin::_tile_map_layer_removed");
        (*pcVar2)(plVar3,SceneStringNames::singleton + 0x48,local_48);
        Callable::~Callable((Callable *)local_48);
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
  *(undefined8 *)(this + 0x688) = 0;
  *(undefined1 (*) [16])(this + 0x670) = (undefined1  [16])0x0;
  if (param_1 != (Object *)0x0) {
    pTVar4 = (TileMap *)__dynamic_cast(param_1,&Object::typeinfo,&TileMap::typeinfo,0);
    lVar5 = __dynamic_cast(param_1,&Object::typeinfo,&TileMapLayer::typeinfo,0);
    lVar6 = __dynamic_cast(param_1,&Object::typeinfo,&MultiNodeEdit::typeinfo,0);
    if (pTVar4 != (TileMap *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _edit_tile_map(this,pTVar4);
        return;
      }
      goto LAB_00101ebd;
    }
    if (lVar5 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _edit_tile_map_layer((TileMapLayer *)this,SUB81(lVar5,0));
        return;
      }
      goto LAB_00101ebd;
    }
    pOVar9 = *(Object **)(this + 0x660);
    if (lVar6 != 0) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101ebd;
      goto LAB_00101e5b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    pOVar9 = *(Object **)(this + 0x660);
LAB_00101e5b:
    TileMapLayerEditor::edit(pOVar9);
    return;
  }
LAB_00101ebd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::~TileMapEditorPlugin() */

void __thiscall TileMapEditorPlugin::~TileMapEditorPlugin(TileMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a3a0;
  tile_map_plugin_singleton = 0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* TileMapEditorPlugin::~TileMapEditorPlugin() */

void __thiscall TileMapEditorPlugin::~TileMapEditorPlugin(TileMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a3a0;
  tile_map_plugin_singleton = 0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x690);
  return;
}



/* TileSetEditorPlugin::~TileSetEditorPlugin() */

void __thiscall TileSetEditorPlugin::~TileSetEditorPlugin(TileSetEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a648;
  tile_set_plugin_singleton = 0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* TileSetEditorPlugin::~TileSetEditorPlugin() */

void __thiscall TileSetEditorPlugin::~TileSetEditorPlugin(TileSetEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a648;
  tile_set_plugin_singleton = 0;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x678);
  return;
}



/* TilesEditorUtils::TilesEditorUtils() */

void __thiscall TilesEditorUtils::TilesEditorUtils(TilesEditorUtils *this)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010a240;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x178) = 0x3f800000;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a0) = 1;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x1e0));
  *(undefined8 *)(this + 0x210) = 0;
  Thread::Thread((Thread *)(this + 0x218));
  this[0x228] = (TilesEditorUtils)0x0;
  this[0x229] = (TilesEditorUtils)0x0;
  *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 600));
  *(undefined8 *)(this + 0x288) = 0;
  local_38 = CONCAT44(local_38._4_4_,1);
  singleton = this;
  Thread::start((_func_void_void_ptr *)(this + 0x218),_thread_func,(Settings *)this);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Cut");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/cut");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x1000058,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Copy");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/copy");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x1000043,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Paste");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/paste");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x1000056,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Cancel");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/cancel");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x400001,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Delete");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/delete");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x400008,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Paint Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/paint_tool");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x44,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Line Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/line_tool");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x4c,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Rect Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/rect_tool");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x52,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Bucket Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/bucket_tool");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x42,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Eraser Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/eraser");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x45,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  local_38 = 0;
  String::parse_latin1((String *)&local_38,"Picker Tool");
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"tiles_editor/picker");
  ED_SHORTCUT(&local_48,(String *)&local_40,(String *)&local_38,0x50,0);
  if (local_48 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::TileMapEditorPlugin() */

void __thiscall TileMapEditorPlugin::TileMapEditorPlugin(TileMapEditorPlugin *this)

{
  Vector2 *pVVar1;
  undefined8 uVar2;
  char cVar3;
  TileMapLayerEditor *this_00;
  undefined8 uVar4;
  TilesEditorUtils *this_01;
  long in_FS_OFFSET;
  bool bVar5;
  float fVar6;
  undefined8 local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  bVar5 = TilesEditorUtils::singleton == 0;
  *(undefined ***)this = &PTR__initialize_classv_0010a3a0;
  this[0x680] = (TileMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x688) = 0;
  *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x670) = (undefined1  [16])0x0;
  if (bVar5) {
    this_01 = (TilesEditorUtils *)operator_new(0x290,"");
    TilesEditorUtils::TilesEditorUtils(this_01);
    postinitialize_handler((Object *)this_01);
  }
  tile_map_plugin_singleton = this;
  this_00 = (TileMapLayerEditor *)operator_new(0xad8,"");
  TileMapLayerEditor::TileMapLayerEditor(this_00);
  postinitialize_handler((Object *)this_00);
  *(TileMapLayerEditor **)(this + 0x660) = this_00;
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x660),3);
  pVVar1 = *(Vector2 **)(this + 0x660);
  fVar6 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar6 * _LC95._4_4_,fVar6 * (float)_LC95);
  Control::set_custom_minimum_size(pVVar1);
  CanvasItem::hide();
  local_60 = 0;
  uVar4 = *(undefined8 *)(EditorNode::singleton + 0xa40);
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Toggle TileMap Bottom Panel";
  local_68 = 0;
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "bottom_panels/toggle_tile_map_bottom_panel";
  local_70 = 0;
  local_50 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT_AND_COMMAND
            (&local_78,(StrRange *)&local_70,(StrRange *)&local_68,0,(StrRange *)&local_60);
  uVar2 = *(undefined8 *)(this + 0x660);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = "TileMap";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_58,(String *)&local_88);
  uVar4 = EditorBottomPanel::add_item(uVar4,(String *)&local_58,uVar2,&local_78,0);
  *(undefined8 *)(this + 0x668) = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_78 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_78);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditorPlugin::TileSetEditorPlugin() */

void __thiscall TileSetEditorPlugin::TileSetEditorPlugin(TileSetEditorPlugin *this)

{
  Vector2 *pVVar1;
  undefined8 uVar2;
  char cVar3;
  TileSetEditor *this_00;
  undefined8 uVar4;
  TilesEditorUtils *this_01;
  long in_FS_OFFSET;
  bool bVar5;
  float fVar6;
  undefined8 local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  bVar5 = TilesEditorUtils::singleton == 0;
  *(undefined ***)this = &PTR__initialize_classv_0010a648;
  *(undefined8 *)(this + 0x670) = 0;
  *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
  if (bVar5) {
    this_01 = (TilesEditorUtils *)operator_new(0x290,"");
    TilesEditorUtils::TilesEditorUtils(this_01);
    postinitialize_handler((Object *)this_01);
  }
  tile_set_plugin_singleton = this;
  this_00 = (TileSetEditor *)operator_new(0xaa0,"");
  TileSetEditor::TileSetEditor(this_00);
  postinitialize_handler((Object *)this_00);
  *(TileSetEditor **)(this + 0x660) = this_00;
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x660),3);
  pVVar1 = *(Vector2 **)(this + 0x660);
  fVar6 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar6 * _LC95._4_4_,fVar6 * (float)_LC95);
  Control::set_custom_minimum_size(pVVar1);
  CanvasItem::hide();
  local_60 = 0;
  uVar4 = *(undefined8 *)(EditorNode::singleton + 0xa40);
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Toggle TileSet Bottom Panel";
  local_68 = 0;
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "bottom_panels/toggle_tile_set_bottom_panel";
  local_70 = 0;
  local_50 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT_AND_COMMAND
            (&local_78,(StrRange *)&local_70,(StrRange *)&local_68,0,(StrRange *)&local_60);
  uVar2 = *(undefined8 *)(this + 0x660);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = "TileSet";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_58,(String *)&local_88);
  uVar4 = EditorBottomPanel::add_item(uVar4,(String *)&local_58,uVar2,&local_78,0);
  *(undefined8 *)(this + 0x668) = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_78 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_78);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
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



/* TileMapEditorPlugin::_select_layer(StringName const&) */

void __thiscall TileMapEditorPlugin::_select_layer(TileMapEditorPlugin *this,StringName *param_1)

{
  ulong uVar1;
  long lVar2;
  NodePath *pNVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_50;
  NodePath local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x670) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (NodePath)0x0;
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x670) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar1 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar1 != 0) &&
         (lVar2 = __dynamic_cast(uVar1,&Object::typeinfo,&TileMapLayer::typeinfo,0), lVar2 != 0)) {
        pNVar3 = (NodePath *)Node::get_parent();
        if (pNVar3 == (NodePath *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          lVar2 = *(long *)param_1;
          if (lVar2 == 0) {
            local_50 = 0;
          }
          else {
            local_50 = 0;
            if (*(char **)(lVar2 + 8) == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_50,*(char **)(lVar2 + 8));
            }
          }
          NodePath::NodePath(local_48,(String *)&local_50);
          lVar2 = Node::get_node_or_null(pNVar3);
          if (lVar2 != 0) {
            lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&TileMapLayer::typeinfo,0);
          }
          NodePath::~NodePath(local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)this + 0x220))(this,lVar2);
            return;
          }
        }
        goto LAB_00103047;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_select_layer","editor/plugins/tiles/tiles_editor_plugin.cpp",0x16f,
                     "Parameter \"edited_layer\" is null.",0,0);
    return;
  }
LAB_00103047:
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



/* TilesEditorUtils::_thread() */

void __thiscall TilesEditorUtils::_thread(TilesEditorUtils *this)

{
  Variant *pVVar1;
  pthread_mutex_t *ppVar2;
  float fVar3;
  float fVar4;
  TilesEditorUtils TVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  SubViewport *this_00;
  TileMap *this_01;
  Variant *pVVar15;
  Object *pOVar16;
  CallableCustom *this_02;
  long *plVar17;
  bool bVar18;
  int iVar19;
  Object *pOVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  Array local_198 [8];
  Object *local_190;
  Object *local_188;
  Object *local_180;
  undefined8 local_178;
  uint local_170;
  pthread_mutex_t *local_168;
  Object *local_160;
  Callable local_158 [16];
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined1 auStack_110 [24];
  Variant local_f8 [24];
  Variant local_e0 [24];
  Variant local_c8 [24];
  Variant local_b0 [8];
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x229] = (TilesEditorUtils)0x0;
LAB_001031f2:
  TVar5 = this[0x228];
  do {
    if (TVar5 != (TilesEditorUtils)0x0) {
      this[0x229] = (TilesEditorUtils)0x1;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_160 = (Object *)((ulong)local_160 & 0xffffffffffffff00);
    local_168 = (pthread_mutex_t *)(this + 0x1b8);
    iVar11 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x1b8));
    if (iVar11 != 0) goto LAB_001042f5;
    local_160 = (Object *)CONCAT71(local_160._1_7_,1);
    iVar11 = *(int *)(this + 0x214);
    *(int *)(this + 0x214) = iVar11 + 1;
    if (*(int *)(this + 0x210) == 0) {
      do {
        std::condition_variable::wait((unique_lock *)(this + 0x1e0));
      } while (*(int *)(this + 0x210) == 0);
      *(int *)(this + 0x214) = *(int *)(this + 0x214) + -1;
      *(int *)(this + 0x210) = *(int *)(this + 0x210) + -1;
      if ((char)local_160 != '\0') goto LAB_00103347;
    }
    else {
      *(int *)(this + 0x214) = iVar11;
      *(int *)(this + 0x210) = *(int *)(this + 0x210) + -1;
LAB_00103347:
      if (local_168 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(local_168);
      }
    }
    ppVar2 = (pthread_mutex_t *)(this + 400);
    iVar11 = pthread_mutex_lock(ppVar2);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
    }
    puVar6 = *(undefined8 **)(this + 0x188);
    if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) != 0)) break;
    pthread_mutex_unlock(ppVar2);
    TVar5 = this[0x228];
  } while( true );
  puVar6 = (undefined8 *)*puVar6;
  local_168 = (pthread_mutex_t *)0x0;
  if (((pthread_mutex_t *)*puVar6 != (pthread_mutex_t *)0x0) &&
     (local_168 = (pthread_mutex_t *)*puVar6, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
    local_168 = (pthread_mutex_t *)0x0;
  }
  local_160 = (Object *)0x0;
  if (((Object *)puVar6[1] != (Object *)0x0) &&
     (local_160 = (Object *)puVar6[1], cVar10 = RefCounted::reference(), cVar10 == '\0')) {
    local_160 = (Object *)0x0;
  }
  Callable::Callable(local_158,(Callable *)(puVar6 + 2));
  plVar17 = *(long **)(this + 0x188);
  if ((plVar17 != (long *)0x0) && (plVar7 = (long *)*plVar17, plVar7 != (long *)0x0)) {
    if (plVar17 == (long *)plVar7[6]) {
      lVar14 = plVar7[4];
      lVar8 = plVar7[5];
      *plVar17 = lVar14;
      if (plVar7 == (long *)plVar17[1]) {
        plVar17[1] = lVar8;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x20) = lVar14;
        lVar14 = plVar7[4];
      }
      if (lVar14 != 0) {
        *(long *)(lVar14 + 0x28) = lVar8;
      }
      Callable::~Callable((Callable *)(plVar7 + 2));
      if ((plVar7[1] != 0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
        pOVar16 = (Object *)plVar7[1];
        cVar10 = predelete_handler(pOVar16);
        if (cVar10 != '\0') {
          (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
          Memory::free_static(pOVar16,false);
        }
      }
      if ((*plVar7 != 0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
        pOVar16 = (Object *)*plVar7;
        cVar10 = predelete_handler(pOVar16);
        if (cVar10 != '\0') {
          (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
          Memory::free_static(pOVar16,false);
        }
      }
      Memory::free_static(plVar7,false);
      *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0x188) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0x188),false);
      *(undefined8 *)(this + 0x188) = 0;
    }
  }
  pthread_mutex_unlock(ppVar2);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  String::parse_latin1((String *)&local_178,"filesystem/file_dialog/thumbnail_size");
  _EDITOR_GET((String *)local_118);
  iVar11 = Variant::operator_cast_to_int((Variant *)local_118);
  if (Variant::needs_deinit[(int)local_118._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  fVar21 = (float)EditorScale::get_scale();
  local_148 = CONCAT44((float)(int)((float)iVar11 * fVar21),(float)(int)((float)iVar11 * fVar21));
  if ((local_160 == (Object *)0x0) || (cVar10 = TileMapPattern::is_empty(), cVar10 != '\0'))
  goto LAB_00103567;
  this_00 = (SubViewport *)operator_new(0x998,"");
  SubViewport::SubViewport(this_00);
  postinitialize_handler((Object *)this_00);
  local_118 = (undefined1  [8])Vector2::operator_cast_to_Vector2i((Vector2 *)&local_148);
  SubViewport::set_size(this_00);
  Viewport::set_disable_input(SUB81(this_00,0));
  Viewport::set_transparent_background(SUB81(this_00,0));
  SubViewport::set_update_mode(this_00,1);
  this_01 = (TileMap *)operator_new(0x650,"");
  TileMap::TileMap(this_01);
  postinitialize_handler((Object *)this_01);
  TileMap::set_tileset((Ref *)this_01);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  Ref<TileMapPattern>::operator=((Ref<TileMapPattern> *)&local_178,(Ref *)local_160);
  local_128 = 0;
  local_118 = (undefined1  [8])Vector2::operator_cast_to_Vector2i((Vector2 *)&local_128);
  TileMap::set_pattern(this_01,0,(String *)local_118,(String *)&local_178);
  if ((CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) &&
     (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
    pOVar16 = (Object *)CONCAT44(local_178._4_4_,(undefined4)local_178);
    cVar10 = predelete_handler(pOVar16);
    if (cVar10 != '\0') {
      (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
      Memory::free_static(pOVar16,false);
    }
  }
  Node::add_child(this_00,this_01,0,0);
  iVar19 = (int)local_198;
  TileMap::get_used_cells(iVar19);
  uStack_120 = 0;
  pVVar15 = (Variant *)Array::operator[](iVar19);
  local_118 = (undefined1  [8])Variant::operator_cast_to_Vector2i(pVVar15);
  local_128 = TileMap::map_to_local(this_01);
  fVar21 = 0.0;
  for (iVar11 = 0; iVar12 = Array::size(), iVar11 < iVar12; iVar11 = iVar11 + 1) {
    pVVar15 = (Variant *)Array::operator[](iVar19);
    local_138 = Variant::operator_cast_to_Vector2i(pVVar15);
    uVar22 = TileMap::map_to_local(this_01);
    if ((fVar21 < 0.0) || (uStack_120._4_4_ < 0.0)) {
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
    }
    fVar24 = (float)uVar22;
    fVar26 = (float)((ulong)uVar22 >> 0x20);
    fVar3 = fVar24;
    if ((float)local_128 <= fVar24) {
      fVar3 = (float)local_128;
    }
    fVar28 = fVar24;
    if (fVar24 <= fVar21 + (float)local_128) {
      fVar28 = fVar21 + (float)local_128;
    }
    fVar4 = fVar26;
    if (local_128._4_4_ <= fVar26) {
      fVar4 = local_128._4_4_;
    }
    fVar27 = fVar26;
    if (fVar26 <= uStack_120._4_4_ + local_128._4_4_) {
      fVar27 = uStack_120._4_4_ + local_128._4_4_;
    }
    local_128 = CONCAT44(fVar4,fVar3);
    fVar21 = fVar28 - fVar3;
    uStack_120 = CONCAT44(fVar27 - fVar4,fVar21);
    bVar18 = SUB81(&local_138,0);
    iVar12 = (int)this_01;
    TileMap::get_cell_source_id(iVar12,(Vector2i *)0x0,bVar18);
    TileSet::get_source((int)(String *)&local_178);
    if (CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) {
      pOVar16 = (Object *)
                __dynamic_cast(CONCAT44(local_178._4_4_,(undefined4)local_178),&Object::typeinfo,
                               &TileSetAtlasSource::typeinfo,0);
      if (pOVar16 == (Object *)0x0) {
        cVar10 = RefCounted::unreference();
        if (cVar10 != '\0') {
          pOVar20 = (Object *)CONCAT44(local_178._4_4_,(undefined4)local_178);
          cVar10 = predelete_handler(pOVar20);
joined_r0x001042e0:
          if (cVar10 != '\0') {
LAB_00103ece:
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
            if (pOVar16 != (Object *)0x0) goto LAB_0010395c;
          }
        }
      }
      else {
        cVar10 = RefCounted::reference();
        if (cVar10 == '\0') {
          if ((CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) &&
             (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
            pOVar20 = (Object *)CONCAT44(local_178._4_4_,(undefined4)local_178);
            pOVar16 = (Object *)0x0;
            cVar10 = predelete_handler(pOVar20);
            goto joined_r0x001042e0;
          }
        }
        else {
          if ((CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) &&
             (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
            pOVar20 = (Object *)CONCAT44(local_178._4_4_,(undefined4)local_178);
            cVar10 = predelete_handler(pOVar20);
            if (cVar10 != '\0') goto LAB_00103ece;
          }
LAB_0010395c:
          uVar22 = TileMap::get_cell_atlas_coords(iVar12,(Vector2i *)0x0,bVar18);
          uVar13 = TileMap::get_cell_alternative_tile(iVar12,(Vector2i *)0x0,bVar18);
          cVar10 = (**(code **)(*(long *)pOVar16 + 0x278))(pOVar16);
          if ((cVar10 != '\0') &&
             (cVar10 = (**(code **)(*(long *)pOVar16 + 0x290))(pOVar16,uVar22,uVar13),
             cVar10 != '\0')) {
            TileSetAtlasSource::get_tile_data(pOVar16,uVar22,uVar13);
            local_118 = (undefined1  [8])TileData::get_texture_origin();
            uVar23 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_118);
            fVar24 = fVar24 - (float)uVar23;
            fVar26 = fVar26 - (float)((ulong)uVar23 >> 0x20);
            auVar29 = TileSetAtlasSource::get_tile_texture_region(pOVar16,uVar22,0);
            _local_118 = auVar29;
            local_130 = Vector2i::operator/((Vector2i *)auStack_110,2);
            uVar23 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_130);
            local_140 = CONCAT44(fVar26 - (float)((ulong)uVar23 >> 0x20),fVar24 - (float)uVar23);
            Rect2::expand_to((Rect2 *)&local_128,(Vector2 *)&local_140);
            auVar29 = TileSetAtlasSource::get_tile_texture_region(pOVar16,uVar22,0);
            local_118 = auVar29._0_8_;
            auStack_110._0_8_ = auVar29._8_8_;
            local_130 = Vector2i::operator/((Vector2i *)auStack_110,2);
            uVar22 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_130);
            local_140 = CONCAT44((float)((ulong)uVar22 >> 0x20) + fVar26,(float)uVar22 + fVar24);
            Rect2::expand_to((Rect2 *)&local_128,(Vector2 *)&local_140);
          }
          cVar10 = RefCounted::unreference();
          if (cVar10 == '\0') {
            fVar21 = (float)uStack_120;
          }
          else {
            cVar10 = predelete_handler(pOVar16);
            fVar21 = (float)uStack_120;
            if (cVar10 != '\0') {
              (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
              Memory::free_static(pOVar16,false);
            }
          }
        }
      }
    }
  }
  fVar3 = fVar21;
  if (fVar21 <= uStack_120._4_4_) {
    fVar3 = uStack_120._4_4_;
  }
  fVar21 = fVar21 * (float)_LC56;
  fVar24 = uStack_120._4_4_ * _LC56._4_4_;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_148;
  auVar29._4_4_ = fVar3;
  auVar29._0_4_ = fVar3;
  auVar29._8_8_ = _LC57;
  auVar29 = divps(auVar25,auVar29);
  local_130 = auVar29._0_8_;
  Node2D::set_scale(this_01);
  local_118 = (undefined1  [8])
              CONCAT44((float)(local_148 >> 0x20) * _LC56._4_4_ -
                       (float)((ulong)local_130 >> 0x20) *
                       ((float)((ulong)local_128 >> 0x20) + fVar24),
                       (float)local_148 * (float)_LC56 -
                       (float)local_130 * ((float)local_128 + fVar21));
  Node2D::set_position(this_01);
  lVar14 = EditorNode::singleton;
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(long *)(this_02 + 0x28) = lVar14;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC60;
  *(undefined ***)this_02 = &PTR_hash_0010a980;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar22 = *(undefined8 *)(lVar14 + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar22;
  *(code **)(this_02 + 0x38) = Node::add_child;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "Node::add_child";
  Callable::Callable((Callable *)&local_178,this_02);
  Variant::Variant((Variant *)&local_a8,(Object *)this_00);
  Variant::Variant(local_90,false);
  Variant::Variant(local_78,0);
  Variant::Variant(local_60,0);
  pVVar15 = local_48;
  auStack_110._8_8_ = local_78;
  auStack_110._0_8_ = local_90;
  local_118 = (undefined1  [8])&local_a8;
  Callable::call_deferredp((Variant **)&local_178,(int)(String *)local_118);
  do {
    pVVar1 = pVVar15 + -0x18;
    pVVar15 = pVVar15 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar15 != (Variant *)&local_a8);
  Callable::~Callable((Callable *)&local_178);
  plVar17 = (long *)RenderingServer::get_singleton();
  pcVar9 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<TilesEditorUtils>
            ((TilesEditorUtils *)&local_178,(char *)this,
             (_func_void *)"&TilesEditorUtils::_preview_frame_started");
  if ((_thread()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar11 = __cxa_guard_acquire(&_thread()::{lambda()#1}::operator()()::sname), iVar11 != 0)) {
    _scs_create((char *)&_thread()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_thread()::{lambda()#1}::operator()()::sname,&__dso_handle
                );
    __cxa_guard_release(&_thread()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar9)(plVar17,&_thread()::{lambda()#1}::operator()()::sname,(String *)&local_178,4);
  Callable::~Callable((Callable *)&local_178);
  local_170 = local_170 & 0xffffff00;
  local_178 = (pthread_mutex_t *)(this + 0x230);
  iVar11 = pthread_mutex_lock(local_178);
  if (iVar11 != 0) {
LAB_001042f5:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar11);
  }
  local_170 = CONCAT31(local_170._1_3_,1);
  iVar11 = *(int *)(this + 0x28c);
  *(int *)(this + 0x28c) = iVar11 + 1;
  if (*(int *)(this + 0x288) == 0) {
    do {
      std::condition_variable::wait((unique_lock *)(this + 600));
    } while (*(int *)(this + 0x288) == 0);
    *(int *)(this + 0x28c) = *(int *)(this + 0x28c) + -1;
    *(int *)(this + 0x288) = *(int *)(this + 0x288) + -1;
    if ((char)local_170 != '\0') goto LAB_001040a9;
  }
  else {
    *(int *)(this + 0x28c) = iVar11;
    *(int *)(this + 0x288) = *(int *)(this + 0x288) + -1;
LAB_001040a9:
    if (local_178 != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(local_178);
    }
  }
  Viewport::get_texture();
  (**(code **)(local_178->__align + 0x210))(&local_190);
  if (local_178 != (pthread_mutex_t *)0x0) {
    cVar10 = RefCounted::unreference();
    ppVar2 = local_178;
    if (cVar10 != '\0') {
      cVar10 = predelete_handler((Object *)&local_178->__data);
      if (cVar10 != '\0') {
        (**(code **)(ppVar2->__align + 0x140))(ppVar2);
        Memory::free_static(ppVar2,false);
      }
    }
  }
  pVVar15 = local_b0;
  ImageTexture::create_from_image((Ref *)&local_188);
  local_180 = (Object *)0x0;
  Ref<TileMapPattern>::operator=((Ref<TileMapPattern> *)&local_180,(Ref *)local_160);
  pOVar16 = local_180;
  Variant::Variant(local_f8,local_180);
  Variant::Variant(local_e0,local_188);
  Variant::Variant(local_c8,0);
  local_118 = (undefined1  [8])((ulong)local_118 & 0xffffffff00000000);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  local_170 = 0;
  auStack_110._0_16_ = (undefined1  [16])0x0;
  local_a8 = local_f8;
  pVStack_a0 = local_e0;
  Callable::callp((Variant **)local_158,(int)(Variant *)&local_a8,(Variant *)0x2,
                  (CallError *)local_118);
  do {
    pVVar1 = pVVar15 + -0x18;
    pVVar15 = pVVar15 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar15 != local_f8);
  if (Variant::needs_deinit[(int)local_118._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if (((pOVar16 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
     (cVar10 = predelete_handler(pOVar16), cVar10 != '\0')) {
    (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    Memory::free_static(pOVar16,false);
  }
  if (((local_188 != (Object *)0x0) &&
      (cVar10 = RefCounted::unreference(), pOVar16 = local_188, cVar10 != '\0')) &&
     (cVar10 = predelete_handler(local_188), cVar10 != '\0')) {
    (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    Memory::free_static(pOVar16,false);
  }
  Node::queue_free();
  if (((local_190 != (Object *)0x0) &&
      (cVar10 = RefCounted::unreference(), pOVar16 = local_190, cVar10 != '\0')) &&
     (cVar10 = predelete_handler(local_190), cVar10 != '\0')) {
    if (*(code **)(*(long *)pOVar16 + 0x140) == Image::~Image) {
      *(code **)pOVar16 = Memory::free_static;
      if (*(long *)(pOVar16 + 0x250) != 0) {
        LOCK();
        plVar17 = (long *)(*(long *)(pOVar16 + 0x250) + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          lVar14 = *(long *)(pOVar16 + 0x250);
          *(undefined8 *)(pOVar16 + 0x250) = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      Resource::~Resource((Resource *)pOVar16);
    }
    else {
      (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    }
    Memory::free_static(pOVar16,false);
  }
  Array::~Array(local_198);
LAB_00103567:
  Callable::~Callable(local_158);
  if (((local_160 != (Object *)0x0) &&
      (cVar10 = RefCounted::unreference(), pOVar16 = local_160, cVar10 != '\0')) &&
     (cVar10 = predelete_handler(local_160), cVar10 != '\0')) {
    (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
    Memory::free_static(pOVar16,false);
  }
  if (((local_168 != (pthread_mutex_t *)0x0) &&
      (cVar10 = RefCounted::unreference(), ppVar2 = local_168, cVar10 != '\0')) &&
     (cVar10 = predelete_handler((Object *)&local_168->__data), cVar10 != '\0')) {
    (**(code **)(ppVar2->__align + 0x140))(ppVar2);
    Memory::free_static(ppVar2,false);
  }
  goto LAB_001031f2;
}



/* TilesEditorUtils::_thread_func(void*) */

void TilesEditorUtils::_thread_func(void *param_1)

{
  set_current_thread_safe_for_nodes(true);
  _thread((TilesEditorUtils *)param_1);
  return;
}



/* TilesEditorUtils::SourceNameComparator::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

byte TilesEditorUtils::SourceNameComparator::operator()(int *param_1,int *param_2)

{
  undefined8 uVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  Object *local_58;
  CowData<char32_t> local_50 [8];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)0x0;
  local_60 = (Object *)0x0;
  iVar7 = (int)(CowData<char32_t> *)&local_48;
  TileSet::get_source(iVar7);
  pOVar2 = local_48;
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  Resource::get_name();
  if ((local_48 == (Object *)0x0) || (uVar1 = *(undefined8 *)(local_48 + -8), (int)uVar1 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001045a8:
    if (pOVar2 == (Object *)0x0) goto LAB_00104418;
LAB_001045b1:
    lVar6 = __dynamic_cast(pOVar2,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
    if (lVar6 == 0) goto LAB_00104418;
    TileSetAtlasSource::get_texture();
    if ((local_68 != (Object *)0x0) && (1 < *(uint *)(local_68 + -8))) {
LAB_00104649:
      if (((local_58 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar2 = local_58, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_00104418;
    }
    if (local_58 != (Object *)0x0) {
      Resource::get_path();
      String::get_file();
      if (local_68 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = local_48;
        local_48 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
      goto LAB_00104649;
    }
LAB_00104427:
    itos((long)&local_48);
    if (local_68 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = local_48;
      local_48 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((int)uVar1 == 1) goto LAB_001045a8;
    Resource::get_name();
    if (local_68 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = local_48;
      local_48 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (pOVar2 != (Object *)0x0) goto LAB_001045b1;
LAB_00104418:
    if ((local_68 == (Object *)0x0) || (*(uint *)(local_68 + -8) < 2)) goto LAB_00104427;
  }
  TileSet::get_source(iVar7);
  pOVar2 = local_48;
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  Resource::get_name();
  if ((local_48 == (Object *)0x0) || (uVar1 = *(undefined8 *)(local_48 + -8), (int)uVar1 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001046a2:
    if (pOVar2 == (Object *)0x0) goto LAB_00104510;
LAB_001046ab:
    lVar6 = __dynamic_cast(pOVar2,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
    if (lVar6 == 0) goto LAB_00104510;
    TileSetAtlasSource::get_texture();
    if ((local_60 != (Object *)0x0) && (1 < *(uint *)(local_60 + -8))) {
LAB_00104746:
      if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
      goto LAB_00104510;
    }
    if (local_58 != (Object *)0x0) {
      Resource::get_path();
      String::get_file();
      if (local_60 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        local_60 = local_48;
        local_48 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
      goto LAB_00104746;
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((int)uVar1 == 1) goto LAB_001046a2;
    Resource::get_name();
    if (local_60 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      local_60 = local_48;
      local_48 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (pOVar2 != (Object *)0x0) goto LAB_001046ab;
LAB_00104510:
    if ((local_60 != (Object *)0x0) && (1 < *(uint *)(local_60 + -8))) goto LAB_0010455a;
  }
  itos((long)&local_48);
  if (local_60 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = local_48;
    local_48 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010455a:
  bVar5 = String::naturalnocasecmp_to((String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5 >> 7;
}



/* TilesEditorUtils::get_sorted_sources(Ref<TileSet>) const */

List<int,DefaultAllocator> *
TilesEditorUtils::get_sorted_sources(List<int,DefaultAllocator> *param_1,long param_2,long *param_3)

{
  Object *pOVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  int iVar12;
  
  pOVar5 = SourceNameComparator::tile_set;
  pOVar1 = (Object *)*param_3;
  if (pOVar1 != SourceNameComparator::tile_set) {
    SourceNameComparator::tile_set = pOVar1;
    if ((pOVar1 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      SourceNameComparator::tile_set = (Object *)0x0;
    }
    if (((pOVar5 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  *(undefined8 *)param_1 = 0;
  for (iVar12 = 0; iVar7 = TileSet::get_source_count(), iVar12 < iVar7; iVar12 = iVar12 + 1) {
    uVar8 = TileSet::get_source_id((int)*param_3);
    if (*(long *)param_1 == 0) {
      pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar10;
      *(undefined4 *)pauVar10[1] = 0;
      *pauVar10 = (undefined1  [16])0x0;
    }
    puVar9 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
    plVar2 = *(long **)param_1;
    *(undefined8 *)(puVar9 + 2) = 0;
    lVar3 = plVar2[1];
    *puVar9 = uVar8;
    *(long **)(puVar9 + 6) = plVar2;
    *(long *)(puVar9 + 4) = lVar3;
    if (lVar3 != 0) {
      *(undefined4 **)(lVar3 + 8) = puVar9;
    }
    plVar2[1] = (long)puVar9;
    if (*plVar2 == 0) {
      *plVar2 = (long)puVar9;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  iVar12 = *(int *)(param_2 + 0x184);
  if (iVar12 == 2) {
    List<int,DefaultAllocator>::sort_custom<TilesEditorUtils::SourceNameComparator>(param_1);
  }
  else if (iVar12 == 3) {
    List<int,DefaultAllocator>::sort_custom<TilesEditorUtils::SourceNameComparator>(param_1);
    puVar4 = *(undefined8 **)param_1;
    if (puVar4 != (undefined8 *)0x0) {
      iVar12 = *(int *)(puVar4 + 2);
      puVar9 = (undefined4 *)*puVar4;
      puVar11 = (undefined4 *)puVar4[1];
      if (1 < iVar12) {
        iVar7 = 0;
        do {
          uVar8 = *puVar9;
          iVar7 = iVar7 + 1;
          *puVar9 = *puVar11;
          puVar9 = *(undefined4 **)(puVar9 + 2);
          *puVar11 = uVar8;
          puVar11 = *(undefined4 **)(puVar11 + 4);
        } while (iVar7 < iVar12 / 2);
      }
    }
  }
  else if ((iVar12 == 1) && (puVar4 = *(undefined8 **)param_1, puVar4 != (undefined8 *)0x0)) {
    iVar12 = *(int *)(puVar4 + 2);
    puVar9 = (undefined4 *)*puVar4;
    puVar11 = (undefined4 *)puVar4[1];
    if (1 < iVar12) {
      iVar7 = 0;
      do {
        uVar8 = *puVar9;
        iVar7 = iVar7 + 1;
        *puVar9 = *puVar11;
        puVar9 = *(undefined4 **)(puVar9 + 2);
        *puVar11 = uVar8;
        puVar11 = *(undefined4 **)(puVar11 + 4);
      } while (iVar7 < iVar12 / 2);
    }
  }
  if (((SourceNameComparator::tile_set != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar1 = SourceNameComparator::tile_set, cVar6 != '\0'))
     && (cVar6 = predelete_handler(SourceNameComparator::tile_set), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  SourceNameComparator::tile_set = (Object *)0x0;
  return param_1;
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



/* TilesEditorUtils::is_class_ptr(void*) const */

uint __thiscall TilesEditorUtils::is_class_ptr(TilesEditorUtils *this,void *param_1)

{
  return (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10aa,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* TilesEditorUtils::_getv(StringName const&, Variant&) const */

undefined8 TilesEditorUtils::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TilesEditorUtils::_setv(StringName const&, Variant const&) */

undefined8 TilesEditorUtils::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TilesEditorUtils::_validate_propertyv(PropertyInfo&) const */

void TilesEditorUtils::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* TilesEditorUtils::_property_can_revertv(StringName const&) const */

undefined8 TilesEditorUtils::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TilesEditorUtils::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TilesEditorUtils::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TilesEditorUtils::_notificationv(int, bool) */

void TilesEditorUtils::_notificationv(int param_1,bool param_2)

{
  return;
}



/* TileMapEditorPlugin::is_class_ptr(void*) const */

uint __thiscall TileMapEditorPlugin::is_class_ptr(TileMapEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10aa,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TileMapEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 TileMapEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileMapEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 TileMapEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileMapEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 TileMapEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TileMapEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TileMapEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSetEditorPlugin::is_class_ptr(void*) const */

uint __thiscall TileSetEditorPlugin::is_class_ptr(TileSetEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10aa,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ad,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TileSetEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 TileSetEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSetEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 TileSetEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSetEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 TileSetEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TileSetEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TileSetEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this)

{
  return;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::get_argument_count
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::get_argument_count
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this)

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



/* TileMapEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void TileMapEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* TileSetEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void TileSetEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
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



/* TilesEditorUtils::_get_class_namev() const */

undefined8 * TilesEditorUtils::_get_class_namev(void)

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
LAB_00104f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TilesEditorUtils");
      goto LAB_00104f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TilesEditorUtils");
LAB_00104f8e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::get_object
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this)

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
      goto LAB_001050bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001050bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001050bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void, Node*, bool, Node::InternalMode>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::get_object
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this)

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
      goto LAB_001051bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001051bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001051bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this)

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
      goto LAB_001052bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001052bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001052bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TileSetEditorPlugin::_notificationv(int, bool) */

void __thiscall
TileSetEditorPlugin::_notificationv(TileSetEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010e008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010e008 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* TileMapEditorPlugin::_notificationv(int, bool) */

void __thiscall
TileMapEditorPlugin::_notificationv(TileMapEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xb) {
      if (*(Object **)(this + 0x240) == (Object *)0x0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
        SceneTree::queue_delete((Object *)0x0);
      }
      else {
        SceneTree::queue_delete(*(Object **)(this + 0x240));
      }
    }
    if ((code *)PTR__notification_0010e008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010e008 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 0xb) {
    return;
  }
  if (*(Object **)(this + 0x240) == (Object *)0x0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
    SceneTree::queue_delete((Object *)0x0);
    return;
  }
  SceneTree::queue_delete(*(Object **)(this + 0x240));
  return;
}



/* Ref<TileSet>::~Ref() */

void __thiscall Ref<TileSet>::~Ref(Ref<TileSet> *this)

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



/* TileMapEditorPlugin::_get_class_namev() const */

undefined8 * TileMapEditorPlugin::_get_class_namev(void)

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
LAB_001055b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001055b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TileMapEditorPlugin");
      goto LAB_0010561e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TileMapEditorPlugin");
LAB_0010561e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetEditorPlugin::_get_class_namev() const */

undefined8 * TileSetEditorPlugin::_get_class_namev(void)

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
LAB_001056a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001056a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TileSetEditorPlugin");
      goto LAB_0010570e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TileSetEditorPlugin");
LAB_0010570e:
  return &_get_class_namev()::_class_name_static;
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



/* Rect2::expand_to(Vector2 const&) */

void __thiscall Rect2::expand_to(Rect2 *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(this + 8);
  if ((fVar3 < 0.0) || (fVar5 = *(float *)(this + 0xc), fVar5 < 0.0)) {
    _err_print_error("expand_to","./core/math/rect2.h",0x100,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
    fVar5 = *(float *)(this + 0xc);
    fVar3 = *(float *)(this + 8);
  }
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar6 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_1;
  fVar7 = fVar4;
  if (fVar1 <= fVar4) {
    fVar7 = fVar1;
  }
  fVar8 = fVar6;
  if (fVar2 <= fVar6) {
    fVar8 = fVar2;
  }
  if (fVar4 <= fVar3 + fVar1) {
    fVar4 = fVar3 + fVar1;
  }
  if (fVar6 <= fVar5 + fVar2) {
    fVar6 = fVar5 + fVar2;
  }
  *(ulong *)this = CONCAT44(fVar8,fVar7);
  *(ulong *)(this + 8) = CONCAT44(fVar6 - fVar8,fVar4 - fVar7);
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
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

{
  Node::Node((Node *)this);
  *(code **)this = operator_new;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  return;
}



/* TilesEditorUtils::draw_selection_rect(CanvasItem*, Rect2 const&, Color const&) [clone .cold] */

void TilesEditorUtils::draw_selection_rect(CanvasItem *param_1,Rect2 *param_2,Color *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Callable create_custom_callable_function_pointer<TilesEditorUtils>(TilesEditorUtils*, char
   const*, void (TilesEditorUtils::*)()) */

TilesEditorUtils *
create_custom_callable_function_pointer<TilesEditorUtils>
          (TilesEditorUtils *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC60;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010a8f0;
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



/* Callable create_custom_callable_function_pointer<TileMapEditorPlugin>(TileMapEditorPlugin*, char
   const*, void (TileMapEditorPlugin::*)()) */

TileMapEditorPlugin *
create_custom_callable_function_pointer<TileMapEditorPlugin>
          (TileMapEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC60;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010aa10;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = operator_new;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b1a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00106b1a:
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



/* TilesEditorUtils::_initialize_classv() */

void TilesEditorUtils::_initialize_classv(void)

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
    local_48 = "TilesEditorUtils";
    local_60 = 0;
    local_40 = 0x10;
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



/* TileMapEditorPlugin::_initialize_classv() */

void TileMapEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010e020 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Node");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorPlugin");
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
      if ((code *)PTR__bind_methods_0010e010 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010e018 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TileMapEditorPlugin";
    local_70 = 0;
    local_50 = 0x13;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* TilesEditorUtils::get_class() const */

void TilesEditorUtils::get_class(void)

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



/* TileSetEditorPlugin::get_class() const */

void TileSetEditorPlugin::get_class(void)

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



/* TileMapEditorPlugin::get_class() const */

void TileMapEditorPlugin::get_class(void)

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
LAB_00107397:
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
      goto LAB_00107397;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* TilesEditorUtils::is_class(String const&) const */

undefined8 __thiscall TilesEditorUtils::is_class(TilesEditorUtils *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010749b;
  }
  cVar5 = String::operator==(param_1,"TilesEditorUtils");
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
      if (cVar5 != '\0') goto LAB_0010749b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010749b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::call
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_001077bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001077bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107870;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001077bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107870:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TilesEditorUtils, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::call
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001079cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001079cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001079a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107a80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001079cf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107a80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node, void, Node*, bool, Node::InternalMode>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::call
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107cd2;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00107cd2;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC117;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar5 = Variant::operator_cast_to_long(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC118;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar11 = Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00107c40:
          uVar3 = _LC119;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0), lVar8 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_00107c40;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6,bVar11,uVar5 & 0xffffffff);
          return;
        }
        goto LAB_00107dd4;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 3;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 3;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107cd2:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107dd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorPlugin::is_class(EditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00107edb;
  }
  cVar5 = String::operator==(param_1,"EditorPlugin");
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
      if (cVar5 != '\0') goto LAB_00107edb;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_00107fde;
    }
  }
LAB_00107edb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107fde:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditorPlugin::is_class(String const&) const */

undefined8 __thiscall TileSetEditorPlugin::is_class(TileSetEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001080eb;
  }
  cVar4 = String::operator==(param_1,"TileSetEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001080eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileMapEditorPlugin::is_class(String const&) const */

undefined8 __thiscall TileMapEditorPlugin::is_class(TileMapEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010823b;
  }
  cVar4 = String::operator==(param_1,"TileMapEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010823b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditorPlugin::_initialize_classv() */

void TileSetEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010e020 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_60 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorPlugin");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0010e010 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010e018 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TileSetEditorPlugin";
    local_70 = 0;
    local_50 = 0x13;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010869f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010869f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* TilesEditorUtils::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void TilesEditorUtils::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  local_78 = "TilesEditorUtils";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TilesEditorUtils";
  local_98 = 0;
  local_70 = 0x10;
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
  StringName::StringName((StringName *)&local_78,"TilesEditorUtils",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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
  local_78 = &_LC70;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC70;
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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



/* TileSetEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
TileSetEditorPlugin::_get_property_listv(TileSetEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TileSetEditorPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TileSetEditorPlugin";
  local_98 = 0;
  local_70 = 0x13;
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
  StringName::StringName((StringName *)&local_78,"TileSetEditorPlugin",false);
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



/* TileMapEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
TileMapEditorPlugin::_get_property_listv(TileMapEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TileMapEditorPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TileMapEditorPlugin";
  local_98 = 0;
  local_70 = 0x13;
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
  StringName::StringName((StringName *)&local_78,"TileMapEditorPlugin",false);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SortArray<List<int, DefaultAllocator>::Element*, List<int,
   DefaultAllocator>::AuxiliaryComparator<TilesEditorUtils::SourceNameComparator>,
   true>::introsort(long, long, List<int, DefaultAllocator>::Element**, long) const */

void SortArray<List<int,DefaultAllocator>::Element*,List<int,DefaultAllocator>::AuxiliaryComparator<TilesEditorUtils::SourceNameComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  Element **ppEVar7;
  long lVar8;
  long in_R8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_78;
  Element **local_70;
  long local_60;
  Element **local_58;
  undefined8 *local_50;
  
  lVar9 = (long)param_3 - param_2;
  if (lVar9 < 0x11) {
    return;
  }
  local_70 = param_3;
  if (in_R8 != 0) {
    puVar12 = (undefined8 *)(param_4 + param_2 * 8);
    local_58 = param_3;
    local_50 = (undefined8 *)in_R8;
LAB_001093ed:
    local_50 = (undefined8 *)((long)local_50 + -1);
    puVar4 = (undefined8 *)(param_4 + ((lVar9 >> 1) + param_2) * 8);
    cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar12);
    if (cVar3 == '\0') {
      cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar12);
      puVar10 = puVar12;
      if (cVar3 != '\0') goto LAB_00109457;
      cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar4);
    }
    else {
      cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar4);
      puVar10 = puVar4;
      if (cVar3 != '\0') goto LAB_00109457;
      cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar12);
      puVar4 = puVar12;
    }
    puVar10 = puVar4;
    if (cVar3 != '\0') {
      puVar10 = (undefined8 *)(param_4 + -8 + (long)local_58 * 8);
    }
LAB_00109457:
    piVar1 = (int *)*puVar10;
    ppEVar7 = local_58;
    local_70 = (Element **)param_2;
    do {
      cVar3 = TilesEditorUtils::SourceNameComparator::operator()
                        ((int *)param_1,*(int **)(param_4 + (long)local_70 * 8));
      if (cVar3 == '\0') {
LAB_001094a0:
        ppEVar7 = (Element **)((long)ppEVar7 + -1);
        puVar4 = (undefined8 *)(param_4 + (long)ppEVar7 * 8);
        while (cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,piVar1),
              cVar3 != '\0') {
          if ((Element **)param_2 == ppEVar7) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          ppEVar7 = (Element **)((long)ppEVar7 + -1);
          puVar4 = puVar4 + -1;
        }
        if ((long)ppEVar7 <= (long)local_70) goto LAB_0010953c;
        uVar2 = *(undefined8 *)(param_4 + (long)local_70 * 8);
        *(undefined8 *)(param_4 + (long)local_70 * 8) = *puVar4;
        *puVar4 = uVar2;
      }
      else if ((Element **)((long)local_58 + -1) == local_70) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_001094a0;
      }
      local_70 = (Element **)((long)local_70 + 1);
    } while( true );
  }
LAB_0010960d:
  lVar6 = lVar9 + -2 >> 1;
  local_50 = (undefined8 *)(param_4 + (param_2 + lVar6) * 8);
  do {
    lVar5 = lVar6 * 2 + 2;
    uVar2 = *local_50;
    local_78 = lVar6;
    if (lVar5 < lVar9) {
      do {
        puVar4 = (undefined8 *)(param_4 + (param_2 + lVar5) * 8);
        cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar4);
        lVar8 = lVar5 + -1;
        lVar11 = lVar5;
        puVar12 = (undefined8 *)(param_4 + (param_2 + lVar5 + -1) * 8);
        if (cVar3 == '\0') {
          lVar11 = lVar5 + 1;
          lVar8 = lVar5;
          puVar12 = puVar4;
        }
        lVar5 = lVar11 * 2;
        *(undefined8 *)(param_4 + (local_78 + param_2) * 8) = *puVar12;
        local_78 = lVar8;
      } while (lVar5 < lVar9);
      puVar4 = puVar12;
      if (lVar5 == lVar9) {
LAB_00109909:
        lVar8 = lVar5 + -1;
        puVar12 = (undefined8 *)(param_4 + (param_2 + lVar8) * 8);
        *puVar4 = *puVar12;
      }
      lVar5 = lVar8 + -1 >> 1;
      if (lVar8 <= lVar6) goto LAB_0010995a;
      do {
        lVar11 = lVar5;
        puVar12 = (undefined8 *)(param_4 + (param_2 + lVar11) * 8);
        cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar12);
        puVar4 = (undefined8 *)(param_4 + (lVar8 + param_2) * 8);
        if (cVar3 == '\0') {
          *puVar4 = uVar2;
          goto joined_r0x001097b0;
        }
        *puVar4 = *puVar12;
        lVar5 = (lVar11 + -1) / 2;
        lVar8 = lVar11;
      } while (lVar6 < lVar11);
      *puVar12 = uVar2;
joined_r0x001097b0:
      if (lVar6 == 0) goto LAB_001097b2;
    }
    else {
      puVar4 = local_50;
      puVar12 = local_50;
      if (lVar5 == lVar9) goto LAB_00109909;
LAB_0010995a:
      *puVar12 = uVar2;
    }
    local_50 = local_50 + -1;
    lVar6 = lVar6 + -1;
  } while( true );
LAB_0010953c:
  introsort(param_1,(long)local_70,local_58,param_4);
  lVar9 = (long)local_70 - param_2;
  if (lVar9 < 0x11) {
    return;
  }
  local_58 = local_70;
  if (local_50 == (undefined8 *)0x0) goto LAB_0010960d;
  goto LAB_001093ed;
LAB_001097b2:
  puVar12 = (undefined8 *)(param_4 + param_2 * 8);
  local_60 = (long)local_70 + (-1 - param_2);
LAB_001097e0:
  do {
    uVar2 = puVar12[local_60];
    puVar12[local_60] = *puVar12;
    if (local_60 < 3) {
      if (local_60 != 2) {
        *puVar12 = uVar2;
        return;
      }
      lVar9 = param_2 + 1;
      lVar6 = 0;
      *puVar12 = *(undefined8 *)(param_4 + lVar9 * 8);
LAB_001098c7:
      while( true ) {
        puVar4 = (undefined8 *)(param_4 + (param_2 + lVar6) * 8);
        cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar4);
        puVar10 = (undefined8 *)(param_4 + lVar9 * 8);
        if (cVar3 == '\0') break;
        *puVar10 = *puVar4;
        if (lVar6 == 0) {
          local_60 = local_60 + -1;
          *puVar4 = uVar2;
          goto LAB_001097e0;
        }
        lVar9 = param_2 + lVar6;
        lVar6 = (lVar6 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        puVar4 = (undefined8 *)(param_4 + (param_2 + lVar9) * 8);
        cVar3 = TilesEditorUtils::SourceNameComparator::operator()((int *)param_1,(int *)*puVar4);
        lVar5 = lVar9 + -1;
        puVar10 = (undefined8 *)(param_4 + (param_2 + lVar9 + -1) * 8);
        lVar6 = lVar9;
        if (cVar3 == '\0') {
          lVar6 = lVar9 + 1;
          lVar5 = lVar9;
          puVar10 = puVar4;
        }
        lVar9 = lVar6 * 2;
        *(undefined8 *)(param_4 + (local_78 + param_2) * 8) = *puVar10;
        local_78 = lVar5;
      } while (lVar9 < local_60);
      if (lVar9 == local_60) {
        lVar9 = local_60 + -1 + param_2;
        lVar6 = local_60 + -2 >> 1;
        *puVar10 = *(undefined8 *)(param_4 + lVar9 * 8);
        goto LAB_001098c7;
      }
      lVar9 = param_2 + lVar5;
      lVar6 = (lVar5 + -1) / 2;
      if (0 < lVar5) goto LAB_001098c7;
    }
    local_60 = local_60 + -1;
    *puVar10 = uVar2;
  } while( true );
}



/* void List<int, DefaultAllocator>::sort_custom<TilesEditorUtils::SourceNameComparator>() */

void __thiscall
List<int,DefaultAllocator>::sort_custom<TilesEditorUtils::SourceNameComparator>
          (List<int,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  Element **ppEVar5;
  long *__src;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  Element **ppEVar9;
  long lVar10;
  Element **ppEVar11;
  long in_FS_OFFSET;
  undefined1 local_41 [17];
  
  local_41._1_8_ = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this != 0) && (iVar1 = *(int *)(*(long *)this + 0x10), 1 < iVar1)) {
    ppEVar5 = (Element **)(long)iVar1;
    __src = (long *)Memory::alloc_static((long)ppEVar5 * 8,true);
    if (__src == (long *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      __src[-1] = (long)ppEVar5;
    }
    ppEVar9 = ppEVar5;
    if (*(long **)this != (long *)0x0) {
      plVar6 = __src;
      for (lVar2 = **(long **)this; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        *plVar6 = lVar2;
        plVar6 = plVar6 + 1;
      }
    }
    do {
      ppEVar9 = (Element **)((long)ppEVar9 >> 1);
    } while (ppEVar9 != (Element **)0x1);
    SortArray<List<int,DefaultAllocator>::Element*,List<int,DefaultAllocator>::AuxiliaryComparator<TilesEditorUtils::SourceNameComparator>,true>
    ::introsort((long)local_41,0,ppEVar5,(long)__src);
    if ((long)ppEVar5 < 0x11) {
      ppEVar9 = (Element **)0x1;
      do {
        while( true ) {
          piVar8 = (int *)__src[(long)ppEVar9];
          plVar6 = __src + (long)ppEVar9;
          cVar4 = TilesEditorUtils::SourceNameComparator::operator()((int *)local_41,piVar8);
          if (cVar4 != '\0') break;
          while (cVar4 = TilesEditorUtils::SourceNameComparator::operator()((int *)local_41,piVar8),
                cVar4 != '\0') {
            if (plVar6 == __src + 1) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            *plVar6 = plVar6[-1];
            plVar6 = plVar6 + -1;
          }
          *plVar6 = (long)piVar8;
          ppEVar9 = (Element **)((long)ppEVar9 + 1);
          piVar8 = (int *)*__src;
          if (ppEVar5 == ppEVar9) goto LAB_00109bfe;
        }
        __n = (long)ppEVar9 * 8;
        ppEVar9 = (Element **)((long)ppEVar9 + 1);
        memmove(__src + 1,__src,__n);
        *__src = (long)piVar8;
      } while (ppEVar5 != ppEVar9);
    }
    else {
      lVar2 = 1;
      do {
        while( true ) {
          lVar10 = lVar2;
          piVar8 = (int *)__src[lVar10];
          cVar4 = TilesEditorUtils::SourceNameComparator::operator()((int *)local_41,piVar8);
          if (cVar4 != '\0') break;
          plVar6 = __src + lVar10;
          while (cVar4 = TilesEditorUtils::SourceNameComparator::operator()((int *)local_41,piVar8),
                cVar4 != '\0') {
            if (__src == plVar6 + -1) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            *plVar6 = plVar6[-1];
            plVar6 = plVar6 + -1;
          }
          *plVar6 = (long)piVar8;
          lVar2 = lVar10 + 1;
          if (lVar10 + 1 == 0x10) goto LAB_00109b79;
        }
        memmove(__src + 1,__src,lVar10 * 8);
        *__src = (long)piVar8;
        lVar2 = lVar10 + 1;
      } while (lVar10 + 1 != 0x10);
LAB_00109b79:
      ppEVar9 = (Element **)(lVar10 + 1);
      do {
        piVar8 = (int *)__src[(long)ppEVar9];
        plVar6 = __src + (long)ppEVar9;
        ppEVar11 = ppEVar9;
        while( true ) {
          ppEVar11 = (Element **)((long)ppEVar11 + -1);
          cVar4 = TilesEditorUtils::SourceNameComparator::operator()((int *)local_41,piVar8);
          if (cVar4 == '\0') break;
          if (ppEVar11 == (Element **)0x0) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *plVar6 = plVar6[-1];
          plVar6 = plVar6 + -1;
        }
        *plVar6 = (long)piVar8;
        ppEVar9 = (Element **)((long)ppEVar9 + 1);
      } while (ppEVar5 != ppEVar9);
      piVar8 = (int *)*__src;
    }
LAB_00109bfe:
    puVar3 = *(undefined8 **)this;
    *puVar3 = piVar8;
    piVar8[4] = 0;
    piVar8[5] = 0;
    *(long *)(*__src + 8) = __src[1];
    lVar2 = __src[(long)ppEVar5 + -1];
    puVar3[1] = lVar2;
    *(long *)(lVar2 + 0x10) = __src[(long)ppEVar5 + -2];
    *(undefined8 *)(__src[(long)ppEVar5 + -1] + 8) = 0;
    if (iVar1 != 2) {
      plVar6 = __src;
      do {
        plVar7 = plVar6 + 1;
        *(long *)(plVar6[1] + 0x10) = *plVar6;
        *(long *)(*plVar7 + 8) = plVar6[2];
        plVar6 = plVar7;
      } while (__src + (iVar1 - 2) != plVar7);
    }
    Memory::free_static(__src,true);
  }
  if (local_41._1_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TilesEditorUtils::singleton */

void TilesEditorUtils::_GLOBAL__sub_I_singleton(void)

{
  if (TileMap::base_property_helper == '\0') {
    TileMap::base_property_helper = '\x01';
    TileMap::base_property_helper._64_8_ = 0;
    TileMap::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TileMap::base_property_helper,&__dso_handle
                );
  }
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
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    TabBar::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
  }
  __cxa_atexit(Ref<TileSet>::~Ref,&SourceNameComparator::tile_set,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TilesEditorUtils, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*, bool,
   Node::InternalMode>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*,bool,Node::InternalMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileMapEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileMapEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileMapEditorPlugin,void> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<TileSet>::~Ref() */

void __thiscall Ref<TileSet>::~Ref(Ref<TileSet> *this)

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


