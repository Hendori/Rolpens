/* ProgressDialog::_cancel_pressed() */void ProgressDialog::_cancel_pressed(ProgressDialog *this) {
   this[0xa70] = (ProgressDialog)0x1;
   return;
}
/* ProgressDialog::_notification(int) [clone .part.0] */void ProgressDialog::_notification(int param_1) {
   StringName *pSVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined4 in_register_0000003c;
   StringName *pSVar6;
   long in_FS_OFFSET;
   uint uVar7;
   Object *local_48;
   long local_40;
   Object *local_38;
   long local_30;
   pSVar6 = (StringName*)CONCAT44(in_register_0000003c, param_1);
   pSVar1 = *(StringName**)( pSVar6 + 0xa50 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_notification(int)::{lambda()
   #1
   iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,in_RDX
                                ,&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_stylebox((StringName *)&local_48,pSVar1);
  uVar3 = (**(code **)(*(long *)local_48 + 0x1d0))();
  uVar2 = *(undefined8 *)(pSVar6 + 0xa50);
  *(undefined8 *)(pSVar6 + 0xa68) = uVar3;
  StyleBox::get_margin(local_48,0);
  Control::set_offset(uVar2,0);
  uVar2 = *(undefined8 *)(pSVar6 + 0xa50);
  uVar7 = StyleBox::get_margin(local_48,2);
  Control::set_offset(uVar7 ^ _LC4,uVar2,2);
  uVar2 = *(undefined8 *)(pSVar6 + 0xa50);
  StyleBox::get_margin(local_48,1);
  Control::set_offset(uVar2,1);
  uVar2 = *(undefined8 *)(pSVar6 + 0xa50);
  uVar7 = StyleBox::get_margin(local_48,3);
  Control::set_offset(uVar7 ^ _LC4,uVar2,3);
  pSVar1 = *(StringName **)(pSVar6 + 0xa48);
  StringName::StringName((StringName *)&local_40,"PopupPanel",false);
  Control::get_theme_stylebox((StringName *)&local_38,pSVar6);
  Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
  if (local_38 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_38);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }, /* WARNING: Subroutine does not return */, __stack_chk_fail();
}, /* ProgressDialog::_notification(int) */, void __thiscall ProgressDialog::_notification(ProgressDialog *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* ProgressDialog::_update_ui() */

void __thiscall ProgressDialog::_update_ui(ProgressDialog *this)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    (**(code **)(*DisplayServer::singleton + 0x748))();
    Main::iteration();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProgressDialog::_popup() */

void __thiscall ProgressDialog::_popup(ProgressDialog *this), {
            undefined8 *puVar1;
            long lVar2;
            long lVar3;
            undefined8 *puVar4;
            long in_FS_OFFSET;
            lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
            Node::set_process_input(SUB81(EditorNode::singleton, 0));
            puVar4 = *(undefined8**)( this + 0xa60 );
            puVar1 = puVar4 + *(uint*)( this + 0xa58 );
            for (; puVar1 != puVar4; puVar4 = puVar4 + 1) {
               Node::set_process_mode(*puVar4, 4);
            }

            ( **(code**)( **(long**)( this + 0xa50 ) + 0x300 ) )();
            EditorScale::get_scale();
            Control::set_custom_minimum_size(*(Vector2**)( this + 0xa48 ));
            lVar3 = Node::get_last_exclusive_window();
            if (lVar3 == 0) {
               _err_print_error("_popup", "editor/progress_dialog.cpp", 0xaa, "Parameter \"current_window\" is null.", 0, 0);
            }
 else {
               ( **(code**)( *(long*)this + 0x198 ) )(this, lVar3, 1);
               Viewport::is_input_disabled();
               Viewport::set_disable_input(SUB81(lVar3, 0));
               Viewport::set_disable_input(SUB81(lVar3, 0));
               CanvasItem::show();
            }

            if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
, /* ProgressDialog::add_host_window(Window*) */, void __thiscall ProgressDialog::add_host_window(ProgressDialog *this, Window * param_1) * pcVar2);
   void *pvVar3;
   ulong uVar4;
   if (param_1 == (Window*)0x0) {
      _err_print_error("add_host_window", "editor/progress_dialog.cpp", 0x102, "Parameter \"p_window\" is null.", 0, 0);
      return;
   }

   uVar1 = *(uint*)( this + 0xa58 );
   pvVar3 = *(void**)( this + 0xa60 );
   if (uVar1 == *(uint*)( this + 0xa5c )) {
      uVar4 = ( ulong )(uVar1 * 2);
      if (uVar1 * 2 == 0) {
         uVar4 = 1;
      }

      *(int*)( this + 0xa5c ) = (int)uVar4;
      pvVar3 = (void*)Memory::realloc_static(pvVar3, uVar4 * 8, false);
      *(void**)( this + 0xa60 ) = pvVar3;
      if (pvVar3 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar1 = *(uint*)( this + 0xa58 );
   }

   *(uint*)( this + 0xa58 ) = uVar1 + 1;
   *(Window**)( (long)pvVar3 + (ulong)uVar1 * 8 ) = param_1;
   return;
}
/* ProgressDialog::remove_host_window(Window*) */void ProgressDialog::remove_host_window(ProgressDialog *this, Window *param_1) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   ulong uVar4;
   if (param_1 == (Window*)0x0) {
      _err_print_error("remove_host_window", "editor/progress_dialog.cpp", 0x107, "Parameter \"p_window\" is null.", 0, 0);
      return;
   }

   uVar1 = *(uint*)( this + 0xa58 );
   lVar2 = *(long*)( this + 0xa60 );
   if (uVar1 != 0) {
      uVar4 = 0;
      while (*(Window**)( lVar2 + uVar4 * 8 ) != param_1) {
         uVar4 = uVar4 + 1;
         if (uVar4 == uVar1) {
            return;
         }

      }
;
      uVar3 = (uint)uVar4;
      if (uVar1 <= uVar3) {
         _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar4, (ulong)uVar1, "p_index", "count", "", false, false);
         return;
      }

      *(uint*)( this + 0xa58 ) = uVar1 - 1;
      if (uVar3 < uVar1 - 1) {
         memmove((void*)( lVar2 + uVar4 * 8 ), (void*)( lVar2 + ( ulong )(uVar3 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar3) * 8 + 8);
         return;
      }

   }

   return;
}
/* ProgressDialog::ProgressDialog() */void ProgressDialog::ProgressDialog(ProgressDialog *this) {
   String *pSVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   PanelContainer *this_00;
   BoxContainer *pBVar5;
   Button *this_01;
   CallableCustom *this_02;
   long in_FS_OFFSET;
   String aSStack_68[8];
   undefined8 local_60;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   CenterContainer::CenterContainer((CenterContainer*)this);
   *(undefined***)this = &PTR__initialize_classv_00109e70;
   *(undefined8*)( this + 0xa40 ) = 2;
   *(undefined8*)( this + 0xa58 ) = 0;
   *(undefined8*)( this + 0xa60 ) = 0;
   *(undefined8*)( this + 0xa68 ) = 0;
   this[0xa70] = (ProgressDialog)0x0;
   *(undefined1(*) [16])( this + 0xa08 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa48 ) = (undefined1[16])0x0;
   Control::set_anchors_and_offsets_preset(this, 0xf, 0, 0);
   CanvasItem::set_z_index((int)this);
   singleton = this;
   CanvasItem::hide();
   this_00 = (PanelContainer*)operator_new(0xa08, "");
   PanelContainer::PanelContainer(this_00);
   postinitialize_handler((Object*)this_00);
   *(PanelContainer**)( this + 0xa48 ) = this_00;
   Node::add_child(this, this_00, 0, 0);
   Control::set_h_size_flags(*(undefined8*)( this + 0xa48 ), 0);
   Control::set_v_size_flags(*(undefined8*)( this + 0xa48 ), 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, true);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00109af8;
   postinitialize_handler((Object*)pBVar5);
   *(BoxContainer**)( this + 0xa50 ) = pBVar5;
   Node::add_child(*(undefined8*)( this + 0xa48 ), pBVar5, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_00109780;
   postinitialize_handler((Object*)pBVar5);
   *(BoxContainer**)( this + 0xa08 ) = pBVar5;
   Node::add_child(*(undefined8*)( this + 0xa50 ), pBVar5, 0, 0);
   CanvasItem::hide();
   this_01 = (Button*)operator_new(0xc10, "");
   local_58[0] = 0;
   Button::Button(this_01, (String*)local_58);
   postinitialize_handler((Object*)this_01);
   *(Button**)( this + 0xa10 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   BoxContainer::add_spacer(SUB81(*(undefined8*)( this + 0xa08 ), 0));
   Node::add_child(*(undefined8*)( this + 0xa08 ), *(undefined8*)( this + 0xa10 ), 0, 0);
   pSVar1 = *(String**)( this + 0xa10 );
   local_58[0] = 0;
   String::parse_latin1((String*)local_58, "");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "Cancel");
   TTR(aSStack_68, (String*)&local_60);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   BoxContainer::add_spacer(SUB81(*(undefined8*)( this + 0xa08 ), 0));
   plVar2 = *(long**)( this + 0xa10 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   this_02 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_02);
   *(undefined**)( this_02 + 0x20 ) = &_LC22;
   *(undefined1(*) [16])( this_02 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_02 = &PTR_hash_0010a398;
   *(undefined8*)( this_02 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_02 + 0x10 ) = 0;
   *(undefined8*)( this_02 + 0x30 ) = uVar4;
   *(undefined8*)( this_02 + 0x38 ) = 0x100000;
   *(ProgressDialog**)( this_02 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)this_02, (int)this_02 + 0x28);
   *(char**)( this_02 + 0x20 ) = "ProgressDialog::_cancel_pressed";
   Callable::Callable((Callable*)local_58, this_02);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)local_58, 0);
   Callable::~Callable((Callable*)local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* BackgroundProgress::add_task(String const&, String const&, int) */void BackgroundProgress::add_task(BackgroundProgress *this, String *param_1, String *param_2, int param_3) {
   Variant *pVVar1;
   undefined8 uVar2;
   CallableCustom *this_00;
   Variant *pVVar3;
   long in_FS_OFFSET;
   undefined8 local_e8;
   undefined8 local_e0;
   Callable local_d8[16];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(undefined**)( this_00 + 0x20 ) = &_LC22;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_0010a1e8;
   pVVar3 = local_48;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(BackgroundProgress**)( this_00 + 0x28 ) = this;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = _add_task;
   *(undefined8*)( this_00 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "BackgroundProgress::_add_task";
   Callable::Callable(local_d8, this_00);
   local_e0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)param_2);
   local_e8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)param_1);
   Variant::Variant(local_a8, (String*)&local_e8);
   Variant::Variant(local_90, (String*)&local_e0);
   Variant::Variant(local_78, param_3);
   Variant::Variant(local_60, 0);
   local_c8 = local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   Callable::call_deferredp((Variant**)local_d8, (int)&local_c8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   Callable::~Callable(local_d8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BackgroundProgress::end_task(String const&) */void BackgroundProgress::end_task(BackgroundProgress *this, String *param_1) {
   char cVar1;
   undefined8 uVar2;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   undefined8 local_90;
   Callable local_88[16];
   Variant *local_78[2];
   int local_68[6];
   int local_50[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(undefined**)( this_00 + 0x20 ) = &_LC22;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_0010a308;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(BackgroundProgress**)( this_00 + 0x28 ) = this;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = _end_task;
   *(undefined8*)( this_00 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "BackgroundProgress::_end_task";
   Callable::Callable(local_88, this_00);
   local_90 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)param_1);
   Variant::Variant((Variant*)local_68, (String*)&local_90);
   Variant::Variant((Variant*)local_50, 0);
   local_78[0] = (Variant*)local_68;
   Callable::call_deferredp((Variant**)local_88, (int)local_78);
   if (Variant::needs_deinit[local_50[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_68[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_68[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   Callable::~Callable(local_88);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *puVar3 = *(undefined4*)param_1;
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* BackgroundProgress::task_step(String const&, int) */void BackgroundProgress::task_step(BackgroundProgress *this, String *param_1, int param_2) {
   pthread_mutex_t *__mutex;
   undefined8 uVar1;
   int iVar2;
   int *piVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_68[16];
   int local_58[6];
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0xa10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = pthread_mutex_lock(__mutex);
   if (iVar2 == 0) {
      iVar2 = *(int*)( this + 0xa94 );
      pthread_mutex_unlock(__mutex);
      if (iVar2 == 0) {
         this_00 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(this_00);
         *(undefined**)( this_00 + 0x20 ) = &_LC22;
         *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
         *(undefined8*)( this_00 + 0x40 ) = 0;
         *(undefined***)this_00 = &PTR_hash_0010a278;
         uVar1 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( this_00 + 0x10 ) = 0;
         *(undefined8*)( this_00 + 0x30 ) = uVar1;
         *(code**)( this_00 + 0x38 ) = _update;
         *(BackgroundProgress**)( this_00 + 0x28 ) = this;
         CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
         *(char**)( this_00 + 0x20 ) = "BackgroundProgress::_update";
         Callable::Callable(aCStack_68, this_00);
         Variant::Variant((Variant*)local_58, 0);
         Callable::call_deferredp((Variant**)aCStack_68, 0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Callable::~Callable(aCStack_68);
      }

      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 == 0) {
         piVar3 = (int*)HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::operator []((HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>*)( this + 0xa68 ), param_1);
         *piVar3 = param_2;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pthread_mutex_unlock(__mutex);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* BackgroundProgress::_add_task(String const&, String const&, int) */void BackgroundProgress::_add_task(BackgroundProgress *this, String *param_1, String *param_2, int param_3) {
   char cVar1;
   int iVar2;
   BoxContainer *this_00;
   Label *this_01;
   ProgressBar *this_02;
   Control *this_03;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   float fVar4;
   CowData<char32_t> local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xa10 ));
   if (iVar2 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
   }

   local_50 = (ulong)local_50._4_4_ << 0x20;
   cVar1 = HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::_lookup_pos((HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>*)( this + 0xa38 ), param_1, (uint*)&local_50);
   if (cVar1 == '\0') {
      this_00 = (BoxContainer*)operator_new(0xa10, "");
      BoxContainer::BoxContainer(this_00, false);
      this_00[0xa0c] = (BoxContainer)0x1;
      *(undefined***)this_00 = &PTR__initialize_classv_00109780;
      postinitialize_handler((Object*)this_00);
      this_01 = (Label*)operator_new(0xad8, "");
      local_50 = 0;
      Label::Label(this_01, (String*)&local_50);
      postinitialize_handler((Object*)this_01);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_58 = 0;
      String::parse_latin1((String*)&local_58, " ");
      String::operator +((String*)&local_50, param_2);
      Label::set_text((String*)this_01);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      Node::add_child(this_00, this_01, 0, 0);
      this_02 = (ProgressBar*)operator_new(0xa48, "");
      ProgressBar::ProgressBar(this_02);
      postinitialize_handler((Object*)this_02);
      Range::set_max((double)param_3);
      Range::set_value((double)param_3);
      this_03 = (Control*)operator_new(0x9c8, "");
      Control::Control(this_03);
      postinitialize_handler((Object*)this_03);
      Control::set_h_size_flags(this_03, 3);
      Control::set_v_size_flags(this_03, 3);
      Control::set_anchors_and_offsets_preset(this_02, 0xf, 0, 0);
      Node::add_child(this_03, this_02, 0, 0);
      fVar4 = (float)EditorScale::get_scale();
      local_48 = CONCAT44(fVar4 * _LC57._4_4_, fVar4 * (float)_LC57);
      Control::set_custom_minimum_size((Vector2*)this_03);
      Node::add_child(this_00, this_03, 0, 0);
      Node::add_child(this, this_00, 0, 0);
      puVar3 = (undefined8*)HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::operator []((HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>*)( this + 0xa38 ), param_1);
      *puVar3 = this_00;
      puVar3[1] = this_02;
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         LAB_0010130d:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

   }
 else {
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "\' already exists.");
      operator+((char *)
      local_60,(String*)"Task \'";
      String::operator +((String*)&local_50, (String*)local_60);
      _err_print_error("_add_task", "editor/progress_dialog.cpp", 0x2c, "Condition \"tasks.has(p_task)\" is true.", (CowData<char32_t>*)&local_50, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010130d;
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0xa10 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* BackgroundProgress::_task_step(String const&, int) */void BackgroundProgress::_task_step(BackgroundProgress *this, String *param_1, int param_2) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   double dVar3;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xa10 ));
   if (iVar2 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
   }

   local_34 = 0;
   cVar1 = HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::_lookup_pos((HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>*)( this + 0xa38 ), param_1, &local_34);
   if (cVar1 == '\0') {
      _err_print_error("_task_step", "editor/progress_dialog.cpp", 0x51, "Condition \"!tasks.has(p_task)\" is true.", 0, 0);
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101425;
   }
 else {
      HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::operator []((HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>*)( this + 0xa38 ), param_1);
      if (param_2 < 0) {
         dVar3 = (double)Range::get_value();
         Range::set_value(dVar3 + __LC60);
      }
 else {
         Range::set_value((double)param_2);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         LAB_00101425:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0xa10 ));
   return;
}
/* BackgroundProgress::_update() */void BackgroundProgress::_update(BackgroundProgress *this) {
   uint uVar1;
   undefined8 *puVar2;
   void *pvVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   char cVar13;
   int iVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   uint uVar20;
   iVar14 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xa10 ));
   if (iVar14 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar14);
   }

   puVar2 = *(undefined8**)( this + 0xa80 );
   joined_r0x00101476:do {
      if (puVar2 == (undefined8*)0x0) {
         if (( *(long*)( this + 0xa70 ) != 0 ) && ( *(int*)( this + 0xa94 ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa90 ) * 4 );
            if (uVar1 != 0) {
               lVar18 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0xa78 ) + lVar18 ) != 0) {
                     *(int*)( *(long*)( this + 0xa78 ) + lVar18 ) = 0;
                     pvVar3 = *(void**)( *(long*)( this + 0xa70 ) + lVar18 * 2 );
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                     Memory::free_static(pvVar3, false);
                     *(undefined8*)( *(long*)( this + 0xa70 ) + lVar18 * 2 ) = 0;
                  }

                  lVar18 = lVar18 + 4;
               }
 while ( lVar18 != (ulong)uVar1 * 4 );
            }

            *(undefined4*)( this + 0xa94 ) = 0;
            *(undefined1(*) [16])( this + 0xa80 ) = (undefined1[16])0x0;
         }

         pthread_mutex_unlock((pthread_mutex_t*)( this + 0xa10 ));
         return;
      }

      if (( *(long*)( this + 0xa40 ) != 0 ) && ( *(int*)( this + 0xa64 ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa60 ) * 4 );
         lVar18 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa60 ) * 8 );
         uVar15 = String::hash();
         uVar12 = CONCAT44(0, uVar1);
         uVar16 = 1;
         if (uVar15 != 0) {
            uVar16 = uVar15;
         }

         lVar19 = *(long*)( this + 0xa48 );
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar16 * lVar18;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar12;
         lVar17 = SUB168(auVar4 * auVar8, 8);
         uVar15 = *(uint*)( lVar19 + lVar17 * 4 );
         iVar14 = SUB164(auVar4 * auVar8, 8);
         if (uVar15 != 0) {
            uVar20 = 0;
            do {
               if (uVar15 == uVar16) {
                  cVar13 = String::operator ==((String*)( *(long*)( *(long*)( this + 0xa40 ) + lVar17 * 8 ) + 0x10 ), (String*)( puVar2 + 2 ));
                  if (cVar13 != '\0') {
                     _task_step(this, (String*)( puVar2 + 2 ), *(int*)( puVar2 + 3 ));
                     puVar2 = (undefined8*)*puVar2;
                     goto joined_r0x00101476;
                  }

                  lVar19 = *(long*)( this + 0xa48 );
               }

               uVar20 = uVar20 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(iVar14 + 1) * lVar18;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar12;
               lVar17 = SUB168(auVar5 * auVar9, 8);
               uVar15 = *(uint*)( lVar19 + lVar17 * 4 );
               iVar14 = SUB164(auVar5 * auVar9, 8);
            }
 while ( ( uVar15 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar15 * lVar18,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar6 * auVar10, 8)) * lVar18,auVar11._8_8_ = 0,auVar11._0_8_ = uVar12,uVar20 <= SUB164(auVar7 * auVar11, 8) );
         }

      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* BackgroundProgress::_end_task(String const&) */void BackgroundProgress::_end_task(BackgroundProgress *this, String *param_1) {
   HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>> *this_00;
   uint *puVar1;
   uint *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   Object *pOVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long *plVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   uint uVar25;
   char cVar26;
   int iVar27;
   undefined8 *puVar28;
   uint uVar29;
   long lVar30;
   ulong uVar31;
   long *plVar32;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar27 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xa10 ));
   if (iVar27 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar27);
   }

   this_00 = (HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>*)( this + 0xa38 );
   local_44 = 0;
   cVar26 = HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::_lookup_pos(this_00, param_1, &local_44);
   if (cVar26 == '\0') {
      _err_print_error("_end_task", "editor/progress_dialog.cpp", 0x5e, "Condition \"!tasks.has(p_task)\" is true.", 0, 0);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101999;
      goto LAB_00101903;
   }

   puVar28 = (undefined8*)HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::operator [](this_00, param_1);
   pOVar7 = (Object*)*puVar28;
   cVar26 = predelete_handler(pOVar7);
   if (cVar26 != '\0') {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   local_44 = 0;
   cVar26 = HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::_lookup_pos(this_00, param_1, &local_44);
   if (cVar26 != '\0') {
      lVar8 = *(long*)( this + 0xa48 );
      lVar9 = *(long*)( this + 0xa40 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa60 ) * 4 );
      uVar31 = CONCAT44(0, uVar5);
      lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa60 ) * 8 );
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(local_44 + 1) * lVar10;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar31;
      lVar30 = SUB168(auVar13 * auVar19, 8);
      puVar1 = (uint*)( lVar8 + lVar30 * 4 );
      uVar29 = SUB164(auVar13 * auVar19, 8);
      uVar6 = *puVar1;
      if (uVar6 != 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = (ulong)uVar6 * lVar10;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar31;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar14 * auVar20, 8)) * lVar10;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar31;
         iVar27 = SUB164(auVar15 * auVar21, 8);
         while (uVar25 = uVar29,iVar27 != 0) {
            puVar2 = (uint*)( lVar8 + (ulong)local_44 * 4 );
            *puVar1 = *puVar2;
            puVar28 = (undefined8*)( lVar9 + lVar30 * 8 );
            *puVar2 = uVar6;
            puVar3 = (undefined8*)( lVar9 + (ulong)local_44 * 8 );
            uVar11 = *puVar28;
            *puVar28 = *puVar3;
            *puVar3 = uVar11;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = ( ulong )(uVar25 + 1) * lVar10;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar31;
            lVar30 = SUB168(auVar18 * auVar24, 8);
            puVar1 = (uint*)( lVar8 + lVar30 * 4 );
            uVar29 = SUB164(auVar18 * auVar24, 8);
            uVar6 = *puVar1;
            local_44 = uVar25;
            if (uVar6 == 0) break;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar6 * lVar10;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar31;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( ulong )(( uVar29 + uVar5 ) - SUB164(auVar16 * auVar22, 8)) * lVar10;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar31;
            iVar27 = SUB164(auVar17 * auVar23, 8);
         }
;
      }

      uVar31 = (ulong)local_44;
      plVar4 = (long*)( lVar9 + uVar31 * 8 );
      *(undefined4*)( lVar8 + uVar31 * 4 ) = 0;
      plVar32 = (long*)*plVar4;
      if (*(long**)( this + 0xa50 ) == plVar32) {
         *(long*)( this + 0xa50 ) = *plVar32;
         plVar32 = (long*)*plVar4;
         if (*(long**)( this + 0xa58 ) != plVar32) goto LAB_0010189f;
         LAB_00101920:*(long*)( this + 0xa58 ) = plVar32[1];
         plVar32 = (long*)*plVar4;
         plVar12 = (long*)plVar32[1];
      }
 else {
         if (*(long**)( this + 0xa58 ) == plVar32) goto LAB_00101920;
         LAB_0010189f:plVar12 = (long*)plVar32[1];
      }

      if (plVar12 != (long*)0x0) {
         *plVar12 = *plVar32;
         plVar32 = (long*)*plVar4;
      }

      if (*plVar32 != 0) {
         *(long*)( *plVar32 + 8 ) = plVar32[1];
         plVar32 = (long*)*plVar4;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( plVar32 + 2 ));
      Memory::free_static(plVar32, false);
      *(undefined8*)( *(long*)( this + 0xa40 ) + uVar31 * 8 ) = 0;
      *(int*)( this + 0xa64 ) = *(int*)( this + 0xa64 ) + -1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_00101999:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   LAB_00101903:pthread_mutex_unlock((pthread_mutex_t*)( this + 0xa10 ));
   return;
}
/* ProgressDialog::add_task(String const&, String const&, int, bool) */void ProgressDialog::add_task(ProgressDialog *this, String *param_1, String *param_2, int param_3, bool param_4) {
   char cVar1;
   BoxContainer *this_00;
   BoxContainer *this_01;
   ProgressBar *this_02;
   Label *this_03;
   CowData<char32_t> *this_04;
   long in_FS_OFFSET;
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   ulong local_68;
   BoxContainer *local_60;
   ProgressBar *local_58;
   Label *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   MessageQueue::thread_singleton();
   if (*(long*)( in_FS_OFFSET + lRam00000000001019fd ) == 0) {
      cVar1 = CallQueue::is_flushing();
   }
 else {
      MessageQueue::thread_singleton();
      cVar1 = CallQueue::is_flushing();
   }

   if (cVar1 == '\0') {
      local_68 = local_68 & 0xffffffff00000000;
      cVar1 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::_lookup_pos((HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>*)( this + 0xa18 ), param_1, (uint*)&local_68);
      if (cVar1 == '\0') {
         local_68 = 0;
         local_48 = 0;
         this_00 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(this_00, true);
         this_00[0xa0c] = (BoxContainer)0x1;
         *(undefined***)this_00 = &PTR__initialize_classv_00109af8;
         postinitialize_handler((Object*)this_00);
         local_60 = this_00;
         this_01 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(this_01, true);
         this_01[0xa0c] = (BoxContainer)0x1;
         *(undefined***)this_01 = &PTR__initialize_classv_00109af8;
         postinitialize_handler((Object*)this_01);
         VBoxContainer::add_margin_child((String*)this_00, (Control*)param_2, SUB81(this_01, 0));
         this_02 = (ProgressBar*)operator_new(0xa48, "");
         ProgressBar::ProgressBar(this_02);
         postinitialize_handler((Object*)this_02);
         local_58 = this_02;
         Range::set_max((double)param_3);
         Range::set_value((double)param_3);
         Node::add_child(this_01, this_02, 0, 0);
         this_03 = (Label*)operator_new(0xad8, "");
         local_70 = 0;
         Label::Label(this_03, (String*)&local_70);
         postinitialize_handler((Object*)this_03);
         local_50 = this_03;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         Label::set_clip_text(SUB81(this_03, 0));
         Node::add_child(this_01, this_03, 0, 0);
         Node::add_child(*(undefined8*)( this + 0xa50 ), this_00, 0, 0);
         this_04 = (CowData<char32_t>*)HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::operator []((HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>*)( this + 0xa18 ), param_1);
         CowData<char32_t>::_ref(this_04, (CowData*)&local_68);
         *(BoxContainer**)( this_04 + 8 ) = this_00;
         *(ProgressBar**)( this_04 + 0x10 ) = this_02;
         *(Label**)( this_04 + 0x18 ) = this_03;
         *(undefined8*)( this_04 + 0x20 ) = 0;
         if (param_4) {
            CanvasItem::show();
            CanvasItem::move_to_front();
            this[0xa70] = (ProgressDialog)0x0;
            _popup(this);
            Control::grab_focus();
         }
 else {
            CanvasItem::hide();
            CanvasItem::move_to_front();
            this[0xa70] = (ProgressDialog)0x0;
            _popup(this);
         }

         if (( (byte)this[0x2fa] & 0x40 ) != 0) {
            ( **(code**)( *DisplayServer::singleton + 0x748 ) )();
            Main::iteration();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }
 else {
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "\' already exists.");
         operator+((char *)
         local_78,(String*)"Task \'";
         String::operator +((String*)&local_68, (String*)local_78);
         _err_print_error("add_task", "editor/progress_dialog.cpp", 0xbb, "Condition \"tasks.has(p_task)\" is true.", (CowData<char32_t>*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref(local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("add_task", "editor/progress_dialog.cpp", 0xb7, "Do not use progress dialog (task) while flushing the message queue or using call_deferred()!", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ProgressDialog::task_step(String const&, String const&, int, bool) */ProgressDialog ProgressDialog::task_step(ProgressDialog *this, String *param_1, String *param_2, int param_3, bool param_4) {
   ProgressDialog PVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   double dVar7;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar2 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::_lookup_pos((HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>*)( this + 0xa18 ), param_1, &local_44);
   if (cVar2 == '\0') {
      _err_print_error("task_step", "editor/progress_dialog.cpp", 0xd9, "Condition \"!tasks.has(p_task)\" is true. Returning: canceled", 0, 0);
      PVar1 = this[0xa70];
      goto LAB_00101e6c;
   }

   lVar3 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::operator []((HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>*)( this + 0xa18 ), param_1);
   if (param_4) {
      LAB_00101e0c:if (param_3 < 0) {
         dVar7 = (double)Range::get_value();
         Range::set_value(dVar7 + __LC60);
      }
 else {
         Range::set_value((double)param_3);
      }

      Label::set_text(*(String**)( lVar3 + 0x18 ));
      plVar4 = (long*)OS::get_singleton();
      uVar5 = ( **(code**)( *plVar4 + 0x208 ) )(plVar4);
      *(undefined8*)( lVar3 + 0x20 ) = uVar5;
      if (( (byte)this[0x2fa] & 0x40 ) != 0) {
         ( **(code**)( *DisplayServer::singleton + 0x748 ) )();
         Main::iteration();
      }

   }
 else {
      plVar4 = (long*)OS::get_singleton();
      lVar6 = ( **(code**)( *plVar4 + 0x208 ) )(plVar4);
      if (199999 < ( ulong )(lVar6 - *(long*)( lVar3 + 0x20 ))) goto LAB_00101e0c;
   }

   PVar1 = this[0xa70];
   LAB_00101e6c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return PVar1;
}
/* ProgressDialog::end_task(String const&) */void ProgressDialog::end_task(ProgressDialog *this, String *param_1) {
   HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>> *this_00;
   uint *puVar1;
   uint *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   Object *pOVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   long *plVar11;
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   uint uVar24;
   char cVar25;
   int iVar26;
   long lVar27;
   uint uVar28;
   long lVar29;
   ulong uVar30;
   long *plVar31;
   undefined8 *puVar32;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   this_00 = (HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>*)( this + 0xa18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar25 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::_lookup_pos(this_00, param_1, &local_44);
   if (cVar25 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("end_task", "editor/progress_dialog.cpp", 0xf0, "Condition \"!tasks.has(p_task)\" is true.", 0, 0);
         return;
      }

      goto LAB_00102280;
   }

   lVar27 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::operator [](this_00, param_1);
   pOVar7 = *(Object**)( lVar27 + 8 );
   cVar25 = predelete_handler(pOVar7);
   if (cVar25 != '\0') {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

   local_44 = 0;
   cVar25 = HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::_lookup_pos(this_00, param_1, &local_44);
   if (cVar25 == '\0') {
      iVar26 = *(int*)( this + 0xa44 );
   }
 else {
      lVar27 = *(long*)( this + 0xa28 );
      lVar8 = *(long*)( this + 0xa20 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa40 ) * 4 );
      uVar30 = CONCAT44(0, uVar5);
      lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa40 ) * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(local_44 + 1) * lVar9;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar30;
      lVar29 = SUB168(auVar12 * auVar18, 8);
      puVar1 = (uint*)( lVar27 + lVar29 * 4 );
      uVar28 = SUB164(auVar12 * auVar18, 8);
      uVar6 = *puVar1;
      if (uVar6 != 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar6 * lVar9;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar30;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(( uVar5 + uVar28 ) - SUB164(auVar13 * auVar19, 8)) * lVar9;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar30;
         iVar26 = SUB164(auVar14 * auVar20, 8);
         while (uVar24 = uVar28,iVar26 != 0) {
            puVar2 = (uint*)( lVar27 + (ulong)local_44 * 4 );
            *puVar1 = *puVar2;
            puVar3 = (undefined8*)( lVar8 + lVar29 * 8 );
            *puVar2 = uVar6;
            puVar32 = (undefined8*)( lVar8 + (ulong)local_44 * 8 );
            uVar10 = *puVar3;
            *puVar3 = *puVar32;
            *puVar32 = uVar10;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( ulong )(uVar24 + 1) * lVar9;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar30;
            lVar29 = SUB168(auVar17 * auVar23, 8);
            puVar1 = (uint*)( lVar27 + lVar29 * 4 );
            uVar28 = SUB164(auVar17 * auVar23, 8);
            uVar6 = *puVar1;
            local_44 = uVar24;
            if (uVar6 == 0) break;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar6 * lVar9;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar30;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = ( ulong )(( uVar28 + uVar5 ) - SUB164(auVar15 * auVar21, 8)) * lVar9;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar30;
            iVar26 = SUB164(auVar16 * auVar22, 8);
         }
;
      }

      uVar30 = (ulong)local_44;
      plVar4 = (long*)( lVar8 + uVar30 * 8 );
      *(undefined4*)( lVar27 + uVar30 * 4 ) = 0;
      plVar31 = (long*)*plVar4;
      if (*(long**)( this + 0xa30 ) == plVar31) {
         *(long*)( this + 0xa30 ) = *plVar31;
         plVar31 = (long*)*plVar4;
         if (*(long**)( this + 0xa38 ) != plVar31) goto LAB_001020d8;
         LAB_001021f0:*(long*)( this + 0xa38 ) = plVar31[1];
         plVar31 = (long*)*plVar4;
         plVar11 = (long*)plVar31[1];
      }
 else {
         if (*(long**)( this + 0xa38 ) == plVar31) goto LAB_001021f0;
         LAB_001020d8:plVar11 = (long*)plVar31[1];
      }

      if (plVar11 != (long*)0x0) {
         *plVar11 = *plVar31;
         plVar31 = (long*)*plVar4;
      }

      if (*plVar31 != 0) {
         *(long*)( *plVar31 + 8 ) = plVar31[1];
         plVar31 = (long*)*plVar4;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( plVar31 + 3 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( plVar31 + 2 ));
      Memory::free_static(plVar31, false);
      *(undefined8*)( *(long*)( this + 0xa20 ) + uVar30 * 8 ) = 0;
      iVar26 = *(int*)( this + 0xa44 ) + -1;
      *(int*)( this + 0xa44 ) = iVar26;
   }

   if (iVar26 == 0) {
      CanvasItem::hide();
      Node::set_process_input(SUB81(EditorNode::singleton, 0));
      puVar32 = *(undefined8**)( this + 0xa60 );
      puVar3 = puVar32 + *(uint*)( this + 0xa58 );
      for (; puVar3 != puVar32; puVar32 = puVar32 + 1) {
         Node::set_process_mode(*puVar32, 0);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _popup(this);
      return;
   }

   LAB_00102280:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* CallableCustomMethodPointer<ProgressDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ProgressDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ProgressDialog,void> *this) {
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void> *this) {
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this) {
   return;
}
/* CallableCustomMethodPointer<ProgressDialog, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ProgressDialog,void>::get_argument_count(CallableCustomMethodPointer<ProgressDialog,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::get_argument_count(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<BackgroundProgress, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void>::get_argument_count(CallableCustomMethodPointer<BackgroundProgress,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::get_argument_count(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ProgressDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ProgressDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ProgressDialog,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ProgressDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 ProgressDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ProgressDialog::_property_can_revertv(StringName const&) const */undefined8 ProgressDialog::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::get_object(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010269d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010269d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010269d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ProgressDialog, void>::get_object() const */undefined8 CallableCustomMethodPointer<ProgressDialog,void>::get_object(CallableCustomMethodPointer<ProgressDialog,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010279d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010279d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010279d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::get_object() const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::get_object(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010289d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010289d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010289d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<BackgroundProgress, void>::get_object() const */undefined8 CallableCustomMethodPointer<BackgroundProgress,void>::get_object(CallableCustomMethodPointer<BackgroundProgress,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010299d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010299d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010299d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* ProgressDialog::_validate_propertyv(PropertyInfo&) const */void ProgressDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0010d010 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* ProgressDialog::is_class_ptr(void*) const */uint ProgressDialog::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10a4, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &CenterContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010d018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010d018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010d020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* ProgressDialog::_setv(StringName const&, Variant const&) */undefined8 ProgressDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010d020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010d020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10a4, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10a4, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10a4, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102fd8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010d028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00103048) *//* ProgressDialog::_getv(StringName const&, Variant&) const */undefined8 ProgressDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010d028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001030b8) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010d028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* ProgressDialog::_get_class_namev() const */undefined8 *ProgressDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103113:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103113;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ProgressDialog");
         goto LAB_0010317e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ProgressDialog");
   LAB_0010317e:return &_get_class_namev();
}
/* HBoxContainer::_get_class_namev() const */undefined8 *HBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103203:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103203;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010326e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010326e:return &_get_class_namev();
}
/* VBoxContainer::_get_class_namev() const */undefined8 *VBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001032f3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001032f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_0010335e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_0010335e:return &_get_class_namev();
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001033f0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001033f0:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103450;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103450:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001034b0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001034b0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103520;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103520:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010d030 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010d030 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010d030 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010d030 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* ProgressDialog::_notificationv(int, bool) */void ProgressDialog::_notificationv(ProgressDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0x2d) {
         _notification(iVar1);
      }

      if ((code*)PTR__notification_0010d038 != Container::_notification) {
         CenterContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010d038 != Container::_notification) {
      CenterContainer::_notification(iVar1);
   }

   if (param_1 != 0x2d) {
      return;
   }

   _notification(iVar1);
   return;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* ProgressDialog::get_class() const */void ProgressDialog::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "ProgressDialog");
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "VBoxContainer");
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "HBoxContainer");
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
::operator[](HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
             *this,String *param_1){
   undefined8 *puVar1;
   void *pvVar2;
   void *__s;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   char cVar36;
   uint uVar37;
   uint uVar38;
   ulong uVar39;
   undefined8 uVar40;
   void *__s_00;
   undefined1(*pauVar41)[16];
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
   undefined1(*pauVar55)[16];
   undefined1(*pauVar56)[16];
   long in_FS_OFFSET;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      LAB_00104568:uVar39 = (ulong)uVar54;
      uVar43 = uVar39 * 4;
      uVar47 = uVar39 * 8;
      uVar40 = Memory::alloc_static(uVar43, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      pvVar42 = (void*)Memory::alloc_static(uVar47, false);
      *(void**)( this + 8 ) = pvVar42;
      if (uVar54 != 0) {
         pvVar2 = *(void**)( this + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar42 + uVar47 ) ) && ( pvVar42 < (void*)( (long)pvVar2 + uVar43 ) )) {
            uVar43 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar43 * 4 ) = 0;
               *(undefined8*)( (long)pvVar42 + uVar43 * 8 ) = 0;
               uVar43 = uVar43 + 1;
            }
 while ( uVar39 != uVar43 );
            goto LAB_001043ea;
         }

         memset(pvVar2, 0, uVar43);
         memset(pvVar42, 0, uVar47);
         iVar44 = *(int*)( this + 0x2c );
         LAB_001043ee:if (iVar44 != 0) {
            LAB_001043f6:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar51 = String::hash();
            uVar39 = CONCAT44(0, uVar37);
            lVar52 = *(long*)( this + 0x10 );
            uVar38 = 1;
            if (uVar51 != 0) {
               uVar38 = uVar51;
            }

            uVar53 = 0;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar38 * lVar3;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar39;
            lVar45 = SUB168(auVar16 * auVar32, 8);
            uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar50 = SUB164(auVar16 * auVar32, 8);
            if (uVar51 != 0) {
               do {
                  if (uVar38 == uVar51) {
                     cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                     if (cVar36 != '\0') {
                        pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                        *(undefined4*)( pauVar41[1] + 8 ) = 0;
                        goto LAB_001042cb;
                     }

                     lVar52 = *(long*)( this + 0x10 );
                  }

                  uVar53 = uVar53 + 1;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( ulong )(uVar50 + 1) * lVar3;
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uVar39;
                  lVar45 = SUB168(auVar17 * auVar33, 8);
                  uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
                  uVar50 = SUB164(auVar17 * auVar33, 8);
               }
 while ( ( uVar51 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar51 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar50 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar53 <= SUB164(auVar19 * auVar35, 8) );
            }

            iVar44 = *(int*)( this + 0x2c );
         }

         uVar39 = (ulong)uVar54;
         goto LAB_00103f14;
      }

      iVar44 = *(int*)( this + 0x2c );
      if (pvVar42 == (void*)0x0) goto LAB_00103f14;
      if (iVar44 != 0) goto LAB_001043f6;
      LAB_00103f3a:uVar54 = *(uint*)( this + 0x28 );
      if (uVar54 == 0x1c) {
         pauVar41 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_001042cb;
      }

      uVar39 = ( ulong )(uVar54 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar54 * 4 );
      if (uVar54 + 1 < 2) {
         uVar39 = 2;
      }

      uVar54 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
      uVar47 = (ulong)uVar54;
      *(int*)( this + 0x28 ) = (int)uVar39;
      pvVar42 = *(void**)( this + 8 );
      uVar39 = uVar47 * 4;
      uVar43 = uVar47 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar40 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      __s_00 = (void*)Memory::alloc_static(uVar43, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar54 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar39 != uVar47 );
         }
 else {
            memset(__s, 0, uVar39);
            memset(__s_00, 0, uVar43);
         }

      }

      if (uVar37 != 0) {
         uVar39 = 0;
         do {
            uVar54 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
            if (uVar54 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar50 = 0;
               uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar43 = CONCAT44(0, uVar38);
               lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar54 * lVar52;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar45 = SUB168(auVar4 * auVar20, 8);
               puVar49 = (uint*)( lVar3 + lVar45 * 4 );
               iVar44 = SUB164(auVar4 * auVar20, 8);
               uVar51 = *puVar49;
               uVar40 = *(undefined8*)( (long)pvVar42 + uVar39 * 8 );
               while (uVar51 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar51 * lVar52;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar43;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar5 * auVar21, 8)) * lVar52;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar43;
                  uVar53 = SUB164(auVar6 * auVar22, 8);
                  uVar48 = uVar40;
                  if (uVar53 < uVar50) {
                     *puVar49 = uVar54;
                     puVar1 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                     uVar48 = *puVar1;
                     *puVar1 = uVar40;
                     uVar54 = uVar51;
                     uVar50 = uVar53;
                  }

                  uVar50 = uVar50 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  lVar45 = SUB168(auVar7 * auVar23, 8);
                  puVar49 = (uint*)( lVar3 + lVar45 * 4 );
                  iVar44 = SUB164(auVar7 * auVar23, 8);
                  uVar40 = uVar48;
                  uVar51 = *puVar49;
               }
;
               *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
               *puVar49 = uVar54;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar39 = uVar39 + 1;
         }
 while ( uVar37 != uVar39 );
         Memory::free_static(pvVar42, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      iVar44 = *(int*)( this + 0x2c );
      uVar39 = CONCAT44(0, uVar54);
      if (iVar44 != 0) {
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar38 = String::hash();
         lVar52 = *(long*)( this + 0x10 );
         uVar37 = 1;
         if (uVar38 != 0) {
            uVar37 = uVar38;
         }

         uVar50 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar37 * lVar3;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar39;
         lVar45 = SUB168(auVar12 * auVar28, 8);
         uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar51 = SUB164(auVar12 * auVar28, 8);
         if (uVar38 != 0) {
            do {
               if (uVar37 == uVar38) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     goto LAB_001042cb;
                  }

                  lVar52 = *(long*)( this + 0x10 );
               }

               uVar50 = uVar50 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar39;
               lVar45 = SUB168(auVar13 * auVar29, 8);
               uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
               uVar51 = SUB164(auVar13 * auVar29, 8);
            }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar51 + uVar54 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar50 <= SUB164(auVar15 * auVar31, 8) );
         }

         uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (*(long*)( this + 8 ) == 0) goto LAB_00104568;
         LAB_001043ea:iVar44 = *(int*)( this + 0x2c );
         goto LAB_001043ee;
      }

      LAB_00103f14:if ((float)uVar39 * __LC31 < (float)( iVar44 + 1 )) goto LAB_00103f3a;
   }

   local_58 = 0;
   if (*(long*)param_1 == 0) {
      local_50 = 0;
      pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar41[1] = 0;
      *pauVar41 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
      lVar3 = local_58;
      local_50 = 0;
      pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar41[1] = 0;
      *(undefined8*)*pauVar41 = 0;
      *(undefined8*)( *pauVar41 + 8 ) = 0;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)&local_58);
      }

   }

   *(undefined4*)( pauVar41[1] + 8 ) = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   puVar1 = *(undefined8**)( this + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
   }
 else {
      *puVar1 = pauVar41;
      *(undefined8**)( *pauVar41 + 8 ) = puVar1;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
   uVar37 = String::hash();
   lVar3 = *(long*)( this + 0x10 );
   uVar54 = 1;
   if (uVar37 != 0) {
      uVar54 = uVar37;
   }

   uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar39 = CONCAT44(0, uVar37);
   lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar54 * lVar52;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar39;
   lVar46 = SUB168(auVar8 * auVar24, 8);
   lVar45 = *(long*)( this + 8 );
   puVar49 = (uint*)( lVar3 + lVar46 * 4 );
   iVar44 = SUB164(auVar8 * auVar24, 8);
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
         auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar52;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar39;
         uVar50 = SUB164(auVar10 * auVar26, 8);
         pauVar56 = pauVar55;
         if (uVar50 < uVar51) {
            *puVar49 = uVar54;
            puVar1 = (undefined8*)( lVar45 + lVar46 * 8 );
            pauVar56 = (undefined1(*) [16])*puVar1;
            *puVar1 = pauVar55;
            uVar51 = uVar50;
            uVar54 = uVar38;
         }

         uVar51 = uVar51 + 1;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar39;
         lVar46 = SUB168(auVar11 * auVar27, 8);
         puVar49 = (uint*)( lVar3 + lVar46 * 4 );
         iVar44 = SUB164(auVar11 * auVar27, 8);
         uVar38 = *puVar49;
         pauVar55 = pauVar56;
      }
 while ( uVar38 != 0 );
   }

   *(undefined1(**) [16])( lVar45 + lVar46 * 8 ) = pauVar56;
   *puVar49 = uVar54;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_001042cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pauVar41[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<ProgressDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ProgressDialog,void>::call(CallableCustomMethodPointer<ProgressDialog,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010486f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010486f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104848. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00104920;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010486f:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104920:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<BackgroundProgress, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<BackgroundProgress,void>::call(CallableCustomMethodPointer<BackgroundProgress,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00104a7f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00104a7f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104a58. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00104b30;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00104a7f:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104b30:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::call(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48[0] = (Variant)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar7[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar8 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 4) {
               if (param_2 == 3) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
                  uVar3 = _LC42;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  iVar5 = Variant::operator_cast_to_int(param_1[2]);
                  cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 4);
                  uVar3 = _LC43;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_50);
                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar3 = _LC44;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_String(local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), local_48, (Variant*)&local_50, iVar5);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 3;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 3;
            }

            goto LAB_00104c04;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   String::parse_latin1((String*)&local_50, "\', can\'t call method.");
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)local_48, (String*)local_58);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00104c04:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<BackgroundProgress, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::call(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   Variant local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (Variant)0x0;
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar7 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar7 & 1 ) != 0) {
                     pcVar7 = *(code**)( pcVar7 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar3 = _LC44;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_String(local_38);
                  ( *pcVar7 )((long*)( lVar1 + lVar2 ), local_38);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_00104eee;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_40 = 0;
   String::parse_latin1((String*)&local_40, "\', can\'t call method.");
   uitos((ulong)local_50);
   operator+((char *)
   local_48,(String*)"Invalid Object id \'";
   String::operator +((String*)local_38, (String*)local_48);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_00104eee:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   uint uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar1 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar1 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = String::operator ==(param_1, "Object");
            return uVar4;
         }

         LAB_001051a7:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      uVar3 = String::operator ==(param_1, (String*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if ((char)uVar3 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar3;
         }

         goto LAB_001051a7;
      }

      lVar1 = *(long*)( lVar1 + 8 );
   }
 while ( true );
}
/* ProgressDialog::~ProgressDialog() */void ProgressDialog::~ProgressDialog(ProgressDialog *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   bool bVar4;
   *(undefined***)this = &PTR__initialize_classv_00109e70;
   if (*(void**)( this + 0xa60 ) != (void*)0x0) {
      if (*(int*)( this + 0xa58 ) != 0) {
         *(undefined4*)( this + 0xa58 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0xa60 ), false);
   }

   pvVar3 = *(void**)( this + 0xa20 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xa44 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa40 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xa44 ) = 0;
            *(undefined1(*) [16])( this + 0xa30 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa28 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0xa28 ) + lVar2 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x18 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0xa20 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xa44 ) = 0;
            *(undefined1(*) [16])( this + 0xa30 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010529a;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xa28 ), false);
   }

   LAB_0010529a:bVar4 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar4) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001052e3;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001052e3:Control::~Control((Control*)this);
   return;
}
/* ProgressDialog::~ProgressDialog() */void ProgressDialog::~ProgressDialog(ProgressDialog *this) {
   ~ProgressDialog(this)
   ;;
   operator_delete(this, 0xa78);
   return;
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00105453;
   }

   cVar3 = String::operator ==(param_1, "Control");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00105453;
      }

      cVar3 = String::operator ==(param_1, "CanvasItem");
      if (cVar3 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar2 = *(long*)( lVar1 + 0x20 );
            if (lVar2 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
               }

            }

            cVar3 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar3 != '\0') goto LAB_00105453;
         }

         cVar3 = String::operator ==(param_1, "Node");
         if (cVar3 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar4 = Object::is_class((Object*)this, param_1);
               return uVar4;
            }

            goto LAB_001055de;
         }

      }

   }

   LAB_00105453:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001055de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_001056c3;
   }

   cVar3 = String::operator ==(param_1, "Container");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = Control::is_class((Control*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_001056c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ProgressDialog::is_class(String const&) const */undefined8 ProgressDialog::is_class(ProgressDialog *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00105803;
   }

   cVar3 = String::operator ==(param_1, "ProgressDialog");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00105803;
      }

      cVar3 = String::operator ==(param_1, "CenterContainer");
      if (cVar3 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = Container::is_class((Container*)this, param_1);
            return uVar4;
         }

         goto LAB_001058f6;
      }

   }

   LAB_00105803:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001058f6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Object");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     if ((code*)PTR__bind_methods_0010d050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Node");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010d040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "CanvasItem");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Control");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Control");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Container");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Container");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "BoxContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010d048 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "BoxContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "HBoxContainer");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ProgressDialog::_initialize_classv() */void ProgressDialog::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (CenterContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Object");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     if ((code*)PTR__bind_methods_0010d050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Node");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010d040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "CanvasItem");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Control");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Control");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Container");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Container");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "CenterContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010d058 != Container::_bind_methods) {
            CenterContainer::_bind_methods();
         }

         CenterContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "CenterContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "ProgressDialog");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Object");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     if ((code*)PTR__bind_methods_0010d050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Node");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010d040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "CanvasItem");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Control");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Control");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Container");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Container");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "BoxContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010d048 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "BoxContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "VBoxContainer");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC48;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC48;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010d060 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Control";
   local_98 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010d068 != CanvasItem::_get_property_list) {
      Control::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Container";
   local_98 = 0;
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Container", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::_get_property_listv((Control*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BoxContainer";
   local_98 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "BoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "HBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "VBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CenterContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CenterContainer::_get_property_listv(CenterContainer *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CenterContainer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CenterContainer";
   local_98 = 0;
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CenterContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ProgressDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ProgressDialog::_get_property_listv(ProgressDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CenterContainer::_get_property_listv((CenterContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ProgressDialog";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ProgressDialog";
   local_98 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
   local_50 = 0x80;
   if (local_60 == 0x11) {
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_68 = local_80;
      }

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ProgressDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CenterContainer::_get_property_listv((CenterContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00108223;
   }

   cVar4 = String::operator ==(param_1, "VBoxContainer");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00108223;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_0010832e;
      }

   }

   LAB_00108223:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010832e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00108413;
   }

   cVar4 = String::operator ==(param_1, "BoxContainer");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00108413;
      }

      cVar4 = String::operator ==(param_1, "Container");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Control::is_class((Control*)this, param_1);
            return uVar5;
         }

         goto LAB_0010851e;
      }

   }

   LAB_00108413:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010851e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00108603;
   }

   cVar3 = String::operator ==(param_1, "HBoxContainer");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_00108603:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<String, BackgroundProgress::Task, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, BackgroundProgress::Task> > >::_lookup_pos(String
   const&, unsigned int&) const */undefined8 HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::_lookup_pos(HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>> *this, String *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, BackgroundProgress::Task, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, BackgroundProgress::Task> > >::operator[](String
   const&) */undefined1 * __thiscallHashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>>::operator [](HashMap<String,BackgroundProgress::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,BackgroundProgress::Task>>> * this, String * param_1) * puVar1 ;void *pvVar2void *__slong lVar3long lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]char cVar21uint uVar22uint uVar23ulong uVar24undefined8 uVar25void *__s_00undefined1(*pauVar26)[16];void *pvVar27int iVar28long lVar29long lVar30uint uVar31ulong uVar32undefined8 uVar33uint *puVar34uint uVar35uint uVar36uint uVar37ulong uVar38undefined1(*pauVar39)[16];undefined1(*pauVar40)[16];long in_FS_OFFSETuint local_70uint local_6cundefined1 local_68[16]long local_58undefined1 local_50[16]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_70 = 0;cVar21 = _lookup_pos(this, param_1, &local_70);if (cVar21 == '\0') {
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      uVar32 = (ulong)uVar31;
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( this + 0x10 ) = uVar25;
      pvVar27 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = pvVar27;
      if (uVar31 != 0) {
         pvVar2 = *(void**)( this + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar27 + uVar38 ) ) && ( pvVar27 < (void*)( (long)pvVar2 + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)pvVar27 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            }
 while ( uVar32 != uVar24 );
         }
 else {
            memset(pvVar2, 0, uVar24);
            memset(pvVar27, 0, uVar38);
         }

      }

   }

   local_6c = 0;
   cVar21 = _lookup_pos(this, param_1, &local_6c);
   if (cVar21 == '\0') {
      if ((float)uVar31 * __LC31 < (float)( *(int*)( this + 0x2c ) + 1 )) {
         uVar31 = *(uint*)( this + 0x28 );
         if (uVar31 == 0x1c) {
            pauVar26 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00108bf8;
         }

         uVar24 = ( ulong )(uVar31 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar23 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
         if (uVar31 + 1 < 2) {
            uVar24 = 2;
         }

         uVar31 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
         uVar32 = (ulong)uVar31;
         *(int*)( this + 0x28 ) = (int)uVar24;
         pvVar27 = *(void**)( this + 8 );
         uVar24 = uVar32 * 4;
         uVar38 = uVar32 * 8;
         pvVar2 = *(void**)( this + 0x10 );
         uVar25 = Memory::alloc_static(uVar24, false);
         *(undefined8*)( this + 0x10 ) = uVar25;
         __s_00 = (void*)Memory::alloc_static(uVar38, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar31 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
               uVar24 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
                  uVar24 = uVar24 + 1;
               }
 while ( uVar24 != uVar32 );
            }
 else {
               memset(__s, 0, uVar24);
               memset(__s_00, 0, uVar38);
            }

         }

         if (uVar23 != 0) {
            uVar24 = 0;
            do {
               uVar31 = *(uint*)( (long)pvVar2 + uVar24 * 4 );
               if (uVar31 != 0) {
                  lVar3 = *(long*)( this + 0x10 );
                  uVar36 = 0;
                  uVar35 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar38 = CONCAT44(0, uVar35);
                  lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar31 * lVar4;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = uVar38;
                  lVar29 = SUB168(auVar5 * auVar13, 8);
                  puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                  iVar28 = SUB164(auVar5 * auVar13, 8);
                  uVar37 = *puVar34;
                  uVar25 = *(undefined8*)( (long)pvVar27 + uVar24 * 8 );
                  while (uVar37 != 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar37 * lVar4;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = uVar38;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(( uVar35 + iVar28 ) - SUB164(auVar6 * auVar14, 8)) * lVar4;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar38;
                     uVar22 = SUB164(auVar7 * auVar15, 8);
                     uVar33 = uVar25;
                     if (uVar22 < uVar36) {
                        *puVar34 = uVar31;
                        puVar1 = (undefined8*)( (long)__s_00 + lVar29 * 8 );
                        uVar33 = *puVar1;
                        *puVar1 = uVar25;
                        uVar31 = uVar37;
                        uVar36 = uVar22;
                     }

                     uVar36 = uVar36 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar38;
                     lVar29 = SUB168(auVar8 * auVar16, 8);
                     puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                     iVar28 = SUB164(auVar8 * auVar16, 8);
                     uVar25 = uVar33;
                     uVar37 = *puVar34;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar29 * 8 ) = uVar25;
                  *puVar34 = uVar31;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar24 = uVar24 + 1;
            }
 while ( uVar23 != uVar24 );
            Memory::free_static(pvVar27, false);
            Memory::free_static(pvVar2, false);
         }

      }

      local_58 = 0;
      local_68 = (undefined1[16])0x0;
      if (*(long*)param_1 == 0) {
         local_50 = (undefined1[16])0x0;
         pauVar26 = (undefined1(*) [16])operator_new(0x28, "");
         *(undefined8*)pauVar26[1] = 0;
         *pauVar26 = (undefined1[16])0x0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         lVar3 = local_58;
         uVar25 = local_68._0_8_;
         uVar33 = local_68._8_8_;
         local_50 = (undefined1[16])0x0;
         pauVar26 = (undefined1(*) [16])operator_new(0x28, "");
         *(undefined8*)pauVar26[1] = 0;
         *(undefined8*)*pauVar26 = uVar25;
         *(undefined8*)( *pauVar26 + 8 ) = uVar33;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar26 + 1 ), (CowData*)&local_58);
         }

      }

      *(undefined8*)( pauVar26[1] + 8 ) = local_50._0_8_;
      *(undefined8*)pauVar26[2] = local_50._8_8_;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar1 = *(undefined8**)( this + 0x20 );
      if (puVar1 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar26;
      }
 else {
         *puVar1 = pauVar26;
         *(undefined8**)( *pauVar26 + 8 ) = puVar1;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar26;
      uVar23 = String::hash();
      lVar3 = *(long*)( this + 0x10 );
      uVar31 = 1;
      if (uVar23 != 0) {
         uVar31 = uVar23;
      }

      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar24 = CONCAT44(0, uVar23);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar24;
      lVar30 = SUB168(auVar9 * auVar17, 8);
      lVar29 = *(long*)( this + 8 );
      puVar34 = (uint*)( lVar3 + lVar30 * 4 );
      iVar28 = SUB164(auVar9 * auVar17, 8);
      uVar35 = *puVar34;
      pauVar40 = pauVar26;
      if (uVar35 != 0) {
         uVar37 = 0;
         pauVar39 = pauVar26;
         do {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar35 * lVar4;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar24;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(( uVar23 + iVar28 ) - SUB164(auVar10 * auVar18, 8)) * lVar4;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar24;
            uVar36 = SUB164(auVar11 * auVar19, 8);
            pauVar40 = pauVar39;
            if (uVar36 < uVar37) {
               *puVar34 = uVar31;
               puVar1 = (undefined8*)( lVar29 + lVar30 * 8 );
               pauVar40 = (undefined1(*) [16])*puVar1;
               *puVar1 = pauVar39;
               uVar37 = uVar36;
               uVar31 = uVar35;
            }

            uVar37 = uVar37 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar24;
            lVar30 = SUB168(auVar12 * auVar20, 8);
            puVar34 = (uint*)( lVar3 + lVar30 * 4 );
            iVar28 = SUB164(auVar12 * auVar20, 8);
            uVar35 = *puVar34;
            pauVar39 = pauVar40;
         }
 while ( uVar35 != 0 );
      }

      *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar40;
      *puVar34 = uVar31;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   }
 else {
      pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_6c * 8 );
      *(undefined1(*) [16])( pauVar26[1] + 8 ) = (undefined1[16])0x0;
   }

}
 else {
   pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_70 * 8 );
}
LAB_00108bf8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar26[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* HashMap<String, ProgressDialog::Task, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ProgressDialog::Task> > >::_lookup_pos(String
   const&, unsigned int&) const */undefined8 HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::_lookup_pos(HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>> *this, String *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, ProgressDialog::Task, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ProgressDialog::Task> > >::operator[](String const&)
    */undefined1 * __thiscallHashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>>::operator [](HashMap<String,ProgressDialog::Task,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ProgressDialog::Task>>> * this, String * param_1) * puVar1 ;void *pvVar2void *__slong lVar3long lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]char cVar21uint uVar22uint uVar23ulong uVar24undefined8 uVar25void *__s_00undefined1(*pauVar26)[16];void *pvVar27int iVar28long lVar29long lVar30uint uVar31ulong uVar32undefined8 uVar33uint *puVar34uint uVar35uint uVar36uint uVar37ulong uVar38undefined1(*pauVar39)[16];undefined1(*pauVar40)[16];long in_FS_OFFSETuint local_c0uint local_bcCowData<char32_t> local_b8[16]undefined1 local_a8[16]undefined8 local_98undefined1 local_88[16]long local_78CowData<char32_t> local_70[16]undefined1 local_60[16]undefined8 local_50long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_c0 = 0;cVar21 = _lookup_pos(this, param_1, &local_c0);if (cVar21 != '\0') {
   pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_c0 * 8 );
   goto LAB_00109368;
}
local_98 = 0;uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_b8[0] = (CowData<char32_t>)0x0;local_b8[1] = (CowData<char32_t>)0x0;local_b8[2] = (CowData<char32_t>)0x0;local_b8[3] = (CowData<char32_t>)0x0;local_b8[4] = (CowData<char32_t>)0x0;local_b8[5] = (CowData<char32_t>)0x0;local_b8[6] = (CowData<char32_t>)0x0;local_b8[7] = (CowData<char32_t>)0x0;local_b8[8] = (CowData<char32_t>)0x0;local_b8[9] = (CowData<char32_t>)0x0;local_b8[10] = (CowData<char32_t>)0x0;local_b8[0xb] = (CowData<char32_t>)0x0;local_b8[0xc] = (CowData<char32_t>)0x0;local_b8[0xd] = (CowData<char32_t>)0x0;local_b8[0xe] = (CowData<char32_t>)0x0;local_b8[0xf] = (CowData<char32_t>)0x0;local_a8 = (undefined1[16])0x0;if (*(long*)( this + 8 ) == 0) {
   uVar32 = (ulong)uVar31;
   uVar24 = uVar32 * 4;
   uVar38 = uVar32 * 8;
   uVar25 = Memory::alloc_static(uVar24, false);
   *(undefined8*)( this + 0x10 ) = uVar25;
   pvVar27 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = pvVar27;
   if (uVar31 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar27 + uVar38 ) ) && ( pvVar27 < (void*)( (long)pvVar2 + uVar24 ) )) {
         uVar24 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar24 * 4 ) = 0;
            *(undefined8*)( (long)pvVar27 + uVar24 * 8 ) = 0;
            uVar24 = uVar24 + 1;
         }
 while ( uVar32 != uVar24 );
      }
 else {
         memset(pvVar2, 0, uVar24);
         memset(pvVar27, 0, uVar38);
      }

   }

}
local_bc = 0;cVar21 = _lookup_pos(this, param_1, &local_bc);if (cVar21 == '\0') {
   if ((float)uVar31 * __LC31 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar31 = *(uint*)( this + 0x28 );
      if (uVar31 == 0x1c) {
         pauVar26 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010935c;
      }

      uVar24 = ( ulong )(uVar31 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar23 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      if (uVar31 + 1 < 2) {
         uVar24 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
      uVar32 = (ulong)uVar31;
      *(int*)( this + 0x28 ) = (int)uVar24;
      pvVar27 = *(void**)( this + 8 );
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( this + 0x10 ) = uVar25;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar31 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            }
 while ( uVar32 != uVar24 );
         }
 else {
            memset(__s, 0, uVar24);
            memset(__s_00, 0, uVar38);
         }

      }

      if (uVar23 != 0) {
         uVar24 = 0;
         do {
            uVar31 = *(uint*)( (long)pvVar2 + uVar24 * 4 );
            if (uVar31 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar36 = 0;
               uVar35 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar38 = CONCAT44(0, uVar35);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar31 * lVar4;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar38;
               lVar29 = SUB168(auVar5 * auVar13, 8);
               puVar34 = (uint*)( lVar3 + lVar29 * 4 );
               iVar28 = SUB164(auVar5 * auVar13, 8);
               uVar37 = *puVar34;
               uVar25 = *(undefined8*)( (long)pvVar27 + uVar24 * 8 );
               while (uVar37 != 0) {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (ulong)uVar37 * lVar4;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar38;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(( iVar28 + uVar35 ) - SUB164(auVar6 * auVar14, 8)) * lVar4;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar38;
                  uVar22 = SUB164(auVar7 * auVar15, 8);
                  uVar33 = uVar25;
                  if (uVar22 < uVar36) {
                     *puVar34 = uVar31;
                     puVar1 = (undefined8*)( (long)__s_00 + lVar29 * 8 );
                     uVar33 = *puVar1;
                     *puVar1 = uVar25;
                     uVar31 = uVar37;
                     uVar36 = uVar22;
                  }

                  uVar36 = uVar36 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar38;
                  lVar29 = SUB168(auVar8 * auVar16, 8);
                  puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                  iVar28 = SUB164(auVar8 * auVar16, 8);
                  uVar25 = uVar33;
                  uVar37 = *puVar34;
               }
;
               *(undefined8*)( (long)__s_00 + lVar29 * 8 ) = uVar25;
               *puVar34 = uVar31;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar24 = uVar24 + 1;
         }
 while ( uVar23 != uVar24 );
         Memory::free_static(pvVar27, false);
         Memory::free_static(pvVar2, false);
      }

   }

   local_78 = 0;
   local_88 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      for (int i = 0; i < 16; i++) {
         local_70[i] = (CowData<char32_t>)0;
      }

      local_60 = (undefined1[16])0x0;
      local_50 = 0;
      pauVar26 = (undefined1(*) [16])operator_new(0x40, "");
      *(undefined8*)pauVar26[1] = 0;
      *pauVar26 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_1);
      lVar3 = local_78;
      uVar25 = local_88._0_8_;
      uVar33 = local_88._8_8_;
      local_50 = 0;
      for (int i = 0; i < 16; i++) {
         local_70[i] = (CowData<char32_t>)0;
      }

      local_60 = (undefined1[16])0x0;
      pauVar26 = (undefined1(*) [16])operator_new(0x40, "");
      *(undefined8*)pauVar26[1] = 0;
      *(undefined8*)*pauVar26 = uVar25;
      *(undefined8*)( *pauVar26 + 8 ) = uVar33;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar26 + 1 ), (CowData*)&local_78);
      }

   }

   *(undefined8*)( pauVar26[3] + 8 ) = 0;
   *(undefined1(*) [16])( pauVar26[1] + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pauVar26[2] + 8 ) = (undefined1[16])0x0;
   CowData<char32_t>::_unref(local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   puVar1 = *(undefined8**)( this + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar26;
   }
 else {
      *puVar1 = pauVar26;
      *(undefined8**)( *pauVar26 + 8 ) = puVar1;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar26;
   uVar23 = String::hash();
   lVar3 = *(long*)( this + 0x10 );
   uVar31 = 1;
   if (uVar23 != 0) {
      uVar31 = uVar23;
   }

   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar24 = CONCAT44(0, uVar23);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar31 * lVar4;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar24;
   lVar30 = SUB168(auVar9 * auVar17, 8);
   lVar29 = *(long*)( this + 8 );
   puVar34 = (uint*)( lVar3 + lVar30 * 4 );
   iVar28 = SUB164(auVar9 * auVar17, 8);
   uVar35 = *puVar34;
   pauVar40 = pauVar26;
   if (uVar35 != 0) {
      uVar37 = 0;
      pauVar39 = pauVar26;
      do {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar35 * lVar4;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar24;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( iVar28 + uVar23 ) - SUB164(auVar10 * auVar18, 8)) * lVar4;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar24;
         uVar36 = SUB164(auVar11 * auVar19, 8);
         pauVar40 = pauVar39;
         if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8*)( lVar29 + lVar30 * 8 );
            pauVar40 = (undefined1(*) [16])*puVar1;
            *puVar1 = pauVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
         }

         uVar37 = uVar37 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar24;
         lVar30 = SUB168(auVar12 * auVar20, 8);
         puVar34 = (uint*)( lVar3 + lVar30 * 4 );
         iVar28 = SUB164(auVar12 * auVar20, 8);
         uVar35 = *puVar34;
         pauVar39 = pauVar40;
      }
 while ( uVar35 != 0 );
   }

   *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar40;
   *puVar34 = uVar31;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar24 = (ulong)local_bc;
   lVar3 = *(long*)( *(long*)( this + 8 ) + uVar24 * 8 );
   CowData<char32_t>::_ref((CowData<char32_t>*)( lVar3 + 0x18 ), (CowData*)local_b8);
   *(undefined8*)( lVar3 + 0x30 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0x20 ) = (undefined1[16])0x0;
   lVar4 = *(long*)( this + 8 );
   *(undefined8*)( lVar3 + 0x38 ) = 0;
   pauVar26 = *(undefined1(**) [16])( lVar4 + uVar24 * 8 );
}
LAB_0010935c:CowData<char32_t>::_unref(local_b8);LAB_00109368:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar26[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<BackgroundProgress, void, String const&, String const&,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&,String_const&,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<BackgroundProgress, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<BackgroundProgress, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<BackgroundProgress,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<BackgroundProgress,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ProgressDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ProgressDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ProgressDialog,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ProgressDialog::~ProgressDialog() */void ProgressDialog::~ProgressDialog(ProgressDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

