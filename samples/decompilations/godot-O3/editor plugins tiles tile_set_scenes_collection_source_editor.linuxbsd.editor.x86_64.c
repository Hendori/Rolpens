
/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::get_id() */

undefined4 __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::get_id
          (TileSetScenesCollectionProxyObject *this)

{
  return *(undefined4 *)(this + 0x188);
}



/* TileSetScenesCollectionSourceEditor::_tile_set_scenes_collection_source_changed() */

void __thiscall
TileSetScenesCollectionSourceEditor::_tile_set_scenes_collection_source_changed
          (TileSetScenesCollectionSourceEditor *this)

{
  this[0xa24] = (TileSetScenesCollectionSourceEditor)0x1;
  return;
}



/* TileSetScenesCollectionSourceEditor::_scene_thumbnail_done(String const&, Ref<Texture2D> const&,
   Ref<Texture2D> const&, Variant const&) */

void TileSetScenesCollectionSourceEditor::_scene_thumbnail_done
               (String *param_1,Ref *param_2,Ref *param_3,Variant *param_4)

{
  uint uVar1;
  int iVar2;
  Variant *in_R8;
  
  uVar1 = Variant::operator_cast_to_int(in_R8);
  if (-1 < (int)uVar1) {
    iVar2 = ItemList::get_item_count();
    if ((int)uVar1 < iVar2) {
      ItemList::set_item_icon((int)*(undefined8 *)(param_1 + 0xa58),(Ref *)(ulong)uVar1);
      return;
    }
  }
  return;
}



/* Error Object::emit_signal<char const*>(StringName const&, char const*) [clone .isra.0] */

void __thiscall Object::emit_signal<char_const*>(Object *this,StringName *param_1,char *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_2);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,param_1,local_68,1);
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
  return;
}



/* TileSetScenesCollectionSourceEditor::_scenes_collection_source_proxy_object_changed(String
   const&) */

void __thiscall
TileSetScenesCollectionSourceEditor::_scenes_collection_source_proxy_object_changed
          (TileSetScenesCollectionSourceEditor *this,String *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator==(param_1,"id");
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(long *)(this + 0xa28) + 0x188);
    if (_scenes_collection_source_proxy_object_changed(String_const&)::{lambda()#1}::operator()()::
        sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_scenes_collection_source_proxy_object_changed(String_const&)::
                                   {lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_scenes_collection_source_proxy_object_changed(String_const&)::
                             {lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_scenes_collection_source_proxy_object_changed(String_const&)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_scenes_collection_source_proxy_object_changed(String_const&)::
                             {lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,iVar1);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_scenes_collection_source_proxy_object_changed(String_const&)::{lambda()#1}::
                     operator()()::sname,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::~TileSetScenesCollectionSourceEditor() */

void __thiscall
TileSetScenesCollectionSourceEditor::~TileSetScenesCollectionSourceEditor
          (TileSetScenesCollectionSourceEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00113550;
  pOVar1 = *(Object **)(this + 0xa28);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  pOVar1 = *(Object **)(this + 0xa40);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if (*(long *)(this + 0xa10) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa10);
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
      if (StringName::configured == '\0') goto LAB_00100358;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100358:
  Control::~Control((Control *)this);
  return;
}



/* TileSetScenesCollectionSourceEditor::~TileSetScenesCollectionSourceEditor() */

void __thiscall
TileSetScenesCollectionSourceEditor::~TileSetScenesCollectionSourceEditor
          (TileSetScenesCollectionSourceEditor *this)

{
  ~TileSetScenesCollectionSourceEditor(this);
  operator_delete(this,0xa78);
  return;
}



/* TileSetScenesCollectionSourceEditor::_update_action_buttons() */

void __thiscall
TileSetScenesCollectionSourceEditor::_update_action_buttons
          (TileSetScenesCollectionSourceEditor *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_selected_items();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa68),0));
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_20 + -0x10),false);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::edit(TileSetScenesCollectionSource*,
   int) */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::edit
          (SceneTileProxyObject *this,TileSetScenesCollectionSource *param_1,int param_2)

{
  char cVar1;
  
  if (param_1 == (TileSetScenesCollectionSource *)0x0) {
    _err_print_error(&_LC13,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",0xc6
                     ,"Parameter \"p_tile_set_scenes_collection_source\" is null.",0,0);
    return;
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0x290))(param_1,0);
  if (cVar1 != '\0') {
    if ((*(TileSetScenesCollectionSource **)(this + 0x180) == param_1) &&
       (*(int *)(this + 0x18c) == param_2)) {
      return;
    }
    *(TileSetScenesCollectionSource **)(this + 0x180) = param_1;
    *(int *)(this + 0x18c) = param_2;
    Object::notify_property_list_changed();
    return;
  }
  _err_print_error(&_LC13,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",199,
                   "Condition \"!p_tile_set_scenes_collection_source->has_scene_tile_id(p_scene_id)\" is true."
                   ,0,0);
  return;
}



/* TileSetScenesCollectionSourceEditor::_update_tile_inspector() */

void __thiscall
TileSetScenesCollectionSourceEditor::_update_tile_inspector
          (TileSetScenesCollectionSourceEditor *this)

{
  long *plVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_selected_items();
  if ((local_40 != 0) && (0 < *(long *)(local_40 + -8))) {
    ItemList::get_item_metadata((int)(Variant *)local_38);
    iVar2 = Variant::operator_cast_to_int((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    SceneTileProxyObject::edit
              (*(SceneTileProxyObject **)(this + 0xa40),
               *(TileSetScenesCollectionSource **)(this + 0xa18),iVar2);
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa48),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa50),0));
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_40 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::edit(Ref<TileSet>,
   TileSetScenesCollectionSource*, int) */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::edit
          (TileSetScenesCollectionProxyObject *this,long *param_2,Object *param_3,int param_4)

{
  Object *pOVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  Object *pOVar5;
  char cVar6;
  char *pcVar7;
  Object *pOVar8;
  undefined8 uVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  Object *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100a4f;
    uVar9 = 0x6b;
    pcVar7 = "Condition \"p_tile_set.is_null()\" is true.";
    goto LAB_001008c6;
  }
  if (param_3 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x6c;
      pcVar7 = "Parameter \"p_tile_set_scenes_collection_source\" is null.";
      goto LAB_001008c6;
    }
    goto LAB_00100a4f;
  }
  if (param_4 < 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x6d;
      pcVar7 = "Condition \"p_source_id < 0\" is true.";
      goto LAB_001008c6;
    }
    goto LAB_00100a4f;
  }
  TileSet::get_source((int)(Object *)local_58);
  pOVar5 = local_58[0];
  if (local_58[0] != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_58[0]), cVar6 != '\0')) {
      (**(code **)(*(long *)local_58[0] + 0x140))();
      Memory::free_static(local_58[0],false);
    }
    if (param_3 == pOVar5) {
      pOVar8 = *(Object **)(this + 0x178);
      pOVar10 = (Object *)*param_2;
      pOVar1 = *(Object **)(this + 0x180);
      if (pOVar10 == pOVar8) {
        if (pOVar1 == param_3) {
          if (*(int *)(this + 0x188) == param_4) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
            goto LAB_00100a4f;
          }
LAB_001007d0:
          pcVar3 = *(code **)(*(long *)pOVar1 + 0x110);
          create_custom_callable_function_pointer<Object>
                    ((Object *)local_58,(char *)this,
                     (_func_void *)"&Object::notify_property_list_changed");
          (*pcVar3)(pOVar1,CoreStringNames::singleton + 0x120,(Object *)local_58);
          Callable::~Callable((Callable *)local_58);
          pOVar10 = (Object *)*param_2;
          pOVar8 = *(Object **)(this + 0x178);
          if (pOVar10 != pOVar8) goto LAB_001006f7;
        }
        else if (pOVar1 != (Object *)0x0) goto LAB_001007d0;
      }
      else {
        if (pOVar1 != (Object *)0x0) goto LAB_001007d0;
LAB_001006f7:
        *(Object **)(this + 0x178) = pOVar10;
        if ((pOVar10 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          *(undefined8 *)(this + 0x178) = 0;
        }
        if (((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(pOVar8), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      *(int *)(this + 0x188) = param_4;
      lVar2 = *(long *)pOVar5;
      *(Object **)(this + 0x180) = pOVar5;
      pcVar3 = *(code **)(lVar2 + 0x118);
      create_custom_callable_function_pointer<Object>
                ((Object *)local_58,(char *)this,
                 (_func_void *)"&Object::notify_property_list_changed");
      cVar6 = (*pcVar3)(pOVar5,CoreStringNames::singleton + 0x120,(Object *)local_58);
      Callable::~Callable((Callable *)local_58);
      if (cVar6 == '\0') {
        plVar4 = *(long **)(this + 0x180);
        pcVar3 = *(code **)(*plVar4 + 0x108);
        create_custom_callable_function_pointer<Object>
                  ((Object *)local_58,(char *)this,
                   (_func_void *)"&Object::notify_property_list_changed");
        (*pcVar3)(plVar4,CoreStringNames::singleton + 0x120,(Object *)local_58,0);
        Callable::~Callable((Callable *)local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Object::notify_property_list_changed();
        return;
      }
      goto LAB_00100a4f;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = 0x6e;
    pcVar7 = 
    "Condition \"p_tile_set->get_source(p_source_id) != p_tile_set_scenes_collection_source\" is true."
    ;
LAB_001008c6:
    _err_print_error(&_LC13,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",
                     uVar9,pcVar7,0,0);
    return;
  }
LAB_00100a4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_update_source_inspector() */

void __thiscall
TileSetScenesCollectionSourceEditor::_update_source_inspector
          (TileSetScenesCollectionSourceEditor *this)

{
  undefined4 uVar1;
  Object *pOVar2;
  TileSetScenesCollectionProxyObject *pTVar3;
  undefined8 uVar4;
  char cVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pOVar2 = *(Object **)(this + 0xa10);
  pTVar3 = *(TileSetScenesCollectionProxyObject **)(this + 0xa28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(this + 0xa20);
  uVar4 = *(undefined8 *)(this + 0xa18);
  if ((pOVar2 == (Object *)0x0) ||
     (local_38 = pOVar2, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_38 = (Object *)0x0;
    TileSetScenesCollectionProxyObject::edit(pTVar3,&local_38,uVar4,uVar1);
  }
  else {
    TileSetScenesCollectionProxyObject::edit(pTVar3,&local_38,uVar4,uVar1);
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar2,false);
        return;
      }
      goto LAB_00100b49;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100b49:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::set_id(int) */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::set_id
          (TileSetScenesCollectionProxyObject *this,int param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long in_FS_OFFSET;
  String aSStack_78 [8];
  undefined8 local_70;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_id","editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",
                       0x30,"Condition \"p_id < 0\" is true.",0,0);
      return;
    }
  }
  else {
    if (*(int *)(this + 0x188) != param_1) {
      cVar3 = TileSet::has_source((int)*(undefined8 *)(this + 0x178));
      if (cVar3 == '\0') {
        iVar2 = *(int *)(this + 0x188);
        *(int *)(this + 0x188) = param_1;
        TileSet::set_source_id((int)*(undefined8 *)(this + 0x178),iVar2);
        lVar1 = CoreStringNames::singleton + 8;
        Variant::Variant((Variant *)local_58,"id");
        local_40 = 0;
        local_38 = (undefined1  [16])0x0;
        local_68[0] = (Variant *)local_58;
        (**(code **)(*(long *)this + 0xd0))(this,lVar1,local_68,1);
        if (Variant::needs_deinit[(int)local_40] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        local_70 = 0;
        String::parse_latin1
                  ((String *)&local_70,
                   "Cannot change TileSet Scenes Collection source ID. Another TileSet source exists with id %d."
                  );
        vformat<int>(aSStack_78,(int)(String *)&local_70);
        _err_print_error("set_id",
                         "editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",0x34,
                         "Condition \"tile_set->has_source(p_id)\" is true.",aSStack_78,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_scenes_list_item_activated(int) */

void TileSetScenesCollectionSourceEditor::_scenes_list_item_activated(int param_1)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_48;
  CowData<char32_t> local_40 [8];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_item_metadata((int)(Variant *)local_38);
  Variant::operator_cast_to_int((Variant *)local_38);
  TileSetScenesCollectionSource::get_scene_tile_scene((int)&local_48);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = EditorNode::singleton;
  if (local_48 != (Object *)0x0) {
    Resource::get_path();
    EditorNode::open_request(pSVar1,SUB81(local_40,0));
    CowData<char32_t>::_unref(local_40);
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionSourceEditor() */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionSourceEditor
          (TileSetScenesCollectionSourceEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  SplitContainer *this_00;
  ScrollContainer *this_01;
  BoxContainer *pBVar6;
  Label *pLVar7;
  Object *this_02;
  EditorInspector *pEVar8;
  Object *pOVar9;
  ItemList *this_03;
  CallableCustom *pCVar10;
  BoxContainer *this_04;
  Button *pBVar11;
  RefCounted *pRVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  byte bVar15;
  float fVar16;
  undefined8 local_98;
  undefined8 local_90;
  ItemList local_88 [16];
  String local_78 [16];
  long local_68 [2];
  RefCounted *local_58 [2];
  undefined8 local_48;
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined ***)this = &PTR__initialize_classv_00113550;
  *(undefined2 *)(this + 0xa0c) = 1;
  *(undefined4 *)(this + 0xa20) = 0xffffffff;
  this[0xa24] = (TileSetScenesCollectionSourceEditor)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  this_00 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_00,false);
  this_00[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_001131d8;
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  this_01 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_01);
  postinitialize_handler((Object *)this_01);
  ScrollContainer::set_horizontal_scroll_mode(this_01,0);
  fVar16 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar16 * _LC31._4_4_,fVar16 * (float)_LC31);
  Control::set_custom_minimum_size((Vector2 *)this_01);
  Node::add_child(this_00,this_01,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00112ba0;
  postinitialize_handler((Object *)pBVar6);
  Control::set_h_size_flags(pBVar6,3);
  Node::add_child(this_01,pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = (RefCounted *)0x0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa30) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar1 = *(String **)(this + 0xa30);
  local_58[0] = (RefCounted *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Scenes collection properties:");
  TTR(local_78,(String *)local_68);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa30),0,0);
  this_02 = (Object *)operator_new(400,"");
  pOVar9 = this_02;
  for (lVar13 = 0x32; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined8 *)pOVar9 = 0;
    pOVar9 = pOVar9 + (ulong)bVar15 * -0x10 + 8;
  }
  Object::Object(this_02);
  *(undefined ***)this_02 = &PTR__initialize_classv_00112f18;
  *(undefined4 *)(this_02 + 0x188) = 0xffffffff;
  *(undefined1 (*) [16])(this_02 + 0x178) = (undefined1  [16])0x0;
  postinitialize_handler(this_02);
  lVar13 = *(long *)this_02;
  *(Object **)(this + 0xa28) = this_02;
  pcVar2 = *(code **)(lVar13 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor,String_const&>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void_String_ptr *)
             "&TileSetScenesCollectionSourceEditor::_scenes_collection_source_proxy_object_changed")
  ;
  (*pcVar2)(this_02,CoreStringNames::singleton + 8,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pEVar8 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(pEVar8);
  postinitialize_handler((Object *)pEVar8);
  *(EditorInspector **)(this + 0xa38) = pEVar8;
  ScrollContainer::set_vertical_scroll_mode(pEVar8,0);
  EditorInspector::set_use_doc_hints(SUB81(*(undefined8 *)(this + 0xa38),0));
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa38),0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58[0] = (RefCounted *)0x0;
  Label::Label(pLVar7,(String *)local_58);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa48) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar1 = *(String **)(this + 0xa48);
  local_58[0] = (RefCounted *)0x0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Tile properties:");
  TTR(local_78,(String *)local_68);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CanvasItem::hide();
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa48),0,0);
  pOVar9 = (Object *)operator_new(400,"");
  Object::Object(pOVar9);
  *(TileSetScenesCollectionSourceEditor **)(pOVar9 + 0x178) = this;
  *(undefined ***)pOVar9 = &PTR__initialize_classv_00113078;
  *(undefined8 *)(pOVar9 + 0x180) = 0;
  postinitialize_handler(pOVar9);
  lVar13 = *(long *)pOVar9;
  *(Object **)(this + 0xa40) = pOVar9;
  pcVar2 = *(code **)(lVar13 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_update_scenes_list");
  iVar14 = (int)(String *)local_68;
  Callable::unbind(iVar14);
  (*pcVar2)(pOVar9,CoreStringNames::singleton + 8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar3 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_update_action_buttons");
  Callable::unbind(iVar14);
  (*pcVar2)(plVar3,CoreStringNames::singleton + 8,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pEVar8 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(pEVar8);
  postinitialize_handler((Object *)pEVar8);
  *(EditorInspector **)(this + 0xa50) = pEVar8;
  ScrollContainer::set_vertical_scroll_mode(pEVar8,0);
  EditorInspector::set_use_doc_hints(SUB81(*(undefined8 *)(this + 0xa50),0));
  EditorInspector::set_use_folding(SUB81(*(undefined8 *)(this + 0xa50),0),true);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa50),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00112ba0;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this_00,pBVar6,0,0);
  this_03 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_03);
  postinitialize_handler((Object *)this_03);
  *(ItemList **)(this + 0xa58) = this_03;
  Node::set_auto_translate_mode(this_03,2);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa58),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa58),3);
  plVar3 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar3 + 0x318);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar10 = &PTR_hash_00113b08;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = _drop_data_fw;
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(TileSetScenesCollectionSourceEditor **)(pCVar10 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "TileSetScenesCollectionSourceEditor::_drop_data_fw";
  Callable::Callable((Callable *)local_58,pCVar10);
  Callable::bind<ItemList*>((ItemList *)local_68);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar10 = &PTR_hash_00113a78;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = _can_drop_data_fw;
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(TileSetScenesCollectionSourceEditor **)(pCVar10 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "TileSetScenesCollectionSourceEditor::_can_drop_data_fw";
  Callable::Callable((Callable *)local_78,pCVar10);
  Callable::bind<ItemList*>(local_88);
  local_98 = 0;
  local_90 = 0;
  (*pcVar2)(plVar3,(Callable *)&local_98,local_88,(String *)local_68);
  Callable::~Callable((Callable *)&local_98);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar3 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_update_tile_inspector");
  Callable::unbind(iVar14);
  (*pcVar2)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar3 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_update_action_buttons");
  Callable::unbind(iVar14);
  (*pcVar2)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  plVar3 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC15;
  *(TileSetScenesCollectionSourceEditor **)(pCVar10 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_00113b98;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar4;
  *(code **)(pCVar10 + 0x38) = _scenes_list_item_activated;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "TileSetScenesCollectionSourceEditor::_scenes_list_item_activated";
  Callable::Callable((Callable *)local_58,pCVar10);
  StringName::StringName((StringName *)local_68,"item_activated",false);
  (*pcVar2)(plVar3,(String *)local_68,(CowData<char32_t> *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  (**(code **)(**(long **)(this + 0xa58) + 0x2c8))(*(long **)(this + 0xa58),1);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa58),0,0);
  this_04 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_04,false);
  this_04[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_00112828;
  postinitialize_handler((Object *)this_04);
  Node::add_child(pBVar6,this_04,0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_58[0] = (RefCounted *)0x0;
  Button::Button(pBVar11,(String *)local_58);
  postinitialize_handler((Object *)pBVar11);
  *(Button **)(this + 0xa60) = pBVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  plVar3 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_source_add_pressed");
  (*pcVar2)(plVar3,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa60),0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_58[0] = (RefCounted *)0x0;
  Button::Button(pBVar11,(String *)local_58);
  postinitialize_handler((Object *)pBVar11);
  *(Button **)(this + 0xa68) = pBVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa68));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa68),0));
  plVar3 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
            ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
             (_func_void *)"&TileSetScenesCollectionSourceEditor::_source_delete_pressed");
  (*pcVar2)(plVar3,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this_04,*(undefined8 *)(this + 0xa68),0,0);
  pRVar12 = (RefCounted *)operator_new(0x238,"");
  RefCounted::RefCounted(pRVar12);
  *(undefined8 *)(pRVar12 + 0x180) = 0;
  *(code **)pRVar12 = RefCounted::init_ref;
  StringName::StringName((StringName *)(pRVar12 + 0x188),"_can_handle",false);
  pRVar12[400] = (RefCounted)0x0;
  *(undefined8 *)(pRVar12 + 0x198) = 0;
  StringName::StringName((StringName *)(pRVar12 + 0x1a0),"_parse_begin",false);
  pRVar12[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar12 + 0x1b0) = 0;
  StringName::StringName((StringName *)(pRVar12 + 0x1b8),"_parse_category",false);
  pRVar12[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar12 + 0x1c8) = 0;
  StringName::StringName((StringName *)(pRVar12 + 0x1d0),"_parse_group",false);
  pRVar12[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar12 + 0x1e0) = 0;
  StringName::StringName((StringName *)(pRVar12 + 0x1e8),"_parse_property",false);
  pRVar12[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar12 + 0x1f8) = 0;
  StringName::StringName((StringName *)(pRVar12 + 0x200),"_parse_end",false);
  pRVar12[0x208] = (RefCounted)0x0;
  *(code **)pRVar12 = EditorInspector::add_inspector_plugin;
  *(undefined8 *)(pRVar12 + 0x230) = 0;
  *(undefined1 (*) [16])(pRVar12 + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar12 + 0x220) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar12);
  local_58[0] = pRVar12;
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    local_58[0] = (RefCounted *)0x0;
  }
  EditorInspector::add_inspector_plugin((Ref *)local_58);
  if (local_58[0] != (RefCounted *)0x0) {
    cVar5 = RefCounted::unreference();
    pRVar12 = local_58[0];
    if (cVar5 != '\0') {
      cVar5 = predelete_handler((Object *)local_58[0]);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pRVar12 + 0x140))(pRVar12);
        Memory::free_static(pRVar12,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get(StringName const&,
   Variant&) const */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get
          (TileSetScenesCollectionProxyObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  bool *pbVar2;
  char cVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) != 0) {
    lVar1 = *(long *)param_1;
    if (lVar1 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = 0;
      if (*(char **)(lVar1 + 8) == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar1 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_58,*(char **)(lVar1 + 8));
      }
    }
    cVar3 = String::operator==((String *)&local_58,"name");
    if (cVar3 != '\0') {
      String::parse_latin1((String *)&local_58,"resource_name");
    }
    pbVar2 = *(bool **)(this + 0x180);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    Object::get((StringName *)local_48,pbVar2);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    bVar4 = StringName::configured != '\0';
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
    if ((bVar4) && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00101e68) */
/* WARNING: Removing unreachable block (ram,0x00101f88) */
/* WARNING: Removing unreachable block (ram,0x00101ef7) */
/* WARNING: Removing unreachable block (ram,0x00101f78) */
/* WARNING: Removing unreachable block (ram,0x00101f03) */
/* WARNING: Removing unreachable block (ram,0x00101f0d) */
/* WARNING: Removing unreachable block (ram,0x00101f48) */
/* WARNING: Removing unreachable block (ram,0x00101f15) */
/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_set(StringName const&,
   Variant const&) */

undefined1 __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_set
          (TileSetScenesCollectionProxyObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  StringName *pSVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_90 [2];
  long local_80 [10];
  long local_30;
  
  lVar1 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_90[0] = 0;
  }
  else {
    local_90[0] = 0;
    if (*(char **)(lVar1 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(lVar1 + 0x10));
    }
    else {
      String::parse_latin1((String *)local_90,*(char **)(lVar1 + 8));
    }
  }
  cVar3 = String::operator==((String *)local_90,"name");
  if (cVar3 != '\0') {
    String::parse_latin1((String *)local_90,"resource_name");
  }
  pSVar2 = *(StringName **)(this + 0x180);
  StringName::StringName((StringName *)local_80,(String *)local_90,false);
  Object::set(pSVar2,(Variant *)local_80,(bool *)param_2);
  if ((StringName::configured != '\0') && (local_80[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_list(List<PropertyInfo,
   DefaultAllocator>*) const [clone .part.0] */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_list(List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = "";
  local_88 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_90 = 0;
  local_78 = "id";
  local_70 = 2;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,2,(StrRange *)&local_90,0,(StrRange *)&local_88,6,&local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_78 = "PackedScene";
  local_88 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_88);
  local_90 = 0;
  local_78 = "scene";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0x18,(StrRange *)&local_90,0x11,(StrRange *)&local_88,6,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_90 = 0;
  local_78 = "display_placeholder";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,1,(StrRange *)&local_90,0,(StrRange *)&local_88,6,&local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_list(List<PropertyInfo,
   DefaultAllocator>*) const */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_list
          (SceneTileProxyObject *this,List *param_1)

{
  if (*(long *)(this + 0x180) != 0) {
    _get_property_list(param_1);
    return;
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_property_list(List<PropertyInfo,
   DefaultAllocator>*) const */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_property_list
          (TileSetScenesCollectionProxyObject *this,List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  CowData<char32_t> local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = &_LC15;
  local_78 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  local_68 = &_LC52;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_80);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_68,4,(StrRange *)&local_80,0,(StrRange *)&local_78,6,&local_70);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_68);
  CowData<char32_t>::_unref(local_48);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get(StringName const&, Variant&)
   const */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get
          (SceneTileProxyObject *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
LAB_0010250c:
    uVar3 = 0;
  }
  else {
    cVar1 = StringName::operator==(param_1,"id");
    if (cVar1 == '\0') {
      cVar1 = StringName::operator==(param_1,"scene");
      if (cVar1 == '\0') {
        cVar1 = StringName::operator==(param_1,"display_placeholder");
        if (cVar1 == '\0') goto LAB_0010250c;
        bVar2 = (bool)TileSetScenesCollectionSource::get_scene_tile_display_placeholder
                                ((int)*(undefined8 *)(this + 0x180));
        Variant::Variant((Variant *)local_38,bVar2);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
      else {
        TileSetScenesCollectionSource::get_scene_tile_scene((int)(Ref<PackedScene> *)&local_40);
        Variant::Variant((Variant *)local_38,local_40);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
        Ref<PackedScene>::unref((Ref<PackedScene> *)&local_40);
      }
    }
    else {
      Variant::Variant((Variant *)local_38,*(int *)(this + 0x18c));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
    uVar3 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_set(StringName const&, Variant
   const&) */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_set
          (SceneTileProxyObject *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
LAB_001027f8:
    uVar6 = 0;
    goto LAB_0010279f;
  }
  cVar2 = StringName::operator==(param_1,"id");
  if (cVar2 == '\0') {
    pcVar8 = "scene";
    cVar2 = StringName::operator==(param_1,"scene");
    if (cVar2 == '\0') {
      pcVar8 = "display_placeholder";
      cVar2 = StringName::operator==(param_1,"display_placeholder");
      if (cVar2 == '\0') goto LAB_001027f8;
      uVar6 = *(undefined8 *)(this + 0x180);
      Variant::operator_cast_to_bool(param_2);
      TileSetScenesCollectionSource::set_scene_tile_display_placeholder
                ((int)uVar6,SUB41(*(undefined4 *)(this + 0x18c),0));
    }
    else {
      local_68 = 0;
      uVar6 = *(undefined8 *)(this + 0x180);
      lVar7 = Variant::get_validated_object();
      lVar1 = local_68;
      if (lVar7 != local_68) {
        if (lVar7 == 0) {
          if (local_68 != 0) {
            local_68 = 0;
            local_60 = lVar1;
            goto LAB_00102868;
          }
        }
        else {
          lVar7 = __dynamic_cast(lVar7,&Object::typeinfo,&PackedScene::typeinfo,0);
          if (lVar1 != lVar7) {
            local_60 = lVar1;
            local_68 = lVar7;
            if ((lVar7 != 0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
              local_68 = 0;
            }
LAB_00102868:
            Ref<PackedScene>::unref((Ref<PackedScene> *)&local_60);
          }
        }
      }
      TileSetScenesCollectionSource::set_scene_tile_scene
                (uVar6,*(undefined4 *)(this + 0x18c),&local_68);
      Ref<PackedScene>::unref((Ref<PackedScene> *)&local_68);
    }
    Object::emit_signal<char_const*>
              ((Object *)this,(StringName *)(CoreStringNames::singleton + 8),pcVar8);
  }
  else {
    iVar3 = Variant::operator_cast_to_int(param_2);
    if (iVar3 < 0) {
      _err_print_error(&_LC80,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",
                       0x8f,"Condition \"as_int < 0\" is true. Returning: false",0,0);
      uVar6 = 0;
      goto LAB_0010279f;
    }
    cVar2 = (**(code **)(**(long **)(this + 0x180) + 0x290))(*(long **)(this + 0x180),0,iVar3);
    if (cVar2 != '\0') {
      _err_print_error(&_LC80,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",
                       0x90,
                       "Condition \"tile_set_scenes_collection_source->has_scene_tile_id(as_int)\" is true. Returning: false"
                       ,0,0);
      uVar6 = 0;
      goto LAB_0010279f;
    }
    TileSetScenesCollectionSource::set_scene_tile_id
              ((int)*(undefined8 *)(this + 0x180),*(int *)(this + 0x18c));
    *(int *)(this + 0x18c) = iVar3;
    Object::emit_signal<char_const*>
              ((Object *)this,(StringName *)(CoreStringNames::singleton + 8),"id");
    for (iVar3 = 0; iVar4 = ItemList::get_item_count(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
      ItemList::get_item_metadata((int)(Variant *)local_58);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
      iVar4 = *(int *)(this + 0x18c);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar5 == iVar4) {
        ItemList::select((int)*(undefined8 *)(*(long *)(this + 0x178) + 0xa58),SUB41(iVar3,0));
        break;
      }
    }
  }
  uVar6 = 1;
LAB_0010279f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_bind_methods() */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_bind_methods(void)

{
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  PropertyInfo local_e8 [48];
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "what";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,4,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "changed";
  local_100 = 0;
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_100);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "SceneTileProxyObject";
  local_120 = 0;
  local_f0 = 0x14;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<int>::_unref((CowData<int> *)local_50);
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_can_drop_data_fw(Vector2 const&, Variant const&, Control*)
   const */

undefined4 __thiscall
TileSetScenesCollectionSourceEditor::_can_drop_data_fw
          (TileSetScenesCollectionSourceEditor *this,Vector2 *param_1,Variant *param_2,
          Control *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant local_88 [8];
  String local_80 [8];
  long local_78;
  long local_70;
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(Control **)(this + 0xa58) != param_3) {
LAB_00102c4b:
    uVar2 = 0;
    goto LAB_00102c4d;
  }
  Variant::operator_cast_to_Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"type");
  uVar2 = Dictionary::has(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((char)uVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[](local_88);
    Variant::operator_cast_to_String(local_68);
    uVar2 = String::operator==((String *)local_68,"files");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar2 == '\0') {
      Dictionary::~Dictionary((Dictionary *)local_88);
      goto LAB_00102c4b;
    }
    Variant::Variant((Variant *)local_58,"files");
    Dictionary::operator[](local_88);
    Variant::operator_cast_to_Vector(local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_60 == 0) {
LAB_00102e65:
      uVar2 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar4 = 0;
      if (lVar3 == 0) goto LAB_00102e65;
      while (lVar4 < lVar3) {
        EditorFileSystem::get_file_type(local_80);
        StringName::StringName((StringName *)&local_70,"PackedScene",false);
        StringName::StringName((StringName *)&local_78,local_80,false);
        cVar1 = ClassDB::is_parent_class((StringName *)&local_78,(StringName *)&local_70);
        if ((StringName::configured != '\0') &&
           (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_70 != 0)))) {
          StringName::unref();
        }
        if (cVar1 == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
          goto LAB_00102e65;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        lVar4 = lVar4 + 1;
        if (local_60 == 0) break;
        lVar3 = *(long *)(local_60 + -8);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
  }
  Dictionary::~Dictionary((Dictionary *)local_88);
LAB_00102c4d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* TileSetScenesCollectionSourceEditor::_bind_methods() */

void TileSetScenesCollectionSourceEditor::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  PropertyInfo local_f8 [48];
  char *local_c8;
  undefined8 local_c0;
  CowData<StringName> local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = 0;
  local_120 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_120);
  local_128 = 0;
  local_c8 = "source_id";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_128);
  PropertyInfo::PropertyInfo
            (local_f8,2,(StrRange *)&local_128,0,(StrRange *)&local_120,6,&local_118);
  local_c8 = "source_id_changed";
  local_110 = 0;
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_110);
  local_b8[0] = (CowData<StringName>)0x0;
  local_b8[1] = (CowData<StringName>)0x0;
  local_b8[2] = (CowData<StringName>)0x0;
  local_b8[3] = (CowData<StringName>)0x0;
  local_b8[4] = (CowData<StringName>)0x0;
  local_b8[5] = (CowData<StringName>)0x0;
  local_b8[6] = (CowData<StringName>)0x0;
  local_b8[7] = (CowData<StringName>)0x0;
  local_b8[8] = (CowData<StringName>)0x0;
  local_b8[9] = (CowData<StringName>)0x0;
  local_b8[10] = (CowData<StringName>)0x0;
  local_b8[0xb] = (CowData<StringName>)0x0;
  local_b8[0xc] = (CowData<StringName>)0x0;
  local_b8[0xd] = (CowData<StringName>)0x0;
  local_b8[0xe] = (CowData<StringName>)0x0;
  local_b8[0xf] = (CowData<StringName>)0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,local_f8);
  local_108 = "TileSetScenesCollectionSourceEditor";
  local_130 = 0;
  local_100 = 0x23;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_108,(String *)&local_130,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<int>::_unref((CowData<int> *)&local_60);
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  PropertyInfo::~PropertyInfo(local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_scene_thumbnail_done",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar1 = create_method_bind<TileSetScenesCollectionSourceEditor,String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>
                     (_scene_thumbnail_done);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_bind_methods() */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108 [6];
  long local_d8;
  undefined8 local_d0;
  CowData<StringName> local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = &_LC0;
  D_METHODP((char *)&local_d8,(char ***)"set_id",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,int>
                     (set_id);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_id",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,int>
                     (get_id);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_120 = 0;
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"id");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(String *)&local_130,0,(String *)&local_128,6,&local_120);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"TileSetScenesCollectionProxyObject");
  StringName::StringName((StringName *)local_108,(String *)&local_138,false);
  ClassDB::add_property
            ((StringName *)local_108,(PropertyInfo *)&local_d8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (StringName::configured != '\0') {
    if (local_120 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103615;
    }
    if (local_118 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103615;
    }
    if (local_110 != 0) {
      StringName::unref();
    }
  }
LAB_00103615:
  local_120 = 0;
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"what");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_108,4,(String *)&local_130,0,(String *)&local_128,6,&local_120);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"changed");
  local_c8[0] = (CowData<StringName>)0x0;
  local_c8[1] = (CowData<StringName>)0x0;
  local_c8[2] = (CowData<StringName>)0x0;
  local_c8[3] = (CowData<StringName>)0x0;
  local_c8[4] = (CowData<StringName>)0x0;
  local_c8[5] = (CowData<StringName>)0x0;
  local_c8[6] = (CowData<StringName>)0x0;
  local_c8[7] = (CowData<StringName>)0x0;
  local_c8[8] = (CowData<StringName>)0x0;
  local_c8[9] = (CowData<StringName>)0x0;
  local_c8[10] = (CowData<StringName>)0x0;
  local_c8[0xb] = (CowData<StringName>)0x0;
  local_c8[0xc] = (CowData<StringName>)0x0;
  local_c8[0xd] = (CowData<StringName>)0x0;
  local_c8[0xe] = (CowData<StringName>)0x0;
  local_c8[0xf] = (CowData<StringName>)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)local_108);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"TileSetScenesCollectionProxyObject");
  StringName::StringName((StringName *)&local_110,(String *)&local_138,false);
  ClassDB::add_signal((StringName *)&local_110,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<int>::_unref((CowData<int> *)&local_70);
  CowData<Variant>::_unref((CowData<Variant> *)&local_88);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_source_add_pressed() */

void __thiscall
TileSetScenesCollectionSourceEditor::_source_add_pressed(TileSetScenesCollectionSourceEditor *this)

{
  long *plVar1;
  code *pcVar2;
  String *pSVar3;
  EditorFileDialog *this_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  long local_70;
  TileSetScenesCollectionSourceEditor local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  long local_40;
  
  lVar6 = *(long *)(this + 0xa70);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
    this_00 = (EditorFileDialog *)operator_new(0x1108,"");
    EditorFileDialog::EditorFileDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(EditorFileDialog **)(this + 0xa70) = this_00;
    Node::add_child(this,this_00,0,0);
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa70),0);
    plVar1 = *(long **)(this + 0xa70);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor,String_const&>
              (local_68,(char *)this,
               (_func_void_String_ptr *)"&TileSetScenesCollectionSourceEditor::_scene_file_selected"
              );
    StringName::StringName((StringName *)&local_70,"file_selected",false);
    (*pcVar2)(plVar1,(StringName *)&local_70,local_68,0);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_68);
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"tscn");
    local_50[0] = 0;
    String::parse_latin1((String *)local_50,"scn");
    local_60 = (undefined8 *)0x0;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    puVar4 = (undefined8 *)Memory::alloc_static(0x20,false);
    if (puVar4 != (undefined8 *)0x0) {
      local_60 = puVar4 + 2;
      lVar6 = 0;
      *puVar4 = 1;
      puVar4[1] = 2;
      *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
      do {
        if (local_60 == (undefined8 *)0x0) {
          lVar5 = 0;
LAB_00103b13:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar5,"p_index","size()","",false
                     ,false);
        }
        else {
          lVar5 = local_60[-1];
          if (lVar5 <= lVar6) goto LAB_00103b13;
          CowData<String>::_copy_on_write((CowData<String> *)&local_60);
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)(local_60 + lVar6),
                     (CowData *)((String *)&local_58 + lVar6 * 8));
        }
        if (lVar6 != 0) goto LAB_00103a5e;
        lVar6 = 1;
      } while( true );
    }
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
LAB_00103a5e:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    puVar7 = local_60;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    puVar4 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      puVar4 = local_60 + local_60[-1];
    }
    for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      pSVar3 = *(String **)(this + 0xa70);
      String::to_upper();
      operator+((char *)local_78,(String *)&_LC102);
      EditorFileDialog::add_filter(pSVar3,(String *)local_78);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    lVar6 = *(long *)(this + 0xa70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  EditorFileDialog::popup_file_dialog();
  return;
}



/* TileSetScenesCollectionSourceEditor::_update_scenes_list() [clone .part.0] */

void __thiscall
TileSetScenesCollectionSourceEditor::_update_scenes_list(TileSetScenesCollectionSourceEditor *this)

{
  undefined8 uVar1;
  String *pSVar2;
  Vector2i *pVVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Ref *pRVar8;
  Object *pOVar9;
  int iVar10;
  long in_FS_OFFSET;
  float fVar11;
  Variant *local_110;
  Variant *local_100;
  int local_ec;
  int local_cc;
  Object *local_c0;
  undefined8 local_b8;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  Object *local_90 [2];
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_selected_items();
  if ((local_80 == 0) || (*(long *)(local_80 + -8) < 1)) {
    local_cc = -1;
  }
  else {
    ItemList::get_item_metadata((int)(Variant *)local_58);
    local_cc = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_110 = (Variant *)local_58;
  iVar10 = 0;
  ItemList::clear();
  local_ec = -1;
  while( true ) {
    iVar5 = (**(code **)(**(long **)(this + 0xa18) + 0x280))(*(long **)(this + 0xa18),0);
    if (iVar5 <= iVar10) break;
    iVar5 = (**(code **)(**(long **)(this + 0xa18) + 0x288))(*(long **)(this + 0xa18),0,iVar10);
    TileSetScenesCollectionSource::get_scene_tile_scene((int)&local_c0);
    pSVar2 = *(String **)(this + 0xa58);
    if (local_c0 == (Object *)0x0) {
      if ((_update_scenes_list()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_update_scenes_list()::{lambda()#1}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_update_scenes_list()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_scenes_list()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_scenes_list()::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_90);
      local_78 = "";
      local_98 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_98);
      local_78 = "Tile with Invalid Scene";
      local_a0 = 0;
      local_70 = 0x17;
      String::parse_latin1((StrRange *)&local_a0);
      TTR((String *)&local_78,(String *)&local_a0);
      uVar6 = ItemList::add_item(pSVar2,(Ref *)&local_78,SUB81((StringName *)local_90,0));
      local_100 = (Variant *)(ulong)uVar6;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (((local_90[0] != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar9 = local_90[0], cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_90[0]), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    else {
      local_90[0] = (Object *)0x0;
      Resource::get_path();
      Resource::get_path();
      String::get_file();
      String::get_basename();
      local_78 = "%s (path:%s id:%d)";
      local_b8 = 0;
      local_70 = 0x12;
      String::parse_latin1((StrRange *)&local_b8);
      vformat<String,String,int>
                ((CowData<char32_t> *)&local_78,(StrRange *)&local_b8,(CowData<char32_t> *)&local_a0
                 ,(CowData<char32_t> *)&local_98,iVar5);
      uVar6 = ItemList::add_item(pSVar2,(Ref *)&local_78,SUB81((Object *)local_90,0));
      local_100 = (Variant *)(ulong)uVar6;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (((local_90[0] != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar9 = local_90[0], cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_90[0]), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      Variant::Variant(local_110,iVar10);
      pRVar8 = (Ref *)EditorResourcePreview::get_singleton();
      StringName::StringName((StringName *)&local_78,"_scene_thumbnail_done",false);
      local_90[0] = (Object *)0x0;
      if (((local_c0 != (Object *)0x0) &&
          (pOVar9 = (Object *)__dynamic_cast(local_c0,&Object::typeinfo,&Resource::typeinfo,0),
          pOVar9 != (Object *)0x0)) &&
         (local_90[0] = pOVar9, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_90[0] = (Object *)0x0;
      }
      EditorResourcePreview::queue_edited_resource_preview
                (pRVar8,(Object *)local_90,(StringName *)this,(Variant *)&local_78);
      if (((local_90[0] != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar9 = local_90[0], cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_90[0]), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    uVar1 = *(undefined8 *)(this + 0xa58);
    Variant::Variant(local_110,iVar5);
    ItemList::set_item_metadata((int)uVar1,local_100);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((-1 < local_cc) && (iVar5 == local_cc)) {
      local_ec = iVar10;
    }
    if (((local_c0 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar9 = local_c0, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_c0), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    iVar10 = iVar10 + 1;
  }
  iVar10 = ItemList::get_item_count();
  if (iVar10 == 0) {
    pSVar2 = *(String **)(this + 0xa58);
    local_78 = (char *)0x0;
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Drag and drop scenes here or use the Add button.");
    TTR((String *)local_90,(String *)&local_a0);
    ItemList::add_item(pSVar2,(Ref *)local_90,SUB81((CowData<char32_t> *)&local_78,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
    ItemList::set_item_disabled((int)*(undefined8 *)(this + 0xa58),true);
  }
  if (-1 < local_ec) {
    ItemList::select((int)*(undefined8 *)(this + 0xa58),SUB41(local_ec,0));
  }
  local_78 = (char *)0x0;
  String::parse_latin1((String *)&local_78,"filesystem/file_dialog/thumbnail_size");
  _EDITOR_GET((String *)local_110);
  iVar10 = Variant::operator_cast_to_int(local_110);
  fVar11 = (float)EditorScale::get_scale();
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  pVVar3 = *(Vector2i **)(this + 0xa58);
  local_60 = CONCAT44((float)(int)(fVar11 * (float)iVar10),(float)(int)(fVar11 * (float)iVar10));
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  ItemList::set_fixed_icon_size(pVVar3);
  CowData<int>::_unref((CowData<int> *)&local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::_update_scenes_list() */

void __thiscall
TileSetScenesCollectionSourceEditor::_update_scenes_list(TileSetScenesCollectionSourceEditor *this)

{
  if (*(long *)(this + 0xa18) != 0) {
    _update_scenes_list(this);
    return;
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::_scene_file_selected(String const&) */

void __thiscall
TileSetScenesCollectionSourceEditor::_scene_file_selected
          (TileSetScenesCollectionSourceEditor *this,String *param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  Object *pOVar6;
  Variant *pVVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined8 local_b8;
  Object *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"");
  ResourceLoader::load((String *)&local_b0,param_1,(String *)&local_b8,1,0);
  if (local_b0 == (Object *)0x0) {
    pOVar5 = (Object *)0x0;
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&PackedScene::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar5 = (Object *)0x0;
      }
      if (local_b0 == (Object *)0x0) goto LAB_001044a2;
    }
    cVar3 = RefCounted::unreference();
    pOVar6 = local_b0;
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_b0), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_001044a2:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  iVar4 = TileSetScenesCollectionSource::get_next_scene_tile_id();
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Add a Scene Tile");
  TTR((String *)&local_b0,(String *)&local_c0);
  EditorUndoRedoManager::create_action(pOVar6,(String *)&local_b0,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (pOVar5 == (Object *)0x0) {
    pOVar8 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::reference();
    pOVar8 = (Object *)0x0;
    if (cVar3 != '\0') {
      pOVar8 = pOVar5;
    }
  }
  StringName::StringName((StringName *)&local_b0,"create_scene_tile",false);
  pSVar2 = *(StringName **)(this + 0xa18);
  Variant::Variant((Variant *)local_88,pOVar8);
  Variant::Variant((Variant *)&local_70,iVar4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)&local_70;
  EditorUndoRedoManager::add_do_methodp(pOVar6,pSVar2,(Variant **)&local_b0,(int)&local_a8);
  pVVar7 = (Variant *)local_40;
  do {
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar7 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (((pOVar8 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  StringName::StringName((StringName *)&local_b0,"remove_scene_tile",false);
  pSVar2 = *(StringName **)(this + 0xa18);
  Variant::Variant((Variant *)local_88,iVar4);
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp(pOVar6,pSVar2,(Variant **)&local_b0,(int)&local_a8);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar3 = Variant::needs_deinit[local_88[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_88[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  if (*(long *)(this + 0xa18) != 0) {
    _update_scenes_list(this);
  }
  _update_action_buttons(this);
  _update_tile_inspector(this);
  if (((pOVar5 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
     (cVar3 = predelete_handler(pOVar5), cVar3 == '\0')) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar5,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_source_delete_pressed() */

void __thiscall
TileSetScenesCollectionSourceEditor::_source_delete_pressed
          (TileSetScenesCollectionSourceEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  int iVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  undefined8 local_f0;
  Object *local_e8;
  long local_e0 [2];
  long local_d0;
  Variant *local_c8 [2];
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_selected_items();
  if (local_d0 == 0) {
    _err_print_error("_source_delete_pressed",
                     "editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",0x10e,
                     "Condition \"selected_indices.is_empty()\" is true.",0,0);
    CowData<int>::_unref((CowData<int> *)&local_d0);
  }
  else {
    if (*(long *)(local_d0 + -8) < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,*(long *)(local_d0 + -8),"p_index",
                 "size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar8 = (int)(Variant *)&local_b8;
    ItemList::get_item_metadata(iVar8);
    iVar6 = Variant::operator_cast_to_int((Variant *)&local_b8);
    if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
    local_e8 = (Object *)0x0;
    String::parse_latin1((String *)&local_e8,"");
    local_f0 = 0;
    String::parse_latin1((String *)&local_f0,"Remove a Scene Tile");
    TTR((String *)local_e0,(String *)&local_f0);
    EditorUndoRedoManager::create_action(pOVar7,(String *)local_e0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    StringName::StringName((StringName *)local_e0,"remove_scene_tile",false);
    pSVar2 = *(StringName **)(this + 0xa18);
    Variant::Variant((Variant *)&local_b8,iVar6);
    local_a0 = 0;
    local_98 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)&local_b8;
    EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar2,(Variant **)local_e0,(int)local_c8);
    if (Variant::needs_deinit[(int)local_a0] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_e0[0] != 0)) {
      StringName::unref();
    }
    TileSetScenesCollectionSource::get_scene_tile_scene((int)(String *)&local_e8);
    StringName::StringName((StringName *)local_e0,"create_scene_tile",false);
    pSVar2 = *(StringName **)(this + 0xa18);
    Variant::Variant(local_88,local_e8);
    Variant::Variant(local_70,iVar6);
    local_50 = (undefined1  [16])0x0;
    pVVar9 = (Variant *)local_40;
    local_58 = 0;
    local_b8 = local_88;
    pVStack_b0 = local_70;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar2,(Variant **)local_e0,iVar8);
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != local_88);
    if ((StringName::configured != '\0') && (local_e0[0] != 0)) {
      StringName::unref();
    }
    if (local_e8 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_e8;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_e8);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
    if (*(long *)(this + 0xa18) != 0) {
      _update_scenes_list(this);
    }
    _update_action_buttons(this);
    _update_tile_inspector(this);
    CowData<int>::_unref((CowData<int> *)&local_d0);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_drop_data_fw(Vector2 const&, Variant const&, Control*) */

void __thiscall
TileSetScenesCollectionSourceEditor::_drop_data_fw
          (TileSetScenesCollectionSourceEditor *this,Vector2 *param_1,Variant *param_2,
          Control *param_3)

{
  Variant *pVVar1;
  StringName *pSVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  Object *pOVar9;
  Variant *pVVar10;
  long lVar11;
  long in_FS_OFFSET;
  Variant local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  Variant local_c8 [8];
  long local_c0;
  Object *local_b8;
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
  cVar4 = _can_drop_data_fw(this,param_1,param_2,param_3);
  if ((cVar4 != '\0') && (*(Control **)(this + 0xa58) == param_3)) {
    Variant::operator_cast_to_Dictionary(local_e0);
    Variant::Variant((Variant *)local_88,"files");
    Dictionary::operator[](local_e0);
    Variant::operator_cast_to_Vector(local_c8);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c0 != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(local_c0 + -8) <= lVar11) break;
        local_d0 = 0;
        local_b0 = 0;
        local_b8 = (Object *)&_LC15;
        String::parse_latin1((StrRange *)&local_d0);
        if (local_c0 == 0) {
          lVar8 = 0;
LAB_001051ab:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar8,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar8 = *(long *)(local_c0 + -8);
        if (lVar8 <= lVar11) goto LAB_001051ab;
        ResourceLoader::load
                  ((String *)&local_b8,local_c0 + lVar11 * 8,(CowData<char32_t> *)&local_d0,1);
        if (local_b8 == (Object *)0x0) {
LAB_00104d82:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        }
        else {
          pOVar6 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&PackedScene::typeinfo,0);
          if (pOVar6 == (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 == '\0') goto LAB_00104d82;
LAB_00105110:
            pOVar6 = (Object *)0x0;
LAB_00105112:
            pOVar9 = local_b8;
            cVar4 = predelete_handler(local_b8);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            if (pOVar6 != (Object *)0x0) goto LAB_00104e6c;
          }
          else {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              if ((local_b8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
              goto LAB_00105110;
              goto LAB_00104d82;
            }
            if ((local_b8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
            goto LAB_00105112;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
LAB_00104e6c:
            iVar5 = TileSetScenesCollectionSource::get_next_scene_tile_id();
            pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
            local_b8 = (Object *)&_LC15;
            local_d8 = 0;
            local_b0 = 0;
            String::parse_latin1((StrRange *)&local_d8);
            local_b8 = (Object *)0x106684;
            local_d0 = 0;
            local_b0 = 0x10;
            String::parse_latin1((StrRange *)&local_d0);
            TTR((String *)&local_b8,(String *)&local_d0);
            EditorUndoRedoManager::create_action(pOVar7,(String *)&local_b8,0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            cVar4 = RefCounted::reference();
            pOVar9 = (Object *)0x0;
            if (cVar4 != '\0') {
              pOVar9 = pOVar6;
            }
            StringName::StringName((StringName *)&local_b8,"create_scene_tile",false);
            pSVar2 = *(StringName **)(this + 0xa18);
            Variant::Variant((Variant *)local_88,pOVar9);
            Variant::Variant((Variant *)local_70,iVar5);
            pVVar10 = (Variant *)local_40;
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            local_a8 = (Variant *)local_88;
            pVStack_a0 = (Variant *)local_70;
            EditorUndoRedoManager::add_do_methodp
                      (pOVar7,pSVar2,(Variant **)&local_b8,(int)&local_a8);
            do {
              pVVar1 = pVVar10 + -0x18;
              pVVar10 = pVVar10 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar10 != (Variant *)local_88);
            if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
              StringName::unref();
            }
            if (((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
               (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
            StringName::StringName((StringName *)&local_b8,"remove_scene_tile",false);
            pSVar2 = *(StringName **)(this + 0xa18);
            Variant::Variant((Variant *)local_88,iVar5);
            local_70[0] = 0;
            local_70[1] = 0;
            local_68 = (undefined1  [16])0x0;
            local_a8 = (Variant *)local_88;
            EditorUndoRedoManager::add_undo_methodp
                      (pOVar7,pSVar2,(Variant **)&local_b8,(int)&local_a8);
            if (Variant::needs_deinit[local_70[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
              StringName::unref();
            }
            EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (local_c0 != 0);
    }
    if (*(long *)(this + 0xa18) != 0) {
      _update_scenes_list(this);
    }
    _update_action_buttons(this);
    _update_tile_inspector(this);
    CowData<String>::_unref((CowData<String> *)&local_c0);
    Dictionary::~Dictionary((Dictionary *)local_e0);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::edit(Ref<TileSet>, TileSetScenesCollectionSource*, int) */

void __thiscall
TileSetScenesCollectionSourceEditor::edit
          (TileSetScenesCollectionSourceEditor *this,long *param_2,Callable *param_3,int param_4)

{
  char cVar1;
  TileSetScenesCollectionSourceEditor TVar2;
  Callable *pCVar3;
  char *pcVar4;
  Object *pOVar5;
  undefined8 uVar6;
  uint uVar7;
  Object *pOVar8;
  Callable *pCVar9;
  long in_FS_OFFSET;
  Callable *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001056d9;
    uVar6 = 0x191;
    pcVar4 = "Condition \"p_tile_set.is_null()\" is true.";
    goto LAB_00105536;
  }
  if (param_3 == (Callable *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x192;
      pcVar4 = "Parameter \"p_tile_set_scenes_collection_source\" is null.";
      goto LAB_00105536;
    }
    goto LAB_001056d9;
  }
  if (param_4 < 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x193;
      pcVar4 = "Condition \"p_source_id < 0\" is true.";
      goto LAB_00105536;
    }
    goto LAB_001056d9;
  }
  uVar7 = (uint)(TileSetScenesCollectionSourceEditor *)local_58;
  TileSet::get_source(uVar7);
  pCVar9 = local_58[0];
  if (local_58[0] != (Callable *)0x0) {
    cVar1 = RefCounted::unreference();
    pCVar3 = local_58[0];
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)local_58[0]), cVar1 != '\0')) {
      (**(code **)(*(long *)pCVar3 + 0x140))();
      Memory::free_static(pCVar3,false);
    }
    if (param_3 == pCVar9) {
      pOVar8 = (Object *)*param_2;
      TVar2 = (TileSetScenesCollectionSourceEditor)0x0;
      if (pOVar8 != (Object *)0x0) {
        local_58[0] = (Callable *)0x0;
        pCVar3 = (Callable *)__dynamic_cast(pOVar8,&Object::typeinfo,&Resource::typeinfo,0);
        uVar6 = EditorNode::singleton;
        if ((pCVar3 != (Callable *)0x0) &&
           (local_58[0] = pCVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          local_58[0] = (Callable *)0x0;
        }
        TVar2 = (TileSetScenesCollectionSourceEditor)
                EditorNode::is_resource_read_only
                          (uVar6,(TileSetScenesCollectionSourceEditor *)local_58,0);
        if (((local_58[0] != (Callable *)0x0) &&
            (cVar1 = RefCounted::unreference(), pCVar3 = local_58[0], cVar1 != '\0')) &&
           (cVar1 = predelete_handler((Object *)local_58[0]), cVar1 != '\0')) {
          (**(code **)(*(long *)pCVar3 + 0x140))();
          Memory::free_static(pCVar3,false);
        }
        pOVar8 = (Object *)*param_2;
      }
      pOVar5 = *(Object **)(this + 0xa10);
      pCVar3 = *(Callable **)(this + 0xa18);
      if (pOVar5 == pOVar8) {
        if (pCVar3 == pCVar9) {
          if ((*(int *)(this + 0xa20) == param_4) && (this[0xa0d] == TVar2)) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
            goto LAB_001056d9;
          }
LAB_00105398:
          create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
                    ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
                     (_func_void *)
                     "&TileSetScenesCollectionSourceEditor::_tile_set_scenes_collection_source_changed"
                    );
          Resource::disconnect_changed(pCVar3);
          Callable::~Callable((Callable *)local_58);
          pOVar8 = (Object *)*param_2;
          pOVar5 = *(Object **)(this + 0xa10);
          if (pOVar8 != pOVar5) goto LAB_001053de;
        }
        else if (pCVar3 != (Callable *)0x0) goto LAB_00105398;
      }
      else {
        if (pCVar3 != (Callable *)0x0) goto LAB_00105398;
LAB_001053de:
        *(Object **)(this + 0xa10) = pOVar8;
        if ((pOVar8 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          *(undefined8 *)(this + 0xa10) = 0;
        }
        if (((pOVar5 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
           (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        pOVar8 = *(Object **)(this + 0xa10);
      }
      *(Callable **)(this + 0xa18) = pCVar9;
      *(int *)(this + 0xa20) = param_4;
      this[0xa0d] = TVar2;
      if (pOVar8 == (Object *)0x0) {
LAB_001054d8:
        create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
                  ((TileSetScenesCollectionSourceEditor *)local_58,(char *)this,
                   (_func_void *)
                   "&TileSetScenesCollectionSourceEditor::_tile_set_scenes_collection_source_changed"
                  );
        Resource::connect_changed(pCVar9,uVar7);
        Callable::~Callable((Callable *)local_58);
      }
      else {
        EditorInspector::set_read_only(SUB81(*(undefined8 *)(this + 0xa38),0));
        EditorInspector::set_read_only(SUB81(*(undefined8 *)(this + 0xa50),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
        pCVar9 = *(Callable **)(this + 0xa18);
        if (pCVar9 != (Callable *)0x0) goto LAB_001054d8;
      }
      _update_source_inspector(this);
      if (*(long *)(this + 0xa18) != 0) {
        _update_scenes_list(this);
      }
      _update_action_buttons(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_tile_inspector(this);
        return;
      }
      goto LAB_001056d9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = 0x194;
    pcVar4 = 
    "Condition \"p_tile_set->get_source(p_source_id) != p_tile_set_scenes_collection_source\" is true."
    ;
LAB_00105536:
    _err_print_error(&_LC13,"editor/plugins/tiles/tile_set_scenes_collection_source_editor.cpp",
                     uVar6,pcVar4,0,0);
    return;
  }
LAB_001056d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::_notification(int) */

void __thiscall
TileSetScenesCollectionSourceEditor::_notification
          (TileSetScenesCollectionSourceEditor *this,int param_1)

{
  Ref *pRVar1;
  String *pSVar2;
  undefined8 uVar3;
  char cVar4;
  TileSetScenesCollectionSourceEditor TVar5;
  int iVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  String local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    if (*(long *)(this + 0xa18) != 0) {
      _update_scenes_list(this);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_action_buttons(this);
      return;
    }
  }
  else {
    if (param_1 < 0x20) {
      if (param_1 == 0xd) {
        EditorInspector::edit(*(Object **)(this + 0xa38));
        pSVar2 = *(String **)(this + 0xa38);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "The tile\'s unique identifier within this TileSet. Each tile stores its source ID, so changing one may make tiles invalid."
                  );
        TTR(local_58,(String *)&local_68);
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"id");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"TileSetScenesCollectionProxyObject");
        EditorInspector::add_custom_property_description
                  (pSVar2,(String *)&local_50,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        pSVar2 = *(String **)(this + 0xa38);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "The human-readable name for the scene collection. Use a descriptive name here for organizational purposes (such as \"obstacles\", \"decoration\", etc.)."
                  );
        TTR(local_58,(String *)&local_68);
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"name");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"TileSetScenesCollectionProxyObject");
        EditorInspector::add_custom_property_description
                  (pSVar2,(String *)&local_50,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        EditorInspector::edit(*(Object **)(this + 0xa50));
        pSVar2 = *(String **)(this + 0xa50);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "ID of the scene tile in the collection. Each painted tile has associated ID, so changing this property may cause your TileMaps to not display properly."
                  );
        TTR(local_58,(String *)&local_68);
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"id");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"SceneTileProxyObject");
        EditorInspector::add_custom_property_description
                  (pSVar2,(String *)&local_50,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        pSVar2 = *(String **)(this + 0xa50);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,"Absolute path to the scene associated with this tile.");
        TTR(local_58,(String *)&local_68);
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"scene");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"SceneTileProxyObject");
        EditorInspector::add_custom_property_description
                  (pSVar2,(String *)&local_50,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        pSVar2 = *(String **)(this + 0xa50);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"");
        local_68 = 0;
        String::parse_latin1
                  ((String *)&local_68,
                   "If [code]true[/code], a placeholder marker will be displayed on top of the scene\'s preview. The marker is displayed anyway if the scene has no valid preview."
                  );
        TTR(local_58,(String *)&local_68);
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"display_placeholder");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"SceneTileProxyObject");
        EditorInspector::add_custom_property_description
                  (pSVar2,(String *)&local_50,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else if ((param_1 == 0x19) && (this[0xa24] != (TileSetScenesCollectionSourceEditor)0x0)) {
        this[0xa0d] = (TileSetScenesCollectionSourceEditor)0x0;
        if (*(long *)(this + 0xa10) != 0) {
          local_48 = (Object *)0x0;
          pOVar7 = (Object *)
                   __dynamic_cast(*(long *)(this + 0xa10),&Object::typeinfo,&Resource::typeinfo,0);
          uVar3 = EditorNode::singleton;
          if (pOVar7 != (Object *)0x0) {
            local_48 = pOVar7;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              local_48 = (Object *)0x0;
            }
          }
          TVar5 = (TileSetScenesCollectionSourceEditor)
                  EditorNode::is_resource_read_only(uVar3,&local_48,0);
          this[0xa0d] = TVar5;
          if (local_48 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            pOVar7 = local_48;
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_48);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
          }
        }
        _update_source_inspector(this);
        if (*(long *)(this + 0xa18) != 0) {
          _update_scenes_list(this);
        }
        _update_action_buttons(this);
        _update_tile_inspector(this);
        this[0xa24] = (TileSetScenesCollectionSourceEditor)0x0;
      }
    }
    else if (param_1 == 0x2d) {
      pRVar1 = *(Ref **)(this + 0xa60);
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_48);
      Button::set_button_icon(pRVar1);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      pRVar1 = *(Ref **)(this + 0xa68);
      if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
        iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
        if (iVar6 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_48);
      Button::set_button_icon(pRVar1);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      if (*(long *)(this + 0xa18) != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_scenes_list(this);
          return;
        }
        goto LAB_00105dc5;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00105dc5:
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



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::is_class_ptr(void*)
   const */

uint __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::is_class_ptr
          (TileSetScenesCollectionProxyObject *this,void *param_1)

{
  return (uint)CONCAT71(0x1140,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_validate_propertyv(PropertyInfo&)
   const */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_validate_propertyv
               (PropertyInfo *param_1)

{
  return;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_property_can_revertv(StringName
   const&) const */

undefined8
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_property_can_revertv
          (StringName *param_1)

{
  return 0;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_property_get_revertv(StringName
   const&, Variant&) const */

undefined8
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_notificationv(int,
   bool) */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_notificationv
               (int param_1,bool param_2)

{
  return;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::is_class_ptr(void*) const */

uint __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::is_class_ptr
          (SceneTileProxyObject *this,void *param_1)

{
  return (uint)CONCAT71(0x1140,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_validate_propertyv(PropertyInfo&)
   const */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_validate_propertyv
               (PropertyInfo *param_1)

{
  return;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_property_can_revertv(StringName
   const&) const */

undefined8
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_property_can_revertv
          (StringName *param_1)

{
  return 0;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_property_get_revertv(StringName
   const&, Variant&) const */

undefined8
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_notificationv(int, bool) */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_notificationv
               (int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
  return;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::
_gen_argument_type(MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>
                   *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 4) && (uVar1 = 4, param_1 != 0)) && (uVar1 = 0x18, param_1 == 3)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::get_argument_meta(int) const */

undefined8
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::
get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
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



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::get_argument_count
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::get_argument_count
          (CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::get_argument_count
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this,bool *param_1
          )

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::
get_argument_count(CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Object, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,void>::get_argument_count
          (CallableCustomMethodPointer<Object,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&> *this
          )

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ce8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&> *this
          )

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ce8;
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



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject() */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject
          (SceneTileProxyObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113078;
  Object::~Object((Object *)this);
  return;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject() */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject
          (SceneTileProxyObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00113078;
  Object::~Object((Object *)this);
  operator_delete(this,400);
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



/* TileSetScenesCollectionSourceEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8
TileSetScenesCollectionSourceEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* TileSetScenesCollectionSourceEditor::_property_can_revertv(StringName const&) const */

undefined8 TileSetScenesCollectionSourceEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::get_object(CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_001067ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001067ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001067ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&> *this
          )

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
      goto LAB_001068ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001068ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001068ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::get_object
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this)

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
      goto LAB_001069ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001069ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001069ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, int>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::get_object
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this)

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
      goto LAB_00106aed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106aed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106aed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Object, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,void>::get_object(CallableCustomMethodPointer<Object,void> *this)

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
      goto LAB_00106bed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106bed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106bed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::get_object(CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_00106ced;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106ced;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106ced:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1140,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x113d,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* TileSetScenesCollectionSourceEditor::_validate_propertyv(PropertyInfo&) const */

void TileSetScenesCollectionSourceEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119018 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00119018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* TileSetScenesCollectionSourceEditor::_setv(StringName const&, Variant const&) */

undefined8 TileSetScenesCollectionSourceEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00119020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
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
    uVar1 = (uint)CONCAT71(0x1140,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x113f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1140,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x113f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1140,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* TileSetScenesCollectionSourceEditor::is_class_ptr(void*) const */

ulong TileSetScenesCollectionSourceEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x113f,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1140,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x113f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1140,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1140,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1140,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x00107398) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107408) */
/* TileSetScenesCollectionSourceEditor::_getv(StringName const&, Variant&) const */

undefined8 TileSetScenesCollectionSourceEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107478) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001074e8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::~TileSetScenesCollectionProxyObject()
    */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::
~TileSetScenesCollectionProxyObject(TileSetScenesCollectionProxyObject *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00112f18;
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Object::~Object((Object *)this);
        return;
      }
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::~TileSetScenesCollectionProxyObject()
    */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::
~TileSetScenesCollectionProxyObject(TileSetScenesCollectionProxyObject *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00112f18;
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Object::~Object((Object *)this);
  operator_delete(this,400);
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
      if (StringName::configured == '\0') goto LAB_00107650;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107650:
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
      if (StringName::configured == '\0') goto LAB_001076b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001076b0:
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
      if (StringName::configured == '\0') goto LAB_00107710;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107710:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_00107780;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107780:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119030 != Container::_notification) {
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
  if ((code *)PTR__notification_00119030 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119038 != Container::_notification) {
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
  if ((code *)PTR__notification_00119038 == Container::_notification) {
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
    if ((code *)PTR__notification_00119038 != Container::_notification) {
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
  if ((code *)PTR__notification_00119038 == Container::_notification) {
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = BaseButton::set_disabled;
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
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107c2f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107c2f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = BaseButton::set_disabled;
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
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ddf;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107ddf:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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
LAB_00107f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00107f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00107f8e:
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
LAB_00108013:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108013;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010807e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010807e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetScenesCollectionSourceEditor::_get_class_namev() const */

undefined8 * TileSetScenesCollectionSourceEditor::_get_class_namev(void)

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
LAB_00108113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "TileSetScenesCollectionSourceEditor");
      goto LAB_0010817e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "TileSetScenesCollectionSourceEditor");
LAB_0010817e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_class_namev() const */

undefined8 * TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_class_namev(void)

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
LAB_00108203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneTileProxyObject");
      goto LAB_0010826e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneTileProxyObject");
LAB_0010826e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_class_namev() const
    */

undefined8 *
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_class_namev(void)

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
LAB_00108303:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108303;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "TileSetScenesCollectionProxyObject");
      goto LAB_0010836e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "TileSetScenesCollectionProxyObject");
LAB_0010836e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_001083f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001083f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010845e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010845e:
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



/* Callable create_custom_callable_function_pointer<Object>(Object*, char const*, void
   (Object::*)()) */

Object * create_custom_callable_function_pointer<Object>
                   (Object *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001138c8;
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



/* Callable create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor, String
   const&>(TileSetScenesCollectionSourceEditor*, char const*, void
   (TileSetScenesCollectionSourceEditor::*)(String const&)) */

TileSetScenesCollectionSourceEditor *
create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor,String_const&>
          (TileSetScenesCollectionSourceEditor *param_1,char *param_2,_func_void_String_ptr *param_3
          )

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00113958;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>(TileSetScenesCollectionSourceEditor*,
   char const*, void (TileSetScenesCollectionSourceEditor::*)()) */

TileSetScenesCollectionSourceEditor *
create_custom_callable_function_pointer<TileSetScenesCollectionSourceEditor>
          (TileSetScenesCollectionSourceEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001139e8;
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



/* Callable Callable::bind<ItemList*>(ItemList*) const */

ItemList * Callable::bind<ItemList*>(ItemList *param_1)

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



/* WARNING: Removing unreachable block (ram,0x00109328) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_b8[0];
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



/* WARNING: Removing unreachable block (ram,0x00109620) */
/* String vformat<String, String, int>(String const&, String const, String const, int const) */

undefined8 *
vformat<String,String,int>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f0 [8];
  undefined8 local_e8 [8];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f0);
  iVar3 = (int)local_f0;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_e8,param_2);
  *param_1 = local_e8[0];
  local_e8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  pVVar2 = local_48;
  Array::~Array(local_f0);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
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



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::get_class() const */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::get_class(void)

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



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::get_class() const */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* TileSetScenesCollectionSourceEditor::get_class() const */

void TileSetScenesCollectionSourceEditor::get_class(void)

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



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_getv(StringName const&,
   Variant&) const */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_getv
          (TileSetScenesCollectionProxyObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_setv(StringName const&,
   Variant const&) */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_setv
          (TileSetScenesCollectionProxyObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
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
LAB_00109dc7:
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
      goto LAB_00109dc7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::is_class(String const&)
   const */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::is_class
          (TileSetScenesCollectionProxyObject *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00109ecb;
  }
  cVar4 = String::operator==(param_1,"TileSetScenesCollectionProxyObject");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00109ecb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::is_class(String const&) const */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::is_class
          (SceneTileProxyObject *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010a01b;
  }
  cVar4 = String::operator==(param_1,"SceneTileProxyObject");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010a01b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::call
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010a38f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a38f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a440;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a38f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a440:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Object, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Object,void>::call
          (CallableCustomMethodPointer<Object,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010a59f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a59f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a650;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a59f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a650:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::call
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this,
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
      goto LAB_0010a818;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010a818;
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
        uVar3 = _LC63;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010a8c9;
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
LAB_0010a818:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a8c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::call(CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
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
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a995;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010a995;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0010aa1f:
          uVar3 = _LC64;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010aa1f;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC66;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010a995;
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
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010a995:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::call(CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_88[0] = (String)0x0;
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
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010ad04;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010ad04;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0010ad8c:
          uVar3 = _LC64;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010ad8c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC66;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar11 = (bool)(*pcVar10)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar5);
        Variant::Variant((Variant *)local_78,bVar11);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010ad04;
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
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"\', can\'t call method.");
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+(local_88,(String *)local_98);
  _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010ad04:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::call
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC67;
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
        goto LAB_0010b09e;
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
  _err_print_error(&_LC62,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010b09e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010b313;
  }
  cVar4 = String::operator==(param_1,"CanvasItem");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010b313;
    }
    cVar4 = String::operator==(param_1,"Node");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Object::is_class((Object *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b41e;
    }
  }
LAB_0010b313:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b41e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010b513;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010b513;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b61e;
    }
  }
LAB_0010b513:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b61e:
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
    if (cVar4 != '\0') goto LAB_0010b72b;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b72b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010b863;
  }
  cVar4 = String::operator==(param_1,"HSplitContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010b863;
    }
    cVar4 = String::operator==(param_1,"SplitContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010b96e;
    }
  }
LAB_0010b863:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b96e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)&local_60);
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
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
  }
  else {
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
  }
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
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
            if ((code *)PTR__bind_compatibility_methods_00119040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00119048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
            if ((code *)PTR__bind_compatibility_methods_00119040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"SplitContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00119058 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"SplitContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HSplitContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
            if ((code *)PTR__bind_compatibility_methods_00119040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00119048 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
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
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,2,(CowData<char32_t> *)&local_80,0,(String *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68[0];
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010cebf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010cebf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* TileSetScenesCollectionSourceEditor::is_class(String const&) const */

undefined8 __thiscall
TileSetScenesCollectionSourceEditor::is_class
          (TileSetScenesCollectionSourceEditor *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010cff3;
  }
  cVar4 = String::operator==(param_1,"TileSetScenesCollectionSourceEditor");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010cff3;
    }
    cVar4 = String::operator==(param_1,"HBoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_0010d0fe;
    }
  }
LAB_0010cff3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d0fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010d1e3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010d1e3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010d2ee;
    }
  }
LAB_0010d1e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d2ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010d3d3;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010d3d3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_0010d4de;
    }
  }
LAB_0010d3d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d4de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC69;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC69;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_get_property_listv
               (List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = "TileSetScenesCollectionProxyObject";
  local_88 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "TileSetScenesCollectionProxyObject";
  local_90 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"TileSetScenesCollectionProxyObject",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _get_property_list((TileSetScenesCollectionProxyObject *)param_1,(List *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_get_property_listv
               (List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = "SceneTileProxyObject";
  local_88 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "SceneTileProxyObject";
  local_90 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"SceneTileProxyObject",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _get_property_list((List *)this);
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
  if ((code *)PTR__get_property_list_00119060 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00119068 != CanvasItem::_get_property_list) {
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



/* TileSetScenesCollectionSourceEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
TileSetScenesCollectionSourceEditor::_get_property_listv
          (TileSetScenesCollectionSourceEditor *this,List *param_1,bool param_2)

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
  local_78 = "TileSetScenesCollectionSourceEditor";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "TileSetScenesCollectionSourceEditor";
  local_90 = 0;
  local_70 = 0x23;
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
  StringName::StringName((StringName *)&local_78,"TileSetScenesCollectionSourceEditor",false);
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "VBoxContainer";
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "SplitContainer";
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HSplitContainer";
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
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



/* Ref<PackedScene>::unref() */

void __thiscall Ref<PackedScene>::unref(Ref<PackedScene> *this)

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



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_getv(StringName const&, Variant&)
   const */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_getv
          (SceneTileProxyObject *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_setv(StringName const&, Variant
   const&) */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_setv
          (SceneTileProxyObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* MethodBind*
   create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,
   int>(void (TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::*)(int)) */

MethodBind *
create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,int>
          (_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00113c28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TileSetScenesCollectionProxyObject";
  local_30 = 0x22;
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



/* MethodBind*
   create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,
   int>(int (TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::*)()) */

MethodBind *
create_method_bind<TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject,int>
          (_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113c88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TileSetScenesCollectionProxyObject";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<TileSetScenesCollectionSourceEditor, String const&, Ref<Texture2D>
   const&, Ref<Texture2D> const&, Variant const&>(void
   (TileSetScenesCollectionSourceEditor::*)(String const&, Ref<Texture2D> const&, Ref<Texture2D>
   const&, Variant const&)) */

MethodBind *
create_method_bind<TileSetScenesCollectionSourceEditor,String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>
          (_func_void_String_ptr_Ref_ptr_Ref_ptr_Variant_ptr *param_1)

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
  *(_func_void_String_ptr_Ref_ptr_Ref_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113ce8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "TileSetScenesCollectionSourceEditor";
  local_30 = 0x23;
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_initialize_classv() */

void TileSetScenesCollectionSourceEditor::SceneTileProxyObject::_initialize_classv(void)

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
    local_48 = "SceneTileProxyObject";
    local_60 = 0;
    local_40 = 0x14;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
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
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* TileSetScenesCollectionSourceEditor::_initialize_classv() */

void TileSetScenesCollectionSourceEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_00119050 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
              if ((code *)PTR__bind_compatibility_methods_00119040 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
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
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00119048 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"TileSetScenesCollectionSourceEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_initialize_classv() */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_initialize_classv
               (void)

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
    local_48 = "TileSetScenesCollectionProxyObject";
    local_60 = 0;
    local_40 = 0x22;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* void memdelete<Texture2D>(Texture2D*) */

void memdelete<Texture2D>(Texture2D *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
  return;
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Texture2D>(*(Texture2D **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fc40) */
/* TileSetScenesCollectionSourceEditor::_notificationv(int, bool) */

void __thiscall
TileSetScenesCollectionSourceEditor::_notificationv
          (TileSetScenesCollectionSourceEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00119038 != Container::_notification) {
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
  if ((code *)PTR__notification_00119038 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fdf8) */
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



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  long local_50;
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
    StringName::StringName((StringName *)&local_50,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_50 == *plVar4) {
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = 0;
      String::parse_latin1
                ((String *)&local_58,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_50,(String *)&local_58,&local_60);
      _err_print_error(&_LC62,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_50,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_00110120;
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00110120:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == *plVar3) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_001103b4;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001103b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == *plVar3) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00110563;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00110563:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_38 == *(long *)pVVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110880;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0011071c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00110880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == *plVar1) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110a50;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x001108eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00110a50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::
     validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_70;
  Object *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_60 == *(Object **)pVVar6) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_00110c2c;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00110b2f:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00110b2f;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_60 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_60;
  if (pOVar5 != local_60) {
    if (pOVar5 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_00110bc6:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_60 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00110bc6;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,(StringName *)&local_60,&local_68,
            uVar2);
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
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00110c2c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_48;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_00110fa5;
    }
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)((long)param_3 + 0x18);
  if ((*(long **)((long)param_3 + 0x10) == (long *)0x0) ||
     (local_40 = (Object *)**(long **)((long)param_3 + 0x10), local_40 == (Object *)0x0)) {
LAB_00110f43:
    local_40 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00110f43;
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_38 = (Object *)**(long **)((long)param_3 + 8), local_38 == (Object *)0x0)) {
LAB_00110fd0:
    local_38 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00110fd0;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar6)((long *)((long)param_2 + lVar1),*param_3,(StringName *)&local_38,&local_40,uVar2);
  if (local_38 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_38;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_38);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_40 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_40;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_40);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00110fa5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  Object *local_a0;
  Object *local_98;
  long local_90;
  int local_88 [8];
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_90,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_90 == *plVar10) {
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_98,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_90,(String *)&local_98,&local_a0);
      _err_print_error(&_LC62,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_90,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00111502;
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -4 + (int)lVar8;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_68[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 3;
      }
      Variant::Variant((Variant *)local_88,local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2]);
      uVar4 = _LC64;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_a0 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_a0;
      if (pOVar9 != local_a0) {
        if (pOVar9 == (Object *)0x0) {
          if (local_a0 != (Object *)0x0) {
            local_a0 = (Object *)0x0;
LAB_00111380:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_a0 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_a0 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00111380;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1]);
      uVar4 = _LC130;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_98 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_98;
      if (pOVar9 != local_98) {
        if (pOVar9 == (Object *)0x0) {
          if (local_98 != (Object *)0x0) {
            local_98 = (Object *)0x0;
LAB_0011141a:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_98 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_98 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0011141a;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC67;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_90);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_90,&local_98,
                         &local_a0,(Variant *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (local_98 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_98;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_98);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_a0 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_a0;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_a0);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00111502;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_00111502:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
    goto LAB_0011191d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00111980;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00111980:
      uVar6 = 4;
LAB_0011191d:
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
      goto LAB_0011189b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011189b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC63;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001118f6. Too many branches */
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
      _err_print_error(&_LC62,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001119e6;
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
LAB_001119e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Texture2D> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Texture2D>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"Texture2D");
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_78,0x18,(CowData<char32_t> *)&local_90,0x11,(String *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78[0];
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&,
   Variant const&>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>
               (int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_78,4,(CowData<char32_t> *)&local_90,0,(String *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78[0];
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_94,param_2);
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_78,0,(CowData<char32_t> *)&local_90,0,
               (CowData<char32_t> *)&local_88,0x20006,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78[0];
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::
_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::set_id(int) */

void TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::_GLOBAL__sub_I_set_id
               (void)

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
  if (TileMap::base_property_helper != '\0') {
    return;
  }
  TileMap::base_property_helper = 1;
  TileMap::base_property_helper._64_8_ = 0;
  TileMap::base_property_helper._56_8_ = 2;
  TileMap::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TileMap::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TileMap::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TileMap::base_property_helper,&__dso_handle,
               uStack_8);
  return;
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



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

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
/* TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::~TileSetScenesCollectionProxyObject()
    */

void __thiscall
TileSetScenesCollectionSourceEditor::TileSetScenesCollectionProxyObject::
~TileSetScenesCollectionProxyObject(TileSetScenesCollectionProxyObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject() */

void __thiscall
TileSetScenesCollectionSourceEditor::SceneTileProxyObject::~SceneTileProxyObject
          (SceneTileProxyObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Ref<Texture2D> const&, Ref<Texture2D> const&, Variant
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Texture2D>const&,Ref<Texture2D>const&,Variant_const&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

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
/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,String_const&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor, bool, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetScenesCollectionSourceEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void, Vector2 const&, Variant
   const&, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetScenesCollectionSourceEditor,void,int> *this)

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


