
/* GridMapEditorPlugin::has_selection() const */

undefined1 __thiscall GridMapEditorPlugin::has_selection(GridMapEditorPlugin *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x660);
  if (lVar1 == 0) {
    _err_print_error("has_selection","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x738,
                     "Parameter \"grid_map_editor\" is null.",0,0);
    return 0;
  }
  if (*(long *)(lVar1 + 0xb00) != 0) {
    return *(undefined1 *)(lVar1 + 0xcbc);
  }
  return 0;
}



/* GridMapEditor::_floor_mouse_exited() */

void GridMapEditor::_floor_mouse_exited(void)

{
  SpinBox::get_line_edit();
  Control::release_focus();
  return;
}



/* GridMapEditorPlugin::get_current_grid_map() const */

undefined8 __thiscall GridMapEditorPlugin::get_current_grid_map(GridMapEditorPlugin *this)

{
  if (*(long *)(this + 0x660) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x660) + 0xb00);
  }
  _err_print_error("get_current_grid_map","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x724,
                   "Parameter \"grid_map_editor\" is null.",0,0);
  return 0;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* List<BaseButton*, DefaultAllocator>::push_back(BaseButton* const&) [clone .isra.0] */

void __thiscall
List<BaseButton*,DefaultAllocator>::push_back
          (List<BaseButton*,DefaultAllocator> *this,BaseButton **param_1)

{
  BaseButton *pBVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
  pBVar1 = *param_1;
  puVar4[1] = 0;
  *puVar4 = pBVar1;
  plVar2 = *(long **)this;
  lVar3 = plVar2[1];
  puVar4[3] = plVar2;
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 8) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)puVar4;
  return;
}



/* Error Object::emit_signal<float>(StringName const&, float) [clone .isra.0] */

void __thiscall Object::emit_signal<float>(Object *this,StringName *param_1,float param_2)

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
  if ((&Variant::needs_deinit)[(int)local_40] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
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



/* List<GridMapEditor::SetItem, DefaultAllocator>::push_back(GridMapEditor::SetItem const&) [clone
   .isra.0] */

void __thiscall
List<GridMapEditor::SetItem,DefaultAllocator>::push_back
          (List<GridMapEditor::SetItem,DefaultAllocator> *this,SetItem *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined8 *)operator_new(0x38,DefaultAllocator::alloc);
  plVar1 = *(long **)this;
  *(undefined1 (*) [16])((long)puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = 0;
  lVar2 = plVar1[1];
  *(undefined4 *)(puVar5 + 1) = 0;
  uVar3 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar5[4] = 0;
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  puVar5[5] = lVar2;
  puVar5[6] = plVar1;
  *(undefined8 *)((long)puVar5 + 0xc) = uVar3;
  *(undefined8 *)((long)puVar5 + 0x14) = uVar4;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x20) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar5;
  return;
}



/* GridMapEditorPlugin::get_selection() const */

void GridMapEditorPlugin::get_selection(void)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar7 = *(long *)(in_RSI + 0x660);
  if (lVar7 == 0) {
    _err_print_error("get_selection","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x733,
                     "Parameter \"grid_map_editor\" is null.",0,0);
    *in_RDI = 0;
    *(undefined4 *)(in_RDI + 1) = 0;
    *(undefined8 *)((long)in_RDI + 0xc) = 0;
    *(undefined4 *)((long)in_RDI + 0x14) = 0;
    return;
  }
  cVar5 = *(char *)(lVar7 + 0xcbc);
  *in_RDI = 0;
  *(undefined4 *)(in_RDI + 1) = 0;
  *(undefined8 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x14) = 0;
  if (cVar5 != '\0') {
    uVar3 = *(undefined8 *)(lVar7 + 0xcb0);
    uVar4 = *(undefined8 *)(lVar7 + 0xca4);
    fVar1 = *(float *)(lVar7 + 0xcb8);
    fVar2 = *(float *)(lVar7 + 0xcac);
    *in_RDI = *(undefined8 *)(lVar7 + 0xca4);
    uVar6 = *(undefined4 *)(lVar7 + 0xcac);
    *(float *)((long)in_RDI + 0x14) = fVar1 - fVar2;
    *(undefined4 *)(in_RDI + 1) = uVar6;
    *(ulong *)((long)in_RDI + 0xc) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                  (float)uVar3 - (float)uVar4);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::_mesh_library_palette_input(Ref<InputEvent> const&) */

void __thiscall GridMapEditor::_mesh_library_palette_input(GridMapEditor *this,Ref *param_1)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  float fVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    pOVar5 = (Object *)
             __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        cVar3 = InputEvent::is_pressed();
        if (cVar3 != '\0') {
          cVar3 = InputEventWithModifiers::is_command_or_control_pressed();
          if (cVar3 != '\0') {
            cVar3 = InputEvent::is_pressed();
            if (cVar3 != '\0') {
              iVar4 = InputEventMouseButton::get_button_index();
              if (iVar4 == 4) {
                fVar6 = (float)EditorZoomWidget::get_zoom();
                EditorZoomWidget::set_zoom((float)((double)fVar6 + __LC15));
                pOVar2 = *(Object **)(this + 0xab0);
                fVar6 = (float)EditorZoomWidget::get_zoom();
                if (_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                    sname == '\0') {
                  iVar4 = __cxa_guard_acquire(&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                               {lambda()#1}::operator()()::sname);
                  if (iVar4 != 0) {
                    _scs_create((char *)&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                         {lambda()#1}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#1}::
                                  operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                         {lambda()#1}::operator()()::sname);
                  }
                }
                Object::emit_signal<float>
                          (pOVar2,(StringName *)
                                  &_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#1}
                                   ::operator()()::sname,fVar6);
              }
            }
            cVar3 = InputEvent::is_pressed();
            if (cVar3 != '\0') {
              iVar4 = InputEventMouseButton::get_button_index();
              if (iVar4 == 5) {
                fVar6 = (float)EditorZoomWidget::get_zoom();
                EditorZoomWidget::set_zoom((float)((double)fVar6 - __LC15));
                pOVar2 = *(Object **)(this + 0xab0);
                fVar6 = (float)EditorZoomWidget::get_zoom();
                if (_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#2}::operator()()::
                    sname == '\0') {
                  iVar4 = __cxa_guard_acquire(&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                               {lambda()#2}::operator()()::sname);
                  if (iVar4 != 0) {
                    _scs_create((char *)&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                         {lambda()#2}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#2}::
                                  operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&_mesh_library_palette_input(Ref<InputEvent>const&)::
                                         {lambda()#2}::operator()()::sname);
                  }
                }
                Object::emit_signal<float>
                          (pOVar2,(StringName *)
                                  &_mesh_library_palette_input(Ref<InputEvent>const&)::{lambda()#2}
                                   ::operator()()::sname,fVar6);
              }
            }
          }
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar5);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar5,false);
              return;
            }
            goto LAB_001007af;
          }
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001007af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::get_selected_palette_item() const */

undefined4 __thiscall GridMapEditorPlugin::get_selected_palette_item(GridMapEditorPlugin *this)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x660);
  if (lVar2 == 0) {
    _err_print_error("get_selected_palette_item","modules/gridmap/editor/grid_map_editor_plugin.cpp"
                     ,0x751,"Parameter \"grid_map_editor\" is null.",0,0);
    uVar4 = 0;
  }
  else {
    if ((-1 < *(int *)(lVar2 + 0xd6c)) && (*(long *)(lVar2 + 0xb00) != 0)) {
      GridMap::get_mesh_library();
      if (local_28 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_28);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_28 + 0x140))(local_28);
            Memory::free_static(local_28,false);
          }
        }
        uVar4 = *(undefined4 *)(*(long *)(this + 0x660) + 0xd6c);
        goto LAB_00100838;
      }
    }
    uVar4 = 0xffffffff;
  }
LAB_00100838:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_sbox_input(Ref<InputEvent> const&) */

void __thiscall GridMapEditor::_sbox_input(GridMapEditor *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  StringName *pSVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pSVar4 = (StringName *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pSVar4 != (StringName *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    StringName::StringName((StringName *)&local_60,"ui_up",false);
    cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_60,0));
    if (cVar3 == '\0') {
      StringName::StringName((StringName *)&local_58,"ui_down",false);
      cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_58,0));
      if (cVar3 == '\0') {
        StringName::StringName((StringName *)&local_50,"ui_page_up",false);
        cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_50,0));
        if (cVar3 == '\0') {
          StringName::StringName((StringName *)&local_48,"ui_page_down",false);
          cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_48,0));
          if ((StringName::configured != '\0') &&
             ((local_48 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
          goto LAB_00100b78;
        }
        else {
          cVar3 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_00100987;
LAB_00100b78:
          if ((local_50 == 0) || (StringName::unref(), StringName::configured != '\0'))
          goto LAB_00100a4e;
        }
      }
      else {
        cVar3 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_00100987;
LAB_00100a4e:
        if (local_58 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      if (cVar3 != '\0') goto LAB_00100987;
    }
    else {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
LAB_00100987:
      plVar1 = *(long **)(this + 0xd80);
      pcVar2 = *(code **)(*plVar1 + 0x308);
      local_48 = (Object *)0x0;
      pOVar5 = (Object *)__dynamic_cast(pSVar4,&Object::typeinfo,&InputEvent::typeinfo,0);
      if ((pOVar5 != (Object *)0x0) &&
         (local_48 = pOVar5, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (Object *)0x0;
      }
      (*pcVar2)(plVar1);
      if (((local_48 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar5 = local_48, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      Control::accept_event();
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pSVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar4,false);
        return;
      }
      goto LAB_00100bd1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100bd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::handles(Object*) const */

ulong __thiscall GridMapEditorPlugin::handles(GridMapEditorPlugin *this,Object *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 7;
  pcVar2 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "GridMap";
  String::parse_latin1((StrRange *)&local_40);
  uVar4 = (*pcVar2)(param_1);
  lVar3 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      uVar4 = uVar4 & 0xff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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



/* GridMapEditor::_update_selection_transform() */

void __thiscall GridMapEditor::_update_selection_transform(GridMapEditor *this)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  undefined1 auVar7 [12];
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  Vector3 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined8 local_e4;
  float local_dc;
  Vector3 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined1 local_a8 [4] [12];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10c = 0;
  local_114 = 0;
  local_118 = 0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  if (this[0xcbc] == (GridMapEditor)0x0) {
    plVar2 = (long *)RenderingServer::get_singleton();
    iVar5 = 0;
    (**(code **)(*plVar2 + 0xd40))(plVar2,*(undefined8 *)(this + 0xbd8),local_138);
    do {
      plVar2 = (long *)RenderingServer::get_singleton();
      lVar3 = (long)iVar5;
      iVar5 = iVar5 + 1;
      (**(code **)(*plVar2 + 0xd40))(plVar2,*(undefined8 *)(this + lVar3 * 8 + 0xbf8),local_138);
    } while (iVar5 != 3);
  }
  else {
    local_e8 = 0x3f800000;
    local_108 = (Vector3  [16])ZEXT416((uint)_LC36);
    local_f8 = ZEXT416((uint)_LC36);
    local_e4 = 0;
    local_dc = 0.0;
    local_a8[0] = GridMap::get_cell_size();
    local_78._8_4_ =
         ((*(float *)(this + 0xcb8) - *(float *)(this + 0xcac)) + _LC36) * SUB124(local_a8[0],8);
    local_78._0_8_ =
         CONCAT44((((float)((ulong)*(undefined8 *)(this + 0xcb0) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(this + 0xca4) >> 0x20)) + _LC37._4_4_) *
                  SUB124(local_a8[0],4),
                  (((float)*(undefined8 *)(this + 0xcb0) - (float)*(undefined8 *)(this + 0xca4)) +
                  (float)_LC37) * SUB124(local_a8[0],0));
    Transform3D::scale(local_108);
    local_78._0_12_ = GridMap::get_cell_size();
    local_dc = SUB124(local_78._0_12_,8) * *(float *)(this + 0xcac);
    local_e4 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xca4) >> 0x20) *
                        SUB124(local_78._0_12_,4),
                        (float)*(undefined8 *)(this + 0xca4) * SUB124(local_78._0_12_,0));
    plVar2 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0xd40);
    Node3D::get_global_transform();
    Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
    uVar4 = 0;
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0xbd8),(Transform3D *)local_78);
    do {
      if (*(uint *)(this + 0xb70) == uVar4) {
        fVar6 = (float)*(int *)(this + (ulong)uVar4 * 4 + 0xb74);
        if ((fVar6 < *(float *)(this + (ulong)uVar4 * 4 + 0xca4)) ||
           (_LC36 + *(float *)(this + (ulong)uVar4 * 4 + 0xcb0) < fVar6)) goto LAB_00101030;
        local_148 = *(undefined8 *)(this + 0xca4);
        lVar3 = (long)(int)uVar4;
        local_150 = (*(float *)(this + 0xcb8) - *(float *)(this + 0xcac)) + _LC36;
        local_140 = *(float *)(this + 0xcac);
        local_158._0_4_ =
             ((float)*(undefined8 *)(this + 0xcb0) - (float)*(undefined8 *)(this + 0xca4)) +
             (float)_LC37;
        local_158._4_4_ =
             ((float)((ulong)*(undefined8 *)(this + 0xcb0) >> 0x20) -
             (float)((ulong)*(undefined8 *)(this + 0xca4) >> 0x20)) + _LC37._4_4_;
        *(float *)((long)&local_148 + lVar3 * 4) = fVar6;
        *(undefined4 *)((long)&local_158 + lVar3 * 4) = 0x3f800000;
        auVar7 = GridMap::get_cell_size();
        local_158 = CONCAT44(local_158._4_4_ * auVar7._4_4_,(float)local_158 * auVar7._0_4_);
        local_150 = local_150 * auVar7._8_4_;
        local_78._0_12_ = auVar7;
        auVar7 = GridMap::get_cell_size();
        local_d8 = (Vector3  [16])ZEXT416((uint)_LC36);
        local_148 = CONCAT44((float)((ulong)local_148 >> 0x20) * auVar7._4_4_,
                             (float)local_148 * auVar7._0_4_);
        local_140 = local_140 * auVar7._8_4_;
        local_b8 = 0x3f800000;
        local_b4 = 0;
        local_ac = 0.0;
        local_c8 = (undefined1  [16])local_d8;
        local_78._0_12_ = auVar7;
        Basis::scale(local_d8);
        local_b4 = local_148;
        local_ac = local_140;
        plVar2 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar2 + 0xd40);
        Node3D::get_global_transform();
        Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
        (*pcVar1)(plVar2,*(undefined8 *)(this + lVar3 * 8 + 0xbf8),(Transform3D *)local_78);
      }
      else {
LAB_00101030:
        plVar2 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar2 + 0xd40))
                  (plVar2,*(undefined8 *)(this + (long)(int)uVar4 * 8 + 0xbf8),local_138);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GridMapEditor::_set_selection(bool, Vector3 const&, Vector3 const&) */

void __thiscall
GridMapEditor::_set_selection(GridMapEditor *this,bool param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)param_2;
  this[0xcbc] = (GridMapEditor)param_1;
  *(undefined8 *)(this + 0xca4) = uVar1;
  *(undefined4 *)(this + 0xcac) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xcb0) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0xcb8) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0xc8c) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0xc94) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc98) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0xca0) = *(undefined4 *)(param_3 + 8);
  cVar2 = CanvasItem::is_visible_in_tree();
  if (cVar2 == '\0') {
    return;
  }
  _update_selection_transform(this);
  return;
}



/* GridMapEditor::_validate_selection() [clone .part.0] */

void __thiscall GridMapEditor::_validate_selection(GridMapEditor *this)

{
  float fVar1;
  
  *(undefined8 *)(this + 0xca4) = *(undefined8 *)(this + 0xc8c);
  fVar1 = *(float *)(this + 0xca4);
  *(undefined4 *)(this + 0xcac) = *(undefined4 *)(this + 0xc94);
  *(undefined8 *)(this + 0xcb0) = *(undefined8 *)(this + 0xc98);
  *(undefined4 *)(this + 0xcb8) = *(undefined4 *)(this + 0xca0);
  if (*(float *)(this + 0xcb0) < fVar1) {
    *(float *)(this + 0xca4) = *(float *)(this + 0xcb0);
    *(float *)(this + 0xcb0) = fVar1;
  }
  fVar1 = *(float *)(this + 0xca8);
  if (*(float *)(this + 0xcb4) < fVar1) {
    *(float *)(this + 0xca8) = *(float *)(this + 0xcb4);
    *(float *)(this + 0xcb4) = fVar1;
  }
  fVar1 = *(float *)(this + 0xcac);
  if (*(float *)(this + 0xcb8) < fVar1) {
    *(float *)(this + 0xcac) = *(float *)(this + 0xcb8);
    *(float *)(this + 0xcb8) = fVar1;
  }
  _update_selection_transform(this);
  return;
}



/* GridMapEditorPlugin::clear_selection() */

void __thiscall GridMapEditorPlugin::clear_selection(GridMapEditorPlugin *this)

{
  GridMapEditor *this_00;
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  
  this_00 = *(GridMapEditor **)(this + 0x660);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this_00 == (GridMapEditor *)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("clear_selection","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x72e,
                       "Parameter \"grid_map_editor\" is null.",0,0);
      return;
    }
  }
  else {
    this_00[0xcbc] = (GridMapEditor)0x0;
    *(undefined8 *)(this_00 + 0xca4) = 0;
    *(undefined4 *)(this_00 + 0xcac) = 0;
    *(undefined8 *)(this_00 + 0xcb0) = 0;
    *(undefined4 *)(this_00 + 0xcb8) = 0;
    *(undefined8 *)(this_00 + 0xc8c) = 0;
    *(undefined4 *)(this_00 + 0xc94) = 0;
    *(undefined8 *)(this_00 + 0xc98) = 0;
    *(undefined4 *)(this_00 + 0xca0) = 0;
    cVar2 = CanvasItem::is_visible_in_tree();
    if (cVar2 == '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      GridMapEditor::_update_selection_transform(this_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::set_selection(Vector3i const&, Vector3i const&) */

void __thiscall
GridMapEditorPlugin::set_selection(GridMapEditorPlugin *this,Vector3i *param_1,Vector3i *param_2)

{
  GridMapEditor *this_00;
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  
  this_00 = *(GridMapEditor **)(this + 0x660);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this_00 == (GridMapEditor *)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_selection","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x729,
                       "Parameter \"grid_map_editor\" is null.",0,0);
      return;
    }
  }
  else {
    auVar3 = Vector3i::operator_cast_to_Vector3(param_2);
    auVar4 = Vector3i::operator_cast_to_Vector3(param_1);
    this_00[0xcbc] = (GridMapEditor)0x1;
    *(undefined1 (*) [12])(this_00 + 0xcb0) = auVar3;
    *(undefined1 (*) [12])(this_00 + 0xc98) = auVar3;
    *(undefined1 (*) [12])(this_00 + 0xca4) = auVar4;
    *(undefined1 (*) [12])(this_00 + 0xc8c) = auVar4;
    cVar2 = CanvasItem::is_visible_in_tree();
    if (cVar2 == '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      GridMapEditor::_update_selection_transform(this_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_validate_selection() */

void __thiscall GridMapEditor::_validate_selection(GridMapEditor *this)

{
  float fVar1;
  
  if (this[0xcbc] != (GridMapEditor)0x0) {
    *(undefined8 *)(this + 0xca4) = *(undefined8 *)(this + 0xc8c);
    fVar1 = *(float *)(this + 0xca4);
    *(undefined4 *)(this + 0xcac) = *(undefined4 *)(this + 0xc94);
    *(undefined8 *)(this + 0xcb0) = *(undefined8 *)(this + 0xc98);
    *(undefined4 *)(this + 0xcb8) = *(undefined4 *)(this + 0xca0);
    if (*(float *)(this + 0xcb0) < fVar1) {
      *(float *)(this + 0xca4) = *(float *)(this + 0xcb0);
      *(float *)(this + 0xcb0) = fVar1;
    }
    fVar1 = *(float *)(this + 0xca8);
    if (*(float *)(this + 0xcb4) < fVar1) {
      *(float *)(this + 0xca8) = *(float *)(this + 0xcb4);
      *(float *)(this + 0xcb4) = fVar1;
    }
    fVar1 = *(float *)(this + 0xcac);
    if (*(float *)(this + 0xcb8) < fVar1) {
      *(float *)(this + 0xcac) = *(float *)(this + 0xcb8);
      *(float *)(this + 0xcb8) = fVar1;
    }
    _update_selection_transform(this);
    return;
  }
  return;
}



/* GridMapEditor::_get_selection() const */

void GridMapEditor::_get_selection(void)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long in_RSI;
  undefined8 *in_RDI;
  
  cVar5 = *(char *)(in_RSI + 0xcbc);
  *in_RDI = 0;
  *(undefined4 *)(in_RDI + 1) = 0;
  *(undefined8 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x14) = 0;
  if (cVar5 != '\0') {
    fVar1 = *(float *)(in_RSI + 0xcb8);
    uVar3 = *(undefined8 *)(in_RSI + 0xcb0);
    fVar2 = *(float *)(in_RSI + 0xcac);
    uVar4 = *(undefined8 *)(in_RSI + 0xca4);
    *in_RDI = *(undefined8 *)(in_RSI + 0xca4);
    uVar6 = *(undefined4 *)(in_RSI + 0xcac);
    *(float *)((long)in_RDI + 0x14) = fVar1 - fVar2;
    *(undefined4 *)(in_RDI + 1) = uVar6;
    *(ulong *)((long)in_RDI + 0xc) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                  (float)uVar3 - (float)uVar4);
  }
  return;
}



/* GridMapEditor::_has_selection() const */

GridMapEditor __thiscall GridMapEditor::_has_selection(GridMapEditor *this)

{
  GridMapEditor GVar1;
  
  GVar1 = (GridMapEditor)0x0;
  if (*(long *)(this + 0xb00) != 0) {
    GVar1 = this[0xcbc];
  }
  return GVar1;
}



/* GridMapEditor::_get_selected_cells() const */

Array * GridMapEditor::_get_selected_cells(void)

{
  int iVar1;
  long in_RSI;
  Array *in_RDI;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  if ((*(long *)(in_RSI + 0xb00) != 0) && (*(char *)(in_RSI + 0xcbc) != '\0')) {
    iVar3 = (int)*(float *)(in_RSI + 0xca4);
    fVar5 = *(float *)(in_RSI + 0xcb0);
    if ((float)iVar3 <= fVar5) {
      fVar6 = *(float *)(in_RSI + 0xcb4);
      do {
        iVar2 = (int)*(float *)(in_RSI + 0xca8);
        if ((float)iVar2 <= fVar6) {
          fVar5 = *(float *)(in_RSI + 0xcb8);
          do {
            iVar4 = (int)*(float *)(in_RSI + 0xcac);
            if ((float)iVar4 <= fVar5) {
              do {
                local_64 = iVar3;
                local_60 = iVar2;
                local_5c = iVar4;
                iVar1 = GridMap::get_cell_item(*(Vector3i **)(in_RSI + 0xb00));
                if (iVar1 != -1) {
                  Variant::Variant((Variant *)local_58,(Vector3i *)&local_64);
                  Array::push_back((Variant *)in_RDI);
                  if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                iVar4 = iVar4 + 1;
                fVar5 = *(float *)(in_RSI + 0xcb8);
              } while ((float)iVar4 <= fVar5);
              fVar6 = *(float *)(in_RSI + 0xcb4);
            }
            iVar2 = iVar2 + 1;
          } while ((float)iVar2 <= fVar6);
          fVar5 = *(float *)(in_RSI + 0xcb0);
        }
        iVar3 = iVar3 + 1;
      } while ((float)iVar3 <= fVar5);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::get_selected_cells() const */

void GridMapEditorPlugin::get_selected_cells(void)

{
  long lVar1;
  long in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x660) == 0) {
    _err_print_error("get_selected_cells","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x73d,
                     "Parameter \"grid_map_editor\" is null.",0,0);
    Array::Array(in_RDI);
  }
  else {
    GridMapEditor::_get_selected_cells();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_clear_clipboard_data() */

void __thiscall GridMapEditor::_clear_clipboard_data(GridMapEditor *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(this + 0xc20);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      do {
        plVar3 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar3 + 0x11b0))(plVar3);
        lVar4 = *(long *)(lVar4 + 0x20);
      } while (lVar4 != 0);
      plVar3 = *(long **)(this + 0xc20);
    }
    if (plVar3 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar3;
        if (pvVar1 == (void *)0x0) {
          return;
        }
        if (*(long **)((long)pvVar1 + 0x30) == plVar3) {
          lVar4 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar3 = lVar4;
          if (pvVar1 == (void *)plVar3[1]) {
            plVar3[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar4;
            lVar4 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x28) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar3 = *(long **)(this + 0xc20);
      } while ((int)plVar3[2] != 0);
      Memory::free_static(plVar3,false);
      *(undefined8 *)(this + 0xc20) = 0;
    }
  }
  return;
}



/* GridMapEditor::_set_clipboard_data() */

void __thiscall GridMapEditor::_set_clipboard_data(GridMapEditor *this)

{
  code *pcVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  int local_9c;
  Object *local_90;
  Object *local_88;
  Object *local_80;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _clear_clipboard_data(this);
  GridMap::get_mesh_library();
  local_9c = (int)*(float *)(this + 0xca4);
  fVar14 = *(float *)(this + 0xcb0);
  if ((float)local_9c <= fVar14) {
    fVar15 = *(float *)(this + 0xcb4);
    do {
      iVar13 = (int)*(float *)(this + 0xca8);
      if ((float)iVar13 <= fVar15) {
        fVar14 = *(float *)(this + 0xcb8);
        do {
          iVar12 = (int)*(float *)(this + 0xcac);
          if ((float)iVar12 <= fVar14) {
            do {
              local_74 = local_9c;
              local_70 = iVar13;
              local_6c = iVar12;
              iVar5 = GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
              if (iVar5 != -1) {
                MeshLibrary::get_item_mesh((int)&local_88);
                auVar17 = Vector3i::operator_cast_to_Vector3((Vector3i *)&local_74);
                fStack_60 = auVar17._8_4_;
                local_68 = auVar17._0_4_;
                fStack_64 = auVar17._4_4_;
                fVar14 = fStack_60 - *(float *)(this + 0xcac);
                fVar15 = local_68 - (float)*(undefined8 *)(this + 0xca4);
                fVar16 = fStack_64 - (float)((ulong)*(undefined8 *)(this + 0xca4) >> 0x20);
                uVar6 = GridMap::get_cell_item_orientation(*(Vector3i **)(this + 0xb00));
                plVar7 = (long *)RenderingServer::get_singleton();
                pcVar1 = *(code **)(*plVar7 + 0xd10);
                if (*(long *)(this + 0x240) == 0) {
                  _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                                   "Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                Viewport::get_world_3d();
                uVar8 = World3D::get_scenario();
                uVar9 = (**(code **)(*(long *)local_88 + 0x1c0))();
                uStack_50 = (*pcVar1)(plVar7,uVar9,uVar8);
                if (((local_80 == (Object *)0x0) ||
                    (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 == '\0')) ||
                   (cVar4 = predelete_handler(local_80), cVar4 == '\0')) {
                  lVar2 = *(long *)(this + 0xc20);
                }
                else {
                  (**(code **)(*(long *)pOVar3 + 0x140))();
                  Memory::free_static(pOVar3,false);
                  lVar2 = *(long *)(this + 0xc20);
                }
                if (lVar2 == 0) {
                  pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *(undefined1 (**) [16])(this + 0xc20) = pauVar11;
                  *(undefined4 *)pauVar11[1] = 0;
                  *pauVar11 = (undefined1  [16])0x0;
                }
                puVar10 = (undefined8 *)operator_new(0x38,DefaultAllocator::alloc);
                plVar7 = *(long **)(this + 0xc20);
                lVar2 = plVar7[1];
                puVar10[4] = 0;
                *puVar10 = CONCAT44(fVar15,iVar5);
                puVar10[1] = CONCAT44(fVar14,fVar16);
                puVar10[2] = CONCAT44(uStack_54,uVar6);
                puVar10[3] = uStack_50;
                puVar10[5] = lVar2;
                puVar10[6] = plVar7;
                if (lVar2 != 0) {
                  *(undefined8 **)(lVar2 + 0x20) = puVar10;
                }
                plVar7[1] = (long)puVar10;
                if (*plVar7 == 0) {
                  *plVar7 = (long)puVar10;
                }
                *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
                local_68 = (float)iVar5;
                fStack_64 = fVar15;
                fStack_60 = fVar16;
                fStack_5c = fVar14;
                local_58 = uVar6;
                if (((local_88 != (Object *)0x0) &&
                    (cVar4 = RefCounted::unreference(), pOVar3 = local_88, cVar4 != '\0')) &&
                   (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
              iVar12 = iVar12 + 1;
              fVar14 = *(float *)(this + 0xcb8);
            } while ((float)iVar12 <= fVar14);
            fVar15 = *(float *)(this + 0xcb4);
          }
          iVar13 = iVar13 + 1;
        } while ((float)iVar13 <= fVar15);
        fVar14 = *(float *)(this + 0xcb0);
      }
      local_9c = local_9c + 1;
    } while ((float)local_9c <= fVar14);
  }
  if (((local_90 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_90), cVar4 != '\0')) {
    (**(code **)(*(long *)local_90 + 0x140))(local_90);
    Memory::free_static(local_90,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::_update_paste_indicator() */

void __thiscall GridMapEditor::_update_paste_indicator(GridMapEditor *this)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long *plVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [4] [12];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xa10) == 6) {
    bVar10 = GridMap::get_center_z();
    bVar11 = GridMap::get_center_y();
    bVar12 = GridMap::get_center_x();
    fVar15 = (float)bVar12 * _LC50;
    fVar20 = (float)bVar11 * _UNK_00124d94;
    fVar29 = (float)bVar10 * _LC50;
    auVar30 = GridMap::get_cell_size();
    _local_d8 = ZEXT416((uint)_LC36);
    local_78._8_4_ = auVar30._8_4_;
    fVar22 = (*(float *)(this + 0xd20) - *(float *)(this + 0xd14)) + _LC36;
    local_78._0_8_ = auVar30._0_8_;
    local_c8 = _LC36;
    fStack_c4 = 0.0;
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    local_b8 = 1.0;
    fStack_b4 = 0.0;
    fStack_b0 = 0.0;
    fStack_ac = 0.0;
    auVar26._0_4_ =
         (((float)*(undefined8 *)(this + 0xd18) - (float)*(undefined8 *)(this + 0xd0c)) +
         (float)_LC37) * auVar30._0_4_;
    auVar26._4_4_ =
         (((float)((ulong)*(undefined8 *)(this + 0xd18) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 0xd0c) >> 0x20)) + _LC37._4_4_) * auVar30._4_4_;
    Transform3D::scale((Vector3 *)local_d8);
    auVar31 = GridMap::get_cell_size();
    local_78._8_4_ = auVar31._8_4_;
    local_78._0_8_ = auVar31._0_8_;
    fStack_ac = ((*(float *)(this + 0xd08) - *(float *)(this + 0xcfc)) + *(float *)(this + 0xd14) +
                fVar29) * auVar31._8_4_;
    fStack_b4 = (((float)*(undefined8 *)(this + 0xd00) - (float)*(undefined8 *)(this + 0xcf4)) +
                 (float)*(undefined8 *)(this + 0xd0c) + fVar15) * auVar31._0_4_;
    fStack_b0 = (((float)((ulong)*(undefined8 *)(this + 0xd00) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this + 0xcf4) >> 0x20)) +
                 (float)((ulong)*(undefined8 *)(this + 0xd0c) >> 0x20) + fVar20) * auVar31._4_4_;
    GridMap::get_basis_with_orthogonal_index((int)&local_138);
    uVar6 = local_d8._0_4_;
    uVar7 = local_d8._4_4_;
    fVar2 = (float)uStack_d0;
    fVar3 = uStack_d0._4_4_;
    fVar25 = fStack_11c * fStack_c4;
    fVar16 = fStack_120 * (float)uStack_d0;
    fVar21 = (float)local_d8._0_4_ * fStack_12c;
    local_d8._4_4_ =
         (float)local_d8._4_4_ * local_138 + local_c8 * fStack_134 + fStack_bc * fStack_130;
    local_d8._0_4_ =
         (float)local_d8._0_4_ * local_138 + uStack_d0._4_4_ * fStack_134 + fStack_c0 * fStack_130;
    uStack_d0._0_4_ = (float)uStack_d0 * local_138 + fStack_c4 * fStack_134 + local_b8 * fStack_130;
    uStack_d0._4_4_ = fVar21 + uStack_d0._4_4_ * local_128 + fStack_c0 * fStack_124;
    fVar21 = local_c8 * fStack_11c;
    local_c8 = local_c8 * local_128 + (float)uVar7 * fStack_12c + fStack_bc * fStack_124;
    fStack_c4 = fStack_c4 * local_128 + fVar2 * fStack_12c + local_b8 * fStack_124;
    fStack_c0 = fVar3 * fStack_11c + (float)uVar6 * fStack_120 + fStack_c0 * local_118;
    fStack_bc = fVar21 + (float)uVar7 * fStack_120 + fStack_bc * local_118;
    local_b8 = fVar16 + fVar25 + local_b8 * local_118;
    local_a8[0] = GridMap::get_cell_size();
    auVar26._12_4_ = _LC37._4_4_;
    auVar26._8_4_ = (float)_LC37;
    auVar19._0_4_ = (float)((uint)_LC52 ^ (uint)fVar15) * SUB124(local_a8[0],0);
    auVar19._4_4_ = (float)(_LC52._4_4_ ^ (uint)fVar20) * SUB124(local_a8[0],4);
    auVar19._8_4_ = (float)extraout_XMM0_Qb * 0.0;
    auVar19._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0;
    local_78._8_4_ =
         ((float)((uint)fVar29 ^ _LC51) * SUB124(local_a8[0],8)) / (fVar22 * auVar30._8_4_);
    auVar19 = divps(auVar19,auVar26);
    local_78._0_8_ = auVar19._0_8_;
    Transform3D::translate_local((Vector3 *)local_d8);
    plVar13 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar13 + 0xd40);
    Node3D::get_global_transform();
    Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
    (*pcVar1)(plVar13,*(undefined8 *)(this + 0xc18),(Transform3D *)local_78);
    if ((*(long **)(this + 0xc20) != (long *)0x0) &&
       (lVar14 = **(long **)(this + 0xc20), lVar14 != 0)) {
      do {
        local_78 = ZEXT416((uint)_LC36);
        local_d8._4_4_ = _UNK_00124e54;
        local_d8._0_4_ = _LC36;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = 0x3f800000;
        uStack_d0 = _UNK_00124e58;
        local_c8 = _LC36;
        fStack_c4 = _UNK_00124e54;
        fStack_c0 = (float)_UNK_00124e58;
        fStack_bc = (float)((ulong)_UNK_00124e58 >> 0x20);
        local_b8 = 1.0;
        fStack_b4 = 0.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        local_68 = local_78;
        auVar30 = GridMap::get_cell_size();
        uVar6 = local_d8._0_4_;
        uVar7 = local_d8._4_4_;
        fVar2 = (float)uStack_d0;
        fVar3 = uStack_d0._4_4_;
        local_78._8_4_ = auVar30._8_4_;
        local_78._0_8_ = auVar30._0_8_;
        fVar22 = fStack_120 * (float)uStack_d0;
        fStack_ac = ((*(float *)(this + 0xd08) - *(float *)(this + 0xcfc)) +
                     *(float *)(this + 0xd14) + fVar29) * auVar30._8_4_;
        fVar16 = fStack_11c * fStack_c4;
        fStack_b4 = (((float)*(undefined8 *)(this + 0xd00) - (float)*(undefined8 *)(this + 0xcf4)) +
                     (float)*(undefined8 *)(this + 0xd0c) + fVar15) * auVar30._0_4_;
        fStack_b0 = (((float)((ulong)*(undefined8 *)(this + 0xd00) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(this + 0xcf4) >> 0x20)) +
                     (float)((ulong)*(undefined8 *)(this + 0xd0c) >> 0x20) + fVar20) * auVar30._4_4_
        ;
        fVar21 = (float)local_d8._0_4_ * fStack_12c;
        local_d8._4_4_ =
             (float)local_d8._4_4_ * local_138 + local_c8 * fStack_134 + fStack_bc * fStack_130;
        local_d8._0_4_ =
             (float)local_d8._0_4_ * local_138 + uStack_d0._4_4_ * fStack_134 +
             fStack_c0 * fStack_130;
        uStack_d0._0_4_ =
             (float)uStack_d0 * local_138 + fStack_c4 * fStack_134 + local_b8 * fStack_130;
        uStack_d0._4_4_ = fVar21 + uStack_d0._4_4_ * local_128 + fStack_c0 * fStack_124;
        fVar21 = local_c8 * fStack_11c;
        local_c8 = local_c8 * local_128 + fStack_12c * (float)uVar7 + fStack_bc * fStack_124;
        fStack_c4 = fStack_c4 * local_128 + fStack_12c * fVar2 + local_b8 * fStack_124;
        fStack_c0 = fVar3 * fStack_11c + fStack_120 * (float)uVar6 + fStack_c0 * local_118;
        fStack_bc = fVar21 + fStack_120 * (float)uVar7 + fStack_bc * local_118;
        local_b8 = fVar22 + fVar16 + local_118 * local_b8;
        auVar30 = GridMap::get_cell_size();
        auVar19 = local_78;
        local_78._4_4_ = auVar30._4_4_ * (float)((ulong)*(undefined8 *)(lVar14 + 4) >> 0x20);
        local_78._0_4_ = auVar30._0_4_ * (float)*(undefined8 *)(lVar14 + 4);
        uVar9 = local_78._0_8_;
        local_78._12_4_ = auVar19._12_4_;
        local_78._0_8_ = auVar19._0_8_;
        local_78._8_4_ = *(float *)(lVar14 + 0xc) * auVar30._8_4_;
        local_78 = CONCAT88(local_78._8_8_,uVar9);
        local_a8[0] = auVar30;
        Transform3D::translate_local((Vector3 *)local_d8);
        GridMap::get_basis_with_orthogonal_index((int)&local_108);
        fVar5 = local_e8;
        fVar28 = fStack_ec;
        fVar4 = fStack_f0;
        fVar25 = fStack_f4;
        fVar22 = local_f8;
        fVar21 = fStack_fc;
        fVar16 = fStack_100;
        fVar3 = fStack_104;
        fVar2 = local_108;
        fVar17 = (float)GridMap::get_cell_scale();
        uVar6 = local_d8._0_4_;
        uVar7 = local_d8._4_4_;
        fVar8 = (float)uStack_d0;
        fVar18 = fVar4 * (float)uStack_d0;
        fVar23 = fVar28 * fStack_c4;
        fVar24 = (float)local_d8._0_4_ * fVar21;
        fVar27 = uStack_d0._4_4_ * fVar28;
        fVar28 = local_c8 * fVar28;
        local_d8._4_4_ =
             ((float)local_d8._4_4_ * fVar2 + local_c8 * fVar3 + fStack_bc * fVar16) * fVar17;
        local_d8._0_4_ =
             ((float)local_d8._0_4_ * fVar2 + uStack_d0._4_4_ * fVar3 + fStack_c0 * fVar16) * fVar17
        ;
        uStack_d0._0_4_ =
             ((float)uStack_d0 * fVar2 + fStack_c4 * fVar3 + local_b8 * fVar16) * fVar17;
        uStack_d0._4_4_ = (fVar24 + uStack_d0._4_4_ * fVar22 + fStack_c0 * fVar25) * fVar17;
        local_c8 = ((float)uVar7 * fVar21 + local_c8 * fVar22 + fStack_bc * fVar25) * fVar17;
        fStack_c4 = (fVar8 * fVar21 + fStack_c4 * fVar22 + local_b8 * fVar25) * fVar17;
        fStack_c0 = ((float)uVar6 * fVar4 + fVar27 + fStack_c0 * fVar5) * fVar17;
        fStack_bc = ((float)uVar7 * fVar4 + fVar28 + fStack_bc * fVar5) * fVar17;
        local_b8 = (fVar18 + fVar23 + fVar5 * local_b8) * fVar17;
        plVar13 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar13 + 0xd40);
        Node3D::get_global_transform();
        Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
        (*pcVar1)(plVar13,*(undefined8 *)(lVar14 + 0x18),(Transform3D *)local_78);
        lVar14 = *(long *)(lVar14 + 0x20);
      } while (lVar14 != 0);
    }
  }
  else {
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_58 = 0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    plVar13 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar13 + 0xd40))(plVar13,*(undefined8 *)(this + 0xc18),local_78);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GridMapEditor::_show_viewports_transform_gizmo(bool) */

void __thiscall GridMapEditor::_show_viewports_transform_gizmo(GridMapEditor *this,bool param_1)

{
  Variant *pVVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  Dictionary local_70 [8];
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_70);
  Variant::Variant((Variant *)local_48,param_1);
  Variant::Variant((Variant *)local_68,"transform_gizmo");
  pVVar1 = (Variant *)Dictionary::operator[]((Variant *)local_70);
  if (pVVar1 != (Variant *)local_48) {
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar1 = 0;
    *(int *)pVVar1 = local_48[0];
    local_48[0] = 0;
    *(undefined8 *)(pVVar1 + 8) = local_40;
    *(undefined8 *)(pVVar1 + 0x10) = uStack_38;
  }
  if ((&Variant::needs_deinit)[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar3 = 0;
  do {
    lVar2 = (long)iVar3;
    iVar3 = iVar3 + 1;
    Node3DEditorViewport::set_state(*(Dictionary **)(Node3DEditor::singleton + 0xa20 + lVar2 * 8));
  } while (iVar3 != 4);
  Dictionary::~Dictionary(local_70);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::update_grid() */

void __thiscall GridMapEditor::update_grid(GridMapEditor *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 local_2c [12];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xb74);
  *(float *)(this + 0xb34) = *(float *)(this + 0xb34) - _LC36;
  local_2c = GridMap::get_cell_size();
  lVar2 = *(long *)(this + 0xbc8);
  *(float *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xb80) =
       (float)iVar3 * *(float *)(local_2c + (long)*(int *)(this + 0xb70) * 4);
  if (lVar2 == 0) {
    local_2c._0_8_ = 0;
    local_2c._8_4_ = 0;
  }
  else {
    local_2c._0_8_ = *(undefined8 *)(this + 0xb80);
    local_2c._8_4_ = *(undefined4 *)(this + 0xb88);
  }
  auVar5 = ZEXT416((uint)_LC36);
  iVar3 = 0;
  *(undefined4 *)(this + 0xb60) = 0x3f800000;
  *(undefined1 (*) [16])(this + 0xb40) = auVar5;
  *(undefined8 *)(this + 0xb64) = local_2c._0_8_;
  *(undefined1 (*) [16])(this + 0xb50) = auVar5;
  *(undefined4 *)(this + 0xb6c) = local_2c._8_4_;
  do {
    plVar1 = (long *)RenderingServer::get_singleton();
    bVar4 = *(int *)(this + 0xb70) == iVar3;
    lVar2 = (long)iVar3;
    iVar3 = iVar3 + 1;
    (**(code **)(*plVar1 + 0xd70))(plVar1,*(undefined8 *)(this + lVar2 * 8 + 0xba8),bVar4);
  } while (iVar3 != 3);
  this[0xc88] = (GridMapEditor)0x1;
  Range::set_value((double)*(int *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xb74));
  this[0xc88] = (GridMapEditor)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_configure() */

void __thiscall GridMapEditor::_configure(GridMapEditor *this)

{
  if (*(long *)(this + 0xb00) != 0) {
    update_grid(this);
    return;
  }
  return;
}



/* GridMapEditor::_floor_changed(float) */

void __thiscall GridMapEditor::_floor_changed(GridMapEditor *this,float param_1)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  float local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xc88] == (GridMapEditor)0x0) {
    plVar1 = *(long **)(this + 0xb00);
    *(int *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xb74) = (int)param_1;
    pcVar2 = *(code **)(*plVar1 + 0xa8);
    local_50 = (float)*(int *)(this + 0xb7c);
    local_58 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 0xb74) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 0xb74));
    Variant::Variant((Variant *)local_48,(Vector3 *)&local_58);
    StringName::StringName((StringName *)&local_60,"_editor_floor_",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,(Variant *)local_48);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if ((&Variant::needs_deinit)[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    update_grid(this);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_selection_transform(this);
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::GridMapEditorPlugin() */

void __thiscall GridMapEditorPlugin::GridMapEditorPlugin(GridMapEditorPlugin *this)

{
  Node::Node((Node *)this);
  *(code **)this = CallableCustom::CallableCustom;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (GridMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (GridMapEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00124188;
  *(undefined8 *)(this + 0x668) = 0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  return;
}



/* GridMapEditorPlugin::~GridMapEditorPlugin() */

void __thiscall GridMapEditorPlugin::~GridMapEditorPlugin(GridMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124188;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* GridMapEditorPlugin::~GridMapEditorPlugin() */

void __thiscall GridMapEditorPlugin::~GridMapEditorPlugin(GridMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124188;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x670);
  return;
}



/* GridMapEditor::_delete_selection() [clone .part.0] */

void __thiscall GridMapEditor::_delete_selection(GridMapEditor *this)

{
  Variant *pVVar1;
  GridMapEditor GVar2;
  StringName *pSVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  Vector3 *local_2c8;
  Vector3 *local_2c0;
  Vector3 *local_290;
  undefined8 local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  int local_1e8;
  undefined8 local_1e4;
  int local_1dc;
  Variant *local_1d8;
  Variant *pVStack_1d0;
  Variant *local_1c8;
  Variant *local_1b8;
  Variant *pVStack_1b0;
  Variant *local_1a8;
  Variant local_1a0 [24];
  undefined8 local_188;
  undefined1 local_180 [16];
  Variant local_170 [8];
  Variant local_168 [24];
  Variant local_150 [24];
  Variant local_138 [24];
  undefined8 local_120;
  undefined1 local_118 [16];
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant local_f0 [24];
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_208 = "";
  local_210 = 0;
  local_200 = 0;
  String::parse_latin1((StrRange *)&local_210);
  local_208 = "GridMap Delete Selection";
  local_218 = 0;
  local_200 = 0x18;
  String::parse_latin1((StrRange *)&local_218);
  TTR((String *)&local_208,(String *)&local_218);
  EditorUndoRedoManager::create_action(pOVar6,(String *)&local_208,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  iVar9 = (int)*(float *)(this + 0xca4);
  fVar11 = *(float *)(this + 0xcb0);
  if ((float)iVar9 <= fVar11) {
    fVar12 = *(float *)(this + 0xcb4);
    do {
      iVar8 = (int)*(float *)(this + 0xca8);
      if ((float)iVar8 <= fVar12) {
        fVar11 = *(float *)(this + 0xcb8);
        do {
          iVar7 = (int)*(float *)(this + 0xcac);
          if ((float)iVar7 <= fVar11) {
            do {
              local_1f0 = CONCAT44(iVar8,iVar9);
              local_1e8 = iVar7;
              StringName::StringName((StringName *)&local_208,"set_cell_item",false);
              pSVar3 = *(StringName **)(this + 0xb00);
              local_1e4 = local_1f0;
              local_1dc = local_1e8;
              Variant::Variant((Variant *)&local_1b8,(Vector3i *)&local_1e4);
              Variant::Variant(local_1a0,-1);
              local_188 = 0;
              local_180 = (undefined1  [16])0x0;
              local_1d8 = (Variant *)&local_1b8;
              pVStack_1d0 = local_1a0;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar6,pSVar3,(Variant **)&local_208,(int)(Vector3i *)&local_1d8);
              pVVar10 = local_170;
              do {
                pVVar1 = pVVar10 + -0x18;
                pVVar10 = pVVar10 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar10 != (Variant *)&local_1b8);
              if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
                StringName::unref();
              }
              iVar4 = GridMap::get_cell_item_orientation(*(Vector3i **)(this + 0xb00));
              iVar5 = GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
              StringName::StringName((StringName *)&local_208,"set_cell_item",false);
              pSVar3 = *(StringName **)(this + 0xb00);
              local_1d8 = (Variant *)local_1f0;
              pVStack_1d0 = (Variant *)CONCAT44(pVStack_1d0._4_4_,local_1e8);
              Variant::Variant(local_168,(Vector3i *)&local_1d8);
              Variant::Variant(local_150,iVar5);
              Variant::Variant(local_138,iVar4);
              local_118 = (undefined1  [16])0x0;
              local_120 = 0;
              local_1b8 = local_168;
              pVStack_1b0 = local_150;
              local_1a8 = local_138;
              EditorUndoRedoManager::add_undo_methodp
                        (pOVar6,pSVar3,(Variant **)&local_208,(int)(Variant *)&local_1b8);
              pVVar10 = (Variant *)&local_108;
              do {
                pVVar1 = pVVar10 + -0x18;
                pVVar10 = pVVar10 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar10 != local_168);
              if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
                StringName::unref();
              }
              iVar7 = iVar7 + 1;
              fVar11 = *(float *)(this + 0xcb8);
            } while ((float)iVar7 <= fVar11);
            fVar12 = *(float *)(this + 0xcb4);
          }
          iVar8 = iVar8 + 1;
        } while ((float)iVar8 <= fVar12);
        fVar11 = *(float *)(this + 0xcb0);
      }
      iVar9 = iVar9 + 1;
    } while ((float)iVar9 <= fVar11);
  }
  local_290 = (Vector3 *)&local_1e4;
  local_2c0 = (Vector3 *)&local_1f0;
  local_2c8 = (Vector3 *)&local_1d8;
  GVar2 = this[0xcbc];
  StringName::StringName((StringName *)&local_208,"_set_selection",false);
  local_1f0 = *(undefined8 *)(this + 0xca4);
  local_1e8 = *(int *)(this + 0xcac);
  local_1e4 = *(undefined8 *)(this + 0xcb0);
  local_1dc = *(int *)(this + 0xcb8);
  Variant::Variant((Variant *)&local_108,(bool)((byte)GVar2 ^ 1));
  Variant::Variant(local_f0,local_2c0);
  Variant::Variant(local_d8,local_290);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_1d8 = (Variant *)&local_108;
  pVStack_1d0 = local_f0;
  local_1c8 = local_d8;
  EditorUndoRedoManager::add_do_methodp
            (pOVar6,(StringName *)this,(Variant **)&local_208,(int)local_2c8);
  pVVar10 = local_a8;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  GVar2 = this[0xcbc];
  StringName::StringName((StringName *)&local_208,"_set_selection",false);
  local_1e4 = *(undefined8 *)(this + 0xca4);
  local_1dc = *(int *)(this + 0xcac);
  local_1d8 = *(Variant **)(this + 0xcb0);
  pVStack_1d0 = (Variant *)CONCAT44(pVStack_1d0._4_4_,*(undefined4 *)(this + 0xcb8));
  Variant::Variant(local_a8,(bool)GVar2);
  Variant::Variant(local_90,local_290);
  Variant::Variant(local_78,local_2c8);
  pVVar10 = local_48;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_108 = local_a8;
  pVStack_100 = local_90;
  local_f8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar6,(StringName *)this,(Variant **)&local_208,(int)(Variant *)&local_108);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != local_a8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GridMapEditor::_delete_selection() */

void __thiscall GridMapEditor::_delete_selection(GridMapEditor *this)

{
  if (this[0xcbc] == (GridMapEditor)0x0) {
    return;
  }
  _delete_selection(this);
  return;
}



/* GridMapEditor::_fill_selection() [clone .part.0] */

void __thiscall GridMapEditor::_fill_selection(GridMapEditor *this)

{
  Variant *pVVar1;
  GridMapEditor GVar2;
  StringName *pSVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  Vector3 *local_2d0;
  Vector3 *local_2c8;
  Vector3 *local_2a8;
  undefined8 local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  undefined8 local_200;
  int local_1f8;
  undefined8 local_1f4;
  int local_1ec;
  Variant *local_1e8;
  Variant *pVStack_1e0;
  Variant *local_1d8;
  Variant *local_1c8;
  Variant *pVStack_1c0;
  Variant *local_1b8;
  Variant local_1b0 [24];
  Variant local_198 [24];
  undefined8 local_180;
  undefined1 local_178 [16];
  Variant local_168 [24];
  Variant local_150 [24];
  Variant local_138 [24];
  undefined8 local_120;
  undefined1 local_118 [16];
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant local_f0 [24];
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  local_218 = "";
  local_220 = 0;
  local_210 = 0;
  String::parse_latin1((StrRange *)&local_220);
  local_218 = "GridMap Fill Selection";
  local_228 = 0;
  local_210 = 0x16;
  String::parse_latin1((StrRange *)&local_228);
  TTR((String *)&local_218,(String *)&local_228);
  EditorUndoRedoManager::create_action(pOVar6,(String *)&local_218,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  iVar8 = (int)*(float *)(this + 0xca4);
  fVar11 = *(float *)(this + 0xcb0);
  if ((float)iVar8 <= fVar11) {
    fVar12 = *(float *)(this + 0xcb4);
    do {
      iVar9 = (int)*(float *)(this + 0xca8);
      if ((float)iVar9 <= fVar12) {
        fVar11 = *(float *)(this + 0xcb8);
        do {
          iVar7 = (int)*(float *)(this + 0xcac);
          if ((float)iVar7 <= fVar11) {
            do {
              iVar4 = *(int *)(this + 0xd6c);
              local_200 = CONCAT44(iVar9,iVar8);
              iVar5 = *(int *)(this + 0xd70);
              local_1f8 = iVar7;
              StringName::StringName((StringName *)&local_218,"set_cell_item",false);
              pSVar3 = *(StringName **)(this + 0xb00);
              local_1f4 = local_200;
              local_1ec = local_1f8;
              Variant::Variant((Variant *)&local_1c8,(Vector3i *)&local_1f4);
              Variant::Variant(local_1b0,iVar4);
              Variant::Variant(local_198,iVar5);
              local_180 = 0;
              local_178 = (undefined1  [16])0x0;
              local_1e8 = (Variant *)&local_1c8;
              pVStack_1e0 = local_1b0;
              local_1d8 = local_198;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar6,pSVar3,(Variant **)&local_218,(int)(Vector3i *)&local_1e8);
              pVVar10 = local_168;
              do {
                pVVar1 = pVVar10 + -0x18;
                pVVar10 = pVVar10 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar10 != (Variant *)&local_1c8);
              if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
                StringName::unref();
              }
              iVar4 = GridMap::get_cell_item_orientation(*(Vector3i **)(this + 0xb00));
              iVar5 = GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
              StringName::StringName((StringName *)&local_218,"set_cell_item",false);
              pSVar3 = *(StringName **)(this + 0xb00);
              local_1e8 = (Variant *)local_200;
              pVStack_1e0 = (Variant *)CONCAT44(pVStack_1e0._4_4_,local_1f8);
              Variant::Variant(local_168,(Vector3i *)&local_1e8);
              Variant::Variant(local_150,iVar5);
              Variant::Variant(local_138,iVar4);
              local_118 = (undefined1  [16])0x0;
              local_120 = 0;
              local_1c8 = local_168;
              pVStack_1c0 = local_150;
              local_1b8 = local_138;
              EditorUndoRedoManager::add_undo_methodp
                        (pOVar6,pSVar3,(Variant **)&local_218,(int)(Variant *)&local_1c8);
              pVVar10 = (Variant *)&local_108;
              do {
                pVVar1 = pVVar10 + -0x18;
                pVVar10 = pVVar10 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar10 != local_168);
              if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
                StringName::unref();
              }
              iVar7 = iVar7 + 1;
              fVar11 = *(float *)(this + 0xcb8);
            } while ((float)iVar7 <= fVar11);
            fVar12 = *(float *)(this + 0xcb4);
          }
          iVar9 = iVar9 + 1;
        } while ((float)iVar9 <= fVar12);
        fVar11 = *(float *)(this + 0xcb0);
      }
      iVar8 = iVar8 + 1;
    } while ((float)iVar8 <= fVar11);
  }
  local_2a8 = (Vector3 *)&local_1f4;
  local_2c8 = (Vector3 *)&local_200;
  local_2d0 = (Vector3 *)&local_1e8;
  GVar2 = this[0xcbc];
  StringName::StringName((StringName *)&local_218,"_set_selection",false);
  local_200 = *(undefined8 *)(this + 0xca4);
  local_1f8 = *(int *)(this + 0xcac);
  local_1f4 = *(undefined8 *)(this + 0xcb0);
  local_1ec = *(int *)(this + 0xcb8);
  Variant::Variant((Variant *)&local_108,(bool)((byte)GVar2 ^ 1));
  Variant::Variant(local_f0,local_2c8);
  Variant::Variant(local_d8,local_2a8);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_1e8 = (Variant *)&local_108;
  pVStack_1e0 = local_f0;
  local_1d8 = local_d8;
  EditorUndoRedoManager::add_do_methodp
            (pOVar6,(StringName *)this,(Variant **)&local_218,(int)local_2d0);
  pVVar10 = local_a8;
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  GVar2 = this[0xcbc];
  StringName::StringName((StringName *)&local_218,"_set_selection",false);
  local_1f4 = *(undefined8 *)(this + 0xca4);
  local_1ec = *(int *)(this + 0xcac);
  local_1e8 = *(Variant **)(this + 0xcb0);
  pVStack_1e0 = (Variant *)CONCAT44(pVStack_1e0._4_4_,*(undefined4 *)(this + 0xcb8));
  Variant::Variant(local_a8,(bool)GVar2);
  Variant::Variant(local_90,local_2a8);
  Variant::Variant(local_78,local_2d0);
  pVVar10 = local_48;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_108 = local_a8;
  pVStack_100 = local_90;
  local_f8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar6,(StringName *)this,(Variant **)&local_218,(int)(Variant *)&local_108);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != local_a8);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GridMapEditor::_fill_selection() */

void __thiscall GridMapEditor::_fill_selection(GridMapEditor *this)

{
  if (this[0xcbc] == (GridMapEditor)0x0) {
    return;
  }
  _fill_selection(this);
  return;
}



/* GridMapEditor::_do_paste() */

void __thiscall GridMapEditor::_do_paste(GridMapEditor *this)

{
  Variant *pVVar1;
  float fVar2;
  GridMapEditor GVar3;
  StringName *pSVar4;
  Vector3i *pVVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  char cVar9;
  int iVar10;
  int iVar11;
  Object *pOVar12;
  Variant **ppVVar13;
  float *pfVar14;
  Variant *pVVar15;
  int *piVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  undefined8 uStack_230;
  float local_228;
  undefined8 local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  float local_1e8;
  Variant *local_1e0;
  float local_1d8;
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [12];
  undefined1 local_1c4 [12];
  Variant *local_1b8;
  Variant *pVStack_1b0;
  Variant *local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  Variant *local_168;
  Variant *pVStack_160;
  Variant *local_158;
  Variant local_150 [24];
  Variant local_138 [24];
  undefined8 local_120;
  undefined1 local_118 [16];
  Variant local_108 [24];
  Variant local_f0 [24];
  Variant local_d8 [24];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = MenuButton::get_popup();
  PopupMenu::get_item_index(iVar10);
  iVar10 = MenuButton::get_popup();
  cVar9 = PopupMenu::is_item_checked(iVar10);
  GridMap::get_basis_with_orthogonal_index((int)&local_198);
  fVar18 = *(float *)(this + 0xd08) - *(float *)(this + 0xcfc);
  fVar19 = (float)*(undefined8 *)(this + 0xd00) - (float)*(undefined8 *)(this + 0xcf4);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0xd00) >> 0x20) -
           (float)((ulong)*(undefined8 *)(this + 0xcf4) >> 0x20);
  pOVar12 = (Object *)EditorUndoRedoManager::get_singleton();
  local_208 = "";
  local_210 = 0;
  local_200 = 0;
  String::parse_latin1((StrRange *)&local_210);
  local_208 = "GridMap Paste Selection";
  local_218 = 0;
  local_200 = 0x17;
  String::parse_latin1((StrRange *)&local_218);
  TTR((String *)&local_208,(String *)&local_218);
  EditorUndoRedoManager::create_action(pOVar12,(String *)&local_208,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  auVar6._8_4_ = local_1c4._8_4_;
  auVar6._0_8_ = local_1c4._0_8_;
  auVar27._8_4_ = local_1d0._8_4_;
  auVar27._0_8_ = local_1d0._0_8_;
  if ((*(undefined8 **)(this + 0xc20) != (undefined8 *)0x0) &&
     (piVar16 = (int *)**(undefined8 **)(this + 0xc20), local_1d0 = auVar27, local_1c4 = auVar6,
     piVar16 != (int *)0x0)) {
    do {
      fVar2 = (float)piVar16[3];
      local_88 = 1.0;
      fVar20 = (float)*(undefined8 *)(piVar16 + 1);
      fVar22 = (float)((ulong)*(undefined8 *)(piVar16 + 1) >> 0x20);
      local_1d8 = fStack_180 * fVar20 + fStack_17c * fVar22 + local_178 * fVar2 +
                  *(float *)(this + 0xd14) + fVar18;
      local_1e0 = (Variant *)
                  CONCAT44(fVar22 * local_188 + fVar20 * fStack_18c + fVar2 * fStack_184 +
                           (float)((ulong)*(undefined8 *)(this + 0xd0c) >> 0x20) + fVar21,
                           fVar22 * fStack_194 + fVar20 * local_198 + fVar2 * fStack_190 +
                           (float)*(undefined8 *)(this + 0xd0c) + fVar19);
      _local_a8 = ZEXT416(_LC36);
      local_98 = (float)_LC36;
      fStack_94 = 0.0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      GridMap::get_basis_with_orthogonal_index((int)&local_248);
      fStack_90 = (float)uStack_230;
      fStack_8c = (float)((ulong)uStack_230 >> 0x20);
      local_88 = fStack_180 * fStack_240 + fStack_17c * fStack_234 + local_178 * local_228;
      local_a8._4_4_ = fStack_244 * local_198 + local_238 * fStack_194 + fStack_8c * fStack_190;
      local_a8._0_4_ = local_248 * local_198 + fStack_23c * fStack_194 + fStack_90 * fStack_190;
      fStack_a0 = fStack_240 * local_198 + fStack_234 * fStack_194 + local_228 * fStack_190;
      fStack_9c = local_248 * fStack_18c + fStack_23c * local_188 + fStack_90 * fStack_184;
      local_98 = local_238 * local_188 + fStack_244 * fStack_18c + fStack_8c * fStack_184;
      fStack_94 = fStack_234 * local_188 + fStack_240 * fStack_18c + local_228 * fStack_184;
      fStack_90 = fStack_23c * fStack_17c + local_248 * fStack_180 + fStack_90 * local_178;
      fStack_8c = local_238 * fStack_17c + fStack_244 * fStack_180 + fStack_8c * local_178;
      iVar11 = GridMap::get_orthogonal_index_from_basis(*(Basis **)(this + 0xb00));
      iVar10 = *piVar16;
      StringName::StringName((StringName *)&local_208,"set_cell_item",false);
      pSVar4 = *(StringName **)(this + 0xb00);
      local_1c4._0_8_ = local_1e0;
      local_1c4._8_4_ = local_1d8;
      Variant::Variant((Variant *)&local_168,(Vector3 *)local_1c4);
      Variant::Variant(local_150,iVar10);
      Variant::Variant(local_138,iVar11);
      local_118 = (undefined1  [16])0x0;
      local_120 = 0;
      local_1b8 = (Variant *)&local_168;
      pVStack_1b0 = local_150;
      local_1a8 = local_138;
      EditorUndoRedoManager::add_do_methodp
                (pOVar12,pSVar4,(Variant **)&local_208,(int)(Vector3 *)&local_1b8);
      pVVar15 = local_108;
      do {
        pVVar17 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if ((&Variant::needs_deinit)[*(int *)pVVar17] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != (Variant *)&local_168);
      if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
        StringName::unref();
      }
      pVVar5 = *(Vector3i **)(this + 0xb00);
      local_1c4 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_1e0);
      iVar10 = GridMap::get_cell_item_orientation(pVVar5);
      pVVar5 = *(Vector3i **)(this + 0xb00);
      auVar27 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_1e0);
      local_1d0 = auVar27;
      iVar11 = GridMap::get_cell_item(pVVar5);
      StringName::StringName((StringName *)&local_208,"set_cell_item",false);
      pSVar4 = *(StringName **)(this + 0xb00);
      local_1b8 = local_1e0;
      pVStack_1b0 = (Variant *)CONCAT44(pVStack_1b0._4_4_,local_1d8);
      Variant::Variant(local_108,(Vector3 *)&local_1b8);
      Variant::Variant(local_f0,iVar11);
      Variant::Variant(local_d8,iVar10);
      local_c0 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_168 = local_108;
      pVStack_160 = local_f0;
      local_158 = local_d8;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar12,pSVar4,(Variant **)&local_208,(int)(Variant *)&local_168);
      pVVar15 = (Variant *)local_a8;
      do {
        pVVar17 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if ((&Variant::needs_deinit)[*(int *)pVVar17] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != local_108);
      if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
        StringName::unref();
      }
      piVar16 = *(int **)(piVar16 + 8);
    } while (piVar16 != (int *)0x0);
  }
  if (cVar9 != '\0') {
    ppVVar13 = &local_1e0;
    pfVar14 = (float *)&local_1f0;
    fVar25 = *(float *)(this + 0xd1c) - *(float *)(this + 0xd10);
    fVar23 = (float)*(undefined8 *)(this + 0xd0c);
    fVar24 = (float)((ulong)*(undefined8 *)(this + 0xd0c) >> 0x20);
    fVar2 = *(float *)(this + 0xd14);
    fVar22 = (float)((ulong)*(undefined8 *)(this + 0xd14) >> 0x20);
    fVar20 = fVar22 - fVar23;
    fVar26 = *(float *)(this + 0xd20) - fVar2;
    local_1e0 = (Variant *)CONCAT44(fVar24 + fVar21,fVar23 + fVar19);
    local_1f0 = CONCAT44(fStack_18c * (fVar22 - fVar23) + fVar25 * local_188 + fVar26 * fStack_184 +
                         fVar24 + fVar21,
                         local_198 * fVar20 + fVar25 * fStack_194 + fVar26 * fStack_190 + fVar23 +
                         fVar19);
    local_1d8 = fVar2 + fVar18;
    local_1e8 = fVar20 * fStack_180 + fVar25 * fStack_17c + local_178 * fVar26 + fVar2 + fVar18;
    do {
      fVar18 = *(float *)ppVVar13;
      if (*pfVar14 < fVar18) {
        *(float *)ppVVar13 = *pfVar14;
        *pfVar14 = fVar18;
      }
      ppVVar13 = (Variant **)((long)ppVVar13 + 4);
      pfVar14 = pfVar14 + 1;
    } while ((Variant **)local_1d4 != ppVVar13);
    StringName::StringName((StringName *)&local_208,"_set_selection",false);
    local_1d0._0_8_ = local_1e0;
    local_1d0._8_4_ = local_1d8;
    local_1c4._0_8_ = local_1f0;
    local_1c4._8_4_ = local_1e8;
    Variant::Variant((Variant *)local_a8,true);
    Variant::Variant((Variant *)&fStack_90,(Vector3 *)local_1d0);
    Variant::Variant(local_78,(Vector3 *)local_1c4);
    local_58 = (undefined1  [16])0x0;
    pVVar15 = local_48;
    local_60 = 0;
    local_1b8 = (Variant *)local_a8;
    pVStack_1b0 = (Variant *)&fStack_90;
    local_1a8 = local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar12,(StringName *)this,(Variant **)&local_208,(int)&local_1b8);
    pVVar17 = pVVar15;
    do {
      pVVar1 = pVVar17 + -0x18;
      pVVar17 = pVVar17 + -0x18;
      if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar17 != (Variant *)local_a8);
    if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
      StringName::unref();
    }
    GVar3 = this[0xcbc];
    StringName::StringName((StringName *)&local_208,"_set_selection",false);
    local_1d0._0_8_ = *(undefined8 *)(this + 0xca4);
    local_1d0._8_4_ = *(undefined4 *)(this + 0xcac);
    local_1c4._0_8_ = *(undefined8 *)(this + 0xcb0);
    local_1c4._8_4_ = *(undefined4 *)(this + 0xcb8);
    Variant::Variant((Variant *)local_a8,(bool)GVar3);
    Variant::Variant((Variant *)&fStack_90,(Vector3 *)local_1d0);
    Variant::Variant(local_78,(Vector3 *)local_1c4);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    local_1b8 = (Variant *)local_a8;
    pVStack_1b0 = (Variant *)&fStack_90;
    local_1a8 = local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar12,(StringName *)this,(Variant **)&local_208,(int)&local_1b8);
    do {
      pVVar17 = pVVar15 + -0x18;
      pVVar15 = pVVar15 + -0x18;
      if ((&Variant::needs_deinit)[*(int *)pVVar17] != '\0') {
        Variant::_clear_internal();
      }
      auVar8._8_4_ = local_1c4._8_4_;
      auVar8._0_8_ = local_1c4._0_8_;
      auVar7._8_4_ = local_1d0._8_4_;
      auVar7._0_8_ = local_1d0._0_8_;
    } while (pVVar15 != (Variant *)local_a8);
    if ((StringName::configured != '\0') &&
       (local_1d0 = auVar7, local_1c4 = auVar8, local_208 != (char *)0x0)) {
      StringName::unref();
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar12,0));
  _clear_clipboard_data(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_update_theme() */

void __thiscall GridMapEditor::_update_theme(GridMapEditor *this)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pRVar1 = *(Ref **)(this + 0xa50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xa58);
  if (_update_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xa60);
  if (_update_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xa68);
  if (_update_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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
  pRVar1 = *(Ref **)(this + 0xa70);
  if (_update_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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
  pRVar1 = *(Ref **)(this + 0xa78);
  if (_update_theme()::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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
  pRVar1 = *(Ref **)(this + 0xa80);
  if (_update_theme()::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xa88);
  if (_update_theme()::{lambda()#8}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#8}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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
  pRVar1 = *(Ref **)(this + 0xa90);
  if (_update_theme()::{lambda()#9}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#9}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#9}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#9}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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
  pRVar1 = *(Ref **)(this + 0xa98);
  if (_update_theme()::{lambda()#10}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#10}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#10}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xaa0);
  if (_update_theme()::{lambda()#11}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#11}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#11}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xaa8);
  if (_update_theme()::{lambda()#12}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#12}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#12}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#12}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xac8);
  if (_update_theme()::{lambda()#13}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#13}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#13}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  LineEdit::set_right_icon(pRVar1);
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
  pRVar1 = *(Ref **)(this + 0xab8);
  if (_update_theme()::{lambda()#14}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#14}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#14}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xac0);
  if (_update_theme()::{lambda()#15}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#15}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#15}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  Button::set_button_icon(pRVar1);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
  pRVar1 = *(Ref **)(this + 0xa20);
  if (_update_theme()::{lambda()#16}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme()::{lambda()#16}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#16}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#16}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::_update_cursor_transform() */

void __thiscall GridMapEditor::_update_cursor_transform(GridMapEditor *this)

{
  Transform3D *this_00;
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  Vector3 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long local_30;
  
  uVar1 = _UNK_00124e58;
  fVar5 = _LC36;
  this_00 = (Transform3D *)(this + 0xd2c);
  uVar7 = CONCAT44(_UNK_00124e54,_LC36);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  *(undefined8 *)(this + 0xd2c) = uVar7;
  *(undefined8 *)(this + 0xd34) = uVar1;
  fStack_3c = 0.0;
  local_48 = 0x3f800000;
  *(undefined8 *)(this + 0xd3c) = uVar7;
  *(undefined8 *)(this + 0xd44) = uVar1;
  *(undefined8 *)(this + 0xd4c) = 0x3f800000;
  *(undefined8 *)(this + 0xd54) = 0;
  *(undefined8 *)(this + 0xd50) = *(undefined8 *)(this + 0xd5c);
  local_68 = (Vector3  [16])ZEXT416((uint)fVar5);
  *(undefined4 *)(this + 0xd58) = *(undefined4 *)(this + 0xd64);
  local_58 = ZEXT416((uint)fVar5);
  fVar5 = (float)GridMap::get_cell_scale();
  *(float *)(this + 0xd4c) = fVar5 * *(float *)(this + 0xd4c);
  *(float *)(this + 0xd3c) = *(float *)(this + 0xd3c) * fVar5;
  *(float *)(this + 0xd40) = *(float *)(this + 0xd40) * fVar5;
  *(float *)(this + 0xd44) = *(float *)(this + 0xd44) * fVar5;
  *(float *)(this + 0xd48) = *(float *)(this + 0xd48) * fVar5;
  *(float *)(this + 0xd2c) = fVar5 * *(float *)(this + 0xd2c);
  *(float *)(this + 0xd30) = fVar5 * *(float *)(this + 0xd30);
  *(float *)(this + 0xd34) = fVar5 * *(float *)(this + 0xd34);
  *(float *)(this + 0xd38) = fVar5 * *(float *)(this + 0xd38);
  Node3D::get_global_transform();
  Transform3D::operator*((Transform3D *)&local_c8,(Transform3D *)local_68);
  *(undefined8 *)(this + 0xd2c) = local_c8;
  *(undefined8 *)(this + 0xd34) = uStack_c0;
  *(undefined8 *)(this + 0xd3c) = local_b8;
  *(undefined8 *)(this + 0xd44) = uStack_b0;
  *(undefined8 *)(this + 0xd4c) = local_a8;
  *(undefined8 *)(this + 0xd54) = uStack_a0;
  lVar3 = ButtonGroup::get_pressed_button();
  if (*(long *)(this + 0xa68) == lVar3) {
    GridMap::get_basis_with_orthogonal_index((int)&local_f8);
    *(undefined8 *)(this + 0xd2c) = local_f8;
    *(undefined8 *)(this + 0xd34) = uStack_f0;
    *(undefined8 *)(this + 0xd3c) = local_e8;
    *(undefined8 *)(this + 0xd44) = uStack_e0;
    *(undefined4 *)(this + 0xd4c) = local_d8;
    if ((-1 < *(int *)(this + 0xd6c)) && (*(long *)(this + 0xb00) != 0)) {
      GridMap::get_mesh_library();
      if (local_98 == 0) {
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_98);
      }
      else {
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_98);
        GridMap::get_mesh_library();
        MeshLibrary::get_item_mesh_transform((int)local_68);
        Transform3D::operator*=(this_00,(Transform3D *)local_68);
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_98);
      }
    }
  }
  else {
    local_68 = (Vector3  [16])ZEXT416((uint)_LC36);
    local_58 = ZEXT416((uint)_LC36);
    local_48 = 0x3f800000;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    fVar5 = _LC36;
    local_74 = GridMap::get_cell_size();
    local_6c = fVar5;
    Transform3D::scale(local_68);
    cVar2 = GridMap::get_center_x();
    fVar6 = 0.0;
    if (cVar2 != '\0') {
      local_8c = GridMap::get_cell_size();
      fVar6 = _LC127 * (float)local_8c;
      local_84 = fVar5;
    }
    fStack_44 = fVar6;
    cVar2 = GridMap::get_center_y();
    fVar6 = 0.0;
    if (cVar2 != '\0') {
      uVar7 = GridMap::get_cell_size();
      local_80._4_4_ = (float)((ulong)uVar7 >> 0x20);
      fVar6 = _LC127 * local_80._4_4_;
      local_80 = uVar7;
      local_78 = fVar5;
    }
    fStack_40 = fVar6;
    cVar2 = GridMap::get_center_z();
    fVar6 = 0.0;
    if (cVar2 != '\0') {
      local_74 = GridMap::get_cell_size();
      fVar6 = _LC127 * fVar5;
      local_6c = fVar5;
    }
    fStack_3c = fVar6;
    Transform3D::operator*=(this_00,(Transform3D *)local_68);
  }
  if (*(long *)(this + 0xbc8) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0xd40))(plVar4,*(undefined8 *)(this + 0xbc8),this_00);
    plVar4 = (long *)RenderingServer::get_singleton();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xd70))(plVar4,*(undefined8 *)(this + 0xbc8),this[0xd28]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::_menu_option(int) */

void __thiscall GridMapEditor::_menu_option(GridMapEditor *this,int param_1)

{
  Vector2i *pVVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  String *pSVar9;
  long in_FS_OFFSET;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    dVar2 = (double)Range::get_value();
    Range::set_value(dVar2 + _LC128);
    if ((this[0xcbc] != (GridMapEditor)0x0) && (*(int *)(this + 0xa10) == 5)) {
      *(float *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xc98) =
           _LC36 + *(float *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xc98);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00106505:
        _validate_selection(this);
        return;
      }
      goto LAB_0010648d;
    }
    break;
  case 1:
    dVar2 = (double)Range::get_value();
    Range::set_value(dVar2 - _LC128);
    if ((this[0xcbc] != (GridMapEditor)0x0) && (*(int *)(this + 0xa10) == 5)) {
      *(float *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xc98) =
           *(float *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xc98) - _LC36;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106505;
      goto LAB_0010648d;
    }
    break;
  case 3:
  case 4:
  case 5:
    iVar6 = param_1 + -3;
    iVar7 = 0;
    do {
      iVar5 = MenuButton::get_popup();
      bVar3 = (bool)PopupMenu::get_item_index(iVar5);
      iVar5 = MenuButton::get_popup();
      iVar7 = iVar7 + 1;
      PopupMenu::set_item_checked(iVar5,bVar3);
    } while (iVar7 != 3);
    if (*(int *)(this + 0xb70) != iVar6) {
      if (*(int *)(this + 0xb70) == 1) {
        pSVar9 = *(String **)(this + 0xa28);
        pcVar8 = "Change Grid Plane";
      }
      else {
        if (iVar6 != 1) goto LAB_00105eda;
        pSVar9 = *(String **)(this + 0xa28);
        pcVar8 = "Change Grid Floor";
      }
      local_70 = 0;
      String::parse_latin1((String *)&local_70,pcVar8);
      Control::set_tooltip_text(pSVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
LAB_00105eda:
    *(int *)(this + 0xb70) = iVar6;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      update_grid(this);
      return;
    }
    goto LAB_0010648d;
  case 6:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) == 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_38 = local_88;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      local_68 = _LC131;
      goto LAB_00106638;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_60 = 0;
    local_38 = local_88;
    local_68 = _LC131;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
    fVar10 = _LC132;
LAB_00105df0:
    Basis::rotate((Vector3 *)local_58,fVar10);
    uVar4 = GridMap::get_orthogonal_index_from_basis(*(Basis **)(this + 0xb00));
    *(undefined4 *)(this + 0xd70) = uVar4;
    _update_cursor_transform(this);
    break;
  case 7:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) != 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_68 = 0x3f800000;
      local_38 = local_88;
      local_60 = 0;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      fVar10 = _LC132;
      goto LAB_00105df0;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_68 = 0x3f800000;
    local_38 = local_88;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
LAB_00106638:
    local_60 = 0;
    fVar10 = _LC132;
    goto LAB_00106578;
  case 8:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) != 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_68 = 0;
      local_60 = 0x3f800000;
      local_38 = local_88;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      fVar10 = _LC132;
      goto LAB_00105df0;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_68 = 0;
    local_38 = local_88;
    local_60 = 0x3f800000;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
    fVar10 = _LC132;
    goto LAB_00106578;
  case 9:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) != 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_60 = 0;
      local_38 = local_88;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      local_68 = _LC131;
      fVar10 = _LC134;
      goto LAB_00105df0;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_60 = 0;
    local_38 = local_88;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
    local_68 = _LC131;
    fVar10 = _LC134;
    goto LAB_00106578;
  case 10:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) != 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_68 = 0x3f800000;
      local_60 = 0;
      local_38 = local_88;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      fVar10 = _LC134;
      goto LAB_00105df0;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_68 = 0x3f800000;
    local_60 = 0;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
    local_38 = local_88;
    fVar10 = _LC134;
    goto LAB_00106578;
  case 0xb:
    local_38 = 0x3f800000;
    local_58 = ZEXT416((uint)_LC36);
    local_48 = ZEXT416((uint)_LC36);
    if (*(int *)(this + 0xa10) != 6) {
      GridMap::get_basis_with_orthogonal_index((int)&local_a8);
      local_68 = 0;
      local_38 = local_88;
      local_60 = 0x3f800000;
      local_58._8_8_ = uStack_a0;
      local_58._0_8_ = local_a8;
      fVar10 = _LC134;
      goto LAB_00105df0;
    }
    GridMap::get_basis_with_orthogonal_index((int)&local_a8);
    local_68 = 0;
    local_38 = local_88;
    local_60 = 0x3f800000;
    local_58._8_8_ = uStack_a0;
    local_58._0_8_ = local_a8;
    fVar10 = _LC134;
LAB_00106578:
    Basis::rotate((Vector3 *)local_58,fVar10);
    uVar4 = GridMap::get_orthogonal_index_from_basis(*(Basis **)(this + 0xb00));
    *(undefined4 *)(this + 0xd24) = uVar4;
    _update_paste_indicator(this);
    break;
  case 0xc:
    if (*(int *)(this + 0xa10) != 6) {
      *(undefined4 *)(this + 0xd70) = 0;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_cursor_transform(this);
        return;
      }
      goto LAB_0010648d;
    }
LAB_00105f99:
    *(undefined4 *)(this + 0xd24) = 0;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_paste_indicator(this);
      return;
    }
    goto LAB_0010648d;
  case 0xd:
    iVar6 = MenuButton::get_popup();
    bVar3 = (bool)PopupMenu::get_item_index(iVar6);
    iVar6 = MenuButton::get_popup();
    iVar7 = MenuButton::get_popup();
    PopupMenu::is_item_checked(iVar7);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      PopupMenu::set_item_checked(iVar6,bVar3);
      return;
    }
    goto LAB_0010648d;
  case 0xe:
  case 0xf:
    if ((this[0xcbc] != (GridMapEditor)0x0) && (*(int *)(this + 0xa10) == 0)) {
      _set_clipboard_data(this);
      if ((param_1 == 0xf) && (this[0xcbc] != (GridMapEditor)0x0)) {
        _delete_selection(this);
      }
      uVar4 = *(undefined4 *)(this + 0xcac);
      uVar11 = *(undefined8 *)(this + 0xca4);
      *(undefined4 *)(this + 0xa10) = 6;
      *(undefined4 *)(this + 0xcfc) = uVar4;
      *(undefined4 *)(this + 0xd08) = uVar4;
      *(undefined4 *)(this + 0xd14) = uVar4;
      *(undefined8 *)(this + 0xcf4) = uVar11;
      *(undefined8 *)(this + 0xd18) = *(undefined8 *)(this + 0xcb0);
      *(undefined8 *)(this + 0xd00) = uVar11;
      *(undefined8 *)(this + 0xd0c) = uVar11;
      *(undefined4 *)(this + 0xd20) = *(undefined4 *)(this + 0xcb8);
      goto LAB_00105f99;
    }
    break;
  case 0x10:
    if (this[0xcbc] != (GridMapEditor)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _delete_selection(this);
        return;
      }
      goto LAB_0010648d;
    }
    break;
  case 0x11:
    if (this[0xcbc] != (GridMapEditor)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _fill_selection(this);
        return;
      }
      goto LAB_0010648d;
    }
    break;
  case 0x12:
    pVVar1 = *(Vector2i **)(this + 0xad8);
    fVar10 = (float)EditorScale::get_scale();
    fVar10 = fVar10 * __LC135;
    uVar11 = (**(code **)(**(long **)(this + 0xae0) + 0x300))();
    local_68 = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar10,(float)uVar11 + fVar10);
    local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
    Window::popup_centered(pVVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010648d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_update_cursor_instance() */

void __thiscall GridMapEditor::_update_cursor_instance(GridMapEditor *this)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Color *pCVar8;
  long in_FS_OFFSET;
  Object *local_58;
  Object *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb00) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00106c80;
  }
  if (*(long *)(this + 0xbc8) != 0) {
    plVar5 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this + 0xbc8));
  }
  *(undefined8 *)(this + 0xbc8) = 0;
  lVar4 = ButtonGroup::get_pressed_button();
  if (*(long *)(this + 0xa68) == lVar4) {
    if ((-1 < *(int *)(this + 0xd6c)) && (*(long *)(this + 0xb00) != 0)) {
      GridMap::get_mesh_library();
      if (local_50 == (Object *)0x0) {
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_50);
      }
      else {
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_50);
        GridMap::get_mesh_library();
        MeshLibrary::get_item_mesh((int)&local_58);
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_50);
        if (local_58 != (Object *)0x0) {
          lVar4 = (**(code **)(*(long *)local_58 + 0x1c0))();
          if (lVar4 != 0) {
            plVar5 = (long *)RenderingServer::get_singleton();
            pcVar1 = *(code **)(*plVar5 + 0xd10);
            if (*(long *)(this + 0x240) == 0) goto GridMapEditor__update_cursor_instance;
            Viewport::get_world_3d();
            uVar6 = World3D::get_scenario();
            uVar7 = (**(code **)(*(long *)local_58 + 0x1c0))();
            uVar6 = (*pcVar1)(plVar5,uVar7,uVar6);
            *(undefined8 *)(this + 0xbc8) = uVar6;
            Ref<World3D>::unref((Ref<World3D> *)&local_50);
            GridMap::get_mesh_library();
            uVar3 = MeshLibrary::get_item_mesh_cast_shadow((int)local_50);
            Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_50);
            plVar5 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar5 + 0xdc0))(plVar5,*(undefined8 *)(this + 0xbc8),uVar3);
          }
          if ((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
            cVar2 = predelete_handler(local_58);
            goto joined_r0x00106928;
          }
        }
      }
    }
  }
  else {
    lVar4 = ButtonGroup::get_pressed_button();
    if (*(long *)(this + 0xa58) == lVar4) {
      local_48 = *(undefined8 *)(this + 0xc28);
      local_40 = *(undefined4 *)(this + 0xc30);
      local_3c = 0x3e4ccccd;
      BaseMaterial3D::set_albedo(*(Color **)(this + 0xc60));
      local_48 = *(undefined8 *)(this + 0xc28);
      local_40 = *(undefined4 *)(this + 0xc30);
      local_3c = 0x3f4ccccd;
      BaseMaterial3D::set_albedo(*(Color **)(this + 0xc68));
      plVar5 = (long *)RenderingServer::get_singleton();
      pcVar1 = *(code **)(*plVar5 + 0xd10);
      if (*(long *)(this + 0x240) == 0) goto GridMapEditor__update_cursor_instance;
      Viewport::get_world_3d();
      uVar6 = World3D::get_scenario();
      uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this + 0xbc0),uVar6);
      *(undefined8 *)(this + 0xbc8) = uVar6;
      if ((local_50 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        cVar2 = predelete_handler(local_50);
        local_58 = local_50;
joined_r0x00106928:
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    else {
      lVar4 = ButtonGroup::get_pressed_button();
      if (*(long *)(this + 0xa60) == lVar4) {
        local_48 = *(undefined8 *)(this + 0xc38);
        local_40 = *(undefined4 *)(this + 0xc40);
        local_3c = 0x3e4ccccd;
        BaseMaterial3D::set_albedo(*(Color **)(this + 0xc60));
        local_48 = *(undefined8 *)(this + 0xc38);
        pCVar8 = *(Color **)(this + 0xc68);
        local_40 = *(undefined4 *)(this + 0xc40);
      }
      else {
        lVar4 = ButtonGroup::get_pressed_button();
        if (*(long *)(this + 0xa70) != lVar4) goto LAB_0010682e;
        local_48 = *(undefined8 *)(this + 0xc48);
        local_40 = *(undefined4 *)(this + 0xc50);
        local_3c = 0x3e4ccccd;
        BaseMaterial3D::set_albedo(*(Color **)(this + 0xc60));
        local_48 = *(undefined8 *)(this + 0xc48);
        pCVar8 = *(Color **)(this + 0xc68);
        local_40 = *(undefined4 *)(this + 0xc50);
      }
      local_3c = 0x3f4ccccd;
      BaseMaterial3D::set_albedo(pCVar8);
      plVar5 = (long *)RenderingServer::get_singleton();
      pcVar1 = *(code **)(*plVar5 + 0xd10);
      if (*(long *)(this + 0x240) == 0) {
GridMapEditor__update_cursor_instance:
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      Viewport::get_world_3d();
      uVar6 = World3D::get_scenario();
      uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this + 0xbc0),uVar6);
      *(undefined8 *)(this + 0xbc8) = uVar6;
      Ref<World3D>::unref((Ref<World3D> *)&local_50);
    }
  }
LAB_0010682e:
  plVar5 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar5 + 0xdf0))(_LC50,plVar5,*(undefined8 *)(this + 0xbc8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_cursor_transform(this);
    return;
  }
LAB_00106c80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_on_tool_mode_changed() */

void __thiscall GridMapEditor::_on_tool_mode_changed(GridMapEditor *this)

{
  long lVar1;
  
  lVar1 = ButtonGroup::get_pressed_button();
  _show_viewports_transform_gizmo(this,*(long *)(this + 0xa50) == lVar1);
  _update_cursor_instance(this);
  return;
}



/* GridMapEditor::_item_selected_cbk(int) */

void GridMapEditor::_item_selected_cbk(int param_1)

{
  int iVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_item_metadata((int)local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_38);
  *(int *)((GridMapEditor *)CONCAT44(in_register_0000003c,param_1) + 0xd6c) = iVar1;
  if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_cursor_instance((GridMapEditor *)CONCAT44(in_register_0000003c,param_1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::make_visible(bool) */

void __thiscall GridMapEditorPlugin::make_visible(GridMapEditorPlugin *this,bool param_1)

{
  GridMapEditor *this_00;
  char cVar1;
  long lVar2;
  
  if (*(GridMapEditor **)(this + 0x660) == (GridMapEditor *)0x0) {
    _err_print_error("make_visible","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x70f,
                     "Parameter \"grid_map_editor\" is null.",0,0);
    return;
  }
  if (param_1) {
    lVar2 = ButtonGroup::get_pressed_button();
    if (lVar2 == 0) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(*(long *)(this + 0x660) + 0xa58),0));
    }
    this_00 = *(GridMapEditor **)(this + 0x660);
    lVar2 = ButtonGroup::get_pressed_button();
    GridMapEditor::_show_viewports_transform_gizmo(this_00,*(long *)(this_00 + 0xa50) == lVar2);
    GridMapEditor::_update_cursor_instance(this_00);
    CanvasItem::show();
    EditorBottomPanel::make_item_visible
              (*(Control **)(EditorNode::singleton + 0xa40),SUB81(*(undefined8 *)(this + 0x660),0),
               true);
    Node::set_process(SUB81(*(undefined8 *)(this + 0x660),0));
    return;
  }
  GridMapEditor::_show_viewports_transform_gizmo(*(GridMapEditor **)(this + 0x660),true);
  CanvasItem::hide();
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    EditorBottomPanel::hide_bottom_panel();
  }
  Node::set_process(SUB81(*(undefined8 *)(this + 0x660),0));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::update_palette() */

void __thiscall GridMapEditor::update_palette(GridMapEditor *this)

{
  int iVar1;
  Vector2i *pVVar2;
  long lVar3;
  String *pSVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar8) [16];
  bool bVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  Ref *pRVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  undefined1 (*local_a8) [16];
  long local_a0;
  Object *local_98;
  Object *local_90;
  undefined8 local_88;
  Object *local_80;
  Object *local_78;
  long local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (Object *)0x0;
  local_70 = 0x1d;
  local_78 = (Object *)0x1121bf;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)local_58);
  fVar15 = Variant::operator_cast_to_float((Variant *)local_58);
  if ((&Variant::needs_deinit)[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  fVar16 = (float)EditorScale::get_scale();
  ItemList::clear();
  if (*(int *)(this + 0xd68) == 0) {
    ItemList::set_max_columns((int)*(undefined8 *)(this + 0xd80));
    ItemList::set_icon_mode(*(undefined8 *)(this + 0xd80),0);
    uVar5 = *(undefined8 *)(this + 0xd80);
    EditorZoomWidget::get_zoom();
    ItemList::set_fixed_column_width((int)uVar5);
  }
  else if (*(int *)(this + 0xd68) == 1) {
    ItemList::set_max_columns((int)*(undefined8 *)(this + 0xd80));
    ItemList::set_icon_mode(*(undefined8 *)(this + 0xd80),1);
    ItemList::set_fixed_column_width((int)*(undefined8 *)(this + 0xd80));
  }
  pVVar2 = *(Vector2i **)(this + 0xd80);
  local_60 = CONCAT44(fVar16 * fVar15,fVar16 * fVar15);
  local_58[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  ItemList::set_fixed_icon_size(pVVar2);
  ItemList::set_max_text_lines((int)*(undefined8 *)(this + 0xd80));
  if (*(long *)(this + 0xb08) == 0) {
    uVar5 = *(undefined8 *)(this + 0xac8);
    local_78 = (Object *)0x0;
    String::parse_latin1((String *)&local_78,"");
    LineEdit::set_text(uVar5,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xac8),0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::show();
      return;
    }
    goto LAB_001076d7;
  }
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xac8),0));
  CanvasItem::hide();
  MeshLibrary::get_item_list();
  lVar6 = local_70;
  local_a8 = (undefined1 (*) [16])0x0;
  bVar9 = SUB81((String *)&local_78,0);
  if ((local_70 == 0) || (*(long *)(local_70 + -8) < 1)) {
    List<_CGMEItemSort,DefaultAllocator>::sort_custom<Comparator<_CGMEItemSort>>
              ((List<_CGMEItemSort,DefaultAllocator> *)&local_a8);
    LineEdit::get_text();
    String::strip_edges(SUB81((CowData<char32_t> *)&local_a0,0),bVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    List<_CGMEItemSort,DefaultAllocator>::~List((List<_CGMEItemSort,DefaultAllocator> *)&local_a8);
    if (lVar6 != 0) goto LAB_00107524;
  }
  else {
    lVar12 = 0;
    pauVar8 = (undefined1 (*) [16])0x0;
    do {
      uVar11 = *(undefined4 *)(lVar6 + lVar12 * 4);
      local_78 = (Object *)0x0;
      local_70 = CONCAT44(local_70._4_4_,uVar11);
      MeshLibrary::get_item_name((int)(StrRange *)&local_80);
      pOVar14 = local_80;
      if (local_80 != (Object *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        pOVar14 = local_80;
        local_80 = (Object *)0x0;
        local_78 = pOVar14;
        uVar11 = (undefined4)local_70;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (pauVar8 == (undefined1 (*) [16])0x0) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
        local_a8 = pauVar8;
      }
      this_00 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
      *(undefined8 *)this_00 = 0;
      *(undefined4 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      if (pOVar14 != (Object *)0x0) {
        CowData<char32_t>::_ref(this_00,(CowData *)&local_78);
      }
      lVar3 = *(long *)(*pauVar8 + 8);
      *(undefined4 *)(this_00 + 8) = uVar11;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(long *)(this_00 + 0x18) = lVar3;
      *(undefined1 (**) [16])(this_00 + 0x20) = pauVar8;
      if (lVar3 != 0) {
        *(CowData<char32_t> **)(lVar3 + 0x10) = this_00;
      }
      lVar3 = *(long *)*pauVar8;
      *(CowData<char32_t> **)(*pauVar8 + 8) = this_00;
      if (lVar3 == 0) {
        *(CowData<char32_t> **)*pauVar8 = this_00;
      }
      *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
      lVar12 = lVar12 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    } while (lVar12 < *(long *)(lVar6 + -8));
    pRVar13 = (Ref *)0x0;
    List<_CGMEItemSort,DefaultAllocator>::sort_custom<Comparator<_CGMEItemSort>>
              ((List<_CGMEItemSort,DefaultAllocator> *)&local_a8);
    LineEdit::get_text();
    String::strip_edges(SUB81((String *)&local_a0,0),bVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    for (lVar12 = *(long *)*pauVar8; lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x10)) {
      while( true ) {
        iVar1 = *(int *)(lVar12 + 8);
        MeshLibrary::get_item_name((int)(CowData<char32_t> *)&local_98);
        MeshLibrary::get_item_preview((int)(Ref<Texture2D> *)&local_90);
        if ((local_98 == (Object *)0x0) || (*(uint *)(local_98 + -8) < 2)) {
          itos((long)&local_80);
          operator+((char *)&local_78,(String *)&_LC147);
          if (local_98 != local_78) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            local_98 = local_78;
            local_78 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        }
        if (((local_a0 != 0) && (1 < *(uint *)(local_a0 + -8))) &&
           (cVar7 = String::is_subsequence_ofn((String *)&local_a0), cVar7 == '\0')) break;
        local_80 = (Object *)0x0;
        pSVar4 = *(String **)(this + 0xd80);
        local_78 = (Object *)&_LC80;
        local_88 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_88);
        ItemList::add_item(pSVar4,(Ref *)&local_88,SUB81((StrRange *)&local_80,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (((local_80 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar14 = local_80, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_80), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
        if (local_90 != (Object *)0x0) {
          ItemList::set_item_icon((int)*(undefined8 *)(this + 0xd80),pRVar13);
          ItemList::set_item_tooltip((int)*(undefined8 *)(this + 0xd80),(String *)pRVar13);
        }
        ItemList::set_item_text((int)*(undefined8 *)(this + 0xd80),(String *)pRVar13);
        uVar5 = *(undefined8 *)(this + 0xd80);
        Variant::Variant((Variant *)local_58,iVar1);
        ItemList::set_item_metadata((int)uVar5,(Variant *)pRVar13);
        if ((&Variant::needs_deinit)[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (*(int *)(this + 0xd6c) == iVar1) {
          ItemList::select((int)*(undefined8 *)(this + 0xd80),SUB81(pRVar13,0));
        }
        pRVar13 = (Ref *)(ulong)((int)pRVar13 + 1);
        if (((local_90 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar14 = local_90, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_90), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
          Memory::free_static(pOVar14,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) goto LAB_00107510;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
LAB_00107510:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    List<_CGMEItemSort,DefaultAllocator>::~List((List<_CGMEItemSort,DefaultAllocator> *)&local_a8);
LAB_00107524:
    plVar10 = (long *)(lVar6 + -0x10);
    LOCK();
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(plVar10,false);
        return;
      }
      goto LAB_001076d7;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001076d7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::do_input_action(Camera3D*, Vector2 const&, bool) */

uint __thiscall
GridMapEditor::do_input_action(GridMapEditor *this,Camera3D *param_1,Vector2 *param_2,bool param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  float *pfVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da;
  double dVar16;
  undefined4 extraout_XMM0_Db;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_XMM1_Da;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 local_148 [8];
  long local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [12];
  int local_110 [4];
  float local_100 [6];
  undefined8 local_e8;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  Transform3D local_a8 [8];
  int local_a0;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xd78) != 0) && (iVar7 = *(int *)(this + 0xa10), iVar7 != 1)) {
    if (*(int *)(this + 0xd6c) < 0) {
      if (((iVar7 == 0) || (iVar7 - 4U < 3)) && (*(long *)(this + 0xb08) != 0)) goto LAB_00107769;
    }
    else if ((*(long *)(this + 0xb08) != 0) &&
            (((iVar7 - 4U < 3 || (iVar7 == 0)) ||
             (cVar3 = MeshLibrary::has_item((int)*(long *)(this + 0xb08)), cVar3 != '\0')))) {
LAB_00107769:
      local_130._0_12_ = (**(code **)(*(long *)param_1 + 0x208))(param_1,param_2);
      local_120 = (**(code **)(*(long *)param_1 + 0x200))(param_1,param_2);
      fVar22 = local_120._8_4_;
      fVar14 = local_120._0_4_;
      fVar18 = local_120._4_4_;
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      (**(code **)(*(long *)param_1 + 0x228))(local_148,param_1);
      fVar15 = SUB124(local_130._0_12_,0);
      fVar19 = SUB124(local_130._0_12_,4);
      fVar13 = fVar15 * local_c0 + fVar19 * local_bc + local_b8 * (float)local_130._8_4_ + local_ac;
      auVar21._0_4_ = fVar14 * local_d8 + fVar18 * fStack_d4 + fVar22 * local_d0;
      auVar21._4_4_ = fVar14 * fStack_cc + fVar18 * local_c8 + fVar22 * fStack_c4;
      auVar21._8_8_ = 0;
      local_130._0_8_ =
           CONCAT44(fVar19 * local_c8 + fVar15 * fStack_cc + (float)local_130._8_4_ * fStack_c4 +
                    fStack_b0,
                    fVar19 * fStack_d4 + fVar15 * local_d8 + (float)local_130._8_4_ * local_d0 +
                    local_b4);
      fVar18 = fVar14 * local_c0 + fVar18 * local_bc + fVar22 * local_b8;
      fVar14 = auVar21._0_4_ * auVar21._0_4_ + auVar21._4_4_ * auVar21._4_4_ + fVar18 * fVar18;
      fVar22 = 0.0;
      uVar24 = 0;
      if (fVar14 != 0.0) {
        fVar14 = SQRT(fVar14);
        auVar23._4_4_ = fVar14;
        auVar23._0_4_ = fVar14;
        auVar23._8_8_ = _LC37;
        auVar21 = divps(auVar21,auVar23);
        fVar22 = fVar18 / fVar14;
        uVar24 = auVar21._0_8_;
      }
      iVar7 = *(int *)(this + (long)*(int *)(this + 0xb70) * 4 + 0xb74);
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 0.0;
      *(undefined4 *)((long)&local_e8 + (long)*(int *)(this + 0xb70) * 4) = 0x3f800000;
      local_130._8_4_ = fVar13;
      _local_78 = GridMap::get_cell_size();
      local_100[0] = 0.0;
      local_100[1] = 0.0;
      local_dc = (float)iVar7 * *(float *)(local_78 + (long)*(int *)(this + 0xb70) * 4);
      local_100[2] = 0.0;
      dVar16 = (double)Range::get_value();
      fVar14 = (float)dVar16;
      fStack_70 = fVar22 * fVar14 + (float)local_130._8_4_;
      local_78 = (undefined1  [8])
                 CONCAT44(SUB84(local_130._0_8_,4) + fVar14 * (float)((ulong)uVar24 >> 0x20),
                          (float)local_130._0_8_ + fVar14 * (float)uVar24);
      uVar6 = Plane::intersects_segment
                        ((Vector3 *)&local_e8,(Vector3 *)local_130,(Vector3 *)local_78);
      if ((char)uVar6 == '\0') {
LAB_00107d29:
        uVar6 = 0;
      }
      else {
        lVar11 = 0;
        if (local_140 != 0) {
          do {
            if (*(long *)(local_140 + -8) <= lVar11) break;
            pfVar12 = (float *)(local_140 + lVar11 * 0x10);
            Basis::inverse();
            Basis::transpose();
            auVar26._8_4_ = fStack_70;
            auVar26._0_8_ = local_78;
            fVar14 = pfVar12[1];
            fVar13 = *pfVar12;
            fVar18 = pfVar12[2];
            fVar22 = pfVar12[3];
            fVar15 = local_5c * fVar14 + local_60 * fVar13 + local_58 * fVar18;
            fVar19 = fStack_68 * fVar14 + fStack_6c * fVar13 + local_64 * fVar18;
            fVar20 = (float)local_78._4_4_ * fVar14 + (float)local_78._0_4_ * fVar13 +
                     fStack_70 * fVar18;
            fVar25 = fVar19 * fVar19 + fVar20 * fVar20 + fVar15 * fVar15;
            if (fVar25 != 0.0) {
              fVar18 = fVar18 * fVar22;
              fVar25 = SQRT(fVar25);
              fVar14 = fVar14 * fVar22;
              fVar22 = fVar22 * fVar13;
              _local_78 = auVar26;
              if ((fStack_cc * fVar22 + local_c8 * fVar14 + fStack_c4 * fVar18 + fStack_b0) *
                  (fVar19 / fVar25) +
                  (local_d0 * fVar18 + fStack_d4 * fVar14 + local_d8 * fVar22 + local_b4) *
                  (fVar20 / fVar25) +
                  (fVar22 * local_c0 + fVar14 * local_bc + fVar18 * local_b8 + local_ac) *
                  (fVar15 / fVar25) <
                  local_100[2] * (fVar15 / fVar25) +
                  local_100[1] * (fVar19 / fVar25) + local_100[0] * (fVar20 / fVar25))
              goto LAB_00107d29;
            }
            lVar11 = lVar11 + 1;
          } while (local_140 != 0);
          uVar6 = uVar6 & 0xff;
        }
        GridMap::get_cell_size();
        piVar10 = local_110;
        lVar11 = 0;
        local_100[5] = (float)extraout_XMM1_Da;
        iVar7 = *(int *)(this + 0xb70);
        local_100[3] = (float)extraout_XMM0_Da;
        local_100[4] = (float)extraout_XMM0_Db;
        do {
          if (iVar7 == (int)lVar11) {
            *piVar10 = *(int *)(this + lVar11 * 4 + 0xb74);
          }
          else {
            fVar14 = local_100[lVar11 + 3];
            iVar9 = (int)(local_100[lVar11] / fVar14);
            if (local_100[lVar11] < 0.0) {
              iVar9 = iVar9 + -1;
            }
            *piVar10 = iVar9;
            *(float *)(this + lVar11 * 4 + 0xb80) = (float)iVar9 * fVar14;
          }
          lVar11 = lVar11 + 1;
          piVar10 = piVar10 + 1;
        } while (lVar11 != 3);
        plVar8 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar8 + 0xd40);
        Node3D::get_global_transform();
        Transform3D::operator*((Transform3D *)local_78,local_a8);
        (*pcVar1)(plVar8,*(undefined8 *)(this + (long)*(int *)(this + 0xb70) * 8 + 0xba8),
                  (Transform3D *)local_78);
        if (*(long *)(this + 0xbc8) != 0) {
          _local_78 = GridMap::get_cell_size();
          bVar4 = GridMap::get_center_z();
          dVar17 = (double)bVar4 * _LC149;
          bVar4 = GridMap::get_center_y();
          bVar5 = GridMap::get_center_x();
          dVar16 = _LC149;
          this[0xd28] = (GridMapEditor)(*(int *)(this + 0xa10) != 6);
          *(float *)(this + 0xd64) = ((float)local_110[2] + (float)dVar17) * fStack_70;
          *(ulong *)(this + 0xd5c) =
               CONCAT44(((float)((double)bVar4 * dVar16) + (float)local_110[1]) *
                        SUB124(_local_78,4),
                        ((float)((double)bVar5 * dVar16) + (float)local_110[0]) *
                        SUB124(_local_78,0));
          _update_cursor_transform(this);
        }
        iVar7 = *(int *)(this + 0xa10);
        if (iVar7 == 0) goto LAB_00107d29;
        if (iVar7 == 6) {
          local_78 = (undefined1  [8])CONCAT44(local_110[1],local_110[0]);
          fStack_70 = (float)local_110[2];
          auVar26 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_78);
          *(undefined1 (*) [12])(this + 0xd00) = auVar26;
          _update_paste_indicator(this);
          iVar7 = *(int *)(this + 0xa10);
LAB_00107ec8:
          iVar9 = (int)local_a8;
          if (iVar7 == 2) {
            fStack_6c = *(float *)(this + 0xd6c);
            fStack_68 = *(float *)(this + 0xd70);
            local_a0 = local_110[2];
            local_78 = (undefined1  [8])CONCAT44(local_110[1],local_110[0]);
            fStack_70 = (float)local_110[2];
            local_64 = (float)GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
            local_a0 = local_110[2];
            local_60 = (float)GridMap::get_cell_item_orientation(*(Vector3i **)(this + 0xb00));
            List<GridMapEditor::SetItem,DefaultAllocator>::push_back
                      ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8),
                       (SetItem *)local_78);
            local_a0 = local_110[2];
            GridMap::set_cell_item(*(Vector3i **)(this + 0xb00),iVar9,*(int *)(this + 0xd6c));
          }
          else {
            if (iVar7 != 3) goto LAB_00107d29;
            local_78 = (undefined1  [8])CONCAT44(local_110[1],local_110[0]);
            fStack_70 = (float)local_110[2];
            fStack_6c = (float)_LC151;
            fStack_68 = (float)((ulong)_LC151 >> 0x20);
            local_a0 = local_110[2];
            local_64 = (float)GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
            local_a0 = local_110[2];
            local_60 = (float)GridMap::get_cell_item_orientation(*(Vector3i **)(this + 0xb00));
            List<GridMapEditor::SetItem,DefaultAllocator>::push_back
                      ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8),
                       (SetItem *)local_78);
            local_a0 = local_110[2];
            GridMap::set_cell_item(*(Vector3i **)(this + 0xb00),iVar9,-1);
          }
        }
        else if (iVar7 == 5) {
          local_78 = (undefined1  [8])CONCAT44(local_110[1],local_110[0]);
          fStack_70 = (float)local_110[2];
          auVar26 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_78);
          *(undefined1 (*) [12])(this + 0xc98) = auVar26;
          if (param_3) {
            *(undefined1 (*) [12])(this + 0xc8c) = auVar26;
          }
          this[0xcbc] = (GridMapEditor)0x1;
          _validate_selection(this);
        }
        else {
          if (iVar7 != 4) goto LAB_00107ec8;
          local_78 = (undefined1  [8])CONCAT44(local_110[1],local_110[0]);
          fStack_70 = (float)local_110[2];
          iVar7 = GridMap::get_cell_item(*(Vector3i **)(this + 0xb00));
          if (-1 < iVar7) {
            *(int *)(this + 0xd6c) = iVar7;
            pVVar2 = *(Variant **)(this + 0xd80);
            Variant::Variant((Variant *)local_78,iVar7);
            iVar7 = ItemList::find_metadata(pVVar2);
            if ((&Variant::needs_deinit)[(int)local_78._0_4_] != '\0') {
              Variant::_clear_internal();
            }
            if (iVar7 == -1) {
              LineEdit::clear();
            }
            update_palette(this);
            _update_cursor_instance(this);
          }
        }
      }
      lVar11 = local_140;
      if (local_140 != 0) {
        LOCK();
        plVar8 = (long *)(local_140 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      goto LAB_00107d72;
    }
  }
  uVar6 = 0;
LAB_00107d72:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::forward_spatial_input_event(Camera3D*, Ref<InputEvent> const&) [clone .part.0] */

undefined1 __thiscall
GridMapEditor::forward_spatial_input_event(GridMapEditor *this,Camera3D *param_1,Ref *param_2)

{
  Variant *pVVar1;
  GridMapEditor GVar2;
  StringName *pSVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  Ref *pRVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  Object *pOVar11;
  long lVar12;
  Object *pOVar13;
  long *plVar14;
  Variant *pVVar15;
  Variant *pVVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  double dVar21;
  double dVar22;
  Object *local_170;
  Object *local_168;
  Ref *local_100;
  undefined8 local_f8;
  Ref *local_f0;
  Ref *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_168 = *(Object **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_168 == (Object *)0x0) {
LAB_00108aa8:
    *(undefined8 *)(this + 0xa30) = 0;
    uVar8 = 0;
LAB_0010845c:
    if (local_168 == (Object *)0x0) goto LAB_00108476;
  }
  else {
    pOVar11 = (Object *)__dynamic_cast(local_168,&Object::typeinfo,&InputEventKey::typeinfo);
    pOVar13 = local_168;
    local_168 = pOVar11;
    if (pOVar11 == (Object *)0x0) {
LAB_00108392:
      local_170 = (Object *)
                  __dynamic_cast(pOVar13,&Object::typeinfo,&InputEventMouseButton::typeinfo);
      if (local_170 == (Object *)0x0) {
LAB_001083d6:
        pOVar11 = (Object *)
                  __dynamic_cast(pOVar13,&Object::typeinfo,&InputEventMouseMotion::typeinfo);
        if (pOVar11 == (Object *)0x0) {
LAB_0010840f:
          pOVar11 = (Object *)
                    __dynamic_cast(pOVar13,&Object::typeinfo,&InputEventPanGesture::typeinfo,0);
          if ((pOVar11 == (Object *)0x0) || (cVar7 = RefCounted::reference(), cVar7 == '\0'))
          goto LAB_0010843f;
          cVar7 = InputEventWithModifiers::is_alt_pressed();
          if ((cVar7 == '\0') ||
             (cVar7 = InputEventWithModifiers::is_command_or_control_pressed(), cVar7 == '\0')) {
            *(undefined8 *)(this + 0xa30) = 0;
            uVar8 = 0;
          }
          else {
            InputEventPanGesture::get_delta();
            dVar21 = (double)(extraout_XMM0_Db_00 * _LC50) + *(double *)(this + 0xa30);
            *(double *)(this + 0xa30) = dVar21;
            if (dVar21 < 0.0) {
              dVar22 = _LC152;
              if (dVar21 < _LC152) goto LAB_001090f8;
            }
            else {
              dVar22 = _LC128;
              if (_LC128 < dVar21) {
LAB_001090f8:
                *(double *)(this + 0xa30) = dVar21 - dVar22;
                dVar21 = (double)Range::get_value();
                Range::set_value(dVar21 + dVar22);
              }
            }
            uVar8 = 1;
          }
          cVar7 = RefCounted::unreference();
        }
        else {
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            pOVar13 = *(Object **)param_2;
            if (pOVar13 == (Object *)0x0) goto LAB_0010843f;
            goto LAB_0010840f;
          }
          update_grid(this);
          local_a8 = InputEventMouse::get_position();
          uVar8 = do_input_action(this,param_1,(Vector2 *)&local_a8,false);
          cVar7 = RefCounted::unreference();
        }
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar11), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
LAB_00108450:
        if (local_170 == (Object *)0x0) goto LAB_0010845c;
      }
      else {
        cVar7 = RefCounted::reference();
        if (cVar7 == '\0') {
          local_170 = (Object *)0x0;
          pOVar13 = *(Object **)param_2;
LAB_001083d1:
          if (pOVar13 != (Object *)0x0) goto LAB_001083d6;
LAB_0010843f:
          *(undefined8 *)(this + 0xa30) = 0;
          uVar8 = 0;
          goto LAB_00108450;
        }
        iVar9 = InputEventMouseButton::get_button_index();
        if ((iVar9 == 4) &&
           (cVar7 = InputEventWithModifiers::is_command_or_control_pressed(), cVar7 != '\0')) {
          cVar7 = InputEvent::is_pressed();
          if (cVar7 != '\0') {
            dVar21 = (double)Range::get_value();
            fVar20 = (float)InputEventMouseButton::get_factor();
            Range::set_value((double)fVar20 + dVar21);
          }
LAB_00108ee8:
          uVar8 = 1;
        }
        else {
          iVar9 = InputEventMouseButton::get_button_index();
          if ((iVar9 == 5) &&
             (cVar7 = InputEventWithModifiers::is_command_or_control_pressed(), cVar7 != '\0')) {
            cVar7 = InputEvent::is_pressed();
            if (cVar7 != '\0') {
              dVar21 = (double)Range::get_value();
              fVar20 = (float)InputEventMouseButton::get_factor();
              Range::set_value(dVar21 - (double)fVar20);
            }
            goto LAB_00108ee8;
          }
          cVar7 = InputEvent::is_pressed();
          if (cVar7 == '\0') {
            iVar9 = InputEventMouseButton::get_button_index();
            if (((iVar9 == 1) && (*(int *)(this + 0xa10) == 3)) ||
               ((iVar9 = InputEventMouseButton::get_button_index(), iVar9 == 1 &&
                (*(int *)(this + 0xa10) == 2)))) {
              if ((*(long *)(this + 0xaf8) != 0) && (*(int *)(*(long *)(this + 0xaf8) + 0x10) != 0))
              {
                pOVar13 = (Object *)EditorUndoRedoManager::get_singleton();
                local_f0 = (Ref *)0x0;
                String::parse_latin1((String *)&local_f0,"");
                local_f8 = 0;
                String::parse_latin1((String *)&local_f8,"GridMap Paint");
                TTR((String *)&local_e8,(String *)&local_f8);
                EditorUndoRedoManager::create_action(pOVar13,(String *)&local_e8,0,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                plVar14 = *(long **)(this + 0xaf8);
                if (plVar14 != (long *)0x0) {
                  puVar17 = (undefined8 *)*plVar14;
                  if (puVar17 != (undefined8 *)0x0) {
                    do {
                      iVar9 = *(int *)(puVar17 + 2);
                      iVar10 = *(int *)((long)puVar17 + 0xc);
                      StringName::StringName((StringName *)&local_e8,"set_cell_item",false);
                      local_d4 = *puVar17;
                      local_cc = *(undefined4 *)(puVar17 + 1);
                      pSVar3 = *(StringName **)(this + 0xb00);
                      Variant::Variant((Variant *)&local_a8,(Vector3i *)&local_d4);
                      Variant::Variant(local_90,iVar10);
                      Variant::Variant(local_78,iVar9);
                      local_60 = 0;
                      local_58 = (undefined1  [16])0x0;
                      local_c8 = (Variant *)&local_a8;
                      pVStack_c0 = local_90;
                      local_b8 = local_78;
                      EditorUndoRedoManager::add_do_methodp
                                (pOVar13,pSVar3,(Variant **)&local_e8,(int)&local_c8);
                      pVVar16 = local_48;
                      do {
                        pVVar15 = pVVar16 + -0x18;
                        pVVar16 = pVVar16 + -0x18;
                        if ((&Variant::needs_deinit)[*(int *)pVVar15] != '\0') {
                          Variant::_clear_internal();
                        }
                      } while (pVVar16 != (Variant *)&local_a8);
                      if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
                        StringName::unref();
                      }
                      puVar17 = (undefined8 *)puVar17[4];
                    } while (puVar17 != (undefined8 *)0x0);
                    plVar14 = *(long **)(this + 0xaf8);
                    if (plVar14 == (long *)0x0) goto LAB_001094fa;
                  }
                  puVar17 = (undefined8 *)plVar14[1];
                  if (puVar17 != (undefined8 *)0x0) {
                    do {
                      iVar9 = *(int *)(puVar17 + 3);
                      iVar10 = *(int *)((long)puVar17 + 0x14);
                      StringName::StringName((StringName *)&local_e8,"set_cell_item",false);
                      local_d4 = *puVar17;
                      local_cc = *(undefined4 *)(puVar17 + 1);
                      pSVar3 = *(StringName **)(this + 0xb00);
                      Variant::Variant((Variant *)&local_a8,(Vector3i *)&local_d4);
                      Variant::Variant(local_90,iVar10);
                      Variant::Variant(local_78,iVar9);
                      local_60 = 0;
                      local_58 = (undefined1  [16])0x0;
                      local_c8 = (Variant *)&local_a8;
                      pVStack_c0 = local_90;
                      local_b8 = local_78;
                      EditorUndoRedoManager::add_undo_methodp
                                (pOVar13,pSVar3,(Variant **)&local_e8,(int)&local_c8);
                      pVVar16 = local_48;
                      do {
                        pVVar15 = pVVar16 + -0x18;
                        pVVar16 = pVVar16 + -0x18;
                        if ((&Variant::needs_deinit)[*(int *)pVVar15] != '\0') {
                          Variant::_clear_internal();
                        }
                      } while (pVVar16 != (Variant *)&local_a8);
                      if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
                        StringName::unref();
                      }
                      puVar17 = (undefined8 *)puVar17[5];
                    } while (puVar17 != (undefined8 *)0x0);
                  }
                }
LAB_001094fa:
                EditorUndoRedoManager::commit_action(SUB81(pOVar13,0));
              }
              uVar8 = 0;
              List<GridMapEditor::SetItem,DefaultAllocator>::clear
                        ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8));
              *(undefined4 *)(this + 0xa10) = 0;
              if (*(long *)(this + 0xaf8) != 0) {
                uVar8 = 0 < *(int *)(*(long *)(this + 0xaf8) + 0x10);
              }
              goto LAB_001088e8;
            }
            iVar9 = InputEventMouseButton::get_button_index();
            if ((iVar9 == 1) && (*(int *)(this + 0xa10) == 5)) {
              pOVar13 = (Object *)EditorUndoRedoManager::get_singleton();
              local_f0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_f0,"");
              local_f8 = 0;
              String::parse_latin1((String *)&local_f8,"GridMap Selection");
              TTR((String *)&local_e8,(String *)&local_f8);
              EditorUndoRedoManager::create_action(pOVar13,(String *)&local_e8,0,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              GVar2 = this[0xcbc];
              StringName::StringName((StringName *)&local_e8,"_set_selection",false);
              local_e0 = *(undefined8 *)(this + 0xca4);
              local_d8 = *(undefined4 *)(this + 0xcac);
              local_d4 = *(undefined8 *)(this + 0xcb0);
              local_cc = *(undefined4 *)(this + 0xcb8);
              Variant::Variant((Variant *)&local_a8,(bool)GVar2);
              Variant::Variant(local_90,(Vector3 *)&local_e0);
              Variant::Variant(local_78,(Vector3 *)&local_d4);
              local_58 = (undefined1  [16])0x0;
              local_60 = 0;
              local_c8 = (Variant *)&local_a8;
              pVStack_c0 = local_90;
              local_b8 = local_78;
              EditorUndoRedoManager::add_do_methodp
                        (pOVar13,(StringName *)this,(Variant **)&local_e8,(int)&local_c8);
              pVVar16 = local_48;
              pVVar15 = pVVar16;
              do {
                pVVar1 = pVVar15 + -0x18;
                pVVar15 = pVVar15 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar15 != (Variant *)&local_a8);
              if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
                StringName::unref();
              }
              GVar2 = this[0xcf0];
              StringName::StringName((StringName *)&local_e8,"_set_selection",false);
              local_e0 = *(undefined8 *)(this + 0xcd8);
              local_d8 = *(undefined4 *)(this + 0xce0);
              local_d4 = *(undefined8 *)(this + 0xce4);
              local_cc = *(undefined4 *)(this + 0xcec);
              Variant::Variant((Variant *)&local_a8,(bool)GVar2);
              Variant::Variant(local_90,(Vector3 *)&local_e0);
              Variant::Variant(local_78,(Vector3 *)&local_d4);
              local_58 = (undefined1  [16])0x0;
              local_60 = 0;
              local_c8 = (Variant *)&local_a8;
              pVStack_c0 = local_90;
              local_b8 = local_78;
              EditorUndoRedoManager::add_undo_methodp
                        (pOVar13,(StringName *)this,(Variant **)&local_e8,(int)&local_c8);
              do {
                pVVar15 = pVVar16 + -0x18;
                pVVar16 = pVVar16 + -0x18;
                if ((&Variant::needs_deinit)[*(int *)pVVar15] != '\0') {
                  Variant::_clear_internal();
                }
              } while (pVVar16 != (Variant *)&local_a8);
              if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
                StringName::unref();
              }
              EditorUndoRedoManager::commit_action(SUB81(pOVar13,0));
            }
            iVar9 = InputEventMouseButton::get_button_index();
            if ((iVar9 == 1) && (*(int *)(this + 0xa10) != 0)) {
              List<GridMapEditor::SetItem,DefaultAllocator>::clear
                        ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8));
              *(undefined4 *)(this + 0xa10) = 0;
            }
            else {
              iVar9 = InputEventMouseButton::get_button_index();
              if ((iVar9 != 2) || ((*(int *)(this + 0xa10) != 3 && (*(int *)(this + 0xa10) != 6))))
              {
                pOVar13 = *(Object **)param_2;
                goto LAB_001083d1;
              }
              *(undefined4 *)(this + 0xa10) = 0;
            }
            goto LAB_00108ee8;
          }
          local_e8 = (Ref *)0x0;
          String::parse_latin1((String *)&local_e8,"editors/3d/navigation/navigation_scheme");
          _EDITOR_GET((String *)&local_a8);
          iVar9 = Variant::operator_cast_to_int((Variant *)&local_a8);
          if ((&Variant::needs_deinit)[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if ((iVar9 - 1U < 2) && (cVar7 = InputEventWithModifiers::is_alt_pressed(), cVar7 != '\0')
             ) {
            *(undefined4 *)(this + 0xa10) = 0;
            goto LAB_0010889e;
          }
          iVar9 = InputEventMouseButton::get_button_index();
          if (iVar9 == 1) {
            bVar18 = false;
            if (*(long *)(this + 0xb00) != 0) {
              GridMap::get_mesh_library();
              bVar18 = local_e8 != (Ref *)0x0;
              Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_e8);
            }
            if (*(int *)(this + 0xa10) == 6) {
              _do_paste(this);
              *(undefined4 *)(this + 0xa10) = 0;
              _update_paste_indicator(this);
              goto LAB_00108ee8;
            }
            lVar12 = ButtonGroup::get_pressed_button();
            if (*(long *)(this + 0xa58) == lVar12) {
              if (bVar18) {
                *(undefined4 *)(this + 0xa10) = 5;
                *(undefined8 *)(this + 0xcc0) = *(undefined8 *)(this + 0xc8c);
                *(undefined8 *)(this + 0xcc8) = *(undefined8 *)(this + 0xc94);
                this[0xcf0] = this[0xcbc];
                *(undefined8 *)(this + 0xcd0) = *(undefined8 *)(this + 0xc9c);
                *(undefined8 *)(this + 0xcd8) = *(undefined8 *)(this + 0xca4);
                *(undefined8 *)(this + 0xce0) = *(undefined8 *)(this + 0xcac);
                *(undefined8 *)(this + 0xce8) = *(undefined8 *)(this + 0xcb4);
              }
              else {
                ButtonGroup::get_pressed_button();
LAB_00108f0e:
                ButtonGroup::get_pressed_button();
LAB_00108f1b:
                ButtonGroup::get_pressed_button();
              }
            }
            else {
              lVar12 = ButtonGroup::get_pressed_button();
              if (*(long *)(this + 0xa70) == lVar12) {
                if (!bVar18) goto LAB_00108f0e;
                *(undefined4 *)(this + 0xa10) = 4;
              }
              else {
                lVar12 = ButtonGroup::get_pressed_button();
                if (*(long *)(this + 0xa68) == lVar12) {
                  if (!bVar18) goto LAB_00108f1b;
                  *(undefined4 *)(this + 0xa10) = 2;
                  List<GridMapEditor::SetItem,DefaultAllocator>::clear
                            ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8));
                }
                else {
                  lVar12 = ButtonGroup::get_pressed_button();
                  if ((*(long *)(this + 0xa60) == lVar12) && (bVar18)) {
                    *(undefined4 *)(this + 0xa10) = 3;
                    List<GridMapEditor::SetItem,DefaultAllocator>::clear
                              ((List<GridMapEditor::SetItem,DefaultAllocator> *)(this + 0xaf8));
                  }
                }
              }
            }
LAB_0010889e:
            InputEventMouse::get_position();
            uVar19 = InputEventMouse::get_position();
            local_a8 = CONCAT44(extraout_XMM0_Db,uVar19);
            uVar8 = do_input_action(this,param_1,(Vector2 *)&local_a8,true);
          }
          else {
            uVar8 = 0;
            iVar9 = InputEventMouseButton::get_button_index();
            if (iVar9 == 2) {
              if (*(int *)(this + 0xa10) == 6) {
                _clear_clipboard_data(this);
                *(undefined4 *)(this + 0xa10) = 0;
                _update_paste_indicator(this);
              }
              else {
                if (this[0xcbc] == (GridMapEditor)0x0) goto LAB_0010889e;
                local_a8 = 0;
                auVar4._12_4_ = 0;
                auVar4._0_12_ = local_a0._4_12_;
                local_a0 = auVar4 << 0x20;
                local_c8 = (Variant *)0x0;
                pVStack_c0 = (Variant *)((ulong)pVStack_c0 & 0xffffffff00000000);
                _set_selection(this,false,(Vector3 *)&local_c8,(Vector3 *)&local_a8);
              }
              goto LAB_00108ee8;
            }
          }
        }
      }
LAB_001088e8:
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_170), cVar7 != '\0')) {
        (**(code **)(*(long *)local_170 + 0x140))(local_170);
        Memory::free_static(local_170,false);
      }
      goto LAB_0010845c;
    }
    cVar7 = RefCounted::reference();
    if (cVar7 == '\0') {
      local_168 = (Object *)0x0;
      pOVar13 = *(Object **)param_2;
LAB_00108389:
      if (pOVar13 == (Object *)0x0) goto LAB_00108aa8;
      goto LAB_00108392;
    }
    cVar7 = InputEvent::is_pressed();
    if ((cVar7 == '\0') || (cVar7 = (**(code **)(*(long *)pOVar11 + 0x1c8))(pOVar11), cVar7 != '\0')
       ) {
      pOVar13 = *(Object **)param_2;
      goto LAB_00108389;
    }
    lVar12 = ButtonGroup::get_pressed_button();
    if (lVar12 == *(long *)(this + 0xa50)) {
      BaseButton::get_shortcut();
      if (local_e8 == (Ref *)0x0) {
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
      }
      else {
        BaseButton::get_shortcut();
        cVar7 = Shortcut::matches_event(local_f0);
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_f0);
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
        if (cVar7 != '\0') {
          BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa58),0));
          Control::accept_event();
          goto LAB_00108b50;
        }
      }
      uVar8 = 0;
    }
    else {
      if ((*(long **)(this + 0xa40) != (long *)0x0) &&
         (puVar17 = (undefined8 *)**(long **)(this + 0xa40), puVar17 != (undefined8 *)0x0)) {
        do {
          plVar14 = (long *)*puVar17;
          cVar7 = BaseButton::is_disabled();
          if (cVar7 == '\0') {
            BaseButton::get_shortcut();
            if (local_e8 == (Ref *)0x0) {
              Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
            }
            else {
              BaseButton::get_shortcut();
              cVar7 = Shortcut::matches_event(local_f0);
              Ref<Shortcut>::unref((Ref<Shortcut> *)&local_f0);
              Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
              if (cVar7 != '\0') {
                cVar7 = BaseButton::is_toggle_mode();
                if (cVar7 == '\0') {
                  local_a8 = 0;
                  local_a0 = (undefined1  [16])0x0;
                  (**(code **)(*plVar14 + 0xd0))(plVar14,SceneStringNames::singleton + 0x238,0,0);
                  if ((&Variant::needs_deinit)[(int)local_a8] != '\0') {
                    Variant::_clear_internal();
                  }
                }
                else {
                  BaseButton::get_button_group();
                  if (local_e8 == (Ref *)0x0) {
                    BaseButton::is_pressed();
                  }
                  BaseButton::set_pressed(SUB81(plVar14,0));
                  if (((local_e8 != (Ref *)0x0) &&
                      (cVar7 = RefCounted::unreference(), pRVar6 = local_e8, cVar7 != '\0')) &&
                     (cVar7 = predelete_handler((Object *)local_e8), cVar7 != '\0')) {
                    (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
                    Memory::free_static(pRVar6,false);
                  }
                }
                Control::accept_event();
                goto LAB_00108b50;
              }
            }
          }
          puVar17 = (undefined8 *)puVar17[1];
        } while (puVar17 != (undefined8 *)0x0);
      }
      iVar9 = InputEventKey::get_keycode();
      if (iVar9 == 0x400001) {
        if (*(int *)(this + 0xa10) == 6) {
          _clear_clipboard_data(this);
          *(undefined4 *)(this + 0xa10) = 0;
          _update_paste_indicator(this);
        }
        else if (this[0xcbc] == (GridMapEditor)0x0) {
          *(undefined4 *)(this + 0xa10) = 0;
          update_palette(this);
          _update_cursor_instance(this);
        }
        else {
          local_a8 = 0;
          auVar5._12_4_ = 0;
          auVar5._0_12_ = local_a0._4_12_;
          local_a0 = auVar5 << 0x20;
          local_c8 = (Variant *)0x0;
          pVStack_c0 = (Variant *)((ulong)pVStack_c0 & 0xffffffff00000000);
          _set_selection(this,false,(Vector3 *)&local_c8,(Vector3 *)&local_a8);
        }
      }
      else {
        local_e8 = (Ref *)0x0;
        String::parse_latin1((String *)&local_e8,"grid_map/previous_floor");
        ED_GET_SHORTCUT((String *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if ((local_100 == (Ref *)0x0) || (cVar7 = Shortcut::matches_event(local_100), cVar7 == '\0')
           ) {
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,"grid_map/next_floor");
          ED_GET_SHORTCUT((String *)&local_f0);
          if (local_f0 != local_100) {
            local_e8 = local_100;
            local_100 = local_f0;
            if ((local_f0 != (Ref *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
              local_100 = (Ref *)0x0;
            }
            Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
          }
          Ref<Shortcut>::unref((Ref<Shortcut> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          if ((local_100 == (Ref *)0x0) ||
             (cVar7 = Shortcut::matches_event(local_100), cVar7 == '\0')) {
            iVar9 = 0;
            while( true ) {
              MenuButton::get_popup();
              iVar10 = PopupMenu::get_item_count();
              if (iVar10 <= iVar9) break;
              MenuButton::get_popup();
              PopupMenu::get_item_shortcut((int)(String *)&local_e8);
              if ((local_e8 != (Ref *)0x0) &&
                 (cVar7 = Shortcut::matches_event(local_e8), cVar7 != '\0')) {
                Control::accept_event();
                iVar9 = MenuButton::get_popup();
                iVar9 = PopupMenu::get_item_id(iVar9);
                _menu_option(this,iVar9);
                Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
                goto LAB_00109548;
              }
              iVar9 = iVar9 + 1;
              Ref<Shortcut>::unref((Ref<Shortcut> *)&local_e8);
            }
            Ref<Shortcut>::unref((Ref<Shortcut> *)&local_100);
            pOVar13 = *(Object **)param_2;
            goto LAB_00108389;
          }
          Control::accept_event();
          _menu_option(this,0);
        }
        else {
          Control::accept_event();
          _menu_option(this,1);
        }
LAB_00109548:
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_100);
      }
LAB_00108b50:
      uVar8 = 1;
    }
  }
  cVar7 = RefCounted::unreference();
  if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_168), cVar7 != '\0')) {
    (**(code **)(*(long *)local_168 + 0x140))(local_168);
    Memory::free_static(local_168,false);
  }
LAB_00108476:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::forward_spatial_input_event(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
GridMapEditor::forward_spatial_input_event(GridMapEditor *this,Camera3D *param_1,Ref *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xb00) != 0) {
    uVar1 = forward_spatial_input_event(this,param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GridMapEditor::_set_display_mode(int) */

void __thiscall GridMapEditor::_set_display_mode(GridMapEditor *this,int param_1)

{
  if (*(int *)(this + 0xd68) != param_1) {
    if (param_1 == 1) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab8),0));
    }
    else if (param_1 == 0) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab8),0));
    }
    *(int *)(this + 0xd68) = param_1;
    update_palette(this);
    return;
  }
  return;
}



/* GridMapEditor::_text_changed(String const&) */

void GridMapEditor::_text_changed(String *param_1)

{
  update_palette((GridMapEditor *)param_1);
  return;
}



/* GridMapEditor::_icon_size_changed(float) */

void __thiscall GridMapEditor::_icon_size_changed(GridMapEditor *this,float param_1)

{
  ItemList::set_icon_scale(param_1);
  update_palette(this);
  return;
}



/* GridMapEditor::_update_mesh_library() */

void __thiscall GridMapEditor::_update_mesh_library(GridMapEditor *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_50;
  GridMapEditor local_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb00) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_mesh_library","modules/gridmap/editor/grid_map_editor_plugin.cpp",
                       0x3fc,"Parameter \"node\" is null.",0,0);
      return;
    }
    goto LAB_00109cbd;
  }
  GridMap::get_mesh_library();
  pOVar3 = *(Object **)(this + 0xb08);
  if (pOVar3 == local_50) {
    Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_50);
  }
  else {
    if (pOVar3 == (Object *)0x0) {
      *(Object **)(this + 0xb08) = local_50;
      if (local_50 != (Object *)0x0) {
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') goto LAB_00109ad0;
        *(undefined8 *)(this + 0xb08) = 0;
      }
    }
    else {
      create_custom_callable_function_pointer<GridMapEditor>
                (local_48,(char *)this,(_func_void *)"&GridMapEditor::update_palette");
      Resource::disconnect_changed(pOVar3);
      Callable::~Callable((Callable *)local_48);
      pOVar3 = *(Object **)(this + 0xb08);
      if (local_50 != pOVar3) {
        *(Object **)(this + 0xb08) = local_50;
        if (local_50 == (Object *)0x0) {
LAB_00109bb3:
          if (pOVar3 == (Object *)0x0) goto LAB_00109b12;
        }
        else {
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            *(undefined8 *)(this + 0xb08) = 0;
            goto LAB_00109bb3;
          }
          if (pOVar3 == (Object *)0x0) goto LAB_00109ad0;
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
LAB_00109ad0:
        pOVar3 = *(Object **)(this + 0xb08);
      }
      if (pOVar3 != (Object *)0x0) {
        create_custom_callable_function_pointer<GridMapEditor>
                  (local_48,(char *)this,(_func_void *)"&GridMapEditor::update_palette");
        Resource::connect_changed((Callable *)pOVar3,(uint)local_48);
        Callable::~Callable((Callable *)local_48);
      }
    }
LAB_00109b12:
    update_palette(this);
    iVar2 = ItemList::get_current();
    if ((iVar2 == -1) && (iVar2 = ItemList::get_item_count(), 0 < iVar2)) {
      ItemList::set_current((int)*(undefined8 *)(this + 0xd80));
      ItemList::get_item_metadata((int)(Variant *)local_38);
      iVar2 = Variant::operator_cast_to_int((Variant *)local_38);
      *(int *)(this + 0xd6c) = iVar2;
      if ((&Variant::needs_deinit)[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    _update_cursor_instance(this);
    update_grid(this);
    if (((local_50 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109cbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_notification(int) */

void GridMapEditor::_notification(int param_1)

{
  code *pcVar1;
  Color *pCVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  Resource *this;
  long lVar7;
  int in_ESI;
  undefined4 in_register_0000003c;
  GridMapEditor *this_00;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  Resource *local_c8;
  Resource *local_c0;
  Object *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [14];
  long local_40;
  
  this_00 = (GridMapEditor *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 0x2d) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010a07e:
      _update_theme(this_00);
      return;
    }
  }
  else {
    if (in_ESI < 0x2e) {
      if (in_ESI == 0xb) {
        _clear_clipboard_data(this_00);
        lVar7 = 0;
        do {
          plVar5 = (long *)RenderingServer::get_singleton();
          lVar8 = (long)(int)lVar7;
          (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + lVar8 * 8 + 0xba8));
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + lVar8 * 8 + 0xb90));
          *(undefined8 *)(this_00 + lVar7 * 8 + 0xba8) = 0;
          *(undefined8 *)(this_00 + lVar7 * 8 + 0xb90) = 0;
          lVar7 = lVar7 + 1;
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + lVar8 * 8 + 0xbf8));
        } while (lVar7 != 3);
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + 0xbc8));
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + 0xbd8));
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0x11b0))(plVar5,*(undefined8 *)(this_00 + 0xc18));
        *(undefined8 *)(this_00 + 0xbc8) = 0;
        *(undefined8 *)(this_00 + 0xbd8) = 0;
        *(undefined8 *)(this_00 + 0xc18) = 0;
      }
      else if (in_ESI == 0x11) {
        if (*(long *)(this_00 + 0xb00) != 0) {
          Node3D::get_global_transform();
          cVar4 = Transform3D::operator!=((Transform3D *)&local_a8,(Transform3D *)(this_00 + 0xb10))
          ;
          if (cVar4 != '\0') {
            iVar9 = 0;
            do {
              plVar5 = (long *)RenderingServer::get_singleton();
              pcVar1 = *(code **)(*plVar5 + 0xd40);
              Transform3D::operator*((Transform3D *)local_78,(Transform3D *)&local_a8);
              lVar7 = (long)iVar9;
              iVar9 = iVar9 + 1;
              (*pcVar1)(plVar5,*(undefined8 *)(this_00 + lVar7 * 8 + 0xba8),(Transform3D *)local_78)
              ;
            } while (iVar9 != 3);
            *(undefined8 *)(this_00 + 0xb10) = local_a8;
            *(undefined8 *)(this_00 + 0xb18) = uStack_a0;
            *(undefined8 *)(this_00 + 0xb20) = local_98;
            *(undefined8 *)(this_00 + 0xb28) = uStack_90;
            *(undefined8 *)(this_00 + 0xb30) = local_88;
            *(undefined8 *)(this_00 + 0xb38) = uStack_80;
            _update_cursor_transform(this_00);
            _update_selection_transform(this_00);
          }
        }
      }
      else if (in_ESI == 10) {
        plVar5 = *(long **)(this_00 + 0xd80);
        pcVar1 = *(code **)(*plVar5 + 0x108);
        create_custom_callable_function_pointer<GridMapEditor,int>
                  ((GridMapEditor *)local_b8,(char *)this_00,
                   (_func_void_int *)"&GridMapEditor::_item_selected_cbk");
        (*pcVar1)(plVar5,SceneStringNames::singleton + 0x260,(GridMapEditor *)local_b8,0);
        iVar9 = 0;
        Callable::~Callable((Callable *)local_b8);
        do {
          plVar5 = (long *)RenderingServer::get_singleton();
          lVar7 = (long)iVar9;
          uVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
          *(undefined8 *)(this_00 + (lVar7 + 0x172) * 8) = uVar6;
          plVar5 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar5 + 0xd10);
          if (*(long *)(this_00 + 0x240) == 0) goto GridMapEditor__notification;
          Viewport::get_world_3d();
          uVar6 = World3D::get_scenario();
          uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this_00 + (lVar7 + 0x172) * 8),uVar6);
          *(undefined8 *)(this_00 + (lVar7 + 0x174) * 8 + 8) = uVar6;
          if (local_b8[0] != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            pOVar3 = local_b8[0];
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_b8[0]);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0xd30))
                    (plVar5,*(undefined8 *)(this_00 + lVar7 * 8 + 0xba8),0x1000000);
          plVar5 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar5 + 0xd10);
          if (*(long *)(this_00 + 0x240) == 0) goto GridMapEditor__notification;
          Viewport::get_world_3d();
          uVar6 = World3D::get_scenario();
          uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this_00 + lVar7 * 8 + 0xbe0),uVar6);
          *(undefined8 *)(this_00 + (lVar7 + 0x17e) * 8 + 8) = uVar6;
          if (local_b8[0] != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            pOVar3 = local_b8[0];
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_b8[0]);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          plVar5 = (long *)RenderingServer::get_singleton();
          iVar9 = iVar9 + 1;
          (**(code **)(*plVar5 + 0xd30))
                    (plVar5,*(undefined8 *)(this_00 + lVar7 * 8 + 0xbf8),0x1000000);
        } while (iVar9 != 3);
        plVar5 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar5 + 0xd10);
        if (*(long *)(this_00 + 0x240) != 0) {
          Viewport::get_world_3d();
          uVar6 = World3D::get_scenario();
          uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this_00 + 0xbc0),uVar6);
          *(undefined8 *)(this_00 + 0xbc8) = uVar6;
          Ref<World3D>::unref((Ref<World3D> *)local_b8);
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0xd30))(plVar5,*(undefined8 *)(this_00 + 0xbc8),0x1000000);
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0xd70))(plVar5,*(undefined8 *)(this_00 + 0xbc8),0);
          plVar5 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar5 + 0xd10);
          if (*(long *)(this_00 + 0x240) != 0) {
            Viewport::get_world_3d();
            uVar6 = World3D::get_scenario();
            uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this_00 + 0xbd0),uVar6);
            *(undefined8 *)(this_00 + 0xbd8) = uVar6;
            Ref<World3D>::unref((Ref<World3D> *)local_b8);
            plVar5 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar5 + 0xd30))(plVar5,*(undefined8 *)(this_00 + 0xbd8),0x1000000);
            plVar5 = (long *)RenderingServer::get_singleton();
            pcVar1 = *(code **)(*plVar5 + 0xd10);
            if (*(long *)(this_00 + 0x240) != 0) {
              Viewport::get_world_3d();
              uVar6 = World3D::get_scenario();
              uVar6 = (*pcVar1)(plVar5,*(undefined8 *)(this_00 + 0xc10),uVar6);
              *(undefined8 *)(this_00 + 0xc18) = uVar6;
              Ref<World3D>::unref((Ref<World3D> *)local_b8);
              plVar5 = (long *)RenderingServer::get_singleton();
              (**(code **)(*plVar5 + 0xd30))(plVar5,*(undefined8 *)(this_00 + 0xc18),0x1000000);
              _update_selection_transform(this_00);
              _update_paste_indicator(this_00);
              if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010a4c7;
              goto LAB_0010a07e;
            }
          }
        }
GridMapEditor__notification:
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else if (in_ESI == 0x7e1) {
      if (*(int *)(this_00 + 0xa10) == 2) {
        local_c8 = (Resource *)0x0;
        this = (Resource *)operator_new(0x280,"");
        Resource::Resource(this);
        this[0x254] = (Resource)0x0;
        *(undefined2 *)(this + 0x244) = 0;
        *(undefined4 *)(this + 0x240) = 0;
        *(undefined8 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x250) = 0;
        *(code **)this = Transform3D::operator!=;
        *(undefined8 *)(this + 600) = 0;
        *(undefined8 *)(this + 0x260) = 0;
        *(undefined8 *)(this + 0x268) = 0;
        *(undefined8 *)(this + 0x270) = 0x3f800000;
        this[0x278] = (Resource)0x0;
        postinitialize_handler((Object *)this);
        local_b8[0] = (Object *)0x0;
        local_c0 = this;
        cVar4 = RefCounted::init_ref();
        if (cVar4 == '\0') {
          local_c0 = (Resource *)0x0;
          this = (Resource *)0x0;
          Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)local_b8);
        }
        else {
          Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)local_b8);
          local_b8[0] = (Object *)0x0;
          local_c8 = this;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_c8 = (Resource *)0x0;
            this = (Resource *)0x0;
          }
          Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)local_b8);
        }
        Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_c0);
        InputEventMouseButton::set_button_index(this,1);
        local_c0 = (Resource *)0x0;
        lVar7 = __dynamic_cast(this,&Object::typeinfo,&InputEvent::typeinfo,0);
        if (lVar7 != 0) {
          local_b8[0] = (Object *)0x0;
          local_c0 = (Resource *)lVar7;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_c0 = (Resource *)0x0;
          }
          Ref<InputEvent>::unref((Ref<InputEvent> *)local_b8);
        }
        if (*(long *)(this_00 + 0xb00) != 0) {
          forward_spatial_input_event(this_00,(Camera3D *)0x0,(Ref *)&local_c0);
        }
        Ref<InputEvent>::unref((Ref<InputEvent> *)&local_c0);
        Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_c8);
      }
    }
    else if (in_ESI == 10000) {
      pCVar2 = *(Color **)(this_00 + 0xc58);
      local_b8[0] = (Object *)0x0;
      String::parse_latin1((String *)local_b8,"editors/3d_gizmos/gizmo_colors/gridmap_grid");
      _EDITOR_GET((String *)local_78);
      local_a8 = Variant::operator_cast_to_Color((Variant *)local_78);
      BaseMaterial3D::set_albedo(pCVar2);
      if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_palette(this_00);
        return;
      }
      goto LAB_0010a4c7;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010a4c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::set_selected_palette_item(int) const */

void __thiscall
GridMapEditorPlugin::set_selected_palette_item(GridMapEditorPlugin *this,int param_1)

{
  long *plVar1;
  GridMapEditor *this_00;
  long lVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  Object *local_60;
  Object *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x660) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_selected_palette_item",
                       "modules/gridmap/editor/grid_map_editor_plugin.cpp",0x742,
                       "Parameter \"grid_map_editor\" is null.",0,0);
      return;
    }
  }
  else {
    if (*(long *)(*(long *)(this + 0x660) + 0xb00) != 0) {
      GridMap::get_mesh_library();
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)local_58 + 0x140))(local_58);
            Memory::free_static(local_58,false);
          }
        }
        if (param_1 < -1) {
          param_1 = -1;
        }
        else {
          GridMap::get_mesh_library();
          MeshLibrary::get_item_list();
          lVar2 = local_50;
          if (local_50 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(local_50 + -8);
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if (local_60 != (Object *)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              cVar3 = predelete_handler(local_60);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)local_60 + 0x140))();
                Memory::free_static(local_60,false);
              }
            }
          }
          if (lVar4 <= param_1) {
            GridMap::get_mesh_library();
            MeshLibrary::get_item_list();
            lVar2 = local_50;
            if (local_50 == 0) {
              param_1 = -1;
            }
            else {
              param_1 = *(int *)(local_50 + -8) + -1;
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)&local_60);
          }
        }
        this_00 = *(GridMapEditor **)(this + 0x660);
        if (*(int *)(this_00 + 0xd6c) != param_1) {
          *(int *)(this_00 + 0xd6c) = param_1;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            GridMapEditor::update_palette(this_00);
            return;
          }
          goto LAB_0010a822;
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010a822:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_bind_methods() */

void GridMapEditor::_bind_methods(void)

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
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<GridMapEditor>(_configure);
  StringName::StringName((StringName *)local_78,"_configure",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
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
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<GridMapEditor,bool,Vector3_const&,Vector3_const&>(_set_selection);
  StringName::StringName((StringName *)local_78,"_set_selection",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
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
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::~GridMapEditor() */

void __thiscall GridMapEditor::~GridMapEditor(GridMapEditor *this)

{
  void *pvVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_00123e10;
  lVar5 = RenderingServer::get_singleton();
  if (lVar5 == 0) {
    _err_print_error("~GridMapEditor","modules/gridmap/editor/grid_map_editor_plugin.cpp",0x6c3,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc80));
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc78));
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc70));
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc68));
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc60));
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)(this + 0xc58));
    plVar6 = *(long **)(this + 0xc20);
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) {
          if ((int)plVar6[2] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010b2e7;
          }
          break;
        }
        if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(this + 0xc20);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
    }
LAB_0010b2e7:
    Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)(this + 0xb08));
    plVar6 = *(long **)(this + 0xaf8);
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) {
          if ((int)plVar6[2] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010b367;
          }
          break;
        }
        if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(this + 0xaf8);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
    }
LAB_0010b367:
    if ((*(long *)(this + 0xa48) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar3 = *(Object **)(this + 0xa48);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    plVar6 = *(long **)(this + 0xa40);
    if (plVar6 == (long *)0x0) goto LAB_0010ad7b;
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) goto LAB_0010ae68;
      if (plVar6 == *(long **)((long)pvVar1 + 0x18)) {
        lVar5 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xa40);
    } while ((int)plVar6[2] != 0);
  }
  else {
    lVar5 = 0;
    _clear_clipboard_data(this);
    do {
      iVar7 = (int)lVar5;
      if (*(long *)(this + lVar5 * 8 + 0xb90) != 0) {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + (long)iVar7 * 8 + 0xb90));
      }
      if (*(long *)(this + lVar5 * 8 + 0xba8) != 0) {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + (long)iVar7 * 8 + 0xba8));
      }
      if (*(long *)(this + lVar5 * 8 + 0xbf8) != 0) {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + (long)iVar7 * 8 + 0xbf8));
      }
      if (*(long *)(this + lVar5 * 8 + 0xbe0) != 0) {
        plVar6 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + (long)iVar7 * 8 + 0xbe0));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    plVar6 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + 0xbc0));
    if (*(long *)(this + 0xbc8) != 0) {
      plVar6 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + 0xbc8));
    }
    plVar6 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + 0xbd0));
    if (*(long *)(this + 0xbd8) != 0) {
      plVar6 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar6 + 0x11b0))(plVar6,*(undefined8 *)(this + 0xbd8));
    }
    plVar6 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar6 + 0x11b0))(plVar6);
    if (*(long *)(this + 0xc18) != 0) {
      plVar6 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar6 + 0x11b0))(plVar6);
    }
    if ((*(long *)(this + 0xc80) == 0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) {
LAB_0010ab81:
      if (*(long *)(this + 0xc78) == 0) goto LAB_0010ab9a;
LAB_0010ab8d:
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010ab9a;
      pOVar3 = *(Object **)(this + 0xc78);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') goto LAB_0010ab9a;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (*(long *)(this + 0xc70) != 0) goto LAB_0010aba6;
LAB_0010abb3:
      if (*(long *)(this + 0xc68) == 0) goto LAB_0010abcc;
LAB_0010abbf:
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010abcc;
      pOVar3 = *(Object **)(this + 0xc68);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') goto LAB_0010abcc;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (*(long *)(this + 0xc60) != 0) goto LAB_0010abd8;
LAB_0010abe5:
      lVar5 = *(long *)(this + 0xc58);
    }
    else {
      pOVar3 = *(Object **)(this + 0xc80);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') goto LAB_0010ab81;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (*(long *)(this + 0xc78) != 0) goto LAB_0010ab8d;
LAB_0010ab9a:
      if (*(long *)(this + 0xc70) == 0) goto LAB_0010abb3;
LAB_0010aba6:
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010abb3;
      pOVar3 = *(Object **)(this + 0xc70);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') goto LAB_0010abb3;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (*(long *)(this + 0xc68) != 0) goto LAB_0010abbf;
LAB_0010abcc:
      if (*(long *)(this + 0xc60) == 0) goto LAB_0010abe5;
LAB_0010abd8:
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010abe5;
      pOVar3 = *(Object **)(this + 0xc60);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') goto LAB_0010abe5;
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      lVar5 = *(long *)(this + 0xc58);
    }
    if ((lVar5 != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar3 = *(Object **)(this + 0xc58);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    plVar6 = *(long **)(this + 0xc20);
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) {
          if ((int)plVar6[2] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010ac72;
          }
          break;
        }
        if (plVar6 == *(long **)((long)pvVar1 + 0x30)) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(this + 0xc20);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
    }
LAB_0010ac72:
    Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)(this + 0xb08));
    plVar6 = *(long **)(this + 0xaf8);
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) {
          if ((int)plVar6[2] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_0010acf0;
          }
          break;
        }
        if (plVar6 == *(long **)((long)pvVar1 + 0x30)) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(this + 0xaf8);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
    }
LAB_0010acf0:
    if ((*(long *)(this + 0xa48) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar3 = *(Object **)(this + 0xa48);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    plVar6 = *(long **)(this + 0xa40);
    if (plVar6 == (long *)0x0) goto LAB_0010ad7b;
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) goto LAB_0010ae68;
      if (plVar6 == *(long **)((long)pvVar1 + 0x18)) {
        lVar5 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xa40);
    } while ((int)plVar6[2] != 0);
  }
  goto LAB_0010ad71;
LAB_0010ae68:
  if ((int)plVar6[2] != 0) {
    _err_print_error("~List","./core/templates/list.h",0x316,
                     "Condition \"_data->size_cache\" is true.",0,0);
    goto LAB_0010ad7b;
  }
LAB_0010ad71:
  Memory::free_static(plVar6,false);
LAB_0010ad7b:
  bVar8 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if ((bVar8) &&
     (((*(long *)(this + 0x9e8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x9d0) != 0)))) {
    StringName::unref();
  }
  Control::~Control((Control *)this);
  return;
}



/* GridMapEditor::~GridMapEditor() */

void __thiscall GridMapEditor::~GridMapEditor(GridMapEditor *this)

{
  ~GridMapEditor(this);
  operator_delete(this,0xd90);
  return;
}



/* GridMapEditorPlugin::_bind_methods() */

void GridMapEditorPlugin::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_98 [2];
  long *local_88;
  char *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_98,(char ***)"get_current_grid_map",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,GridMap*>(get_current_grid_map);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  auStack_50._0_8_ = &puStack_70;
  local_78 = "begin";
  puStack_70 = &_LC171;
  local_68 = 0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"set_selection",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,Vector3i_const&,Vector3i_const&>(set_selection);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"clear_selection",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin>(clear_selection);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"get_selection",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,AABB>(get_selection);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"has_selection",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,bool>(has_selection);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"get_selected_cells",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,Array>(get_selected_cells);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_78 = "item";
  puStack_70 = (undefined *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"set_selected_palette_item",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,int>(set_selected_palette_item);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"get_selected_palette_item",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GridMapEditorPlugin,int>(get_selected_palette_item);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
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
  __n = lVar1 * 0xc;
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



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::GridMapEditor() */

void __thiscall GridMapEditor::GridMapEditor(GridMapEditor *this)

{
  List<BaseButton*,DefaultAllocator> *this_00;
  uint uVar1;
  code *pcVar2;
  Object *pOVar3;
  Vector2 *pVVar4;
  Color *pCVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  MenuButton *this_01;
  String *pSVar10;
  Ref *pRVar11;
  undefined8 uVar12;
  ConfirmationDialog *this_02;
  BoxContainer *pBVar13;
  SpinBox *pSVar14;
  long *plVar15;
  ButtonGroup *this_03;
  Button *pBVar16;
  VSeparator *pVVar17;
  Control *this_04;
  StringName *pSVar18;
  LineEdit *this_05;
  CallableCustom *this_06;
  EditorZoomWidget *this_07;
  ItemList *this_08;
  Label *this_09;
  long lVar19;
  Variant *pVVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  Vector3 *pVVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined1 *puVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  CowData<char32_t> local_1b8 [8];
  String local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  CowData<char32_t> local_198 [8];
  String local_190 [8];
  undefined8 local_188;
  Ref<Shortcut> local_180 [8];
  long local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [16];
  undefined8 local_90 [2];
  undefined8 local_80;
  ulong local_78;
  float afStack_70 [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  auVar36 = ZEXT416((uint)_LC36);
  *(undefined ***)this = &PTR__initialize_classv_00123e10;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb10) = auVar36;
  *(undefined1 (*) [16])(this + 0xb20) = auVar36;
  *(undefined1 (*) [16])(this + 0xb40) = auVar36;
  *(undefined1 (*) [16])(this + 0xb50) = auVar36;
  this[0xa0c] = (GridMapEditor)0x1;
  *(undefined4 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined4 *)(this + 0xb30) = 0x3f800000;
  *(undefined8 *)(this + 0xb34) = 0;
  *(undefined4 *)(this + 0xb3c) = 0;
  *(undefined4 *)(this + 0xb60) = 0x3f800000;
  *(undefined8 *)(this + 0xb64) = 0;
  *(undefined4 *)(this + 0xb6c) = 0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined4 *)(this + 0xb88) = 0;
  uVar12 = _LC131;
  uVar23 = __LC185;
  *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xba0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xbf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc10) = (undefined1  [16])0x0;
  *(ulong *)(this + 0xc28) = uVar23;
  *(undefined8 *)(this + 0xc30) = uVar12;
  *(ulong *)(this + 0xc38) = uVar23;
  *(undefined8 *)(this + 0xc40) = uVar12;
  *(ulong *)(this + 0xc48) = uVar23;
  *(undefined8 *)(this + 0xc50) = uVar12;
  *(undefined1 (*) [16])(this + 0xc58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc78) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xc20) = 0;
  this[0xc88] = (GridMapEditor)0x0;
  *(undefined8 *)(this + 0xc8c) = 0;
  *(undefined4 *)(this + 0xc94) = 0;
  *(undefined8 *)(this + 0xc98) = 0;
  *(undefined4 *)(this + 0xca0) = 0;
  *(undefined8 *)(this + 0xca4) = 0;
  *(undefined4 *)(this + 0xcac) = 0;
  *(undefined8 *)(this + 0xcb0) = 0;
  *(undefined4 *)(this + 0xcb8) = 0;
  this[0xcbc] = (GridMapEditor)0x0;
  *(undefined8 *)(this + 0xcc0) = 0;
  *(undefined4 *)(this + 0xcc8) = 0;
  *(undefined8 *)(this + 0xccc) = 0;
  uVar12 = _LC186;
  *(undefined4 *)(this + 0xcd4) = 0;
  *(undefined8 *)(this + 0xd68) = uVar12;
  *(undefined8 *)(this + 0xcd8) = 0;
  *(undefined4 *)(this + 0xce0) = 0;
  *(undefined8 *)(this + 0xce4) = 0;
  *(undefined4 *)(this + 0xcec) = 0;
  this[0xcf0] = (GridMapEditor)0x0;
  *(undefined8 *)(this + 0xcf4) = 0;
  *(undefined4 *)(this + 0xcfc) = 0;
  *(undefined8 *)(this + 0xd00) = 0;
  *(undefined4 *)(this + 0xd08) = 0;
  *(undefined8 *)(this + 0xd0c) = 0;
  *(undefined4 *)(this + 0xd14) = 0;
  *(undefined8 *)(this + 0xd18) = 0;
  *(undefined4 *)(this + 0xd20) = 0;
  *(undefined4 *)(this + 0xd24) = 0;
  this[0xd28] = (GridMapEditor)0x0;
  *(undefined4 *)(this + 0xd4c) = 0x3f800000;
  *(undefined8 *)(this + 0xd50) = 0;
  *(undefined4 *)(this + 0xd58) = 0;
  *(undefined8 *)(this + 0xd5c) = 0;
  *(undefined4 *)(this + 0xd64) = 0;
  *(undefined4 *)(this + 0xd70) = 0;
  *(undefined8 *)(this + 0xd88) = 0;
  *(undefined1 (*) [16])(this + 0xd2c) = auVar36;
  *(undefined1 (*) [16])(this + 0xd3c) = auVar36;
  *(undefined1 (*) [16])(this + 0xd78) = (undefined1  [16])0x0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Previous Floor");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/previous_floor");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x31,1);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Next Floor");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/next_floor");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x33,1);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Edit X Axis");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/edit_x_axis");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x200005a,1);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Edit Y Axis");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/edit_y_axis");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x2000058,1);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Edit Z Axis");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/edit_z_axis");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x2000043,1);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Keep Selection");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/keep_selected");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0,0);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Clear Rotation");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/clear_rotation");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0,0);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_168 = 0;
  MenuButton::MenuButton(this_01,(String *)&local_168);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0xa20) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa20));
  pSVar10 = (String *)MenuButton::get_popup();
  local_168 = 0;
  iVar25 = (int)(String *)&local_168;
  PopupMenu::add_separator(pSVar10,iVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pRVar11 = (Ref *)MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/edit_x_axis");
  ED_GET_SHORTCUT((String *)&local_178);
  iVar21 = (int)(String *)&local_178;
  PopupMenu::add_radio_check_shortcut(pRVar11,iVar21,true);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pRVar11 = (Ref *)MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/edit_y_axis");
  ED_GET_SHORTCUT((String *)&local_178);
  PopupMenu::add_radio_check_shortcut(pRVar11,iVar21,true);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pRVar11 = (Ref *)MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/edit_z_axis");
  ED_GET_SHORTCUT((String *)&local_178);
  PopupMenu::add_radio_check_shortcut(pRVar11,iVar21,true);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  iVar8 = MenuButton::get_popup();
  iVar9 = MenuButton::get_popup();
  bVar6 = (bool)PopupMenu::get_item_index(iVar9);
  PopupMenu::set_item_checked(iVar8,bVar6);
  pSVar10 = (String *)MenuButton::get_popup();
  local_168 = 0;
  PopupMenu::add_separator(pSVar10,iVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pRVar11 = (Ref *)MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/clear_rotation");
  ED_GET_SHORTCUT((String *)&local_178);
  PopupMenu::add_shortcut(pRVar11,iVar21,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pRVar11 = (Ref *)MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/keep_selected");
  ED_GET_SHORTCUT((String *)&local_178);
  PopupMenu::add_check_shortcut(pRVar11,iVar21,true);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  iVar8 = MenuButton::get_popup();
  iVar9 = MenuButton::get_popup();
  bVar6 = (bool)PopupMenu::get_item_index(iVar9);
  PopupMenu::set_item_checked(iVar8,bVar6);
  pSVar10 = (String *)MenuButton::get_popup();
  local_168 = 0;
  PopupMenu::add_separator(pSVar10,iVar25);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  uVar12 = MenuButton::get_popup();
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"Settings...");
  TTR((String *)local_180,(String *)&local_178);
  PopupMenu::add_item(uVar12,local_180,0x12,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  this_02 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(ConfirmationDialog **)(this + 0xad8) = this_02;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"GridMap Settings");
  TTR((String *)local_180,(String *)&local_178);
  Window::set_title((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Node::add_child(this,*(undefined8 *)(this + 0xad8),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,true);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00123a98;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0xae0) = pBVar13;
  fVar31 = (float)EditorScale::get_scale();
  local_78 = CONCAT44(fVar31 * _LC201._4_4_,fVar31 * (float)_LC201);
  Control::set_custom_minimum_size((Vector2 *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0xad8),*(undefined8 *)(this + 0xae0),0,0);
  pSVar14 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar14);
  postinitialize_handler((Object *)pSVar14);
  *(SpinBox **)(this + 0xae8) = pSVar14;
  Range::set_max(_LC202);
  Range::set_min(_LC203);
  Range::set_step(_LC128);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"editors/grid_map/pick_distance");
  _EDITOR_GET((String *)&local_78);
  dVar34 = Variant::operator_cast_to_double((Variant *)&local_78);
  Range::set_value(dVar34);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pSVar10 = *(String **)(this + 0xae0);
  uVar12 = *(undefined8 *)(this + 0xae8);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"Pick Distance:");
  TTR((String *)local_180,(String *)&local_178);
  VBoxContainer::add_margin_child(pSVar10,(Control *)local_180,SUB81(uVar12,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x240,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00123720;
  pBVar13[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar13);
  *(BoxContainer **)(this + 0xa38) = pBVar13;
  Node::add_child(this,pBVar13,0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00123720;
  pBVar13[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0xa38),pBVar13,0,0);
  this_03 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_03);
  postinitialize_handler((Object *)this_03);
  cVar7 = RefCounted::init_ref();
  pOVar3 = *(Object **)(this + 0xa48);
  if (cVar7 == '\0') {
    if (pOVar3 == (Object *)0x0) goto LAB_0010ce37;
    *(undefined8 *)(this + 0xa48) = 0;
    cVar7 = RefCounted::unreference();
    if (cVar7 == '\0') goto LAB_0010ce37;
    this_03 = (ButtonGroup *)0x0;
    cVar7 = predelete_handler(pOVar3);
    if (cVar7 == '\0') goto LAB_0010ce37;
LAB_001100ca:
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    if (this_03 == (ButtonGroup *)0x0) goto LAB_0010ce37;
  }
  else if (pOVar3 != (Object *)this_03) {
    *(ButtonGroup **)(this + 0xa48) = this_03;
    cVar7 = RefCounted::reference();
    if (cVar7 == '\0') {
      *(undefined8 *)(this + 0xa48) = 0;
      if (pOVar3 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
joined_r0x001100ad:
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar3), cVar7 != '\0'))
        goto LAB_001100ca;
      }
    }
    else if (pOVar3 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      goto joined_r0x001100ad;
    }
  }
  cVar7 = RefCounted::unreference();
  if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)this_03), cVar7 != '\0')) {
    (**(code **)(*(long *)this_03 + 0x140))(this_03);
    Memory::free_static(this_03,false);
  }
LAB_0010ce37:
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa50) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa50));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa50),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa50));
  pRVar11 = *(Ref **)(this + 0xa50);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Transform");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/transform_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x54,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_on_tool_mode_changed");
  Callable::unbind(iVar21);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_178,0);
  this_00 = (List<BaseButton*,DefaultAllocator> *)(this + 0xa40);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa50),0,0);
  local_168 = *(long *)(this + 0xa50);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pVVar17 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar17);
  postinitialize_handler((Object *)pVVar17);
  Node::add_child(pBVar13,pVVar17,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa58) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa58));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa58),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa58));
  pRVar11 = *(Ref **)(this + 0xa58);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Selection");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/selection_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x51,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_on_tool_mode_changed");
  Callable::unbind(iVar21);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa58),0,0);
  local_168 = *(long *)(this + 0xa58);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa60) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa60));
  pRVar11 = *(Ref **)(this + 0xa60);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Erase");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/erase_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x57,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa60),0,0);
  plVar15 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_on_tool_mode_changed");
  Callable::unbind(iVar21);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  local_168 = *(long *)(this + 0xa60);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa68) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa68));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa68),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa68));
  pRVar11 = *(Ref **)(this + 0xa68);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Paint");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/paint_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x45,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_on_tool_mode_changed");
  Callable::unbind(iVar21);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_178);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa68),0,0);
  local_168 = *(long *)(this + 0xa68);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa70) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa70));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa70),0));
  BaseButton::set_button_group(*(Ref **)(this + 0xa70));
  pRVar11 = *(Ref **)(this + 0xa70);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Pick");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/pick_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x52,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_on_tool_mode_changed");
  Callable::unbind(iVar21);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x248,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa70),0,0);
  local_168 = *(long *)(this + 0xa70);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pVVar17 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar17);
  postinitialize_handler((Object *)pVVar17);
  Node::add_child(*(undefined8 *)(this + 0xa38),pVVar17,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00123720;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0xa38),pBVar13,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa78) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa78));
  pRVar11 = *(Ref **)(this + 0xa78);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Fill");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/fill_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x5a,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,0x11);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa78),0,0);
  local_168 = *(long *)(this + 0xa78);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa80) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa80));
  pRVar11 = *(Ref **)(this + 0xa80);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Move");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/move_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x58,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,0xf);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa80),0,0);
  local_168 = *(long *)(this + 0xa80);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa88) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa88));
  pRVar11 = *(Ref **)(this + 0xa88);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Duplicate");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/duplicate_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x43,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,0xe);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa88),0,0);
  local_168 = *(long *)(this + 0xa88);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa90) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa90));
  pRVar11 = *(Ref **)(this + 0xa90);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Delete");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/delete_tool");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x56,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa90);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,0x10);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa90),0,0);
  local_168 = *(long *)(this + 0xa90);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pVVar17 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar17);
  postinitialize_handler((Object *)pVVar17);
  Node::add_child(*(undefined8 *)(this + 0xa38),pVVar17,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00123720;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(*(undefined8 *)(this + 0xa38),pBVar13,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa98) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa98));
  pRVar11 = *(Ref **)(this + 0xa98);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Cursor Rotate X");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/cursor_rotate_x");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x41,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,7);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xa98),0,0);
  local_168 = *(long *)(this + 0xa98);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xaa0) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xaa0));
  pRVar11 = *(Ref **)(this + 0xaa0);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Cursor Rotate Y");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/cursor_rotate_y");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x53,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xaa0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,6);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xaa0),0,0);
  local_168 = *(long *)(this + 0xaa0);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xaa8) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xaa8));
  pRVar11 = *(Ref **)(this + 0xaa8);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"Cursor Rotate Z");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"grid_map/cursor_rotate_z");
  ED_SHORTCUT(local_180,(String *)&local_178,(String *)&local_168,0x44,1);
  BaseButton::set_shortcut(pRVar11);
  Ref<Shortcut>::unref(local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  plVar15 = *(long **)(this + 0xaa8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_menu_option");
  Callable::bind<GridMapEditor::Menu>((String *)&local_178,(String *)&local_168,8);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xaa8),0,0);
  local_168 = *(long *)(this + 0xaa8);
  List<BaseButton*,DefaultAllocator>::push_back(this_00,(BaseButton **)&local_168);
  this_04 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_04);
  postinitialize_handler((Object *)this_04);
  Control::set_mouse_filter(this_04,1);
  Control::set_h_size_flags(this_04,3);
  Node::add_child(*(undefined8 *)(this + 0xa38),this_04,0,0);
  pSVar14 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(pSVar14);
  postinitialize_handler((Object *)pSVar14);
  *(SpinBox **)(this + 0xa28) = pSVar14;
  Range::set_min(_LC231);
  Range::set_max(_LC232);
  Range::set_step(_LC128);
  pSVar10 = *(String **)(this + 0xa28);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"grid_map/next_floor");
  ED_GET_SHORTCUT((String *)&local_178);
  Shortcut::get_as_text();
  local_188 = 0;
  String::parse_latin1((String *)&local_188,"grid_map/previous_floor");
  ED_GET_SHORTCUT(local_190);
  Shortcut::get_as_text();
  local_1a0 = 0;
  String::parse_latin1((String *)&local_1a0,"");
  local_1a8 = 0;
  String::parse_latin1
            ((String *)&local_1a8,"Change Grid Floor:\nPrevious Plane (%s)\nNext Plane (%s)");
  TTR(local_1b0,(String *)&local_1a8);
  vformat<String,String>(local_1b8,local_1b0,local_198,local_180);
  Control::set_tooltip_text(pSVar10);
  CowData<char32_t>::_unref(local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref(local_198);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa28),0,0);
  pSVar18 = (StringName *)SpinBox::get_line_edit();
  StringName::StringName((StringName *)&local_168,"minimum_character_width",false);
  Control::add_theme_constant_override(pSVar18,iVar25);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  bVar6 = (bool)SpinBox::get_line_edit();
  LineEdit::set_context_menu_enabled(bVar6);
  plVar15 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,float>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_float *)"&GridMapEditor::_floor_changed");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x280,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  plVar15 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_floor_mouse_exited");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0xc0,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  plVar15 = (long *)SpinBox::get_line_edit();
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void *)"&GridMapEditor::_floor_mouse_exited");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0xc0,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  this_05 = (LineEdit *)operator_new(0xbb0,"");
  local_168 = 0;
  LineEdit::LineEdit(this_05,(String *)&local_168);
  postinitialize_handler((Object *)this_05);
  *(LineEdit **)(this + 0xac8) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pSVar18 = *(StringName **)(this + 0xac8);
  StringName::StringName((StringName *)&local_168,"minimum_character_width",false);
  Control::add_theme_constant_override(pSVar18,iVar25);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  uVar12 = *(undefined8 *)(this + 0xac8);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"Filter Meshes");
  TTR((String *)local_180,(String *)&local_178);
  LineEdit::set_placeholder(uVar12,local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xac8),0));
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xac8),0,0);
  plVar15 = *(long **)(this + 0xac8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  this_06 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_06);
  *(GridMapEditor **)(this_06 + 0x28) = this;
  *(undefined1 (*) [16])(this_06 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_06 + 0x20) = &_LC80;
  *(undefined ***)this_06 = &PTR_hash_00124670;
  *(undefined8 *)(this_06 + 0x40) = 0;
  uVar12 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_06 + 0x10) = 0;
  *(undefined8 *)(this_06 + 0x30) = uVar12;
  *(code **)(this_06 + 0x38) = _text_changed;
  CallableCustomMethodPointerBase::_setup((uint *)this_06,(int)this_06 + 0x28);
  *(char **)(this_06 + 0x20) = "GridMapEditor::_text_changed";
  Callable::Callable((Callable *)&local_168,this_06);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x270,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  plVar15 = *(long **)(this + 0xac8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,Ref<InputEvent>const&>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_Ref_ptr *)"&GridMapEditor::_sbox_input");
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x28,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  this_07 = (EditorZoomWidget *)operator_new(0xa38,"");
  EditorZoomWidget::EditorZoomWidget(this_07);
  postinitialize_handler((Object *)this_07);
  *(EditorZoomWidget **)(this + 0xab0) = this_07;
  uVar22 = 0;
  Node::add_child(*(undefined8 *)(this + 0xa38),this_07,0,0);
  EditorZoomWidget::setup_zoom_limits(_LC136,_LC240);
  EditorZoomWidget::set_zoom(_LC36);
  uVar12 = *(undefined8 *)(this + 0xab0);
  fVar31 = (float)EditorScale::get_scale();
  Control::set_anchors_and_offsets_preset(uVar12,0,0,CONCAT44(uVar22,(int)(fVar31 + fVar31)));
  plVar15 = *(long **)(this + 0xab0);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,float>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_float *)"&GridMapEditor::_icon_size_changed");
  StringName::StringName((StringName *)&local_178,"zoom_changed",false);
  (*pcVar2)(plVar15,(String *)&local_178,(String *)&local_168,0);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_168);
  EditorZoomWidget::set_shortcut_context(*(Node **)(this + 0xab0));
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xab8) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xab8));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xab8),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab8),0));
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xab8),0,0);
  plVar15 = *(long **)(this + 0xab8);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_set_display_mode");
  Callable::bind<GridMapEditor::DisplayMode>((String *)&local_178,(String *)&local_168,0);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_168 = 0;
  Button::Button(pBVar16,(String *)&local_168);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xac0) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  Control::set_theme_type_variation(*(StringName **)(this + 0xac0));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xac0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xac0),0,0);
  plVar15 = *(long **)(this + 0xac0);
  iVar9 = 3;
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,int>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_int *)"&GridMapEditor::_set_display_mode");
  Callable::bind<GridMapEditor::DisplayMode>((String *)&local_178,(String *)&local_168,1);
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x238,(String *)&local_178,0);
  Callable::~Callable((Callable *)&local_178);
  Callable::~Callable((Callable *)&local_168);
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa20),0,0);
  this_08 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_08);
  postinitialize_handler((Object *)this_08);
  *(ItemList **)(this + 0xd80) = this_08;
  Node::set_auto_translate_mode(this_08,2);
  Node::add_child(this,*(undefined8 *)(this + 0xd80),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xd80),3);
  plVar15 = *(long **)(this + 0xd80);
  pcVar2 = *(code **)(*plVar15 + 0x108);
  create_custom_callable_function_pointer<GridMapEditor,Ref<InputEvent>const&>
            ((GridMapEditor *)&local_168,(char *)this,
             (_func_void_Ref_ptr *)"&GridMapEditor::_mesh_library_palette_input");
  uVar22 = 0;
  (*pcVar2)(plVar15,SceneStringNames::singleton + 0x28,(String *)&local_168,0);
  Callable::~Callable((Callable *)&local_168);
  this_09 = (Label *)operator_new(0xad8,"");
  local_168 = 0;
  Label::Label(this_09,(String *)&local_168);
  postinitialize_handler((Object *)this_09);
  *(Label **)(this + 0xd88) = this_09;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  pSVar10 = *(String **)(this + 0xd88);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"");
  local_178 = 0;
  String::parse_latin1
            ((String *)&local_178,"Give a MeshLibrary resource to this GridMap to use its meshes.");
  TTR((String *)local_180,(String *)&local_178);
  Label::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  iVar8 = 0;
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xd88),1);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xd88),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xd88),3);
  pVVar4 = *(Vector2 **)(this + 0xd88);
  fVar31 = (float)EditorScale::get_scale();
  local_78 = (ulong)(uint)(fVar31 * __LC245);
  Control::set_custom_minimum_size(pVVar4);
  uVar12 = *(undefined8 *)(this + 0xd88);
  fVar31 = (float)EditorScale::get_scale();
  Control::set_anchors_and_offsets_preset(uVar12,0xf,3,CONCAT44(uVar22,(int)(fVar31 * __LC246)));
  Node::add_child(*(undefined8 *)(this + 0xd80),*(undefined8 *)(this + 0xd88),0,0);
  *(undefined8 *)(this + 0xb78) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb70) = 0xffffffff00000001;
  plVar15 = (long *)RenderingServer::get_singleton();
  uVar12 = (**(code **)(*plVar15 + 0x2d0))(plVar15);
  *(undefined8 *)(this + 0xbc0) = uVar12;
  plVar15 = (long *)RenderingServer::get_singleton();
  uVar12 = (**(code **)(*plVar15 + 0x2d0))(plVar15);
  *(undefined8 *)(this + 0xbd0) = uVar12;
  plVar15 = (long *)RenderingServer::get_singleton();
  uVar12 = (**(code **)(*plVar15 + 0x2d0))();
  uVar29 = _LC51;
  fVar32 = _UNK_00124d94;
  fVar31 = _LC50;
  local_170 = 0;
  local_160 = 0;
  local_a8._8_8_ = 0;
  local_90[0] = 0;
  local_80 = 0;
  *(undefined8 *)(this + 0xc10) = uVar12;
  do {
    local_78 = 0;
    uVar28 = 0;
    afStack_70[0] = 0.0;
    afStack_70[1] = 0.0;
    afStack_70[2] = 0.0;
    afStack_70[3] = 0.0;
    afStack_70[4] = 0.0;
    afStack_70[5] = 0.0;
    afStack_70[6] = 0.0;
    afStack_70[7] = 0.0;
    afStack_70[8] = 0.0;
    afStack_70[9] = 0.0;
    do {
      fVar35 = (float)(int)(1 - (uVar28 & 0xfffffffe));
      local_b8 = CONCAT44(fVar35,0x3f800000);
      local_b0 = (float)(int)((uVar28 & 1) * -2 + 1) * fVar35;
      if (iVar8 < 3) {
        puVar27 = (uint *)&local_b8;
        iVar25 = iVar8;
        do {
          uVar1 = *puVar27;
          iVar21 = iVar25 + 1;
          puVar27 = puVar27 + 1;
          *(uint *)((long)&local_78 + ((long)(iVar25 % 3) + (long)(int)uVar28 * 3) * 4) = uVar1;
          iVar25 = iVar21;
        } while (iVar9 != iVar21);
      }
      else {
        puVar27 = (uint *)&local_b8;
        iVar25 = iVar8;
        do {
          uVar1 = *puVar27;
          iVar21 = iVar25 + 1;
          puVar27 = puVar27 + 1;
          *(uint *)((long)&local_78 + ((long)(iVar25 % 3) + (long)(int)(3 - uVar28) * 3) * 4) =
               uVar1 ^ uVar29;
          iVar25 = iVar21;
        } while (iVar9 != iVar21);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != 4);
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 1;
    fVar35 = _LC50 * afStack_70[0] + _LC50;
    uVar12 = CONCAT44((float)(local_78 >> 0x20) * fVar32 + fVar32,(float)local_78 * fVar31 + fVar31)
    ;
    local_158 = uVar12;
    local_150 = fVar35;
    Vector<Vector3>::push_back(uVar12,fVar35,(String *)&local_168);
    local_140 = _LC50 * afStack_70[3] + _LC50;
    local_148 = CONCAT44(afStack_70[2] * _UNK_00124d94 + _UNK_00124d94,afStack_70[1] * _LC50 + _LC50
                        );
    Vector<Vector3>::push_back((String *)&local_168);
    fVar31 = _LC50 * afStack_70[6] + _LC50;
    uVar37 = CONCAT44(SUB84(afStack_70._16_8_,4) * _UNK_00124d94 + _UNK_00124d94,
                      (float)afStack_70._16_8_ * _LC50 + _LC50);
    local_138 = uVar37;
    local_130 = fVar31;
    Vector<Vector3>::push_back(uVar37,fVar31,(String *)&local_168);
    local_128 = uVar37;
    local_120 = fVar31;
    Vector<Vector3>::push_back(uVar37,fVar31,(String *)&local_168);
    local_110 = _LC50 * afStack_70[9] + _LC50;
    local_118 = CONCAT44(SUB84(afStack_70._28_8_,4) * _UNK_00124d94 + _UNK_00124d94,
                         (float)afStack_70._28_8_ * _LC50 + _LC50);
    Vector<Vector3>::push_back((String *)&local_168);
    local_108 = uVar12;
    local_100 = fVar35;
    Vector<Vector3>::push_back(uVar12,fVar35);
    uVar12 = _LC37;
    uVar29 = _LC51;
    fVar31 = _LC50;
    fVar32 = _UNK_00124d94;
  } while (iVar8 != 6);
  uVar29 = 0;
  do {
    pVVar26 = (Vector3 *)(ulong)uVar29;
    uVar29 = uVar29 + 1;
    afStack_70[2] = (float)uVar12;
    afStack_70[3] = (float)((ulong)uVar12 >> 0x20);
    local_78 = __LC185;
    afStack_70[0] = (float)_LC131;
    afStack_70[1] = (float)((ulong)_LC131 >> 0x20);
    local_c8 = 0;
    local_c0 = 0.0;
    local_b8 = 0;
    local_b0 = 0.0;
    AABB::get_edge((int)(String *)&local_78,pVVar26,(Vector3 *)&local_c8);
    Vector<Vector3>::push_back(local_c8,local_c0,(String *)&local_178);
    Vector<Vector3>::push_back(local_b8,local_b0,(String *)&local_178);
  } while (uVar29 != 0xc);
  uVar23 = 1;
  puVar30 = local_a8;
  do {
    local_78 = 0;
    afStack_70[0] = 0.0;
    afStack_70[1] = 0.0;
    afStack_70[2] = 0.0;
    afStack_70[3] = 0.0;
    afStack_70[4] = 0.0;
    afStack_70[5] = 0.0;
    afStack_70[6] = 0.0;
    afStack_70[7] = 0.0;
    afStack_70[8] = 0.0;
    afStack_70[9] = 0.0;
    lVar19 = 0;
    pSVar10 = (String *)&local_78;
    do {
      local_b0 = 0.0;
      local_b8 = 0;
      if ((&GridMapEditor()::orderx)[lVar19] != '\0') {
        *(undefined4 *)
         ((long)&local_b8 + (long)((int)uVar23 + (int)((uVar23 & 0xffffffff) / 3) * -3) * 4) =
             0x3f800000;
      }
      if ((&GridMapEditor()::ordery)[lVar19] != '\0') {
        *(undefined4 *)((long)&local_b8 + (long)(int)(((int)uVar23 + 1U) % 3) * 4) = 0x3f800000;
      }
      lVar19 = lVar19 + 1;
      *(undefined8 *)pSVar10 = local_b8;
      *(float *)(pSVar10 + 8) = local_b0;
      pSVar10 = pSVar10 + 0xc;
    } while (lVar19 != 4);
    uVar29 = 0;
    pSVar10 = (String *)&local_78;
    do {
      uVar12 = *(undefined8 *)pSVar10;
      uVar29 = uVar29 + 1;
      local_b8 = 0;
      fVar31 = *(float *)(pSVar10 + 8);
      pSVar10 = pSVar10 + 0xc;
      local_b0 = 0.0;
      (&uStack_bc)[uVar23] = 0x3c23d70a;
      fVar32 = (float)uVar12;
      fVar35 = (float)((ulong)uVar12 >> 0x20);
      uVar37 = CONCAT44(fVar35 + 0.0,fVar32 + 0.0);
      local_f8 = CONCAT44(fVar35 - 0.0,fVar32 - 0.0);
      local_f0 = fVar31 - 0.0;
      Vector<Vector3>::push_back(local_f8,local_f0,puVar30);
      fVar32 = afStack_70[(ulong)(uVar29 & 3) * 3];
      uVar12 = *(undefined8 *)((String *)&local_78 + (ulong)(uVar29 & 3) * 0xc);
      fVar33 = (float)uVar12;
      fVar35 = (float)((ulong)uVar12 >> 0x20);
      local_e8 = CONCAT44(fVar35 - 0.0,fVar33 - 0.0);
      uVar12 = CONCAT44(fVar35 + 0.0,fVar33 + 0.0);
      local_e0 = fVar32 - 0.0;
      Vector<Vector3>::push_back(local_e8,local_e0,puVar30);
      local_d0 = fVar31 + 0.0;
      local_d8 = uVar37;
      Vector<Vector3>::push_back(uVar37,local_d0,puVar30);
      local_c0 = fVar32 + 0.0;
      local_c8 = uVar12;
      Vector<Vector3>::push_back(uVar12,local_c0,puVar30);
    } while (uVar29 != 4);
    uVar23 = uVar23 + 1;
    puVar30 = puVar30 + 0x10;
  } while (uVar23 != 4);
  Array::Array((Array *)local_190);
  iVar8 = (int)local_190;
  Array::resize(iVar8);
  uVar12 = _LC37;
  *(undefined8 *)(this + 0xc28) = __LC248;
  *(undefined8 *)(this + 0xc30) = uVar12;
  uVar12 = CONCAT44(_UNK_00124e9c,_LC136);
  *(undefined8 *)(this + 0xc38) = __LC249;
  *(undefined8 *)(this + 0xc40) = uVar12;
  uVar12 = _UNK_00124ea8;
  *(undefined8 *)(this + 0xc48) = __LC250;
  *(undefined8 *)(this + 0xc50) = uVar12;
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc60));
  local_78 = *(ulong *)(this + 0xc28);
  afStack_70[1] = 0.2;
  afStack_70[0] = *(float *)(this + 0xc30);
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xc60));
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc60),0);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc60),0x15,1);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xc60),1);
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc68));
  local_78 = *(ulong *)(this + 0xc28);
  afStack_70[0] = *(float *)(this + 0xc30);
  afStack_70[1] = 0.8;
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xc68));
  BaseMaterial3D::set_on_top_of_alpha();
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc68),0);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xc68),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc68),0x15,1);
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc70));
  local_78 = *(ulong *)(this + 0xc28);
  afStack_70[0] = *(float *)(this + 0xc30);
  afStack_70[1] = 0.2;
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xc70));
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc70),0);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc70),0x15,1);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xc70),1);
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc78));
  local_78 = *(ulong *)(this + 0xc28);
  afStack_70[0] = *(float *)(this + 0xc30);
  afStack_70[1] = 0.8;
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xc78));
  BaseMaterial3D::set_on_top_of_alpha();
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc78),0);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xc78),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc78),0x15,1);
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc80));
  local_78 = __LC251;
  afStack_70[0] = (float)_UNK_00124eb8;
  afStack_70[1] = (float)((ulong)_UNK_00124eb8 >> 0x20);
  BaseMaterial3D::set_albedo(*(Color **)(this + 0xc80));
  BaseMaterial3D::set_on_top_of_alpha();
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc80),0);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc80),0x15,1);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_168);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbc0),3,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc60) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbc0),0,uVar12);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_178);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbc0),1,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc68) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbc0),1,uVar12);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_168);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbd0),3,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc70) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbd0),0,uVar12);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_178);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbd0),1,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc78) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xbd0),1,uVar12);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_168);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xc10),3,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc70) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xc10),0,uVar12);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_178);
  pVVar20 = (Variant *)Array::operator[](iVar8);
  Variant::operator=(pVVar20,(Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x318);
  Dictionary::Dictionary((Dictionary *)local_180);
  Array::Array((Array *)&local_188);
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xc10),1,local_190,(String *)&local_188,local_180,0);
  Array::~Array((Array *)&local_188);
  Dictionary::~Dictionary((Dictionary *)local_180);
  plVar15 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar15 + 0x358);
  uVar12 = (**(code **)(**(long **)(this + 0xc78) + 0x1c0))();
  (*pcVar2)(plVar15,*(undefined8 *)(this + 0xc10),1,uVar12);
  lVar19 = 0;
  do {
    Variant::Variant((Variant *)&local_78,(Vector *)(local_a8 + lVar19 * 0x10));
    pSVar10 = (String *)Array::operator[](iVar8);
    if (pSVar10 == (String *)&local_78) {
      lVar24 = (long)(int)local_78;
    }
    else {
      if ((&Variant::needs_deinit)[*(int *)pSVar10] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pSVar10 = 0;
      *(int *)pSVar10 = (int)local_78;
      *(ulong *)(pSVar10 + 8) = CONCAT44(afStack_70[1],afStack_70[0]);
      *(ulong *)(pSVar10 + 0x10) = CONCAT44(afStack_70[3],afStack_70[2]);
      lVar24 = 0;
      local_78 = local_78 & 0xffffffff00000000;
    }
    if ((&Variant::needs_deinit)[lVar24] != '\0') {
      Variant::_clear_internal();
    }
    plVar15 = (long *)RenderingServer::get_singleton();
    lVar24 = (long)(int)lVar19 + 0x17c;
    lVar19 = lVar19 + 1;
    uVar12 = (**(code **)(*plVar15 + 0x2d0))(plVar15);
    *(undefined8 *)(this + lVar24 * 8) = uVar12;
    plVar15 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar15 + 0x318);
    Dictionary::Dictionary((Dictionary *)local_180);
    Array::Array((Array *)&local_188);
    (*pcVar2)(plVar15,*(undefined8 *)(this + lVar24 * 8),1,local_190,(String *)&local_188,local_180,
              0);
    Array::~Array((Array *)&local_188);
    Dictionary::~Dictionary((Dictionary *)local_180);
    plVar15 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar15 + 0x358);
    uVar12 = (**(code **)(**(long **)(this + 0xc80) + 0x1c0))();
    (*pcVar2)(plVar15,*(undefined8 *)(this + lVar24 * 8),0,uVar12);
  } while (lVar19 != 3);
  Array::~Array((Array *)local_190);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
  CowData<Vector3>::_unref((CowData<Vector3> *)local_90);
  CowData<Vector3>::_unref((CowData<Vector3> *)(local_a8 + 8));
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_160);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_170);
  this[0xcbc] = (GridMapEditor)0x0;
  *(undefined8 *)(this + 0xca4) = 0;
  *(undefined4 *)(this + 0xcac) = 0;
  *(undefined8 *)(this + 0xcb0) = 0;
  *(undefined4 *)(this + 0xcb8) = 0;
  *(undefined8 *)(this + 0xc8c) = 0;
  *(undefined4 *)(this + 0xc94) = 0;
  *(undefined8 *)(this + 0xc98) = 0;
  *(undefined4 *)(this + 0xca0) = 0;
  local_78 = 0;
  afStack_70[0] = 0.0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  cVar7 = CanvasItem::is_visible_in_tree();
  if (cVar7 != '\0') {
    _update_selection_transform(this);
  }
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)(this + 0xc58));
  BaseMaterial3D::set_shading_mode(*(undefined8 *)(this + 0xc58),0);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0xc58),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc58),2,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc58),1,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0xc58),0x15,1);
  pCVar5 = *(Color **)(this + 0xc58);
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"editors/3d_gizmos/gizmo_colors/gridmap_grid");
  _EDITOR_GET((String *)&local_78);
  local_a8 = Variant::operator_cast_to_Color((Variant *)&local_78);
  BaseMaterial3D::set_albedo(pCVar5);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::_notification(int) */

void __thiscall GridMapEditorPlugin::_notification(GridMapEditorPlugin *this,int param_1)

{
  Object *pOVar1;
  Vector2 *pVVar2;
  undefined8 uVar3;
  char cVar4;
  GridMapEditor *this_00;
  undefined8 uVar5;
  long in_FS_OFFSET;
  float fVar6;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    this_00 = (GridMapEditor *)operator_new(0xd90,"");
    GridMapEditor::GridMapEditor(this_00);
    postinitialize_handler((Object *)this_00);
    *(GridMapEditor **)(this + 0x660) = this_00;
    Control::set_h_size_flags(this_00,3);
    Control::set_v_size_flags(*(undefined8 *)(this + 0x660),3);
    pVVar2 = *(Vector2 **)(this + 0x660);
    fVar6 = (float)EditorScale::get_scale();
    local_48 = CONCAT44(fVar6 * _LC253._4_4_,fVar6 * (float)_LC253);
    Control::set_custom_minimum_size(pVVar2);
    CanvasItem::hide();
    local_80 = 0;
    uVar5 = *(undefined8 *)(EditorNode::singleton + 0xa40);
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_58 = "Toggle GridMap Bottom Panel";
    local_78 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "bottom_panels/toggle_grid_map_bottom_panel";
    local_70 = 0;
    local_50 = 0x2a;
    String::parse_latin1((StrRange *)&local_70);
    ED_SHORTCUT_AND_COMMAND
              (&local_88,(StrRange *)&local_70,(StrRange *)&local_78,0,(StrRange *)&local_80);
    uVar3 = *(undefined8 *)(this + 0x660);
    local_58 = "";
    local_68 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_60 = 0;
    local_58 = "GridMap";
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_60);
    TTR((String *)&local_58,(String *)&local_60);
    uVar5 = EditorBottomPanel::add_item(uVar5,(String *)&local_58,uVar3,&local_88,0);
    *(undefined8 *)(this + 0x668) = uVar5;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (local_88 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_88);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
  }
  else {
    if (param_1 == 0xb) {
      EditorBottomPanel::remove_item(*(Control **)(EditorNode::singleton + 0xa40));
      pOVar1 = *(Object **)(this + 0x660);
      if (pOVar1 != (Object *)0x0) {
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridMapEditor::_draw_grids(Vector3 const&) */

void __thiscall GridMapEditor::_draw_grids(GridMapEditor *this,Vector3 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  long *plVar7;
  Variant *pVVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  Variant *pVVar12;
  Variant *pVVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong local_1c8;
  float local_1b8;
  uint local_150;
  Array local_130 [8];
  Array local_128 [8];
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined1 local_d4 [12];
  undefined8 local_c8;
  float local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  plVar7 = *(long **)(this + 0xb00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar7 + 0xb8);
  local_c8 = 0;
  local_c0 = 0.0;
  Variant::Variant((Variant *)local_a8,(Vector3 *)&local_c8);
  StringName::StringName((StringName *)&local_120,"_editor_floor_",false);
  (*pcVar2)((Variant *)local_78,plVar7,(StringName *)&local_120,(Variant *)local_a8);
  local_d4 = Variant::operator_cast_to_Vector3((Variant *)local_78);
  if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if ((&Variant::needs_deinit)[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar11 = 0;
  do {
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(this + (long)(int)lVar11 * 8 + 0xb90));
    *(int *)(this + lVar11 * 4 + 0xb74) = (int)*(float *)(local_d4 + lVar11 * 4);
    uVar3 = _LC37;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_150 = 0;
  pVVar12 = (Variant *)local_a8;
  pVVar13 = (Variant *)local_78;
  do {
    local_110 = 0;
    local_108 = 0.0;
    uVar1 = local_150 + 1;
    local_100 = 0;
    local_f8 = 0.0;
    *(undefined4 *)((long)&local_110 + (long)(int)(uVar1 % 3) * 4) =
         *(undefined4 *)(param_1 + (long)(int)(uVar1 % 3) * 4);
    fVar4 = local_108;
    uVar9 = local_110;
    iVar10 = -0x32;
    lVar11 = (long)(int)((local_150 + 2) % 3);
    *(undefined4 *)((long)&local_100 + lVar11 * 4) = *(undefined4 *)(param_1 + lVar11 * 4);
    fVar6 = local_f8;
    uVar5 = local_100;
    fVar19 = -50.0;
    do {
      iVar10 = iVar10 + 1;
      iVar14 = -0x32;
      fVar27 = (float)uVar9;
      fVar15 = fVar19 * fVar27;
      fVar29 = (float)((ulong)uVar9 >> 0x20);
      fVar18 = fVar19 * fVar29;
      fVar17 = -50.0;
      fVar28 = fVar4 * fVar19;
      fVar20 = (float)iVar10;
      do {
        fVar23 = (float)uVar5;
        fVar21 = fVar17 * fVar23;
        fVar24 = (float)((ulong)uVar5 >> 0x20);
        fVar22 = fVar17 * fVar24;
        fVar26 = fVar6 * fVar17;
        local_f0 = CONCAT44(fVar18 + fVar22,fVar15 + fVar21);
        local_e8 = fVar28 + fVar26;
        local_c8 = CONCAT44(fVar17,fVar19);
        fVar16 = (float)Vector2::length();
        local_1c8 = 0;
        dVar25 = _LC128 - (double)(fVar16 / __LC135);
        if (0.0 <= dVar25) {
          local_1c8 = (ulong)(uint)(float)(dVar25 * dVar25);
        }
        local_e0 = CONCAT44(fVar20 * fVar29 + fVar22,fVar20 * fVar27 + fVar21);
        local_d8 = fVar4 * fVar20 + fVar26;
        local_c8 = CONCAT44(fVar17,fVar20);
        fVar17 = (float)Vector2::length();
        local_1b8 = 0.0;
        dVar25 = _LC128 - (double)(fVar17 / __LC135);
        if (0.0 <= dVar25) {
          local_1b8 = (float)(dVar25 * dVar25);
        }
        iVar14 = iVar14 + 1;
        fVar17 = (float)iVar14;
        local_c8 = CONCAT44(fVar17 * fVar24 + fVar18,fVar17 * fVar23 + fVar15);
        local_c0 = fVar6 * fVar17 + fVar28;
        local_118 = CONCAT44(fVar17,fVar19);
        fVar16 = (float)Vector2::length();
        fVar21 = 0.0;
        dVar25 = _LC128 - (double)(fVar16 / __LC135);
        if (0.0 <= dVar25) {
          fVar21 = (float)(dVar25 * dVar25);
        }
        Vector<Vector3>::push_back(local_f0,local_e8,pVVar12);
        Vector<Vector3>::push_back(local_c8,local_c0,pVVar12);
        Vector<Color>::push_back(uVar3,local_1c8 << 0x20 | 0x3f800000,pVVar13);
        Vector<Color>::push_back(uVar3,(ulong)(uint)fVar21 << 0x20 | 0x3f800000,pVVar13);
        Vector<Vector3>::push_back(local_f0,local_e8,pVVar12);
        Vector<Vector3>::push_back(local_e0,local_d8,pVVar12);
        Vector<Color>::push_back(uVar3,local_1c8 << 0x20 | 0x3f800000,pVVar13);
        Vector<Color>::push_back(uVar3,(ulong)(uint)local_1b8 << 0x20 | 0x3f800000,pVVar13);
      } while (iVar14 != 0x33);
      fVar19 = fVar20;
    } while (iVar10 != 0x33);
    Array::Array(local_130);
    iVar10 = (int)local_130;
    Array::resize(iVar10);
    Variant::Variant((Variant *)&local_c8,(Vector *)pVVar12);
    pVVar8 = (Variant *)Array::operator[](iVar10);
    if (pVVar8 == (Variant *)&local_c8) {
      if ((&Variant::needs_deinit)[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if ((&Variant::needs_deinit)[*(int *)pVVar8] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar8 = 0;
      *(int *)pVVar8 = (int)local_c8;
      *(ulong *)(pVVar8 + 8) = CONCAT44(uStack_bc,local_c0);
      *(undefined8 *)(pVVar8 + 0x10) = uStack_b8;
    }
    Variant::Variant((Variant *)&local_c8,(Vector *)pVVar13);
    pVVar8 = (Variant *)Array::operator[](iVar10);
    if (pVVar8 == (Variant *)&local_c8) {
      if ((&Variant::needs_deinit)[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if ((&Variant::needs_deinit)[*(int *)pVVar8] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar8 = 0;
      *(int *)pVVar8 = (int)local_c8;
      *(ulong *)(pVVar8 + 8) = CONCAT44(uStack_bc,local_c0);
      *(undefined8 *)(pVVar8 + 0x10) = uStack_b8;
    }
    plVar7 = (long *)RenderingServer::get_singleton();
    pVVar13 = (Variant *)((Vector *)pVVar13 + 0x10);
    pVVar12 = (Variant *)((Vector *)pVVar12 + 0x10);
    pcVar2 = *(code **)(*plVar7 + 0x318);
    Dictionary::Dictionary((Dictionary *)&local_120);
    Array::Array(local_128);
    (*pcVar2)(plVar7,*(undefined8 *)(this + ((long)(int)local_150 + 0x172) * 8),1,local_130,
              local_128,(StringName *)&local_120,0);
    Array::~Array(local_128);
    Dictionary::~Dictionary((Dictionary *)&local_120);
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x358);
    uVar9 = (**(code **)(**(long **)(this + 0xc58) + 0x1c0))();
    (*pcVar2)(plVar7,*(undefined8 *)(this + ((long)(int)local_150 + 0x172) * 8),0,uVar9);
    Array::~Array(local_130);
    local_150 = uVar1;
  } while (uVar1 != 3);
  pVVar12 = local_48;
  do {
    pVVar13 = pVVar12 + -0x10;
    if (*(long *)(pVVar12 + -8) != 0) {
      LOCK();
      plVar7 = (long *)(*(long *)(pVVar12 + -8) + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        lVar11 = *(long *)(pVVar12 + -8);
        *(undefined8 *)(pVVar12 + -8) = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    pVVar12 = pVVar13;
  } while (pVVar13 != (Variant *)local_78);
  do {
    pVVar12 = pVVar13 + -0x10;
    if (*(long *)(pVVar13 + -8) != 0) {
      LOCK();
      plVar7 = (long *)(*(long *)(pVVar13 + -8) + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        lVar11 = *(long *)(pVVar13 + -8);
        *(undefined8 *)(pVVar13 + -8) = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    pVVar13 = pVVar12;
  } while (pVVar12 != (Variant *)local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::edit(GridMap*) */

void __thiscall GridMapEditor::edit(GridMapEditor *this,GridMap *param_1)

{
  code *pcVar1;
  Callable *pCVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_68 [3];
  undefined1 local_4c [12];
  long local_40;
  
  plVar5 = *(long **)(this + 0xb00);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar5 + 0x110);
    create_custom_callable_function_pointer<GridMapEditor,Vector3_const&>
              ((GridMapEditor *)local_68,(char *)this,
               (_func_void_Vector3_ptr *)"&GridMapEditor::_draw_grids");
    if (edit(GridMap*)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&edit(GridMap*)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&edit(GridMap*)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&edit(GridMap*)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&edit(GridMap*)::{lambda()#1}::operator()()::sname);
      }
    }
    (*pcVar1)(plVar5,&edit(GridMap*)::{lambda()#1}::operator()()::sname,(GridMapEditor *)local_68);
    Callable::~Callable((Callable *)local_68);
    plVar5 = *(long **)(this + 0xb00);
    pcVar1 = *(code **)(*plVar5 + 0x110);
    create_custom_callable_function_pointer<GridMapEditor>
              ((GridMapEditor *)local_68,(char *)this,
               (_func_void *)"&GridMapEditor::_update_mesh_library");
    (*pcVar1)(plVar5,CoreStringNames::singleton + 8,(GridMapEditor *)local_68);
    Callable::~Callable((Callable *)local_68);
    pCVar2 = *(Callable **)(this + 0xb08);
    if (pCVar2 != (Callable *)0x0) {
      create_custom_callable_function_pointer<GridMapEditor>
                ((GridMapEditor *)local_68,(char *)this,
                 (_func_void *)"&GridMapEditor::update_palette");
      Resource::disconnect_changed(pCVar2);
      Callable::~Callable((Callable *)local_68);
      lVar4 = *(long *)(this + 0xb08);
      if (lVar4 != 0) {
        *(undefined8 *)(this + 0xb08) = 0;
        local_68[0] = lVar4;
        Ref<MeshLibrary>::unref((Ref<MeshLibrary> *)local_68);
      }
    }
  }
  *(GridMap **)(this + 0xb00) = param_1;
  *(undefined4 *)(this + 0xa10) = 0;
  this[0xcbc] = (GridMapEditor)0x0;
  _update_selection_transform(this);
  _update_paste_indicator(this);
  lVar4 = EditorMainScreen::get_selected_plugin();
  if (lVar4 != 0) {
    lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&Node3DEditorPlugin::typeinfo,0);
  }
  *(long *)(this + 0xd78) = lVar4;
  if (*(long *)(this + 0xb00) == 0) {
    iVar3 = 0;
    Node::set_process(SUB81(this,0));
    do {
      plVar5 = (long *)RenderingServer::get_singleton();
      lVar4 = (long)iVar3;
      iVar3 = iVar3 + 1;
      (**(code **)(*plVar5 + 0xd70))(plVar5,*(undefined8 *)(this + lVar4 * 8 + 0xba8),0);
    } while (iVar3 != 3);
    if (*(long *)(this + 0xbc8) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      plVar5 = (long *)RenderingServer::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0xd70))(plVar5,*(undefined8 *)(this + 0xbc8),0);
        return;
      }
    }
  }
  else {
    update_palette(this);
    _update_cursor_instance(this);
    Node::set_process(SUB81(this,0));
    local_4c = GridMap::get_cell_size();
    _draw_grids(this,(Vector3 *)local_4c);
    update_grid(this);
    plVar5 = *(long **)(this + 0xb00);
    pcVar1 = *(code **)(*plVar5 + 0x108);
    create_custom_callable_function_pointer<GridMapEditor,Vector3_const&>
              ((GridMapEditor *)local_68,(char *)this,
               (_func_void_Vector3_ptr *)"&GridMapEditor::_draw_grids");
    if (edit(GridMap*)::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&edit(GridMap*)::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&edit(GridMap*)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&edit(GridMap*)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&edit(GridMap*)::{lambda()#2}::operator()()::sname);
      }
    }
    (*pcVar1)(plVar5,&edit(GridMap*)::{lambda()#2}::operator()()::sname,(GridMapEditor *)local_68,0)
    ;
    Callable::~Callable((Callable *)local_68);
    plVar5 = *(long **)(this + 0xb00);
    pcVar1 = *(code **)(*plVar5 + 0x108);
    create_custom_callable_function_pointer<GridMapEditor>
              ((GridMapEditor *)local_68,(char *)this,
               (_func_void *)"&GridMapEditor::_update_mesh_library");
    (*pcVar1)(plVar5,CoreStringNames::singleton + 8,(GridMapEditor *)local_68,0);
    Callable::~Callable((Callable *)local_68);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_mesh_library(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::edit(Object*) */

void __thiscall GridMapEditorPlugin::edit(GridMapEditorPlugin *this,Object *param_1)

{
  GridMapEditor *this_00;
  
  this_00 = *(GridMapEditor **)(this + 0x660);
  if (this_00 != (GridMapEditor *)0x0) {
    if (param_1 != (Object *)0x0) {
      param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&GridMap::typeinfo,0);
    }
    GridMapEditor::edit(this_00,(GridMap *)param_1);
    return;
  }
  _err_print_error(&_LC260,"modules/gridmap/editor/grid_map_editor_plugin.cpp",0x706,
                   "Parameter \"grid_map_editor\" is null.",0,0);
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



/* BaseMaterial3D::_can_do_next_pass() const */

undefined8 BaseMaterial3D::_can_do_next_pass(void)

{
  return 1;
}



/* BaseMaterial3D::_can_use_render_priority() const */

undefined8 BaseMaterial3D::_can_use_render_priority(void)

{
  return 1;
}



/* StandardMaterial3D::is_class_ptr(void*) const */

uint StandardMaterial3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x124c,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3D::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_notificationv(int, bool) */

void StandardMaterial3D::_notificationv(int param_1,bool param_2)

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



/* GridMapEditorPlugin::is_class_ptr(void*) const */

uint __thiscall GridMapEditorPlugin::is_class_ptr(GridMapEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x124c,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x124b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x124c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GridMapEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 GridMapEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GridMapEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 GridMapEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GridMapEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 GridMapEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GridMapEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GridMapEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GridMapEditorPlugin::has_main_screen() const */

undefined8 GridMapEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this)

{
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void> *this)

{
  return;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTC<int>::_gen_argument_type(int) const */

char __thiscall MethodBindTC<int>::_gen_argument_type(MethodBindTC<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindTC<int>::get_argument_meta(int) const */

byte __thiscall MethodBindTC<int>::get_argument_meta(MethodBindTC<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<Array>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<AABB>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AABB>::_gen_argument_type(int param_1)

{
  return 0x10;
}



/* MethodBindTRC<AABB>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AABB>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3i const&, Vector3i const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3i_const&,Vector3i_const&>::_gen_argument_type
          (MethodBindT<Vector3i_const&,Vector3i_const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 10;
}



/* MethodBindT<Vector3i const&, Vector3i const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3i_const&,Vector3i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<GridMap*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GridMap*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<GridMap*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GridMap*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<bool,Vector3_const&,Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GridMapEditor, void, float>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GridMapEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GridMapEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::get_argument_count
          (CallableCustomMethodPointer<GridMapEditor,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<GridMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124790;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124790;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<bool,Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<bool,Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001247f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<bool,Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<bool,Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001247f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GridMap*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<GridMap*>::~MethodBindTRC(MethodBindTRC<GridMap*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GridMap*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<GridMap*>::~MethodBindTRC(MethodBindTRC<GridMap*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3i const&, Vector3i const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3i_const&,Vector3i_const&>::~MethodBindT
          (MethodBindT<Vector3i_const&,Vector3i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001248b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3i const&, Vector3i const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3i_const&,Vector3i_const&>::~MethodBindT
          (MethodBindT<Vector3i_const&,Vector3i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001248b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124910;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124910;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124970;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124970;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001249d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001249d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTC<int>::~MethodBindTC() */

void __thiscall MethodBindTC<int>::~MethodBindTC(MethodBindTC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124a30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<int>::~MethodBindTC() */

void __thiscall MethodBindTC<int>::~MethodBindTC(MethodBindTC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124a30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124a90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124a90;
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



/* GridMapEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GridMapEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0012b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GridMapEditor::_property_can_revertv(StringName const&) const */

undefined8 GridMapEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GridMapEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void GridMapEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0012b010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00123520;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00123520;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012b018 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<bool,Vector3_const&,Vector3_const&>::_gen_argument_type
          (MethodBindT<bool,Vector3_const&,Vector3_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 3) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff8) + 9;
  }
  return iVar1;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridMapEditor::_set_clipboard_data() [clone .cold] */

void GridMapEditor::_set_clipboard_data(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridMapEditor::_update_cursor_instance() [clone .cold] */

void GridMapEditor::_update_cursor_instance(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridMapEditor::_notification(int) [clone .cold] */

void GridMapEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridMapEditor::_bind_methods() [clone .cold] */

void GridMapEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GridMapEditorPlugin::_bind_methods() [clone .cold] */

void GridMapEditorPlugin::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00112d1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112d1d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112d1d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GridMapEditor, void, float>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this)

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
      goto LAB_00112e1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112e1d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112e1d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this)

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
      goto LAB_00112f1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112f1d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112f1d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GridMapEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this)

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
      goto LAB_0011301d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011301d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011301d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GridMapEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void> *this)

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
      goto LAB_0011311d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011311d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011311d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this)

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
      goto LAB_0011321d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011321d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011321d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b020 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012b028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GridMapEditor::_validate_propertyv(PropertyInfo&) const */

void GridMapEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012b030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* GridMapEditor::_setv(StringName const&, Variant const&) */

undefined8 GridMapEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113638) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001136a8) */
/* GridMapEditor::_getv(StringName const&, Variant&) const */

undefined8 GridMapEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113718) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x124c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x124c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x124c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* GridMapEditor::is_class_ptr(void*) const */

ulong GridMapEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x124c,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x124c,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x124c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x124c,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x124c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x124c,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001138f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001138f0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113950;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113950:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001139b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001139b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113a20:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

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



/* GridMapEditorPlugin::get_plugin_name() const */

GridMapEditorPlugin * __thiscall GridMapEditorPlugin::get_plugin_name(GridMapEditorPlugin *this)

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



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

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



/* SortArray<List<_CGMEItemSort, DefaultAllocator>::Element*, List<_CGMEItemSort,
   DefaultAllocator>::AuxiliaryComparator<Comparator<_CGMEItemSort> >, true>::introsort(long, long,
   List<_CGMEItemSort, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<_CGMEItemSort,DefaultAllocator>::Element*,List<_CGMEItemSort,DefaultAllocator>::AuxiliaryComparator<Comparator<_CGMEItemSort>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  String *pSVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar11 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_00113c31:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar1);
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar10 = ppEVar11;
      if (cVar4 != '\0') goto LAB_00113c8d;
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
    }
    else {
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_00113c8d;
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar1 = ppEVar11;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_00113c8d:
    pSVar2 = (String *)*ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)param_3[local_78],pSVar2);
      if (cVar4 == '\0') {
LAB_00113cd4:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<(pSVar2,(String *)*ppEVar5), cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_00113d40;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00113cd4;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_00113e02:
  lVar7 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pSVar2 = (String *)*local_50;
    lVar6 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar6],
                                  (String *)param_3[param_1 + lVar6 + -1]);
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar6 + -1;
        lVar12 = lVar6;
        if (cVar4 == '\0') {
          lVar12 = lVar6 + 1;
          lVar8 = lVar6;
          ppEVar11 = param_3 + param_1 + lVar6;
        }
        lVar6 = lVar12 * 2;
        param_3[local_70 + param_1] = *ppEVar11;
        local_70 = lVar8;
      } while (lVar6 < lVar9);
      ppEVar5 = ppEVar11;
      if (lVar6 == lVar9) {
LAB_001140cd:
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar8;
        *ppEVar5 = *ppEVar11;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 <= lVar7) goto LAB_0011411e;
      do {
        lVar12 = lVar6 >> 1;
        ppEVar11 = param_3 + param_1 + lVar12;
        cVar4 = String::operator<((String *)*ppEVar11,pSVar2);
        if (cVar4 == '\0') {
          param_3[lVar8 + param_1] = (Element *)pSVar2;
          goto joined_r0x00113f8d;
        }
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar6 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        lVar8 = lVar12;
      } while (lVar7 < lVar12);
      *ppEVar11 = (Element *)pSVar2;
joined_r0x00113f8d:
      if (lVar7 == 0) goto LAB_00113f8f;
    }
    else {
      ppEVar5 = local_50;
      ppEVar11 = local_50;
      if (local_58 == lVar9) goto LAB_001140cd;
LAB_0011411e:
      *ppEVar11 = (Element *)pSVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_00113d40:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_00113e02;
  goto LAB_00113c31;
LAB_00113f8f:
  ppEVar11 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_00113fb0:
  do {
    pSVar2 = (String *)ppEVar11[local_68];
    ppEVar11[local_68] = *ppEVar11;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar11 = (Element *)pSVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar7 = 0;
      *ppEVar11 = param_3[lVar9];
LAB_00114091:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar7;
        cVar4 = String::operator<((String *)*ppEVar1,pSVar2);
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar1 = (Element *)pSVar2;
          goto LAB_00113fb0;
        }
        lVar9 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar9],
                                  (String *)param_3[param_1 + lVar9 + -1]);
        lVar6 = lVar9 + -1;
        lVar7 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar7 = lVar9 + 1;
          lVar6 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar6;
      } while (lVar9 < local_68);
      if (lVar9 == local_68) {
        lVar9 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_00114091;
      }
      lVar9 = param_1 + lVar6;
      lVar7 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_00114091;
    }
    local_68 = local_68 + -1;
    *ppEVar5 = (Element *)pSVar2;
  } while( true );
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



/* GridMapEditor::_get_class_namev() const */

undefined8 * GridMapEditor::_get_class_namev(void)

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
LAB_00114213:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114213;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GridMapEditor");
      goto LAB_0011427e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GridMapEditor");
LAB_0011427e:
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
LAB_00114303:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114303;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011436e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011436e:
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
LAB_001143f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001143f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011445e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011445e:
  return &_get_class_namev()::_class_name_static;
}



/* GridMapEditorPlugin::_get_class_namev() const */

undefined8 * GridMapEditorPlugin::_get_class_namev(void)

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
LAB_001144e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001144e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GridMapEditorPlugin");
      goto LAB_0011454e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GridMapEditorPlugin");
LAB_0011454e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_get_class_namev() const */

undefined8 * StandardMaterial3D::_get_class_namev(void)

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
LAB_001145d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001145d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_0011463e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_0011463e:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if ((&needs_deinit)[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_001149df:
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001148f3;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_001148f3:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_001149df;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00114aeb;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00114aeb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00114c4b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00114c4b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Material::is_class(String const&) const */

undefined8 __thiscall Material::is_class(Material *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00114d0f;
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
LAB_00114d0f:
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
    if (cVar5 != '\0') goto LAB_00114dc3;
  }
  cVar5 = String::operator==(param_1,"Material");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00114dc3:
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
    if (cVar4 != '\0') goto LAB_00114f2b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00114f2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00115060) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b040 != Container::_notification) {
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
  if ((code *)PTR__notification_0012b040 == Container::_notification) {
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



/* GridMapEditorPlugin::get_class() const */

void GridMapEditorPlugin::get_class(void)

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



/* GridMapEditor::get_class() const */

void GridMapEditor::get_class(void)

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



/* StandardMaterial3D::get_class() const */

void StandardMaterial3D::get_class(void)

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



/* List<GridMapEditor::SetItem, DefaultAllocator>::clear() */

void __thiscall
List<GridMapEditor::SetItem,DefaultAllocator>::clear
          (List<GridMapEditor::SetItem,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        return;
      }
      if (*(long **)((long)pvVar1 + 0x30) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 0x20);
        lVar2 = *(long *)((long)pvVar1 + 0x28);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 0x20);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x28) = lVar2;
        }
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
    *(undefined8 *)this = 0;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<GridMapEditor>(GridMapEditor*, char const*, void
   (GridMapEditor::*)()) */

GridMapEditor *
create_custom_callable_function_pointer<GridMapEditor>
          (GridMapEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC80;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124430;
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



/* Callable create_custom_callable_function_pointer<GridMapEditor, Vector3 const&>(GridMapEditor*,
   char const*, void (GridMapEditor::*)(Vector3 const&)) */

GridMapEditor *
create_custom_callable_function_pointer<GridMapEditor,Vector3_const&>
          (GridMapEditor *param_1,char *param_2,_func_void_Vector3_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC80;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001244c0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector3_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<GridMapEditor, int>(GridMapEditor*, char const*,
   void (GridMapEditor::*)(int)) */

GridMapEditor *
create_custom_callable_function_pointer<GridMapEditor,int>
          (GridMapEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC80;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124550;
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



/* Callable Callable::bind<GridMapEditor::Menu>(GridMapEditor::Menu) const */

Variant ** Callable::bind<GridMapEditor::Menu>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
  if ((&Variant::needs_deinit)[(int)local_40] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Callable create_custom_callable_function_pointer<GridMapEditor, float>(GridMapEditor*, char
   const*, void (GridMapEditor::*)(float)) */

GridMapEditor *
create_custom_callable_function_pointer<GridMapEditor,float>
          (GridMapEditor *param_1,char *param_2,_func_void_float *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC80;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001245e0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_float **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<GridMapEditor, Ref<InputEvent>
   const&>(GridMapEditor*, char const*, void (GridMapEditor::*)(Ref<InputEvent> const&)) */

GridMapEditor *
create_custom_callable_function_pointer<GridMapEditor,Ref<InputEvent>const&>
          (GridMapEditor *param_1,char *param_2,_func_void_Ref_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC80;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124700;
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



/* Callable Callable::bind<GridMapEditor::DisplayMode>(GridMapEditor::DisplayMode) const */

Variant ** Callable::bind<GridMapEditor::DisplayMode>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
  if ((&Variant::needs_deinit)[(int)local_40] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void Ref<StandardMaterial3D>::instantiate<>() */

void __thiscall Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this)

{
  char cVar1;
  BaseMaterial3D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_00123520;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (BaseMaterial3D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BaseMaterial3D *)pOVar3) goto LAB_00115bc5;
    *(BaseMaterial3D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00115bc5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BaseMaterial3D *)0x0) {
    return;
  }
LAB_00115bc5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* MethodBindTRC<AABB>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AABB>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC80;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x10;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
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
      goto LAB_00115de5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00115de5:
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



/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC80;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x1c;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
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
      goto LAB_00115f45;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00115f45:
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = CallableCustom::CallableCustom;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001162fa;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_001162fa:
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



/* WARNING: Removing unreachable block (ram,0x00116510) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((CowData<char32_t> *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if ((&Variant::needs_deinit)[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* List<_CGMEItemSort, DefaultAllocator>::~List() */

void __thiscall
List<_CGMEItemSort,DefaultAllocator>::~List(List<_CGMEItemSort,DefaultAllocator> *this)

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
    if (*(long **)(this_00 + 0x20) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x10);
      lVar1 = *(long *)(this_00 + 0x18);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
        lVar2 = *(long *)(this_00 + 0x10);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar1;
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



/* MethodBindTRC<GridMap*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GridMap*>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 7;
  local_38 = "GridMap";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar1 = 0x18;
  *(undefined8 *)(puVar1 + 2) = 0;
  StringName::StringName((StringName *)(puVar1 + 4),(StringName *)&local_38);
  bVar2 = StringName::configured != '\0';
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 6;
  if ((bVar2) && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GridMapEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::call
          (CallableCustomMethodPointer<GridMapEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00116a3f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116a3f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00116af0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116a3f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116af0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GridMapEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::call
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00116cb8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00116cb8;
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
        uVar3 = _LC100;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00116d69;
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
LAB_00116cb8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00116d69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::call
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined1 local_60 [4] [12];
  long local_30;
  
  auVar3._8_4_ = local_60[0]._8_4_;
  auVar3._0_8_ = local_60[0]._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
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
            local_60[0] = auVar3;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,9);
            uVar4 = _LC101;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_60[0] = Variant::operator_cast_to_Vector3(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),local_60);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00116e3e;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00116e3e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0011709e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011709e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC102;
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
LAB_0011716d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011716d;
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
        goto LAB_0011709e;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011709e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GridMapEditor, void, float>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::call
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this,Variant **param_1,int param_2
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
      goto LAB_001174f6;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001174f6;
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
        uVar3 = _LC103;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_float(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001174a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_001175a7;
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
LAB_001174f6:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001175a7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::call
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC104;
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
        goto LAB_0011767e;
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
  _err_print_error(&_LC99,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011767e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if (cVar5 != '\0') goto LAB_0011791b;
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
      if (cVar5 != '\0') goto LAB_0011791b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00117a1e;
    }
  }
LAB_0011791b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00117a1e:
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
    if (cVar4 != '\0') goto LAB_00117b2b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00117b2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

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
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
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
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if ((code *)PTR__bind_methods_0012b050 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_58 = "RefCounted";
          local_68 = 0;
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Resource";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
        local_70 = 0;
        local_50 = 8;
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
        Material::_bind_methods();
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
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
      if ((code *)PTR__bind_methods_0012b048 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC80;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
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
      goto LAB_001181d5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001181d5:
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC80;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
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
      goto LAB_00118335;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00118335:
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
              if ((code *)PTR__bind_methods_0012b050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0012b058 !=
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
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_60);
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
      if ((code *)PTR__bind_methods_0012b060 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0012b050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0012b058 !=
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
      if ((code *)PTR__bind_methods_0012b060 != Container::_bind_methods) {
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
            if ((&Variant::needs_deinit)[*(int *)((long)pvVar5 + 0x48)] != '\0') {
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
        if (pvVar5 == (void *)0x0) goto LAB_001190d6;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001190d6:
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
    if (cVar5 != '\0') goto LAB_0011922b;
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
      if (cVar5 != '\0') goto LAB_0011922b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011932e;
    }
  }
LAB_0011922b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011932e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::is_class(String const&) const */

undefined8 __thiscall GridMapEditor::is_class(GridMapEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011943b;
  }
  cVar4 = String::operator==(param_1,"GridMapEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011943b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditorPlugin::is_class(String const&) const */

undefined8 __thiscall GridMapEditorPlugin::is_class(GridMapEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011959b;
  }
  cVar5 = String::operator==(param_1,"GridMapEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0011959b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011969e;
    }
  }
LAB_0011959b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011969e:
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
    if (cVar5 != '\0') goto LAB_001197ab;
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
      if (cVar5 != '\0') goto LAB_001197ab;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001198ae;
    }
  }
LAB_001197ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001198ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001199bb;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
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
      if (cVar5 != '\0') goto LAB_001199bb;
    }
    cVar5 = String::operator==(param_1,"BaseMaterial3D");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Material::is_class((Material *)this,param_1);
        return uVar6;
      }
      goto LAB_00119abe;
    }
  }
LAB_001199bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119abe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_00119c2c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119c2c:
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
  local_78 = &_LC33;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC33;
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
      goto LAB_00119e7c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119e7c:
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
      goto LAB_0011a0e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a0e1:
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



/* GridMapEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GridMapEditorPlugin::_get_property_listv(GridMapEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "GridMapEditorPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GridMapEditorPlugin";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_0011a391;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a391:
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
  StringName::StringName((StringName *)&local_78,"GridMapEditorPlugin",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_0011a641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a641:
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
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
      goto LAB_0011a8f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a8f1:
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
  StringName::StringName((StringName *)&local_78,"Material",false);
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



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
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
      goto LAB_0011aba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011aba1:
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
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

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
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
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
      goto LAB_0011ae51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ae51:
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
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
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
      goto LAB_0011b101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b101:
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
  if ((code *)PTR__get_property_list_0012b068 != Object::_get_property_list) {
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
      goto LAB_0011b3d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b3d1:
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
  if ((code *)PTR__get_property_list_0012b070 != CanvasItem::_get_property_list) {
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
      goto LAB_0011b6a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b6a1:
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
      goto LAB_0011b951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b951:
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
      goto LAB_0011bc01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bc01:
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



/* GridMapEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GridMapEditor::_get_property_listv(GridMapEditor *this,List *param_1,bool param_2)

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
  local_78 = "GridMapEditor";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GridMapEditor";
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
      goto LAB_0011beb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011beb1:
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
  StringName::StringName((StringName *)&local_78,"GridMapEditor",false);
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
      goto LAB_0011c161;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c161:
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



/* MethodBindTC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTC<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
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
    local_68 = &_LC80;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<InputEvent>::unref() */

void __thiscall Ref<InputEvent>::unref(Ref<InputEvent> *this)

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



/* Ref<Shortcut>::unref() */

void __thiscall Ref<Shortcut>::unref(Ref<Shortcut> *this)

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



/* Ref<MeshLibrary>::unref() */

void __thiscall Ref<MeshLibrary>::unref(Ref<MeshLibrary> *this)

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



/* Ref<World3D>::unref() */

void __thiscall Ref<World3D>::unref(Ref<World3D> *this)

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



/* Ref<InputEventMouseButton>::unref() */

void __thiscall Ref<InputEventMouseButton>::unref(Ref<InputEventMouseButton> *this)

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



/* void List<_CGMEItemSort, DefaultAllocator>::sort_custom<Comparator<_CGMEItemSort> >() */

void __thiscall
List<_CGMEItemSort,DefaultAllocator>::sort_custom<Comparator<_CGMEItemSort>>
          (List<_CGMEItemSort,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 0x10)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<_CGMEItemSort,DefaultAllocator>::Element*,List<_CGMEItemSort,DefaultAllocator>::AuxiliaryComparator<Comparator<_CGMEItemSort>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    pEVar11 = *__src;
    do {
      while( true ) {
        pSVar8 = (String *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = String::operator<(pSVar8,(String *)pEVar11);
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pSVar8;
        pSVar8 = (String *)*__src;
        pEVar11 = (Element *)pSVar8;
        if (pEVar4 == pEVar10) goto LAB_0011caa5;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar8;
      pEVar11 = (Element *)pSVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pSVar8 = (String *)__src[lVar9];
        cVar3 = String::operator<(pSVar8,(String *)*__src);
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pSVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_0011c926;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pSVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_0011c926:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pSVar8 = (String *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]);
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pSVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pSVar8 = (String *)*__src;
  }
LAB_0011caa5:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pSVar8;
  *(undefined8 *)(pSVar8 + 0x18) = 0;
  *(Element **)(*__src + 0x10) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x18) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x10) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x18) = *ppEVar5;
      *(Element **)(*ppEVar6 + 0x10) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* GridMapEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
GridMapEditorPlugin::forward_3d_gui_input(GridMapEditorPlugin *this,Camera3D *param_1,Ref *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(*(GridMapEditor **)(this + 0x660) + 0xb00) != 0) {
    uVar1 = GridMapEditor::forward_spatial_input_event
                      (*(GridMapEditor **)(this + 0x660),param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GridMapEditor::_notificationv(int, bool) */

void __thiscall GridMapEditor::_notificationv(GridMapEditor *this,int param_1,bool param_2)

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



/* MethodBind* create_method_bind<GridMapEditor>(void (GridMapEditor::*)()) */

MethodBind * create_method_bind<GridMapEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124790;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditor";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<GridMapEditor, bool, Vector3 const&, Vector3 const&>(void
   (GridMapEditor::*)(bool, Vector3 const&, Vector3 const&)) */

MethodBind *
create_method_bind<GridMapEditor,bool,Vector3_const&,Vector3_const&>
          (_func_void_bool_Vector3_ptr_Vector3_ptr *param_1)

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
  *(_func_void_bool_Vector3_ptr_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001247f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "GridMapEditor";
  local_30 = 0xd;
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



/* GridMapEditor::_initialize_classv() */

void GridMapEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0012b050 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0012b058 !=
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
        if ((code *)PTR__bind_methods_0012b060 != Container::_bind_methods) {
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
    local_58 = "GridMapEditor";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<StandardMaterial3D>::unref() */

void __thiscall Ref<StandardMaterial3D>::unref(Ref<StandardMaterial3D> *this)

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



/* MethodBind* create_method_bind<GridMapEditorPlugin, GridMap*>(GridMap* (GridMapEditorPlugin::*)()
   const) */

MethodBind * create_method_bind<GridMapEditorPlugin,GridMap*>(_func_GridMap_ptr *param_1)

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
  *(_func_GridMap_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, Vector3i const&, Vector3i const&>(void
   (GridMapEditorPlugin::*)(Vector3i const&, Vector3i const&)) */

MethodBind *
create_method_bind<GridMapEditorPlugin,Vector3i_const&,Vector3i_const&>
          (_func_void_Vector3i_ptr_Vector3i_ptr *param_1)

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
  *(_func_void_Vector3i_ptr_Vector3i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001248b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin>(void (GridMapEditorPlugin::*)()) */

MethodBind * create_method_bind<GridMapEditorPlugin>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124790;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, AABB>(AABB (GridMapEditorPlugin::*)() const)
    */

MethodBind * create_method_bind<GridMapEditorPlugin,AABB>(_func_AABB *param_1)

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
  *(_func_AABB **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124910;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, bool>(bool (GridMapEditorPlugin::*)() const)
    */

MethodBind * create_method_bind<GridMapEditorPlugin,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124970;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, Array>(Array (GridMapEditorPlugin::*)()
   const) */

MethodBind * create_method_bind<GridMapEditorPlugin,Array>(_func_Array *param_1)

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
  *(_func_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001249d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, int>(void (GridMapEditorPlugin::*)(int)
   const) */

MethodBind * create_method_bind<GridMapEditorPlugin,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124a30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* MethodBind* create_method_bind<GridMapEditorPlugin, int>(int (GridMapEditorPlugin::*)() const) */

MethodBind * create_method_bind<GridMapEditorPlugin,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00124a90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GridMapEditorPlugin";
  local_30 = 0x13;
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



/* GridMapEditorPlugin::_initialize_classv() */

void GridMapEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0012b050 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0012b078 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012b080 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GridMapEditorPlugin";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

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
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_0011e430:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0011e430;
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
LAB_0011e3bc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0011e35f;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011e3bc;
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
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_0011e35f:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011e4f0) */
/* GridMapEditorPlugin::_notificationv(int, bool) */

void __thiscall
GridMapEditorPlugin::_notificationv(GridMapEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012b088 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0012b088 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0011e800:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_0011e800;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
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
  if (lVar11 == lVar4) {
LAB_0011e76c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_0011e704;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011e76c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _LC131;
  uVar7 = __LC185;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_0011e704:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011e998) */
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
  String::sprintf((CowData<char32_t> *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
  if ((&Variant::needs_deinit)[(int)local_60] == '\0') {
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = (&Variant::needs_deinit)[local_78[0]];
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



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ecc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
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
LAB_0011ecc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ef64;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011ef64:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f123;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0011f123:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTC<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
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
      goto LAB_0011f461;
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
                    /* WARNING: Could not recover jumptable at 0x0011f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011f461:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTC<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
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
      goto LAB_0011f641;
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
                    /* WARNING: Could not recover jumptable at 0x0011f4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011f641:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f720;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0011f720:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11eb18;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f949;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011f949:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11eb18;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fb1a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011fb1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fd50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
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
LAB_0011fd50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ff62;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011ff62:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120111;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00120111:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<AABB>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  AABB local_48 [24];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00120350;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
      (*(code *)pVVar2)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_00120350:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AABB>::validated_call
          (MethodBindTRC<AABB> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x11eb18;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120579;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_00120579:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AABB>::ptrcall(MethodBindTRC<AABB> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x11eb18;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120747;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_00120747:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3i const&, Vector3i const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Vector3i_const&,Vector3i_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00120a7f;
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
                    /* WARNING: Could not recover jumptable at 0x0012092a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00120a7f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3i const&, Vector3i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3i_const&,Vector3i_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00120c69;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00120af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00120c69:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GridMap*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<GridMap*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120d30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      pOVar2 = (Object *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pOVar2);
      if ((&Variant::needs_deinit)[*(int *)param_1] != '\0') {
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
LAB_00120d30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<bool,Vector3_const&,Vector3_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001210c7;
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
                    /* WARNING: Could not recover jumptable at 0x00120f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8,
               *(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_001210c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool,Vector3_const&,Vector3_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001212b1;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0012113d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0',
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_001212b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001213d0;
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
LAB_001213d0:
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
      goto LAB_0012174f;
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
                    /* WARNING: Could not recover jumptable at 0x001215f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012174f:
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
      goto LAB_0012190f;
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
                    /* WARNING: Could not recover jumptable at 0x001217b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012190f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GridMap*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<GridMap*>::validated_call
          (MethodBindTRC<GridMap*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_00121adf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00121adf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GridMap*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GridMap*>::ptrcall
          (MethodBindTRC<GridMap*> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121b31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_00121b31:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<bool,Vector3_const&,Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  undefined4 in_register_00000014;
  long *plVar19;
  Variant *pVVar20;
  long lVar21;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar22;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  Variant *local_58 [3];
  long local_40;
  
  plVar19 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar19 != (long *)0x0) && (plVar19[1] != 0)) && (*(char *)(plVar19[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar19[1] == 0) {
      plVar16 = (long *)plVar19[0x23];
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)(**(code **)(*plVar19 + 0x40))(plVar19);
      }
    }
    else {
      plVar16 = (long *)(plVar19[1] + 0x20);
    }
    if (local_c8 == (char *)*plVar16) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_d0 = 0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      auVar10._8_4_ = local_64._8_4_;
      auVar10._0_8_ = local_64._0_8_;
      auVar9._8_4_ = local_7c._8_4_;
      auVar9._0_8_ = local_7c._0_8_;
      auVar8._8_4_ = local_70._8_4_;
      auVar8._0_8_ = local_70._0_8_;
      auVar7._8_4_ = local_88._8_4_;
      auVar7._0_8_ = local_88._0_8_;
      auVar6._8_4_ = local_94._8_4_;
      auVar6._0_8_ = local_94._0_8_;
      auVar5._8_4_ = local_a0._8_4_;
      auVar5._0_8_ = local_a0._0_8_;
      auVar4._8_4_ = local_ac._8_4_;
      auVar4._0_8_ = local_ac._0_8_;
      if ((StringName::configured != '\0') &&
         (local_ac = auVar4, local_a0 = auVar5, local_94 = auVar6, local_88 = auVar7,
         local_70 = auVar8, local_7c = auVar9, local_64 = auVar10, local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_00121e8a;
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar22 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar14 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar18 = 0;
      lVar21 = 0;
    }
    else {
      lVar21 = *(long *)(pVVar2 + -8);
      iVar18 = (int)lVar21;
    }
    if ((int)(3 - in_R8D) <= iVar18) {
      lVar15 = 0;
      do {
        if ((int)lVar15 < (int)in_R8D) {
          pVVar20 = *(Variant **)(param_4 + lVar15 * 8);
        }
        else {
          uVar17 = iVar18 + -3 + (int)lVar15;
          if (lVar21 <= (int)uVar17) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar17,lVar21,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar20 = pVVar2 + (ulong)uVar17 * 0x18;
        }
        local_58[lVar15] = pVVar20;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar22 & 1) != 0) {
        pVVar22 = *(Variant **)(pVVar22 + *(long *)((long)plVar19 + (long)pVVar1) + -1);
      }
      cVar12 = Variant::can_convert_strict(*(undefined4 *)local_58[2],9);
      uVar11 = _LC269;
      if (cVar12 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar11;
      }
      local_ac = Variant::operator_cast_to_Vector3(local_58[2]);
      local_7c = local_ac;
      local_70 = local_ac;
      local_64 = local_ac;
      cVar12 = Variant::can_convert_strict(*(undefined4 *)local_58[1],9);
      uVar11 = _LC270;
      if (cVar12 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar11;
      }
      local_a0 = Variant::operator_cast_to_Vector3(local_58[1]);
      local_94 = local_a0;
      local_88 = local_a0;
      local_7c = local_a0;
      cVar12 = Variant::can_convert_strict(*(undefined4 *)local_58[0],1);
      uVar11 = _LC271;
      if (cVar12 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar11;
      }
      bVar13 = Variant::operator_cast_to_bool(local_58[0]);
      (*(code *)pVVar22)((Variant *)((long)plVar19 + (long)pVVar1),bVar13,local_a0,local_ac);
      goto LAB_00121e8a;
    }
    uVar14 = 4;
  }
  *in_R9 = uVar14;
  in_R9[2] = 3;
LAB_00121e8a:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_argsc_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int) const, Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_argsc_dv<__UnexistingClass,int>
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
    goto LAB_0012219d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00122200;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00122200:
      uVar6 = 4;
LAB_0012219d:
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
      goto LAB_0012211b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012211b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC100;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00122176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindTC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00122266;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_argsc_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00122266:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector3i const&, Vector3i
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector3i const&, Vector3i const&),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector3i_const&,Vector3i_const&>
               (__UnexistingClass *param_1,_func_void_Vector3i_ptr_Vector3i_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  Variant *this;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined1 local_78 [3] [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001225a0;
      this = (Variant *)*plVar8;
LAB_001225ed:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_001225a0:
        uVar7 = 4;
        goto LAB_001225a5;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00122608;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001225ed;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00122608:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector3i_ptr_Vector3i_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,10);
    uVar4 = _LC272;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_54 = Variant::operator_cast_to_Vector3i(this_00);
    local_48 = local_54;
    local_3c = local_54;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,10);
    uVar4 = _LC273;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_78[0] = Variant::operator_cast_to_Vector3i(this);
    local_54 = local_78[0];
    (*param_2)((Vector3i *)(param_1 + (long)param_3),(Vector3i *)local_78);
  }
  else {
    uVar7 = 3;
LAB_001225a5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3i const&, Vector3i const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector3i_const&,Vector3i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001226a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector3i_const&,Vector3i_const&>
            (p_Var2,(_func_void_Vector3i_ptr_Vector3i_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001226a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3i const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3i_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
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
    local_78 = &_LC80;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,10,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6
               ,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3i const&, Vector3i const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3i_const&,Vector3i_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Vector3i_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Vector3i_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
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
    local_78 = &_LC80;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,9,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool, Vector3 const&, Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<bool,Vector3_const&,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  local_94 = 0;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC80;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_78._0_4_;
    if (*(long *)(pPVar2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_60;
    if (*(long *)(pPVar2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_94,pPVar2);
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_94,pPVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GridMapEditor::_configure() */

void GridMapEditor::_GLOBAL__sub_I__configure(void)

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
/* List<_CGMEItemSort, DefaultAllocator>::~List() */

void __thiscall
List<_CGMEItemSort,DefaultAllocator>::~List(List<_CGMEItemSort,DefaultAllocator> *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<int>::~MethodBindTC() */

void __thiscall MethodBindTC<int>::~MethodBindTC(MethodBindTC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3i const&, Vector3i const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3i_const&,Vector3i_const&>::~MethodBindT
          (MethodBindT<Vector3i_const&,Vector3i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GridMap*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<GridMap*>::~MethodBindTRC(MethodBindTRC<GridMap*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool, Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<bool,Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<bool,Vector3_const&,Vector3_const&> *this)

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
/* CallableCustomMethodPointer<GridMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GridMapEditor, void, Vector3 const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GridMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GridMapEditor, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GridMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GridMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GridMapEditor,void,Ref<InputEvent>const&> *this)

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


