
/* EditorInspectorToolButtonPlugin::can_handle(Object*) */

undefined8 EditorInspectorToolButtonPlugin::can_handle(Object *param_1)

{
  return 1;
}



/* EditorInspectorToolButtonPlugin::_update_action_icon(Button*, String const&) */

void __thiscall
EditorInspectorToolButtonPlugin::_update_action_icon
          (EditorInspectorToolButtonPlugin *this,Button *param_1,String *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_30;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_30,param_2,false);
  Control::get_editor_theme_icon((StringName *)&local_28);
  Button::set_button_icon((Ref *)param_1);
  if (local_28 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorInspectorToolButtonPlugin::_call_action(Variant const&, StringName const&) */

void __thiscall
EditorInspectorToolButtonPlugin::_call_action
          (EditorInspectorToolButtonPlugin *this,Variant *param_1,StringName *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  bool *pbVar5;
  long in_FS_OFFSET;
  Variant *local_d0;
  long local_c8;
  long local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  long local_a8 [2];
  long local_98 [2];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar5 = (bool *)Variant::get_validated_object();
  if (pbVar5 == (bool *)0x0) {
    StringName::StringName((StringName *)local_98,param_2);
    local_88 = "Failed to get property \"%s\" on a previously freed instance.";
    local_a8[0] = 0;
    local_80 = 0x3b;
    String::parse_latin1((StrRange *)local_a8);
    vformat<StringName>(&local_88,(StrRange *)local_a8,(StringName *)local_98);
    _err_print_error("_call_action","editor/plugins/tool_button_editor_plugin.cpp",0x29,
                     "Parameter \"object\" is null.",&local_88,0,0);
    pcVar3 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_a8[0];
    if (local_a8[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_a8[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8[0] = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_98[0] != 0)) {
      StringName::unref();
    }
  }
  else {
    Object::get((StringName *)local_78,pbVar5);
    if (local_78[0] == 0x19) {
      Variant::operator_cast_to_Callable((Variant *)local_a8);
      cVar4 = Callable::is_valid();
      if (cVar4 == '\0') {
        Callable::Callable((Callable *)local_98,(Callable *)local_a8);
        local_88 = "Tool button action \"%s\" is an invalid callable.";
        local_b8 = 0;
        uStack_b4 = 0;
        local_80 = 0x2f;
        String::parse_latin1((StrRange *)&local_b8);
        vformat<Callable>(&local_88,(StrRange *)&local_b8,(Callable *)local_98);
        _err_print_error("_call_action","editor/plugins/tool_button_editor_plugin.cpp",0x2f,
                         "Condition \"!callable.is_valid()\" is true.",&local_88,0,0);
        pcVar3 = local_88;
        if (local_88 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          LOCK();
          plVar1 = (long *)(CONCAT44(uStack_b4,local_b8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = CONCAT44(uStack_b4,local_b8);
            local_b8 = 0;
            uStack_b4 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Callable::~Callable((Callable *)local_98);
      }
      else {
        local_58[0] = 0;
        local_58[1] = 0;
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        local_50 = (undefined1  [16])0x0;
        Callable::callp((Variant **)local_a8,0,(Variant *)0x0,(CallError *)local_58);
        if (local_b8 != 0) {
          Callable::get_method();
          Variant::get_call_error_text((StringName *)&local_c8,&local_d0,0,(CallError *)0x0);
          Callable::Callable((Callable *)local_98,(Callable *)local_a8);
          local_c0 = 0;
          local_88 = "Error calling tool button action \"%s\": %s";
          local_80 = 0x29;
          String::parse_latin1((StrRange *)&local_c0);
          vformat<Callable,String>
                    (&local_88,(StrRange *)&local_c0,(Callable *)local_98,(StringName *)&local_c8);
          _err_print_error("_call_action","editor/plugins/tool_button_editor_plugin.cpp",0x34,
                           "Condition \"ce.error != Callable::CallError::CALL_OK\" is true.",
                           &local_88,0,0);
          pcVar3 = local_88;
          if (local_88 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          lVar2 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          Callable::~Callable((Callable *)local_98);
          lVar2 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_d0 != (Variant *)0x0)) {
            StringName::unref();
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Callable::~Callable((Callable *)local_a8);
    }
    else {
      Variant::get_type_name(&local_b8);
      StringName::StringName((StringName *)local_98,param_2);
      local_88 = "The value of property \"%s\" is %s, but Callable was expected.";
      local_a8[0] = 0;
      local_80 = 0x3c;
      String::parse_latin1((StrRange *)local_a8);
      vformat<StringName,String>(&local_88,(StrRange *)local_a8,(StringName *)local_98,&local_b8);
      _err_print_error("_call_action","editor/plugins/tool_button_editor_plugin.cpp",0x2c,
                       "Condition \"value.get_type() != Variant::CALLABLE\" is true.",&local_88,0,0)
      ;
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_a8[0];
      if (local_a8[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_a8[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8[0] = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98[0] != 0)) {
        StringName::unref();
      }
      if (CONCAT44(uStack_b4,local_b8) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_b4,local_b8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = CONCAT44(uStack_b4,local_b8);
          local_b8 = 0;
          uStack_b4 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ToolButtonEditorPlugin::ToolButtonEditorPlugin() */

void __thiscall ToolButtonEditorPlugin::ToolButtonEditorPlugin(ToolButtonEditorPlugin *this)

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
  *(code **)this = Variant::Variant;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (ToolButtonEditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00107be8;
  local_30 = (Object *)0x0;
  Ref<EditorInspectorToolButtonPlugin>::instantiate<>
            ((Ref<EditorInspectorToolButtonPlugin> *)&local_30);
  pOVar1 = local_30;
  local_28 = (Object *)0x0;
  if (local_30 == (Object *)0x0) {
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) goto LAB_00100c54;
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
LAB_00100c54:
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      if (pOVar1 == (Object *)0x0) goto LAB_00100c6f;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00100d16;
    }
  }
LAB_00100c6f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100d16:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorToolButtonPlugin::parse_property(Object*, Variant::Type, String const&,
   PropertyHint, String const&, BitField<PropertyUsageFlags>, bool) */

bool EditorInspectorToolButtonPlugin::parse_property
               (Control *param_1,Object *param_2,int param_3,long *param_4,int param_5,bool param_6,
               byte param_7)

{
  long *plVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  Object *pOVar6;
  CallableCustom *pCVar7;
  Variant *pVVar8;
  long lVar9;
  Variant *pVVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  char local_d8 [8];
  String *local_d0;
  Callable local_c8 [16];
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  bVar5 = param_3 != 0x19 || param_5 != 0x27;
  if (bVar5) {
    bVar5 = false;
  }
  else if ((param_7 & 4) != 0) {
    String::rsplit(local_d8,param_6,0x1070b1);
    if (local_d0 == (String *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(local_d0 + -8);
      if (0 < lVar12) {
        local_e8 = 0;
        if (lVar12 == 1) {
          local_b0 = 8;
          local_b8 = "Callable";
          String::parse_latin1((StrRange *)&local_e8);
        }
        else {
          plVar1 = (long *)(*(long *)(local_d0 + 8) + -0x10);
          if (*(long *)(local_d0 + 8) != 0) {
            do {
              lVar12 = *plVar1;
              if (lVar12 == 0) goto LAB_00100e13;
              LOCK();
              lVar9 = *plVar1;
              bVar5 = lVar12 == lVar9;
              if (bVar5) {
                *plVar1 = lVar12 + 1;
                lVar9 = lVar12;
              }
              UNLOCK();
            } while (!bVar5);
            if (lVar9 != -1) {
              local_e8 = *(long *)(local_d0 + 8);
            }
          }
        }
LAB_00100e13:
        pOVar6 = (Object *)EditorInspector::create_inspector_action_button(local_d0);
        Node::set_auto_translate_mode(pOVar6,2);
        BaseButton::set_disabled(SUB81(pOVar6,0));
        pcVar3 = *(code **)(*(long *)pOVar6 + 0x108);
        pCVar7 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar7);
        *(Control **)(pCVar7 + 0x28) = param_1;
        *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar7 + 0x20) = &_LC34;
        *(undefined ***)pCVar7 = &PTR_hash_00108020;
        *(undefined8 *)(pCVar7 + 0x40) = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(pCVar7 + 0x10) = 0;
        *(undefined8 *)(pCVar7 + 0x30) = uVar4;
        *(code **)(pCVar7 + 0x38) = _update_action_icon;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
        *(char **)(pCVar7 + 0x20) = "EditorInspectorToolButtonPlugin::_update_action_icon";
        Callable::Callable(local_c8,pCVar7);
        local_e0 = 0;
        plVar1 = (long *)(local_e8 + -0x10);
        if (local_e8 != 0) {
          do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_00100f1e;
            LOCK();
            lVar9 = *plVar1;
            bVar5 = lVar12 == lVar9;
            if (bVar5) {
              *plVar1 = lVar12 + 1;
              lVar9 = lVar12;
            }
            UNLOCK();
          } while (!bVar5);
          if (lVar9 != -1) {
            local_e0 = local_e8;
          }
        }
LAB_00100f1e:
        Variant::Variant(local_88,pOVar6);
        Variant::Variant(local_70,(String *)&local_e0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        iVar11 = (int)local_c8;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        Callable::bindp((Variant **)&local_b8,iVar11);
        pVVar10 = (Variant *)local_40;
        pVVar8 = pVVar10;
        do {
          pVVar2 = pVVar8 + -0x18;
          pVVar8 = pVVar8 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar8 != local_88);
        (*pcVar3)(pOVar6,SceneStringNames::singleton + 0x210,(Callable *)&local_b8,0);
        Callable::~Callable((Callable *)&local_b8);
        lVar12 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        Callable::~Callable(local_c8);
        pcVar3 = *(code **)(*(long *)pOVar6 + 0x108);
        pCVar7 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(pCVar7);
        *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
        *(undefined **)(pCVar7 + 0x20) = &_LC34;
        *(undefined8 *)(pCVar7 + 0x40) = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        *(undefined ***)pCVar7 = &PTR_hash_001080b0;
        *(undefined8 *)(pCVar7 + 0x30) = uVar4;
        *(code **)(pCVar7 + 0x38) = _call_action;
        *(undefined8 *)(pCVar7 + 0x10) = 0;
        *(Control **)(pCVar7 + 0x28) = param_1;
        CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
        *(char **)(pCVar7 + 0x20) = "EditorInspectorToolButtonPlugin::_call_action";
        Callable::Callable(local_c8,pCVar7);
        local_e0 = 0;
        plVar1 = (long *)(*param_4 + -0x10);
        if (*param_4 != 0) {
          do {
            lVar12 = *plVar1;
            if (lVar12 == 0) goto LAB_001010fc;
            LOCK();
            lVar9 = *plVar1;
            bVar5 = lVar12 == lVar9;
            if (bVar5) {
              *plVar1 = lVar12 + 1;
              lVar9 = lVar12;
            }
            UNLOCK();
          } while (!bVar5);
          if (lVar9 != -1) {
            local_e0 = *param_4;
          }
        }
LAB_001010fc:
        Variant::Variant(local_88,param_2);
        Variant::Variant(local_70,(String *)&local_e0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = local_88;
        pVStack_a0 = local_70;
        Callable::bindp((Variant **)&local_b8,iVar11);
        do {
          pVVar8 = pVVar10 + -0x18;
          pVVar10 = pVVar10 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar10 != local_88);
        (*pcVar3)(pOVar6,SceneStringNames::singleton + 0x238,(Callable *)&local_b8,0);
        Callable::~Callable((Callable *)&local_b8);
        lVar12 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        Callable::~Callable(local_c8);
        EditorInspectorPlugin::add_custom_control(param_1);
        lVar12 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        CowData<String>::_unref((CowData<String> *)&local_d0);
        bVar5 = true;
        goto LAB_00100d6c;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar12,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00100d6c:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorInspectorToolButtonPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorToolButtonPlugin::is_class_ptr(EditorInspectorToolButtonPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1081,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1081,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorToolButtonPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorToolButtonPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorToolButtonPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorToolButtonPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorToolButtonPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorToolButtonPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorToolButtonPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorToolButtonPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorToolButtonPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorToolButtonPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorToolButtonPlugin::_notificationv(int, bool) */

void EditorInspectorToolButtonPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ToolButtonEditorPlugin::is_class_ptr(void*) const */

uint __thiscall ToolButtonEditorPlugin::is_class_ptr(ToolButtonEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1081,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1081,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1082,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ToolButtonEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 ToolButtonEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ToolButtonEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 ToolButtonEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ToolButtonEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 ToolButtonEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ToolButtonEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ToolButtonEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
get_argument_count(CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::
get_argument_count(CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* ToolButtonEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void ToolButtonEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107a88;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107a88;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ToolButtonEditorPlugin::_get_class_namev() const */

undefined8 * ToolButtonEditorPlugin::_get_class_namev(void)

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
LAB_001016c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001016c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ToolButtonEditorPlugin");
      goto LAB_0010172e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ToolButtonEditorPlugin");
LAB_0010172e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::get_object
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
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
      goto LAB_0010185d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010185d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010185d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
get_object(CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
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
      goto LAB_0010195d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010195d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010195d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ToolButtonEditorPlugin::_notificationv(int, bool) */

void __thiscall
ToolButtonEditorPlugin::_notificationv(ToolButtonEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010b008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010b008 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
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
LAB_00101a83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101a83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00101aee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00101aee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorToolButtonPlugin::_get_class_namev() const */

undefined8 * EditorInspectorToolButtonPlugin::_get_class_namev(void)

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
LAB_00101b83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101b83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorToolButtonPlugin");
      goto LAB_00101bee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorToolButtonPlugin"
            );
LAB_00101bee:
  return &_get_class_namev()::_class_name_static;
}



/* ToolButtonEditorPlugin::get_plugin_name() const */

ToolButtonEditorPlugin * __thiscall
ToolButtonEditorPlugin::get_plugin_name(ToolButtonEditorPlugin *this)

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



/* EditorInspectorToolButtonPlugin::get_class() const */

void EditorInspectorToolButtonPlugin::get_class(void)

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



/* ToolButtonEditorPlugin::get_class() const */

void ToolButtonEditorPlugin::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
            if (lVar5 == 0) goto LAB_00101fef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_00101fef:
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
    if (cVar6 != '\0') goto LAB_001020a3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00102153;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_00102153:
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
      if (cVar6 != '\0') goto LAB_001020a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001020a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorToolButtonPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorToolButtonPlugin::is_class(EditorInspectorToolButtonPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
            if (lVar5 == 0) goto LAB_0010228f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_0010228f:
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
    if (cVar6 != '\0') goto LAB_00102343;
  }
  cVar6 = String::operator==(param_1,"EditorInspectorToolButtonPlugin");
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
              if (lVar5 == 0) goto LAB_00102403;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_00102403:
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
      if (cVar6 != '\0') goto LAB_00102343;
    }
    cVar6 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001024ac;
    }
  }
LAB_00102343:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001024ac:
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
        if (pvVar5 == (void *)0x0) goto LAB_00102614;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00102614:
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)PTR__bind_methods_0010b010 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
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
  local_78 = "RefCounted";
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
  if (local_90 == 0) {
LAB_001029a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001029a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001029c6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001029c6:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ToolButtonEditorPlugin::_initialize_classv() */

void ToolButtonEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010b028 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010b018 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010b020 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ToolButtonEditorPlugin";
    local_70 = 0;
    local_50 = 0x16;
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



/* EditorInspectorToolButtonPlugin::_initialize_classv() */

void EditorInspectorToolButtonPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010b028 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010b030 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010b038 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorToolButtonPlugin";
    local_70 = 0;
    local_50 = 0x1f;
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



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
call(CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar4 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar2 + lVar3) + -1);
            }
            cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x15);
            uVar5 = _LC15;
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_58);
            cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,0);
            if (cVar7 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 0;
            }
            Variant::Variant((Variant *)local_48,*param_1);
            (*pcVar10)((long *)(lVar2 + lVar3),(Variant *)local_48,(Variant *)&local_58);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_00103625;
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
  _err_print_error(&_LC14,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0);
  pcVar6 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
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
LAB_00103625:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::call
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Variant *this_00;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar4 << 8);
      LOCK();
      bVar14 = (char)ObjectDB::spin_lock == '\0';
      if (bVar14) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar14) break;
      local_58 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar12[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar13 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001039b5;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001039b5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar13 & 1) != 0) {
          pcVar13 = *(code **)(pcVar13 + *(long *)(lVar2 + lVar3) + -1);
        }
        cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
        uVar5 = _LC16;
        if (cVar7 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        Variant::operator_cast_to_String((Variant *)&local_58);
        cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar7 == '\0') {
LAB_00103a73:
          uVar5 = _LC17;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Button::typeinfo,0), lVar10 == 0))
             && (pOVar8 != (Object *)0x0)) goto LAB_00103a73;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar8 != (Object *)0x0) {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Button::typeinfo,0);
        }
        (*pcVar13)((long *)(lVar2 + lVar3),pOVar8,(Variant *)&local_58);
        pcVar6 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
        goto LAB_001039b5;
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
  _err_print_error(&_LC14,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0);
  pcVar6 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
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
LAB_001039b5:
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
  local_78 = &_LC8;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC8;
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
LAB_00103e48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103e48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103e66;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103e66:
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



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_00104248:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104248;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104265;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104265:
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



/* EditorInspectorToolButtonPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorToolButtonPlugin::_get_property_listv
          (EditorInspectorToolButtonPlugin *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorToolButtonPlugin";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorToolButtonPlugin";
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
LAB_00104698:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104698;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001046b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001046b5:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorToolButtonPlugin",false);
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



/* EditorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorPlugin::is_class(EditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
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
            if (lVar5 == 0) goto LAB_001049df;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_001049df:
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
    if (cVar6 != '\0') goto LAB_00104a93;
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
              if (lVar5 == 0) goto LAB_00104b6b;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_00104b6b:
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
      if (cVar6 != '\0') goto LAB_00104a93;
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
                if (lVar5 == 0) goto LAB_00104c4b;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar5 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
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
LAB_00104c4b:
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
        if (cVar6 != '\0') goto LAB_00104a93;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00104cf4;
    }
  }
LAB_00104a93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104cf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ToolButtonEditorPlugin::is_class(String const&) const */

undefined8 __thiscall ToolButtonEditorPlugin::is_class(ToolButtonEditorPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00104d6f;
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
LAB_00104d6f:
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
    if (cVar5 != '\0') goto LAB_00104e23;
  }
  cVar5 = String::operator==(param_1,"ToolButtonEditorPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104e23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_00104ff8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104ff8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105015;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105015:
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



/* ToolButtonEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ToolButtonEditorPlugin::_get_property_listv(ToolButtonEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "ToolButtonEditorPlugin";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ToolButtonEditorPlugin";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_00105448:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105448;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105465;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105465:
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
  StringName::StringName((StringName *)&local_78,"ToolButtonEditorPlugin",false);
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
  *(code **)this = Variant::Variant;
  if (bVar3) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a70;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00105a70:
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



/* ToolButtonEditorPlugin::~ToolButtonEditorPlugin() */

void __thiscall ToolButtonEditorPlugin::~ToolButtonEditorPlugin(ToolButtonEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107be8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* ToolButtonEditorPlugin::~ToolButtonEditorPlugin() */

void __thiscall ToolButtonEditorPlugin::~ToolButtonEditorPlugin(ToolButtonEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107be8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105ce8) */
/* WARNING: Removing unreachable block (ram,0x00105e18) */
/* WARNING: Removing unreachable block (ram,0x00105fe0) */
/* WARNING: Removing unreachable block (ram,0x00105e24) */
/* WARNING: Removing unreachable block (ram,0x00105e2e) */
/* WARNING: Removing unreachable block (ram,0x00105fc0) */
/* WARNING: Removing unreachable block (ram,0x00105e3a) */
/* WARNING: Removing unreachable block (ram,0x00105e44) */
/* WARNING: Removing unreachable block (ram,0x00105fa0) */
/* WARNING: Removing unreachable block (ram,0x00105e50) */
/* WARNING: Removing unreachable block (ram,0x00105e5a) */
/* WARNING: Removing unreachable block (ram,0x00105f80) */
/* WARNING: Removing unreachable block (ram,0x00105e66) */
/* WARNING: Removing unreachable block (ram,0x00105e70) */
/* WARNING: Removing unreachable block (ram,0x00105f60) */
/* WARNING: Removing unreachable block (ram,0x00105e7c) */
/* WARNING: Removing unreachable block (ram,0x00105e86) */
/* WARNING: Removing unreachable block (ram,0x00105f40) */
/* WARNING: Removing unreachable block (ram,0x00105e92) */
/* WARNING: Removing unreachable block (ram,0x00105e9c) */
/* WARNING: Removing unreachable block (ram,0x00105f20) */
/* WARNING: Removing unreachable block (ram,0x00105ea4) */
/* WARNING: Removing unreachable block (ram,0x00105eba) */
/* WARNING: Removing unreachable block (ram,0x00105ec6) */
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



/* WARNING: Removing unreachable block (ram,0x00106160) */
/* WARNING: Removing unreachable block (ram,0x00106290) */
/* WARNING: Removing unreachable block (ram,0x00106409) */
/* WARNING: Removing unreachable block (ram,0x0010629c) */
/* WARNING: Removing unreachable block (ram,0x001062a6) */
/* WARNING: Removing unreachable block (ram,0x001063eb) */
/* WARNING: Removing unreachable block (ram,0x001062b2) */
/* WARNING: Removing unreachable block (ram,0x001062bc) */
/* WARNING: Removing unreachable block (ram,0x001063cd) */
/* WARNING: Removing unreachable block (ram,0x001062c8) */
/* WARNING: Removing unreachable block (ram,0x001062d2) */
/* WARNING: Removing unreachable block (ram,0x001063af) */
/* WARNING: Removing unreachable block (ram,0x001062de) */
/* WARNING: Removing unreachable block (ram,0x001062e8) */
/* WARNING: Removing unreachable block (ram,0x00106391) */
/* WARNING: Removing unreachable block (ram,0x001062f4) */
/* WARNING: Removing unreachable block (ram,0x001062fe) */
/* WARNING: Removing unreachable block (ram,0x00106373) */
/* WARNING: Removing unreachable block (ram,0x00106306) */
/* WARNING: Removing unreachable block (ram,0x00106310) */
/* WARNING: Removing unreachable block (ram,0x00106358) */
/* WARNING: Removing unreachable block (ram,0x00106318) */
/* WARNING: Removing unreachable block (ram,0x0010632e) */
/* WARNING: Removing unreachable block (ram,0x0010633a) */
/* String vformat<StringName, String>(String const&, StringName const, String const) */

undefined8 *
vformat<StringName,String>(undefined8 *param_1,bool *param_2,StringName *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
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
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00106548) */
/* WARNING: Removing unreachable block (ram,0x00106678) */
/* WARNING: Removing unreachable block (ram,0x00106840) */
/* WARNING: Removing unreachable block (ram,0x00106684) */
/* WARNING: Removing unreachable block (ram,0x0010668e) */
/* WARNING: Removing unreachable block (ram,0x00106820) */
/* WARNING: Removing unreachable block (ram,0x0010669a) */
/* WARNING: Removing unreachable block (ram,0x001066a4) */
/* WARNING: Removing unreachable block (ram,0x00106800) */
/* WARNING: Removing unreachable block (ram,0x001066b0) */
/* WARNING: Removing unreachable block (ram,0x001066ba) */
/* WARNING: Removing unreachable block (ram,0x001067e0) */
/* WARNING: Removing unreachable block (ram,0x001066c6) */
/* WARNING: Removing unreachable block (ram,0x001066d0) */
/* WARNING: Removing unreachable block (ram,0x001067c0) */
/* WARNING: Removing unreachable block (ram,0x001066dc) */
/* WARNING: Removing unreachable block (ram,0x001066e6) */
/* WARNING: Removing unreachable block (ram,0x001067a0) */
/* WARNING: Removing unreachable block (ram,0x001066f2) */
/* WARNING: Removing unreachable block (ram,0x001066fc) */
/* WARNING: Removing unreachable block (ram,0x00106780) */
/* WARNING: Removing unreachable block (ram,0x00106704) */
/* WARNING: Removing unreachable block (ram,0x0010671a) */
/* WARNING: Removing unreachable block (ram,0x00106726) */
/* String vformat<Callable>(String const&, Callable const) */

undefined8 * vformat<Callable>(undefined8 *param_1,bool *param_2,Callable *param_3)

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



/* WARNING: Removing unreachable block (ram,0x001069c0) */
/* WARNING: Removing unreachable block (ram,0x00106af0) */
/* WARNING: Removing unreachable block (ram,0x00106c69) */
/* WARNING: Removing unreachable block (ram,0x00106afc) */
/* WARNING: Removing unreachable block (ram,0x00106b06) */
/* WARNING: Removing unreachable block (ram,0x00106c4b) */
/* WARNING: Removing unreachable block (ram,0x00106b12) */
/* WARNING: Removing unreachable block (ram,0x00106b1c) */
/* WARNING: Removing unreachable block (ram,0x00106c2d) */
/* WARNING: Removing unreachable block (ram,0x00106b28) */
/* WARNING: Removing unreachable block (ram,0x00106b32) */
/* WARNING: Removing unreachable block (ram,0x00106c0f) */
/* WARNING: Removing unreachable block (ram,0x00106b3e) */
/* WARNING: Removing unreachable block (ram,0x00106b48) */
/* WARNING: Removing unreachable block (ram,0x00106bf1) */
/* WARNING: Removing unreachable block (ram,0x00106b54) */
/* WARNING: Removing unreachable block (ram,0x00106b5e) */
/* WARNING: Removing unreachable block (ram,0x00106bd3) */
/* WARNING: Removing unreachable block (ram,0x00106b66) */
/* WARNING: Removing unreachable block (ram,0x00106b70) */
/* WARNING: Removing unreachable block (ram,0x00106bb8) */
/* WARNING: Removing unreachable block (ram,0x00106b78) */
/* WARNING: Removing unreachable block (ram,0x00106b8e) */
/* WARNING: Removing unreachable block (ram,0x00106b9a) */
/* String vformat<Callable, String>(String const&, Callable const, String const) */

undefined8 *
vformat<Callable,String>(undefined8 *param_1,bool *param_2,Callable *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
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
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void Ref<EditorInspectorToolButtonPlugin>::instantiate<>() */

void __thiscall
Ref<EditorInspectorToolButtonPlugin>::instantiate<>(Ref<EditorInspectorToolButtonPlugin> *this)

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
  *(undefined ***)this_00 = &PTR__initialize_classv_00107e90;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_001072f5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_001072f5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_001072f5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
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



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar2 + 0x38) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x28);
      lVar3 = *(long *)((long)pvVar2 + 0x30);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x28);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x30) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x18);
          *(undefined8 *)((long)pvVar2 + 0x18) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)((long)pvVar2 + 0x10));
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



/* EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin() */

void __thiscall
EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin
          (EditorInspectorToolButtonPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001076c4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001076c4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001076c4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001076c4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001076c4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001076c4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00107a88;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin() */

void __thiscall
EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin
          (EditorInspectorToolButtonPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077c4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077c4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077c4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077c4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077c4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001077c4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00107a88;
  Object::~Object((Object *)this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorToolButtonPlugin::_update_action_icon(Button*, String const&) */

void EditorInspectorToolButtonPlugin::_GLOBAL__sub_I__update_action_icon(void)

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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin() */

void __thiscall
EditorInspectorToolButtonPlugin::~EditorInspectorToolButtonPlugin
          (EditorInspectorToolButtonPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ToolButtonEditorPlugin::~ToolButtonEditorPlugin() */

void __thiscall ToolButtonEditorPlugin::~ToolButtonEditorPlugin(ToolButtonEditorPlugin *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Button*, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Button*,String_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorInspectorToolButtonPlugin, void, Variant const&, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorToolButtonPlugin,void,Variant_const&,StringName_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


