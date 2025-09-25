/* RunInstancesDialog::_start_main_timer() */void RunInstancesDialog::_start_main_timer(void) {
   Timer::start(_LC0);
   return;
}
/* RunInstancesDialog::_start_instance_timer() */void RunInstancesDialog::_start_instance_timer(void) {
   Timer::start(_LC0);
   return;
}
/* CowData<RunInstancesDialog::InstanceData>::_copy_on_write() [clone .isra.0] */void CowData<RunInstancesDialog::InstanceData>::_copy_on_write(CowData<RunInstancesDialog::InstanceData> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

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
/* RunInstancesDialog::popup_dialog() */void RunInstancesDialog::popup_dialog(RunInstancesDialog *this) {
   long in_FS_OFFSET;
   float fVar1;
   undefined8 local_20;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar1 = (float)EditorScale::get_scale();
   local_20 = CONCAT44(fVar1 * _LC15._4_4_, fVar1 * (float)_LC15);
   local_18 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_20);
   Window::popup_centered(this);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::get_instance_count() const */int RunInstancesDialog::get_instance_count(void) {
   char cVar1;
   double dVar2;
   cVar1 = BaseButton::is_pressed();
   if (cVar1 == '\0') {
      return 1;
   }

   dVar2 = (double)Range::get_value();
   return (int)dVar2;
}
/* RunInstancesDialog::InstanceData::overrides_run_args() const */void RunInstancesDialog::InstanceData::overrides_run_args(InstanceData *this) {
   TreeItem::is_checked((int)*(undefined8*)this);
   return;
}
/* RunInstancesDialog::InstanceData::get_launch_arguments() const */InstanceData * __thiscall RunInstancesDialog::InstanceData::get_launch_arguments(InstanceData *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TreeItem::get_text((int)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::InstanceData::overrides_features() const */void RunInstancesDialog::InstanceData::overrides_features(InstanceData *this) {
   TreeItem::is_checked((int)*(undefined8*)this);
   return;
}
/* RunInstancesDialog::InstanceData::get_feature_tags() const */InstanceData * __thiscall RunInstancesDialog::InstanceData::get_feature_tags(InstanceData *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TreeItem::get_text((int)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_create_instance(RunInstancesDialog::InstanceData&, Dictionary const&, int)
    */void RunInstancesDialog::_create_instance(InstanceData *param_1, Dictionary *param_2, int param_3) {
   char cVar1;
   undefined8 uVar2;
   undefined4 in_register_00000014;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined8 local_a0;
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   pVVar3 = (Variant*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = Tree::create_item(*(TreeItem**)( param_1 + 0xdf8 ), 0);
   *(undefined8*)param_2 = uVar2;
   TreeItem::set_cell_mode(uVar2, 0, 1);
   iVar4 = (int)uVar2;
   TreeItem::set_editable(iVar4, false);
   local_a8 = "";
   local_b0 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_a8 = "Enabled";
   local_a0 = 7;
   String::parse_latin1((StrRange*)&local_b8);
   TTR((String*)&local_a8, (String*)&local_b8);
   TreeItem::set_text(uVar2, 0, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   Variant::Variant((Variant*)local_78, false);
   Variant::Variant((Variant*)local_98, "override_args");
   Dictionary::get((Variant*)local_58, pVVar3);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TreeItem::set_checked(iVar4, false);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
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

   TreeItem::set_editable(iVar4, true);
   local_b0 = 0;
   Variant::Variant((Variant*)local_78, (String*)&local_b0);
   Variant::Variant((Variant*)local_98, "arguments");
   Dictionary::get((Variant*)local_58, pVVar3);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   TreeItem::set_text(uVar2, 1, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   TreeItem::set_cell_mode(uVar2, 2, 1);
   TreeItem::set_editable(iVar4, true);
   local_a8 = "";
   local_b0 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_b0);
   local_a8 = "Enabled";
   local_b8 = 0;
   local_a0 = 7;
   String::parse_latin1((StrRange*)&local_b8);
   TTR((String*)&local_a8, (String*)&local_b8);
   TreeItem::set_text(uVar2, 2, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   Variant::Variant((Variant*)local_78, false);
   Variant::Variant((Variant*)local_98, "override_features");
   Dictionary::get((Variant*)local_58, pVVar3);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TreeItem::set_checked(iVar4, true);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
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

   TreeItem::set_editable(iVar4, true);
   local_b0 = 0;
   Variant::Variant((Variant*)local_78, (String*)&local_b0);
   Variant::Variant((Variant*)local_98, "features");
   Dictionary::get((Variant*)local_58, pVVar3);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   TreeItem::set_text(uVar2, 3, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RunInstancesDialog::_save_main_args() */void RunInstancesDialog::_save_main_args(void) {
   bool bVar1;
   String *pSVar2;
   long in_FS_OFFSET;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar2 = (String*)ProjectSettings::get_singleton();
   LineEdit::get_text();
   Variant::Variant((Variant*)local_58, (String*)&local_78);
   local_68 = "editor/run/main_run_args";
   local_70 = 0;
   local_60 = 0x18;
   String::parse_latin1((StrRange*)&local_70);
   ProjectSettings::set_setting(pSVar2, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   ProjectSettings::get_singleton();
   ProjectSettings::save();
   pSVar2 = (String*)EditorSettings::get_singleton();
   LineEdit::get_text();
   Variant::Variant((Variant*)local_58, local_80);
   local_68 = "run_main_feature_tags";
   local_70 = 0;
   local_60 = 0x15;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "debug_options";
   local_78 = 0;
   local_60 = 0xd;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar2, (String*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   pSVar2 = (String*)EditorSettings::get_singleton();
   bVar1 = (bool)BaseButton::is_pressed();
   Variant::Variant((Variant*)local_58, bVar1);
   local_68 = "multiple_instances_enabled";
   local_70 = 0;
   local_60 = 0x1a;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "debug_options";
   local_78 = 0;
   local_60 = 0xd;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar2, (String*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_instance_tree_rmb(Vector2 const&, MouseButton) */void RunInstancesDialog::_instance_tree_rmb(RunInstancesDialog *this, undefined8 *param_1, int param_3) {
   Vector2i *pVVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   undefined8 local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 2) {
      PopupMenu::clear(SUB81(*(undefined8*)( this + 0xe00 ), 0));
      local_78 = "";
      uVar4 = *(undefined8*)( this + 0xe00 );
      local_88 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Clear";
      local_80 = 0;
      local_70 = 5;
      String::parse_latin1((StrRange*)&local_80);
      TTR((String*)&local_78, (String*)&local_80);
      PopupMenu::add_item(uVar4, (String*)&local_78, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      lVar3 = Tree::get_item_at_position(*(Vector2**)( this + 0xdf8 ));
      if (lVar3 == 0) {
         PopupMenu::set_item_disabled((int)*(undefined8*)( this + 0xe00 ), false);
      }
 else {
         uVar4 = *(undefined8*)( this + 0xe00 );
         iVar2 = TreeItem::get_index();
         Variant::Variant((Variant*)&local_58, iVar2);
         PopupMenu::set_item_metadata((int)uVar4, (Variant*)0x0);
         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

      }

      uVar4 = *(undefined8*)( this + 0xe00 );
      local_78 = "";
      local_88 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Clear All";
      local_80 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange*)&local_80);
      TTR((String*)&local_78, (String*)&local_80);
      PopupMenu::add_item(uVar4, (String*)&local_78, 1, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      pVVar1 = *(Vector2i**)( this + 0xe00 );
      uVar4 = Control::get_screen_position();
      local_60 = CONCAT44((float)( ( ulong ) * param_1 >> 0x20 ) + (float)( (ulong)uVar4 >> 0x20 ), (float)*param_1 + (float)uVar4);
      local_58 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_60);
      Window::set_position(pVVar1);
      Window::reset_size();
      local_58 = 0;
      local_50 = 0;
      ( **(code**)( **(long**)( this + 0xe00 ) + 0x240 ) )(*(long**)( this + 0xe00 ), &local_58);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_save_arguments() */void RunInstancesDialog::_save_arguments(RunInstancesDialog *this) {
   long *plVar1;
   undefined8 *puVar2;
   char cVar3;
   char *pcVar4;
   bool bVar5;
   long lVar6;
   Variant *pVVar7;
   String *pSVar8;
   int iVar9;
   long lVar10;
   long in_FS_OFFSET;
   double dVar11;
   Array *local_a8;
   undefined8 local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( this + 0xdc0 );
   if (lVar6 != 0) {
      lVar10 = 0;
      do {
         if (*(long*)( lVar6 + -8 ) <= lVar10) break;
         puVar2 = (undefined8*)( lVar6 + lVar10 * 8 );
         Dictionary::Dictionary((Dictionary*)&local_90);
         bVar5 = (bool)TreeItem::is_checked((int)*puVar2);
         Variant::Variant((Variant*)local_58, bVar5);
         Variant::Variant((Variant*)local_78, "override_args");
         pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_90);
         if (pVVar7 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar7 = 0;
            *(int*)pVVar7 = local_58[0];
            *(undefined8*)( pVVar7 + 8 ) = local_50;
            *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] == '\0') {
            cVar3 = Variant::needs_deinit[local_58[0]];
         }
 else {
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[local_58[0]];
         }

         if (cVar3 != '\0') {
            Variant::_clear_internal();
         }

         iVar9 = (int)(String*)&local_88;
         TreeItem::get_text(iVar9);
         Variant::Variant((Variant*)local_58, (String*)&local_88);
         Variant::Variant((Variant*)local_78, "arguments");
         pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_90);
         if (pVVar7 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar7 = 0;
            *(int*)pVVar7 = local_58[0];
            *(undefined8*)( pVVar7 + 8 ) = local_50;
            *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] == '\0') {
            cVar3 = Variant::needs_deinit[local_58[0]];
         }
 else {
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[local_58[0]];
         }

         if (cVar3 != '\0') {
            Variant::_clear_internal();
         }

         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar4 + -0x10 ), false);
            }

         }

         bVar5 = (bool)TreeItem::is_checked((int)*puVar2);
         Variant::Variant((Variant*)local_58, bVar5);
         Variant::Variant((Variant*)local_78, "override_features");
         pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_90);
         if (pVVar7 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar7 = 0;
            *(int*)pVVar7 = local_58[0];
            *(undefined8*)( pVVar7 + 8 ) = local_50;
            *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         TreeItem::get_text(iVar9);
         Variant::Variant((Variant*)local_58, (String*)&local_88);
         Variant::Variant((Variant*)local_78, "features");
         pVVar7 = (Variant*)Dictionary::operator []((Variant*)&local_90);
         if (pVVar7 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar7 = 0;
            *(int*)pVVar7 = local_58[0];
            *(undefined8*)( pVVar7 + 8 ) = local_50;
            *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         pcVar4 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar4 + -0x10 ), false);
            }

         }

         Variant::Variant((Variant*)local_58, (Dictionary*)&local_90);
         pVVar7 = (Variant*)Array::operator []((int)this + 0xdb0);
         if (pVVar7 == (Variant*)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar7 = 0;
            *(int*)pVVar7 = local_58[0];
            *(undefined8*)( pVVar7 + 8 ) = local_50;
            *(undefined8*)( pVVar7 + 0x10 ) = uStack_48;
         }

         lVar10 = lVar10 + 1;
         Dictionary::~Dictionary((Dictionary*)&local_90);
         lVar6 = *(long*)( this + 0xdc0 );
      }
 while ( lVar6 != 0 );
   }

   local_a8 = (Array*)( this + 0xdb0 );
   pSVar8 = (String*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, local_a8);
   local_88 = "run_instances_config";
   local_90 = 0;
   local_80 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_88 = "debug_options";
   local_80 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   EditorSettings::set_project_metadata(pSVar8, (String*)&local_98, (Variant*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar8 = (String*)EditorSettings::get_singleton();
   dVar11 = (double)Range::get_value();
   Variant::Variant((Variant*)local_58, dVar11);
   local_88 = "run_instance_count";
   local_90 = 0;
   local_80 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_88 = "debug_options";
   local_80 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   EditorSettings::set_project_metadata(pSVar8, (String*)&local_98, (Variant*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RunInstancesDialog::_fetch_main_args() */void RunInstancesDialog::_fetch_main_args(RunInstancesDialog *this) {
   undefined8 uVar1;
   char cVar2;
   long in_FS_OFFSET;
   long local_58;
   Variant local_50[8];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = Control::has_focus();
   if (cVar2 == '\0') {
      uVar1 = *(undefined8*)( this + 0xdd8 );
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_58, "editor/run/main_run_args", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      Variant::operator_cast_to_String(local_50);
      LineEdit::set_text(uVar1, local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* RunInstancesDialog::apply_custom_features(int) */void RunInstancesDialog::apply_custom_features(RunInstancesDialog *this, int param_1) {
   code *pcVar1;
   char *pcVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> *local_b8;
   char *local_98;
   undefined8 local_90;
   Vector local_88[8];
   char *local_80;
   String local_78[8];
   long local_70;
   Vector<String> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   lVar7 = (long)param_1;
   lVar6 = *(long*)( this + 0xdc0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar7 < 0) {
      if (lVar6 != 0) {
         lVar4 = *(long*)( lVar6 + -8 );
         goto LAB_00101ce2;
      }

   }
 else if (lVar6 != 0) {
      lVar4 = *(long*)( lVar6 + -8 );
      if (lVar4 <= lVar7) goto LAB_00101ce2;
      local_98 = (char*)0x0;
      cVar3 = BaseButton::is_pressed();
      if (cVar3 == '\0') {
         LineEdit::get_text();
      }
 else {
         cVar3 = TreeItem::is_checked((int)*(undefined8*)( lVar6 + lVar7 * 8 ));
         if (cVar3 == '\0') {
            TreeItem::get_text((int)(CowData<char32_t>*)local_68);
            local_58 = ",";
            local_80 = (char*)0x0;
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_80);
            LineEdit::get_text();
            String::operator +(local_78, (String*)local_88);
            String::operator +((String*)&local_58, local_78);
            if (local_98 != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               local_98 = local_58;
               local_58 = (char*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            goto LAB_001019a8;
         }

         TreeItem::get_text((int)&local_58);
      }

      if (local_98 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         local_98 = local_58;
         local_58 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      LAB_001019a8:local_b8 = (CowData<char32_t>*)&local_98;
      lVar6 = 0;
      String::split((char*)local_78, SUB81(local_b8, 0), 0x104bf0);
      local_60 = 0;
      do {
         while (true) {
            if (( local_70 == 0 ) || ( *(long*)( local_70 + -8 ) <= lVar6 )) {
               plVar5 = (long*)OS::get_singleton();
               local_90 = 0;
               pcVar1 = *(code**)( *plVar5 + 0x178 );
               local_50 = 1;
               local_58 = ",";
               String::parse_latin1((StrRange*)&local_90);
               String::join(local_88);
               local_58 = "GODOT_EDITOR_CUSTOM_FEATURES";
               local_80 = (char*)0x0;
               local_50 = 0x1c;
               String::parse_latin1((StrRange*)&local_80);
               ( *pcVar1 )(plVar5, (StrRange*)&local_80, local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<String>::_unref((CowData<String>*)&local_60);
               CowData<String>::_unref((CowData<String>*)&local_70);
               CowData<char32_t>::_unref(local_b8);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            String::strip_edges(SUB81((StrRange*)&local_80, 0), (bool)( (char)local_70 + (char)lVar6 * '\b' ));
            if (local_80 != (char*)0x0) break;
            LAB_00101a01:lVar6 = lVar6 + 1;
         }
;
         if (*(uint*)( local_80 + -8 ) < 2) {
            LAB_001019e0:pcVar2 = local_80;
            LOCK();
            plVar5 = (long*)( local_80 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_80 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

            goto LAB_00101a01;
         }

         local_58 = (char*)0x0;
         plVar5 = (long*)( local_80 + -0x10 );
         do {
            lVar7 = *plVar5;
            if (lVar7 == 0) goto LAB_00101a7b;
            LOCK();
            lVar4 = *plVar5;
            bVar8 = lVar7 == lVar4;
            if (bVar8) {
               *plVar5 = lVar7 + 1;
               lVar4 = lVar7;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar4 != -1) {
            local_58 = local_80;
         }

         LAB_00101a7b:pcVar2 = local_58;
         Vector<String>::push_back(local_68);
         if (pcVar2 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( pcVar2 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         if (local_80 != (char*)0x0) goto LAB_001019e0;
         lVar6 = lVar6 + 1;
      }
 while ( true );
   }

   lVar4 = 0;
   LAB_00101ce2:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RunInstancesDialog::_split_cmdline_args(String const&) const */String *RunInstancesDialog::_split_cmdline_args(String *param_1) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   bool bVar4;
   long lVar5;
   long lVar6;
   long *in_RDX;
   int iVar7;
   long lVar8;
   int iVar9;
   int *piVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   bool bVar13;
   CowData<char32_t> aCStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *in_RDX;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar5 != 0) {
      lVar8 = 0;
      iVar12 = 0x2d;
      bVar4 = false;
      iVar9 = 0;
      do {
         lVar1 = *(long*)( lVar5 + -8 );
         iVar11 = (int)lVar1;
         if (( iVar11 == 0 ) || ( iVar7 = iVar11 + -1 <= iVar7 )) {
            if ((int)( ( iVar11 + -1 + ( uint )(iVar11 == 0) ) - iVar9 ) < 1) goto LAB_00101dc7;
            goto LAB_00101da1;
         }

         if (lVar8 == lVar1) {
            iVar11 = (int)String::_null;
            if ((int)String::_null == 0x22) {
               LAB_00101ea0:lVar2 = lVar1 - ( lVar8 + -1 );
               bVar13 = lVar1 == lVar8 + -1;
               if (bVar13) goto LAB_00101f30;
               LAB_00101ead:lVar6 = lVar8 + -1;
               if (bVar13 || SBORROW8(lVar1, lVar6) != lVar2 < 0) {
                  LAB_00101eee:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar1, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               piVar10 = (int*)( lVar5 + -4 + lVar8 * 4 );
            }
 else {
               if ((int)String::_null != 0x27) goto LAB_00101e14;
               lVar2 = lVar1 - ( lVar8 + -1 );
               bVar13 = lVar2 == 0;
               if (!bVar13) goto LAB_00101ead;
               LAB_00101f30:piVar10 = (int*)&String::_null;
            }

            if (*piVar10 != 0x5c) {
               if (bVar4) {
                  LAB_00101e81:if (iVar11 == iVar12) {
                     bVar4 = false;
                     iVar12 = 0x2d;
                  }

               }
 else {
                  LAB_00101ec1:bVar4 = true;
                  iVar12 = iVar11;
               }

            }

         }
 else {
            lVar6 = lVar8;
            if (lVar1 <= lVar8) goto LAB_00101eee;
            iVar11 = *(int*)( lVar5 + lVar8 * 4 );
            if (( iVar11 == 0x22 ) || ( iVar11 == 0x27 )) {
               if (lVar8 != 0) goto LAB_00101ea0;
               if (!bVar4) goto LAB_00101ec1;
               goto LAB_00101e81;
            }

            LAB_00101e14:if (( !bVar4 ) && ( iVar11 == 0x20 )) {
               if (0 < iVar7 - iVar9) {
                  String::substr((int)aCStack_38, (int)in_RDX);
                  Vector<String>::push_back((Vector<String>*)param_1, aCStack_38);
                  CowData<char32_t>::_unref(aCStack_38);
                  lVar5 = *in_RDX;
               }

               iVar9 = iVar7 + 1;
               bVar4 = false;
            }

         }

         lVar8 = lVar8 + 1;
      }
 while ( lVar5 != 0 );
      if (iVar9 < 0) {
         LAB_00101da1:String::substr((int)aCStack_38, (int)in_RDX);
         Vector<String>::push_back((Vector<String>*)param_1, aCStack_38);
         CowData<char32_t>::_unref(aCStack_38);
      }

   }

   LAB_00101dc7:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* RunInstancesDialog::get_argument_list_for_instance(int, List<String, DefaultAllocator>&) const */void RunInstancesDialog::get_argument_list_for_instance(RunInstancesDialog *this, int param_1, List *param_2) {
   undefined8 uVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   char cVar5;
   int iVar6;
   long *plVar7;
   CowData<char32_t> *pCVar8;
   undefined1(*pauVar9)[16];
   uint uVar10;
   ulong uVar11;
   long lVar12;
   long lVar13;
   CowData *pCVar14;
   long in_FS_OFFSET;
   CowData<char32_t> *local_c0;
   CowData<String> *local_a0;
   undefined *local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   String local_78[8];
   long local_70;
   CowData<char32_t> local_68[8];
   CowData *local_60;
   undefined *local_58;
   long local_50[2];
   long local_40;
   uVar11 = (ulong)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar13 = *(long*)( this + 0xdc0 );
   if ((long)uVar11 < 0) {
      if (lVar13 != 0) {
         lVar12 = *(long*)( lVar13 + -8 );
         goto LAB_001024fb;
      }

   }
 else if (lVar13 != 0) {
      lVar12 = *(long*)( lVar13 + -8 );
      if (lVar12 <= (long)uVar11) goto LAB_001024fb;
      cVar4 = TreeItem::is_checked((int)*(undefined8*)( lVar13 + uVar11 * 8 ));
      cVar5 = BaseButton::is_pressed();
      local_98 = (undefined*)0x0;
      if (cVar5 != '\0') {
         lVar13 = *(long*)( this + 0xdc0 );
         if (cVar4 == '\0') {
            if (lVar13 != 0) {
               lVar12 = *(long*)( lVar13 + -8 );
               if (lVar12 <= (long)uVar11) goto LAB_001024fb;
               TreeItem::get_text((int)local_68);
               local_80 = 0;
               local_58 = &_LC57;
               local_50[0] = 1;
               String::parse_latin1((StrRange*)&local_80);
               LineEdit::get_text();
               String::operator +(local_78, (String*)&local_88);
               String::operator +((String*)&local_58, local_78);
               if (local_98 != local_58) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  local_98 = local_58;
                  local_58 = (undefined*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref(local_68);
               goto LAB_00102069;
            }

         }
 else if (lVar13 != 0) {
            lVar12 = *(long*)( lVar13 + -8 );
            if (lVar12 <= (long)uVar11) goto LAB_001024fb;
            TreeItem::get_text((int)&local_58);
            if (local_98 != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               local_98 = local_58;
               local_58 = (undefined*)0x0;
            }

            goto LAB_00102061;
         }

         goto LAB_001026d0;
      }

      LineEdit::get_text();
      if (local_98 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         local_98 = local_58;
         local_58 = (undefined*)0x0;
      }

      LAB_00102061:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      LAB_00102069:local_c0 = (CowData<char32_t>*)&local_98;
      plVar7 = (long*)OS::get_singleton();
      ( **(code**)( *plVar7 + 0x100 ) )((CowData<char32_t>*)&local_90, plVar7);
      if (( local_98 == (undefined*)0x0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) goto LAB_0010209b;
      iVar6 = String::find((char*)local_c0, 0x104c11);
      local_70 = 0;
      if (iVar6 == -1) {
         _split_cmdline_args((CowData<char32_t>*)&local_58);
         lVar13 = local_50[0];
         if (local_50[0] == 0) {
            CowData<String>::_unref((CowData<String>*)local_50);
         }
 else {
            lVar12 = 0;
            CowData<String>::_unref((CowData<String>*)&local_70);
            local_70 = lVar13;
            local_50[0] = 0;
            CowData<String>::_unref((CowData<String>*)local_50);
            if (0 < *(long*)( lVar13 + -8 )) {
               do {
                  String::replace((char*)&local_58, (char*)( lVar13 + lVar12 * 8 ));
                  if (*(long*)param_2 == 0) {
                     pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])param_2 = pauVar9;
                     *(undefined4*)pauVar9[1] = 0;
                     *pauVar9 = (undefined1[16])0x0;
                  }

                  pCVar8 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar8 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar8 + 0x10 ) = (undefined1[16])0x0;
                  if (local_58 != (undefined*)0x0) {
                     CowData<char32_t>::_ref(pCVar8, (CowData*)&local_58);
                  }

                  plVar7 = *(long**)param_2;
                  lVar2 = plVar7[1];
                  *(undefined8*)( pCVar8 + 8 ) = 0;
                  *(long**)( pCVar8 + 0x18 ) = plVar7;
                  *(long*)( pCVar8 + 0x10 ) = lVar2;
                  if (lVar2 != 0) {
                     *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar8;
                  }

                  plVar7[1] = (long)pCVar8;
                  if (*plVar7 == 0) {
                     *plVar7 = (long)pCVar8;
                  }

                  *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
                  lVar12 = lVar12 + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               }
 while ( lVar12 < *(long*)( lVar13 + -8 ) );
            }

         }

      }
 else {
         String::substr((int)(CowData<char32_t>*)&local_58, (int)local_c0);
         _split_cmdline_args(local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         pCVar14 = local_60;
         if (local_60 != (CowData*)0x0) {
            lVar12 = *(long*)( local_60 + -8 );
            if (0 < lVar12) {
               if (local_90 == *(long*)local_60) {
                  LAB_00102271:CowData<String>::_copy_on_write((CowData<String>*)&local_60);
                  if (local_60 == (CowData*)0x0) {
                     lVar13 = -1;
                  }
 else {
                     lVar13 = *(long*)( local_60 + -8 ) + -1;
                     if (0 < lVar13) {
                        lVar12 = 0;
                        pCVar14 = local_60;
                        do {
                           if (*(long*)pCVar14 != *(long*)( (CowData<char32_t>*)pCVar14 + 8 )) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)pCVar14);
                              uVar1 = *(undefined8*)( (CowData<char32_t>*)pCVar14 + 8 );
                              *(undefined8*)( (CowData<char32_t>*)pCVar14 + 8 ) = 0;
                              *(undefined8*)pCVar14 = uVar1;
                           }

                           lVar12 = lVar12 + 1;
                           pCVar14 = (CowData*)( (CowData<char32_t>*)pCVar14 + 8 );
                        }
 while ( lVar13 != lVar12 );
                     }

                  }

                  CowData<String>::resize<false>((CowData<String>*)&local_60, lVar13);
                  pCVar14 = local_60;
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, local_60);
                  if (0 < *(long*)( pCVar14 + -8 )) goto LAB_00102271;
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, 0, *(long*)( pCVar14 + -8 ), "p_index", "size()", "", false, false);
               }

               plVar7 = (long*)OS::get_singleton();
               ( **(code**)( *plVar7 + 0x100 ) )((CowData<char32_t>*)&local_58, plVar7);
               if (*(long*)param_2 == 0) {
                  pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_2 = pauVar9;
                  *(undefined4*)pauVar9[1] = 0;
                  *pauVar9 = (undefined1[16])0x0;
               }

               pCVar8 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])pCVar8 = (undefined1[16])0x0;
               *(undefined1(*) [16])( pCVar8 + 0x10 ) = (undefined1[16])0x0;
               if (local_58 != (undefined*)0x0) {
                  CowData<char32_t>::_ref(pCVar8, (CowData*)&local_58);
               }

               plVar7 = *(long**)param_2;
               *(undefined8*)( pCVar8 + 0x10 ) = 0;
               lVar13 = *plVar7;
               *(long**)( pCVar8 + 0x18 ) = plVar7;
               *(long*)( pCVar8 + 8 ) = lVar13;
               if (lVar13 != 0) {
                  *(CowData<char32_t>**)( lVar13 + 0x10 ) = pCVar8;
               }

               *plVar7 = (long)pCVar8;
               if (plVar7[1] == 0) {
                  plVar7[1] = (long)pCVar8;
               }

               *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (pCVar14 == (CowData*)0x0) goto LAB_001026e5;
               lVar12 = *(long*)( (CowData<char32_t>*)pCVar14 + -8 );
            }

            uVar10 = (int)lVar12 - 1;
            if (-1 < (int)uVar10) {
               for (uVar11 = (ulong)uVar10; (long)uVar11 < lVar12; uVar11 = uVar11 - 1) {
                  String::replace((char*)&local_58, (char*)( (CowData<char32_t>*)pCVar14 + uVar11 * 8 ));
                  if (*(long*)param_2 == 0) {
                     pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])param_2 = pauVar9;
                     *(undefined4*)pauVar9[1] = 0;
                     *pauVar9 = (undefined1[16])0x0;
                  }

                  pCVar8 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar8 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar8 + 0x10 ) = (undefined1[16])0x0;
                  if (local_58 != (undefined*)0x0) {
                     CowData<char32_t>::_ref(pCVar8, (CowData*)&local_58);
                  }

                  *(undefined8*)( pCVar8 + 0x10 ) = 0;
                  plVar7 = *(long**)param_2;
                  lVar13 = *plVar7;
                  *(long**)( pCVar8 + 0x18 ) = plVar7;
                  *(long*)( pCVar8 + 8 ) = lVar13;
                  if (lVar13 != 0) {
                     *(CowData<char32_t>**)( lVar13 + 0x10 ) = pCVar8;
                  }

                  *plVar7 = (long)pCVar8;
                  if (plVar7[1] == 0) {
                     plVar7[1] = (long)pCVar8;
                  }

                  *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  if ((int)uVar11 == 0) goto LAB_001026e5;
                  lVar12 = *(long*)( (CowData<char32_t>*)pCVar14 + -8 );
               }

               goto LAB_001024fb;
            }

         }

         LAB_001026e5:local_88 = 0;
         String::parse_latin1((String*)&local_88, "%command%");
         String::substr((int)(CowData<char32_t>*)&local_80, (int)local_c0);
         _split_cmdline_args((CowData<char32_t>*)&local_58);
         lVar13 = local_50[0];
         if (local_50[0] == 0) {
            CowData<String>::_unref((CowData<String>*)local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         }
 else {
            lVar12 = 0;
            CowData<String>::_unref((CowData<String>*)&local_70);
            local_70 = lVar13;
            local_50[0] = 0;
            CowData<String>::_unref((CowData<String>*)local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            if (0 < *(long*)( lVar13 + -8 )) {
               do {
                  String::replace((char*)&local_58, (char*)( lVar13 + lVar12 * 8 ));
                  if (*(long*)param_2 == 0) {
                     pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])param_2 = pauVar9;
                     *(undefined4*)pauVar9[1] = 0;
                     *pauVar9 = (undefined1[16])0x0;
                  }

                  pCVar8 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
                  *(undefined1(*) [16])pCVar8 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar8 + 0x10 ) = (undefined1[16])0x0;
                  if (local_58 != (undefined*)0x0) {
                     CowData<char32_t>::_ref(pCVar8, (CowData*)&local_58);
                  }

                  plVar7 = *(long**)param_2;
                  lVar2 = plVar7[1];
                  *(undefined8*)( pCVar8 + 8 ) = 0;
                  *(long**)( pCVar8 + 0x18 ) = plVar7;
                  *(long*)( pCVar8 + 0x10 ) = lVar2;
                  if (lVar2 != 0) {
                     *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar8;
                  }

                  plVar7[1] = (long)pCVar8;
                  if (*plVar7 == 0) {
                     *plVar7 = (long)pCVar8;
                  }

                  *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
                  lVar12 = lVar12 + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               }
 while ( lVar12 < *(long*)( lVar13 + -8 ) );
            }

         }

         CowData<String>::_unref((CowData<String>*)&local_60);
      }

      local_a0 = (CowData<String>*)&local_70;
      CowData<String>::_unref(local_a0);
      LAB_0010209b:CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref(local_c0);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   LAB_001026d0:lVar12 = 0;
   LAB_001024fb:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar11, lVar12, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RunInstancesDialog::_refresh_argument_count() */void RunInstancesDialog::_refresh_argument_count(RunInstancesDialog *this) {
   long *plVar1;
   CowData<RunInstancesDialog::InstanceData> *this_00;
   int iVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   double dVar10;
   undefined8 local_68;
   Dictionary local_60[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Tree::clear();
   Tree::create_item(*(TreeItem**)( this + 0xdf8 ), 0);
   while (true) {
      dVar10 = (double)Range::get_value();
      iVar2 = Array::size();
      if (dVar10 <= (double)iVar2) break;
      Dictionary::Dictionary(local_60);
      Variant::Variant((Variant*)local_58, local_60);
      Array::push_back((Variant*)( this + 0xdb0 ));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_60);
   }
;
   this_00 = (CowData<RunInstancesDialog::InstanceData>*)( this + 0xdc0 );
   dVar10 = (double)Range::get_value();
   lVar8 = (long)dVar10;
   if (lVar8 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_00102b50;
   }

   lVar3 = *(long*)( this + 0xdc0 );
   if (lVar3 == 0) {
      if (lVar8 == 0) goto LAB_00102b50;
      lVar6 = 0;
      CowData<RunInstancesDialog::InstanceData>::_copy_on_write(this_00);
      lVar3 = 0;
   }
 else {
      lVar6 = *(long*)( lVar3 + -8 );
      if (lVar8 == lVar6) goto LAB_00102b50;
      if (lVar8 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar8 = *(long*)( this + 0xdc0 );
            *(undefined8*)( this + 0xdc0 ) = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }
 else {
            *(undefined8*)( this + 0xdc0 ) = 0;
         }

         goto LAB_00102b50;
      }

      CowData<RunInstancesDialog::InstanceData>::_copy_on_write(this_00);
      lVar3 = lVar6 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (lVar8 * 8 != 0) {
      uVar4 = lVar8 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      lVar7 = uVar4 + 1;
      if (lVar7 != 0) {
         if (lVar8 <= lVar6) {
            if (( lVar7 == lVar3 ) || ( iVar2 = CowData<RunInstancesDialog::InstanceData>::_realloc(this_00, lVar7) ),iVar2 == 0) {
               if (*(long*)( this + 0xdc0 ) == 0) {
                  FUN_00104d68();
                  return;
               }

               *(long*)( *(long*)( this + 0xdc0 ) + -8 ) = lVar8;
            }

            goto LAB_00102b50;
         }

         if (lVar7 == lVar3) {
            LAB_00102c61:puVar9 = *(undefined8**)( this + 0xdc0 );
            if (puVar9 == (undefined8*)0x0) {
               _refresh_argument_count();
               return;
            }

            lVar3 = puVar9[-1];
            if (lVar3 < lVar8) goto LAB_00102b34;
         }
 else {
            if (lVar6 != 0) {
               iVar2 = CowData<RunInstancesDialog::InstanceData>::_realloc(this_00, lVar7);
               if (iVar2 != 0) goto LAB_00102b50;
               goto LAB_00102c61;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               goto LAB_00102b50;
            }

            puVar9 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)( this + 0xdc0 ) = puVar9;
            lVar3 = 0;
            LAB_00102b34:memset(puVar9 + lVar3, 0, ( lVar8 - lVar3 ) * 8);
         }

         puVar9[-1] = lVar8;
         goto LAB_00102b50;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   LAB_00102b50:CowData<RunInstancesDialog::InstanceData>::_copy_on_write(this_00);
   lVar8 = *(long*)( this + 0xdc0 );
   lVar3 = lVar8;
   for (lVar6 = 0; ( lVar3 != 0 && ( lVar6 < *(long*)( lVar3 + -8 ) ) ); lVar6 = lVar6 + 1) {
      Array::operator []((int)(Variant*)( this + 0xdb0 ));
      Variant::operator_cast_to_Dictionary((Variant*)local_60);
      _create_instance((InstanceData*)this, (Dictionary*)&local_68, (int)(Variant*)local_60);
      *(undefined8*)( lVar8 + lVar6 * 8 ) = local_68;
      Dictionary::~Dictionary(local_60);
      lVar3 = *(long*)( this + 0xdc0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_instance_menu_id_pressed(int) */void RunInstancesDialog::_instance_menu_id_pressed(RunInstancesDialog *this, int param_1) {
   int iVar1;
   int iVar2;
   Variant *pVVar3;
   long in_FS_OFFSET;
   Dictionary local_60[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      PopupMenu::get_item_metadata((int)(Variant*)local_58);
      iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (-1 < iVar1) {
         iVar2 = Array::size();
         if (iVar1 < iVar2) {
            Dictionary::Dictionary(local_60);
            Variant::Variant((Variant*)local_58, local_60);
            pVVar3 = (Variant*)Array::operator []((int)this + 0xdb0);
            if (pVVar3 == (Variant*)local_58) {
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar3 = 0;
               *(int*)pVVar3 = local_58[0];
               *(undefined8*)( pVVar3 + 8 ) = local_50;
               *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
            }

            Dictionary::~Dictionary(local_60);
         }

      }

   }
 else if (param_1 == 1) {
      Array::clear();
      Range::get_value();
      Array::resize((int)this + 0xdb0);
   }

   Timer::start(_LC0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _refresh_argument_count(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::RunInstancesDialog() */void RunInstancesDialog::RunInstancesDialog(RunInstancesDialog *this) {
   Array *this_00;
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   Timer *pTVar6;
   BoxContainer *this_01;
   GridContainer *this_02;
   CheckBox *this_03;
   String *pSVar7;
   Label *pLVar8;
   SpinBox *this_04;
   CallableCustom *pCVar9;
   LineEdit *pLVar10;
   long *plVar11;
   Tree *this_05;
   PopupMenu *this_06;
   long in_FS_OFFSET;
   double dVar12;
   Array local_d8[8];
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   long local_b8[2];
   char *local_a8;
   undefined8 local_a0;
   int local_98[8];
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   this_00 = (Array*)( this + 0xdb0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AcceptDialog::AcceptDialog((AcceptDialog*)this);
   *(undefined***)this = &PTR__initialize_classv_0010ad30;
   Array::Array(this_00);
   local_58[0] = 0;
   local_58[1] = 0;
   local_a8 = (char*)0x0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)this_00, (StringName*)0x1b, (Variant*)&local_a8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined8*)( this + 0xe00 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 3520 ) ) = (undefined1[16])0;
   }

   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   singleton = this;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Run Instances";
   local_c0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   pTVar6 = (Timer*)operator_new(0x428, "");
   Timer::Timer(pTVar6);
   postinitialize_handler((Object*)pTVar6);
   *(Timer**)( this + 0xdc8 ) = pTVar6;
   Timer::set_wait_time(_LC63);
   Timer::set_one_shot(SUB81(*(undefined8*)( this + 0xdc8 ), 0));
   Node::add_child(this, *(undefined8*)( this + 0xdc8 ), 0, 0);
   plVar11 = *(long**)( this + 0xdc8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_save_main_args");
   StringName::StringName((StringName*)local_b8, "timeout", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   pTVar6 = (Timer*)operator_new(0x428, "");
   Timer::Timer(pTVar6);
   postinitialize_handler((Object*)pTVar6);
   *(Timer**)( this + 0xdd0 ) = pTVar6;
   Timer::set_wait_time(_LC63);
   Timer::set_one_shot(SUB81(*(undefined8*)( this + 0xdd0 ), 0));
   Node::add_child(this, *(undefined8*)( this + 0xdd0 ), 0, 0);
   plVar11 = *(long**)( this + 0xdd0 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_save_arguments");
   StringName::StringName((StringName*)local_b8, "timeout", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   this_01 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_01, true);
   this_01[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_01 = &PTR__initialize_classv_0010a9b8;
   postinitialize_handler((Object*)this_01);
   Node::add_child(this, this_01, 0, 0);
   this_02 = (GridContainer*)operator_new(0xa10, "");
   GridContainer::GridContainer(this_02);
   postinitialize_handler((Object*)this_02);
   GridContainer::set_columns((int)this_02);
   EditorScale::get_scale();
   StringName::StringName((StringName*)&local_a8, "h_separation", false);
   Control::add_theme_constant_override((StringName*)this_02, (int)(String*)&local_a8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(this_01, this_02, 0, 0);
   this_03 = (CheckBox*)operator_new(0xc60, "");
   local_a8 = (char*)0x0;
   CheckBox::CheckBox(this_03, (String*)&local_a8);
   postinitialize_handler((Object*)this_03);
   *(CheckBox**)( this + 0xdf0 ) = this_03;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pSVar7 = *(String**)( this + 0xdf0 );
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Enable Multiple Instances";
   local_c0 = 0;
   local_a0 = 0x19;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Button::set_text(pSVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   uVar2 = *(undefined8*)( this + 0xdf0 );
   pSVar7 = (String*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, false);
   local_a8 = "multiple_instances_enabled";
   local_b8[0] = 0;
   local_a0 = 0x1a;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "debug_options";
   local_c0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c0);
   EditorSettings::get_project_metadata((String*)local_78, pSVar7, (Variant*)&local_c0);
   Variant::operator_cast_to_bool((Variant*)local_78);
   BaseButton::set_pressed(SUB81(uVar2, 0));
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Node::add_child(this_02, *(undefined8*)( this + 0xdf0 ), 0, 0);
   plVar11 = *(long**)( this + 0xdf0 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_start_main_timer");
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x238, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   pLVar8 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar8, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Main Run Args:";
   local_c0 = 0;
   local_a0 = 0xe;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Label::set_text((String*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Node::add_child(this_02, pLVar8, 0, 0);
   pLVar8 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar8, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Main Feature Tags:";
   local_c0 = 0;
   local_a0 = 0x12;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Label::set_text((String*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Node::add_child(this_02, pLVar8, 0, 0);
   pSVar7 = (String*)EditorSettings::get_singleton();
   Array::Array((Array*)&local_c0);
   local_58[0] = 0;
   local_58[1] = 0;
   local_a8 = (char*)0x0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)(StrRange*)&local_c0, (StringName*)0x1b, (Variant*)&local_a8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, (Array*)&local_c0);
   local_c8 = 0;
   local_a8 = "run_instances_config";
   local_a0 = 0x14;
   String::parse_latin1((StrRange*)&local_c8);
   local_a8 = "debug_options";
   local_d0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d0);
   EditorSettings::get_project_metadata((String*)local_98, pSVar7, (Variant*)&local_d0);
   Variant::operator_cast_to_Array((Variant*)&local_a8);
   Array::Array(local_d8);
   local_58[0] = 0;
   local_58[1] = 0;
   local_b8[0] = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)local_d8, (StringName*)0x1b, (Variant*)local_b8);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   cVar4 = Array::is_same_typed(local_d8);
   if (cVar4 == '\0') {
      Array::assign(local_d8);
   }
 else {
      Array::_ref(local_d8);
   }

   Array::~Array((Array*)&local_a8);
   Array::operator =(this_00, local_d8);
   Array::~Array(local_d8);
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array((Array*)&local_c0);
   this_04 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(this_04);
   postinitialize_handler((Object*)this_04);
   *(SpinBox**)( this + 0xde8 ) = this_04;
   Range::set_min(_LC73);
   Range::set_max(_LC74);
   pSVar7 = (String*)EditorSettings::get_singleton();
   iVar5 = Array::size();
   Variant::Variant((Variant*)local_58, iVar5);
   local_a8 = "run_instance_count";
   local_b8[0] = 0;
   local_a0 = 0x12;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "debug_options";
   local_c0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c0);
   EditorSettings::get_project_metadata((String*)local_78, pSVar7, (Variant*)&local_c0);
   dVar12 = Variant::operator_cast_to_double((Variant*)local_78);
   Range::set_value(dVar12);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Node::add_child(this_02, *(undefined8*)( this + 0xde8 ), 0, 0);
   plVar11 = *(long**)( this + 0xde8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_start_instance_timer");
   iVar5 = (int)(StrRange*)local_b8;
   Callable::unbind(iVar5);
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x280, (StrRange*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   plVar11 = *(long**)( this + 0xde8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_refresh_argument_count");
   Callable::unbind(iVar5);
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x280, (StrRange*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   plVar11 = *(long**)( this + 0xdf0 );
   lVar3 = *(long*)( this + 0xde8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar9 + 0x20 ) = &_LC16;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( lVar3 + 0x60 );
   *(undefined***)pCVar9 = &PTR_hash_0010b038;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar2;
   *(long*)( pCVar9 + 0x28 ) = lVar3;
   *(code**)( pCVar9 + 0x38 ) = SpinBox::set_editable;
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "SpinBox::set_editable";
   Callable::Callable((Callable*)&local_a8, pCVar9);
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x248, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   uVar2 = *(undefined8*)( this + 0xde8 );
   BaseButton::is_pressed();
   SpinBox::set_editable(SUB81(uVar2, 0));
   pLVar10 = (LineEdit*)operator_new(0xbb0, "");
   local_a8 = (char*)0x0;
   LineEdit::LineEdit(pLVar10, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar10);
   *(LineEdit**)( this + 0xdd8 ) = pLVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdd8 ), 3);
   uVar2 = *(undefined8*)( this + 0xdd8 );
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Space-separated arguments, example: host player1 blue";
   local_c0 = 0;
   local_a0 = 0x35;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   LineEdit::set_placeholder(uVar2, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Node::add_child(this_02, *(undefined8*)( this + 0xdd8 ), 0, 0);
   _fetch_main_args(this);
   plVar11 = (long*)ProjectSettings::get_singleton();
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_fetch_main_args");
   StringName::StringName((StringName*)local_b8, "settings_changed", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   plVar11 = *(long**)( this + 0xdd8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_start_main_timer");
   Callable::unbind(iVar5);
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x270, (StrRange*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   pLVar10 = (LineEdit*)operator_new(0xbb0, "");
   local_a8 = (char*)0x0;
   LineEdit::LineEdit(pLVar10, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar10);
   *(LineEdit**)( this + 0xde0 ) = pLVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   Control::set_h_size_flags(*(undefined8*)( this + 0xde0 ), 3);
   uVar2 = *(undefined8*)( this + 0xde0 );
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Comma-separated tags, example: demo, steam, event";
   local_c0 = 0;
   local_a0 = 0x31;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   LineEdit::set_placeholder(uVar2, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   uVar2 = *(undefined8*)( this + 0xde0 );
   pSVar7 = (String*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, "");
   local_a8 = "run_main_feature_tags";
   local_b8[0] = 0;
   local_a0 = 0x15;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "debug_options";
   local_c0 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c0);
   EditorSettings::get_project_metadata((String*)local_78, pSVar7, (Variant*)&local_c0);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   LineEdit::set_text(uVar2, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Node::add_child(this_02, *(undefined8*)( this + 0xde0 ), 0, 0);
   plVar11 = *(long**)( this + 0xde0 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_start_main_timer");
   Callable::unbind(iVar5);
   ( *pcVar1 )(plVar11, SceneStringNames::singleton + 0x270, (StrRange*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)&local_a8);
   pLVar8 = (Label*)operator_new(0xad8, "");
   local_a8 = (char*)0x0;
   Label::Label(pLVar8, (String*)&local_a8);
   postinitialize_handler((Object*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = "";
   local_b8[0] = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Instance Configuration";
   local_c0 = 0;
   local_a0 = 0x16;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Label::set_text((String*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Control::set_h_size_flags(pLVar8, 4);
   StringName::StringName((StringName*)&local_a8, "HeaderSmall", false);
   Control::set_theme_type_variation((StringName*)pLVar8);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(this_01, pLVar8, 0, 0);
   this_05 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_05);
   postinitialize_handler((Object*)this_05);
   *(Tree**)( this + 0xdf8 ) = this_05;
   Control::set_v_size_flags(this_05, 3);
   Tree::set_h_scroll_enabled(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
   Tree::set_columns((int)*(undefined8*)( this + 0xdf8 ));
   Tree::set_column_titles_visible(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
   local_a8 = "";
   local_b8[0] = 0;
   uVar2 = *(undefined8*)( this + 0xdf8 );
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Override Main Run Args";
   local_c0 = 0;
   local_a0 = 0x16;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Tree::set_column_title((int)uVar2, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Tree::set_column_expand((int)*(undefined8*)( this + 0xdf8 ), false);
   local_a8 = "";
   local_b8[0] = 0;
   uVar2 = *(undefined8*)( this + 0xdf8 );
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Launch Arguments";
   local_c0 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Tree::set_column_title((int)uVar2, (String*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   local_a8 = "";
   local_b8[0] = 0;
   uVar2 = *(undefined8*)( this + 0xdf8 );
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Override Main Tags";
   local_c0 = 0;
   local_a0 = 0x12;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Tree::set_column_title((int)uVar2, (String*)0x2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Tree::set_column_expand((int)*(undefined8*)( this + 0xdf8 ), true);
   local_a8 = "";
   local_b8[0] = 0;
   uVar2 = *(undefined8*)( this + 0xdf8 );
   local_a0 = 0;
   String::parse_latin1((StrRange*)local_b8);
   local_a8 = "Feature Tags";
   local_c0 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_a8, (String*)&local_c0);
   Tree::set_column_title((int)uVar2, (String*)0x3);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
   Tree::set_allow_rmb_select(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
   this_06 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(this_06);
   postinitialize_handler((Object*)this_06);
   *(PopupMenu**)( this + 0xe00 ) = this_06;
   pcVar1 = *(code**)( *(long*)this_06 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(RunInstancesDialog**)( pCVar9 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar9 + 0x20 ) = &_LC16;
   *(undefined***)pCVar9 = &PTR_hash_0010b0c8;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar2;
   *(code**)( pCVar9 + 0x38 ) = _instance_menu_id_pressed;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "RunInstancesDialog::_instance_menu_id_pressed";
   Callable::Callable((Callable*)&local_a8, pCVar9);
   ( *pcVar1 )(this_06, SceneStringNames::singleton + 0x240, (String*)&local_a8, 0);
   Callable::~Callable((Callable*)&local_a8);
   Node::add_child(*(undefined8*)( this + 0xdf8 ), *(undefined8*)( this + 0xe00 ), 0, 0);
   plVar11 = *(long**)( this + 0xdf8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog,Vector2_const&,MouseButton>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void_Vector2_ptr_MouseButton*)"&RunInstancesDialog::_instance_tree_rmb");
   StringName::StringName((StringName*)local_b8, "item_mouse_selected", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   plVar11 = *(long**)( this + 0xdf8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog,Vector2_const&,MouseButton>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void_Vector2_ptr_MouseButton*)"&RunInstancesDialog::_instance_tree_rmb");
   StringName::StringName((StringName*)local_b8, "empty_clicked", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   Node::add_child(this_01, *(undefined8*)( this + 0xdf8 ), 0, 0);
   _refresh_argument_count(this);
   plVar11 = *(long**)( this + 0xdf8 );
   pcVar1 = *(code**)( *plVar11 + 0x108 );
   create_custom_callable_function_pointer<RunInstancesDialog>((RunInstancesDialog*)&local_a8, (char*)this, (_func_void*)"&RunInstancesDialog::_start_instance_timer");
   StringName::StringName((StringName*)local_b8, "item_edited", false);
   ( *pcVar1 )(plVar11, (StrRange*)local_b8, (String*)&local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Viewport::is_size_2d_override_stretch_enabled() const */undefined8 Viewport::is_size_2d_override_stretch_enabled(void) {
   return 1;
}
/* Viewport::is_sub_viewport() const */undefined8 Viewport::is_sub_viewport(void) {
   return 0;
}
/* Window::_popup_adjust_rect() const */undefined1[16];Window::_popup_adjust_rect(void) {
   return ZEXT816(0);
}
/* AcceptDialog::ok_pressed() */void AcceptDialog::ok_pressed(void) {
   return;
}
/* AcceptDialog::cancel_pressed() */void AcceptDialog::cancel_pressed(void) {
   return;
}
/* AcceptDialog::custom_action(String const&) */void AcceptDialog::custom_action(String *param_1) {
   return;
}
/* RunInstancesDialog::is_class_ptr(void*) const */uint RunInstancesDialog::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x10b2, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* RunInstancesDialog::_property_can_revertv(StringName const&) const */undefined8 RunInstancesDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RunInstancesDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 RunInstancesDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this) {
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void> *this) {
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::get_argument_count(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void,int>::get_argument_count(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SpinBox,void,bool>::get_argument_count(CallableCustomMethodPointer<SpinBox,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void>::get_argument_count(CallableCustomMethodPointer<RunInstancesDialog,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* RunInstancesDialog::_getv(StringName const&, Variant&) const */undefined8 RunInstancesDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RunInstancesDialog::_setv(StringName const&, Variant const&) */undefined8 RunInstancesDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_0010e008 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0010e010 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e018 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CowData<RunInstancesDialog::InstanceData>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RunInstancesDialog::InstanceData>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RunInstancesDialog::_refresh_argument_count() [clone .cold] */void RunInstancesDialog::_refresh_argument_count(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00104d68(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
         LAB_00104dc3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104dc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_00104e2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_00104e2e:return &_get_class_namev();
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&, MouseButton>::get_object()
   const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::get_object(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this) {
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
         goto LAB_00104f5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00104f5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00104f5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<SpinBox,void,bool>::get_object(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
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
         goto LAB_0010505d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010505d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010505d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void>::get_object() const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void>::get_object(CallableCustomMethodPointer<RunInstancesDialog,void> *this) {
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
         goto LAB_0010515d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010515d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010515d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<RunInstancesDialog,void,int>::get_object(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this) {
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
         goto LAB_0010525d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010525d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010525d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* RunInstancesDialog::_validate_propertyv(PropertyInfo&) const */void RunInstancesDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_0010e020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010e028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010e030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001054a8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10b2, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* RunInstancesDialog::_notificationv(int, bool) */void RunInstancesDialog::_notificationv(RunInstancesDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e040 != Window::_notification) {
         AcceptDialog::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Window::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010e040 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* RunInstancesDialog::_get_class_namev() const */undefined8 *RunInstancesDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105673:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105673;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RunInstancesDialog");
         goto LAB_001056de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RunInstancesDialog");
   LAB_001056de:return &_get_class_namev();
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e048 != Container::_notification) {
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

   if ((code*)PTR__notification_0010e048 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Array::~Array;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105890;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105890:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Array::~Array;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001058f0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001058f0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* RunInstancesDialog::~RunInstancesDialog() */void RunInstancesDialog::~RunInstancesDialog(RunInstancesDialog *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010ad30;
   if (*(long*)( this + 0xdc0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xdc0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xdc0 );
         *(undefined8*)( this + 0xdc0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Array::~Array((Array*)( this + 0xdb0 ));
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* RunInstancesDialog::~RunInstancesDialog() */void RunInstancesDialog::~RunInstancesDialog(RunInstancesDialog *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010ad30;
   if (*(long*)( this + 0xdc0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xdc0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xdc0 );
         *(undefined8*)( this + 0xdc0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Array::~Array((Array*)( this + 0xdb0 ));
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xe08);
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
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::get_class() const */void RunInstancesDialog::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

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
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00105ccf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00105ccf:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00105d83;
   }

   cVar6 = String::operator ==((String*)param_1, "Node");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00105e33;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00105e33:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00105d83;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105d83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00105f6f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00105f6f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00106023;
   }

   cVar6 = String::operator ==((String*)param_1, "Window");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_001060e3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_001060e3:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00106023;
      }

      cVar6 = String::operator ==((String*)param_1, "Viewport");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Node::is_class((Node*)this, param_1);
            return uVar7;
         }

         goto LAB_0010618c;
      }

   }

   LAB_00106023:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010618c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RunInstancesDialog::is_class(String const&) const */undefined8 RunInstancesDialog::is_class(RunInstancesDialog *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010620f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010620f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001062c3;
   }

   cVar6 = String::operator ==((String*)param_1, "RunInstancesDialog");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00106383;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00106383:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_001062c3;
      }

      cVar6 = String::operator ==((String*)param_1, "AcceptDialog");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Window::is_class((Window*)this, param_1);
            return uVar7;
         }

         goto LAB_0010642c;
      }

   }

   LAB_001062c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010642c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Callable create_custom_callable_function_pointer<RunInstancesDialog>(RunInstancesDialog*, char
   const*, void (RunInstancesDialog::*)()) */RunInstancesDialog *create_custom_callable_function_pointer<RunInstancesDialog>(RunInstancesDialog *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010afa8;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable create_custom_callable_function_pointer<RunInstancesDialog, Vector2 const&,
   MouseButton>(RunInstancesDialog*, char const*, void (RunInstancesDialog::*)(Vector2 const&,
   MouseButton)) */RunInstancesDialog *create_custom_callable_function_pointer<RunInstancesDialog,Vector2_const&,MouseButton>(RunInstancesDialog *param_1, char *param_2, _func_void_Vector2_ptr_MouseButton *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010b158;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_Vector2_ptr_MouseButton**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
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
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010e050 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0010e058 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00106dc4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00106dc4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RunInstancesDialog,void>::call(CallableCustomMethodPointer<RunInstancesDialog,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010700f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010700f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00106fe8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_001070d1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010700f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001070d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::call(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   ulong uVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar5 << 8 );
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
            if ((uint)param_2 < 3) {
               if (param_2 == 2) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
                  uVar3 = _LC39;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  uVar5 = Variant::operator_cast_to_long(param_1[1]);
                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
                  uVar3 = _LC40;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  local_38 = Variant::operator_cast_to_Vector2(*param_1);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), &local_38, uVar5 & 0xffffffff);
               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 2;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
            }

            goto LAB_001071a5;
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
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_001071a5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<RunInstancesDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RunInstancesDialog,void,int>::call(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00107538;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_00107538;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC41;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001074e7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_001075fa;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00107538:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001075fa:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SpinBox, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SpinBox,void,bool>::call(CallableCustomMethodPointer<SpinBox,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001077b9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001077b9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar4 = _LC42;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00107768. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_0010787b;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001077b9:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010787b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001078ef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001078ef:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001079a3;
   }

   cVar6 = String::operator ==((String*)param_1, "Control");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00107a5f;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00107a5f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_001079a3;
      }

      cVar6 = String::operator ==((String*)param_1, "CanvasItem");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Node::is_class((Node*)this, param_1);
            return uVar7;
         }

         goto LAB_00107ad1;
      }

   }

   LAB_001079a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00107ad1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00107b4f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00107b4f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00107c03;
   }

   cVar6 = String::operator ==((String*)param_1, "BoxContainer");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00107cc3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00107cc3:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00107c03;
      }

      cVar6 = String::operator ==((String*)param_1, "Container");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Control::is_class((Control*)this, param_1);
            return uVar7;
         }

         goto LAB_00107d6c;
      }

   }

   LAB_00107c03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00107d6c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00107def;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00107def:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00107ea3;
   }

   cVar5 = String::operator ==((String*)param_1, "VBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00107ea3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_initialize_classv() */void RunInstancesDialog::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AcceptDialog::initialize_class() == '\0') {
         if (Window::initialize_class() == '\0') {
            if (Viewport::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Object");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Node");
                  StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Viewport";
               local_70 = 0;
               local_50 = 8;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Viewport";
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Window";
            local_70 = 0;
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Window::_bind_methods();
            Window::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Window";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AcceptDialog";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0010e068 != Window::_bind_methods) {
            AcceptDialog::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0010e070 != Object::_bind_compatibility_methods) {
            AcceptDialog::_bind_compatibility_methods();
         }

         AcceptDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "RunInstancesDialog";
      local_70 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
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
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC10;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC10;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001085cd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001085cd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x001085ef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x001085ef:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)pLVar5;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Viewport::_get_property_listv(Viewport *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Viewport";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Viewport";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00108921;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00108921:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Viewport", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
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
/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Window::_get_property_listv(Window *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Viewport::_get_property_listv((Viewport*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Window";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Window";
   local_98 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00108bd1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00108bd1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Window", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010e078 != Object::_get_property_list) {
      Window::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Viewport::_get_property_listv((Viewport*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AcceptDialog::_get_property_listv(AcceptDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Window::_get_property_listv((Window*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AcceptDialog";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AcceptDialog";
   local_98 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00108ea1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00108ea1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AcceptDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::_get_property_listv((Window*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RunInstancesDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RunInstancesDialog::_get_property_listv(RunInstancesDialog *this, List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "RunInstancesDialog";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RunInstancesDialog";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00109151;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109151:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RunInstancesDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00109401;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109401:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_0010e080 != Object::_get_property_list) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_001096d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001096d1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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

   if ((code*)PTR__get_property_list_0010e088 != CanvasItem::_get_property_list) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_001099a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001099a1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00109c51;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109c51:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
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

         goto LAB_00109f01;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109f01:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
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
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
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
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010a470:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_0010a470;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_0010a4c6;
   }

   if (lVar9 == lVar5) {
      LAB_0010a3eb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010a4c6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010a35f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0010a3eb;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010a35f:puVar7[-1] = param_1;
   return 0;
}
/* CowData<RunInstancesDialog::InstanceData>::_realloc(long) */undefined8 CowData<RunInstancesDialog::InstanceData>::_realloc(CowData<RunInstancesDialog::InstanceData> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* RunInstancesDialog::_fetch_main_args() */void RunInstancesDialog::_GLOBAL__sub_I__fetch_main_args(void) {
   if (PopupMenu::base_property_helper != '\0') {
      return;
   }

   PopupMenu::base_property_helper = 1;
   PopupMenu::base_property_helper._56_8_ = 2;
   PopupMenu::base_property_helper._64_8_ = 0;
   PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
   PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
   PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RunInstancesDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SpinBox, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SpinBox,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SpinBox,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RunInstancesDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RunInstancesDialog, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RunInstancesDialog,void,Vector2_const&,MouseButton> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RunInstancesDialog::~RunInstancesDialog() */void RunInstancesDialog::~RunInstancesDialog(RunInstancesDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

