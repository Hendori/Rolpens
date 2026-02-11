
/* AudioStreamRandomizerEditorPlugin::edit(Object*) */

void AudioStreamRandomizerEditorPlugin::edit(Object *param_1)

{
  return;
}



/* AudioStreamRandomizerEditorPlugin::handles(Object*) const */

undefined8 AudioStreamRandomizerEditorPlugin::handles(Object *param_1)

{
  return 0;
}



/* AudioStreamRandomizerEditorPlugin::make_visible(bool) */

void AudioStreamRandomizerEditorPlugin::make_visible(bool param_1)

{
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



/* AudioStreamRandomizerEditorPlugin::~AudioStreamRandomizerEditorPlugin() */

void __thiscall
AudioStreamRandomizerEditorPlugin::~AudioStreamRandomizerEditorPlugin
          (AudioStreamRandomizerEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103de8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AudioStreamRandomizerEditorPlugin::~AudioStreamRandomizerEditorPlugin() */

void __thiscall
AudioStreamRandomizerEditorPlugin::~AudioStreamRandomizerEditorPlugin
          (AudioStreamRandomizerEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103de8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* AudioStreamRandomizerEditorPlugin::AudioStreamRandomizerEditorPlugin() */

void __thiscall
AudioStreamRandomizerEditorPlugin::AudioStreamRandomizerEditorPlugin
          (AudioStreamRandomizerEditorPlugin *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::Node;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (AudioStreamRandomizerEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00103de8;
  lVar2 = EditorNode::singleton;
  *(undefined8 *)(this + 0x658) = 0;
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(AudioStreamRandomizerEditorPlugin **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00104090;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar1;
  *(code **)(this_00 + 0x38) = _move_stream_array_element;
  *(undefined **)(this_00 + 0x20) = &_LC42;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "AudioStreamRandomizerEditorPlugin::_move_stream_array_element";
  Callable::Callable(aCStack_48,this_00);
  if (AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::
                                 sname);
    if (iVar3 != 0) {
      _scs_create((char *)&AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::sname);
    }
  }
  EditorData::add_move_array_element_function
            (lVar2 + 0x430,&AudioStreamRandomizerEditorPlugin()::{lambda()#1}::operator()()::sname,
             aCStack_48);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamRandomizerEditorPlugin::_move_stream_array_element(Object*, Object*, String const&,
   int, int) */

void __thiscall
AudioStreamRandomizerEditorPlugin::_move_stream_array_element
          (AudioStreamRandomizerEditorPlugin *this,Object *param_1,Object *param_2,String *param_3,
          int param_4,int param_5)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  List *pLVar9;
  int iVar10;
  ulong uVar11;
  Variant *pVVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  StringName *local_120;
  int local_118;
  int local_114;
  List<PropertyInfo,DefaultAllocator> *local_110;
  undefined8 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined4 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (pOVar8 = (Object *)
               __dynamic_cast(param_1,&Object::typeinfo,&EditorUndoRedoManager::typeinfo,0),
     pOVar8 == (Object *)0x0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_move_stream_array_element",
                       "editor/plugins/audio_stream_randomizer_editor_plugin.cpp",0x31,
                       "Parameter \"undo_redo_man\" is null.",0,0);
      return;
    }
    goto LAB_00101053;
  }
  if ((param_2 != (Object *)0x0) &&
     (pLVar9 = (List *)__dynamic_cast(param_2,&Object::typeinfo,&AudioStreamRandomizer::typeinfo,0),
     pLVar9 != (List *)0x0)) {
    cVar6 = String::operator==(param_3,"stream_");
    if (cVar6 == '\0') {
      _err_print_error("_move_stream_array_element",
                       "editor/plugins/audio_stream_randomizer_editor_plugin.cpp",0x3e,
                       "Method/function failed.","Invalid array prefix for AudioStreamRandomizer.",0
                       ,0);
    }
    else {
      local_118 = AudioStreamRandomizer::get_streams_count();
      local_114 = param_5;
      if (param_4 < 0) {
        iVar7 = param_5;
        if (param_5 < 0) {
          iVar7 = AudioStreamRandomizer::get_streams_count();
          local_118 = 0;
          local_114 = 0;
        }
        iVar10 = (int)&local_a8;
        StringName::StringName((StringName *)&local_d8,"remove_stream",false);
        Variant::Variant((Variant *)local_88,iVar7);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar8,(StringName *)pLVar9,(Variant **)&local_d8,iVar10);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
          StringName::unref();
        }
        local_f8 = (undefined8 *)0x0;
        Object::get_property_list(pLVar9,SUB81(&local_f8,0));
        if ((local_f8 != (undefined8 *)0x0) &&
           (puVar14 = (undefined4 *)*local_f8, puVar14 != (undefined4 *)0x0)) {
LAB_00100757:
          do {
            local_d8 = *puVar14;
            local_d0 = 0;
            if (*(long *)(puVar14 + 2) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(puVar14 + 2));
            }
            StringName::StringName((StringName *)&local_c8,(StringName *)(puVar14 + 4));
            local_c0 = puVar14[6];
            local_b8 = 0;
            if (*(long *)(puVar14 + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(puVar14 + 8));
            }
            local_b0 = puVar14[10];
            cVar6 = String::begins_with((String *)&local_d0);
            if ((cVar6 != '\0') && (String::trim_prefix((String *)&local_f0), local_f0 != 0)) {
              uVar4 = *(ulong *)(local_f0 + -8);
              if ((int)uVar4 != 0) {
                uVar11 = 0;
                uVar13 = 0;
                while (((int)uVar11 < (int)uVar4 + -1 && (uVar4 != uVar11))) {
                  if ((long)uVar4 <= (long)uVar11) {
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,uVar11,uVar4,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  lVar3 = uVar11 * 4;
                  uVar11 = uVar11 + 1;
                  if (9 < *(int *)(local_f0 + lVar3) - 0x30U) break;
                  uVar13 = uVar11 & 0xffffffff;
                }
                if ((int)uVar13 != 0) {
                  String::left((int)(StringName *)&local_e0);
                  iVar7 = String::to_int();
                  lVar3 = local_e0;
                  if (local_e0 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_e0 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_e0 = 0;
                      Memory::free_static((void *)(lVar3 + -0x10),false);
                    }
                  }
                  if ((local_114 <= iVar7) && (iVar7 < local_118)) {
                    StringName::StringName((StringName *)&local_e8,(String *)&local_d0,false);
                    Object::get((StringName *)local_88,(bool *)pLVar9);
                    StringName::StringName((StringName *)&local_e0,(String *)&local_d0,false);
                    EditorUndoRedoManager::add_undo_property
                              (pOVar8,(StringName *)pLVar9,(Variant *)&local_e0);
                    if ((StringName::configured != '\0') && (local_e0 != 0)) {
                      StringName::unref();
                    }
                    if (Variant::needs_deinit[local_88[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_e8 != 0)) {
                      StringName::unref();
                    }
                  }
                  if (local_f0 == 0) goto LAB_00100780;
                }
              }
              lVar3 = local_f0;
              LOCK();
              plVar1 = (long *)(local_f0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_f0 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
LAB_00100780:
            lVar3 = local_b8;
            if (local_b8 != 0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b8 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (local_c8 != 0)) {
              StringName::unref();
            }
            lVar3 = local_d0;
            if (local_d0 != 0) {
              LOCK();
              plVar1 = (long *)(local_d0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_d0 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            puVar14 = *(undefined4 **)(puVar14 + 0xc);
          } while (puVar14 != (undefined4 *)0x0);
          iVar10 = (int)&local_a8;
          if (-1 < param_4) goto LAB_00100c4a;
        }
        local_120 = (StringName *)&local_d8;
        StringName::StringName(local_120,"add_stream",false);
        Variant::Variant((Variant *)local_88,param_5);
        Variant::Variant((Variant *)local_70,(Object *)0x0);
        local_50 = (undefined1  [16])0x0;
        pVVar12 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar8,(StringName *)pLVar9,(Variant **)local_120,iVar10);
        do {
          pVVar2 = pVVar12 + -0x18;
          pVVar12 = pVVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar12 != (Variant *)local_88);
      }
      else if (param_5 < 0) {
        StringName::StringName((StringName *)&local_d8,"add_stream",false);
        Variant::Variant((Variant *)local_88,param_4);
        Variant::Variant((Variant *)local_70,(Object *)0x0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar12 = (Variant *)local_40;
        iVar10 = (int)&local_a8;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar8,(StringName *)pLVar9,(Variant **)&local_d8,iVar10);
        do {
          pVVar2 = pVVar12 + -0x18;
          pVVar12 = pVVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar12 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
          StringName::unref();
        }
        local_f8 = (undefined8 *)0x0;
        Object::get_property_list(pLVar9,SUB81(&local_f8,0));
        if (local_f8 != (undefined8 *)0x0) {
          puVar14 = (undefined4 *)*local_f8;
          local_114 = param_4;
          if (puVar14 != (undefined4 *)0x0) goto LAB_00100757;
          goto LAB_00100c4a;
        }
LAB_00100ef0:
        local_120 = (StringName *)&local_d8;
        StringName::StringName(local_120,"remove_stream",false);
        Variant::Variant((Variant *)local_88,param_4);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar8,(StringName *)pLVar9,(Variant **)local_120,iVar10);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        local_f8 = (undefined8 *)0x0;
        if (param_4 <= param_5) {
          local_114 = param_4;
        }
        iVar7 = param_5;
        if (param_5 <= param_4) {
          iVar7 = param_4;
        }
        iVar10 = iVar7 + 1;
        if (local_118 <= iVar7 + 1) {
          iVar10 = local_118;
        }
        Object::get_property_list(pLVar9,SUB81(&local_f8,0));
        if (local_f8 == (undefined8 *)0x0) {
          iVar10 = (int)&local_a8;
        }
        else {
          puVar14 = (undefined4 *)*local_f8;
          local_118 = iVar10;
          if (puVar14 != (undefined4 *)0x0) goto LAB_00100757;
          iVar10 = (int)&local_a8;
LAB_00100c4a:
          if (param_5 < 0) goto LAB_00100ef0;
        }
        local_120 = (StringName *)&local_d8;
        StringName::StringName(local_120,"move_stream",false);
        Variant::Variant((Variant *)local_88,param_4);
        Variant::Variant((Variant *)local_70,param_5);
        local_50 = (undefined1  [16])0x0;
        pVVar12 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar8,(StringName *)pLVar9,(Variant **)local_120,iVar10);
        do {
          pVVar2 = pVVar12 + -0x18;
          pVVar12 = pVVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar12 != (Variant *)local_88);
      }
      local_110 = (List<PropertyInfo,DefaultAllocator> *)&local_f8;
      if ((StringName::configured != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
        StringName::unref();
      }
      List<PropertyInfo,DefaultAllocator>::~List(local_110);
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101053:
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



/* AudioStreamRandomizerEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AudioStreamRandomizerEditorPlugin::is_class_ptr
          (AudioStreamRandomizerEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1041,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1041,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1041,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1041,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamRandomizerEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamRandomizerEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamRandomizerEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamRandomizerEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamRandomizerEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamRandomizerEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamRandomizerEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamRandomizerEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamRandomizerEditorPlugin::has_main_screen() const */

undefined8 AudioStreamRandomizerEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::get_argument_count
          (CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
           *this,bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* AudioStreamRandomizerEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AudioStreamRandomizerEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* AudioStreamRandomizerEditorPlugin::_get_class_namev() const */

undefined8 * AudioStreamRandomizerEditorPlugin::_get_class_namev(void)

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
LAB_001012a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001012a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamRandomizerEditorPlugin");
      goto LAB_0010130e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AudioStreamRandomizerEditorPlugin");
LAB_0010130e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::get_object(CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
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
      goto LAB_0010143d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010143d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010143d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AudioStreamRandomizerEditorPlugin::_notificationv(int, bool) */

void __thiscall
AudioStreamRandomizerEditorPlugin::_notificationv
          (AudioStreamRandomizerEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00106008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00106008 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* AudioStreamRandomizerEditorPlugin::get_plugin_name() const */

AudioStreamRandomizerEditorPlugin * __thiscall
AudioStreamRandomizerEditorPlugin::get_plugin_name(AudioStreamRandomizerEditorPlugin *this)

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



/* AudioStreamRandomizerEditorPlugin::get_class() const */

void AudioStreamRandomizerEditorPlugin::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_00101834;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00101834:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* AudioStreamRandomizerEditorPlugin::_initialize_classv() */

void AudioStreamRandomizerEditorPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
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
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00106020 != Node::_bind_methods) {
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
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00106010 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00106018 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamRandomizerEditorPlugin";
    local_70 = 0;
    local_50 = 0x21;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::call(CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Variant *pVVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  Object *pOVar11;
  Object *pOVar12;
  Object *pOVar13;
  uint uVar14;
  ulong *puVar15;
  code *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar14 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar5 << 8);
      LOCK();
      bVar17 = (char)ObjectDB::spin_lock == '\0';
      if (bVar17) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar17) break;
      local_58 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar15 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar15 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar15[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar16 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if (5 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
          goto LAB_00101e8c;
        }
        if (param_2 != 5) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 5;
          goto LAB_00101e8c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar16 & 1) != 0) {
          pcVar16 = *(code **)(pcVar16 + *(long *)(lVar2 + lVar3) + -1);
        }
        cVar8 = Variant::can_convert_strict(*(undefined4 *)param_1[4],2);
        uVar6 = _LC13;
        if (cVar8 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        iVar9 = Variant::operator_cast_to_int(param_1[4]);
        cVar8 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar6 = _LC14;
        if (cVar8 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        iVar10 = Variant::operator_cast_to_int(param_1[3]);
        cVar8 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
        uVar6 = _LC15;
        if (cVar8 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        Variant::operator_cast_to_String((Variant *)&local_58);
        cVar8 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar8 == '\0') {
LAB_00101fa4:
          uVar6 = _LC16;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        else {
          pVVar4 = param_1[1];
          pOVar11 = Variant::operator_cast_to_Object_(pVVar4);
          pOVar12 = Variant::operator_cast_to_Object_(pVVar4);
          if ((pOVar12 == (Object *)0x0) && (pOVar11 != (Object *)0x0)) goto LAB_00101fa4;
        }
        pOVar11 = Variant::operator_cast_to_Object_(param_1[1]);
        cVar8 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar8 == '\0') {
LAB_00101fd9:
          uVar6 = _LC17;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar6;
        }
        else {
          pVVar4 = *param_1;
          pOVar12 = Variant::operator_cast_to_Object_(pVVar4);
          pOVar13 = Variant::operator_cast_to_Object_(pVVar4);
          if ((pOVar12 != (Object *)0x0) && (pOVar13 == (Object *)0x0)) goto LAB_00101fd9;
        }
        pOVar12 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar16)((long *)(lVar2 + lVar3),pOVar12,pOVar11,(Variant *)&local_58,iVar10,iVar9);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        goto LAB_00101e8c;
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
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)&local_70);
  operator+((char *)&local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)&local_68);
  _err_print_error(&_LC12,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0);
  pcVar7 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_00101e8c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamRandomizerEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AudioStreamRandomizerEditorPlugin::is_class(AudioStreamRandomizerEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001022bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001022bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00102373;
  }
  cVar6 = String::operator==(param_1,"AudioStreamRandomizerEditorPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001024e3;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001024e3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00102373;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_001025c3;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_001025c3:
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_00102373;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar4 = *(long *)(lVar2 + 0x20);
          if (lVar4 == 0) {
            local_60 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar4 + 8);
            local_60 = 0;
            if (pcVar3 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
              if (*(long *)(lVar4 + 0x10) != 0) {
                do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010244b;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
                  local_60 = *(long *)(lVar4 + 0x10);
                }
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
LAB_0010244b:
          cVar6 = String::operator==(param_1,(String *)&local_60);
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
          if (cVar6 != '\0') goto LAB_00102373;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_001026d9;
      }
    }
  }
LAB_00102373:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001026d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC6;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC6;
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
LAB_00102848:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102848;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102866;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102866:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
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
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
  if (local_90 == 0) {
LAB_00102c48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102c48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102c65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102c65:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* AudioStreamRandomizerEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
AudioStreamRandomizerEditorPlugin::_get_property_listv
          (AudioStreamRandomizerEditorPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamRandomizerEditorPlugin";
  local_70 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamRandomizerEditorPlugin";
  local_98 = 0;
  local_70 = 0x21;
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
LAB_00103098:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103098;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001030b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001030b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamRandomizerEditorPlugin",false);
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(code **)this = Node::Node;
  if (bVar3) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001036c0;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_001036c0:
  if (*(long *)(this + 0x418) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x418) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x418);
      *(undefined8 *)(this + 0x418) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x410) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x410) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x410);
      *(undefined8 *)(this + 0x410) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Node::~Node((Node *)this);
      return;
    }
  }
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* AudioStreamRandomizerEditorPlugin::edit(Object*) */

void AudioStreamRandomizerEditorPlugin::_GLOBAL__sub_I_edit(void)

{
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin, void, Object*, Object*, String
   const&, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamRandomizerEditorPlugin,void,Object*,Object*,String_const&,int,int>
           *this)

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


