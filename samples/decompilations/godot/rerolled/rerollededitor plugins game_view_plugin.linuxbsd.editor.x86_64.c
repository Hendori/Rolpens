/* GameView::_remote_window_title_changed(String) */void GameView::_remote_window_title_changed(long param_1) {
   WindowWrapper::set_window_title(*(String**)( param_1 + 0xa18 ));
   return;
}
/* GameView::_update_floating_window_settings() */void GameView::_update_floating_window_settings(GameView *this) {
   undefined8 uVar1;
   char cVar2;
   undefined4 uVar3;
   undefined8 extraout_RDX;
   cVar2 = WindowWrapper::get_window_enabled();
   if (cVar2 == '\0') {
      return;
   }

   uVar1 = WindowWrapper::get_window_rect();
   *(undefined8*)( this + 0xa4c ) = uVar1;
   *(undefined8*)( this + 0xa54 ) = extraout_RDX;
   uVar3 = WindowWrapper::get_window_screen();
   *(undefined4*)( this + 0xa5c ) = uVar3;
   return;
}
/* GameView::_embedded_process_focused() */void GameView::_embedded_process_focused(GameView *this) {
   char cVar1;
   if (this[0xa38] == (GameView)0x0) {
      return;
   }

   cVar1 = WindowWrapper::get_window_enabled();
   if (cVar1 != '\0') {
      return;
   }

   EditorMainScreen::select((int)*(undefined8*)( EditorNode::singleton + 0x990 ));
   return;
}
/* GameView::_window_close_request() */void GameView::_window_close_request(GameView *this) {
   undefined8 uVar1;
   long lVar2;
   char cVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_48[16];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = EditorRunBar::is_playing();
   if (( cVar3 != '\0' ) && ( ( cVar3 = EmbeddedProcess::is_embedding_completed() ),cVar3 != '\0' || ( cVar3 = EmbeddedProcess::is_embedding_in_progress() ),cVar3 != '\0' )) {
      if (( this[0xa40] == (GameView)0x0 ) && ( cVar3 = EmbeddedProcess::is_embedding_in_progress() ),cVar3 == '\0') {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            EmbeddedProcess::request_close();
            return;
         }

         goto LAB_00100262;
      }

      EmbeddedProcess::reset();
      lVar2 = EditorRunBar::singleton;
      this_00 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(this_00);
      *(long*)( this_00 + 0x28 ) = lVar2;
      *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)this_00 = &PTR_hash_00118668;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      uVar1 = *(undefined8*)( lVar2 + 0x60 );
      *(undefined8*)( this_00 + 0x10 ) = 0;
      *(undefined8*)( this_00 + 0x30 ) = uVar1;
      *(undefined**)( this_00 + 0x20 ) = &_LC0;
      *(code**)( this_00 + 0x38 ) = EditorRunBar::stop_playing;
      CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
      *(char**)( this_00 + 0x20 ) = "EditorRunBar::stop_playing";
      Callable::Callable(aCStack_48, this_00);
      Variant::Variant((Variant*)local_38, 0);
      Callable::call_deferredp((Variant**)aCStack_48, 0);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

      Callable::~Callable(aCStack_48);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100262:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GameViewPlugin::_feature_profile_changed() */void GameViewPlugin::_feature_profile_changed(GameViewPlugin *this) {
   long lVar1;
   long lVar2;
   byte bVar3;
   char cVar4;
   long in_FS_OFFSET;
   Object *local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorFeatureProfileManager::get_current_profile();
   if (local_18 == (Object*)0x0) {
      if (*(long*)( this + 0x670 ) == 0) {
         lVar2 = *(long*)( this + 0x660 );
      }
 else {
         *(undefined1*)( *(long*)( this + 0x670 ) + 0x228 ) = 1;
         lVar2 = *(long*)( this + 0x660 );
      }

      if (lVar2 != 0) {
         *(undefined1*)( lVar2 + 0xa20 ) = 1;
      }

   }
 else {
      bVar3 = EditorFeatureProfile::is_feature_disabled();
      if (*(long*)( this + 0x670 ) != 0) {
         *(byte*)( *(long*)( this + 0x670 ) + 0x228 ) = bVar3 ^ 1;
      }

      if (*(long*)( this + 0x660 ) != 0) {
         *(byte*)( *(long*)( this + 0x660 ) + 0xa20 ) = bVar3 ^ 1;
      }

      if (( ( local_18 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_18 + 0x140 ))(local_18);
      Memory::free_static(local_18, false);
   }

}
if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GameViewPlugin::make_visible(bool) */void GameViewPlugin::make_visible(GameViewPlugin *this, bool param_1) {
   if (param_1) {
      CanvasItem::show();
      return;
   }

   CanvasItem::hide();
   return;
}
/* GameViewDebugger::_session_stopped() */void __thiscall GameViewDebugger::_session_stopped(GameViewDebugger *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x228] != (GameViewDebugger)0x0) {
    if (_session_stopped()::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_session_stopped()::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_session_stopped()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_session_stopped()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_session_stopped()::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&_session_stopped()::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::_window_visibility_changed(bool) */

void GameViewPlugin::_window_visibility_changed(bool param_1)

{
  long lVar1;
  char cVar2;
  undefined7 in_register_00000039;
  
  cVar2 = WindowWrapper::get_window_enabled();
  if (cVar2 == '\0') {
    return;
  }
  lVar1 = *(long *)(CONCAT71(in_register_00000039,param_1) + 0x678);
  if ((lVar1 != 0) && (1 < *(uint *)(lVar1 + -8))) {
    EditorInterface::set_main_screen_editor(EditorInterface::singleton);
    return;
  }
  EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
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



/* GameViewPlugin::_save_last_editor(String const&) */

void __thiscall GameViewPlugin::_save_last_editor(GameViewPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1e8) == get_plugin_name) {
    local_40 = 0;
    local_38 = &_LC10;
    local_30 = 4;
    String::parse_latin1((StrRange *)&local_40);
  }
  else {
    (**(code **)(*(long *)this + 0x1e8))(&local_40,this);
  }
  cVar3 = String::operator!=((String *)param_1,(String *)&local_40);
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
  if ((cVar3 == '\0') || (*(long *)(this + 0x678) == *(long *)param_1)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x678),(CowData *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_embedding_failed() */

void __thiscall GameView::_embedding_failed(GameView *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pSVar2 = *(String **)(this + 0xaf0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = "Connection impossible to the game process.";
  local_58 = 0;
  local_40 = 0x2a;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  Label::set_text(pSVar2);
  pcVar4 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar3 = local_58;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewDebugger::set_is_feature_enabled(bool) */

void __thiscall GameViewDebugger::set_is_feature_enabled(GameViewDebugger *this,bool param_1)

{
  this[0x228] = (GameViewDebugger)param_1;
  return;
}



/* GameViewDebugger::set_camera_override(bool) */

void __thiscall GameViewDebugger::set_camera_override(GameViewDebugger *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1) {
    uVar1 = *(undefined4 *)(this + 0x238);
  }
  EditorDebuggerNode::set_camera_override(EditorDebuggerNode::singleton,uVar1);
  return;
}



/* GameViewDebugger::set_camera_manipulate_mode(EditorDebuggerNode::CameraOverride) */

void __thiscall
GameViewDebugger::set_camera_manipulate_mode(GameViewDebugger *this,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(this + 0x238) = param_2;
  iVar1 = EditorDebuggerNode::get_camera_override();
  if (iVar1 == 0) {
    return;
  }
  EditorDebuggerNode::set_camera_override
            (EditorDebuggerNode::singleton,*(undefined4 *)(this + 0x238));
  return;
}



/* GameView::_show_update_window_wrapper() */

void __thiscall GameView::_show_update_window_wrapper(GameView *this)

{
  Vector2 *pVVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_c0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  Vector2i local_54 [8];
  Vector2i local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorRun::get_window_placement();
  local_c0 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 0xa4c));
  local_90 = *(undefined8 *)(this + 0xa54);
  uVar4 = *(undefined4 *)(this + 0xa5c);
  local_88 = Control::get_custom_minimum_size();
  pVVar1 = *(Vector2 **)(this + 0xae8);
  local_70 = 0;
  local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_70);
  Control::set_custom_minimum_size(pVVar1);
  (**(code **)(*(long *)this + 0x2f8))(this);
  local_80 = WindowWrapper::get_margins_size();
  (**(code **)(**(long **)(this + 0xa18) + 0x2f8))();
  uVar5 = Control::get_global_position();
  uVar6 = Control::get_global_position();
  local_a0._0_4_ = (float)uVar6 - (float)uVar5;
  local_a0._4_4_ = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
  if ((local_a0._4_4_ == 0.0) && ((float)local_a0 == 0.0)) {
    local_a0._4_4_ = extraout_XMM0_Db_00;
  }
  iVar3 = EmbeddedProcess::get_margin_size(*(undefined8 *)(this + 0xae8),0);
  local_a0._0_4_ = (float)iVar3 + (float)local_a0;
  iVar3 = EmbeddedProcess::get_margin_size(*(undefined8 *)(this + 0xae8),1);
  local_a0._4_4_ = (float)iVar3 + local_a0._4_4_;
  uVar5 = WindowWrapper::get_margins_top_left();
  local_a0 = CONCAT44((float)((ulong)uVar5 >> 0x20) + local_a0._4_4_,(float)uVar5 + (float)local_a0)
  ;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0xae8));
  uVar5 = EmbeddedProcess::get_margins_size();
  local_68 = _LC16;
  local_98 = CONCAT44(extraout_XMM0_Db + (float)((ulong)uVar5 >> 0x20),(float)uVar5 + 0.0);
  cVar2 = Vector2i::operator!=(local_54,(Vector2i *)&local_68);
  if (cVar2 != '\0') {
    local_70 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a0);
    local_68 = Vector2i::operator-(local_54,(Vector2i *)&local_70);
    local_c0 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
    uVar4 = local_58;
  }
  local_68 = 0;
  cVar2 = Vector2i::operator!=(local_4c,(Vector2i *)&local_68);
  if (cVar2 != '\0') {
    local_68 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_80);
    local_78 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
    local_70 = Vector2i::operator+(local_4c,(Vector2i *)&local_78);
    local_90 = Vector2i::operator+((Vector2i *)&local_70,(Vector2i *)&local_68);
  }
  uVar5 = *(undefined8 *)(this + 0xa18);
  local_68 = 0;
  local_60 = 0;
  auVar7 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_68);
  uVar6 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_90);
  WindowWrapper::restore_window_from_saved_position
            (local_c0,uVar6,auVar7._0_8_,auVar7._8_8_,uVar5,uVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_update_debugger_buttons() */

void __thiscall GameView::_update_debugger_buttons(GameView *this)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0xa24);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xaa0),0));
  iVar4 = MenuButton::get_popup();
  if (iVar1 == 0) {
    PopupMenu::set_item_disabled(iVar4,false);
    PopupMenu::set_item_disabled(iVar4,true);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa60),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xaa0),0));
  }
  else {
    cVar3 = BaseButton::is_pressed();
    if (cVar3 != '\0') {
      PopupMenu::get_item_index(iVar4);
      PopupMenu::is_item_checked(iVar4);
    }
    PopupMenu::set_item_disabled(iVar4,false);
    PopupMenu::set_item_disabled(iVar4,true);
  }
  uVar2 = *(undefined8 *)(this + 0xa68);
  BaseButton::is_pressed();
  BaseButton::set_disabled(SUB81(uVar2,0));
  return;
}



/* GameView::_camera_override_button_toggled(bool) */

void __thiscall GameView::_camera_override_button_toggled(GameView *this,bool param_1)

{
  undefined4 uVar1;
  
  _update_debugger_buttons(this);
  uVar1 = 0;
  if (param_1) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0xa10) + 0x238);
  }
  EditorDebuggerNode::set_camera_override(EditorDebuggerNode::singleton,uVar1);
  return;
}



/* GameView::_update_embed_menu_options() */

void __thiscall GameView::_update_embed_menu_options(GameView *this)

{
  bool bVar1;
  int iVar2;
  
  WindowWrapper::is_window_available();
  iVar2 = MenuButton::get_popup();
  bVar1 = (bool)PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_checked(iVar2,bVar1);
  bVar1 = (bool)PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_checked(iVar2,bVar1);
  bVar1 = (bool)PopupMenu::get_item_index(iVar2);
  PopupMenu::set_item_disabled(iVar2,bVar1);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab8),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac8),0));
  return;
}



/* GameView::_update_embed_window_size() */

void __thiscall GameView::_update_embed_window_size(GameView *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_2c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa40] == (GameView)0x0) {
    if (*(uint *)(this + 0xa3c) < 2) {
      EditorRun::get_window_placement();
      EmbeddedProcess::set_window_size(*(undefined8 *)(this + 0xae8),local_2c);
    }
    else {
      EmbeddedProcess::set_window_size(*(undefined8 *)(this + 0xae8),0);
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      EmbeddedProcess::set_keep_aspect(SUB81(*(undefined8 *)(this + 0xae8),0));
      return;
    }
  }
  else {
    uVar2 = *(undefined8 *)(this + 0xae8);
    uVar3 = Vector2::operator_cast_to_Vector2i((Vector2 *)(this + 0xa44));
    EmbeddedProcess::set_window_size(uVar2,uVar3);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      EmbeddedProcess::set_keep_aspect(SUB81(*(undefined8 *)(this + 0xae8),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_debugger_breaked(bool, bool) */

void GameView::_debugger_breaked(bool param_1,bool param_2)

{
  undefined8 extraout_RDX;
  undefined7 in_register_00000039;
  GameView *this;
  long in_FS_OFFSET;
  undefined8 uVar1;
  undefined8 local_20 [2];
  long local_10;
  
  this = (GameView *)CONCAT71(in_register_00000039,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa40] == (GameView)param_2) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0xa40] = (GameView)param_2;
    if (param_2) {
      EmbeddedProcess::get_screen_embedded_window_rect();
      local_20[0] = extraout_RDX;
      uVar1 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_20);
      *(undefined8 *)(this + 0xa44) = uVar1;
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_embed_window_size(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_size_mode_button_pressed(int) */

void __thiscall GameView::_size_mode_button_pressed(GameView *this,int param_1)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xa3c) = param_1;
  pSVar3 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,param_1);
  local_68 = "embed_size_mode";
  local_70 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "game_view";
  local_78 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar3,(String *)&local_78,(Variant *)&local_70);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  _update_embed_menu_options(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_embed_window_size(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::set_is_feature_enabled(bool) */

void __thiscall GameView::set_is_feature_enabled(GameView *this,bool param_1)

{
  this[0xa20] = (GameView)param_1;
  return;
}



/* GameView::get_state() const */

GameView * __thiscall GameView::get_state(GameView *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  bVar1 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_58,bVar1);
  Variant::Variant((Variant *)local_78,"hide_selection");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    cVar2 = BaseButton::is_pressed();
    iVar3 = 1;
    if (cVar2 != '\0') goto LAB_00101472;
  }
  else {
    iVar3 = 0;
LAB_00101472:
    Variant::Variant((Variant *)local_58,iVar3);
    Variant::Variant((Variant *)local_78,"select_mode");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)this);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  iVar3 = MenuButton::get_popup();
  PopupMenu::get_item_index(iVar3);
  cVar2 = PopupMenu::is_item_checked(iVar3);
  if (cVar2 == '\0') {
    PopupMenu::get_item_index(iVar3);
    cVar2 = PopupMenu::is_item_checked(iVar3);
    iVar3 = 3;
    if (cVar2 == '\0') goto LAB_00101387;
  }
  else {
    iVar3 = 2;
  }
  Variant::Variant((Variant *)local_58,iVar3);
  Variant::Variant((Variant *)local_78,"camera_override_mode");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00101387:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::get_state() const */

GameViewPlugin * __thiscall GameViewPlugin::get_state(GameViewPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GameView::get_state((GameView *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::_focus_another_editor() */

void __thiscall GameViewPlugin::_focus_another_editor(GameViewPlugin *this)

{
  char cVar1;
  
  cVar1 = WindowWrapper::get_window_enabled();
  if (cVar1 == '\0') {
    return;
  }
  if ((*(long *)(this + 0x678) != 0) && (1 < *(uint *)(*(long *)(this + 0x678) + -8))) {
    EditorInterface::set_main_screen_editor(EditorInterface::singleton);
    return;
  }
  EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
  return;
}



/* GameViewPlugin::selected_notify() */

void __thiscall GameViewPlugin::selected_notify(GameViewPlugin *this)

{
  char cVar1;
  
  cVar1 = WindowWrapper::get_window_enabled();
  if (cVar1 == '\0') {
    return;
  }
  WindowWrapper::grab_window_focus();
  _focus_another_editor(this);
  return;
}



/* GameViewPlugin::_is_window_wrapper_enabled() const */

void GameViewPlugin::_is_window_wrapper_enabled(void)

{
  WindowWrapper::get_window_enabled();
  return;
}



/* GameView::_detach_script_debugger() */

void __thiscall GameView::_detach_script_debugger(GameView *this)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  GameView local_48 [24];
  long local_30;
  
  plVar1 = *(long **)(this + 0xa30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<GameView,String>
              (local_48,(char *)this,(_func_void_String *)"&GameView::_remote_window_title_changed")
    ;
    StringName::StringName((StringName *)&local_50,"remote_window_title_changed",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    *(undefined8 *)(this + 0xa30) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_attach_script_debugger() */

void __thiscall GameView::_attach_script_debugger(GameView *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_50;
  GameView local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa30) != 0) {
    _detach_script_debugger(this);
  }
  *(undefined8 *)(this + 0xa30) = 0;
  do {
    lVar5 = EditorDebuggerNode::get_debugger((int)EditorDebuggerNode::singleton);
    if (lVar5 == 0) {
      plVar4 = *(long **)(this + 0xa30);
      if (plVar4 == (long *)0x0) goto LAB_001017a6;
      goto LAB_001017d0;
    }
    plVar4 = (long *)EditorDebuggerNode::get_debugger((int)EditorDebuggerNode::singleton);
  } while ((((long *)plVar4[0x16d] == (long *)0x0) ||
           (cVar2 = (**(code **)(*(long *)plVar4[0x16d] + 0x150))(), cVar2 == '\0')) ||
          (lVar5 = plVar4[0x17f], iVar3 = EmbeddedProcess::get_embedded_pid(), iVar3 != (int)lVar5))
  ;
  *(long **)(this + 0xa30) = plVar4;
LAB_001017d0:
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<GameView,String>
            (local_48,(char *)this,(_func_void_String *)"&GameView::_remote_window_title_changed");
  StringName::StringName((StringName *)&local_50,"remote_window_title_changed",false);
  (*pcVar1)(plVar4,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
LAB_001017a6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameView::_sessions_changed() */

void __thiscall GameView::_sessions_changed(GameView *this)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Variant *this_00;
  Object *pOVar6;
  long in_FS_OFFSET;
  Array aAStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0xa24) = 0;
  EditorDebuggerPlugin::get_sessions();
  for (iVar5 = 0; iVar4 = Array::size(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
    this_00 = (Variant *)Array::operator[]((int)aAStack_38);
    pOVar6 = Variant::operator_cast_to_Object_(this_00);
    if (pOVar6 != (Object *)0x0) {
      __dynamic_cast(pOVar6,&Object::typeinfo,&EditorDebuggerSession::typeinfo,0);
    }
    cVar3 = EditorDebuggerSession::is_active();
    if (cVar3 != '\0') {
      *(int *)(this + 0xa24) = *(int *)(this + 0xa24) + 1;
    }
  }
  _update_debugger_buttons(this);
  cVar3 = EmbeddedProcess::is_embedding_completed();
  if ((cVar3 != '\0') &&
     ((((*(long *)(this + 0xa30) == 0 ||
        (plVar1 = *(long **)(*(long *)(this + 0xa30) + 0xb68), plVar1 == (long *)0x0)) ||
       (cVar3 = (**(code **)(*plVar1 + 0x150))(), cVar3 == '\0')) ||
      (uVar2 = *(undefined8 *)(*(long *)(this + 0xa30) + 0xbf8),
      iVar5 = EmbeddedProcess::get_embedded_pid(), iVar5 != (int)uVar2)))) {
    _attach_script_debugger(this);
  }
  Array::~Array(aAStack_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameViewPlugin::_notification(int) */

void __thiscall GameViewPlugin::_notification(GameViewPlugin *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  long local_50;
  Object *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    local_48[0] = (Object *)0x0;
    if (((*(long *)(this + 0x670) != 0) &&
        (pOVar3 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x670),&Object::typeinfo,
                                 &EditorDebuggerPlugin::typeinfo,0), pOVar3 != (Object *)0x0)) &&
       (local_48[0] = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_48[0] = (Object *)0x0;
    }
    EditorPlugin::add_debugger_plugin(this);
    if (((local_48[0] != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_48[0], cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48[0]), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pcVar1 = *(code **)(*(long *)this + 0x108);
    create_custom_callable_function_pointer<GameViewPlugin,String_const&>
              ((GameViewPlugin *)local_48,(char *)this,
               (_func_void_String_ptr *)"&GameViewPlugin::_save_last_editor");
    StringName::StringName((StringName *)&local_50,"main_screen_changed",false);
    (*pcVar1)(this,(StringName *)&local_50,(GameViewPlugin *)local_48,0);
  }
  else {
    if (param_1 != 0xb) goto LAB_00101ac9;
    local_48[0] = (Object *)0x0;
    if (((*(long *)(this + 0x670) != 0) &&
        (pOVar3 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x670),&Object::typeinfo,
                                 &EditorDebuggerPlugin::typeinfo,0), pOVar3 != (Object *)0x0)) &&
       (local_48[0] = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_48[0] = (Object *)0x0;
    }
    EditorPlugin::remove_debugger_plugin(this);
    if (((local_48[0] != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_48[0], cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48[0]), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pcVar1 = *(code **)(*(long *)this + 0x110);
    create_custom_callable_function_pointer<GameViewPlugin,String_const&>
              ((GameViewPlugin *)local_48,(char *)this,
               (_func_void_String_ptr *)"&GameViewPlugin::_save_last_editor");
    StringName::StringName((StringName *)&local_50,"main_screen_changed",false);
    (*pcVar1)(this,(StringName *)&local_50,(GameViewPlugin *)local_48);
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
LAB_00101ac9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_get_embed_available() [clone .part.0] */

long __thiscall GameView::_get_embed_available(GameView *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant aVStack_88 [8];
  long local_80 [3];
  char local_64;
  char local_63;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar4 = 5;
  cVar2 = Viewport::is_embedding_subwindows();
  if (cVar2 != '\0') goto LAB_00101cc4;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)local_80,"display/display_server/driver",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String(aVStack_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80[0] != 0)) {
    StringName::unref();
  }
  cVar2 = String::operator==((String *)aVStack_88,"headless");
  if (cVar2 == '\0') {
    cVar2 = String::operator==((String *)aVStack_88,"wayland");
    if (cVar2 != '\0') goto LAB_00101cb7;
    lVar4 = 4;
    EditorRun::get_window_placement();
    if (local_63 == '\0') {
      if (local_64 == '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)local_80,"display/window/size/mode",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80[0] != 0)) {
          StringName::unref();
        }
        lVar4 = 2;
        if (iVar3 != 1) {
          if (iVar3 == 2) goto LAB_00101d20;
          lVar4 = (ulong)(iVar3 - 3U < 2) << 2;
        }
      }
      else {
LAB_00101d20:
        lVar4 = 3;
      }
    }
  }
  else {
LAB_00101cb7:
    lVar4 = 6;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_88);
LAB_00101cc4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_get_embed_available() */

undefined8 __thiscall GameView::_get_embed_available(GameView *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
  if (cVar1 != '\0') {
    uVar2 = _get_embed_available(this);
    return uVar2;
  }
  return 1;
}



/* GameViewPlugin::~GameViewPlugin() */

void __thiscall GameViewPlugin::~GameViewPlugin(GameViewPlugin *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00118180;
  if (*(long *)(this + 0x678) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x678) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x678);
      *(undefined8 *)(this + 0x678) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x670) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x670);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        EditorPlugin::~EditorPlugin((EditorPlugin *)this);
        return;
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* GameViewPlugin::~GameViewPlugin() */

void __thiscall GameViewPlugin::~GameViewPlugin(GameViewPlugin *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00118180;
  if (*(long *)(this + 0x678) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x678) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x678);
      *(undefined8 *)(this + 0x678) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x670) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x670);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x680);
  return;
}



/* GameView::_embedded_process_updated() */

void __thiscall GameView::_embedded_process_updated(GameView *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char *pcVar4;
  int extraout_EDX;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EmbeddedProcess::get_screen_embedded_window_rect();
  pSVar2 = *(String **)(this + 0xad8);
  local_50 = 0;
  local_40 = 5;
  local_48 = "%dx%d";
  String::parse_latin1((StrRange *)&local_50);
  vformat<int,int>((String *)&local_48,(int)(StrRange *)&local_50,extraout_EDX);
  Label::set_text(pSVar2);
  pcVar4 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_update_ui() */

void GameView::_update_ui(void)

{
  StringName *pSVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  GameView *in_RDI;
  String *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
  if (cVar2 == '\0') {
switchD_00102103_caseD_1:
    (**(code **)(*DisplayServer::singleton + 0x158))((String *)&local_60);
    cVar2 = String::operator==((String *)&local_60,"Wayland");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_68 = 0;
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    if (cVar2 == '\0') {
      String::parse_latin1((String *)&local_68,"");
      pcVar5 = "Game embedding not available on your OS.";
    }
    else {
      String::parse_latin1((String *)&local_68,"");
      pcVar5 = 
      "Game embedding not available on Wayland.\nWayland can be disabled in the Editor Settings (Run > Platforms > Linux/*BSD > Prefer Wayland)."
      ;
    }
    local_70 = 0;
    String::parse_latin1((String *)&local_70,pcVar5);
    TTR((String *)&local_60,(String *)&local_70);
    Label::set_text(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    goto switchD_00102103_default;
  }
  uVar3 = _get_embed_available(in_RDI);
  switch(uVar3) {
  case 0:
    cVar2 = EmbeddedProcess::is_embedding_completed();
    if (cVar2 == '\0') {
      cVar2 = EmbeddedProcess::is_embedding_in_progress();
      if (cVar2 == '\0') {
        cVar2 = EditorRunBar::is_playing();
        pSVar6 = *(String **)(in_RDI + 0xaf0);
        if (cVar2 == '\0') {
          local_68 = 0;
          if (in_RDI[0xa38] == (GameView)0x0) {
            String::parse_latin1((String *)&local_68,"");
            pcVar5 = "Embedding is disabled.";
          }
          else {
            String::parse_latin1((String *)&local_68,"");
            pcVar5 = "Press play to start the game.";
          }
        }
        else {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          pcVar5 = "Game running not embedded.";
        }
      }
      else {
        local_68 = 0;
        pSVar6 = *(String **)(in_RDI + 0xaf0);
        String::parse_latin1((String *)&local_68,"");
        pcVar5 = "Game starting...";
      }
      local_70 = 0;
      String::parse_latin1((String *)&local_70,pcVar5);
      TTR((String *)&local_60,(String *)&local_70);
      Label::set_text(pSVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      pSVar6 = *(String **)(in_RDI + 0xaf0);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      Label::set_text(pSVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    cVar2 = Control::has_theme_color_override(*(StringName **)(in_RDI + 0xaf0));
    if (cVar2 != '\0') {
      Control::remove_theme_color_override(*(StringName **)(in_RDI + 0xaf0));
    }
    goto LAB_001021e1;
  case 1:
    goto switchD_00102103_caseD_1;
  case 2:
    local_68 = 0;
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    String::parse_latin1((String *)&local_68,"");
    pcVar5 = 
    "Game embedding not available when the game starts minimized.\nConsider overriding the window mode project setting with the editor feature tag to Windowed to use game embedding while leaving the exported project intact."
    ;
    break;
  case 3:
    local_68 = 0;
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    String::parse_latin1((String *)&local_68,"");
    pcVar5 = 
    "Game embedding not available when the game starts maximized.\nConsider overriding the window mode project setting with the editor feature tag to Windowed to use game embedding while leaving the exported project intact."
    ;
    break;
  case 4:
    local_68 = 0;
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    String::parse_latin1((String *)&local_68,"");
    pcVar5 = 
    "Game embedding not available when the game starts in fullscreen.\nConsider overriding the window mode project setting with the editor feature tag to Windowed to use game embedding while leaving the exported project intact."
    ;
    break;
  case 5:
    local_68 = 0;
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    String::parse_latin1((String *)&local_68,"");
    pcVar5 = "Game embedding not available in single window mode.";
    break;
  case 6:
    pSVar6 = *(String **)(in_RDI + 0xaf0);
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_68,"display/display_server/driver",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1
              ((String *)&local_80,
               "Game embedding not available for the Display Server: \'%s\'.\nDisplay Server can be modified in the Project Settings (Display > Display Server > Driver)."
              );
    TTR((String *)&local_70,(String *)&local_80);
    vformat<Variant>((CowData<char32_t> *)&local_60,(String *)&local_70,(StringName *)local_58);
    Label::set_text(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  default:
    goto switchD_00102103_default;
  }
  local_70 = 0;
  String::parse_latin1((String *)&local_70,pcVar5);
  TTR((String *)&local_60,(String *)&local_70);
  Label::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
switchD_00102103_default:
  pSVar1 = *(StringName **)(in_RDI + 0xaf0);
  if ((_update_ui()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_update_ui()::{lambda()#1}::operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_update_ui()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_ui()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_ui()::{lambda()#1}::operator()()::sname);
  }
  local_58[0] = Control::get_theme_color
                          (pSVar1,(StringName *)&_update_ui()::{lambda()#1}::operator()()::sname);
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
LAB_001021e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(in_RDI + 0xad8),0));
  return;
}



/* GameView::_play_pressed() */

void __thiscall GameView::_play_pressed(GameView *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (this[0xa20] == (GameView)0x0) {
    return;
  }
  lVar4 = EditorRunBar::get_current_process();
  if (lVar4 != 0) {
    cVar1 = WindowWrapper::get_window_enabled();
    if (cVar1 == '\0') {
      uVar3 = EditorMainScreen::get_selected_index();
      *(undefined4 *)(this + 0xa28) = uVar3;
    }
    if (this[0xa38] != (GameView)0x0) {
      cVar1 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
      if (cVar1 != '\0') {
        iVar2 = _get_embed_available(this);
        if (iVar2 == 0) {
          EditorNode::set_unfocused_low_processor_usage_mode_enabled(SUB81(EditorNode::singleton,0))
          ;
          _update_embed_window_size(this);
          cVar1 = WindowWrapper::get_window_enabled();
          if (cVar1 == '\0') {
            EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
            EditorBottomPanel::set_expanded(SUB81(*(undefined8 *)(EditorNode::singleton + 0xa40),0))
            ;
            Control::grab_focus();
          }
          EmbeddedProcess::embed_process(*(long *)(this + 0xae8));
          _update_ui();
          return;
        }
      }
    }
  }
  return;
}



/* GameView::_editor_or_project_settings_changed() */

void __thiscall GameView::_editor_or_project_settings_changed(GameView *this)

{
  char cVar1;
  
  _update_embed_window_size(this);
  cVar1 = WindowWrapper::get_window_enabled();
  if (cVar1 != '\0') {
    _show_update_window_wrapper(this);
    cVar1 = EmbeddedProcess::is_embedding_completed();
    if (cVar1 != '\0') {
      EmbeddedProcess::queue_update_embedded_process();
      _update_ui();
      return;
    }
  }
  _update_ui();
  return;
}



/* GameView::_stop_pressed() */

void __thiscall GameView::_stop_pressed(GameView *this)

{
  char cVar1;
  int iVar2;
  
  if (this[0xa20] == (GameView)0x0) {
    return;
  }
  _detach_script_debugger(this);
  this[0xa40] = (GameView)0x0;
  EditorNode::set_unfocused_low_processor_usage_mode_enabled(SUB81(EditorNode::singleton,0));
  EmbeddedProcess::reset();
  _update_ui();
  cVar1 = WindowWrapper::get_window_enabled();
  if (cVar1 != '\0') {
    WindowWrapper::set_window_enabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  }
  if (-1 < *(int *)(this + 0xa28)) {
    iVar2 = EditorMainScreen::get_selected_index();
    if (iVar2 == 3) {
      EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
    }
  }
  *(undefined4 *)(this + 0xa28) = 0xffffffff;
  return;
}



/* GameView::_embedding_completed() */

void __thiscall GameView::_embedding_completed(GameView *this)

{
  _attach_script_debugger(this);
  _update_ui();
  return;
}



/* GameView::_embed_options_menu_menu_id_pressed(int) */

void __thiscall GameView::_embed_options_menu_menu_id_pressed(GameView *this,int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  String *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    this[0xa38] = (GameView)((byte)this[0xa38] ^ 1);
    local_68 = "run/window_placement/game_embed_mode";
    local_70 = 0;
    local_60 = 0x24;
    String::parse_latin1((StrRange *)&local_70);
    _EDITOR_GET((String *)local_58);
    iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (iVar1 != 0) goto LAB_001029c3;
    local_80 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(bool)this[0xa38]);
    local_68 = "embed_on_play";
    local_60 = 0xd;
  }
  else {
    if (param_1 != 5) goto LAB_001029c3;
    this[0xa39] = (GameView)((byte)this[0xa39] ^ 1);
    local_68 = "run/window_placement/game_embed_mode";
    local_70 = 0;
    local_60 = 0x24;
    String::parse_latin1((StrRange *)&local_70);
    _EDITOR_GET((String *)local_58);
    iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (iVar1 != 0) goto LAB_001029c3;
    local_80 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(bool)this[0xa39]);
    local_68 = "make_floating_on_play";
    local_60 = 0x15;
  }
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "game_view";
  local_78 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(local_80,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001029c3:
  _update_embed_menu_options(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_ui();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::set_window_layout(Ref<ConfigFile>) */

void __thiscall GameView::set_window_layout(GameView *this,undefined8 *param_2)

{
  String *pSVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pSVar1 = (String *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  Variant::Variant((Variant *)local_78,(Rect2i *)&local_88);
  local_98 = "floating_window_rect";
  local_a0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "GameView";
  local_a8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_a8);
  ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_a8);
  auVar3 = Variant::operator_cast_to_Rect2i((Variant *)local_58);
  *(undefined1 (*) [16])(this + 0xa4c) = auVar3;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = (String *)*param_2;
  Variant::Variant((Variant *)local_78,-1);
  local_98 = "floating_window_screen";
  local_a0 = 0;
  local_90 = 0x16;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "GameView";
  local_a8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_a8);
  ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_a8);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xa5c) = iVar2;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::set_window_layout(Ref<ConfigFile>) */

void __thiscall GameViewPlugin::set_window_layout(GameViewPlugin *this,undefined8 *param_2)

{
  Object *pOVar1;
  GameView *pGVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pOVar1 = (Object *)*param_2;
  pGVar2 = *(GameView **)(this + 0x660);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_28 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_28 = (Object *)0x0;
    GameView::set_window_layout(pGVar2,&local_28);
  }
  else {
    GameView::set_window_layout(pGVar2);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00102f0f;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102f0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::get_window_layout(Ref<ConfigFile>) */

void __thiscall GameView::get_window_layout(GameView *this,undefined8 *param_2)

{
  String *pSVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = WindowWrapper::get_window_enabled();
  if (cVar2 != '\0') {
    cVar2 = WindowWrapper::get_window_enabled();
    if (cVar2 != '\0') {
      auVar4 = WindowWrapper::get_window_rect();
      *(undefined1 (*) [16])(this + 0xa4c) = auVar4;
      uVar3 = WindowWrapper::get_window_screen();
      *(undefined4 *)(this + 0xa5c) = uVar3;
    }
  }
  pSVar1 = (String *)*param_2;
  Variant::Variant((Variant *)local_58,(Rect2i *)(this + 0xa4c));
  local_68 = "floating_window_rect";
  local_70 = 0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "GameView";
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  ConfigFile::set_value(pSVar1,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = (String *)*param_2;
  Variant::Variant((Variant *)local_58,*(int *)(this + 0xa5c));
  local_68 = "floating_window_screen";
  local_70 = 0;
  local_60 = 0x16;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "GameView";
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  ConfigFile::set_value(pSVar1,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::get_window_layout(Ref<ConfigFile>) */

void __thiscall GameViewPlugin::get_window_layout(GameViewPlugin *this,undefined8 *param_2)

{
  Object *pOVar1;
  GameView *pGVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pOVar1 = (Object *)*param_2;
  pGVar2 = *(GameView **)(this + 0x660);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_28 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_28 = (Object *)0x0;
    GameView::get_window_layout(pGVar2,&local_28);
  }
  else {
    GameView::get_window_layout(pGVar2);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_0010320f;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010320f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewDebugger::_session_started(Ref<EditorDebuggerSession>) [clone .part.0] */

void __thiscall GameViewDebugger::_session_started(GameViewDebugger *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  Array local_b8 [8];
  Dictionary local_b0 [8];
  Array local_a8 [8];
  Array local_a0 [8];
  undefined8 local_98;
  Object *local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_b8);
  Dictionary::Dictionary(local_b0);
  local_88 = "editors/panning/2d_editor_panning_scheme";
  local_90 = (Object *)0x0;
  local_80 = 0x28;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)&local_58);
  Variant::Variant((Variant *)local_78,"editors/panning/2d_editor_panning_scheme");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "editors/panning/simple_panning";
  local_90 = (Object *)0x0;
  local_80 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)&local_58);
  Variant::Variant((Variant *)local_78,"editors/panning/simple_panning");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "editors/panning/warped_mouse_panning";
  local_90 = (Object *)0x0;
  local_80 = 0x24;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)&local_58);
  Variant::Variant((Variant *)local_78,"editors/panning/warped_mouse_panning");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "editors/panning/2d_editor_pan_speed";
  local_90 = (Object *)0x0;
  local_80 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)&local_58);
  Variant::Variant((Variant *)local_78,"editors/panning/2d_editor_pan_speed");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = 0;
  local_88 = "canvas_item_editor/pan_view";
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_98);
  ED_GET_SHORTCUT((String *)&local_90);
  DebuggerMarshalls::serialize_key_shortcut((Array *)&local_88);
  Variant::Variant((Variant *)&local_58,(Array *)&local_88);
  Variant::Variant((Variant *)local_78,"canvas_item_editor/pan_view");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_88);
  if (((local_90 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_90, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_90), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))();
    Memory::free_static(pOVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  local_88 = "editors/3d/freelook/freelook_base_speed";
  local_90 = (Object *)0x0;
  local_80 = 0x27;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)&local_58);
  Variant::Variant((Variant *)local_78,"editors/3d/freelook/freelook_base_speed");
  pSVar4 = (String *)Dictionary::operator[]((Variant *)local_b0);
  if (pSVar4 != (String *)&local_58) {
    if (Variant::needs_deinit[*(int *)pSVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pSVar4 = 0;
    *(int *)pSVar4 = (int)local_58;
    *(undefined8 *)(pSVar4 + 8) = local_50._0_8_;
    *(undefined8 *)(pSVar4 + 0x10) = local_50._8_8_;
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Variant::Variant((Variant *)&local_58,local_b0);
  Array::push_back((Variant *)local_b8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_90 = (Object *)0x0;
  local_80 = 0x1f;
  pSVar4 = (String *)*param_2;
  local_88 = "scene:runtime_node_select_setup";
  String::parse_latin1((StrRange *)&local_90);
  EditorDebuggerSession::send_message(pSVar4,(Array *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Array::Array(local_a8);
  Variant::Variant((Variant *)&local_58,*(int *)(this + 0x22c));
  Array::push_back((Variant *)local_a8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_90 = (Object *)0x0;
  local_80 = 0x22;
  pSVar4 = (String *)*param_2;
  local_88 = "scene:runtime_node_select_set_type";
  String::parse_latin1((StrRange *)&local_90);
  EditorDebuggerSession::send_message(pSVar4,(Array *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Array::Array(local_a0);
  Variant::Variant((Variant *)&local_58,(bool)this[0x230]);
  Array::push_back((Variant *)local_a0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_88 = "scene:runtime_node_select_set_visible";
  local_90 = (Object *)0x0;
  pSVar4 = (String *)*param_2;
  local_80 = 0x25;
  String::parse_latin1((StrRange *)&local_90);
  EditorDebuggerSession::send_message(pSVar4,(Array *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Array::Array((Array *)&local_98);
  Variant::Variant((Variant *)&local_58,*(int *)(this + 0x234));
  Array::push_back((Variant *)&local_98);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_88 = "scene:runtime_node_select_set_mode";
  local_90 = (Object *)0x0;
  pSVar4 = (String *)*param_2;
  local_80 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  EditorDebuggerSession::send_message(pSVar4,(Array *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::
                                   operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::operator()()::
                         sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::operator()()::
                         sname);
  }
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_session_started(Ref<EditorDebuggerSession>)::{lambda()#1}::operator()()::sname,0
             ,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_98);
  Array::~Array(local_a0);
  Array::~Array(local_a8);
  Dictionary::~Dictionary(local_b0);
  Array::~Array(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewDebugger::_session_started(Ref<EditorDebuggerSession>) */

void GameViewDebugger::_session_started(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\0') {
    return;
  }
  _session_started();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameView::GameView(Ref<GameViewDebugger>, WindowWrapper*) */

void __thiscall GameView::GameView(GameView *this,long *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  Ref *pRVar3;
  StringName *pSVar4;
  Vector2 *pVVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  MarginContainer *pMVar9;
  BoxContainer *this_00;
  Button *pBVar10;
  VSeparator *pVVar11;
  MenuButton *pMVar12;
  String *pSVar13;
  long *plVar14;
  Label *pLVar15;
  Panel *this_01;
  EmbeddedProcess *this_02;
  CallableCustom *this_03;
  int iVar16;
  long in_FS_OFFSET;
  float fVar17;
  String local_90 [8];
  CowData<char32_t> local_88 [8];
  Object *local_80;
  long local_78 [2];
  long local_68 [3];
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (GameView)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00117c78;
  uVar6 = _LC78;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  lVar1 = *param_2;
  *(undefined8 *)(this + 0xa24) = uVar6;
  this[0xa20] = (GameView)0x1;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined2 *)(this + 0xa38) = 0x101;
  *(undefined4 *)(this + 0xa3c) = 0;
  this[0xa40] = (GameView)0x0;
  *(undefined8 *)(this + 0xa44) = 0;
  *(undefined8 *)(this + 0xa4c) = 0;
  *(undefined8 *)(this + 0xa54) = 0;
  *(undefined4 *)(this + 0xa5c) = 0xffffffff;
  singleton = this;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae8) = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    *(long *)(this + 0xa10) = lVar1;
    cVar7 = RefCounted::reference();
    if (cVar7 == '\0') {
      *(undefined8 *)(this + 0xa10) = 0;
    }
  }
  *(long **)(this + 0xa18) = param_3;
  pMVar9 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(pMVar9);
  postinitialize_handler((Object *)pMVar9);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"margin_left",false);
  iVar16 = (int)(StringName *)local_68;
  Control::add_theme_constant_override((StringName *)pMVar9,iVar16);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"margin_right",false);
  Control::add_theme_constant_override((StringName *)pMVar9,iVar16);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(this,pMVar9,0,0);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00117900;
  postinitialize_handler((Object *)this_00);
  Node::add_child(pMVar9,this_00,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa60) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa60),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa60),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  plVar14 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,bool>
            ((GameView *)local_68,(char *)this,
             (_func_void_bool *)"&GameView::_suspend_button_toggled");
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x248,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa60);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Suspend");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa68) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa68),0,0);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa68));
  plVar14 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameViewDebugger>
            ((GameViewDebugger *)local_68,*(char **)(this + 0xa10),
             (_func_void *)"&GameViewDebugger::next_frame");
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Next Frame");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(this_00,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa70) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa70),0,0);
  pSVar13 = *(String **)(this + 0xa70);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Input");
  TTR((String *)&local_80,(String *)local_78);
  Button::set_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa70),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa70),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa70));
  plVar14 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,(_func_void_int *)"&GameView::_node_type_pressed");
  Callable::bind<RuntimeNodeSelect::NodeType>((String *)local_78,(StringName *)local_68,0);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa70);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Allow game input.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa78) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa78),0,0);
  pSVar13 = *(String **)(this + 0xa78);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"2D");
  TTR((String *)&local_80,(String *)local_78);
  Button::set_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa78),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa78));
  plVar14 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,(_func_void_int *)"&GameView::_node_type_pressed");
  Callable::bind<RuntimeNodeSelect::NodeType>((String *)local_78,(StringName *)local_68,1);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa78);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Disable game input and allow to select Node2Ds, Controls, and manipulate the 2D camera."
            );
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa80) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa80),0,0);
  pSVar13 = *(String **)(this + 0xa80);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"3D");
  TTR((String *)&local_80,(String *)local_78);
  Button::set_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa80),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa80));
  plVar14 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,(_func_void_int *)"&GameView::_node_type_pressed");
  Callable::bind<RuntimeNodeSelect::NodeType>((String *)local_78,(StringName *)local_68,2);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa80);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Disable game input and allow to select Node3Ds and manipulate the 3D camera.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(this_00,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa98) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa98),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa98),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa98));
  plVar14 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,bool>
            ((GameView *)local_68,(char *)this,
             (_func_void_bool *)"&GameView::_hide_selection_toggled");
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x248,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa98);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Toggle Selection Visibility");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(this_00,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa88) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa88),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa88),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa88));
  plVar14 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,(_func_void_int *)"&GameView::_select_mode_pressed");
  Callable::bind<RuntimeNodeSelect::SelectMode>((String *)local_78,(StringName *)local_68,0);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pRVar3 = *(Ref **)(this + 0xa88);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Select Mode");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"spatial_editor/tool_select");
  ED_SHORTCUT((String *)&local_80,(String *)local_78,(StringName *)local_68,0x51,0);
  BaseButton::set_shortcut(pRVar3);
  if (local_80 != (Object *)0x0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      cVar7 = predelete_handler(local_80);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_shortcut_context(*(Node **)(this + 0xa88));
  pSVar13 = *(String **)(this + 0xa88);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Alt+RMB: Show list of all nodes at position clicked.");
  TTR((String *)&local_80,(String *)local_78);
  keycode_get_string(local_88,0x1000000);
  String::operator+(local_90,(String *)local_88);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa90) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa90),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa90),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa90));
  plVar14 = *(long **)(this + 0xa90);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,(_func_void_int *)"&GameView::_select_mode_pressed");
  Callable::bind<RuntimeNodeSelect::SelectMode>((String *)local_78,(StringName *)local_68,1);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xa90);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Show list of selectable nodes at position clicked.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(this_00,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xaa0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xaa0),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xaa0),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xaa0));
  plVar14 = *(long **)(this + 0xaa0);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,bool>
            ((GameView *)local_68,(char *)this,
             (_func_void_bool *)"&GameView::_camera_override_button_toggled");
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x248,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pSVar13 = *(String **)(this + 0xaa0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Override the in-game camera.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pMVar12 = (MenuButton *)operator_new(0xc68,"");
  local_68[0] = 0;
  MenuButton::MenuButton(pMVar12,(String *)local_68);
  postinitialize_handler((Object *)pMVar12);
  *(MenuButton **)(this + 0xaa8) = pMVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xaa8),0,0);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xaa8),0));
  pSVar4 = *(StringName **)(this + 0xaa8);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_h_size_flags(*(undefined8 *)(this + 0xaa8),8);
  pSVar13 = *(String **)(this + 0xaa8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Camera Override Options");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar13 = (String *)MenuButton::get_popup();
  pcVar2 = *(code **)(*(long *)pSVar13 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,
             (_func_void_int *)"&GameView::_camera_override_menu_id_pressed");
  (*pcVar2)(pSVar13,SceneStringNames::singleton + 0x240,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Reset 2D Camera");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_item(pSVar13,(String *)&local_80,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Reset 3D Camera");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_item(pSVar13,(String *)&local_80,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  PopupMenu::add_separator(pSVar13,iVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Manipulate In-Game");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_radio_check_item(pSVar13,(String *)&local_80,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  bVar8 = (bool)PopupMenu::get_item_index((int)pSVar13);
  PopupMenu::set_item_checked((int)pSVar13,bVar8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Manipulate From Editors");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_radio_check_item(pSVar13,(String *)&local_80,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  *(VSeparator **)(this + 0xab0) = pVVar11;
  Node::add_child(this_00,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xab8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xab8),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xab8),0));
  pSVar4 = *(StringName **)(this + 0xab8);
  StringName::StringName((StringName *)local_68,"FlatButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  pSVar13 = *(String **)(this + 0xab8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1
            ((String *)local_78,
             "Embedded game size is based on project settings.\nThe \'Keep Aspect\' mode is used when the Game Workspace is smaller than the desired size."
            );
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar14 = *(long **)(this + 0xab8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,
             (_func_void_int *)"&GameView::_size_mode_button_pressed");
  Callable::bind<GameView::EmbedSizeMode>((String *)local_78,(StringName *)local_68,0);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xac0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xac0),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xac0),0));
  pSVar4 = *(StringName **)(this + 0xac0);
  StringName::StringName((StringName *)local_68,"FlatButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  pSVar13 = *(String **)(this + 0xac0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Keep the aspect ratio of the embedded game.");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar14 = *(long **)(this + 0xac0);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,
             (_func_void_int *)"&GameView::_size_mode_button_pressed");
  Callable::bind<GameView::EmbedSizeMode>((String *)local_78,(StringName *)local_68,1);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar10,(String *)local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xac8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xac8),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xac8),0));
  pSVar4 = *(StringName **)(this + 0xac8);
  StringName::StringName((StringName *)local_68,"FlatButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  pSVar13 = *(String **)(this + 0xac8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Embedded game size stretches to fit the Game Workspace.")
  ;
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar14 = *(long **)(this + 0xac8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,
             (_func_void_int *)"&GameView::_size_mode_button_pressed");
  Callable::bind<GameView::EmbedSizeMode>((String *)local_78,(StringName *)local_68,2);
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  pMVar12 = (MenuButton *)operator_new(0xc68,"");
  local_68[0] = 0;
  MenuButton::MenuButton(pMVar12,(String *)local_68);
  postinitialize_handler((Object *)pMVar12);
  *(MenuButton **)(this + 0xad0) = pMVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xad0),0,0);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xad0),0));
  pSVar4 = *(StringName **)(this + 0xad0);
  StringName::StringName((StringName *)local_68,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_h_size_flags(*(undefined8 *)(this + 0xad0),8);
  pSVar13 = *(String **)(this + 0xad0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Embedding Options");
  TTR((String *)&local_80,(String *)local_78);
  Control::set_tooltip_text(pSVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar14 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView,int>
            ((GameView *)local_68,(char *)this,
             (_func_void_int *)"&GameView::_embed_options_menu_menu_id_pressed");
  (*pcVar2)(plVar14,SceneStringNames::singleton + 0x240,(StringName *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Embed Game on Next Play");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_check_item(plVar14,(String *)&local_80,4,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Make Game Workspace Floating on Next Play");
  TTR((String *)&local_80,(String *)local_78);
  PopupMenu::add_check_item(plVar14,(String *)&local_80,5,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BoxContainer::add_spacer(SUB81(this_00,0));
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar15,(String *)local_68);
  postinitialize_handler((Object *)pLVar15);
  *(Label **)(this + 0xad8) = pLVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xad8),0,0);
  CanvasItem::hide();
  pVVar5 = *(Vector2 **)(this + 0xad8);
  fVar17 = (float)EditorScale::get_scale();
  local_48 = (ulong)(uint)(fVar17 * __LC119);
  Control::set_custom_minimum_size(pVVar5);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xad8),2);
  this_01 = (Panel *)operator_new(0x9d0,"");
  Panel::Panel(this_01);
  postinitialize_handler((Object *)this_01);
  *(Panel **)(this + 0xae0) = this_01;
  Node::add_child(this,this_01,0,0);
  pSVar4 = *(StringName **)(this + 0xae0);
  StringName::StringName((StringName *)local_68,"GamePanel",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_v_size_flags(*(undefined8 *)(this + 0xae0),3);
  this_02 = (EmbeddedProcess *)operator_new(0xa50,"");
  EmbeddedProcess::EmbeddedProcess(this_02);
  postinitialize_handler((Object *)this_02);
  *(EmbeddedProcess **)(this + 0xae8) = this_02;
  Node::add_child(*(undefined8 *)(this + 0xae0),this_02,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xae8),0xf,0,0);
  plVar14 = *(long **)(this + 0xae8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_embedding_failed");
  StringName::StringName((StringName *)local_78,"embedding_failed",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  plVar14 = *(long **)(this + 0xae8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_embedding_completed");
  StringName::StringName((StringName *)local_78,"embedding_completed",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  plVar14 = *(long **)(this + 0xae8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_embedded_process_updated")
  ;
  StringName::StringName((StringName *)local_78,"embedded_process_updated",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  plVar14 = *(long **)(this + 0xae8);
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_embedded_process_focused")
  ;
  StringName::StringName((StringName *)local_78,"embedded_process_focused",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  pVVar5 = *(Vector2 **)(this + 0xae8);
  local_50 = _LC129;
  local_48 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_50);
  Control::set_custom_minimum_size(pVVar5);
  pMVar9 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(pMVar9);
  postinitialize_handler((Object *)pMVar9);
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"margin_left",false);
  Control::add_theme_constant_override((StringName *)pMVar9,iVar16);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  EditorScale::get_scale();
  StringName::StringName((StringName *)local_68,"margin_right",false);
  Control::add_theme_constant_override((StringName *)pMVar9,iVar16);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Control::set_anchors_and_offsets_preset(pMVar9,0xf,0,0);
  Node::add_child(*(undefined8 *)(this + 0xae0),pMVar9,0,0);
  pLVar15 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar15,(String *)local_68);
  postinitialize_handler((Object *)pLVar15);
  *(Label **)(this + 0xaf0) = pLVar15;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(pMVar9,*(undefined8 *)(this + 0xaf0),0,0);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xaf0),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xaf0),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xaf0),2);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xaf0),0xf,0,0);
  _update_debugger_buttons(this);
  plVar14 = (long *)*param_2;
  pcVar2 = *(code **)(*plVar14 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_sessions_changed");
  StringName::StringName((StringName *)local_78,"session_started",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  param_2 = (long *)*param_2;
  pcVar2 = *(code **)(*param_2 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_sessions_changed");
  StringName::StringName((StringName *)local_78,"session_stopped",false);
  (*pcVar2)(param_2,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  WindowWrapper::set_override_close_request(SUB81(param_3,0));
  pcVar2 = *(code **)(*param_3 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,(_func_void *)"&GameView::_window_close_request");
  StringName::StringName((StringName *)local_78,"window_close_requested",false);
  (*pcVar2)(param_3,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  pcVar2 = *(code **)(*param_3 + 0x108);
  create_custom_callable_function_pointer<GameView>
            ((GameView *)local_68,(char *)this,
             (_func_void *)"&GameView::_update_floating_window_settings");
  StringName::StringName((StringName *)local_78,"window_size_changed",false);
  (*pcVar2)(param_3,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  plVar14 = EditorDebuggerNode::singleton;
  pcVar2 = *(code **)(*EditorDebuggerNode::singleton + 0x108);
  this_03 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_03);
  *(GameView **)(this_03 + 0x28) = this;
  *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_03 + 0x20) = &_LC0;
  *(undefined ***)this_03 = &PTR_hash_00118818;
  *(undefined8 *)(this_03 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_03 + 0x10) = 0;
  *(undefined8 *)(this_03 + 0x30) = uVar6;
  *(code **)(this_03 + 0x38) = _debugger_breaked;
  CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
  *(char **)(this_03 + 0x20) = "GameView::_debugger_breaked";
  Callable::Callable((Callable *)local_68,this_03);
  StringName::StringName((StringName *)local_78,"breaked",false);
  (*pcVar2)(plVar14,(String *)local_78,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::GameViewPlugin() */

void __thiscall GameViewPlugin::GameViewPlugin(GameViewPlugin *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  EditorDebuggerPlugin *this_00;
  WindowWrapper *this_01;
  Object *pOVar4;
  undefined8 uVar5;
  CallableCustom *pCVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (GameViewPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (GameViewPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00118180;
  *(undefined8 *)(this + 0x678) = 0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  this_00 = (EditorDebuggerPlugin *)operator_new(0x240,"");
  EditorDebuggerPlugin::EditorDebuggerPlugin(this_00);
  this_00[0x228] = (EditorDebuggerPlugin)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00117ff0;
  *(undefined8 *)(this_00 + 0x220) = 0;
  *(undefined4 *)(this_00 + 0x22c) = 0;
  this_00[0x230] = (EditorDebuggerPlugin)0x1;
  *(undefined8 *)(this_00 + 0x234) = 0x100000000;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar7 = *(Object **)(this + 0x670);
    if (pOVar7 == (Object *)0x0) goto LAB_00106427;
    *(undefined8 *)(this + 0x670) = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') goto LAB_00106427;
    this_00 = (EditorDebuggerPlugin *)0x0;
    cVar3 = predelete_handler(pOVar7);
    if (cVar3 == '\0') goto LAB_00106427;
LAB_001069ab:
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
    pOVar4 = (Object *)this_00;
    if (this_00 == (EditorDebuggerPlugin *)0x0) goto LAB_00106427;
  }
  else {
    pOVar7 = *(Object **)(this + 0x670);
    pOVar4 = pOVar7;
    if (this_00 != (EditorDebuggerPlugin *)pOVar7) {
      *(EditorDebuggerPlugin **)(this + 0x670) = this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x670) = 0;
      }
      pOVar4 = (Object *)this_00;
      if (((pOVar7 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) goto LAB_001069ab;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_00106427:
  this_01 = (WindowWrapper *)operator_new(0xa48,"");
  WindowWrapper::WindowWrapper(this_01);
  postinitialize_handler((Object *)this_01);
  local_58 = (Object *)&_LC0;
  *(WindowWrapper **)(this + 0x668) = this_01;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x10b06f;
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR(local_70,(String *)&local_68);
  local_58 = (Object *)&_LC0;
  local_78 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_58 = (Object *)0x10b07e;
  local_80 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_58,(String *)&local_80);
  vformat<String>(local_88,(String *)&local_58,local_70);
  WindowWrapper::set_window_title((String *)this_01);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  WindowWrapper::set_margins_enabled(SUB81(*(undefined8 *)(this + 0x668),0));
  pOVar4 = (Object *)operator_new(0xaf8,"");
  pOVar7 = *(Object **)(this + 0x670);
  uVar5 = *(undefined8 *)(this + 0x668);
  if ((pOVar7 == (Object *)0x0) ||
     (local_58 = pOVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_58 = (Object *)0x0;
    GameView::GameView((GameView *)pOVar4,(String *)&local_58,uVar5);
    postinitialize_handler(pOVar4);
    *(Object **)(this + 0x660) = pOVar4;
  }
  else {
    GameView::GameView((GameView *)pOVar4,(String *)&local_58,uVar5);
    postinitialize_handler(pOVar4);
    *(Object **)(this + 0x660) = pOVar4;
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    pOVar4 = *(Object **)(this + 0x660);
  }
  Control::set_v_size_flags(pOVar4,3);
  local_58 = (Object *)0x0;
  WindowWrapper::set_wrapped_control(*(Control **)(this + 0x668),*(Ref **)(this + 0x660));
  if (((local_58 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  uVar5 = EditorMainScreen::get_control();
  Node::add_child(uVar5,*(undefined8 *)(this + 0x668),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x668),3);
  CanvasItem::hide();
  plVar1 = *(long **)(this + 0x668);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(GameViewPlugin **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar6 + 0x20) = &_LC0;
  *(undefined ***)pCVar6 = &PTR_hash_00118938;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar5;
  *(code **)(pCVar6 + 0x38) = _window_visibility_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "GameViewPlugin::_window_visibility_changed";
  Callable::Callable((Callable *)&local_58,pCVar6);
  StringName::StringName((StringName *)&local_60,"window_visibility_changed",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar1 = EditorFeatureProfileManager::singleton;
  pcVar2 = *(code **)(*EditorFeatureProfileManager::singleton + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(GameViewPlugin **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar6 + 0x20) = &_LC0;
  *(undefined ***)pCVar6 = &PTR_hash_001189c8;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar5;
  *(code **)(pCVar6 + 0x38) = _feature_profile_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "GameViewPlugin::_feature_profile_changed";
  Callable::Callable((Callable *)&local_58,pCVar6);
  StringName::StringName((StringName *)&local_60,"current_feature_profile_changed",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameView::_update_arguments_for_instance(int, List<String, DefaultAllocator>&) [clone .part.0] */

void GameView::_update_arguments_for_instance(int param_1,List *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  CowData<char32_t> *pCVar3;
  code *pcVar4;
  Vector2 *pVVar5;
  char cVar6;
  undefined4 uVar7;
  CowData<char32_t> *pCVar8;
  long *plVar9;
  long *plVar10;
  Element *pEVar11;
  undefined1 (*pauVar12) [16];
  CowData<char32_t> *pCVar13;
  long lVar14;
  undefined4 in_register_0000003c;
  GameView *this;
  String *this_00;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  undefined1 auVar15 [16];
  int local_b8;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this = (GameView *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)param_2 != (long *)0x0) {
    this_00 = (String *)**(long **)param_2;
    if (this_00 == (String *)0x0) {
      local_80 = 0;
      local_70 = 5;
      local_78 = "--wid";
      String::parse_latin1((StrRange *)&local_80);
      goto LAB_00106b93;
    }
    do {
      pCVar8 = *(CowData<char32_t> **)(this_00 + 8);
      cVar6 = String::operator==(this_00,"--position");
      if (((cVar6 == '\0') && (cVar6 = String::operator==(this_00,"--resolution"), cVar6 == '\0'))
         && (cVar6 = String::operator==(this_00,"--screen"), cVar6 == '\0')) {
        cVar6 = String::operator==(this_00,"-f");
        if ((((cVar6 == '\0') && (cVar6 = String::operator==(this_00,"--fullscreen"), cVar6 == '\0')
             ) && ((cVar6 = String::operator==(this_00,"-m"), cVar6 == '\0' &&
                   ((cVar6 = String::operator==(this_00,"--maximized"), cVar6 == '\0' &&
                    (cVar6 = String::operator==(this_00,"-t"), cVar6 == '\0')))))) &&
           (cVar6 = String::operator==(this_00,"-always-on-top"), cVar6 == '\0')) {
          cVar6 = String::operator==(this_00,"--");
          if ((cVar6 != '\0') || (cVar6 = String::operator==(this_00,"++"), cVar6 != '\0')) {
            local_80 = 0;
            local_70 = 5;
            local_78 = "--wid";
            String::parse_latin1((StrRange *)&local_80);
            if ((*(long *)param_2 == 0) || (*(long *)param_2 != *(long *)(this_00 + 0x18))) {
              _err_print_error("insert_before","./core/templates/list.h",0x187,
                               "FATAL: Condition \"p_element && (!_data || p_element->data != _data)\" is true."
                               ,0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
            if (local_80 != 0) {
              CowData<char32_t>::_ref(pCVar8,(CowData *)&local_80);
            }
            lVar14 = *(long *)(this_00 + 0x10);
            plVar9 = *(long **)param_2;
            *(long **)(pCVar8 + 0x18) = plVar9;
            *(String **)(pCVar8 + 8) = this_00;
            *(long *)(pCVar8 + 0x10) = lVar14;
            if (lVar14 == 0) {
              *plVar9 = (long)pCVar8;
            }
            else {
              *(CowData<char32_t> **)(lVar14 + 8) = pCVar8;
            }
            *(CowData<char32_t> **)(this_00 + 0x10) = pCVar8;
            goto LAB_00106c07;
          }
        }
        else {
          plVar9 = *(long **)param_2;
          if (plVar9 != (long *)0x0) {
            if (plVar9 == *(long **)(this_00 + 0x18)) {
              lVar14 = *(long *)(this_00 + 8);
              if ((String *)*plVar9 == this_00) {
                *plVar9 = lVar14;
              }
              lVar1 = *(long *)(this_00 + 0x10);
              if ((String *)plVar9[1] == this_00) {
                plVar9[1] = lVar1;
              }
              if (lVar1 != 0) {
                *(long *)(lVar1 + 8) = lVar14;
                lVar14 = *(long *)(this_00 + 8);
              }
              if (lVar14 != 0) {
                *(long *)(lVar14 + 0x10) = lVar1;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
              Memory::free_static(this_00,false);
              *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            if (*(int *)((long)*(void **)param_2 + 0x10) == 0) {
              Memory::free_static(*(void **)param_2,false);
              *(undefined8 *)param_2 = 0;
            }
          }
        }
      }
      else {
        plVar9 = *(long **)param_2;
        if (plVar9 != (long *)0x0) {
          if (plVar9 == *(long **)(this_00 + 0x18)) {
            lVar14 = *(long *)(this_00 + 8);
            if ((String *)*plVar9 == this_00) {
              *plVar9 = lVar14;
            }
            lVar1 = *(long *)(this_00 + 0x10);
            if ((String *)plVar9[1] == this_00) {
              plVar9[1] = lVar1;
            }
            if (lVar1 != 0) {
              *(long *)(lVar1 + 8) = lVar14;
              lVar14 = *(long *)(this_00 + 8);
            }
            if (lVar14 != 0) {
              *(long *)(lVar14 + 0x10) = lVar1;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
            Memory::free_static(this_00,false);
            *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          puVar2 = *(undefined8 **)param_2;
          if (*(int *)(puVar2 + 2) != 0) {
            if (pCVar8 != (CowData<char32_t> *)0x0) {
              pCVar3 = *(CowData<char32_t> **)(pCVar8 + 8);
              if (puVar2 == *(undefined8 **)(pCVar8 + 0x18)) {
                if (pCVar8 == (CowData<char32_t> *)*puVar2) {
                  *puVar2 = pCVar3;
                }
                lVar14 = *(long *)(pCVar8 + 0x10);
                if (pCVar8 == (CowData<char32_t> *)puVar2[1]) {
                  puVar2[1] = lVar14;
                }
                pCVar13 = pCVar3;
                if (lVar14 != 0) {
                  *(CowData<char32_t> **)(lVar14 + 8) = pCVar3;
                  pCVar13 = *(CowData<char32_t> **)(pCVar8 + 8);
                }
                if (pCVar13 != (CowData<char32_t> *)0x0) {
                  *(long *)(pCVar13 + 0x10) = lVar14;
                }
                CowData<char32_t>::_unref(pCVar8);
                Memory::free_static(pCVar8,false);
                *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              pCVar8 = pCVar3;
              if (*(int *)((long)*(void **)param_2 + 0x10) == 0) {
                Memory::free_static(*(void **)param_2,false);
                *(undefined8 *)param_2 = 0;
              }
              goto LAB_00106b52;
            }
            break;
          }
          Memory::free_static(puVar2,false);
          *(undefined8 *)param_2 = 0;
        }
        if (pCVar8 == (CowData<char32_t> *)0x0) break;
        pCVar8 = *(CowData<char32_t> **)(pCVar8 + 8);
      }
LAB_00106b52:
      this_00 = (String *)pCVar8;
    } while (pCVar8 != (CowData<char32_t> *)0x0);
  }
  local_80 = 0;
  local_70 = 5;
  local_78 = "--wid";
  String::parse_latin1((StrRange *)&local_80);
LAB_00106b93:
  if (*(long *)param_2 == 0) {
    pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar12;
    *(undefined4 *)pauVar12[1] = 0;
    *pauVar12 = (undefined1  [16])0x0;
  }
  pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
  if (local_80 != 0) {
    CowData<char32_t>::_ref(pCVar8,(CowData *)&local_80);
  }
  plVar9 = *(long **)param_2;
  lVar14 = plVar9[1];
  *(undefined8 *)(pCVar8 + 8) = 0;
  *(long **)(pCVar8 + 0x18) = plVar9;
  *(long *)(pCVar8 + 0x10) = lVar14;
  if (lVar14 != 0) {
    *(CowData<char32_t> **)(lVar14 + 8) = pCVar8;
  }
  plVar9[1] = (long)pCVar8;
  if (*plVar9 == 0) {
    *plVar9 = (long)pCVar8;
  }
LAB_00106c07:
  *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  plVar9 = DisplayServer::singleton;
  pcVar4 = *(code **)(*DisplayServer::singleton + 0x4c8);
  plVar10 = (long *)Node::get_window();
  uVar7 = (**(code **)(*plVar10 + 0x1e0))(plVar10);
  (*pcVar4)(plVar9,1,uVar7);
  itos((long)&local_78);
  pEVar11 = (Element *)
            List<String,DefaultAllocator>::insert_after
                      ((List<String,DefaultAllocator> *)param_2,(Element *)pCVar8,
                       (CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  _update_embed_window_size(this);
  EmbeddedProcess::get_screen_embedded_window_rect();
  cVar6 = WindowWrapper::get_window_enabled();
  if (cVar6 == '\0') {
    local_68 = Control::get_custom_minimum_size();
    pVVar5 = *(Vector2 **)(this + 0xae8);
    local_60 = 0;
    local_58._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
    Control::set_custom_minimum_size(pVVar5);
    EditorMainScreen::get_control();
    local_58 = Control::get_global_rect();
    auVar15 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_58);
    (**(code **)(**(long **)(this + 0xa18) + 0x2f8))();
    local_b8 = auVar15._4_4_;
    EmbeddedProcess::get_adjusted_embedded_window_rect
              (*(undefined8 *)(this + 0xae8),
               auVar15._0_8_ & 0xffffffff |
               (ulong)(uint)(int)((float)local_b8 + extraout_XMM0_Db) << 0x20,
               auVar15._8_8_ & 0xffffffff |
               (ulong)(uint)(int)((float)auVar15._12_4_ - extraout_XMM0_Db) << 0x20);
    Control::set_custom_minimum_size(*(Vector2 **)(this + 0xae8));
  }
  cVar6 = WindowWrapper::get_window_enabled();
  if (cVar6 != '\0') {
    EditorRun::get_window_placement();
    local_60 = _LC16;
    Vector2i::operator!=((Vector2i *)(local_58 + 4),(Vector2i *)&local_60);
    local_60 = 0;
    Vector2i::operator!=((Vector2i *)(local_58 + 0xc),(Vector2i *)&local_60);
  }
  local_78 = "--position";
  local_80 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_80);
  pEVar11 = (Element *)
            List<String,DefaultAllocator>::insert_after
                      ((List<String,DefaultAllocator> *)param_2,pEVar11,
                       (CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  itos((long)&local_80);
  local_90 = 0;
  local_78 = ",";
  local_70 = 1;
  String::parse_latin1((StrRange *)&local_90);
  itos((long)local_98);
  String::operator+(local_88,(String *)local_98);
  String::operator+((String *)&local_78,local_88);
  pEVar11 = (Element *)
            List<String,DefaultAllocator>::insert_after
                      ((List<String,DefaultAllocator> *)param_2,pEVar11,
                       (CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "--resolution";
  local_80 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_80);
  pEVar11 = (Element *)
            List<String,DefaultAllocator>::insert_after
                      ((List<String,DefaultAllocator> *)param_2,pEVar11,
                       (CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  itos((long)&local_80);
  local_78 = "x";
  local_90 = 0;
  local_70 = 1;
  String::parse_latin1((StrRange *)&local_90);
  itos((long)local_98);
  String::operator+(local_88,(String *)local_98);
  String::operator+((String *)&local_78,local_88);
  List<String,DefaultAllocator>::insert_after
            ((List<String,DefaultAllocator> *)param_2,pEVar11,(CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_update_arguments_for_instance(int, List<String, DefaultAllocator>&) */

void __thiscall GameView::_update_arguments_for_instance(GameView *this,int param_1,List *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0) {
    return;
  }
  if (this[0xa38] != (GameView)0x0) {
    cVar1 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
    if (cVar1 != '\0') {
      iVar2 = _get_embed_available(this);
      if (iVar2 == 0) {
        _update_arguments_for_instance((int)this,param_2);
        return;
      }
    }
  }
  return;
}



/* GameView::_instance_starting(int, List<String, DefaultAllocator>&) [clone .part.0] */

void __thiscall GameView::_instance_starting(GameView *this,int param_1,List *param_2)

{
  StringName *pSVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) && (this[0xa38] != (GameView)0x0)) {
    if (this[0xa39] != (GameView)0x0) {
      cVar3 = WindowWrapper::is_window_available();
      if (((cVar3 != '\0') && (cVar3 = WindowWrapper::get_window_enabled(), cVar3 == '\0')) &&
         (iVar4 = _get_embed_available(this), iVar4 == 0)) {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_60,"application/config/name",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_String((Variant *)&local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        pSVar1 = TranslationServer::singleton;
        StringName::StringName((StringName *)&local_70,"",false);
        StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
        TranslationServer::translate((StringName *)&local_68,pSVar1);
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"%s (DEBUG)");
        vformat<StringName>((StringName *)&local_60,(String *)&local_80,(StringName *)&local_68);
        lVar2 = local_60;
        if (local_88 != local_60) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_60 = 0;
          local_88 = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if ((((StringName::configured != '\0') &&
             ((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
            ((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
           (local_70 != 0)) {
          StringName::unref();
        }
        WindowWrapper::set_window_title(*(String **)(this + 0xa18));
        _show_update_window_wrapper(this);
        Control::grab_focus();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      if (this[0xa38] == (GameView)0x0) goto LAB_0010750e;
    }
    cVar3 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
    if ((cVar3 != '\0') && (iVar4 = _get_embed_available(this), iVar4 == 0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_arguments_for_instance((int)this,param_2);
        return;
      }
      goto LAB_00107785;
    }
  }
LAB_0010750e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107785:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::_instance_starting(int, List<String, DefaultAllocator>&) */

void __thiscall GameView::_instance_starting(GameView *this,int param_1,List *param_2)

{
  if (this[0xa20] != (GameView)0x0) {
    _instance_starting(this,param_1,param_2);
    return;
  }
  return;
}



/* GameView::_instance_starting_static(int, List<String, DefaultAllocator>&) */

void GameView::_instance_starting_static(int param_1,List *param_2)

{
  if (singleton == (GameView *)0x0) {
    _err_print_error("_instance_starting_static","editor/plugins/game_view_plugin.cpp",0xdc,
                     "Parameter \"singleton\" is null.",0,0);
    return;
  }
  if (singleton[0xa20] != (GameView)0x0) {
    _instance_starting(singleton,param_1,param_2);
    return;
  }
  return;
}



/* GameViewDebugger::_bind_methods() */

void GameViewDebugger::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
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
  local_b0 = 0xf;
  local_b8 = "session_started";
  String::parse_latin1((StrRange *)&local_d0);
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
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0x10;
  local_c8 = "GameViewDebugger";
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
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
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
  local_d0 = 0;
  local_b8 = "session_stopped";
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
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
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_c8 = "GameViewDebugger";
  local_d8 = 0;
  local_c0 = 0x10;
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
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
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



/* GameView::_notification(int) */

void __thiscall GameView::_notification(GameView *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  Ref *pRVar3;
  char cVar4;
  GameView GVar5;
  int iVar6;
  undefined4 uVar7;
  String *pSVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  long local_90;
  undefined8 local_88 [2];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    pRVar3 = *(Ref **)(this + 0xa60);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa68);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa70);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa78);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa80);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa88);
    if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa90);
    if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xa98);
    cVar4 = BaseButton::is_pressed();
    if (cVar4 == '\0') {
      if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    else if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
            (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
            iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xab8);
    if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xac0);
    if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xac8);
    if ((_notification(int)::{lambda()#12}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xad0);
    if ((_notification(int)::{lambda()#13}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xaa0);
    if ((_notification(int)::{lambda()#14}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
    pRVar3 = *(Ref **)(this + 0xaa8);
    if ((_notification(int)::{lambda()#15}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_88);
    Button::set_button_icon(pRVar3);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_88);
  }
  else if (param_1 == 0x3f4) {
    cVar4 = WindowWrapper::get_window_enabled();
    if ((cVar4 != '\0') && (cVar4 = WindowWrapper::get_window_enabled(), cVar4 != '\0')) {
      auVar10 = WindowWrapper::get_window_rect();
      *(undefined1 (*) [16])(this + 0xa4c) = auVar10;
      uVar7 = WindowWrapper::get_window_screen();
      *(undefined4 *)(this + 0xa5c) = uVar7;
    }
  }
  else if (param_1 == 0xd) {
    cVar4 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x1d);
    if (cVar4 == '\0') {
      CanvasItem::hide();
      CanvasItem::hide();
      CanvasItem::hide();
      CanvasItem::hide();
      CanvasItem::hide();
    }
    else {
      local_88[0] = 0;
      String::parse_latin1((String *)local_88,"run/window_placement/game_embed_mode");
      _EDITOR_GET((String *)local_58);
      iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (iVar6 == 1) {
        *(undefined2 *)(this + 0xa38) = 1;
      }
      else if (iVar6 == 2) {
        *(undefined2 *)(this + 0xa38) = 0x101;
      }
      else if (iVar6 == -1) {
        *(undefined2 *)(this + 0xa38) = 0;
      }
      else {
        pSVar8 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_78,true);
        local_88[0] = 0;
        String::parse_latin1((String *)local_88,"embed_on_play");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"game_view");
        EditorSettings::get_project_metadata((String *)local_58,pSVar8,(Variant *)&local_90);
        GVar5 = (GameView)Variant::operator_cast_to_bool((Variant *)local_58);
        this[0xa38] = GVar5;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pSVar8 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_78,true);
        local_88[0] = 0;
        String::parse_latin1((String *)local_88,"make_floating_on_play");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"game_view");
        EditorSettings::get_project_metadata((String *)local_58,pSVar8,(Variant *)&local_90);
        GVar5 = (GameView)Variant::operator_cast_to_bool((Variant *)local_58);
        this[0xa39] = GVar5;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      pSVar8 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_78,0);
      local_88[0] = 0;
      String::parse_latin1((String *)local_88,"embed_size_mode");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"game_view");
      EditorSettings::get_project_metadata((String *)local_58,pSVar8,(Variant *)&local_90);
      iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
      *(int *)(this + 0xa3c) = iVar6;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar1 = *(undefined8 *)(this + 0xac0);
      pSVar8 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_78,true);
      local_88[0] = 0;
      String::parse_latin1((String *)local_88,"keep_aspect");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"game_view");
      EditorSettings::get_project_metadata((String *)local_58,pSVar8,(Variant *)&local_90);
      Variant::operator_cast_to_bool((Variant *)local_58);
      BaseButton::set_pressed(SUB81(uVar1,0));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      _update_embed_menu_options(this);
      plVar9 = EditorRunBar::singleton;
      pcVar2 = *(code **)(*EditorRunBar::singleton + 0x108);
      create_custom_callable_function_pointer<GameView>
                ((GameView *)local_88,(char *)this,(_func_void *)"&GameView::_play_pressed");
      StringName::StringName((StringName *)&local_90,"play_pressed",false);
      (*pcVar2)(plVar9,(String *)&local_90,(String *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar9 = EditorRunBar::singleton;
      pcVar2 = *(code **)(*EditorRunBar::singleton + 0x108);
      create_custom_callable_function_pointer<GameView>
                ((GameView *)local_88,(char *)this,(_func_void *)"&GameView::_stop_pressed");
      StringName::StringName((StringName *)&local_90,"stop_pressed",false);
      (*pcVar2)(plVar9,(String *)&local_90,(String *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      EditorRun::instance_starting_callback = _instance_starting_static;
      plVar9 = (long *)ProjectSettings::get_singleton();
      pcVar2 = *(code **)(*plVar9 + 0x108);
      create_custom_callable_function_pointer<GameView>
                ((GameView *)local_88,(char *)this,
                 (_func_void *)"&GameView::_editor_or_project_settings_changed");
      StringName::StringName((StringName *)&local_90,"settings_changed",false);
      (*pcVar2)(plVar9,(String *)&local_90,(String *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar9 = (long *)EditorSettings::get_singleton();
      pcVar2 = *(code **)(*plVar9 + 0x108);
      create_custom_callable_function_pointer<GameView>
                ((GameView *)local_88,(char *)this,
                 (_func_void *)"&GameView::_editor_or_project_settings_changed");
      StringName::StringName((StringName *)&local_90,"settings_changed",false);
      (*pcVar2)(plVar9,(String *)&local_90,(String *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_ui();
      return;
    }
    goto LAB_00108d24;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108d24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<EditorDebuggerSession> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<EditorDebuggerSession>>::_copy_on_write(CowData<Ref<EditorDebuggerSession>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* GameViewDebugger::reset_camera_3d_position() */

void __thiscall GameViewDebugger::reset_camera_3d_position(GameViewDebugger *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    while (cVar4 = EditorDebuggerSession::is_active(), cVar4 != '\0') {
      pSVar2 = (String *)*puVar5;
      Array::Array(aAStack_68);
      local_60 = 0;
      local_58 = "scene:runtime_node_select_reset_camera_3d";
      local_50 = 0x29;
      String::parse_latin1((StrRange *)&local_60);
      EditorDebuggerSession::send_message(pSVar2,(Array *)&local_60);
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
      puVar5 = puVar5 + 1;
      Array::~Array(aAStack_68);
      if (puVar6 == puVar5) goto LAB_00108f6e;
    }
  }
LAB_00108f6e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameViewDebugger::reset_camera_2d_position() */

void __thiscall GameViewDebugger::reset_camera_2d_position(GameViewDebugger *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    while (cVar4 = EditorDebuggerSession::is_active(), cVar4 != '\0') {
      pSVar2 = (String *)*puVar5;
      Array::Array(aAStack_68);
      local_60 = 0;
      local_58 = "scene:runtime_node_select_reset_camera_2d";
      local_50 = 0x29;
      String::parse_latin1((StrRange *)&local_60);
      EditorDebuggerSession::send_message(pSVar2,(Array *)&local_60);
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
      puVar5 = puVar5 + 1;
      Array::~Array(aAStack_68);
      if (puVar6 == puVar5) goto LAB_001090ae;
    }
  }
LAB_001090ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameView::_camera_override_menu_id_pressed(int) */

void __thiscall GameView::_camera_override_menu_id_pressed(GameView *this,int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = MenuButton::get_popup();
  if ((uint)param_1 < 2) {
    if (param_1 == 0) {
      GameViewDebugger::reset_camera_2d_position(*(GameViewDebugger **)(this + 0xa10));
      return;
    }
    GameViewDebugger::reset_camera_3d_position(*(GameViewDebugger **)(this + 0xa10));
    return;
  }
  for (; iVar4 = PopupMenu::get_item_count(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
    PopupMenu::set_item_checked(iVar3,SUB41(iVar5,0));
  }
  if (param_1 == 2) {
    lVar1 = *(long *)(this + 0xa10);
    *(undefined4 *)(lVar1 + 0x238) = 1;
    iVar5 = EditorDebuggerNode::get_camera_override();
    if (iVar5 != 0) {
      EditorDebuggerNode::set_camera_override
                (EditorDebuggerNode::singleton,*(undefined4 *)(lVar1 + 0x238));
    }
  }
  else {
    if ((param_1 < 3) || (param_1 != 3)) {
      return;
    }
    lVar1 = *(long *)(this + 0xa10);
    *(undefined4 *)(lVar1 + 0x238) = 2;
    iVar5 = EditorDebuggerNode::get_camera_override();
    if (iVar5 != 0) {
      EditorDebuggerNode::set_camera_override
                (EditorDebuggerNode::singleton,*(undefined4 *)(lVar1 + 0x238));
    }
  }
  bVar2 = (bool)PopupMenu::get_item_index(iVar3);
  PopupMenu::set_item_checked(iVar3,bVar2);
  _update_debugger_buttons(this);
  return;
}



/* GameViewDebugger::set_select_mode(int) */

void __thiscall GameViewDebugger::set_select_mode(GameViewDebugger *this,int param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x234) = param_1;
  Array::Array(aAStack_78);
  Variant::Variant((Variant *)local_58,param_1);
  Array::push_back((Variant *)aAStack_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  do {
    while( true ) {
      if (puVar5 == puVar6) {
        Array::~Array(aAStack_78);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      cVar4 = EditorDebuggerSession::is_active();
      if (cVar4 != '\0') break;
LAB_00109300:
      puVar5 = puVar5 + 1;
    }
    pSVar2 = (String *)*puVar5;
    local_70 = 0;
    local_68 = "scene:runtime_node_select_set_mode";
    local_60 = 0x22;
    String::parse_latin1((StrRange *)&local_70);
    EditorDebuggerSession::send_message(pSVar2,(Array *)&local_70);
    lVar3 = local_70;
    if (local_70 == 0) goto LAB_00109300;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00109300;
    puVar5 = puVar5 + 1;
    local_70 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
  } while( true );
}



/* GameView::_select_mode_pressed(int) */

void __thiscall GameView::_select_mode_pressed(GameView *this,int param_1)

{
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa88),0));
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa90),0));
  GameViewDebugger::set_select_mode(*(GameViewDebugger **)(this + 0xa10),param_1);
  return;
}



/* GameViewDebugger::set_selection_visible(bool) */

void __thiscall GameViewDebugger::set_selection_visible(GameViewDebugger *this,bool param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x230] = (GameViewDebugger)param_1;
  Array::Array(aAStack_78);
  Variant::Variant((Variant *)local_58,param_1);
  Array::push_back((Variant *)aAStack_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  do {
    while( true ) {
      if (puVar5 == puVar6) {
        Array::~Array(aAStack_78);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      cVar4 = EditorDebuggerSession::is_active();
      if (cVar4 != '\0') break;
LAB_001094d0:
      puVar5 = puVar5 + 1;
    }
    pSVar2 = (String *)*puVar5;
    local_70 = 0;
    local_68 = "scene:runtime_node_select_set_visible";
    local_60 = 0x25;
    String::parse_latin1((StrRange *)&local_70);
    EditorDebuggerSession::send_message(pSVar2,(Array *)&local_70);
    lVar3 = local_70;
    if (local_70 == 0) goto LAB_001094d0;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001094d0;
    puVar5 = puVar5 + 1;
    local_70 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
  } while( true );
}



/* GameView::_hide_selection_toggled(bool) */

void __thiscall GameView::_hide_selection_toggled(GameView *this,bool param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(this + 0xa98);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    if ((_hide_selection_toggled(bool)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_hide_selection_toggled(bool)::{lambda()#1}::operator()()::
                                     sname), iVar3 != 0)) {
      _scs_create((char *)&_hide_selection_toggled(bool)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_hide_selection_toggled(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_hide_selection_toggled(bool)::{lambda()#1}::operator()()::sname);
    }
  }
  else if ((_hide_selection_toggled(bool)::{lambda()#2}::operator()()::sname == '\0') &&
          (iVar3 = __cxa_guard_acquire(&_hide_selection_toggled(bool)::{lambda()#2}::operator()()::
                                        sname), iVar3 != 0)) {
    _scs_create((char *)&_hide_selection_toggled(bool)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_hide_selection_toggled(bool)::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_hide_selection_toggled(bool)::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  GameViewDebugger::set_selection_visible(*(GameViewDebugger **)(this + 0xa10),!param_1);
  return;
}



/* GameView::set_state(Dictionary const&) */

void __thiscall GameView::set_state(GameView *this,Dictionary *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"hide_selection");
  cVar2 = Dictionary::has((Variant *)param_1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(this + 0xa98);
    Variant::Variant((Variant *)local_58,"hide_selection");
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
    Variant::operator_cast_to_bool(pVVar5);
    BaseButton::set_pressed(SUB81(uVar1,0));
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    bVar3 = (bool)BaseButton::is_pressed();
    _hide_selection_toggled(this,bVar3);
  }
  Variant::Variant((Variant *)local_58,"select_mode");
  cVar2 = Dictionary::has((Variant *)param_1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"select_mode");
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
    iVar4 = Variant::operator_cast_to_int(pVVar5);
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa88),0));
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa90),0));
    GameViewDebugger::set_select_mode(*(GameViewDebugger **)(this + 0xa10),iVar4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Variant::Variant((Variant *)local_58,"camera_override_mode");
  cVar2 = Dictionary::has((Variant *)param_1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"camera_override_mode");
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
    iVar4 = Variant::operator_cast_to_int(pVVar5);
    _camera_override_menu_id_pressed(this,iVar4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::set_state(Dictionary const&) */

void __thiscall GameViewPlugin::set_state(GameViewPlugin *this,Dictionary *param_1)

{
  GameView::set_state(*(GameView **)(this + 0x660),param_1);
  return;
}



/* GameViewDebugger::set_node_type(int) */

void __thiscall GameViewDebugger::set_node_type(GameViewDebugger *this,int param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0x22c) = param_1;
  Array::Array(aAStack_78);
  Variant::Variant((Variant *)local_58,param_1);
  Array::push_back((Variant *)aAStack_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  do {
    while( true ) {
      if (puVar5 == puVar6) {
        Array::~Array(aAStack_78);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      cVar4 = EditorDebuggerSession::is_active();
      if (cVar4 != '\0') break;
LAB_00109a90:
      puVar5 = puVar5 + 1;
    }
    pSVar2 = (String *)*puVar5;
    local_70 = 0;
    local_68 = "scene:runtime_node_select_set_type";
    local_60 = 0x22;
    String::parse_latin1((StrRange *)&local_70);
    EditorDebuggerSession::send_message(pSVar2,(Array *)&local_70);
    lVar3 = local_70;
    if (local_70 == 0) goto LAB_00109a90;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00109a90;
    puVar5 = puVar5 + 1;
    local_70 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
  } while( true );
}



/* GameView::_node_type_pressed(int) */

void __thiscall GameView::_node_type_pressed(GameView *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + 1;
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + lVar1 + 0xa70),0));
  } while (lVar2 != 3);
  _update_debugger_buttons(this);
  GameViewDebugger::set_node_type(*(GameViewDebugger **)(this + 0xa10),param_1);
  return;
}



/* GameViewDebugger::next_frame() */

void __thiscall GameViewDebugger::next_frame(GameViewDebugger *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    while (cVar4 = EditorDebuggerSession::is_active(), cVar4 != '\0') {
      pSVar2 = (String *)*puVar5;
      Array::Array(aAStack_68);
      local_60 = 0;
      local_58 = "scene:next_frame";
      local_50 = 0x10;
      String::parse_latin1((StrRange *)&local_60);
      EditorDebuggerSession::send_message(pSVar2,(Array *)&local_60);
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
      puVar5 = puVar5 + 1;
      Array::~Array(aAStack_68);
      if (puVar6 == puVar5) goto LAB_00109cbe;
    }
  }
LAB_00109cbe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameViewDebugger::set_suspend(bool) */

void __thiscall GameViewDebugger::set_suspend(GameViewDebugger *this,bool param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Array aAStack_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(aAStack_78);
  Variant::Variant((Variant *)local_58,param_1);
  Array::push_back((Variant *)aAStack_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar5 = *(undefined8 **)(this + 0x220);
  CowData<Ref<EditorDebuggerSession>>::_copy_on_write
            ((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220));
  puVar6 = *(undefined8 **)(this + 0x220);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  do {
    while( true ) {
      if (puVar5 == puVar6) {
        Array::~Array(aAStack_78);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      cVar4 = EditorDebuggerSession::is_active();
      if (cVar4 != '\0') break;
LAB_00109da0:
      puVar5 = puVar5 + 1;
    }
    pSVar2 = (String *)*puVar5;
    local_70 = 0;
    local_68 = "scene:suspend_changed";
    local_60 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    EditorDebuggerSession::send_message(pSVar2,(Array *)&local_70);
    lVar3 = local_70;
    if (local_70 == 0) goto LAB_00109da0;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00109da0;
    puVar5 = puVar5 + 1;
    local_70 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
  } while( true );
}



/* GameView::_suspend_button_toggled(bool) */

void __thiscall GameView::_suspend_button_toggled(GameView *this,bool param_1)

{
  _update_debugger_buttons(this);
  GameViewDebugger::set_suspend(*(GameViewDebugger **)(this + 0xa10),param_1);
  return;
}



/* GameViewDebugger::setup_session(int) */

void GameViewDebugger::setup_session(int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  CallableCustom *this;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  undefined4 in_register_0000003c;
  char *pcVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_b8;
  long local_b0;
  long local_a8 [2];
  Callable local_98 [16];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pcVar9 = (char *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorDebuggerPlugin::get_session((int)&local_b8);
  pOVar6 = local_b8;
  if (local_b8 == (Object *)0x0) {
    _err_print_error("setup_session","editor/plugins/game_view_plugin.cpp",0xb9,
                     "Condition \"session.is_null()\" is true.",0,0);
    goto joined_r0x0010a2fd;
  }
  cVar4 = RefCounted::reference();
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
  }
  if (*(long *)(pcVar9 + 0x220) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(pcVar9 + 0x220) + -8) + 1;
  }
  iVar5 = CowData<Ref<EditorDebuggerSession>>::resize<false>
                    ((CowData<Ref<EditorDebuggerSession>> *)(pcVar9 + 0x220),lVar8);
  if (iVar5 == 0) {
    if (*(long *)(pcVar9 + 0x220) == 0) {
      lVar10 = -1;
      lVar8 = 0;
LAB_0010a37a:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar8,"p_index","size()","",false,
                 false);
      goto LAB_00109fcf;
    }
    lVar8 = *(long *)(*(long *)(pcVar9 + 0x220) + -8);
    lVar10 = lVar8 + -1;
    if (lVar10 < 0) goto LAB_0010a37a;
    CowData<Ref<EditorDebuggerSession>>::_copy_on_write
              ((CowData<Ref<EditorDebuggerSession>> *)(pcVar9 + 0x220));
    puVar1 = (undefined8 *)(*(long *)(pcVar9 + 0x220) + lVar10 * 8);
    pOVar7 = (Object *)*puVar1;
    if (pOVar7 == pOVar6) goto LAB_00109fcf;
    *puVar1 = pOVar6;
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *puVar1 = 0;
      }
      if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) goto LAB_00109fb1;
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010a043;
      goto LAB_00109fe0;
    }
    if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
LAB_00109fb1:
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
      goto LAB_00109fcf;
    }
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_00109fcf:
    if ((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
LAB_00109fe0:
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_0010a043:
  pOVar6 = local_b8;
  pcVar2 = *(code **)(*(long *)local_b8 + 0x108);
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR_hash_00118428;
  *(undefined8 *)(this + 0x40) = 0;
  uVar3 = *(undefined8 *)(pcVar9 + 0x60);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(code **)(this + 0x38) = _session_started;
  *(char **)(this + 0x28) = pcVar9;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(char **)(this + 0x20) = "GameViewDebugger::_session_started";
  Callable::Callable((Callable *)local_a8,this);
  pOVar7 = local_b8;
  if ((local_b8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar7 = (Object *)0x0;
  }
  Variant::Variant((Variant *)local_78,pOVar7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_98,(int)(Callable *)local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_b0,"started",false);
  (*pcVar2)(pOVar6,(StringName *)&local_b0,local_98,0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_98);
  if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
  Callable::~Callable((Callable *)local_a8);
  pOVar6 = local_b8;
  pcVar2 = *(code **)(*(long *)local_b8 + 0x108);
  create_custom_callable_function_pointer<GameViewDebugger>
            ((GameViewDebugger *)local_98,pcVar9,(_func_void *)"&GameViewDebugger::_session_stopped"
            );
  StringName::StringName((StringName *)local_a8,"stopped",false);
  (*pcVar2)(pOVar6,(Callable *)local_a8,local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_98);
joined_r0x0010a2fd:
  if (((local_b8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_b8), cVar4 != '\0')) {
    (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
    Memory::free_static(local_b8,false);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* GameViewDebugger::is_class_ptr(void*) const */

uint __thiscall GameViewDebugger::is_class_ptr(GameViewDebugger *this,void *param_1)

{
  return (uint)CONCAT71(0x118e,(undefined4 *)param_1 ==
                               &EditorDebuggerPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GameViewDebugger::_getv(StringName const&, Variant&) const */

undefined8 GameViewDebugger::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewDebugger::_setv(StringName const&, Variant const&) */

undefined8 GameViewDebugger::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewDebugger::_validate_propertyv(PropertyInfo&) const */

void GameViewDebugger::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GameViewDebugger::_property_can_revertv(StringName const&) const */

undefined8 GameViewDebugger::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GameViewDebugger::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GameViewDebugger::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewDebugger::_notificationv(int, bool) */

void GameViewDebugger::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GameViewPlugin::is_class_ptr(void*) const */

uint __thiscall GameViewPlugin::is_class_ptr(GameViewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GameViewPlugin::_getv(StringName const&, Variant&) const */

undefined8 GameViewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewPlugin::_setv(StringName const&, Variant const&) */

undefined8 GameViewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewPlugin::_property_can_revertv(StringName const&) const */

undefined8 GameViewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GameViewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GameViewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GameViewPlugin::has_main_screen() const */

undefined8 GameViewPlugin::has_main_screen(void)

{
  return 1;
}



/* GameViewPlugin::edit(Object*) */

void GameViewPlugin::edit(Object *param_1)

{
  return;
}



/* GameViewPlugin::handles(Object*) const */

undefined8 GameViewPlugin::handles(Object *param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<GameViewPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameView, void, bool, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameView, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameView, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameView, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameViewDebugger, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this)

{
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<GameViewPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::get_argument_count
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GameView, void, bool, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::get_argument_count
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<GameView, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,int>::get_argument_count
          (CallableCustomMethodPointer<GameView,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GameView, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,bool>::get_argument_count
          (CallableCustomMethodPointer<GameView,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::get_argument_count
          (CallableCustomMethodPointer<EditorRunBar,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GameView, void, String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,String>::get_argument_count
          (CallableCustomMethodPointer<GameView,void,String> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GameView, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void>::get_argument_count
          (CallableCustomMethodPointer<GameView,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GameViewDebugger, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::get_argument_count
          (CallableCustomMethodPointer<GameViewDebugger,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::get_argument_count
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this,
          bool *param_1)

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



/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameViewDebugger, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameView, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameView, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameView, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameView, void, bool, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void> *this)

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



/* GameView::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GameView::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GameView::_property_can_revertv(StringName const&) const */

undefined8 GameView::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GameViewPlugin::_validate_propertyv(PropertyInfo&) const */

void GameViewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011e010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GameView::_validate_propertyv(PropertyInfo&) const */

void GameView::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<GameView, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void>::get_object
          (CallableCustomMethodPointer<GameView,void> *this)

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
      goto LAB_0010b55d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b55d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b55d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameView, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,int>::get_object
          (CallableCustomMethodPointer<GameView,void,int> *this)

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
      goto LAB_0010b65d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b65d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b65d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession> >::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::get_object
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this)

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
      goto LAB_0010b75d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b75d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b75d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::get_object
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this)

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
      goto LAB_0010b85d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b85d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b85d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameView, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,bool>::get_object
          (CallableCustomMethodPointer<GameView,void,bool> *this)

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
      goto LAB_0010b95d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b95d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b95d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameViewDebugger, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::get_object
          (CallableCustomMethodPointer<GameViewDebugger,void> *this)

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
      goto LAB_0010ba5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ba5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ba5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::get_object
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this)

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
      goto LAB_0010bb5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bb5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bb5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameView, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,String>::get_object
          (CallableCustomMethodPointer<GameView,void,String> *this)

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
      goto LAB_0010bc5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bc5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bc5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorRunBar, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::get_object
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

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
      goto LAB_0010bd5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bd5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bd5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameView, void, bool, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::get_object
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this)

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
      goto LAB_0010be5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010be5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010be5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GameViewPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::get_object
          (CallableCustomMethodPointer<GameViewPlugin,void> *this)

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
      goto LAB_0010bf5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bf5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bf5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* GameView::_setv(StringName const&, Variant const&) */

undefined8 GameView::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c108) */
/* GameView::_getv(StringName const&, Variant&) const */

undefined8 GameView::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010c178) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e028 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x118e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* GameView::is_class_ptr(void*) const */

ulong GameView::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x118d,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x118e,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x118e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x118e,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x118e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x118e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c2e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c2e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c340;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c340:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* GameView::~GameView() */

void __thiscall GameView::~GameView(GameView *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117c78;
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
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c3d4;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c3d4:
  Control::~Control((Control *)this);
  return;
}



/* GameView::~GameView() */

void __thiscall GameView::~GameView(GameView *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117c78;
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
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c494;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c494:
  Control::~Control((Control *)this);
  operator_delete(this,0xaf8);
  return;
}



/* GameViewDebugger::_get_class_namev() const */

undefined8 * GameViewDebugger::_get_class_namev(void)

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
LAB_0010c523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GameViewDebugger");
      goto LAB_0010c58e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GameViewDebugger");
LAB_0010c58e:
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
LAB_0010c613:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c613;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c67e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c67e:
  return &_get_class_namev()::_class_name_static;
}



/* GameView::_get_class_namev() const */

undefined8 * GameView::_get_class_namev(void)

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
LAB_0010c6f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c6f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GameView");
      goto LAB_0010c75e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GameView");
LAB_0010c75e:
  return &_get_class_namev()::_class_name_static;
}



/* GameViewPlugin::_get_class_namev() const */

undefined8 * GameViewPlugin::_get_class_namev(void)

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
LAB_0010c7e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c7e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GameViewPlugin");
      goto LAB_0010c84e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GameViewPlugin");
LAB_0010c84e:
  return &_get_class_namev()::_class_name_static;
}



/* GameViewPlugin::get_plugin_name() const */

GameViewPlugin * __thiscall GameViewPlugin::get_plugin_name(GameViewPlugin *this)

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



/* GameView::get_class() const */

void GameView::get_class(void)

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



/* GameViewDebugger::get_class() const */

void GameViewDebugger::get_class(void)

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



/* GameViewPlugin::get_class() const */

void GameViewPlugin::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010db0f;
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
LAB_0010db0f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010dbc3;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010dc73;
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
LAB_0010dc73:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010dbc3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010dbc3:
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
            if (lVar5 == 0) goto LAB_0010dd9f;
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
LAB_0010dd9f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010de53;
  }
  cVar6 = String::operator==((String *)param_1,"Node");
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
              if (lVar5 == 0) goto LAB_0010df03;
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
LAB_0010df03:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010de53;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010de53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010e0a0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e030 != Container::_notification) {
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
  if ((code *)PTR__notification_0011e030 == Container::_notification) {
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



/* Callable create_custom_callable_function_pointer<GameViewDebugger>(GameViewDebugger*, char
   const*, void (GameViewDebugger::*)()) */

GameViewDebugger *
create_custom_callable_function_pointer<GameViewDebugger>
          (GameViewDebugger *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_001184b8;
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



/* Callable create_custom_callable_function_pointer<GameView>(GameView*, char const*, void
   (GameView::*)()) */

GameView *
create_custom_callable_function_pointer<GameView>
          (GameView *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00118548;
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



/* Callable create_custom_callable_function_pointer<GameView, String>(GameView*, char const*, void
   (GameView::*)(String)) */

GameView *
create_custom_callable_function_pointer<GameView,String>
          (GameView *param_1,char *param_2,_func_void_String *param_3)

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
  *(undefined ***)this = &PTR_hash_001185d8;
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



/* List<String, DefaultAllocator>::insert_after(List<String, DefaultAllocator>::Element*, String
   const&) */

CowData<char32_t> * __thiscall
List<String,DefaultAllocator>::insert_after
          (List<String,DefaultAllocator> *this,Element *param_1,String *param_2)

{
  long lVar1;
  code *pcVar2;
  CowData<char32_t> *this_00;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  
  lVar1 = *(long *)this;
  if (param_1 == (Element *)0x0) {
    if (lVar1 == 0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)param_2);
    }
    plVar3 = *(long **)this;
    lVar1 = plVar3[1];
    *(undefined8 *)(this_00 + 8) = 0;
    *(long **)(this_00 + 0x18) = plVar3;
    *(long *)(this_00 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(CowData<char32_t> **)(lVar1 + 8) = this_00;
    }
    plVar3[1] = (long)this_00;
    if (*plVar3 == 0) {
      *plVar3 = (long)this_00;
    }
  }
  else {
    if ((lVar1 == 0) || (*(long *)(param_1 + 0x18) != lVar1)) {
      _err_print_error("insert_after","./core/templates/list.h",0x16d,
                       "FATAL: Condition \"p_element && (!_data || p_element->data != _data)\" is true."
                       ,0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)param_2);
    }
    lVar1 = *(long *)(param_1 + 8);
    plVar3 = *(long **)this;
    *(long **)(this_00 + 0x18) = plVar3;
    *(long *)(this_00 + 8) = lVar1;
    *(Element **)(this_00 + 0x10) = param_1;
    if (lVar1 == 0) {
      plVar3[1] = (long)this_00;
    }
    else {
      *(CowData<char32_t> **)(lVar1 + 0x10) = this_00;
    }
    *(CowData<char32_t> **)(param_1 + 8) = this_00;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  return this_00;
}



/* Callable create_custom_callable_function_pointer<GameView, bool>(GameView*, char const*, void
   (GameView::*)(bool)) */

GameView *
create_custom_callable_function_pointer<GameView,bool>
          (GameView *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_001186f8;
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



/* Callable create_custom_callable_function_pointer<GameView, int>(GameView*, char const*, void
   (GameView::*)(int)) */

GameView *
create_custom_callable_function_pointer<GameView,int>
          (GameView *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_00118788;
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



/* Callable Callable::bind<RuntimeNodeSelect::NodeType>(RuntimeNodeSelect::NodeType) const */

Variant ** Callable::bind<RuntimeNodeSelect::NodeType>(Variant **param_1,int param_2,int param_3)

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
  return param_1;
}



/* Callable Callable::bind<RuntimeNodeSelect::SelectMode>(RuntimeNodeSelect::SelectMode) const */

Variant ** Callable::bind<RuntimeNodeSelect::SelectMode>(Variant **param_1,int param_2,int param_3)

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
  return param_1;
}



/* Callable Callable::bind<GameView::EmbedSizeMode>(GameView::EmbedSizeMode) const */

Variant ** Callable::bind<GameView::EmbedSizeMode>(Variant **param_1,int param_2,int param_3)

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
  return param_1;
}



/* Callable create_custom_callable_function_pointer<GameViewPlugin, String const&>(GameViewPlugin*,
   char const*, void (GameViewPlugin::*)(String const&)) */

GameViewPlugin *
create_custom_callable_function_pointer<GameViewPlugin,String_const&>
          (GameViewPlugin *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_001188a8;
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



/* WARNING: Removing unreachable block (ram,0x0010ea10) */
/* GameViewPlugin::_notificationv(int, bool) */

void __thiscall GameViewPlugin::_notificationv(GameViewPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011e038 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011e038 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* GameView::_get_embed_available() [clone .part.0] [clone .cold] */

void GameView::_get_embed_available(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GameViewDebugger::_bind_methods() [clone .cold] */

void GameViewDebugger::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<EditorDebuggerSession> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<EditorDebuggerSession>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ee3a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010ee3a:
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



/* GameView::_initialize_classv() */

void GameView::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0011e050 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0011e040 !=
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
        if ((code *)PTR__bind_methods_0011e048 != Container::_bind_methods) {
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
    local_58 = "GameView";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010f758) */
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



/* WARNING: Removing unreachable block (ram,0x0010fa58) */
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



/* WARNING: Removing unreachable block (ram,0x0010fd90) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00110048) */
/* String vformat<Variant>(String const&, Variant const) */

undefined8 * vformat<Variant>(undefined8 *param_1,bool *param_2,Variant *param_3)

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
        if (pvVar5 == (void *)0x0) goto LAB_00110384;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110384:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::call
          (CallableCustomMethodPointer<GameViewPlugin,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001105cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001105cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001105a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110691;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001105cf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110691:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorRunBar, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::call
          (CallableCustomMethodPointer<EditorRunBar,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001107ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001107ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001107c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001108b1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001107ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001108b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameView, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameView,void>::call
          (CallableCustomMethodPointer<GameView,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00110a0f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00110a0f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001109e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110ad1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00110a0f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110ad1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameViewDebugger, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::call
          (CallableCustomMethodPointer<GameViewDebugger,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00110c2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00110c2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110cf1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00110c2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110cf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameView, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool>::call
          (CallableCustomMethodPointer<GameView,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00110eb9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00110eb9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC175;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_00110f7b;
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
LAB_00110eb9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110f7b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameView, void, bool, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::call
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
      goto LAB_0011116f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011116f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar4 = _LC176;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar9 = Variant::operator_cast_to_bool(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC175;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar6 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar6,bVar9);
          return;
        }
        goto LAB_00111231;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011116f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111231:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::call
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_001113f9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001113f9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC175;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001113a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_001114bb;
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
LAB_001113f9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001114bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameView, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameView,void,int>::call
          (CallableCustomMethodPointer<GameView,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00111678;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00111678;
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
        uVar4 = _LC177;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011173a;
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
LAB_00111678:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011173a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::call
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this,
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
          goto LAB_0011180e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011180e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC178;
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
LAB_001118dd:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)
                     __dynamic_cast(pOVar7,&Object::typeinfo,&EditorDebuggerSession::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_001118dd;
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
        goto LAB_0011180e;
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
  local_48 = (Object *)0x1103de;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011180e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GameView, void, String>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameView,void,String>::call
          (CallableCustomMethodPointer<GameView,void,String> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
            uVar4 = _LC179;
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
        goto LAB_00111b8e;
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
  _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00111b8e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::call
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC179;
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
        goto LAB_00111dfe;
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
  _err_print_error(&_LC174,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00111dfe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GameViewPlugin::is_class(String const&) const */

undefined8 __thiscall GameViewPlugin::is_class(GameViewPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011201f;
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
LAB_0011201f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001120d3;
  }
  cVar6 = String::operator==((String *)param_1,"GameViewPlugin");
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
              if (lVar5 == 0) goto LAB_0011218f;
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
LAB_0011218f:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001120d3;
    }
    cVar6 = String::operator==((String *)param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node::is_class((Node *)this,param_1);
        return uVar7;
      }
      goto LAB_00112201;
    }
  }
LAB_001120d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112201:
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
            if (lVar5 == 0) goto LAB_0011227f;
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
LAB_0011227f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00112333;
  }
  cVar6 = String::operator==((String *)param_1,"Control");
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
              if (lVar5 == 0) goto LAB_001123ef;
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
LAB_001123ef:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00112333;
    }
    cVar6 = String::operator==((String *)param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node::is_class((Node *)this,param_1);
        return uVar7;
      }
      goto LAB_00112461;
    }
  }
LAB_00112333:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112461:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewDebugger::is_class(String const&) const */

undefined8 __thiscall GameViewDebugger::is_class(GameViewDebugger *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001124ef;
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
LAB_001124ef:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001125a3;
  }
  cVar6 = String::operator==((String *)param_1,"GameViewDebugger");
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
              if (lVar5 == 0) goto LAB_0011265f;
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
LAB_0011265f:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001125a3;
    }
    cVar6 = String::operator==((String *)param_1,"EditorDebuggerPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001126d1;
    }
  }
LAB_001125a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001126d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011274f;
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
LAB_0011274f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00112803;
  }
  cVar6 = String::operator==((String *)param_1,"BoxContainer");
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
              if (lVar5 == 0) goto LAB_001128bf;
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
LAB_001128bf:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00112803;
    }
    cVar6 = String::operator==((String *)param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Control::is_class((Control *)this,param_1);
        return uVar7;
      }
      goto LAB_00112931;
    }
  }
LAB_00112803:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112931:
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
            if (lVar4 == 0) goto LAB_001129af;
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
LAB_001129af:
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
    if (cVar5 != '\0') goto LAB_00112a63;
  }
  cVar5 = String::operator==((String *)param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112a63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameView::is_class(String const&) const */

undefined8 __thiscall GameView::is_class(GameView *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00112b2f;
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
LAB_00112b2f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00112be3;
  }
  cVar6 = String::operator==((String *)param_1,"GameView");
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
              if (lVar5 == 0) goto LAB_00112c9f;
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
LAB_00112c9f:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00112be3;
    }
    cVar6 = String::operator==((String *)param_1,"VBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar7;
      }
      goto LAB_00112d11;
    }
  }
LAB_00112be3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112d11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::_initialize_classv() */

void GameViewPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0011e050 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0011e058 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011e060 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GameViewPlugin";
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
              if ((code *)PTR__bind_methods_0011e050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011e040 !=
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
      if ((code *)PTR__bind_methods_0011e048 != Container::_bind_methods) {
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
  local_78 = &_LC14;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC14;
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
LAB_0011398d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011398d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001139af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001139af:
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_00113cfd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113cfd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00113d1f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00113d1f:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
LAB_0011407d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011407d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011409f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011409f:
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



/* EditorDebuggerPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorDebuggerPlugin::_get_property_listv(EditorDebuggerPlugin *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorDebuggerPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerPlugin";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_0011445d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011445d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011447f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011447f:
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
  StringName::StringName((StringName *)&local_78,"EditorDebuggerPlugin",false);
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



/* GameViewDebugger::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GameViewDebugger::_get_property_listv(GameViewDebugger *this,List *param_1,bool param_2)

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
    EditorDebuggerPlugin::_get_property_listv((EditorDebuggerPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GameViewDebugger";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GameViewDebugger";
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
      goto LAB_00114811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114811:
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
  StringName::StringName((StringName *)&local_78,"GameViewDebugger",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorDebuggerPlugin::_get_property_listv((EditorDebuggerPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GameViewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GameViewPlugin::_get_property_listv(GameViewPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GameViewPlugin";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GameViewPlugin";
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
  if (local_90 == 0) {
LAB_00114aed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114aed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114b0f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114b0f:
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
  StringName::StringName((StringName *)&local_78,"GameViewPlugin",false);
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
      goto LAB_00114ea1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114ea1:
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
  if ((code *)PTR__get_property_list_0011e068 != Object::_get_property_list) {
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
      goto LAB_00115171;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115171:
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
  if ((code *)PTR__get_property_list_0011e070 != CanvasItem::_get_property_list) {
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
      goto LAB_00115441;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115441:
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
      goto LAB_001156f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001156f1:
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
      goto LAB_001159a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001159a1:
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



/* GameView::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GameView::_get_property_listv(GameView *this,List *param_1,bool param_2)

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
  local_78 = "GameView";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GameView";
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
      goto LAB_00115c51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115c51:
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
  StringName::StringName((StringName *)&local_78,"GameView",false);
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
LAB_00115f2d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115f2d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115f4f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115f4f:
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



/* GameViewDebugger::_initialize_classv() */

void GameViewDebugger::_initialize_classv(void)

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
    if (EditorDebuggerPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011e050 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorDebuggerPlugin";
      local_70 = 0;
      local_50 = 0x14;
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
      if ((code *)PTR__bind_methods_0011e078 != RefCounted::_bind_methods) {
        EditorDebuggerPlugin::_bind_methods();
      }
      EditorDebuggerPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorDebuggerPlugin";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GameViewDebugger";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* GameView::_notificationv(int, bool) */

void __thiscall GameView::_notificationv(GameView *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* CowData<Ref<EditorDebuggerSession> >::_unref() */

void __thiscall
CowData<Ref<EditorDebuggerSession>>::_unref(CowData<Ref<EditorDebuggerSession>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_001165cd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001165cd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* GameViewDebugger::~GameViewDebugger() */

void __thiscall GameViewDebugger::~GameViewDebugger(GameViewDebugger *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117ff0;
  CowData<Ref<EditorDebuggerSession>>::_unref((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220))
  ;
  EditorDebuggerPlugin::~EditorDebuggerPlugin((EditorDebuggerPlugin *)this);
  return;
}



/* GameViewDebugger::~GameViewDebugger() */

void __thiscall GameViewDebugger::~GameViewDebugger(GameViewDebugger *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117ff0;
  CowData<Ref<EditorDebuggerSession>>::_unref((CowData<Ref<EditorDebuggerSession>> *)(this + 0x220))
  ;
  EditorDebuggerPlugin::~EditorDebuggerPlugin((EditorDebuggerPlugin *)this);
  operator_delete(this,0x240);
  return;
}



/* CowData<Ref<EditorDebuggerSession> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<EditorDebuggerSession>>::_realloc
          (CowData<Ref<EditorDebuggerSession>> *this,long param_1)

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
/* Error CowData<Ref<EditorDebuggerSession> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<EditorDebuggerSession>>::resize<false>
          (CowData<Ref<EditorDebuggerSession>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar8 = 0;
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116ab0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00116ab0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011695a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011695a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00116920;
  }
  if (lVar11 == lVar8) {
LAB_00116a2b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00116920:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_00116a0b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00116a2b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00116a0b:
  puVar10[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00116e49;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00116e49:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* GameViewDebugger::_session_started(Ref<EditorDebuggerSession>) */

void GameViewDebugger::_GLOBAL__sub_I__session_started(void)

{
  undefined8 uStack_18;
  
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated == '\0') {
    EditorExport::_export_presets_runnable_updated = '\x01';
    EditorExport::_export_presets_runnable_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,
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
               &__dso_handle,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GameViewDebugger::~GameViewDebugger() */

void __thiscall GameViewDebugger::~GameViewDebugger(GameViewDebugger *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* GameView::~GameView() */

void __thiscall GameView::~GameView(GameView *this)

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
/* CallableCustomMethodPointer<GameViewDebugger, void, Ref<EditorDebuggerSession>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void,Ref<EditorDebuggerSession>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameViewDebugger, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewDebugger,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewDebugger,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameView, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameView, void, String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorRunBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorRunBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorRunBar,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameView, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameView, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameView, void, bool, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameView,void,bool,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameView,void,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameViewPlugin, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameViewPlugin, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GameViewPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GameViewPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GameViewPlugin,void> *this)

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
