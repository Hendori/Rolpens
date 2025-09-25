/* Polygon2DEditor::_get_node() const */undefined8 Polygon2DEditor::_get_node(Polygon2DEditor *this) {
   return *(undefined8*)( this + 0xaa8 );
}
/* Polygon2DEditor::_bone_paint_selected(int) */void Polygon2DEditor::_bone_paint_selected(int param_1) {
   CanvasItem::queue_redraw();
   return;
}
/* Polygon2DEditor::_get_offset(int) const */void Polygon2DEditor::_get_offset(int param_1) {
   Polygon2D::get_offset();
   return;
}
/* Polygon2DEditor::_get_polygon_count() const */bool Polygon2DEditor::_get_polygon_count(void) {
   int iVar1;
   iVar1 = Polygon2D::get_internal_vertex_count();
   return iVar1 < 1;
}
/* Polygon2DEditor::_commit_action() */void Polygon2DEditor::_commit_action(void) {
   Object *pOVar1;
   long in_FS_OFFSET;
   long local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar1 = (Object*)EditorUndoRedoManager::get_singleton();
   StringName::StringName((StringName*)&local_50, "update_viewport", false);
   local_48 = 0;
   local_40 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar1, CanvasItemEditor::singleton, (Variant**)&local_50, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_50, "update_viewport", false);
   local_48 = 0;
   local_40 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar1, CanvasItemEditor::singleton, (Variant**)&local_50, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar1, 0));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_action(int) */void Polygon2DEditor::_set_action(Polygon2DEditor *this, int param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0xc88 );
   if (( lVar3 != 0 ) && ( *(long*)( lVar3 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0xc88 );
         *(undefined8*)( this + 0xc88 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
 else {
         *(undefined8*)( this + 0xc88 ) = 0;
      }

   }

   *(int*)( this + 0xaf0 ) = param_1;
   lVar3 = 0;
   *(undefined2*)( this + 0xc7c ) = 0;
   do {
      lVar2 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + lVar2 + 0xaf8 ), 0));
   }
 while ( lVar3 != 0xb );
   CanvasItem::queue_redraw();
   return;
}
/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */void CowData<Color>::_ref(CowData<Color> *this, CowData *param_1) {
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
/* Polygon2DEditor::snap_point(Vector2) const */void Polygon2DEditor::snap_point(undefined8 param_1, Polygon2DEditor *this) {
   float fVar1;
   if (this[0xca8] == (Polygon2DEditor)0x0) {
      return;
   }

   fVar1 = *(float*)( this + 0xbb0 );
   if (*(float*)( this + 0xcb4 ) * fVar1 != 0.0) {
      Math::snapped((double)( (float)param_1 - ( *(float*)( this + 0xcac ) - *(float*)( this + 0xba8 ) ) * fVar1 ), (double)( *(float*)( this + 0xcb4 ) * fVar1 ));
      fVar1 = *(float*)( this + 0xbb0 );
   }

   if (*(float*)( this + 0xcb8 ) * fVar1 != 0.0) {
      Math::snapped((double)( (float)( (ulong)param_1 >> 0x20 ) - ( *(float*)( this + 0xcb0 ) - *(float*)( this + 0xbac ) ) * fVar1 ), (double)( *(float*)( this + 0xcb8 ) * fVar1 ));
      return;
   }

   return;
}
/* Polygon2DEditor::_center_view_on_draw(bool) [clone .part.0] */void Polygon2DEditor::_center_view_on_draw(bool param_1) {
   long *plVar1;
   code *pcVar2;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   long local_60;
   Polygon2DEditor local_58[16];
   Callable local_48[24];
   long local_30;
   plVar1 = *(long**)( (char*)CONCAT71(in_register_00000039, param_1) + 0x240 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar1 == (long*)0x0) {
      _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>(local_58, (char*)CONCAT71(in_register_00000039, param_1), (_func_void_bool*)"&Polygon2DEditor::_center_view_on_draw");
   Callable::bind<bool>(SUB81(local_48, 0));
   StringName::StringName((StringName*)&local_60, "process_frame", false);
   ( *pcVar2 )(plVar1, (StringName*)&local_60, local_48, 4);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_48);
   Callable::~Callable((Callable*)local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_center_view_on_draw(bool) */void Polygon2DEditor::_center_view_on_draw(Polygon2DEditor *this, bool param_1) {
   if (( this[0xb98] != (Polygon2DEditor)param_1 ) && ( this[0xb98] = param_1 )) {
      _center_view_on_draw(SUB81(this, 0));
      return;
   }

   return;
}
/* Polygon2DEditor::_update_polygon_editing_state() */void Polygon2DEditor::_update_polygon_editing_state(Polygon2DEditor *this) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x370 ) == _get_node) {
      lVar2 = *(long*)( this + 0xaa8 );
   }
 else {
      lVar2 = ( **(code**)( *(long*)this + 0x370 ) )();
   }

   if (lVar2 != 0) {
      iVar1 = Polygon2D::get_internal_vertex_count();
      if (iVar1 < 1) {
         local_48 = (char*)0x0;
         AbstractPolygon2DEditor::disable_polygon_editing(SUB81(this, 0), (String_conflict*)0x0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      }
 else {
         local_58 = 0;
         local_48 = "";
         local_40 = 0;
         String::parse_latin1((StrRange*)&local_58);
         local_48 = "Polygon 2D has internal vertices, so it can no longer be edited in the viewport.";
         local_50 = 0;
         local_40 = 0x50;
         String::parse_latin1((StrRange*)&local_50);
         TTR((String_conflict*)&local_48, (String_conflict*)&local_50);
         AbstractPolygon2DEditor::disable_polygon_editing(SUB81(this, 0), (String_conflict*)0x1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_use_snap(bool) */void Polygon2DEditor::_set_use_snap(Polygon2DEditor *this, bool param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xca8] = (Polygon2DEditor)param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_48, param_1);
   local_58 = "snap_enabled";
   local_60 = 0;
   local_50 = 0xc;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "polygon_2d_uv_editor";
   local_68 = 0;
   local_50 = 0x14;
   String::parse_latin1((StrRange*)&local_68);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_68, (Variant*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_show_grid(bool) */void Polygon2DEditor::_set_show_grid(Polygon2DEditor *this, bool param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xca9] = (Polygon2DEditor)param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, param_1);
   local_68 = "show_grid";
   local_70 = 0;
   local_60 = 9;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "polygon_2d_uv_editor";
   local_78 = 0;
   local_60 = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::queue_redraw();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_snap_off_x(float) */void Polygon2DEditor::_set_snap_off_x(Polygon2DEditor *this, float param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0xcac ) = param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, this + 0xcac);
   local_68 = "snap_offset";
   local_70 = 0;
   local_60 = 0xb;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "polygon_2d_uv_editor";
   local_78 = 0;
   local_60 = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::queue_redraw();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_snap_off_y(float) */void Polygon2DEditor::_set_snap_off_y(Polygon2DEditor *this, float param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0xcb0 ) = param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, this + 0xcac);
   local_68 = "snap_offset";
   local_70 = 0;
   local_60 = 0xb;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "polygon_2d_uv_editor";
   local_78 = 0;
   local_60 = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::queue_redraw();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_snap_step_x(float) */void Polygon2DEditor::_set_snap_step_x(Polygon2DEditor *this, float param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0xcb4 ) = param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, this + 0xcb4);
   local_68 = "snap_step";
   local_70 = 0;
   local_60 = 9;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "polygon_2d_uv_editor";
   local_78 = 0;
   local_60 = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::queue_redraw();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_set_snap_step_y(float) */void Polygon2DEditor::_set_snap_step_y(Polygon2DEditor *this, float param_1) {
   String_conflict *pSVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0xcb8 ) = param_1;
   pSVar1 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, this + 0xcb4);
   local_68 = "snap_step";
   local_70 = 0;
   local_60 = 9;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "polygon_2d_uv_editor";
   local_78 = 0;
   local_60 = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   EditorSettings::set_project_metadata(pSVar1, (String_conflict*)&local_78, (Variant*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::queue_redraw();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Polygon2DEditor::Polygon2DEditor() */void Polygon2DEditor::Polygon2DEditor(Polygon2DEditor *this) {
   long lVar1;
   code *pcVar2;
   Vector2 *pVVar3;
   StringName *pSVar4;
   undefined8 uVar5;
   Polygon2DEditor PVar6;
   char cVar7;
   String_conflict *pSVar8;
   BoxContainer *pBVar9;
   Button *pBVar10;
   VSeparator *pVVar11;
   Object *pOVar12;
   Label *this_00;
   SpinBox *pSVar13;
   SplitContainer *this_01;
   Panel *this_02;
   Polygon2D *this_03;
   Control *pCVar14;
   MenuButton *this_04;
   long *plVar15;
   AcceptDialog *pAVar16;
   EditorZoomWidget *this_05;
   ScrollContainer *this_06;
   ViewPanner *this_07;
   CallableCustom *pCVar17;
   undefined4 uVar18;
   long lVar19;
   int iVar20;
   bool bVar21;
   int iVar22;
   Object *pOVar23;
   long in_FS_OFFSET;
   float fVar24;
   undefined8 uVar25;
   Object *local_160;
   String_conflict local_158[8];
   String_conflict local_150[8];
   String_conflict local_148[8];
   String_conflict local_140[8];
   String_conflict local_138[8];
   String_conflict local_130[8];
   String_conflict local_128[8];
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   String_conflict local_108[8];
   String_conflict local_100[8];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   Object *local_d0;
   undefined8 local_c8;
   long local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8[2];
   long local_98[3];
   undefined8 local_80;
   int local_78[8];
   ulong local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AbstractPolygon2DEditor::AbstractPolygon2DEditor((AbstractPolygon2DEditor*)this, true);
   *(undefined4*)( this + 0xac8 ) = 4;
   *(undefined***)this = &PTR__initialize_classv_001203d0;
   this[0xb98] = (Polygon2DEditor)0x0;
   *(undefined4*)( this + 0xaf0 ) = 0;
   *(undefined8*)( this + 0xb90 ) = 0;
   *(undefined8*)( this + 0xba0 ) = 0;
   *(undefined8*)( this + 0xba8 ) = 0;
   *(undefined4*)( this + 0xbb0 ) = 0x3f800000;
   *(undefined8*)( this + 0xbe8 ) = 0;
   this[0xbf0] = (Polygon2DEditor)0x0;
   *(undefined4*)( this + 0xbf4 ) = 0;
   *(undefined8*)( this + 0xc00 ) = 0;
   *(undefined8*)( this + 0xc08 ) = 0;
   *(undefined8*)( this + 0xc10 ) = 0;
   *(undefined8*)( this + 0xc20 ) = 0;
   *(undefined8*)( this + 0xc30 ) = 0;
   *(undefined8*)( this + 0xc40 ) = 0;
   *(undefined8*)( this + 0xc50 ) = 0;
   *(undefined4*)( this + 0xc58 ) = 0;
   *(undefined1(*) [16])( this + 0xaa8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xab8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb50 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb70 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 3000 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xbc8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xbd8 ) = (undefined1[16])0x0;
   Array::Array((Array*)( this + 0xc60 ));
   Array::Array((Array*)( this + 0xc68 ));
   *(undefined8*)( this + 0xc70 ) = 0;
   *(undefined2*)( this + 0xca8 ) = 0;
   *(undefined4*)( this + 0xc78 ) = 0xffffffff;
   *(undefined2*)( this + 0xc7c ) = 0;
   *(undefined8*)( this + 0xc88 ) = 0;
   *(undefined4*)( this + 0xc90 ) = 0;
   *(undefined8*)( this + 0xc94 ) = 0;
   *(undefined8*)( this + 0xca0 ) = 0;
   *(undefined8*)( this + 0xcac ) = 0;
   *(undefined8*)( this + 0xcb4 ) = 0;
   pSVar8 = (String_conflict*)EditorSettings::get_singleton();
   local_80 = 0;
   Variant::Variant((Variant*)local_58, (Vector2*)&local_80);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "snap_offset");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "polygon_2d_uv_editor");
   EditorSettings::get_project_metadata((String_conflict*)local_78, pSVar8, (Variant*)local_a8);
   uVar25 = Variant::operator_cast_to_Vector2((Variant*)local_78);
   *(undefined8*)( this + 0xcac ) = uVar25;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar8 = (String_conflict*)EditorSettings::get_singleton();
   local_80 = __LC219;
   Variant::Variant((Variant*)local_58, (Vector2*)&local_80);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "snap_step");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "polygon_2d_uv_editor");
   EditorSettings::get_project_metadata((String_conflict*)local_78, pSVar8, (Variant*)local_a8);
   uVar25 = Variant::operator_cast_to_Vector2((Variant*)local_78);
   *(undefined8*)( this + 0xcb4 ) = uVar25;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar8 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, false);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "snap_enabled");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "polygon_2d_uv_editor");
   EditorSettings::get_project_metadata((String_conflict*)local_78, pSVar8, (Variant*)local_a8);
   PVar6 = (Polygon2DEditor)Variant::operator_cast_to_bool((Variant*)local_78);
   this[0xca8] = PVar6;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar8 = (String_conflict*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_58, false);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "show_grid");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "polygon_2d_uv_editor");
   EditorSettings::get_project_metadata((String_conflict*)local_78, pSVar8, (Variant*)local_a8);
   PVar6 = (Polygon2DEditor)Variant::operator_cast_to_bool((Variant*)local_78);
   this[0xca9] = PVar6;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)( this + 0xaf0 ) = 3;
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_0011efe8;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 0xac0 ) = pBVar9;
   lVar19 = 0;
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_0011ec70;
   postinitialize_handler((Object*)pBVar9);
   local_160 = (Object*)0x0;
   Ref<ButtonGroup>::instantiate<>((Ref<ButtonGroup>*)&local_160);
   do {
      pBVar10 = (Button*)operator_new(0xc10, "");
      local_98[0] = 0;
      Button::Button(pBVar10, (String_conflict*)local_98);
      postinitialize_handler((Object*)pBVar10);
      *(Button**)( this + lVar19 * 8 + 0xad0 ) = pBVar10;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
      Node::add_child(pBVar9, *(undefined8*)( this + lVar19 * 8 + 0xad0 ), 0, 0);
      BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + lVar19 * 8 + 0xad0 ), 0));
      BaseButton::set_button_group(*(Ref**)( this + lVar19 * 8 + 0xad0 ));
      plVar15 = *(long**)( this + lVar19 * 8 + 0xad0 );
      pcVar2 = *(code**)( *plVar15 + 0x108 );
      create_custom_callable_function_pointer<Polygon2DEditor,int>((Polygon2DEditor*)local_98, (char*)this, (_func_void_int*)"&Polygon2DEditor::_select_mode");
      iVar22 = (int)(String_conflict*)local_a8;
      Callable::bind<int>(iVar22);
      lVar19 = lVar19 + 1;
      ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x238, (String_conflict*)local_a8);
      Callable::~Callable((Callable*)local_a8);
      Callable::~Callable((Callable*)local_98);
   }
 while ( lVar19 != 4 );
   pSVar8 = *(String_conflict**)( this + 0xad0 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Points");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xad8 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Polygons");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xae0 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "UV");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xae8 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Bones");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pVVar11 = (VSeparator*)operator_new(0x9e0, "");
   VSeparator::VSeparator(pVVar11);
   postinitialize_handler((Object*)pVVar11);
   lVar19 = 0;
   Node::add_child(pBVar9, pVVar11, 0, 0);
   Node::add_child(*(undefined8*)( this + 0xac0 ), pBVar9, 0, 0);
   do {
      pBVar10 = (Button*)operator_new(0xc10, "");
      local_98[0] = 0;
      Button::Button(pBVar10, (String_conflict*)local_98);
      postinitialize_handler((Object*)pBVar10);
      *(Button**)( this + lVar19 * 8 + 0xaf8 ) = pBVar10;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
      Control::set_theme_type_variation(*(StringName**)( this + lVar19 * 8 + 0xaf8 ));
      BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + lVar19 * 8 + 0xaf8 ), 0));
      Node::add_child(pBVar9, *(undefined8*)( this + lVar19 * 8 + 0xaf8 ), 0, 0);
      plVar15 = *(long**)( this + lVar19 * 8 + 0xaf8 );
      pcVar2 = *(code**)( *plVar15 + 0x108 );
      create_custom_callable_function_pointer<Polygon2DEditor,int>((Polygon2DEditor*)local_98, (char*)this, (_func_void_int*)"&Polygon2DEditor::_set_action");
      Callable::bind<int>(iVar22);
      ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x238, (String_conflict*)local_a8);
      Callable::~Callable((Callable*)local_a8);
      Callable::~Callable((Callable*)local_98);
      lVar1 = lVar19 * 8;
      lVar19 = lVar19 + 1;
      Control::set_focus_mode(*(undefined8*)( this + lVar1 + 0xaf8 ), 0);
   }
 while ( lVar19 != 0xb );
   pSVar8 = *(String_conflict**)( this + 0xaf8 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Create Polygon");
   uVar25 = 0x400017;
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb00 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Create Internal Vertex");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb08 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Remove Internal Vertex");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = (String_conflict*)OS::get_singleton();
   local_b8[0] = 0;
   String::parse_latin1((String_conflict*)local_b8, "macos");
   cVar7 = OS::has_feature(pSVar8);
   if (cVar7 == '\0') {
      pSVar8 = (String_conflict*)OS::get_singleton();
      local_a8[0] = 0;
      String::parse_latin1((String_conflict*)local_a8, "web_macos");
      cVar7 = OS::has_feature(pSVar8);
      if (cVar7 == '\0') {
         pSVar8 = (String_conflict*)OS::get_singleton();
         local_98[0] = 0;
         String::parse_latin1((String_conflict*)local_98, "web_ios");
         cVar7 = OS::has_feature(pSVar8);
         if (cVar7 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
            goto LAB_00103dc6;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
         uVar25 = 0x400016;
      }
 else {
         LAB_00103dc6:uVar25 = 0x400017;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   pSVar8 = *(String_conflict**)( this + 0xb10 );
   find_keycode_name(uVar25);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "%s + Shift: Scale");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   vformat<char_const*>((String_conflict*)&local_c0, (char*)local_b8);
   local_c8 = 0;
   String::parse_latin1((String_conflict*)&local_c8, "\n");
   local_d0 = (Object*)0x0;
   String::parse_latin1((String_conflict*)&local_d0, "");
   local_d8 = 0;
   String::parse_latin1((String_conflict*)&local_d8, "Shift: Move All");
   TTR((String_conflict*)&local_e0, (String_conflict*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String_conflict*)&local_e8, "\n");
   find_keycode_name(uVar25);
   local_f0 = 0;
   String::parse_latin1((String_conflict*)&local_f0, "");
   local_f8 = 0;
   String::parse_latin1((String_conflict*)&local_f8, "%s: Rotate");
   TTR(local_100, (String_conflict*)&local_f8);
   vformat<char_const*>(local_108, (char*)local_100);
   local_110 = 0;
   String::parse_latin1((String_conflict*)&local_110, "\n");
   local_118 = 0;
   String::parse_latin1((String_conflict*)&local_118, "");
   local_120 = 0;
   String::parse_latin1((String_conflict*)&local_120, "Move Points");
   TTR(local_128, (String_conflict*)&local_120);
   String::operator +(local_130, local_128);
   String::operator +(local_138, local_130);
   String::operator +(local_140, local_138);
   String::operator +(local_148, local_140);
   String::operator +(local_150, local_148);
   String::operator +(local_158, local_150);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb18 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Move Polygon");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb20 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Rotate Polygon");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb28 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Scale Polygon");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb30 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Create a custom polygon. Enables custom polygon rendering.");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb38 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Remove a custom polygon. If none remain, custom polygon rendering is disabled.");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb40 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Paint weights with specified intensity.");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = *(String_conflict**)( this + 0xb48 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Unpaint weights with specified intensity.");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pOVar12 = (Object*)operator_new(0xa80, "");
   Slider::Slider((Slider*)pOVar12, 0);
   *(undefined***)pOVar12 = &PTR__initialize_classv_0011fce8;
   Control::set_v_size_flags(pOVar12, 0);
   postinitialize_handler(pOVar12);
   *(Object**)( this + 0xbd8 ) = pOVar12;
   Node::add_child(pBVar9, pOVar12, 0, 0);
   pVVar3 = *(Vector2**)( this + 0xbd8 );
   fVar24 = (float)EditorScale::get_scale();
   local_58[0] = ( ulong )(uint)(fVar24 * __LC64);
   Control::set_custom_minimum_size(pVVar3);
   Control::set_v_size_flags(*(undefined8*)( this + 0xbd8 ), 4);
   Range::set_min(0.0);
   Range::set_max(_LC66);
   Range::set_step(_LC67);
   Range::set_value(_LC68);
   this_00 = (Label*)operator_new(0xad8, "");
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Radius:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Label::Label(this_00, (String_conflict*)local_b8);
   postinitialize_handler((Object*)this_00);
   *(Label**)( this + 0xbe8 ) = this_00;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xbe8 ), 0, 0);
   pSVar13 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar13);
   postinitialize_handler((Object*)pSVar13);
   *(SpinBox**)( this + 0xbe0 ) = pSVar13;
   Node::add_child(pBVar9, pSVar13, 0, 0);
   Range::set_min(_LC66);
   Range::set_max(_LC70);
   Range::set_step(_LC66);
   Range::set_value(_LC71);
   this_01 = (SplitContainer*)operator_new(0xa70, "");
   SplitContainer::SplitContainer(this_01, false);
   this_01[0xa68] = (SplitContainer)0x1;
   *(undefined***)this_01 = &PTR__initialize_classv_00120058;
   postinitialize_handler((Object*)this_01);
   Node::add_child(*(undefined8*)( this + 0xac0 ), this_01, 0, 0);
   Control::set_v_size_flags(this_01, 3);
   this_02 = (Panel*)operator_new(0x9d0, "");
   Panel::Panel(this_02);
   postinitialize_handler((Object*)this_02);
   *(Panel**)( this + 0xb70 ) = this_02;
   Node::add_child(this_01, this_02, 0, 0);
   Control::set_h_size_flags(*(undefined8*)( this + 0xb70 ), 3);
   pVVar3 = *(Vector2**)( this + 0xb70 );
   fVar24 = (float)EditorScale::get_scale();
   local_58[0] = CONCAT44(fVar24 * __LC72, fVar24 * __LC72);
   Control::set_custom_minimum_size(pVVar3);
   Control::set_clip_contents(SUB81(*(undefined8*)( this + 0xb70 ), 0));
   this_03 = (Polygon2D*)operator_new(0x640, "");
   Polygon2D::Polygon2D(this_03);
   postinitialize_handler((Object*)this_03);
   *(Polygon2D**)( this + 0xb78 ) = this_03;
   Node::add_child(*(undefined8*)( this + 0xb70 ), this_03, 0, 0);
   pCVar14 = (Control*)operator_new(0x9c8, "");
   Control::Control(pCVar14);
   postinitialize_handler((Object*)pCVar14);
   *(Control**)( this + 0xb68 ) = pCVar14;
   Node::add_child(*(undefined8*)( this + 0xb70 ), pCVar14, 0, 0);
   Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xb68 ), 0xf, 0);
   pCVar14 = (Control*)operator_new(0x9c8, "");
   Control::Control(pCVar14);
   postinitialize_handler((Object*)pCVar14);
   Node::add_child(pBVar9, pCVar14, 0, 0);
   Control::set_h_size_flags(pCVar14, 3);
   this_04 = (MenuButton*)operator_new(0xc68, "");
   local_98[0] = 0;
   MenuButton::MenuButton(this_04, (String_conflict*)local_98);
   postinitialize_handler((Object*)this_04);
   *(MenuButton**)( this + 0xb60 ) = this_04;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Node::add_child(pBVar9, *(undefined8*)( this + 0xb60 ), 0, 0);
   Button::set_flat(SUB81(*(undefined8*)( this + 0xb60 ), 0));
   pSVar4 = *(StringName**)( this + 0xb60 );
   StringName::StringName((StringName*)local_98, "FlatMenuButton", false);
   Control::set_theme_type_variation(pSVar4);
   if (( StringName::configured != '\0' ) && ( local_98[0] != 0 )) {
      StringName::unref();
   }

   pSVar8 = *(String_conflict**)( this + 0xb60 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Edit");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   uVar25 = MenuButton::get_popup();
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Copy Polygon to UV");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   PopupMenu::add_item(uVar25, (String_conflict*)local_b8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   uVar25 = MenuButton::get_popup();
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Copy UV to Polygon");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   PopupMenu::add_item(uVar25, (String_conflict*)local_b8, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = (String_conflict*)MenuButton::get_popup();
   local_98[0] = 0;
   iVar20 = (int)(String_conflict*)local_98;
   PopupMenu::add_separator(pSVar8, iVar20);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   uVar25 = MenuButton::get_popup();
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Clear UV");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   PopupMenu::add_item(uVar25, (String_conflict*)local_b8, 2, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar8 = (String_conflict*)MenuButton::get_popup();
   local_98[0] = 0;
   PopupMenu::add_separator(pSVar8, iVar20);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   uVar25 = MenuButton::get_popup();
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid Settings");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   PopupMenu::add_item(uVar25, (String_conflict*)local_b8, 3, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   plVar15 = (long*)MenuButton::get_popup();
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,int>((Polygon2DEditor*)local_98, (char*)this, (_func_void_int*)"&Polygon2DEditor::_edit_menu_option");
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x240, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   pVVar11 = (VSeparator*)operator_new(0x9e0, "");
   VSeparator::VSeparator(pVVar11);
   postinitialize_handler((Object*)pVVar11);
   Node::add_child(pBVar9, pVVar11, 0, 0);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_98[0] = 0;
   Button::Button(pBVar10, (String_conflict*)local_98);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xb50 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xb50 ));
   Node::add_child(pBVar9, *(undefined8*)( this + 0xb50 ), 0, 0);
   pSVar8 = *(String_conflict**)( this + 0xb50 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Snap");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Control::set_focus_mode(*(undefined8*)( this + 0xb50 ), 0);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xb50 ), 0));
   BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xb50 ), 0));
   pSVar8 = *(String_conflict**)( this + 0xb50 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Enable Snap");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   plVar15 = *(long**)( this + 0xb50 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>((Polygon2DEditor*)local_98, (char*)this, (_func_void_bool*)"&Polygon2DEditor::_set_use_snap");
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x248, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_98[0] = 0;
   Button::Button(pBVar10, (String_conflict*)local_98);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xb58 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Control::set_theme_type_variation(*(StringName**)( this + 0xb58 ));
   Node::add_child(pBVar9, *(undefined8*)( this + 0xb58 ), 0, 0);
   pSVar8 = *(String_conflict**)( this + 0xb58 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::set_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Control::set_focus_mode(*(undefined8*)( this + 0xb58 ), 0);
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xb58 ), 0));
   BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xb58 ), 0));
   pSVar8 = *(String_conflict**)( this + 0xb58 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Show Grid");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Control::set_tooltip_text(pSVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   plVar15 = *(long**)( this + 0xb58 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>((Polygon2DEditor*)local_98, (char*)this, (_func_void_bool*)"&Polygon2DEditor::_set_show_grid");
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x248, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   pAVar16 = (AcceptDialog*)operator_new(0xdb0, "");
   AcceptDialog::AcceptDialog(pAVar16);
   postinitialize_handler((Object*)pAVar16);
   *(AcceptDialog**)( this + 0xc10 ) = pAVar16;
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Configure Grid:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Window::set_title((String_conflict*)pAVar16);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Node::add_child(*(undefined8*)( this + 0xac0 ), *(undefined8*)( this + 0xc10 ), 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_0011efe8;
   postinitialize_handler((Object*)pBVar9);
   Node::add_child(*(undefined8*)( this + 0xc10 ), pBVar9, 0, 0);
   pSVar13 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar13);
   postinitialize_handler((Object*)pSVar13);
   Range::set_min(_LC87);
   Range::set_max(_LC88);
   Range::set_step(_LC66);
   Range::set_value((double)*(float*)( this + 0xcac ));
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "px");
   SpinBox::set_suffix((String_conflict*)pSVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pcVar2 = *(code**)( *(long*)pSVar13 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,float>((Polygon2DEditor*)local_98, (char*)this, (_func_void_float*)"&Polygon2DEditor::_set_snap_off_x");
   ( *pcVar2 )(pSVar13, SceneStringNames::singleton + 0x280, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid Offset X:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   VBoxContainer::add_margin_child((String_conflict*)pBVar9, (Control*)local_b8, SUB81(pSVar13, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar13 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar13);
   postinitialize_handler((Object*)pSVar13);
   Range::set_min(_LC87);
   Range::set_max(_LC88);
   Range::set_step(_LC66);
   Range::set_value((double)*(float*)( this + 0xcb0 ));
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "px");
   SpinBox::set_suffix((String_conflict*)pSVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pcVar2 = *(code**)( *(long*)pSVar13 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,float>((Polygon2DEditor*)local_98, (char*)this, (_func_void_float*)"&Polygon2DEditor::_set_snap_off_y");
   ( *pcVar2 )(pSVar13, SceneStringNames::singleton + 0x280, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid Offset Y:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   VBoxContainer::add_margin_child((String_conflict*)pBVar9, (Control*)local_b8, SUB81(pSVar13, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar13 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar13);
   postinitialize_handler((Object*)pSVar13);
   Range::set_min(_LC87);
   Range::set_max(_LC88);
   Range::set_step(_LC66);
   Range::set_value((double)*(float*)( this + 0xcb4 ));
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "px");
   SpinBox::set_suffix((String_conflict*)pSVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pcVar2 = *(code**)( *(long*)pSVar13 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,float>((Polygon2DEditor*)local_98, (char*)this, (_func_void_float*)"&Polygon2DEditor::_set_snap_step_x");
   ( *pcVar2 )(pSVar13, SceneStringNames::singleton + 0x280, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid Step X:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   VBoxContainer::add_margin_child((String_conflict*)pBVar9, (Control*)local_b8, SUB81(pSVar13, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar13 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar13);
   postinitialize_handler((Object*)pSVar13);
   Range::set_min(_LC87);
   Range::set_max(_LC88);
   Range::set_step(_LC66);
   Range::set_value((double)*(float*)( this + 0xcb8 ));
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "px");
   SpinBox::set_suffix((String_conflict*)pSVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pcVar2 = *(code**)( *(long*)pSVar13 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,float>((Polygon2DEditor*)local_98, (char*)this, (_func_void_float*)"&Polygon2DEditor::_set_snap_step_y");
   ( *pcVar2 )(pSVar13, SceneStringNames::singleton + 0x280, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Grid Step Y:");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   VBoxContainer::add_margin_child((String_conflict*)pBVar9, (Control*)local_b8, SUB81(pSVar13, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   this_05 = (EditorZoomWidget*)operator_new(0xa38, "");
   EditorZoomWidget::EditorZoomWidget(this_05);
   postinitialize_handler((Object*)this_05);
   *(EditorZoomWidget**)( this + 0xb80 ) = this_05;
   uVar18 = 0;
   Node::add_child(*(undefined8*)( this + 0xb68 ), this_05, 0, 0);
   uVar25 = *(undefined8*)( this + 0xb80 );
   fVar24 = (float)EditorScale::get_scale();
   Control::set_anchors_and_offsets_preset(uVar25, 0, 0, CONCAT44(uVar18, (int)( fVar24 + fVar24 )));
   plVar15 = *(long**)( this + 0xb80 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>((Polygon2DEditor*)local_98, (char*)this, (_func_void_bool*)"&Polygon2DEditor::_update_zoom_and_pan");
   Callable::unbind(iVar22);
   bVar21 = SUB81((String_conflict*)local_b8, 0);
   Callable::bind<bool>(bVar21);
   StringName::StringName((StringName*)&local_c0, "zoom_changed", false);
   ( *pcVar2 )(plVar15, (String_conflict*)&local_c0, (String_conflict*)local_b8, 0);
   if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   EditorZoomWidget::set_shortcut_context(*(Node**)( this + 0xb80 ));
   pOVar12 = (Object*)operator_new(0xac8, "");
   ScrollBar::ScrollBar((ScrollBar*)pOVar12, 1);
   *(undefined***)pOVar12 = &PTR__initialize_classv_0011f978;
   Control::set_h_size_flags(pOVar12, 0);
   postinitialize_handler(pOVar12);
   *(Object**)( this + 0xb90 ) = pOVar12;
   Range::set_step(_LC100);
   Node::add_child(*(undefined8*)( this + 0xb68 ), *(undefined8*)( this + 0xb90 ), 0, 0);
   plVar15 = *(long**)( this + 0xb90 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>((Polygon2DEditor*)local_98, (char*)this, (_func_void_bool*)"&Polygon2DEditor::_update_zoom_and_pan");
   Callable::unbind(iVar22);
   Callable::bind<bool>(bVar21);
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x280, (String_conflict*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   pOVar12 = (Object*)operator_new(0xac8, "");
   ScrollBar::ScrollBar((ScrollBar*)pOVar12, 0);
   *(undefined***)pOVar12 = &PTR__initialize_classv_0011f608;
   Control::set_v_size_flags(pOVar12, 0);
   postinitialize_handler(pOVar12);
   *(Object**)( this + 0xb88 ) = pOVar12;
   Range::set_step(_LC100);
   Node::add_child(*(undefined8*)( this + 0xb68 ), *(undefined8*)( this + 0xb88 ), 0, 0);
   plVar15 = *(long**)( this + 0xb88 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor,bool>((Polygon2DEditor*)local_98, (char*)this, (_func_void_bool*)"&Polygon2DEditor::_update_zoom_and_pan");
   Callable::unbind(iVar22);
   Callable::bind<bool>(bVar21);
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x280, (String_conflict*)local_b8, 0);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_0011efe8;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 3000 ) = pBVar9;
   fVar24 = (float)EditorScale::get_scale();
   local_58[0] = ( ulong )(uint)(fVar24 * __LC101);
   Control::set_custom_minimum_size(pBVar9);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "Sync Bones to Polygon");
   TTR((String_conflict*)local_b8, (String_conflict*)local_a8);
   Button::Button(pBVar10, (String_conflict*)local_b8);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xbd0 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Node::add_child(*(undefined8*)( this + 3000 ), *(undefined8*)( this + 0xbd0 ), 0, 0);
   Control::set_h_size_flags(*(undefined8*)( this + 0xbd0 ), 0);
   plVar15 = *(long**)( this + 0xbd0 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor>((Polygon2DEditor*)local_98, (char*)this, (_func_void*)"&Polygon2DEditor::_sync_bones");
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x238, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   Node::add_child(this_01, *(undefined8*)( this + 3000 ), 0, 0);
   this_06 = (ScrollContainer*)operator_new(0xa68, "");
   ScrollContainer::ScrollContainer(this_06);
   postinitialize_handler((Object*)this_06);
   *(ScrollContainer**)( this + 0xbc0 ) = this_06;
   ScrollContainer::set_v_scroll((int)this_06);
   ScrollContainer::set_h_scroll((int)*(undefined8*)( this + 0xbc0 ));
   Node::add_child(*(undefined8*)( this + 3000 ), *(undefined8*)( this + 0xbc0 ), 0, 0);
   Control::set_v_size_flags(*(undefined8*)( this + 0xbc0 ), 3);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, true);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_0011efe8;
   postinitialize_handler((Object*)pBVar9);
   *(BoxContainer**)( this + 0xbc8 ) = pBVar9;
   Node::add_child(*(undefined8*)( this + 0xbc0 ), pBVar9, 0, 0);
   this_07 = (ViewPanner*)operator_new(0x1c8, "");
   ViewPanner::ViewPanner(this_07);
   postinitialize_handler((Object*)this_07);
   cVar7 = RefCounted::init_ref();
   if (cVar7 == '\0') {
      pOVar12 = *(Object**)( this + 0xba0 );
      if (pOVar12 == (Object*)0x0) goto LAB_001037df;
      *(undefined8*)( this + 0xba0 ) = 0;
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         this_07 = (ViewPanner*)0x0;
         cVar7 = predelete_handler(pOVar12);
         if (cVar7 != '\0') {
            LAB_00103e83:( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
            Memory::free_static(pOVar12, false);
            pOVar23 = (Object*)this_07;
            if (this_07 != (ViewPanner*)0x0) goto LAB_00103d46;
         }

      }

   }
 else {
      pOVar12 = *(Object**)( this + 0xba0 );
      pOVar23 = pOVar12;
      if (this_07 != (ViewPanner*)pOVar12) {
         *(ViewPanner**)( this + 0xba0 ) = this_07;
         cVar7 = RefCounted::reference();
         pOVar23 = (Object*)this_07;
         if (cVar7 == '\0') {
            *(undefined8*)( this + 0xba0 ) = 0;
            if (pOVar12 != (Object*)0x0) {
               cVar7 = RefCounted::unreference();
               joined_r0x00103df3:if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) goto LAB_00103e83;
            }

         }
 else if (pOVar12 != (Object*)0x0) {
            cVar7 = RefCounted::unreference();
            goto joined_r0x00103df3;
         }

      }

      LAB_00103d46:cVar7 = RefCounted::unreference();
      if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
         ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
         Memory::free_static(pOVar23, false);
         pOVar12 = *(Object**)( this + 0xba0 );
         goto LAB_001037df;
      }

   }

   pOVar12 = *(Object**)( this + 0xba0 );
   LAB_001037df:pCVar17 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar17);
   *(undefined**)( pCVar17 + 0x20 ) = &_LC20;
   *(undefined1(*) [16])( pCVar17 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar17 = &PTR_hash_00120b28;
   *(undefined8*)( pCVar17 + 0x40 ) = 0;
   uVar25 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar17 + 0x10 ) = 0;
   *(undefined8*)( pCVar17 + 0x30 ) = uVar25;
   *(code**)( pCVar17 + 0x38 ) = _zoom_callback;
   *(Polygon2DEditor**)( pCVar17 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar17, (int)pCVar17 + 0x28);
   *(char**)( pCVar17 + 0x20 ) = "Polygon2DEditor::_zoom_callback";
   Callable::Callable((Callable*)local_98, pCVar17);
   pCVar17 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar17);
   *(undefined**)( pCVar17 + 0x20 ) = &_LC20;
   *(undefined1(*) [16])( pCVar17 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( pCVar17 + 0x40 ) = 0;
   uVar25 = *(undefined8*)( this + 0x60 );
   *(undefined***)pCVar17 = &PTR_hash_00120a98;
   *(undefined8*)( pCVar17 + 0x30 ) = uVar25;
   *(code**)( pCVar17 + 0x38 ) = _pan_callback;
   *(undefined8*)( pCVar17 + 0x10 ) = 0;
   *(Polygon2DEditor**)( pCVar17 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar17, (int)pCVar17 + 0x28);
   *(char**)( pCVar17 + 0x20 ) = "Polygon2DEditor::_pan_callback";
   Callable::Callable((Callable*)local_a8, pCVar17);
   ViewPanner::set_callbacks(pOVar12, (String_conflict*)local_a8, (String_conflict*)local_98);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   plVar15 = *(long**)( this + 0xb68 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   create_custom_callable_function_pointer<Polygon2DEditor>((Polygon2DEditor*)local_98, (char*)this, (_func_void*)"&Polygon2DEditor::_canvas_draw");
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 8, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   plVar15 = *(long**)( this + 0xb68 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   pCVar17 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar17);
   *(Polygon2DEditor**)( pCVar17 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar17 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar17 + 0x20 ) = &_LC20;
   *(undefined8*)( pCVar17 + 0x40 ) = 0;
   uVar25 = *(undefined8*)( this + 0x60 );
   *(undefined***)pCVar17 = &PTR_hash_00120bb8;
   *(undefined8*)( pCVar17 + 0x30 ) = uVar25;
   *(code**)( pCVar17 + 0x38 ) = _canvas_input;
   *(undefined8*)( pCVar17 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar17, (int)pCVar17 + 0x28);
   *(char**)( pCVar17 + 0x20 ) = "Polygon2DEditor::_canvas_input";
   Callable::Callable((Callable*)local_98, pCVar17);
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0x28, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   plVar15 = *(long**)( this + 0xb68 );
   lVar19 = *(long*)( this + 0xba0 );
   pcVar2 = *(code**)( *plVar15 + 0x108 );
   pCVar17 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar17);
   *(undefined1(*) [16])( pCVar17 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar17 + 0x20 ) = &_LC20;
   *(undefined***)pCVar17 = &PTR_hash_00120c48;
   *(undefined8*)( pCVar17 + 0x40 ) = 0;
   uVar25 = *(undefined8*)( lVar19 + 0x60 );
   *(long*)( pCVar17 + 0x28 ) = lVar19;
   *(undefined8*)( pCVar17 + 0x30 ) = uVar25;
   *(undefined8*)( pCVar17 + 0x10 ) = 0;
   *(code**)( pCVar17 + 0x38 ) = ViewPanner::release_pan_key;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar17, (int)pCVar17 + 0x28);
   *(char**)( pCVar17 + 0x20 ) = "ViewPanner::release_pan_key";
   Callable::Callable((Callable*)local_98, pCVar17);
   ( *pcVar2 )(plVar15, SceneStringNames::singleton + 0xe0, (String_conflict*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   Control::set_focus_mode(*(undefined8*)( this + 0xb68 ), 1);
   pAVar16 = (AcceptDialog*)operator_new(0xdb0, "");
   AcceptDialog::AcceptDialog(pAVar16);
   postinitialize_handler((Object*)pAVar16);
   *(AcceptDialog**)( this + 0xca0 ) = pAVar16;
   Node::add_child(this, pAVar16, 0, 0);
   uVar25 = *(undefined8*)( EditorNode::singleton + 0xa40 );
   local_98[0] = 0;
   String::parse_latin1((String_conflict*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String_conflict*)local_a8, "");
   local_b8[0] = 0;
   String::parse_latin1((String_conflict*)local_b8, "Toggle Polygon Bottom Panel");
   TTR((String_conflict*)&local_c0, (String_conflict*)local_b8);
   local_c8 = 0;
   String::parse_latin1((String_conflict*)&local_c8, "bottom_panels/toggle_polygon_2d_bottom_panel");
   ED_SHORTCUT_AND_COMMAND((String_conflict*)&local_d0, (String_conflict*)&local_c8, (String_conflict*)&local_c0, 0, (String_conflict*)local_98);
   uVar5 = *(undefined8*)( this + 0xac0 );
   local_d8 = 0;
   String::parse_latin1((String_conflict*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String_conflict*)&local_e0, "Polygon");
   TTR((String_conflict*)&local_e8, (String_conflict*)&local_e0);
   uVar25 = EditorBottomPanel::add_item(uVar25, (String_conflict*)&local_e8, uVar5, (String_conflict*)&local_d0, 0);
   *(undefined8*)( this + 0xab8 ) = uVar25;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( ( local_d0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar12 = local_d0,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
   Memory::free_static(pOVar12, false);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);CowData<char32_t>::_unref((CowData<char32_t>*)local_98);CanvasItem::hide();if (( ( local_160 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar12 = local_160,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);Memory::free_static(pOVar12, false);}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Polygon2DEditorPlugin::Polygon2DEditorPlugin() */void Polygon2DEditorPlugin::Polygon2DEditorPlugin(Polygon2DEditorPlugin *this) {
   Polygon2DEditor *this_00;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = "Polygon2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   this_00 = (Polygon2DEditor*)operator_new(0xcc0, "");
   Polygon2DEditor::Polygon2DEditor(this_00);
   postinitialize_handler((Object*)this_00);
   AbstractPolygon2DEditorPlugin::AbstractPolygon2DEditorPlugin((AbstractPolygon2DEditorPlugin*)this, (AbstractPolygon2DEditor*)this_00, (String_conflict*)&local_40);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   *(undefined***)this = &PTR__initialize_classv_0011f360;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_update_bone_list() */void Polygon2DEditor::_update_bone_list(Polygon2DEditor *this) {
   code *pcVar1;
   char *__s;
   char cVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   long *plVar6;
   Object *pOVar7;
   CheckBox *this_00;
   long in_FS_OFFSET;
   CowData<char32_t> *local_f8;
   undefined8 local_c0;
   Object *local_b8;
   NodePath local_b0[8];
   char *local_a8;
   long local_a0;
   char *local_98[2];
   char *local_88;
   size_t local_80;
   undefined8 local_78;
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   while (iVar3 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xbc8 ), 0)),iVar3 != 0) {
      lVar5 = Node::get_child((int)*(undefined8*)( this + 0xbc8 ), false);
      if (( ( lVar5 != 0 ) && ( plVar6 = (long*)__dynamic_cast(lVar5, &Object::typeinfo, &CheckBox::typeinfo, 0) ),plVar6 != (long*)0x0 )) {
         local_70 = (undefined1[16])0x0;
         pcVar1 = *(code**)( *plVar6 + 0xb8 );
         local_78 = 0;
         StringName::StringName((StringName*)local_98, "bone_path", false);
         ( *pcVar1 )(local_58, plVar6, (StringName*)local_98);
         Variant::operator_cast_to_NodePath((Variant*)&local_88);
         NodePath::operator =((NodePath*)&local_c0, (Variant*)&local_88);
         NodePath::~NodePath((NodePath*)&local_88);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_98[0] != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

      }

      pOVar7 = (Object*)Node::get_child((int)*(undefined8*)( this + 0xbc8 ), false);
      cVar2 = predelete_handler(pOVar7);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }

   }
;
   local_b8 = (Object*)0x0;
   Ref<ButtonGroup>::instantiate<>((Ref<ButtonGroup>*)&local_b8);
   iVar3 = 0;
   do if (iVar4 != 0) if (( cVar2 != '\0' ) || ( iVar4 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xbc8 ), 0)) ),iVar4 < 2) iVar3 = iVar3 + 1; while ( true );
}
/* Polygon2DEditor::_notification(int) */void Polygon2DEditor::_notification(Polygon2DEditor *this, int param_1) {
   Ref *pRVar1;
   StringName *pSVar2;
   undefined8 uVar3;
   Viewport *pVVar4;
   Object *pOVar5;
   char cVar6;
   bool bVar7;
   int iVar8;
   String_conflict *pSVar9;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   Object *local_88;
   Object *local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x1f) {
      cVar6 = CanvasItem::is_visible();
      if (cVar6 != '\0') {
         CanvasItem::show();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            EditorBottomPanel::make_item_visible(*(Control**)( EditorNode::singleton + 0xa40 ), SUB81(*(undefined8*)( this + 0xac0 ), 0), true);
            return;
         }

         goto LAB_0010543f;
      }

      CanvasItem::hide();
      cVar6 = CanvasItem::is_visible_in_tree();
      if (cVar6 != '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            EditorBottomPanel::hide_bottom_panel();
            return;
         }

         goto LAB_0010543f;
      }

   }
 else if (param_1 < 0x20) {
      if (param_1 == 10) {
         LAB_00104c60:uVar3 = *(undefined8*)( this + 0xba0 );
         local_80 = (Object*)0x0;
         String::parse_latin1((String_conflict*)&local_80, "editors/panning/simple_panning");
         _EDITOR_GET((String_conflict*)local_58);
         bVar7 = Variant::operator_cast_to_bool((Variant*)local_58);
         local_90 = 0;
         String::parse_latin1((String_conflict*)&local_90, "canvas_item_editor/pan_view");
         ED_GET_SHORTCUT((String_conflict*)&local_88);
         local_98 = 0;
         String::parse_latin1((String_conflict*)&local_98, "editors/panning/sub_editors_panning_scheme");
         _EDITOR_GET((String_conflict*)local_78);
         iVar8 = Variant::operator_cast_to_int((Variant*)local_78);
         ViewPanner::setup(uVar3, iVar8, (String_conflict*)&local_88, bVar7);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         if (local_88 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_88);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
                  Memory::free_static(local_88, false);
               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         pVVar4 = *(Viewport**)( this + 0xba0 );
         local_80 = (Object*)0x0;
         String::parse_latin1((String_conflict*)&local_80, "editors/panning/warped_mouse_panning");
         _EDITOR_GET((String_conflict*)local_58);
         Variant::operator_cast_to_bool((Variant*)local_58);
         ViewPanner::setup_warped_panning(pVVar4, SUB81(*(undefined8*)( this + 600 ), 0));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      }
 else if (param_1 == 0xd) {
         pRVar1 = *(Ref**)( this + 0xaf8 );
         if (_notification(int)::{lambda()
         #1
         iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #1
         if (iVar8 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()
            #1
            __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
            #1
            __cxa_guard_release(&_notification(int)::{lambda()
            #1
         }

      }

      Control::get_editor_theme_icon((StringName*)&local_80);
      Button::set_button_icon(pRVar1);
      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);
      pRVar1 = *(Ref**)( this + 0xb00 );
      if (_notification(int)::{lambda()
      #2
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #2
      if (iVar8 != 0) {
         _scs_create((char *)&_notification(int)::{lambda()
         #2
         __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
         #2
         __cxa_guard_release(&_notification(int)::{lambda()
         #2
      }

   }

   Control::get_editor_theme_icon((StringName*)&local_80);
   Button::set_button_icon(pRVar1);
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);
   pRVar1 = *(Ref**)( this + 0xb08 );
   if (_notification(int)::{lambda()
   #3
   iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #3
   if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #3
      __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
      #3
      __cxa_guard_release(&_notification(int)::{lambda()
      #3
   }

}
Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb10 );if (_notification(int)::{lambda()#4iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#4if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #4
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #4
   __cxa_guard_release(&_notification(int)::{lambda()
   #4
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb18 );if (_notification(int)::{lambda()#5iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#5if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #5
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #5
   __cxa_guard_release(&_notification(int)::{lambda()
   #5
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb20 );if (_notification(int)::{lambda()#6iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#6if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #6
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #6
   __cxa_guard_release(&_notification(int)::{lambda()
   #6
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb28 );if (_notification(int)::{lambda()#7iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#7if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #7
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #7
   __cxa_guard_release(&_notification(int)::{lambda()
   #7
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb30 );if (_notification(int)::{lambda()#8iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#8if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #8
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #8
   __cxa_guard_release(&_notification(int)::{lambda()
   #8
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb38 );if (_notification(int)::{lambda()#9iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#9if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #9
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #9
   __cxa_guard_release(&_notification(int)::{lambda()
   #9
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb40 );if (_notification(int)::{lambda()#10iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#10if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #10
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #10
   __cxa_guard_release(&_notification(int)::{lambda()
   #10
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb48 );if (_notification(int)::{lambda()#11iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#11if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #11
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #11
   __cxa_guard_release(&_notification(int)::{lambda()
   #11
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb58 );if (_notification(int)::{lambda()#12iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#12if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #12
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #12
   __cxa_guard_release(&_notification(int)::{lambda()
   #12
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);pRVar1 = *(Ref**)( this + 0xb50 );if (_notification(int)::{lambda()#13iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#13if (iVar8 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #13
   __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
   #13
   __cxa_guard_release(&_notification(int)::{lambda()
   #13
}
}Control::get_editor_theme_icon((StringName*)&local_80);Button::set_button_icon(pRVar1);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_80);Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xb90 ), 0xb, 0, 0);Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0xb88 ), 0xc, 0, 0);( **(code**)( **(long**)( this + 0xb88 ) + 0x300 ) )();( **(code**)( **(long**)( this + 0xb90 ) + 0x300 ) )();Control::set_anchor_and_offset(_LC19, *(undefined8*)( this + 0xb88 ), 2, 1);Control::set_anchor_and_offset(_LC19, *(undefined8*)( this + 0xb90 ), 3, 1);goto LAB_00104b2c;}
  }
  elseif (param_1 == 0x2d) {
   LAB_00104b2c:pSVar2 = *(StringName**)( this + 0xb68 );
   if (_notification(int)::{lambda()
   #14
   iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #14
   if (iVar8 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #14
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_80,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (local_80 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_80;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_80);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pSVar2 = *(StringName **)(this + 0xbc0);
    if (_notification(int)::{lambda()
      #15
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #15
      if (iVar8 != 0) {
         _scs_create((char *)&_notification(int)::{lambda()
         #15
         __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#15}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_80,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (local_80 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_80;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_80);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  else if (param_1 == 10000) {
    pSVar9 = (String_conflict *)EditorSettings::get_singleton();
    local_80 = (Object *)0x0;
    String::parse_latin1((String_conflict *)&local_80,"editors/panning");
    cVar6 = EditorSettings::check_changed_settings_in_group(pSVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (cVar6 != '\0') goto LAB_00104c60;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010543f:, /* WARNING: Subroutine does not return */, __stack_chk_fail();
}, /* Polygon2DEditor::_bind_methods() */, void, Polygon2DEditor::_bind_methods(void){long lVar1;
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
  D_METHODP((char *)local_78,(char ***)"_update_bone_list",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Polygon2DEditor>(_update_bone_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
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
  D_METHODP((char *)local_78,(char ***)"_update_polygon_editing_state",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<Polygon2DEditor>(_update_polygon_editing_state);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }/* WARNING: Subroutine does not return */__stack_chk_fail();} * this, bool, param_1) * pfVar1 * pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11[16];
  undefined1 auVar12[16];
  undefined1 auVar13[16];
  undefined1 auVar14[16] * local_38 * local_30[2] * (long*)( in_FS_OFFSET + 0x28 )(double)Range::get_value();
  dVar9 = (double)Range::get_value();
  uVar2 = *(undefined4 *)(this + 0xbb0);
  *(ulong *)(this + 0xba8) = CONCAT44((float)dVar8,(float)dVar9);
  uVar5 = EditorZoomWidget::get_zoom();
  *(undefined4 *)(this + 0xbb0) = uVar5;
  if (param_1), {
                     uVar10 = Control::get_size();
                     auVar11._0_8_ = CONCAT44(_LC164._4_4_ * (float)( (ulong)uVar10 >> 0x20 ), (float)_LC164 * (float)uVar10);
                     auVar11._8_4_ = (float)extraout_XMM0_Qb * 0.0;
                     auVar11._12_4_ = (float)( (ulong)extraout_XMM0_Qb >> 0x20 ) * 0.0;
                     auVar14._4_4_ = uVar2;
                     auVar14._0_4_ = uVar2;
                     auVar14._8_8_ = __LC19;
                     auVar13._8_4_ = auVar11._8_4_;
                     auVar13._0_8_ = auVar11._0_8_;
                     auVar13._12_4_ = auVar11._12_4_;
                     auVar14 = divps(auVar13, auVar14);
                     auVar12._4_4_ = *(undefined4*)( this + 0xbb0 );
                     auVar12._0_4_ = *(undefined4*)( this + 0xbb0 );
                     auVar12._8_8_ = __LC19;
                     auVar11 = divps(auVar11, auVar12);
                     *(ulong*)( this + 0xba8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0xba8 ) >> 0x20 ) + ( auVar14._4_4_ - auVar11._4_4_ ), (float)*(undefined8*)( this + 0xba8 ) + ( auVar14._0_4_ - auVar11._0_4_ ));
                  }
, Polygon2D::get_texture()(local_38 == (Object*)0x0) = 0.0, ;
    fVar19 = 0.0;
  }
  else {
    cVar4 = RefCounted::unreference());
         pOVar3 = local_38;
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_38);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

         Polygon2D::get_texture();
         uVar10 = ( **(code**)( *(long*)local_38 + 0x1d8 ) )();
         fVar19 = (float)uVar10 + 0.0;
         fVar17 = (float)( (ulong)uVar10 >> 0x20 ) + 0.0;
         Ref<Texture2D>::unref((Ref<Texture2D>*)&local_38);
      }

      if (*(int*)( this + 0xac8 ) == 2) {
         Polygon2D::get_uv();
      }
 else {
         Polygon2D::get_polygon();
      }

      if (( local_30[0] == (float*)0x0 ) || ( *(long*)( local_30[0] + -2 ) < 1 )) {
         fVar16 = 0.0;
         fVar15 = 0.0;
      }
 else {
         fVar16 = 0.0;
         pfVar1 = local_30[0] + *(long*)( local_30[0] + -2 ) * 2;
         fVar15 = 0.0;
         do {
            fVar20 = local_30[0][1];
            fVar7 = *local_30[0];
            local_30[0] = local_30[0] + 2;
            if (fVar20 <= fVar15) {
               fVar15 = fVar20;
            }

            if (fVar7 <= fVar16) {
               fVar16 = fVar7;
            }

            if (fVar17 <= fVar20) {
               fVar17 = fVar20;
            }

            if (fVar19 <= fVar7) {
               fVar19 = fVar7;
            }

         }
 while ( pfVar1 != local_30[0] );
      }

      fVar20 = *(float*)( this + 0xbb0 );
      uVar10 = Control::get_size();
      fVar7 = *(float*)( this + 0xbb0 );
      fVar18 = (float)uVar10 / fVar20;
      fVar20 = (float)( (ulong)uVar10 >> 0x20 ) / fVar20;
      fVar6 = (float)EditorScale::get_scale();
      fVar7 = ( fVar6 * _LC166 ) / fVar7;
      fVar6 = fVar20 - fVar7;
      fVar7 = fVar18 - fVar7;
      Object::set_block_signals(SUB81(*(undefined8*)( this + 0xb88 ), 0));
      Range::set_min((double)( fVar16 - fVar7 ));
      Range::set_max((double)( fVar7 + fVar19 ));
      Range::set_page((double)fVar18);
      Range::set_value((double)*(float*)( this + 0xba8 ));
      Object::set_block_signals(SUB81(*(undefined8*)( this + 0xb88 ), 0));
      Object::set_block_signals(SUB81(*(undefined8*)( this + 0xb90 ), 0));
      Range::set_min((double)( fVar15 - fVar6 ));
      Range::set_max((double)( fVar6 + fVar17 ));
      Range::set_page((double)fVar20);
      Range::set_value((double)*(float*)( this + 0xbac ));
      Object::set_block_signals(SUB81(*(undefined8*)( this + 0xb90 ), 0));
      CanvasItem::queue_redraw();
      CowData<Vector2>::_unref((CowData<Vector2>*)local_30);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Polygon2DEditor::_pan_callback(Vector2, Ref<InputEvent>) */
   void Polygon2DEditor::_pan_callback(undefined8 param_1, Polygon2DEditor *param_2) {
      double dVar1;
      dVar1 = (double)Range::get_value();
      Range::set_value_no_signal(dVar1 - (double)( (float)param_1 / *(float*)( param_2 + 0xbb0 ) ));
      dVar1 = (double)Range::get_value();
      Range::set_value_no_signal(dVar1 - (double)( (float)( (ulong)param_1 >> 0x20 ) / *(float*)( param_2 + 0xbb0 ) ));
      _update_zoom_and_pan(param_2, false);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Polygon2DEditor::_zoom_callback(float, Vector2, Ref<InputEvent>) */
   void Polygon2DEditor::_zoom_callback(float param_1, ulong param_2, Polygon2DEditor *param_3) {
      undefined1 auVar1[16];
      undefined4 uVar2;
      float fVar3;
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      EditorZoomWidget::set_zoom(param_1 * *(float*)( param_3 + 0xbb0 ));
      uVar2 = EditorZoomWidget::get_zoom();
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2;
      auVar5._4_4_ = uVar2;
      auVar5._0_4_ = uVar2;
      auVar5._8_4_ = _LC19;
      auVar5._12_4_ = _UNK_001210c4;
      auVar6 = divps(auVar6, auVar5);
      auVar1._4_4_ = *(undefined4*)( param_3 + 0xbb0 );
      auVar1._0_4_ = *(undefined4*)( param_3 + 0xbb0 );
      auVar1._8_4_ = _LC19;
      auVar1._12_4_ = _UNK_001210c4;
      auVar5 = divps(auVar4, auVar1);
      fVar3 = ( auVar5._0_4_ - auVar6._0_4_ ) + (float)*(undefined8*)( param_3 + 0xba8 );
      *(ulong*)( param_3 + 0xba8 ) = CONCAT44(( auVar5._4_4_ - auVar6._4_4_ ) + (float)( ( ulong ) * (undefined8*)( param_3 + 0xba8 ) >> 0x20 ), fVar3);
      Range::set_value_no_signal((double)fVar3);
      Range::set_value_no_signal((double)*(float*)( param_3 + 0xbac ));
      _update_zoom_and_pan(param_3, false);
      return;
   }

   /* Polygon2DEditor::_center_view() */
   void Polygon2DEditor::_center_view(Polygon2DEditor *this) {
      long lVar1;
      char cVar2;
      float fVar3;
      long in_FS_OFFSET;
      float fVar4;
      float fVar5;
      undefined8 uVar6;
      float local_30;
      Object *local_28;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      Polygon2D::get_texture();
      if (local_28 == (Object*)0x0) {
         fVar3 = 0.0;
         fVar4 = (float)EditorScale::get_scale();
         EditorZoomWidget::set_zoom(fVar4);
         local_30 = 0.0;
      }
 else {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_28);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
               Memory::free_static(local_28, false);
            }

         }

         Polygon2D::get_texture();
         uVar6 = ( **(code**)( *(long*)local_28 + 0x1d8 ) )();
         fVar3 = (float)uVar6;
         local_30 = (float)( (ulong)uVar6 >> 0x20 );
         if (local_28 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_28);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
                  Memory::free_static(local_28, false);
               }

            }

         }

         fVar4 = (float)EditorScale::get_scale();
         fVar4 = _LC166 * fVar4;
         uVar6 = Control::get_size();
         fVar5 = ( (float)( (ulong)uVar6 >> 0x20 ) - fVar4 ) / local_30;
         fVar4 = ( (float)uVar6 - fVar4 ) / fVar3;
         if (fVar5 <= fVar4) {
            fVar4 = fVar5;
         }

         EditorZoomWidget::set_zoom(fVar4);
      }

      _update_zoom_and_pan(this, false);
      fVar4 = *(float*)( this + 0xbb0 );
      uVar6 = Control::get_size();
      fVar5 = ( local_30 - (float)( (ulong)uVar6 >> 0x20 ) / fVar4 ) * _LC167;
      Range::set_value_no_signal((double)( ( fVar3 - (float)uVar6 / fVar4 ) * _LC167 ));
      Range::set_value_no_signal((double)fVar5);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _update_zoom_and_pan(this, false);
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */
   void CowData<Vector2>::_ref(CowData<Vector2> *this, CowData *param_1) {
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

   /* Polygon2DEditor::_edit_menu_option(int) */
   void Polygon2DEditor::_edit_menu_option(Polygon2DEditor *this, int param_1) {
      EditorUndoRedoManager *pEVar1;
      long in_FS_OFFSET;
      char *local_98;
      CowData<Vector2> *local_90;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70[2];
      long local_60;
      String_conflict local_58[8];
      undefined8 local_50;
      undefined8 local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      pEVar1 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
      if (param_1 == 2) {
         Polygon2D::get_uv();
         if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) == 0 )) {
            CowData<Vector2>::_unref((CowData<Vector2>*)&local_60);
         }
 else {
            local_78 = 0;
            String::parse_latin1((String_conflict*)&local_78, "");
            local_80 = 0;
            String::parse_latin1((String_conflict*)&local_80, "Create UV Map");
            TTR(local_58, (String_conflict*)&local_80);
            EditorUndoRedoManager::create_action(pEVar1, local_58, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_50 = 0;
            StringName::StringName((StringName*)&local_78, "set_uv", false);
            EditorUndoRedoManager::add_do_method<Vector<Vector2>>(pEVar1, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_78, local_58);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            CowData<Vector2>::_unref((CowData<Vector2>*)&local_50);
            local_50 = 0;
            if (local_60 != 0) {
               CowData<Vector2>::_ref((CowData<Vector2>*)&local_50, (CowData*)&local_60);
            }

            StringName::StringName((StringName*)&local_78, "set_uv", false);
            EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(pEVar1, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_78, local_58);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            CowData<Vector2>::_unref((CowData<Vector2>*)&local_50);
            EditorUndoRedoManager::commit_action(SUB81(pEVar1, 0));
            CowData<Vector2>::_unref((CowData<Vector2>*)&local_60);
         }

         goto LAB_00105f90;
      }

      if (2 < param_1) {
         if (param_1 == 3) {
            local_48 = 0;
            Window::popup_centered(*(Vector2i**)( this + 0xc10 ));
         }

         goto LAB_00105f90;
      }

      if (param_1 == 0) {
         Polygon2D::get_polygon();
         if (( local_70[0] != 0 ) && ( *(long*)( local_70[0] + -8 ) != 0 )) {
            Polygon2D::get_uv();
            local_80 = 0;
            String::parse_latin1((String_conflict*)&local_80, "");
            local_88 = 0;
            String::parse_latin1((String_conflict*)&local_88, "Create UV Map");
            TTR(local_58, (String_conflict*)&local_88);
            EditorUndoRedoManager::create_action(pEVar1, local_58, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            local_50 = 0;
            if (local_70[0] != 0) {
               CowData<Vector2>::_ref((CowData<Vector2>*)&local_50, (CowData*)local_70);
            }

            local_98 = "set_uv";
            StringName::StringName((StringName*)&local_80, "set_uv", false);
            EditorUndoRedoManager::add_do_method<Vector<Vector2>>(pEVar1, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_80, local_58);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            CowData<Vector2>::_unref((CowData<Vector2>*)&local_50);
            local_50 = 0;
            if (local_60 != 0) {
               CowData<Vector2>::_ref((CowData<Vector2>*)&local_50, (CowData*)&local_60);
            }

            LAB_00106102:local_90 = (CowData<Vector2>*)local_70;
            StringName::StringName((StringName*)&local_80, local_98, false);
            EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(pEVar1, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_80, local_58);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            CowData<Vector2>::_unref((CowData<Vector2>*)&local_50);
            EditorUndoRedoManager::commit_action(SUB81(pEVar1, 0));
            CowData<Vector2>::_unref((CowData<Vector2>*)&local_60);
            CowData<Vector2>::_unref(local_90);
            goto LAB_00105f90;
         }

      }
 else {
         if (param_1 != 1) goto LAB_00105f90;
         Polygon2D::get_polygon();
         Polygon2D::get_uv();
         if (( local_60 != 0 ) && ( *(long*)( local_60 + -8 ) != 0 )) {
            local_80 = 0;
            String::parse_latin1((String_conflict*)&local_80, "");
            local_88 = 0;
            String::parse_latin1((String_conflict*)&local_88, "Create Polygon");
            TTR(local_58, (String_conflict*)&local_88);
            EditorUndoRedoManager::create_action(pEVar1, local_58, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            local_50 = 0;
            if (local_60 != 0) {
               CowData<Vector2>::_ref((CowData<Vector2>*)&local_50, (CowData*)&local_60);
            }

            StringName::StringName((StringName*)&local_80, "set_polygon", false);
            EditorUndoRedoManager::add_do_method<Vector<Vector2>>(pEVar1, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_80, local_58);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            CowData<Vector2>::_unref((CowData<Vector2>*)&local_50);
            local_50 = 0;
            if (local_70[0] != 0) {
               CowData<Vector2>::_ref((CowData<Vector2>*)&local_50, (CowData*)local_70);
            }

            local_98 = "set_polygon";
            goto LAB_00106102;
         }

         CowData<Vector2>::_unref((CowData<Vector2>*)&local_60);
      }

      CowData<Vector2>::_unref((CowData<Vector2>*)local_70);
      LAB_00105f90:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Polygon2DEditor::_select_mode(int) */
   void Polygon2DEditor::_select_mode(Polygon2DEditor *this, int param_1) {
      uint uVar1;
      Polygon2DEditor *pPVar2;
      long lVar3;
      long lVar4;
      long in_FS_OFFSET;
      long local_40[2];
      long local_30[2];
      long local_20;
      pPVar2 = this + 0xaf8;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      *(int*)( this + 0xac8 ) = param_1;
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + (long)param_1 * 8 + 0xad0 ), 0));
      do {
         pPVar2 = pPVar2 + 8;
         CanvasItem::hide();
      }
 while ( pPVar2 != this + 0xb50 );
      for (int i = 0; i < 4; i++) {
         CanvasItem::hide();
      }

      uVar1 = *(uint*)( this + 0xac8 );
      if (uVar1 != 2) {
         if (uVar1 < 3) {
            if (uVar1 == 0) {
               for (int i = 0; i < 7; i++) {
                  CanvasItem::show();
               }

               Polygon2D::get_polygon();
               CowData<Vector2>::_unref((CowData<Vector2>*)local_30);
               if (local_30[0] == 0) {
                  _set_action(this, 0);
               }
 else {
                  _set_action(this, 3);
               }

            }
 else {
               CanvasItem::show();
               CanvasItem::show();
               _set_action(this, 7);
            }

         }
 else if (uVar1 == 3) {
            CanvasItem::show();
            CanvasItem::show();
            _set_action(this, 9);
            for (int i = 0; i < 4; i++) {
               CanvasItem::show();
            }

            _update_bone_list(this);
            *(undefined8*)( this + 0xc08 ) = _LC171;
         }

         goto LAB_001064ef;
      }

      Polygon2D::get_uv();
      if (local_40[0] == 0) {
         Polygon2D::get_polygon();
         if (local_30[0] != 0) {
            lVar3 = 0;
            goto LAB_00106670;
         }

         CowData<Vector2>::_unref((CowData<Vector2>*)local_30);
         CowData<Vector2>::_unref((CowData<Vector2>*)local_40);
      }
 else {
         lVar3 = *(long*)( local_40[0] + -8 );
         Polygon2D::get_polygon();
         if (local_30[0] == 0) {
            lVar4 = 0;
         }
 else {
            LAB_00106670:lVar4 = *(long*)( local_30[0] + -8 );
         }

         CowData<Vector2>::_unref((CowData<Vector2>*)local_30);
         CowData<Vector2>::_unref((CowData<Vector2>*)local_40);
         if (lVar4 != lVar3) {
            _edit_menu_option(this, 0);
         }

      }

      for (int i = 0; i < 4; i++) {
         CanvasItem::show();
      }

      _set_action(this, 3);
      LAB_001064ef:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::queue_redraw();
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Polygon2DEditor::_update_available_modes() */
   void Polygon2DEditor::_update_available_modes(Polygon2DEditor *this) {
      long in_FS_OFFSET;
      long local_30[2];
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      Polygon2D::get_polygon();
      CowData<Vector2>::_unref((CowData<Vector2>*)local_30);
      if (local_30[0] == 0) {
         if (*(int*)( this + 0xac8 ) != 0) {
            _select_mode(this, 0);
         }

         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xae0 ), 0));
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xad8 ), 0));
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xae8 ), 0));
            return;
         }

      }
 else {
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xae0 ), 0));
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xad8 ), 0));
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xae8 ), 0));
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Polygon2DEditor::_set_node(Node*) */
   void Polygon2DEditor::_set_node(Polygon2DEditor *this, Node *param_1) {
      code *pcVar1;
      char *pcVar2;
      long *plVar3;
      long in_FS_OFFSET;
      CanvasItem aCStack_58[24];
      long local_40;
      pcVar2 = *(char**)( this + 0xb68 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (pcVar2 != (char*)0x0) {
         pcVar2 = (char*)__dynamic_cast(pcVar2, &Object::typeinfo, &CanvasItem::typeinfo, 0);
      }

      plVar3 = *(long**)( this + 0xaa8 );
      if (plVar3 != (long*)0x0) {
         pcVar1 = *(code**)( *plVar3 + 0x110 );
         create_custom_callable_function_pointer<CanvasItem>(aCStack_58, pcVar2, (_func_void*)"&CanvasItem::queue_redraw");
         ( *pcVar1 )(plVar3, SceneStringNames::singleton + 8, aCStack_58);
         Callable::~Callable((Callable*)aCStack_58);
         plVar3 = *(long**)( this + 0xaa8 );
         pcVar1 = *(code**)( *plVar3 + 0x110 );
         create_custom_callable_function_pointer<Polygon2DEditor>((Polygon2DEditor*)aCStack_58, (char*)this, (_func_void*)"&Polygon2DEditor::_update_available_modes");
         ( *pcVar1 )(plVar3, SceneStringNames::singleton + 8, aCStack_58);
         Callable::~Callable((Callable*)aCStack_58);
      }

      if (param_1 != (Node*)0x0) {
         param_1 = (Node*)__dynamic_cast(param_1, &Object::typeinfo, &Polygon2D::typeinfo, 0);
      }

      *(Node**)( this + 0xaa8 ) = param_1;
      _update_polygon_editing_state(this);
      CanvasItem::queue_redraw();
      if (*(long*)( this + 0xaa8 ) == 0) goto LAB_00106a5e;
      plVar3 = *(long**)( this + 0xb68 );
      pcVar1 = *(code**)( *plVar3 + 0x2c8 );
      CanvasItem::get_texture_filter_in_tree();
      ( *pcVar1 )(plVar3);
      _update_bone_list(this);
      _update_available_modes(this);
      if (*(int*)( this + 0xac8 ) == 4) {
         _select_mode(this, 0);
         plVar3 = *(long**)( this + 0xaa8 );
         if (*(long**)( this + 0xab0 ) != plVar3) goto LAB_001069a4;
      }
 else {
         plVar3 = *(long**)( this + 0xaa8 );
         if (*(long**)( this + 0xab0 ) != plVar3) {
            LAB_001069a4:if (this[0xb98] == (Polygon2DEditor)0x0) {
               this[0xb98] = (Polygon2DEditor)0x1;
               _center_view_on_draw(SUB81(this, 0));
               plVar3 = *(long**)( this + 0xaa8 );
            }

         }

      }

      *(long**)( this + 0xab0 ) = plVar3;
      pcVar1 = *(code**)( *plVar3 + 0x108 );
      create_custom_callable_function_pointer<CanvasItem>(aCStack_58, pcVar2, (_func_void*)"&CanvasItem::queue_redraw");
      ( *pcVar1 )(plVar3, SceneStringNames::singleton + 8, aCStack_58, 0);
      Callable::~Callable((Callable*)aCStack_58);
      plVar3 = *(long**)( this + 0xaa8 );
      pcVar1 = *(code**)( *plVar3 + 0x108 );
      create_custom_callable_function_pointer<Polygon2DEditor>((Polygon2DEditor*)aCStack_58, (char*)this, (_func_void*)"&Polygon2DEditor::_update_available_modes");
      ( *pcVar1 )(plVar3, SceneStringNames::singleton + 8, aCStack_58, 0);
      Callable::~Callable((Callable*)aCStack_58);
      LAB_00106a5e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* CowData<Vector2>::_copy_on_write() [clone .isra.0] */
   void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
      long lVar1;
      code *pcVar2;
      undefined8 *puVar3;
      ulong uVar4;
      size_t __n;
      if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
         return;
      }

      if (*(long*)this == 0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar1 = *(long*)( *(long*)this + -8 );
      uVar4 = 0x10;
      __n = lVar1 * 8;
      if (__n != 0) {
         uVar4 = __n - 1 | __n - 1 >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
      if (puVar3 != (undefined8*)0x0) {
         *puVar3 = 1;
         puVar3[1] = lVar1;
         memcpy(puVar3 + 2, *(void**)this, __n);
         _unref(this);
         *(undefined8**)this = puVar3 + 2;
         return;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   /* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */
   void Vector<Vector2>::push_back(undefined8 param_1, Vector<Vector2> *this) {
      int iVar1;
      long lVar2;
      long lVar3;
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = 1;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 8 ), lVar2);
      if (iVar1 == 0) {
         if (*(long*)( this + 8 ) == 0) {
            lVar3 = -1;
            lVar2 = 0;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
            lVar3 = lVar2 + -1;
            if (-1 < lVar3) {
               CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( this + 8 ));
               *(undefined8*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* CowData<int>::_copy_on_write() [clone .isra.0] */
   void CowData<int>::_copy_on_write(CowData<int> *this) {
      long lVar1;
      code *pcVar2;
      undefined8 *puVar3;
      ulong uVar4;
      size_t __n;
      if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
         return;
      }

      if (*(long*)this == 0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar1 = *(long*)( *(long*)this + -8 );
      uVar4 = 0x10;
      __n = lVar1 * 4;
      if (__n != 0) {
         uVar4 = __n - 1 | __n - 1 >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
      if (puVar3 != (undefined8*)0x0) {
         *puVar3 = 1;
         puVar3[1] = lVar1;
         memcpy(puVar3 + 2, *(void**)this, __n);
         _unref(this);
         *(undefined8**)this = puVar3 + 2;
         return;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   /* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */
   void CowData<float>::_ref(CowData<float> *this, CowData *param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Polygon2DEditor::_canvas_draw() [clone .part.0] */
   void Polygon2DEditor::_canvas_draw(Polygon2DEditor *this) {
      Polygon2DEditor PVar1;
      int iVar2;
      code *pcVar3;
      Ref *pRVar4;
      Vector *pVVar5;
      Array *pAVar6;
      Rect2 *pRVar7;
      bool bVar8;
      float *pfVar9;
      bool bVar10;
      char cVar11;
      int iVar12;
      int iVar13;
      undefined4 uVar14;
      int iVar15;
      int iVar16;
      long *plVar17;
      ulong uVar18;
      ulong uVar19;
      Polygon2DEditor *pPVar20;
      long lVar21;
      long *plVar22;
      long lVar23;
      Vector2 *pVVar24;
      long lVar25;
      long lVar26;
      long lVar27;
      float *pfVar28;
      ulong uVar29;
      long in_FS_OFFSET;
      float fVar30;
      float fVar31;
      float extraout_XMM0_Da;
      uint uVar32;
      float extraout_XMM0_Db;
      undefined8 uVar33;
      float fVar35;
      double dVar34;
      float fVar36;
      float fVar37;
      float fVar38;
      float fVar39;
      int local_230;
      CowData<Vector2> *local_208;
      float *local_1d8;
      long local_1b0;
      undefined8 local_1a8;
      Array local_1a0[8];
      long *local_198;
      undefined8 local_190[2];
      float *local_180;
      undefined8 local_178;
      long local_170;
      Vector<Vector2> local_168[8];
      long local_160;
      undefined8 local_158;
      float *local_150;
      undefined8 local_148;
      ulong local_140;
      undefined8 local_138;
      undefined8 uStack_130;
      undefined8 local_128;
      undefined8 uStack_120;
      undefined8 local_118;
      undefined8 uStack_110;
      undefined4 local_108;
      undefined4 uStack_104;
      undefined4 uStack_100;
      undefined4 uStack_fc;
      undefined8 local_f8;
      undefined8 local_f0;
      float local_e8;
      float fStack_e4;
      Transform2D local_d8[32];
      undefined8 local_b8;
      undefined8 uStack_b0;
      undefined8 local_a8;
      undefined8 local_98[2];
      undefined8 local_88;
      undefined8 local_78;
      undefined8 uStack_70;
      undefined8 local_68;
      undefined8 local_58;
      undefined8 uStack_50;
      undefined8 local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (this[0xb98] != (Polygon2DEditor)0x0) {
         _center_view(this);
      }

      Polygon2D::get_texture();
      local_1a8 = 0;
      fVar30 = *(float*)( this + 0xbb0 );
      local_f0 = 0x3f80000000000000;
      local_f8 = 0x3f800000;
      fStack_e4 = (float)( *(uint*)( this + 0xbac ) ^ _LC159 ) * fVar30;
      local_e8 = (float)( *(uint*)( this + 0xba8 ) ^ _LC159 ) * fVar30;
      local_58 = CONCAT44(fVar30, fVar30);
      Transform2D::scale_basis((Transform2D*)&local_f8);
      if (( *(int*)( this + 0xac8 ) != 2 ) && ( *(int*)( this + 0xaf0 ) != 0 )) {
         Polygon2D::get_polygon();
         if (local_150 != (float*)0x0) {
            Polygon2D::get_uv();
            if (local_160 == 0) {
               Polygon2D::get_polygon();
               if (local_170 != 0) {
                  lVar21 = 0;
                  goto LAB_00107551;
               }

               CowData<Vector2>::_unref((CowData<Vector2>*)&local_170);
               CowData<Vector2>::_unref((CowData<Vector2>*)&local_160);
               CowData<Vector2>::_unref((CowData<Vector2>*)&local_150);
            }
 else {
               lVar21 = *(long*)( local_160 + -8 );
               Polygon2D::get_polygon();
               if (local_170 == 0) {
                  lVar25 = 0;
               }
 else {
                  LAB_00107551:lVar25 = *(long*)( local_170 + -8 );
               }

               CowData<Vector2>::_unref((CowData<Vector2>*)&local_170);
               CowData<Vector2>::_unref((CowData<Vector2>*)&local_160);
               CowData<Vector2>::_unref((CowData<Vector2>*)&local_150);
               if (lVar25 != lVar21) goto joined_r0x00107c53;
            }

            local_208 = (CowData<Vector2>*)&local_150;
            Node2D::set_transform(*(Transform2D**)( this + 0xb78 ));
            pRVar4 = *(Ref**)( this + 0xb78 );
            Polygon2D::get_texture();
            Polygon2D::set_texture(pRVar4);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_158);
            pVVar24 = *(Vector2**)( this + 0xb78 );
            local_58 = Polygon2D::get_texture_offset();
            Polygon2D::set_texture_offset(pVVar24);
            fVar30 = (float)Polygon2D::get_texture_rotation();
            Polygon2D::set_texture_rotation(fVar30);
            pVVar24 = *(Vector2**)( this + 0xb78 );
            local_58 = Polygon2D::get_texture_scale();
            Polygon2D::set_texture_scale(pVVar24);
            plVar17 = *(long**)( this + 0xb78 );
            pcVar3 = *(code**)( *plVar17 + 0x2c8 );
            uVar14 = CanvasItem::get_texture_filter_in_tree();
            ( *pcVar3 )(plVar17, uVar14);
            plVar17 = *(long**)( this + 0xb78 );
            pcVar3 = *(code**)( *plVar17 + 0x2d0 );
            uVar14 = CanvasItem::get_texture_repeat_in_tree();
            ( *pcVar3 )(plVar17, uVar14);
            pVVar5 = *(Vector**)( this + 0xb78 );
            Polygon2D::get_polygon();
            Polygon2D::set_polygon(pVVar5);
            CowData<Vector2>::_unref(local_208);
            pVVar5 = *(Vector**)( this + 0xb78 );
            Polygon2D::get_uv();
            Polygon2D::set_uv(pVVar5);
            CowData<Vector2>::_unref(local_208);
            uVar33 = *(undefined8*)( this + 0xb78 );
            Polygon2D::get_invert();
            Polygon2D::set_invert(SUB81(uVar33, 0));
            fVar30 = (float)Polygon2D::get_invert_border();
            Polygon2D::set_invert_border(fVar30);
            uVar33 = *(undefined8*)( this + 0xb78 );
            Polygon2D::get_internal_vertex_count();
            Polygon2D::set_internal_vertex_count((int)uVar33);
            pAVar6 = *(Array**)( this + 0xb78 );
            if (*(int*)( this + 0xaf0 ) == 7) {
               Array::Array((Array*)&local_158);
            }
 else {
               Polygon2D::get_polygons();
            }

            Polygon2D::set_polygons(pAVar6);
            Array::~Array((Array*)&local_158);
            CanvasItem::show();
            PVar1 = this[0xca9];
            goto joined_r0x00107057;
         }

         CowData<Vector2>::_unref((CowData<Vector2>*)&local_150);
      }

      joined_r0x00107c53:if (local_1b0 != 0) {
         local_58 = Polygon2D::get_texture_offset();
         fVar30 = (float)Polygon2D::get_texture_rotation();
         Transform2D::Transform2D((Transform2D*)&local_78, fVar30, (Transform2D*)&local_58);
         local_58 = Polygon2D::get_texture_scale();
         Transform2D::scale((Transform2D*)&local_78);
         Transform2D::affine_invert();
         plVar17 = (long*)RenderingServer::get_singleton();
         pcVar3 = *(code**)( *plVar17 + 0xf78 );
         Transform2D::operator *((Transform2D*)&local_58, (Transform2D*)&local_f8);
         ( *pcVar3 )(plVar17, *(undefined8*)( *(long*)( this + 0xb68 ) + 0x428 ), (Transform2D*)&local_58);
         local_98[0] = 0;
         local_58 = CONCAT44(_LC19, _LC19);
         uStack_50 = CONCAT44(_LC19, _LC19);
         CanvasItem::draw_texture(*(Ref**)( this + 0xb68 ), (Ref<Texture2D>*)&local_1b0, (Color*)local_98);
         plVar17 = (long*)RenderingServer::get_singleton();
         uStack_50 = 0x3f80000000000000;
         local_58 = 0x3f800000;
         local_48 = 0;
         ( **(code**)( *plVar17 + 0xf78 ) )(plVar17, *(undefined8*)( *(long*)( this + 0xb68 ) + 0x428 ), (Transform2D*)&local_58);
      }

      CanvasItem::hide();
      PVar1 = this[0xca9];
      joined_r0x00107057:if (PVar1 != (Polygon2DEditor)0x0) {
         local_78 = CONCAT44(_UNK_001210c4, _LC19);
         uStack_70 = _UNK_001210c8;
         Control::get_size();
         uVar32 = _LC197;
         fVar30 = _LC196;
         uVar29 = 0;
         if (( *(float*)( this + 0xcb4 ) != 0.0 ) && ( uVar29 = 0.0 < extraout_XMM0_Da )) {
            iVar16 = 0;
            fVar35 = 0.0;
            uVar18 = uVar29;
            do {
               Transform2D::affine_inverse();
               fVar31 = ( ( fVar35 * (float)local_58 + (float)uStack_50 * 0.0 + (float)local_48 ) - *(float*)( this + 0xcac ) ) / *(float*)( this + 0xcb4 );
               if ((float)( (uint)fVar31 & uVar32 ) < fVar30) {
                  fVar31 = (float)( ( uint )((float)(int)fVar31 - (float)( -(uint)(fVar31 < (float)(int)fVar31) & _LC19 )) | ~uVar32 & (uint)fVar31 );
               }

               uVar19 = lrintf(fVar31);
               uVar29 = uVar19 & 0xffffffff;
               if (( (int)uVar18 != (int)uVar19 ) && ( iVar16 != 0 )) {
                  pVVar24 = *(Vector2**)( this + 0xb68 );
                  fVar31 = (float)EditorScale::get_scale();
                  fVar31 = roundf(fVar31);
                  local_58 = (ulong)(uint)fVar35;
                  local_98[0] = CONCAT44(extraout_XMM0_Db, fVar35);
                  CanvasItem::draw_line(pVVar24, (Transform2D*)&local_58, (Color*)local_98, fVar31, SUB81(&local_78, 0));
               }

               iVar16 = iVar16 + 1;
               fVar35 = (float)iVar16;
               uVar18 = uVar29;
            }
 while ( fVar35 < extraout_XMM0_Da );
         }

         uVar32 = _LC197;
         fVar30 = _LC196;
         if (( *(float*)( this + 0xcb8 ) != 0.0 ) && ( 0.0 < extraout_XMM0_Db )) {
            iVar16 = 0;
            fVar35 = 0.0;
            do {
               Transform2D::affine_inverse();
               fVar31 = ( ( local_58._4_4_ * 0.0 + fVar35 * uStack_50._4_4_ + local_48._4_4_ ) - *(float*)( this + 0xcb0 ) ) / *(float*)( this + 0xcb8 );
               if ((float)( (uint)fVar31 & uVar32 ) < fVar30) {
                  fVar31 = (float)( ( uint )((float)(int)fVar31 - (float)( -(uint)(fVar31 < (float)(int)fVar31) & _LC19 )) | ~uVar32 & (uint)fVar31 );
               }

               uVar18 = lrintf(fVar31);
               if (( (int)uVar29 != (int)uVar18 ) && ( iVar16 != 0 )) {
                  pVVar24 = *(Vector2**)( this + 0xb68 );
                  fVar31 = (float)EditorScale::get_scale();
                  fVar31 = roundf(fVar31);
                  local_98[0] = CONCAT44(fVar35, extraout_XMM0_Da);
                  local_58 = (ulong)(uint)fVar35 << 0x20;
                  CanvasItem::draw_line(pVVar24, (Transform2D*)&local_58, (Color*)local_98, fVar31, SUB81(&local_78, 0));
               }

               iVar16 = iVar16 + 1;
               fVar35 = (float)iVar16;
               uVar29 = uVar18 & 0xffffffff;
            }
 while ( fVar35 < extraout_XMM0_Db );
         }

      }

      local_208 = (CowData<Vector2>*)&local_150;
      Polygon2D::get_polygons();
      local_180 = (float*)0x0;
      if (*(int*)( this + 0xac8 ) == 2) {
         Polygon2D::get_uv();
      }
 else {
         Polygon2D::get_polygon();
      }

      if (local_150 != (float*)0x0) {
         CowData<Vector2>::_unref((CowData<Vector2>*)&local_180);
         local_180 = local_150;
         local_150 = (float*)0x0;
      }

      CowData<Vector2>::_unref(local_208);
      iVar16 = (int)(String_conflict*)&local_158;
      if (*(int*)( this + 0xac8 ) == 3) {
         for (iVar12 = 0; iVar13 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xbc8 ), 0)),iVar12 < iVar13; iVar12 = iVar12 + 1) {
            lVar21 = Node::get_child((int)*(undefined8*)( this + 0xbc8 ), SUB41(iVar12, 0));
            if (( ( lVar21 != 0 ) && ( lVar21 = __dynamic_cast(lVar21, &Object::typeinfo, &CheckBox::typeinfo, 0) ),lVar21 != 0 )) {
               Polygon2D::get_bone_weights(iVar16);
               if (local_150 == (float*)0x0) {
                  if (local_180 != (float*)0x0) {
                     lVar21 = 0;
                     goto LAB_001079ea;
                  }

               }
 else {
                  lVar21 = *(long*)( local_150 + -2 );
                  if (local_180 == (float*)0x0) {
                     lVar25 = 0;
                  }
 else {
                     LAB_001079ea:lVar25 = *(long*)( local_180 + -2 );
                  }

                  if (lVar25 != lVar21) {
                     CowData<float>::_unref((CowData<float>*)local_208);
                     break;
                  }

               }

               CowData<float>::_unref((CowData<float>*)local_208);
               Polygon2D::get_bone_weights(iVar16);
               local_1d8 = local_150;
               CowData<float>::_unref((CowData<float>*)local_208);
               goto LAB_001070f9;
            }

         }

      }

      local_1d8 = (float*)0x0;
      LAB_001070f9:if (( _canvas_draw()::{lambda()#1}::operator()() ) && ( iVar12 = __cxa_guard_acquire(&_canvas_draw()::, {
            lambda()
            #1
            )
            {
               _scs_create((char *)&_canvas_draw()::{lambda()
               #1
               __cxa_atexit(StringName::~StringName, &_canvas_draw()::, {
                     lambda()
                     #1
                     &__dso_handle;
                     __cxa_guard_release(&_canvas_draw()::{lambda()#1}::operator()()::sname);
  }, Control::get_editor_theme_icon((StringName*)&local_198));
                     local_138 = __LC199;
                     uStack_130 = _UNK_001210e8;
                     iVar12 = Array::size();
                     pfVar9 = local_180;
                     if (( iVar12 != 0 ) || ( ( *(long*)( this + 0xc88 ) != 0 && ( *(long*)( *(long*)( this + 0xc88 ) + -8 ) != 0 ) ) )) {
                        uStack_130 = CONCAT44(_LC200 * uStack_130._4_4_, (undefined4)uStack_130);
                     }

                     local_128 = CONCAT44(_LC164._4_4_, (float)_LC164);
                     uStack_120 = _UNK_001210f8;
                     local_118 = CONCAT44(_LC164._4_4_, (float)_LC164);
                     local_108 = __LC202;
                     uStack_104 = _UNK_00121104;
                     uStack_100 = _UNK_00121108;
                     uStack_fc = _UNK_0012110c;
                     uStack_110 = CONCAT44(0x3f000000, (int)_UNK_001210f8);
                     if (local_180 == (float*)0x0) {
                        iVar13 = Polygon2D::get_internal_vertex_count();
                        iVar12 = 0;
                        if (iVar13 < 1) {
                           iVar12 = -iVar13;
                        }

                     }
 else {
                        uVar33 = *(undefined8*)( local_180 + -2 );
                        iVar13 = Polygon2D::get_internal_vertex_count();
                        lVar21 = *(long*)( pfVar9 + -2 );
                        iVar13 = (int)uVar33 - iVar13;
                        iVar12 = 0;
                        if (-1 < iVar13) {
                           iVar12 = iVar13;
                        }

                        for (lVar25 = 0; lVar25 < lVar21; lVar25 = lVar25 + 1) {
                           iVar15 = (int)lVar25;
                           if (iVar13 < 1) {
                              lVar26 = 0;
                           }
 else {
                              lVar26 = (long)( ( iVar15 + 1 ) % iVar12 );
                              lVar23 = lVar26;
                              if (( ( iVar15 < iVar12 ) && ( this[0xc7c] != (Polygon2DEditor)0x0 ) ) && ( *(int*)( this + 0xc90 ) == 3 )) {
                                 local_158 = 0;
                                 String::parse_latin1((String_conflict*)&local_158, "editors/polygon_editor/show_previous_outline");
                                 _EDITOR_GET((String_conflict*)&local_58);
                                 bVar10 = Variant::operator_cast_to_bool((Variant*)&local_58);
                                 if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
                                 if (bVar10) {
                                    pVVar24 = *(Vector2**)( this + 0xb68 );
                                    fVar30 = (float)EditorScale::get_scale();
                                    fVar30 = roundf(fVar30);
                                    lVar27 = *(long*)( this + 0xc20 );
                                    if (lVar27 == 0) {
                                       lVar21 = 0;
                                       goto LAB_001072ba;
                                    }

                                    lVar21 = *(long*)( lVar27 + -8 );
                                    if (lVar21 <= lVar26) goto LAB_001072ba;
                                    uVar33 = *(undefined8*)( lVar27 + lVar26 * 8 );
                                    fVar35 = (float)uVar33;
                                    fVar31 = (float)( (ulong)uVar33 >> 0x20 );
                                    fVar36 = (float)( (ulong)local_f0 >> 0x20 );
                                    fVar37 = (float)( (ulong)local_f8 >> 0x20 );
                                    local_58 = CONCAT44(fVar35 * fVar37 + fVar31 * fVar36 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                    lVar23 = lVar25;
                                    if (lVar21 <= lVar25) goto LAB_001072ba;
                                    uVar33 = *(undefined8*)( lVar27 + lVar25 * 8 );
                                    fVar35 = (float)uVar33;
                                    fVar31 = (float)( (ulong)uVar33 >> 0x20 );
                                    local_78 = CONCAT44(fVar35 * fVar37 + fVar31 * fVar36 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                    CanvasItem::draw_line(pVVar24, (Vector2*)&local_78, (Color*)&local_58, fVar30, SUB81(&local_108, 0));
                                 }

                                 lVar21 = *(long*)( pfVar9 + -2 );
                              }

                              lVar23 = lVar26;
                              if (lVar21 <= lVar26) goto LAB_001072ba;
                           }

                           fVar30 = (float)*(undefined8*)( pfVar9 + lVar26 * 2 );
                           fVar35 = (float)( ( ulong ) * (undefined8*)( pfVar9 + lVar26 * 2 ) >> 0x20 );
                           if (( this[0xc7d] != (Polygon2DEditor)0x0 ) && ( lVar21 + -1 == lVar25 )) {
                              fVar30 = (float)*(undefined8*)( this + 0xc70 );
                              fVar35 = (float)( ( ulong ) * (undefined8*)( this + 0xc70 ) >> 0x20 );
                           }

                           if (iVar15 < iVar12) {
                              pVVar24 = *(Vector2**)( this + 0xb68 );
                              fVar31 = (float)EditorScale::get_scale();
                              fVar31 = roundf(fVar31);
                              lVar21 = *(long*)( pfVar9 + -2 );
                              local_58 = CONCAT44(fVar30 * local_f8._4_4_ + fVar35 * local_f0._4_4_ + fStack_e4, fVar30 * (float)local_f8 + fVar35 * (float)local_f0 + local_e8);
                              lVar23 = lVar25;
                              if (lVar21 <= lVar25) goto LAB_001072ba;
                              fVar30 = (float)*(undefined8*)( pfVar9 + lVar25 * 2 );
                              fVar35 = (float)( ( ulong ) * (undefined8*)( pfVar9 + lVar25 * 2 ) >> 0x20 );
                              local_78 = CONCAT44(fVar30 * local_f8._4_4_ + fVar35 * local_f0._4_4_ + fStack_e4, fVar30 * (float)local_f8 + fVar35 * (float)local_f0 + local_e8);
                              CanvasItem::draw_line(pVVar24, (Vector2*)&local_78, (Color*)&local_58, fVar31, SUB81(&local_138, 0));
                              lVar21 = *(long*)( pfVar9 + -2 );
                           }

                        }

                     }

                     for (iVar13 = 0; iVar15 = Array::size(),iVar13 < iVar15; iVar13 = iVar13 + 1) {
                        lVar25 = 0;
                        Array::operator []((int)local_1a0);
                        Variant::operator_cast_to_Vector((Variant*)&local_178);
                        local_160 = 0;
                        lVar26 = local_170;
                        while (lVar26 != 0) {
                           lVar21 = *(long*)( lVar26 + -8 );
                           if (lVar21 <= lVar25) {
                              if (2 < *(long*)( lVar26 + -8 )) {
                                 local_190[0] = 0;
                                 local_150 = (float*)0x0;
                                 CanvasItem::draw_colored_polygon(*(undefined8*)( this + 0xb68 ), local_168, &local_118);
                                 CowData<Vector2>::_unref(local_208);
                                 Ref<Texture2D>::unref((Ref<Texture2D>*)local_190);
                              }

                              break;
                           }

                           lVar25 = lVar25 + 1;
                           lVar23 = lVar25 % lVar21;
                           iVar15 = *(int*)( lVar26 + -4 + lVar25 * 4 );
                           if (lVar21 <= lVar23) goto LAB_001072ba;
                           iVar2 = *(int*)( lVar26 + lVar23 * 4 );
                           lVar23 = (long)iVar2;
                           if (( ( -1 < iVar15 ) && ( lVar27 = (long)iVar15 ),pfVar9 != (float*)0x0 )) {
                              Vector<Vector2>::push_back(local_168);
                              lVar26 = local_170;
                              if (( -1 < iVar2 ) && ( lVar23 < *(long*)( pfVar9 + -2 ) )) {
                                 pVVar24 = *(Vector2**)( this + 0xb68 );
                                 fVar30 = (float)EditorScale::get_scale();
                                 fVar30 = roundf(fVar30);
                                 lVar21 = *(long*)( pfVar9 + -2 );
                                 if (lVar21 <= lVar23) goto LAB_001072ba;
                                 fVar35 = (float)*(undefined8*)( pfVar9 + lVar23 * 2 );
                                 fVar31 = (float)( ( ulong ) * (undefined8*)( pfVar9 + lVar23 * 2 ) >> 0x20 );
                                 fVar36 = (float)( (ulong)local_f0 >> 0x20 );
                                 fVar37 = (float)( (ulong)local_f8 >> 0x20 );
                                 local_58 = CONCAT44(fVar35 * fVar37 + fVar31 * fVar36 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                 lVar23 = lVar27;
                                 if (lVar21 <= lVar27) goto LAB_001072ba;
                                 fVar35 = (float)*(undefined8*)( pfVar9 + lVar27 * 2 );
                                 fVar31 = (float)( ( ulong ) * (undefined8*)( pfVar9 + lVar27 * 2 ) >> 0x20 );
                                 local_78 = CONCAT44(fVar35 * fVar37 + fVar31 * fVar36 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                 CanvasItem::draw_line(pVVar24, (Vector2*)&local_78, (Color*)&local_58, fVar30, SUB81(&local_128, 0));
                                 lVar26 = local_170;
                              }

                           }

                        }
;
                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_160);
                        CowData<int>::_unref((CowData<int>*)&local_170);
                     }

                     bVar10 = SUB81((Transform2D*)&local_58, 0);
                     if (pfVar9 != (float*)0x0) {
                        pfVar28 = pfVar9;
                        for (lVar23 = 0; lVar23 < *(long*)( pfVar9 + -2 ); lVar23 = lVar23 + 1) {
                           pRVar7 = *(Rect2**)( this + 0xb68 );
                           if (local_1d8 == (float*)0x0) {
                              if ((int)lVar23 < iVar12) {
                                 local_58 = CONCAT44(_LC19, _LC19);
                                 uStack_50 = CONCAT44(_LC19, _LC19);
                                 uVar33 = ( **(code**)( *local_198 + 0x1d8 ) )();
                                 lVar21 = *(long*)( pfVar9 + -2 );
                                 fVar30 = (float)uVar33 * (float)_LC164;
                                 fVar35 = (float)( (ulong)uVar33 >> 0x20 ) * _LC164._4_4_;
                                 if (lVar21 <= lVar23) goto LAB_001072ba;
                                 fVar36 = (float)*(undefined8*)pfVar28;
                                 fVar37 = (float)( ( ulong ) * (undefined8*)pfVar28 >> 0x20 );
                                 fVar31 = fVar36 * (float)local_f8;
                                 fVar36 = fVar36 * (float)( (ulong)local_f8 >> 0x20 );
                                 uVar33 = local_f0;
                              }
 else {
                                 local_58 = __LC206;
                                 uStack_50 = _UNK_00121118;
                                 uVar33 = ( **(code**)( *local_198 + 0x1d8 ) )();
                                 lVar21 = *(long*)( pfVar9 + -2 );
                                 fVar30 = (float)uVar33 * (float)_LC164;
                                 fVar35 = (float)( (ulong)uVar33 >> 0x20 ) * _LC164._4_4_;
                                 if (lVar21 <= lVar23) goto LAB_001072ba;
                                 fVar37 = (float)*(undefined8*)pfVar28;
                                 fVar36 = (float)( ( ulong ) * (undefined8*)pfVar28 >> 0x20 );
                                 fVar31 = fVar36 * (float)local_f0;
                                 fVar36 = fVar36 * (float)( (ulong)local_f0 >> 0x20 );
                                 uVar33 = local_f8;
                              }

                              local_78 = CONCAT44(( fVar36 + fVar37 * (float)( (ulong)uVar33 >> 0x20 ) + fStack_e4 ) - fVar35, ( fVar31 + fVar37 * (float)uVar33 + local_e8 ) - fVar30);
                              CanvasItem::draw_texture(pRVar7, (StringName*)&local_198, (Color*)&local_78);
                           }
 else {
                              fVar30 = local_1d8[lVar23];
                              fVar37 = local_f8._4_4_ * *pfVar28 + local_f0._4_4_ * pfVar28[1] + fStack_e4;
                              fVar36 = pfVar28[1] * (float)local_f0 + *pfVar28 * (float)local_f8 + local_e8;
                              fVar35 = (float)EditorScale::get_scale();
                              fVar35 = roundf(fVar35);
                              uStack_50 = CONCAT44(0x3f800000, fVar30);
                              local_58 = CONCAT44(fVar30, fVar30);
                              fVar30 = (float)EditorScale::get_scale();
                              fVar30 = _LC190 * fVar30;
                              fVar31 = (float)EditorScale::get_scale();
                              uStack_70 = CONCAT44(fVar30, fVar30);
                              local_78 = CONCAT44(fVar37 - ( fVar31 + fVar31 ), fVar36 - ( fVar31 + fVar31 ));
                              CanvasItem::draw_rect(pRVar7, (Color*)&local_78, bVar10, _LC205, fVar35 != 0.0);
                           }

                           pfVar28 = pfVar28 + 2;
                        }

                     }

                     lVar25 = *(long*)( this + 0xc88 );
                     if (( lVar25 != 0 ) && ( *(long*)( lVar25 + -8 ) != 0 )) {
                        lVar26 = 0;
                        do {
                           if (*(long*)( lVar25 + -8 ) <= lVar26) break;
                           lVar23 = (long)*(int*)( lVar25 + lVar26 * 4 );
                           if (lVar23 < 0) {
                              if (pfVar9 == (float*)0x0) {
                                 LAB_00108c4b:lVar21 = 0;
                              }
 else {
                                 lVar21 = *(long*)( pfVar9 + -2 );
                              }

                              LAB_001072ba:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar23, lVar21, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar3 = (code*)invalidInstructionException();
                              ( *pcVar3 )();
                           }

                           if (pfVar9 == (float*)0x0) goto LAB_00108c4b;
                           lVar21 = *(long*)( pfVar9 + -2 );
                           if (lVar21 <= lVar23) goto LAB_001072ba;
                           lVar26 = lVar26 + 1;
                           fVar30 = (float)*(undefined8*)( pfVar9 + lVar23 * 2 );
                           fVar35 = (float)( ( ulong ) * (undefined8*)( pfVar9 + lVar23 * 2 ) >> 0x20 );
                           pPVar20 = this + 0xc70;
                           if (lVar26 < *(long*)( lVar25 + -8 )) {
                              lVar23 = (long)*(int*)( lVar25 + lVar26 * 4 );
                              if (( lVar23 < 0 ) || ( lVar21 <= lVar23 )) goto LAB_001072ba;
                              pPVar20 = (Polygon2DEditor*)( pfVar9 + lVar23 * 2 );
                           }

                           pVVar24 = *(Vector2**)( this + 0xb68 );
                           fVar36 = (float)*(undefined8*)pPVar20;
                           fVar37 = (float)( ( ulong ) * (undefined8*)pPVar20 >> 0x20 );
                           fVar31 = (float)EditorScale::get_scale();
                           fVar31 = roundf(fVar31);
                           fVar38 = (float)( (ulong)local_f8 >> 0x20 );
                           local_58 = CONCAT44(fVar36 * fVar38 + fVar37 * local_f0._4_4_ + fStack_e4, fVar36 * (float)local_f8 + fVar37 * (float)local_f0 + local_e8);
                           local_78 = CONCAT44(fVar38 * fVar30 + fVar35 * local_f0._4_4_ + fStack_e4, (float)local_f8 * fVar30 + fVar35 * (float)local_f0 + local_e8);
                           CanvasItem::draw_line(pVVar24, (Vector2*)&local_78, (Color*)&local_58, fVar31, SUB81(&local_128, 0));
                           lVar25 = *(long*)( this + 0xc88 );
                        }
 while ( lVar25 != 0 );
                     }

                     if (*(int*)( this + 0xaf0 ) - 9U < 2) {
                        local_178 = 0;
                        for (iVar12 = 0; iVar13 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xbc8 ), 0)),iVar12 < iVar13; iVar12 = iVar12 + 1) {
                           lVar21 = Node::get_child((int)*(undefined8*)( this + 0xbc8 ), SUB41(iVar12, 0));
                           if (( ( lVar21 != 0 ) && ( lVar21 = __dynamic_cast(lVar21, &Object::typeinfo, &CheckBox::typeinfo, 0) ),lVar21 != 0 )) {
                              Polygon2D::get_bone_path(iVar16);
                              NodePath::operator =((NodePath*)&local_178, (String_conflict*)&local_158);
                              NodePath::~NodePath((NodePath*)&local_158);
                              break;
                           }

                        }

                        Polygon2D::get_skeleton();
                        lVar21 = Node::get_node_or_null(*(NodePath**)( this + 0xaa8 ));
                        if (( lVar21 != 0 ) && ( plVar17 = (long*)__dynamic_cast(lVar21, &Object::typeinfo, &Skeleton2D::typeinfo, 0) ),plVar17 != (long*)0x0) {
                           ( **(code**)( *plVar17 + 0x298 ) )((Transform2D*)&local_58, plVar17);
                           ( **(code**)( **(long**)( this + 0xaa8 ) + 0x298 ) )((Transform2D*)&local_b8);
                           Transform2D::affine_inverse();
                           uVar33 = Polygon2D::get_offset();
                           local_140 = CONCAT44(( uint )((ulong)uVar33 >> 0x20) ^ _LC207._4_4_, (uint)uVar33 ^ (uint)_LC207);
                           Transform2D::translated((Transform2D*)&local_78);
                           Transform2D::operator *(local_d8, (Transform2D*)&local_78);
                           for (local_230 = 0; iVar16 = Skeleton2D::get_bone_count(),local_230 < iVar16; local_230 = local_230 + 1) {
                              iVar16 = Skeleton2D::get_bone((int)plVar17);
                              local_58 = 0;
                              uStack_50 = 0;
                              local_48 = 0;
                              Bone2D::get_rest();
                              cVar11 = Transform2D::operator ==((Transform2D*)&local_78, (Transform2D*)&local_58);
                              if (cVar11 == '\0') {
                                 Node::get_path_to((Node*)&local_158, SUB81(plVar17, 0));
                                 cVar11 = NodePath::operator ==((NodePath*)&local_178, (NodePath*)&local_158);
                                 NodePath::~NodePath((NodePath*)&local_158);
                                 fVar30 = _LC193;
                                 if (cVar11 != '\0') {
                                    fVar30 = _LC71._4_4_;
                                 }

                                 bVar8 = false;
                                 for (iVar12 = 0; iVar13 = Node::get_child_count(SUB41(iVar16, 0)),iVar12 < iVar13; iVar12 = iVar12 + 1) {
                                    lVar21 = Node::get_child(iVar16, SUB41(iVar12, 0));
                                    if (( lVar21 != 0 ) && ( plVar22 = (long*)__dynamic_cast(lVar21, &Object::typeinfo, &Bone2D::typeinfo, 0) ),plVar22 != (long*)0x0) {
                                       Bone2D::get_skeleton_rest();
                                       Transform2D::operator *((Transform2D*)local_98, local_d8);
                                       ( **(code**)( *plVar22 + 0x290 ) )((Transform2D*)&local_58, plVar22);
                                       Transform2D::operator *((Transform2D*)&local_78, (Transform2D*)local_98);
                                       fVar35 = (float)local_68;
                                       fVar31 = (float)( (ulong)local_68 >> 0x20 );
                                       if (cVar11 == '\0') {
                                          local_b8 = CONCAT44(_UNK_00121104, __LC202);
                                          uStack_b0 = CONCAT44(_UNK_0012110c, _UNK_00121108);
                                          pVVar24 = *(Vector2**)( this + 0xb68 );
                                          fVar36 = _LC191;
                                       }
 else {
                                          pVVar24 = *(Vector2**)( this + 0xb68 );
                                          local_b8 = CONCAT44(_LC19, _LC19);
                                          uStack_b0 = CONCAT44(_LC19, _LC19);
                                          fVar36 = _LC190;
                                       }

                                       fVar37 = (float)EditorScale::get_scale();
                                       fVar36 = roundf(fVar37 * fVar36);
                                       local_58 = __LC208;
                                       uStack_50 = _UNK_00121128;
                                       fVar38 = (float)( (ulong)local_f0 >> 0x20 );
                                       fVar39 = (float)( (ulong)local_f8 >> 0x20 );
                                       local_140 = CONCAT44(fVar35 * fVar39 + fVar31 * fVar38 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                       fVar37 = (float)( (ulong)local_88 >> 0x20 );
                                       local_148 = CONCAT44((float)local_88 * fVar39 + fVar37 * fVar38 + fStack_e4, (float)local_88 * (float)local_f8 + fVar37 * (float)local_f0 + local_e8);
                                       CanvasItem::draw_line(pVVar24, (Vector2*)&local_148, (Color*)&local_140, fVar36, bVar10);
                                       pVVar24 = *(Vector2**)( this + 0xb68 );
                                       fVar36 = (float)EditorScale::get_scale();
                                       fVar36 = roundf(fVar36 * fVar30);
                                       fVar37 = (float)( (ulong)local_f0 >> 0x20 );
                                       local_58 = CONCAT44(fVar35 * local_f8._4_4_ + fVar31 * fVar37 + fStack_e4, fVar35 * (float)local_f8 + fVar31 * (float)local_f0 + local_e8);
                                       fVar35 = (float)( (ulong)local_88 >> 0x20 );
                                       local_140 = CONCAT44((float)local_88 * local_f8._4_4_ + fVar35 * fVar37 + fStack_e4, (float)local_88 * (float)local_f8 + fVar35 * (float)local_f0 + local_e8);
                                       CanvasItem::draw_line(pVVar24, (Color*)&local_140, (Color*)&local_58, fVar36, SUB81((Transform2D*)&local_b8, 0));
                                       bVar8 = true;
                                    }

                                 }

                                 if (!bVar8) {
                                    Bone2D::get_skeleton_rest();
                                    Transform2D::operator *((Transform2D*)&local_b8, local_d8);
                                    uVar32 = Bone2D::get_length();
                                    local_140 = (ulong)uVar32;
                                    Transform2D::Transform2D((Transform2D*)&local_78, 0.0, (Color*)&local_140);
                                    fVar30 = (float)Bone2D::get_bone_angle();
                                    Transform2D::rotated(fVar30);
                                    Transform2D::operator *((Transform2D*)local_98, (Transform2D*)&local_b8);
                                    fVar30 = (float)local_88;
                                    fVar35 = (float)( (ulong)local_88 >> 0x20 );
                                    if (cVar11 == '\0') {
                                       local_78 = CONCAT44(_UNK_00121104, __LC202);
                                       uStack_70 = CONCAT44(_UNK_0012110c, _UNK_00121108);
                                       pVVar24 = *(Vector2**)( this + 0xb68 );
                                       fVar31 = _LC191;
                                    }
 else {
                                       pVVar24 = *(Vector2**)( this + 0xb68 );
                                       local_78 = CONCAT44(_LC19, _LC19);
                                       uStack_70 = CONCAT44(_LC19, _LC19);
                                       fVar31 = _LC190;
                                    }

                                    fVar36 = (float)EditorScale::get_scale();
                                    fVar31 = roundf(fVar36 * fVar31);
                                    local_58 = __LC208;
                                    uStack_50 = _UNK_00121128;
                                    fVar37 = (float)( (ulong)local_f0 >> 0x20 );
                                    fVar38 = (float)( (ulong)local_f8 >> 0x20 );
                                    local_140 = CONCAT44(fVar30 * fVar38 + fVar35 * fVar37 + fStack_e4, fVar30 * (float)local_f8 + fVar35 * (float)local_f0 + local_e8);
                                    fVar36 = (float)( (ulong)local_a8 >> 0x20 );
                                    local_148 = CONCAT44((float)local_a8 * fVar38 + fVar36 * fVar37 + fStack_e4, (float)local_a8 * (float)local_f8 + fVar36 * (float)local_f0 + local_e8);
                                    CanvasItem::draw_line(pVVar24, (Vector2*)&local_148, (Color*)&local_140, fVar31, bVar10);
                                    pVVar24 = *(Vector2**)( this + 0xb68 );
                                    fVar31 = _LC193;
                                    if (cVar11 != '\0') {
                                       fVar31 = _LC71._4_4_;
                                    }

                                    fVar36 = (float)EditorScale::get_scale();
                                    fVar31 = roundf(fVar36 * fVar31);
                                    fVar36 = (float)( (ulong)local_f8 >> 0x20 );
                                    local_58 = CONCAT44(fVar30 * fVar36 + fVar35 * local_f0._4_4_ + fStack_e4, fVar30 * (float)local_f8 + fVar35 * (float)local_f0 + local_e8);
                                    fVar30 = (float)( (ulong)local_a8 >> 0x20 );
                                    local_140 = CONCAT44((float)local_a8 * fVar36 + fVar30 * local_f0._4_4_ + fStack_e4, (float)local_a8 * (float)local_f8 + fVar30 * (float)local_f0 + local_e8);
                                    CanvasItem::draw_line(pVVar24, (Color*)&local_140, (Color*)&local_58, fVar31, SUB81((Transform2D*)&local_78, 0));
                                 }

                              }

                           }

                        }

                        pVVar24 = *(Vector2**)( this + 0xb68 );
                        local_58 = __LC209;
                        uStack_50 = _UNK_00121138;
                        dVar34 = (double)Range::get_value();
                        fVar30 = (float)EditorScale::get_scale();
                        CanvasItem::draw_circle(pVVar24, (float)( (double)fVar30 * dVar34 ), (Color*)( this + 0xc08 ), bVar10, _LC205, true);
                        NodePath::~NodePath((NodePath*)local_168);
                        NodePath::~NodePath((NodePath*)&local_178);
                     }

                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_198);
                     CowData<Vector2>::_unref((CowData<Vector2>*)&local_180);
                     Array::~Array(local_1a0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_1b0);
                     if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                        /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                     }

                     return;
                  }
, /* Polygon2DEditor::_canvas_draw() */, void __thiscall Polygon2DEditor::_canvas_draw(Polygon2DEditor *this);
               {
                  char cVar1;
                  long lVar2;
                  cVar1 = CanvasItem::is_visible();
                  if (cVar1 != '\0') {
                     if (*(code**)( *(long*)this + 0x370 ) == _get_node) {
                        lVar2 = *(long*)( this + 0xaa8 );
                     }
 else {
                        lVar2 = ( **(code**)( *(long*)this + 0x370 ) )(this);
                     }

                     if (lVar2 != 0) {
                        _canvas_draw(this);
                        return;
                     }

                  }

                  return;
               }

               /* CowData<float>::_copy_on_write() [clone .isra.0] */
               void CowData<float>::_copy_on_write(CowData<float> *this) {
                  long lVar1;
                  code *pcVar2;
                  undefined8 *puVar3;
                  ulong uVar4;
                  size_t __n;
                  if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
                     return;
                  }

                  if (*(long*)this == 0) {
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar1 = *(long*)( *(long*)this + -8 );
                  uVar4 = 0x10;
                  __n = lVar1 * 4;
                  if (__n != 0) {
                     uVar4 = __n - 1 | __n - 1 >> 1;
                     uVar4 = uVar4 | uVar4 >> 2;
                     uVar4 = uVar4 | uVar4 >> 4;
                     uVar4 = uVar4 | uVar4 >> 8;
                     uVar4 = uVar4 | uVar4 >> 0x10;
                     uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
                  }

                  puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
                  if (puVar3 != (undefined8*)0x0) {
                     *puVar3 = 1;
                     puVar3[1] = lVar1;
                     memcpy(puVar3 + 2, *(void**)this, __n);
                     _unref(this);
                     *(undefined8**)this = puVar3 + 2;
                     return;
                  }

                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               /* CowData<Color>::_copy_on_write() [clone .isra.0] */
               void CowData<Color>::_copy_on_write(CowData<Color> *this) {
                  long lVar1;
                  code *pcVar2;
                  undefined8 *puVar3;
                  ulong uVar4;
                  size_t __n;
                  if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
                     return;
                  }

                  if (*(long*)this == 0) {
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar1 = *(long*)( *(long*)this + -8 );
                  uVar4 = 0x10;
                  __n = lVar1 * 0x10;
                  if (__n != 0) {
                     uVar4 = __n - 1 | __n - 1 >> 1;
                     uVar4 = uVar4 | uVar4 >> 2;
                     uVar4 = uVar4 | uVar4 >> 4;
                     uVar4 = uVar4 | uVar4 >> 8;
                     uVar4 = uVar4 | uVar4 >> 0x10;
                     uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
                  }

                  puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
                  if (puVar3 != (undefined8*)0x0) {
                     *puVar3 = 1;
                     puVar3[1] = lVar1;
                     memcpy(puVar3 + 2, *(void**)this, __n);
                     _unref(this);
                     *(undefined8**)this = puVar3 + 2;
                     return;
                  }

                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               /* Polygon2DEditor::_cancel_editing() */
               void Polygon2DEditor::_cancel_editing(Polygon2DEditor *this) {
                  long *plVar1;
                  long in_FS_OFFSET;
                  long local_e8;
                  Array local_e0[8];
                  int local_d8[4];
                  Variant *local_c8[2];
                  int local_b8[2];
                  undefined1 local_b0[16];
                  int local_98[8];
                  int local_78[6];
                  undefined8 local_60;
                  undefined1 local_58[16];
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  if (this[0xc7d] == (Polygon2DEditor)0x0) {
                     if (this[0xc7c] != (Polygon2DEditor)0x0) {
                        this[0xc7c] = (Polygon2DEditor)0x0;
                        if (*(int*)( this + 0xac8 ) == 2) {
                           Polygon2D::set_uv(*(Vector**)( this + 0xaa8 ));
                        }
 else if (*(int*)( this + 0xac8 ) == 0) {
                           Polygon2D::set_polygon(*(Vector**)( this + 0xaa8 ));
                        }

                     }

                  }
 else {
                     *(undefined2*)( this + 0xc7c ) = 0;
                     Polygon2D::set_uv(*(Vector**)( this + 0xaa8 ));
                     Polygon2D::set_polygon(*(Vector**)( this + 0xaa8 ));
                     Polygon2D::set_internal_vertex_count((int)*(undefined8*)( this + 0xaa8 ));
                     Polygon2D::set_vertex_colors(*(Vector**)( this + 0xaa8 ));
                     plVar1 = *(long**)( this + 0xaa8 );
                     Array::Array(local_e0, (Array*)( this + 0xc60 ));
                     StringName::StringName((StringName*)&local_e8, "_set_bones", false);
                     Variant::Variant((Variant*)local_78, local_e0);
                     local_58 = (undefined1[16])0x0;
                     local_60 = 0;
                     for (int i = 0; i < 3; i++) {
                        local_d8[i] = 0;
                     }

                     local_c8[0] = (Variant*)local_78;
                     ( **(code**)( *plVar1 + 0x68 ) )((Variant*)local_98, plVar1, &local_e8, local_c8, 1, local_d8);
                     if (local_d8[0] == 0) {
                        Variant::Variant((Variant*)local_b8, (Variant*)local_98);
                     }
 else {
                        local_b8[0] = 0;
                        local_b0 = (undefined1[16])0x0;
                     }

                     if (Variant::needs_deinit[local_98[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[(int)local_60] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
                        StringName::unref();
                     }

                     Array::~Array(local_e0);
                     Polygon2D::set_polygons(*(Array**)( this + 0xaa8 ));
                     _update_polygon_editing_state(this);
                     _update_available_modes(this);
                  }

                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  CowData<int>::resize<false>((CowData<int>*)( this + 0xc88 ), 0);
                  return;
               }

               /* Polygon2DEditor::_sync_bones() */
               void Polygon2DEditor::_sync_bones(Polygon2DEditor *this) {
                  long *plVar1;
                  NodePath *pNVar2;
                  undefined8 uVar3;
                  StringName *pSVar4;
                  void *pvVar5;
                  char cVar6;
                  int iVar7;
                  int iVar8;
                  Object *pOVar9;
                  long lVar10;
                  long in_FS_OFFSET;
                  int local_100;
                  uint local_fc;
                  long local_f8;
                  String_conflict *local_f0;
                  StringName *local_d8;
                  Variant local_c0[8];
                  Node local_b8[8];
                  undefined8 local_b0;
                  long local_a8;
                  void *local_a0;
                  char *local_98;
                  void *local_90;
                  StringName *local_88[2];
                  undefined8 local_78;
                  undefined1 local_70[16];
                  undefined8 local_60;
                  undefined1 local_58[16];
                  long local_40;
                  pNVar2 = *(NodePath**)( this + 0xaa8 );
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  Polygon2D::get_skeleton();
                  cVar6 = Node::has_node(pNVar2);
                  NodePath::~NodePath((NodePath*)&local_98);
                  if (cVar6 == '\0') {
                     uVar3 = *(undefined8*)( this + 0xca0 );
                     local_a8 = 0;
                     String::parse_latin1((String_conflict*)&local_a8, "");
                     local_b0 = 0;
                     String::parse_latin1((String_conflict*)&local_b0, "The skeleton property of the Polygon2D does not point to a Skeleton2D node");
                     TTR((String_conflict*)&local_98, (String_conflict*)&local_b0);
                     AcceptDialog::set_text(uVar3, (NodePath*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                     local_78 = 0;
                     Window::popup_centered(*(Vector2i**)( this + 0xca0 ));
                  }
 else {
                     pNVar2 = *(NodePath**)( this + 0xaa8 );
                     Polygon2D::get_skeleton();
                     lVar10 = Node::get_node(pNVar2);
                     NodePath::~NodePath((NodePath*)&local_98);
                     if (lVar10 != 0) {
                        local_f8 = __dynamic_cast(lVar10, &Object::typeinfo, &Skeleton2D::typeinfo, 0);
                        goto LAB_001092e2;
                     }

                  }

                  local_f8 = 0;
                  LAB_001092e2:local_d8 = (StringName*)&local_78;
                  local_f0 = (String_conflict*)&local_a8;
                  StringName::StringName((StringName*)&local_98, "_get_bones", false);
                  Object::call<>(local_d8);
                  Variant::operator_cast_to_Array(local_c0);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  Polygon2D::clear_bones();
                  if (local_f8 == 0) {
                     local_a8 = 0;
                     uVar3 = *(undefined8*)( this + 0xca0 );
                     String::parse_latin1(local_f0, "");
                     local_b0 = 0;
                     String::parse_latin1((String_conflict*)&local_b0, "The skeleton property of the Polygon2D does not point to a Skeleton2D node");
                     TTR((String_conflict*)&local_98, (String_conflict*)&local_b0);
                     AcceptDialog::set_text(uVar3, (NodePath*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
                     local_78 = 0;
                     Window::popup_centered(*(Vector2i**)( this + 0xca0 ));
                  }
 else {
                     for (local_100 = 0; iVar7 = Skeleton2D::get_bone_count(),local_100 < iVar7; local_100 = local_100 + 1) {
                        Skeleton2D::get_bone((int)local_f8);
                        Node::get_path_to(local_b8, SUB81(local_f8, 0));
                        local_a0 = (void*)0x0;
                        Polygon2D::get_polygon();
                        if (local_90 == (void*)0x0) {
                           local_fc = 0;
                        }
 else {
                           local_fc = *(uint*)( (long)local_90 + -8 );
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_90);
                        for (iVar7 = 0; iVar8 = Array::size(),iVar7 < iVar8; iVar7 = iVar7 + 2) {
                           iVar8 = (int)local_c0;
                           Array::operator [](iVar8);
                           Variant::operator_cast_to_NodePath((Variant*)&local_b0);
                           Array::operator [](iVar8);
                           Variant::operator_cast_to_Vector((Variant*)&local_98);
                           cVar6 = NodePath::operator ==((NodePath*)&local_b0, (NodePath*)local_b8);
                           if (cVar6 == '\0') {
                              joined_r0x001094c9:if (local_90 != (void*)0x0) {
                                 LAB_00109423:pvVar5 = local_90;
                                 LOCK();
                                 plVar1 = (long*)( (long)local_90 + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    local_90 = (void*)0x0;
                                    Memory::free_static((void*)( (long)pvVar5 + -0x10 ), false);
                                 }

                              }

                           }
 else {
                              if (local_90 != (void*)0x0) {
                                 if (( *(long*)( (long)local_90 + -8 ) == (long)(int)local_fc ) && ( local_a0 != local_90 )) goto LAB_001094b3;
                                 goto LAB_00109423;
                              }

                              if (( local_fc == 0 ) && ( local_a0 != (void*)0x0 )) {
                                 LAB_001094b3:CowData<float>::_ref((CowData<float>*)&local_a0, (CowData*)&local_90);
                                 goto joined_r0x001094c9;
                              }

                           }

                           NodePath::~NodePath((NodePath*)&local_b0);
                        }

                        if (( local_a0 == (void*)0x0 ) || ( *(long*)( (long)local_a0 + -8 ) == 0 )) {
                           CowData<float>::resize<false>((CowData<float>*)&local_a0, (long)(int)local_fc);
                           CowData<float>::_copy_on_write((CowData<float>*)&local_a0);
                           if (0 < (int)local_fc) {
                              memset(local_a0, 0, (ulong)local_fc << 2);
                           }

                        }

                        Polygon2D::add_bone(*(NodePath**)( this + 0xaa8 ), (Vector*)local_b8);
                        CowData<float>::_unref((CowData<float>*)&local_a0);
                        NodePath::~NodePath((NodePath*)local_b8);
                     }

                  }

                  StringName::StringName((StringName*)&local_98, "_get_bones", false);
                  Object::call<>(local_d8);
                  Variant::operator_cast_to_Array((Variant*)local_b8);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  pOVar9 = (Object*)EditorUndoRedoManager::get_singleton();
                  local_a8 = 0;
                  local_90 = (void*)0x0;
                  local_98 = "";
                  String::parse_latin1((StrRange*)local_f0);
                  local_98 = "Sync Bones";
                  local_b0 = 0;
                  local_90 = (void*)0xa;
                  String::parse_latin1((StrRange*)&local_b0);
                  TTR((String_conflict*)&local_98, (String_conflict*)&local_b0);
                  EditorUndoRedoManager::create_action(pOVar9, (NodePath*)&local_98, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
                  Array::Array((Array*)&local_98, (Array*)local_b8);
                  StringName::StringName((StringName*)local_f0, "_set_bones", false);
                  pSVar4 = *(StringName**)( this + 0xaa8 );
                  Variant::Variant((Variant*)local_d8, (NodePath*)&local_98);
                  local_88[0] = local_d8;
                  local_58 = (undefined1[16])0x0;
                  local_60 = 0;
                  EditorUndoRedoManager::add_do_methodp(pOVar9, pSVar4, (Variant**)local_f0, (int)local_88);
                  if (Variant::needs_deinit[(int)local_60] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  Array::~Array((Array*)&local_98);
                  Array::Array((Array*)&local_98, (Array*)local_c0);
                  StringName::StringName((StringName*)local_f0, "_set_bones", false);
                  pSVar4 = *(StringName**)( this + 0xaa8 );
                  Variant::Variant((Variant*)local_d8, (NodePath*)&local_98);
                  local_88[0] = local_d8;
                  local_60 = 0;
                  local_58 = (undefined1[16])0x0;
                  EditorUndoRedoManager::add_undo_methodp(pOVar9, pSVar4, (Variant**)local_f0, (int)local_88);
                  if (Variant::needs_deinit[(int)local_60] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  Array::~Array((Array*)&local_98);
                  StringName::StringName((StringName*)&local_98, "_update_bone_list", false);
                  local_78 = 0;
                  local_70 = (undefined1[16])0x0;
                  EditorUndoRedoManager::add_do_methodp(pOVar9, (StringName*)this, (Variant**)&local_98, 0);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  StringName::StringName((StringName*)&local_98, "_update_bone_list", false);
                  local_78 = 0;
                  local_70 = (undefined1[16])0x0;
                  EditorUndoRedoManager::add_undo_methodp(pOVar9, (StringName*)this, (Variant**)&local_98, 0);
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  EditorUndoRedoManager::commit_action(SUB81(pOVar9, 0));
                  Array::~Array((Array*)local_b8);
                  Array::~Array((Array*)local_c0);
                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* Polygon2DEditor::_canvas_input(Ref<InputEvent> const&) */
               void Polygon2DEditor::_canvas_input(Polygon2DEditor *this, Ref *param_1) {
                  CowData<Color> *this_00;
                  float fVar1;
                  int *piVar2;
                  code *pcVar3;
                  ulong uVar4;
                  long lVar5;
                  char cVar6;
                  int iVar7;
                  undefined4 uVar8;
                  int iVar9;
                  EditorUndoRedoManager *this_01;
                  Object *pOVar10;
                  float *pfVar11;
                  long lVar12;
                  ulong uVar13;
                  ulong uVar14;
                  bool bVar15;
                  int iVar16;
                  long lVar17;
                  long lVar18;
                  int iVar19;
                  char *pcVar20;
                  long lVar21;
                  long in_FS_OFFSET;
                  bool bVar22;
                  float fVar23;
                  float fVar24;
                  float fVar25;
                  undefined8 uVar26;
                  double dVar27;
                  undefined8 extraout_XMM0_Qb;
                  undefined1 auVar28[16];
                  float fVar29;
                  float fVar30;
                  Vector<Vector2> *pVVar31;
                  Object *local_128;
                  CowData<Vector2> *local_110;
                  float local_100;
                  float local_f8;
                  Array local_c8[8];
                  long local_c0;
                  long local_b8;
                  long local_b0;
                  long local_a8;
                  long local_a0;
                  undefined8 local_98;
                  undefined8 local_90;
                  undefined8 local_88;
                  Vector<Vector2> *local_80;
                  undefined8 local_78;
                  undefined8 local_70;
                  float local_68;
                  float fStack_64;
                  undefined8 local_58;
                  undefined8 local_50;
                  undefined8 local_48;
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  if (*(code**)( *(long*)this + 0x370 ) == _get_node) {
                     lVar18 = *(long*)( this + 0xaa8 );
                  }
 else {
                     lVar18 = ( **(code**)( *(long*)this + 0x370 ) )();
                  }

                  if (lVar18 != 0) {
                     uVar26 = *(undefined8*)( this + 0xba0 );
                     Control::get_global_rect();
                     cVar6 = ViewPanner::gui_input(uVar26, param_1);
                     if (cVar6 != '\0') {
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Control::accept_event();
                           return;
                        }

                        goto LAB_0010d501;
                     }

                     fVar23 = *(float*)( this + 0xbb0 );
                     local_70 = 0x3f80000000000000;
                     local_78 = 0x3f800000;
                     fStack_64 = (float)( *(uint*)( this + 0xbac ) ^ _LC159 ) * fVar23;
                     local_68 = (float)( *(uint*)( this + 0xba8 ) ^ _LC159 ) * fVar23;
                     local_58 = CONCAT44(fVar23, fVar23);
                     Transform2D::scale_basis((Vector2*)&local_78);
                     this_01 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
                     lVar18 = *(long*)param_1;
                     if (lVar18 == 0) goto LAB_00109d0c;
                     local_128 = (Object*)__dynamic_cast(lVar18, &Object::typeinfo, &InputEventMouseButton::typeinfo);
                     if (local_128 == (Object*)0x0) goto LAB_00109c82;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        lVar18 = *(long*)param_1;
                        if (lVar18 == 0) goto LAB_00109d0c;
                        local_128 = (Object*)0x0;
                        goto LAB_00109c82;
                     }

                     iVar7 = InputEventMouseButton::get_button_index();
                     if (iVar7 != 1) {
                        iVar7 = InputEventMouseButton::get_button_index();
                        if (( iVar7 == 2 ) && ( cVar6 = cVar6 != '\0' )) {
                           _cancel_editing(this);
                           if (this[0xbf0] != (Polygon2DEditor)0x0) {
                              Polygon2D::set_bone_weights((int)*(undefined8*)( this + 0xaa8 ), (Vector*)( ulong ) * (uint*)( this + 0xbf4 ));
                           }

                           CanvasItem::queue_redraw();
                        }

                        goto LAB_00109d5e;
                     }

                     cVar6 = InputEvent::is_pressed();
                     bVar15 = SUB81(this_01, 0);
                     if (cVar6 == '\0') {
                        if (( this[0xc7c] != (Polygon2DEditor)0x0 ) && ( this[0xc7d] == (Polygon2DEditor)0x0 )) {
                           if (*(int*)( this + 0xac8 ) == 2) {
                              local_b8 = 0;
                              String::parse_latin1((String_conflict*)&local_b8, "");
                              local_c0 = 0;
                              String::parse_latin1((String_conflict*)&local_c0, "Transform UV Map");
                              TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                              EditorUndoRedoManager::create_action(this_01, (String_conflict*)&local_a8, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                              pcVar20 = "set_uv";
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              Polygon2D::get_uv();
                              LAB_0010c2be:StringName::StringName((StringName*)&local_b8, pcVar20, false);
                              EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, &local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              local_a0 = 0;
                              if (*(long*)( this + 0xc20 ) != 0) {
                                 CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc20 ));
                              }

                              StringName::StringName((StringName*)&local_b8, pcVar20, false);
                              EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              EditorUndoRedoManager::commit_action(bVar15);
                           }
 else if (( *(int*)( this + 0xac8 ) == 0 ) && ( *(int*)( this + 0xc90 ) - 3U < 4 )) {
                              local_b8 = 0;
                              String::parse_latin1((String_conflict*)&local_b8, "");
                              local_c0 = 0;
                              String::parse_latin1((String_conflict*)&local_c0, "Transform Polygon");
                              TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                              EditorUndoRedoManager::create_action(this_01, (String_conflict*)&local_a8, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                              pcVar20 = "set_polygon";
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              Polygon2D::get_polygon();
                              goto LAB_0010c2be;
                           }

                           this[0xc7c] = (Polygon2DEditor)0x0;
                        }

                        if (this[0xbf0] == (Polygon2DEditor)0x0) goto LAB_00109d5e;
                        local_b8 = 0;
                        String::parse_latin1((String_conflict*)&local_b8, "");
                        local_c0 = 0;
                        String::parse_latin1((String_conflict*)&local_c0, "Paint Bone Weights");
                        TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                        EditorUndoRedoManager::create_action(this_01, (String_conflict*)&local_a8, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        Polygon2D::get_bone_weights((int)(String_conflict*)&local_a8);
                        uVar8 = *(undefined4*)( this + 0xbf4 );
                        StringName::StringName((StringName*)&local_b8, "set_bone_weights", false);
                        EditorUndoRedoManager::add_do_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, uVar8, (String_conflict*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<float>::_unref((CowData<float>*)&local_a0);
                        local_a0 = 0;
                        if (*(long*)( this + 0xc00 ) != 0) {
                           CowData<float>::_ref((CowData<float>*)&local_a0, (CowData*)( this + 0xc00 ));
                        }

                        StringName::StringName((StringName*)&local_b8, "set_bone_weights", false);
                        EditorUndoRedoManager::add_undo_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<float>::_unref((CowData<float>*)&local_a0);
                        EditorUndoRedoManager::commit_action(bVar15);
                        this[0xbf0] = (Polygon2DEditor)0x0;
                        lVar18 = *(long*)param_1;
                        goto LAB_00109d66;
                     }

                     InputEventMouse::get_position();
                     uVar26 = snap_point(this);
                     this[0xc7c] = (Polygon2DEditor)0x1;
                     *(undefined8*)( this + 0xc94 ) = uVar26;
                     if (*(int*)( this + 0xac8 ) == 2) {
                        Polygon2D::get_uv();
                        if (*(long*)( this + 0xc20 ) != local_a0) goto LAB_0010a58e;
                     }
 else {
                        Polygon2D::get_polygon();
                        if (*(long*)( this + 0xc20 ) != local_a0) {
                           LAB_0010a58e:CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc20 ));
                           lVar18 = local_a0;
                           local_a0 = 0;
                           *(long*)( this + 0xc20 ) = lVar18;
                        }

                     }

                     CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                     iVar7 = *(int*)( this + 0xaf0 );
                     *(int*)( this + 0xc90 ) = iVar7;
                     if (iVar7 == 0) {
                        if (this[0xc7d] == (Polygon2DEditor)0x0) {
                           CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 0xc20 ), 0);
                           Transform2D::affine_inverse();
                           InputEventMouse::get_position();
                           uVar26 = snap_point(this);
                           fVar23 = (float)( (ulong)uVar26 >> 0x20 );
                           pVVar31 = (Vector<Vector2>*)CONCAT44((float)uVar26 * (float)( (ulong)local_58 >> 0x20 ) + (float)( (ulong)local_50 >> 0x20 ) * fVar23 + (float)( (ulong)local_48 >> 0x20 ), fVar23 * (float)local_50 + (float)local_58 * (float)uVar26 + (float)local_48);
                           Vector<Vector2>::push_back(pVVar31, this + 0xc18);
                           *(undefined2*)( this + 0xc7c ) = 0x101;
                           *(undefined4*)( this + 0xc78 ) = 0;
                           *(Vector<Vector2>**)( this + 0xc70 ) = pVVar31;
                           *(Vector<Vector2>**)( this + 0xc94 ) = pVVar31;
                           Polygon2D::get_uv();
                           if (*(long*)( this + 0xc30 ) != local_a0) {
                              CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc30 ));
                              lVar18 = local_a0;
                              local_a0 = 0;
                              *(long*)( this + 0xc30 ) = lVar18;
                           }

                           CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                           Polygon2D::get_polygon();
                           if (*(long*)( this + 0xc40 ) != local_a0) {
                              CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc40 ));
                              lVar18 = local_a0;
                              local_a0 = 0;
                              *(long*)( this + 0xc40 ) = lVar18;
                           }

                           CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                           uVar8 = Polygon2D::get_internal_vertex_count();
                           *(undefined4*)( this + 0xc58 ) = uVar8;
                           Polygon2D::get_vertex_colors();
                           if (*(long*)( this + 0xc50 ) != local_a0) {
                              CowData<Color>::_unref((CowData<Color>*)( this + 0xc50 ));
                              lVar18 = local_a0;
                              local_a0 = 0;
                              *(long*)( this + 0xc50 ) = lVar18;
                           }

                           CowData<Color>::_unref((CowData<Color>*)&local_a0);
                           StringName::StringName((StringName*)&local_b8, "_get_bones", false);
                           Object::call<>((StringName*)&local_58);
                           Variant::operator_cast_to_Array((Variant*)&local_a8);
                           Array::operator =((Array*)( this + 0xc60 ), (Array*)&local_a8);
                           Array::~Array((Array*)&local_a8);
                           if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                              StringName::unref();
                           }

                           Polygon2D::get_polygons();
                           Array::operator =((Array*)( this + 0xc68 ), (Array*)&local_a8);
                           Array::~Array((Array*)&local_a8);
                           local_a8 = 0;
                           AbstractPolygon2DEditor::disable_polygon_editing(SUB81(this, 0), (String_conflict*)0x0);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                           Polygon2D::set_polygon(*(Vector**)( this + 0xaa8 ));
                           Polygon2D::set_uv(*(Vector**)( this + 0xaa8 ));
                           Polygon2D::set_internal_vertex_count((int)*(undefined8*)( this + 0xaa8 ));
                           CanvasItem::queue_redraw();
                        }
 else {
                           Transform2D::affine_inverse();
                           InputEventMouse::get_position();
                           uVar26 = snap_point(this);
                           fVar23 = (float)( (ulong)uVar26 >> 0x20 );
                           local_80 = (Vector<Vector2>*)CONCAT44((float)( (ulong)local_58 >> 0x20 ) * (float)uVar26 + (float)( (ulong)local_50 >> 0x20 ) * fVar23 + (float)( (ulong)local_48 >> 0x20 ), (float)local_50 * fVar23 + (float)local_58 * (float)uVar26 + (float)local_48);
                           if (( ( *(long*)( this + 0xc20 ) == 0 ) || ( *(long*)( *(long*)( this + 0xc20 ) + -8 ) < 3 ) ) || ( fVar23 = (float)Vector2::distance_to((Vector2*)&local_80) ),_LC219 / *(float*)( this + 0xbb0 ) <= fVar23) {
                              Vector<Vector2>::push_back(local_80, this + 0xc18);
                              if (*(long*)( this + 0xc20 ) == 0) {
                                 iVar7 = 0;
                              }
 else {
                                 iVar7 = (int)*(undefined8*)( *(long*)( this + 0xc20 ) + -8 );
                              }

                              *(int*)( this + 0xc78 ) = iVar7 + -1;
                              *(Vector<Vector2>**)( this + 0xc94 ) = local_80;
                           }
 else {
                              local_b8 = 0;
                              String::parse_latin1((String_conflict*)&local_b8, "");
                              local_c0 = 0;
                              String::parse_latin1((String_conflict*)&local_c0, "Create Polygon & UV");
                              TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                              EditorUndoRedoManager::create_action(this_01, (Variant*)&local_a8, 0, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              Polygon2D::get_uv();
                              StringName::StringName((StringName*)&local_b8, "set_uv", false);
                              EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              local_a0 = 0;
                              if (*(long*)( this + 0xc30 ) != 0) {
                                 CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc30 ));
                              }

                              StringName::StringName((StringName*)&local_b8, "set_uv", false);
                              EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              Polygon2D::get_polygon();
                              StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                              EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              local_a0 = 0;
                              if (*(long*)( this + 0xc40 ) != 0) {
                                 CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc40 ));
                              }

                              StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                              EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                              StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                              EditorUndoRedoManager::add_do_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, 0);
                              if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                 StringName::unref();
                              }

                              iVar7 = *(int*)( this + 0xc58 );
                              StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                              EditorUndoRedoManager::add_undo_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, iVar7);
                              if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                 StringName::unref();
                              }

                              local_a0 = 0;
                              StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                              EditorUndoRedoManager::add_do_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Color>::_unref((CowData<Color>*)&local_a0);
                              local_a0 = 0;
                              if (*(long*)( this + 0xc50 ) != 0) {
                                 CowData<Color>::_ref((CowData<Color>*)&local_a0, (CowData*)( this + 0xc50 ));
                              }

                              StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                              EditorUndoRedoManager::add_undo_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              CowData<Color>::_unref((CowData<Color>*)&local_a0);
                              StringName::StringName((StringName*)&local_a8, "clear_bones", false);
                              EditorUndoRedoManager::add_do_method<>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                 StringName::unref();
                              }

                              Array::Array((Array*)&local_a8, (Array*)( this + 0xc60 ));
                              StringName::StringName((StringName*)&local_b8, "_set_bones", false);
                              EditorUndoRedoManager::add_undo_method<Array>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8);
                              if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                 StringName::unref();
                              }

                              Array::~Array((Array*)&local_a8);
                              StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                              EditorUndoRedoManager::add_do_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                 StringName::unref();
                              }

                              StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                              EditorUndoRedoManager::add_undo_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                              if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                 StringName::unref();
                              }

                              EditorUndoRedoManager::commit_action(bVar15);
                              *(undefined2*)( this + 0xc7c ) = 0;
                              _update_available_modes(this);
                              _set_action(this, 3);
                              ( **(code**)( *(long*)this + 0x368 ) )(this, 1);
                           }

                           Polygon2D::set_polygon(*(Vector**)( this + 0xaa8 ));
                           Polygon2D::set_uv(*(Vector**)( this + 0xaa8 ));
                        }

                        CanvasItemEditor::update_viewport();
                        iVar7 = *(int*)( this + 0xc90 );
                     }

                     iVar16 = (int)(Variant*)&local_a8;
                     if (iVar7 == 1) {
                        Polygon2D::get_uv();
                        if (*(long*)( this + 0xc30 ) != local_a0) {
                           CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc30 ));
                           lVar18 = local_a0;
                           local_a0 = 0;
                           *(long*)( this + 0xc30 ) = lVar18;
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        Polygon2D::get_polygon();
                        if (*(long*)( this + 0xc40 ) != local_a0) {
                           CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc40 ));
                           lVar18 = local_a0;
                           local_a0 = 0;
                           *(long*)( this + 0xc40 ) = lVar18;
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        Polygon2D::get_vertex_colors();
                        this_00 = (CowData<Color>*)( this + 0xc50 );
                        if (*(long*)( this + 0xc50 ) != local_a0) {
                           CowData<Color>::_unref(this_00);
                           lVar18 = local_a0;
                           local_a0 = 0;
                           *(long*)( this + 0xc50 ) = lVar18;
                        }

                        CowData<Color>::_unref((CowData<Color>*)&local_a0);
                        StringName::StringName((StringName*)&local_b8, "_get_bones", false);
                        Object::call<>((StringName*)&local_58);
                        Variant::operator_cast_to_Array((Variant*)&local_a8);
                        Array::operator =((Array*)( this + 0xc60 ), (Array*)&local_a8);
                        Array::~Array((Array*)&local_a8);
                        if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        iVar7 = Polygon2D::get_internal_vertex_count();
                        Transform2D::affine_inverse();
                        InputEventMouse::get_position();
                        uVar26 = snap_point(this);
                        fVar23 = (float)( (ulong)uVar26 >> 0x20 );
                        fVar24 = (float)local_50;
                        uVar13 = (ulong)local_50 >> 0x20;
                        fVar25 = (float)local_58;
                        uVar14 = (ulong)local_58 >> 0x20;
                        fVar29 = (float)local_48;
                        uVar4 = (ulong)local_48 >> 0x20;
                        Vector<Vector2>::push_back((Vector<Vector2>*)( this + 0xc38 ));
                        Vector<Vector2>::push_back((Vector<Vector2>*)CONCAT44(fVar23 * (float)uVar13 + (float)uVar26 * (float)uVar14 + (float)uVar4, fVar23 * fVar24 + (float)uVar26 * fVar25 + fVar29), this + 0xc28);
                        if (( *(long*)( this + 0xc50 ) != 0 ) && ( lVar18 = lVar18 != 0 )) {
                           iVar19 = CowData<Color>::resize<false>(this_00, lVar18 + 1);
                           if (iVar19 == 0) {
                              if (*(long*)( this + 0xc50 ) == 0) {
                                 lVar17 = -1;
                                 lVar18 = 0;
                              }
 else {
                                 lVar18 = *(long*)( *(long*)( this + 0xc50 ) + -8 );
                                 lVar17 = lVar18 + -1;
                                 if (-1 < lVar17) {
                                    CowData<Color>::_copy_on_write(this_00);
                                    fVar23 = _LC19;
                                    pfVar11 = (float*)( lVar17 * 0x10 + *(long*)( this + 0xc50 ) );
                                    *pfVar11 = _LC19;
                                    for (int i = 0; i < 3; i++) {
                                       pfVar11[( i + 1 )] = fVar23;
                                    }

                                    goto LAB_0010b366;
                                 }

                              }

                              _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar17, lVar18, "p_index", "size()", "", false, false);
                           }
 else {
                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true");
                           }

                        }

                        LAB_0010b366:local_b8 = 0;
                        String::parse_latin1((String_conflict*)&local_b8, "");
                        local_c0 = 0;
                        String::parse_latin1((String_conflict*)&local_c0, "Create Internal Vertex");
                        TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                        EditorUndoRedoManager::create_action(this_01, (Variant*)&local_a8, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        local_a0 = 0;
                        if (*(long*)( this + 0xc30 ) != 0) {
                           CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc30 ));
                        }

                        StringName::StringName((StringName*)&local_b8, "set_uv", false);
                        EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        Polygon2D::get_uv();
                        StringName::StringName((StringName*)&local_b8, "set_uv", false);
                        EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        local_a0 = 0;
                        if (*(long*)( this + 0xc40 ) != 0) {
                           CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc40 ));
                        }

                        StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                        EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        Polygon2D::get_polygon();
                        StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                        EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                        local_a0 = 0;
                        if (*(long*)( this + 0xc50 ) != 0) {
                           CowData<Color>::_ref((CowData<Color>*)&local_a0, (CowData*)this_00);
                        }

                        StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                        EditorUndoRedoManager::add_do_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Color>::_unref((CowData<Color>*)&local_a0);
                        Polygon2D::get_vertex_colors();
                        StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                        EditorUndoRedoManager::add_undo_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                           StringName::unref();
                        }

                        CowData<Color>::_unref((CowData<Color>*)&local_a0);
                        for (iVar19 = 0; iVar9 = Polygon2D::get_bone_count(),iVar19 < iVar9; iVar19 = iVar19 + 1) {
                           Polygon2D::get_bone_weights((int)(StringName*)&local_b8);
                           if (local_b0 == 0) {
                              lVar18 = 1;
                           }
 else {
                              lVar18 = *(long*)( local_b0 + -8 ) + 1;
                           }

                           iVar9 = CowData<float>::resize<false>((CowData<float>*)&local_b0, lVar18);
                           if (iVar9 == 0) {
                              if (local_b0 == 0) {
                                 lVar17 = -1;
                                 lVar18 = 0;
                              }
 else {
                                 lVar18 = *(long*)( local_b0 + -8 );
                                 lVar17 = lVar18 + -1;
                                 if (-1 < lVar17) {
                                    CowData<float>::_copy_on_write((CowData<float>*)&local_b0);
                                    *(undefined4*)( local_b0 + lVar17 * 4 ) = 0;
                                    goto LAB_0010b738;
                                 }

                              }

                              _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar17, lVar18, "p_index", "size()", "", false, false);
                           }
 else {
                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0);
                           }

                           LAB_0010b738:local_a0 = 0;
                           if (local_b0 != 0) {
                              CowData<float>::_ref((CowData<float>*)&local_a0, (CowData*)&local_b0);
                           }

                           StringName::StringName((StringName*)&local_c0, "set_bone_weights", false);
                           EditorUndoRedoManager::add_do_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_c0, iVar19, (Variant*)&local_a8);
                           if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                              StringName::unref();
                           }

                           CowData<float>::_unref((CowData<float>*)&local_a0);
                           Polygon2D::get_bone_weights(iVar16);
                           StringName::StringName((StringName*)&local_c0, "set_bone_weights", false);
                           EditorUndoRedoManager::add_undo_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_c0, iVar19);
                           if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                              StringName::unref();
                           }

                           CowData<float>::_unref((CowData<float>*)&local_a0);
                           CowData<float>::_unref((CowData<float>*)&local_b0);
                        }

                        StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                        EditorUndoRedoManager::add_do_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, iVar7 + 1);
                        if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                           StringName::unref();
                        }

                        StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                        EditorUndoRedoManager::add_undo_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, iVar7);
                        if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                           StringName::unref();
                        }

                        StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                        EditorUndoRedoManager::add_do_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                           StringName::unref();
                        }

                        StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                        EditorUndoRedoManager::add_undo_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                           StringName::unref();
                        }

                        EditorUndoRedoManager::commit_action(bVar15);
                        iVar7 = *(int*)( this + 0xc90 );
                     }

                     if (iVar7 != 2) goto LAB_0010a8e3;
                     Polygon2D::get_uv();
                     if (*(long*)( this + 0xc30 ) != local_a0) {
                        CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc30 ));
                        lVar18 = local_a0;
                        local_a0 = 0;
                        *(long*)( this + 0xc30 ) = lVar18;
                     }

                     CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                     Polygon2D::get_polygon();
                     if (*(long*)( this + 0xc40 ) != local_a0) {
                        CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xc40 ));
                        lVar18 = local_a0;
                        local_a0 = 0;
                        *(long*)( this + 0xc40 ) = lVar18;
                     }

                     CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                     Polygon2D::get_vertex_colors();
                     if (*(long*)( this + 0xc50 ) != local_a0) {
                        CowData<Color>::_unref((CowData<Color>*)( this + 0xc50 ));
                        lVar18 = local_a0;
                        local_a0 = 0;
                        *(long*)( this + 0xc50 ) = lVar18;
                     }

                     CowData<Color>::_unref((CowData<Color>*)&local_a0);
                     StringName::StringName((StringName*)&local_b8, "_get_bones", false);
                     Object::call<>((StringName*)&local_58);
                     Variant::operator_cast_to_Array((Variant*)&local_a8);
                     Array::operator =((Array*)( this + 0xc60 ), (Array*)&local_a8);
                     Array::~Array((Array*)&local_a8);
                     if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                        StringName::unref();
                     }

                     iVar7 = Polygon2D::get_internal_vertex_count();
                     if (iVar7 < 1) goto LAB_00109cfa;
                     if (*(long*)( this + 0xc20 ) == 0) {
                        lVar18 = *(long*)( this + 0xc40 );
                        lVar17 = (long)-iVar7;
                     }
 else {
                        lVar18 = *(long*)( *(long*)( this + 0xc20 ) + -8 );
                        iVar19 = (int)lVar18 - iVar7;
                        lVar17 = (long)iVar19;
                        if (lVar18 <= lVar17) goto LAB_00109cfa;
                        lVar18 = *(long*)( this + 0xc40 );
                        if (-1 < lVar17) {
                           iVar9 = -1;
                           local_f8 = _LC13;
                           while (lVar18 != 0) {
                              if (*(long*)( lVar18 + -8 ) <= lVar17) goto LAB_0010c211;
                              uVar26 = *(undefined8*)( lVar18 + lVar17 * 8 );
                              fVar23 = (float)uVar26;
                              fVar29 = (float)( (ulong)uVar26 >> 0x20 );
                              local_80 = (Vector<Vector2>*)CONCAT44((float)( (ulong)local_78 >> 0x20 ) * fVar23 + fVar29 * (float)( (ulong)local_70 >> 0x20 ) + fStack_64, (float)local_78 * fVar23 + fVar29 * (float)local_70 + local_68);
                              local_58 = InputEventMouse::get_position();
                              fVar23 = (float)Vector2::distance_to((Vector2*)&local_80);
                              if (( fVar23 < _LC219 ) && ( fVar23 < local_f8 )) {
                                 iVar9 = iVar19;
                                 local_f8 = fVar23;
                              }

                              lVar17 = lVar17 + 1;
                              if (( *(long*)( this + 0xc20 ) == 0 ) || ( iVar19 = (int)lVar17 * (long*)( *(long*)( this + 0xc20 ) + -8 ) <= lVar17 )) {
                                 if (iVar9 == -1) goto LAB_00109cfa;
                                 lVar18 = (long)iVar9;
                                 Vector<Vector2>::remove_at((Vector<Vector2>*)( this + 0xc38 ), lVar18);
                                 Vector<Vector2>::remove_at((Vector<Vector2>*)( this + 0xc28 ), lVar18);
                                 if (( *(long*)( this + 0xc50 ) != 0 ) && ( *(long*)( *(long*)( this + 0xc50 ) + -8 ) != 0 )) {
                                    Vector<Color>::remove_at((Vector<Color>*)( this + 0xc48 ), lVar18);
                                 }

                                 local_b8 = 0;
                                 String::parse_latin1((String_conflict*)&local_b8, "");
                                 local_c0 = 0;
                                 String::parse_latin1((String_conflict*)&local_c0, "Remove Internal Vertex");
                                 TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                                 EditorUndoRedoManager::create_action(this_01, (Variant*)&local_a8, 0, 0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                                 local_a0 = 0;
                                 if (*(long*)( this + 0xc30 ) != 0) {
                                    CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc30 ));
                                 }

                                 StringName::StringName((StringName*)&local_b8, "set_uv", false);
                                 EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                 Polygon2D::get_uv();
                                 StringName::StringName((StringName*)&local_b8, "set_uv", false);
                                 EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                 local_a0 = 0;
                                 if (*(long*)( this + 0xc40 ) != 0) {
                                    CowData<Vector2>::_ref((CowData<Vector2>*)&local_a0, (CowData*)( this + 0xc40 ));
                                 }

                                 StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                                 EditorUndoRedoManager::add_do_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                 Polygon2D::get_polygon();
                                 StringName::StringName((StringName*)&local_b8, "set_polygon", false);
                                 EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                 local_a0 = 0;
                                 if (*(long*)( this + 0xc50 ) != 0) {
                                    CowData<Color>::_ref((CowData<Color>*)&local_a0, (CowData*)( this + 0xc50 ));
                                 }

                                 StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                                 EditorUndoRedoManager::add_do_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 CowData<Color>::_unref((CowData<Color>*)&local_a0);
                                 Polygon2D::get_vertex_colors();
                                 StringName::StringName((StringName*)&local_b8, "set_vertex_colors", false);
                                 EditorUndoRedoManager::add_undo_method<Vector<Color>>(this_01, *(undefined8*)( this + 0xaa8 ), (StringName*)&local_b8, (Variant*)&local_a8);
                                 if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                    StringName::unref();
                                 }

                                 iVar19 = 0;
                                 CowData<Color>::_unref((CowData<Color>*)&local_a0);
                                 goto LAB_0010d069;
                              }

                              lVar18 = *(long*)( this + 0xc40 );
                           }
;
                           lVar18 = 0;
                           goto LAB_0010a3bd;
                        }

                     }

                     if (lVar18 != 0) {
                        LAB_0010c211:lVar18 = *(long*)( lVar18 + -8 );
                        goto LAB_0010a3bd;
                     }

                     goto LAB_0010c023;
                  }

                  goto LAB_00109d0c;
                  LAB_0010d069:iVar9 = Polygon2D::get_bone_count();
                  if (iVar9 <= iVar19) goto code_r0x0010d07e;
                  Polygon2D::get_bone_weights((int)(StringName*)&local_b8);
                  if (lVar18 < 0) {
                     if (local_b0 == 0) goto LAB_0010d2f1;
                     LAB_0010d2a5:lVar17 = *(long*)( local_b0 + -8 );
                     LAB_0010d2a9:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar18, lVar17, "p_index", "size()", "", false, false);
                  }
 else {
                     if (local_b0 == 0) {
                        LAB_0010d2f1:lVar17 = 0;
                        goto LAB_0010d2a9;
                     }

                     if (*(long*)( local_b0 + -8 ) <= lVar18) goto LAB_0010d2a5;
                     CowData<float>::_copy_on_write((CowData<float>*)&local_b0);
                     if (local_b0 == 0) {
                        lVar17 = -1;
                     }
 else {
                        lVar17 = *(long*)( local_b0 + -8 ) + -1;
                        if (lVar18 < lVar17) {
                           memmove((void*)( local_b0 + lVar18 * 4 ), (void*)( local_b0 + lVar18 * 4 + 4 ), ( lVar17 - lVar18 ) * 4);
                        }

                     }

                     CowData<float>::resize<false>((CowData<float>*)&local_b0, lVar17);
                  }

                  local_a0 = 0;
                  if (local_b0 != 0) {
                     CowData<float>::_ref((CowData<float>*)&local_a0, (CowData*)&local_b0);
                  }

                  StringName::StringName((StringName*)&local_c0, "set_bone_weights", false);
                  EditorUndoRedoManager::add_do_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_c0, iVar19, (Variant*)&local_a8);
                  if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                     StringName::unref();
                  }

                  CowData<float>::_unref((CowData<float>*)&local_a0);
                  Polygon2D::get_bone_weights(iVar16);
                  StringName::StringName((StringName*)&local_c0, "set_bone_weights", false);
                  EditorUndoRedoManager::add_undo_method<int,Vector<float>>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_c0);
                  if (( StringName::configured != '\0' ) && ( local_c0 != 0 )) {
                     StringName::unref();
                  }

                  iVar19 = iVar19 + 1;
                  CowData<float>::_unref((CowData<float>*)&local_a0);
                  CowData<float>::_unref((CowData<float>*)&local_b0);
                  goto LAB_0010d069;
                  LAB_0010a39f:lVar18 = 0;
                  goto LAB_0010a3bd;
                  code_r0x0010d07e:StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                  EditorUndoRedoManager::add_do_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, iVar7 + -1);
                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  StringName::StringName((StringName*)&local_a8, "set_internal_vertex_count", false);
                  EditorUndoRedoManager::add_undo_method<int>(this_01, *(Object**)( this + 0xaa8 ), (StringName*)&local_a8, iVar7);
                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                  EditorUndoRedoManager::add_do_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  StringName::StringName((StringName*)&local_a8, "_update_polygon_editing_state", false);
                  EditorUndoRedoManager::add_undo_method<>(this_01, (Object*)this, (StringName*)&local_a8);
                  if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                     StringName::unref();
                  }

                  EditorUndoRedoManager::commit_action(bVar15);
                  iVar7 = *(int*)( this + 0xc90 );
                  LAB_0010a8e3:if (iVar7 != 3) goto LAB_0010a8ec;
                  cVar6 = InputEventWithModifiers::is_shift_pressed();
                  if (( cVar6 == '\0' ) || ( cVar6 = InputEventWithModifiers::is_command_or_control_pressed() ),cVar6 == '\0') {
                     cVar6 = InputEventWithModifiers::is_shift_pressed();
                     uVar8 = 4;
                     if (cVar6 != '\0') goto LAB_0010bb52;
                     cVar6 = InputEventWithModifiers::is_command_or_control_pressed();
                     if (cVar6 != '\0') {
                        uVar8 = 5;
                        goto LAB_0010bb52;
                     }

                     iVar7 = *(int*)( this + 0xc90 );
                     if (iVar7 == 3) {
                        lVar18 = *(long*)( this + 0xc20 );
                        lVar17 = 0;
                        *(undefined4*)( this + 0xc78 ) = 0xffffffff;
                        if (lVar18 != 0) {
                           do {
                              if (*(long*)( lVar18 + -8 ) <= lVar17) break;
                              uVar26 = *(undefined8*)( lVar18 + lVar17 * 8 );
                              fVar23 = (float)uVar26;
                              fVar29 = (float)( (ulong)uVar26 >> 0x20 );
                              local_80 = (Vector<Vector2>*)CONCAT44((float)( (ulong)local_78 >> 0x20 ) * fVar23 + fVar29 * (float)( (ulong)local_70 >> 0x20 ) + fStack_64, (float)local_78 * fVar23 + fVar29 * (float)local_70 + local_68);
                              local_58 = InputEventMouse::get_position();
                              fVar23 = (float)Vector2::distance_to((Vector2*)&local_80);
                              if (fVar23 < _LC219) {
                                 *(int*)( this + 0xc78 ) = (int)lVar17;
                                 *(Vector<Vector2>**)( this + 0xc94 ) = local_80;
                              }

                              lVar18 = *(long*)( this + 0xc20 );
                              lVar17 = lVar17 + 1;
                           }
 while ( lVar18 != 0 );
                           iVar7 = *(int*)( this + 0xc90 );
                           if (*(int*)( this + 0xc78 ) != -1) goto LAB_0010a8ec;
                        }

                        this[0xc7c] = (Polygon2DEditor)0x0;
                     }

                     LAB_0010a8ec:bVar22 = SUB81((Variant*)&local_a8, 0);
                     if (iVar7 == 7) {
                        lVar18 = *(long*)( this + 0xc20 );
                        if (lVar18 != 0) {
                           uVar13 = 0;
                           uVar14 = 0xffffffff;
                           local_100 = _LC13;
                           do {
                              iVar7 = (int)uVar14;
                              if (*(long*)( lVar18 + -8 ) <= (long)uVar13) break;
                              uVar26 = *(undefined8*)( lVar18 + uVar13 * 8 );
                              fVar23 = (float)uVar26;
                              fVar29 = (float)( (ulong)uVar26 >> 0x20 );
                              local_80 = (Vector<Vector2>*)CONCAT44((float)( (ulong)local_78 >> 0x20 ) * fVar23 + fVar29 * (float)( (ulong)local_70 >> 0x20 ) + fStack_64, (float)local_78 * fVar23 + fVar29 * (float)local_70 + local_68);
                              local_58 = InputEventMouse::get_position();
                              auVar28._0_8_ = Vector2::distance_to((Vector2*)&local_80);
                              auVar28._8_8_ = extraout_XMM0_Qb;
                              if ((float)auVar28._0_8_ < _LC219) {
                                 if (local_100 <= (float)auVar28._0_8_) {
                                    auVar28._0_4_ = local_100;
                                 }
 else {
                                    uVar14 = uVar13 & 0xffffffff;
                                 }

                                 local_100 = auVar28._0_4_;
                              }

                              iVar7 = (int)uVar14;
                              lVar18 = *(long*)( this + 0xc20 );
                              uVar13 = uVar13 + 1;
                           }
 while ( lVar18 != 0 );
                           if (iVar7 != -1) {
                              piVar2 = *(int**)( this + 0xc88 );
                              if (piVar2 == (int*)0x0) {
                                 lVar18 = 0;
                              }
 else {
                                 lVar18 = *(long*)( piVar2 + -2 );
                                 if (lVar18 != 0) {
                                    if (lVar18 < 1) {
                                       lVar17 = 0;
                                       goto LAB_0010a3bd;
                                    }

                                    lVar17 = 0;
                                    if (*piVar2 == iVar7) {
                                       if (lVar18 < 3) {
                                          uVar26 = *(undefined8*)( this + 0xca0 );
                                          local_b8 = 0;
                                          String::parse_latin1((String_conflict*)&local_b8, "");
                                          local_c0 = 0;
                                          String::parse_latin1((String_conflict*)&local_c0, "Invalid Polygon (need 3 different vertices)");
                                          TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                                          AcceptDialog::set_text(uVar26, (Variant*)&local_a8);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                                          local_58 = 0;
                                          Window::popup_centered(*(Vector2i**)( this + 0xca0 ));
                                       }
 else {
                                          Polygon2D::get_polygons();
                                          Array::duplicate(bVar22);
                                          Array::operator =(local_c8, (Array*)&local_a8);
                                          Array::~Array((Array*)&local_a8);
                                          Variant::Variant((Variant*)&local_58, (Vector*)( this + 0xc80 ));
                                          Array::push_back((Variant*)local_c8);
                                          if (Variant::needs_deinit[(int)(float)local_58] != '\0') {
                                             Variant::_clear_internal();
                                          }

                                          local_b8 = 0;
                                          String::parse_latin1((String_conflict*)&local_b8, "");
                                          local_c0 = 0;
                                          String::parse_latin1((String_conflict*)&local_c0, "Add Custom Polygon");
                                          TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                                          EditorUndoRedoManager::create_action(this_01, (Variant*)&local_a8, 0, 0);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                                          CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                                          Array::Array((Array*)&local_a8, local_c8);
                                          StringName::StringName((StringName*)&local_b8, "set_polygons", false);
                                          EditorUndoRedoManager::add_do_method<Array>(this_01, *(undefined8*)( this + 0xaa8 ), (String_conflict*)&local_b8, (Variant*)&local_a8);
                                          if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                             StringName::unref();
                                          }

                                          Array::~Array((Array*)&local_a8);
                                          Polygon2D::get_polygons();
                                          StringName::StringName((StringName*)&local_a8, "set_polygons", false);
                                          EditorUndoRedoManager::add_undo_method<Array>(this_01, *(undefined8*)( this + 0xaa8 ), (Variant*)&local_a8);
                                          if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                             StringName::unref();
                                          }

                                          Array::~Array((Array*)&local_b8);
                                          EditorUndoRedoManager::commit_action(bVar15);
                                          Array::~Array(local_c8);
                                       }

                                       CowData<int>::resize<false>((CowData<int>*)( this + 0xc88 ), 0);
                                       iVar7 = *(int*)( this + 0xc90 );
                                       goto LAB_0010a8f5;
                                    }

                                    do {
                                       if (piVar2[lVar17] == iVar7) goto LAB_0010b982;
                                       lVar17 = lVar17 + 1;
                                    }
 while ( lVar18 != lVar17 );
                                 }

                              }

                              iVar19 = CowData<int>::resize<false>((CowData<int>*)( this + 0xc88 ), lVar18 + 1);
                              if (iVar19 == 0) {
                                 if (*(long*)( this + 0xc88 ) == 0) {
                                    lVar17 = -1;
                                    lVar18 = 0;
                                 }
 else {
                                    lVar18 = *(long*)( *(long*)( this + 0xc88 ) + -8 );
                                    lVar17 = lVar18 + -1;
                                    if (-1 < lVar17) {
                                       CowData<int>::_copy_on_write((CowData<int>*)( this + 0xc88 ));
                                       *(int*)( *(long*)( this + 0xc88 ) + lVar17 * 4 ) = iVar7;
                                       iVar7 = *(int*)( this + 0xc90 );
                                       goto LAB_0010a8f5;
                                    }

                                 }

                                 _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar17, lVar18, "p_index", "size()", "", false, false);
                                 iVar7 = *(int*)( this + 0xc90 );
                                 goto LAB_0010a8f5;
                              }

                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                           }

                           LAB_0010b982:iVar7 = *(int*)( this + 0xc90 );
                           goto LAB_0010a8f5;
                        }

                     }
 else {
                        LAB_0010a8f5:if (iVar7 == 8) {
                           Polygon2D::get_polygons();
                           Array::duplicate(bVar22);
                           Array::operator =(local_c8, (Array*)&local_a8);
                           Array::~Array((Array*)&local_a8);
                           iVar7 = Array::size();
                           iVar7 = iVar7 + -1;
                           if (-1 < iVar7) {
                              do {
                                 iVar19 = (int)local_c8;
                                 Array::operator [](iVar19);
                                 Variant::operator_cast_to_Vector((Variant*)&local_b8);
                                 local_a0 = 0;
                                 if (local_b0 == 0) {
                                    lVar18 = 0;
                                 }
 else {
                                    lVar18 = *(long*)( local_b0 + -8 );
                                 }

                                 CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_a0, lVar18);
                                 lVar12 = local_a0;
                                 for (lVar17 = 0; ( lVar12 != 0 && ( lVar17 < *(long*)( lVar12 + -8 ) ) ); lVar17 = lVar17 + 1) {
                                    if (local_b0 == 0) {
                                       lVar18 = 0;
                                       goto LAB_0010a3bd;
                                    }

                                    lVar18 = *(long*)( local_b0 + -8 );
                                    if (lVar18 <= lVar17) goto LAB_0010a3bd;
                                    iVar9 = *(int*)( local_b0 + lVar17 * 4 );
                                    if (( ( -1 < iVar9 ) && ( lVar18 = *(long*)( this + 0xc20 ) ),lVar18 != 0 )) {
                                       uVar26 = *(undefined8*)( lVar18 + (long)iVar9 * 8 );
                                       fVar23 = (float)uVar26;
                                       fVar29 = (float)( (ulong)uVar26 >> 0x20 );
                                       fVar24 = local_68 + fVar29 * (float)local_70 + fVar23 * (float)local_78;
                                       fVar23 = fStack_64 + fVar29 * (float)( (ulong)local_70 >> 0x20 ) + fVar23 * (float)( (ulong)local_78 >> 0x20 );
                                       CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_a0);
                                       *(ulong*)( local_a0 + lVar17 * 8 ) = CONCAT44(fVar23, fVar24);
                                       lVar12 = local_a0;
                                    }

                                 }

                                 local_58 = InputEventMouse::get_position();
                                 cVar6 = Geometry2D::is_point_in_polygon((StringName*)&local_58, (Vector*)&local_a8);
                                 if (cVar6 != '\0') {
                                    CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                    CowData<int>::_unref((CowData<int>*)&local_b0);
                                    Array::remove_at(iVar19);
                                    local_b8 = 0;
                                    String::parse_latin1((String_conflict*)&local_b8, "");
                                    local_c0 = 0;
                                    String::parse_latin1((String_conflict*)&local_c0, "Remove Custom Polygon");
                                    TTR((String_conflict*)&local_a8, (String_conflict*)&local_c0);
                                    EditorUndoRedoManager::create_action(this_01, (Variant*)&local_a8, 0, 0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                                    Array::Array((Array*)&local_a8, local_c8);
                                    StringName::StringName((StringName*)&local_b8, "set_polygons", false);
                                    EditorUndoRedoManager::add_do_method<Array>(this_01, *(undefined8*)( this + 0xaa8 ), (Variant*)&local_b8, (Variant*)&local_a8);
                                    if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
                                       StringName::unref();
                                    }

                                    Array::~Array((Array*)&local_a8);
                                    Polygon2D::get_polygons();
                                    StringName::StringName((StringName*)&local_a8, "set_polygons", false);
                                    EditorUndoRedoManager::add_undo_method<Array>(this_01, *(undefined8*)( this + 0xaa8 ), (Variant*)&local_a8);
                                    if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
                                       StringName::unref();
                                    }

                                    Array::~Array((Array*)&local_b8);
                                    EditorUndoRedoManager::commit_action(bVar15);
                                    break;
                                 }

                                 CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                                 CowData<int>::_unref((CowData<int>*)&local_b0);
                                 bVar22 = iVar7 != 0;
                                 iVar7 = iVar7 + -1;
                              }
 while ( bVar22 );
                           }

                           Array::~Array(local_c8);
                           iVar7 = *(int*)( this + 0xc90 );
                        }

                        iVar19 = 0;
                        if (iVar7 - 9U < 2) {
                           for (; iVar7 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xbc8 ), 0)),iVar19 < iVar7; iVar19 = iVar19 + 1) {
                              lVar18 = Node::get_child((int)*(undefined8*)( this + 0xbc8 ), SUB41(iVar19, 0));
                              if (( ( lVar18 != 0 ) && ( lVar18 = __dynamic_cast(lVar18, &Object::typeinfo, &CheckBox::typeinfo) ),lVar18 != 0 )) {
                                 Polygon2D::get_bone_weights(iVar16);
                                 if (local_a0 == 0) {
                                    lVar18 = *(long*)( this + 0xc20 );
                                    if (lVar18 != 0) {
                                       lVar17 = 0;
                                       goto LAB_0010a9a9;
                                    }

                                 }
 else {
                                    lVar17 = *(long*)( local_a0 + -8 );
                                    lVar18 = *(long*)( this + 0xc20 );
                                    if (lVar18 == 0) {
                                       lVar18 = 0;
                                    }
 else {
                                       LAB_0010a9a9:lVar18 = *(long*)( lVar18 + -8 );
                                    }

                                    if (lVar17 != lVar18) {
                                       CowData<float>::_unref((CowData<float>*)&local_a0);
                                       lVar18 = *(long*)param_1;
                                       goto LAB_00109d66;
                                    }

                                 }

                                 CowData<float>::_unref((CowData<float>*)&local_a0);
                                 Polygon2D::get_bone_weights(iVar16);
                                 if (*(long*)( this + 0xc00 ) != local_a0) {
                                    CowData<float>::_unref((CowData<float>*)( this + 0xc00 ));
                                    lVar18 = local_a0;
                                    local_a0 = 0;
                                    *(long*)( this + 0xc00 ) = lVar18;
                                 }

                                 CowData<float>::_unref((CowData<float>*)&local_a0);
                                 *(int*)( this + 0xbf4 ) = iVar19;
                                 this[0xbf0] = (Polygon2DEditor)0x1;
                                 lVar18 = *(long*)param_1;
                                 goto LAB_00109d66;
                              }

                           }

                        }

                     }

                  }
 else {
                     uVar8 = 6;
                     LAB_0010bb52:*(undefined4*)( this + 0xc90 ) = uVar8;
                  }

                  LAB_00109d5e:lVar18 = *(long*)param_1;
                  LAB_00109d66:if (lVar18 == 0) goto LAB_00109cfa;
                  LAB_00109c82:pOVar10 = (Object*)__dynamic_cast(lVar18, &Object::typeinfo, &InputEventMouseMotion::typeinfo);
                  if (( pOVar10 == (Object*)0x0 ) || ( cVar6 = cVar6 == '\0' )) goto LAB_00109cf2;
                  if (this[0xc7c] == (Polygon2DEditor)0x0) {
                     if (( *(long*)( this + 0xc88 ) == 0 ) || ( *(long*)( *(long*)( this + 0xc88 ) + -8 ) == 0 )) {
                        if (*(int*)( this + 0xaf0 ) - 9U < 2) {
                           uVar26 = InputEventMouse::get_position();
                           *(undefined8*)( this + 0xc08 ) = uVar26;
                           CanvasItem::queue_redraw();
                        }

                     }
 else {
                        Transform2D::affine_inverse();
                        uVar26 = InputEventMouse::get_position();
                        fVar23 = (float)( (ulong)uVar26 >> 0x20 );
                        *(ulong*)( this + 0xc70 ) = CONCAT44(fVar23 * (float)( (ulong)local_50 >> 0x20 ) + (float)uVar26 * (float)( (ulong)local_58 >> 0x20 ) + (float)( (ulong)local_48 >> 0x20 ), fVar23 * (float)local_50 + (float)uVar26 * (float)local_58 + (float)local_48);
                        CanvasItem::queue_redraw();
                     }

                     cVar6 = RefCounted::unreference();
                     if (cVar6 == '\0') goto LAB_00109cf2;
                     goto LAB_00109e10;
                  }

                  local_98 = InputEventMouse::get_position();
                  local_98 = snap_point(this);
                  Transform2D::affine_inverse();
                  uVar26 = *(undefined8*)( this + 0xc94 );
                  fVar29 = (float)local_98 - (float)uVar26;
                  fVar23 = ( local_98._4_4_ - *(float*)( this + 0xc98 ) ) * (float)local_50 + fVar29 * (float)local_58;
                  fVar29 = ( local_98._4_4_ - *(float*)( this + 0xc98 ) ) * (float)( (ulong)local_50 >> 0x20 ) + fVar29 * (float)( (ulong)local_58 >> 0x20 );
                  switch (*(undefined4*)( this + 0xc90 )) {
                     case 0:
    if (this[0xc7d] != (Polygon2DEditor)0x0) {
      Transform2D::affine_inverse();
      InputEventMouse::get_position();
      uVar26 = snap_point(this);
      fVar23 = (float)((ulong)uVar26 >> 0x20);
      *(ulong *)(this + 0xc70) =
           CONCAT44(fVar23 * (float)((ulong)local_50 >> 0x20) +
                    (float)uVar26 * (float)((ulong)local_58 >> 0x20) +
                    (float)((ulong)local_48 >> 0x20),
                    fVar23 * (float)local_50 + (float)uVar26 * (float)local_58 + (float)local_48);
    }
    break;
                     case 3:
    local_a0 = 0;
    if (*(long *)(this + 0xc20) == 0) {
      lVar17 = (long)*(int *)(this + 0xc78);
      lVar18 = 0;
      goto LAB_0010a3bd;
    }
    CowData<Vector2>::_ref((CowData<Vector2> *)&local_a0,(CowData *)(this + 0xc20));
    lVar17 = (long)*(int *)(this + 0xc78);
    if (lVar17 < 0) {
      if (local_a0 != 0) goto LAB_0010c3f1;
    }
    else if (local_a0 != 0) {
      if (lVar17 < *(long *)(local_a0 + -8)) {
        uVar26 = *(undefined8 *)(local_a0 + lVar17 * 8);
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
        *(ulong *)(local_a0 + lVar17 * 8) =
             CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar29,(float)uVar26 + fVar23);
        if (*(int *)(this + 0xac8) == 2) {
          Polygon2D::set_uv(*(Vector **)(this + 0xaa8));
        }
        else if (*(int *)(this + 0xac8) == 0) {
          Polygon2D::set_polygon(*(Vector **)(this + 0xaa8));
        }
        goto LAB_00109fc5;
      }
LAB_0010c3f1:
      lVar18 = *(long *)(local_a0 + -8);
      goto LAB_0010a3bd;
    }
LAB_0010c023:
    lVar18 = 0;
LAB_0010a3bd:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar18,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
                     case 4:
    local_a0 = 0;
    if (*(long *)(this + 0xc20) != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)&local_a0,(CowData *)(this + 0xc20));
      if (local_a0 != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(local_a0 + -8) <= lVar18) break;
          uVar26 = *(undefined8 *)(local_a0 + lVar18 * 8);
          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
          *(ulong *)(local_a0 + lVar18 * 8) =
               CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar29,(float)uVar26 + fVar23);
          lVar18 = lVar18 + 1;
        } while (local_a0 != 0);
      }
    }
LAB_00109fad:
    if (*(int *)(this + 0xac8) == 2) {
      Polygon2D::set_uv(*(Vector **)(this + 0xaa8));
    }
    else if (*(int *)(this + 0xac8) == 0) {
      Polygon2D::set_polygon(*(Vector **)(this + 0xaa8));
    }
    goto LAB_00109fc5;
                     case 5:
    local_a0 = 0;
    if (*(long *)(this + 0xc20) == 0) {
      fVar24 = 0.0;
      fVar29 = 0.0;
      fVar23 = 0.0;
    }
    else {
      CowData<Vector2>::_ref((CowData<Vector2> *)&local_a0,(CowData *)(this + 0xc20));
      if (local_a0 == 0) {
        uVar26 = *(undefined8 *)(this + 0xc94);
        fVar24 = 0.0;
        fVar29 = 0.0;
        fVar23 = 0.0;
      }
      else {
        fVar29 = 0.0;
        fVar23 = 0.0;
        for (lVar17 = 0; lVar17 < *(long *)(local_a0 + -8); lVar17 = lVar17 + 1) {
          lVar12 = *(long *)(this + 0xc20);
          if (lVar12 == 0) goto LAB_0010a39f;
          lVar18 = *(long *)(lVar12 + -8);
          if (lVar18 <= lVar17) goto LAB_0010a3bd;
          pfVar11 = (float *)(lVar12 + lVar17 * 8);
          fVar29 = fVar29 + *pfVar11;
          fVar23 = fVar23 + pfVar11[1];
        }
        uVar26 = *(undefined8 *)(this + 0xc94);
        fVar24 = (float)*(long *)(local_a0 + -8);
      }
    }
    fVar29 = fVar29 / fVar24;
    fVar23 = fVar23 / fVar24;
    local_90 = CONCAT44((float)((ulong)uVar26 >> 0x20) -
                        ((float)((ulong)local_70 >> 0x20) * fVar23 +
                         (float)((ulong)local_78 >> 0x20) * fVar29 + fStack_64),
                        (float)uVar26 -
                        ((float)local_70 * fVar23 + (float)local_78 * fVar29 + local_68));
    local_80 = (Vector<Vector2> *)Vector2::normalized();
    local_88 = CONCAT44((float)((ulong)local_98 >> 0x20) -
                        (fVar29 * (float)((ulong)local_78 >> 0x20) +
                         fVar23 * (float)((ulong)local_70 >> 0x20) + fStack_64),
                        (float)local_98 -
                        (fVar29 * (float)local_78 + fVar23 * (float)local_70 + local_68));
    local_58 = Vector2::normalized();
    fVar24 = (float)Vector2::angle_to((Vector2 *)&local_80);
    for (lVar17 = 0; (local_a0 != 0 && (lVar17 < *(long *)(local_a0 + -8))); lVar17 = lVar17 + 1) {
      lVar12 = *(long *)(this + 0xc20);
      if (lVar12 == 0) goto LAB_0010c023;
      lVar18 = *(long *)(lVar12 + -8);
      if (lVar18 <= lVar17) goto LAB_0010a3bd;
      pfVar11 = (float *)(lVar12 + lVar17 * 8);
      local_58 = CONCAT44(pfVar11[1] - fVar23,*pfVar11 - fVar29);
      uVar26 = Vector2::rotated(fVar24);
      local_58._0_4_ = (float)uVar26;
      fVar30 = fVar29 + (float)local_58;
      local_58._4_4_ = (float)((ulong)uVar26 >> 0x20);
      fVar25 = fVar23 + local_58._4_4_;
      local_58 = uVar26;
      if (local_a0 == 0) {
        lVar18 = 0;
LAB_0010c3a1:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar18,"p_index","size()","",false
                   ,false);
      }
      else {
        lVar18 = *(long *)(local_a0 + -8);
        if (lVar18 <= lVar17) goto LAB_0010c3a1;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
        pfVar11 = (float *)(lVar17 * 8 + local_a0);
        *pfVar11 = fVar30;
        pfVar11[1] = fVar25;
      }
    }
    if (*(int *)(this + 0xac8) == 2) {
      Polygon2D::set_uv(*(Vector **)(this + 0xaa8));
    }
    else if (*(int *)(this + 0xac8) == 0) {
      Polygon2D::set_polygon(*(Vector **)(this + 0xaa8));
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    break;
                     case 6:
    local_a0 = 0;
    if ((*(long *)(this + 0xc20) == 0) ||
       (CowData<Vector2>::_ref((CowData<Vector2> *)&local_a0,(CowData *)(this + 0xc20)),
       local_a0 == 0)) {
      fVar24 = 0.0;
      fVar29 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar29 = 0.0;
      fVar23 = 0.0;
      for (lVar17 = 0; lVar17 < *(long *)(local_a0 + -8); lVar17 = lVar17 + 1) {
        lVar12 = *(long *)(this + 0xc20);
        if (lVar12 == 0) goto LAB_0010a39f;
        lVar18 = *(long *)(lVar12 + -8);
        if (lVar18 <= lVar17) goto LAB_0010a3bd;
        pfVar11 = (float *)(lVar12 + lVar17 * 8);
        fVar29 = fVar29 + *pfVar11;
        fVar23 = fVar23 + pfVar11[1];
      }
      fVar24 = (float)*(long *)(local_a0 + -8);
    }
    fVar29 = fVar29 / fVar24;
    fVar23 = fVar23 / fVar24;
    local_58 = CONCAT44((float)((ulong)local_78 >> 0x20) * fVar29 +
                        (float)((ulong)local_70 >> 0x20) * fVar23 + fStack_64,
                        (float)local_78 * fVar29 + (float)local_70 * fVar23 + local_68);
    fVar24 = (float)Vector2::distance_to(this + 0xc94);
    local_58 = CONCAT44(fVar29 * (float)((ulong)local_78 >> 0x20) +
                        fVar23 * (float)((ulong)local_70 >> 0x20) + fStack_64,
                        fVar29 * (float)local_78 + fVar23 * (float)local_70 + local_68);
    fVar25 = (float)Vector2::distance_to((Vector2 *)&local_98);
    if (_LC193 <= fVar24) {
      for (lVar17 = 0; (local_a0 != 0 && (lVar17 < *(long *)(local_a0 + -8))); lVar17 = lVar17 + 1)
      {
        lVar12 = *(long *)(this + 0xc20);
        if (lVar12 == 0) {
          lVar18 = 0;
          goto LAB_0010a3bd;
        }
        lVar18 = *(long *)(lVar12 + -8);
        if (lVar18 <= lVar17) goto LAB_0010a3bd;
        pfVar11 = (float *)(lVar12 + lVar17 * 8);
        fVar30 = pfVar11[1];
        fVar1 = *pfVar11;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
        pfVar11 = (float *)(lVar17 * 8 + local_a0);
        *pfVar11 = (fVar1 - fVar29) * (fVar25 / fVar24) + fVar29;
        pfVar11[1] = (fVar30 - fVar23) * (fVar25 / fVar24) + fVar23;
      }
      goto LAB_00109fad;
    }
LAB_00109fc5:
    local_110 = (CowData<Vector2> *)&local_a0;
    CowData<Vector2>::_unref(local_110);
    break;
                     case 9:
                     case 10:
    uVar26 = InputEventMouse::get_position();
    *(undefined8 *)(this + 0xc08) = uVar26;
                  }

                  if (this[0xbf0] != (Polygon2DEditor)0x0) {
                     Polygon2D::get_bone_weights((int)&local_a8);
                     if (local_a0 == 0) {
                        lVar18 = 0;
                     }
 else {
                        lVar18 = (long)*(int*)( local_a0 + -8 );
                     }

                     dVar27 = (double)Range::get_value();
                     fVar23 = (float)dVar27;
                     dVar27 = (double)Range::get_value();
                     fVar29 = (float)EditorScale::get_scale();
                     if (*(int*)( this + 0xaf0 ) == 10) {
                        fVar23 = (float)( (uint)fVar23 ^ _LC159 );
                     }

                     CowData<float>::_copy_on_write((CowData<float>*)&local_a0);
                     lVar5 = local_a0;
                     lVar17 = *(long*)( this + 0xc00 );
                     lVar12 = *(long*)( this + 0xc20 );
                     if (0 < (int)lVar18) {
                        lVar21 = 0;
                        do {
                           uVar26 = *(undefined8*)( lVar12 + lVar21 * 2 );
                           fVar24 = (float)uVar26;
                           fVar25 = (float)( (ulong)uVar26 >> 0x20 );
                           local_58 = CONCAT44(fVar24 * (float)( (ulong)local_78 >> 0x20 ) + fVar25 * (float)( (ulong)local_70 >> 0x20 ) + fStack_64, fVar24 * (float)local_78 + fVar25 * (float)local_70 + local_68);
                           fVar24 = (float)Vector2::distance_to((StringName*)&local_58);
                           if (fVar24 < (float)( (double)fVar29 * dVar27 )) {
                              fVar24 = fVar23 + *(float*)( lVar17 + lVar21 );
                              if (0.0 <= fVar24) {
                                 fVar25 = _LC19;
                                 if (fVar24 <= _LC19) {
                                    fVar25 = fVar24;
                                 }

                              }
 else {
                                 fVar25 = 0.0;
                              }

                              *(float*)( lVar5 + lVar21 ) = fVar25;
                           }

                           lVar21 = lVar21 + 4;
                        }
 while ( lVar21 != lVar18 * 4 );
                     }

                     Polygon2D::set_bone_weights((int)*(undefined8*)( this + 0xaa8 ), (Vector*)( ulong ) * (uint*)( this + 0xbf4 ));
                     CowData<float>::_unref((CowData<float>*)&local_a0);
                  }

                  CanvasItem::queue_redraw();
                  CanvasItemEditor::update_viewport();
                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     LAB_00109e10:cVar6 = predelete_handler(pOVar10);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                        Memory::free_static(pOVar10, false);
                     }

                  }

                  LAB_00109cf2:if (local_128 != (Object*)0x0) {
                     LAB_00109cfa:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                        ( **(code**)( *(long*)local_128 + 0x140 ) )(local_128);
                        Memory::free_static(local_128, false);
                     }

                  }

                  LAB_00109d0c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  LAB_0010d501:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }

               /* DefaultAllocator::alloc(unsigned long) */
               void DefaultAllocator::alloc(ulong param_1) {
                  Memory::alloc_static(param_1, false);
                  return;
               }

               /* StringName::~StringName() */
               void StringName::~StringName(StringName *this) {
                  if (( configured != '\0' ) && ( *(long*)this != 0 )) {
                     StringName::unref();
                     return;
                  }

                  return;
               }

               /* Object::_bind_compatibility_methods() */
               void Object::_bind_compatibility_methods(void) {
                  return;
               }

               /* Object::_set(StringName const&, Variant const&) */
               undefined8 Object::_set(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* Object::_get(StringName const&, Variant&) const */
               undefined8 Object::_get(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */
               void Object::_get_property_list(List *param_1) {
                  return;
               }

               /* Object::_validate_property(PropertyInfo&) const */
               void Object::_validate_property(PropertyInfo *param_1) {
                  return;
               }

               /* Object::_property_can_revert(StringName const&) const */
               undefined8 Object::_property_can_revert(StringName *param_1) {
                  return 0;
               }

               /* Object::_property_get_revert(StringName const&, Variant&) const */
               undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* Object::_notification(int) */
               void Object::_notification(int param_1) {
                  return;
               }

               /* Object::get_save_class() const */
               void Object::get_save_class(void) {
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

               /* MethodBind::is_valid() const */
               undefined8 MethodBind::is_valid(void) {
                  return 1;
               }

               /* MethodBind::is_vararg() const */
               undefined8 MethodBind::is_vararg(void) {
                  return 0;
               }

               /* Control::_top_level_changed() */
               void Control::_top_level_changed(void) {
                  return;
               }

               /* EditorPlugin::selected_notify() */
               void EditorPlugin::selected_notify(void) {
                  return;
               }

               /* EditorPlugin::edited_scene_changed() */
               void EditorPlugin::edited_scene_changed(void) {
                  return;
               }

               /* AbstractPolygon2DEditorPlugin::has_main_screen() const */
               undefined8 AbstractPolygon2DEditorPlugin::has_main_screen(void) {
                  return 0;
               }

               /* Polygon2DEditor::_has_uv() const */
               undefined8 Polygon2DEditor::_has_uv(void) {
                  return 1;
               }

               /* Polygon2DEditorPlugin::is_class_ptr(void*) const */
               uint Polygon2DEditorPlugin::is_class_ptr(Polygon2DEditorPlugin *this, void *param_1) {
                  return (uint)CONCAT71(0x120e, (undefined4*)param_1 == &AbstractPolygon2DEditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
               }

               /* Polygon2DEditorPlugin::_getv(StringName const&, Variant&) const */
               undefined8 Polygon2DEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* Polygon2DEditorPlugin::_setv(StringName const&, Variant const&) */
               undefined8 Polygon2DEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* Polygon2DEditorPlugin::_property_can_revertv(StringName const&) const */
               undefined8 Polygon2DEditorPlugin::_property_can_revertv(StringName *param_1) {
                  return 0;
               }

               /* Polygon2DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 Polygon2DEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  return 0;
               }

               /* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ViewPanner,void> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, int>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void> *this) {
                  return;
               }

               /* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CanvasItem,void> *this) {
                  return;
               }

               /* MethodBindT<>::_gen_argument_type(int) const */
               undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
                  return 0;
               }

               /* MethodBindT<>::_gen_argument_type_info(int) const */
               undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
                  undefined4 in_register_0000003c;
                  *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
                  *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
                  *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
                  *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
                  *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
                  return CONCAT44(in_register_0000003c, param_1);
               }

               /* MethodBindT<>::get_argument_meta(int) const */
               undefined8 MethodBindT<>::get_argument_meta(int param_1) {
                  return 0;
               }

               /* CallableCustomMethodPointer<ViewPanner, void>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<ViewPanner,void>::get_argument_count(CallableCustomMethodPointer<ViewPanner,void> *this, bool *param_1) {
                  *param_1 = true;
                  return 0;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this, bool *param_1) {
                  *param_1 = true;
                  return 1;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this, bool *param_1) {
                  *param_1 = true;
                  return 3;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this, bool *param_1) {
                  *param_1 = true;
                  return 2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,float>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,float> *this, bool *param_1) {
                  *param_1 = true;
                  return 1;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,bool>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this, bool *param_1) {
                  *param_1 = true;
                  return 1;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, int>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,int>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this, bool *param_1) {
                  *param_1 = true;
                  return 1;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void>::get_argument_count(CallableCustomMethodPointer<Polygon2DEditor,void> *this, bool *param_1) {
                  *param_1 = true;
                  return 0;
               }

               /* CallableCustomMethodPointer<CanvasItem, void>::get_argument_count(bool&) const */
               undefined8 CallableCustomMethodPointer<CanvasItem,void>::get_argument_count(CallableCustomMethodPointer<CanvasItem,void> *this, bool *param_1) {
                  *param_1 = true;
                  return 0;
               }

               /* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CanvasItem,void> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, int>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */
               void CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ViewPanner,void> *this) {
                  operator_delete(this, 0x48);
                  return;
               }

               /* CallableCustomMethodPointerBase::get_method() const */
               void CallableCustomMethodPointerBase::get_method(void) {
                  long in_RSI;
                  StringName *in_RDI;
                  StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
                  return;
               }

               /* Polygon2DEditorPlugin::~Polygon2DEditorPlugin() */
               void Polygon2DEditorPlugin::~Polygon2DEditorPlugin(Polygon2DEditorPlugin *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f360;
                  AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin((AbstractPolygon2DEditorPlugin*)this);
                  return;
               }

               /* Polygon2DEditorPlugin::~Polygon2DEditorPlugin() */
               void Polygon2DEditorPlugin::~Polygon2DEditorPlugin(Polygon2DEditorPlugin *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f360;
                  AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin((AbstractPolygon2DEditorPlugin*)this);
                  operator_delete(this, 0x670);
                  return;
               }

               /* AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport(Control*) */
               void AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport(Control *param_1) {
                  AbstractPolygon2DEditor::forward_canvas_draw_over_viewport(*(Control**)( param_1 + 0x660 ));
                  return;
               }

               /* AbstractPolygon2DEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */
               void AbstractPolygon2DEditorPlugin::forward_canvas_gui_input(Ref *param_1) {
                  AbstractPolygon2DEditor::forward_gui_input(*(Ref**)( param_1 + 0x660 ));
                  return;
               }

               /* Polygon2DEditorPlugin::_validate_propertyv(PropertyInfo&) const */
               void Polygon2DEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
                  if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
                     Node::_validate_property(param_1);
                     return;
                  }

                  return;
               }

               /* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* Polygon2DEditor::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 Polygon2DEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* HScrollBar::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 HScrollBar::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* VScrollBar::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 VScrollBar::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* HSlider::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 HSlider::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */
               undefined8 HSplitContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_get_revert_00127008 != Object::_property_get_revert) {
                     uVar1 = Control::_property_get_revert(param_1, param_2);
                     return uVar1;
                  }

                  return 0;
               }

               /* HBoxContainer::_property_can_revertv(StringName const&) const */
               undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* VBoxContainer::_property_can_revertv(StringName const&) const */
               undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* Polygon2DEditor::_property_can_revertv(StringName const&) const */
               undefined8 Polygon2DEditor::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* HScrollBar::_property_can_revertv(StringName const&) const */
               undefined8 HScrollBar::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* VScrollBar::_property_can_revertv(StringName const&) const */
               undefined8 VScrollBar::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* HSlider::_property_can_revertv(StringName const&) const */
               undefined8 HSlider::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* HSplitContainer::_property_can_revertv(StringName const&) const */
               undefined8 HSplitContainer::_property_can_revertv(StringName *param_1) {
                  undefined8 uVar1;
                  if ((code*)PTR__property_can_revert_00127010 != Object::_property_can_revert) {
                     uVar1 = Control::_property_can_revert(param_1);
                     return uVar1;
                  }

                  return 0;
               }

               /* VScrollBar::~VScrollBar() */
               void VScrollBar::~VScrollBar(VScrollBar *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f978;
                  ScrollBar::~ScrollBar((ScrollBar*)this);
                  return;
               }

               /* VScrollBar::~VScrollBar() */
               void VScrollBar::~VScrollBar(VScrollBar *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f978;
                  ScrollBar::~ScrollBar((ScrollBar*)this);
                  operator_delete(this, 0xac8);
                  return;
               }

               /* HScrollBar::~HScrollBar() */
               void HScrollBar::~HScrollBar(HScrollBar *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f608;
                  ScrollBar::~ScrollBar((ScrollBar*)this);
                  return;
               }

               /* HScrollBar::~HScrollBar() */
               void HScrollBar::~HScrollBar(HScrollBar *this) {
                  *(undefined***)this = &PTR__initialize_classv_0011f608;
                  ScrollBar::~ScrollBar((ScrollBar*)this);
                  operator_delete(this, 0xac8);
                  return;
               }

               /* MethodBindT<>::~MethodBindT() */
               void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
                  *(undefined***)this = &PTR__gen_argument_type_00120cd8;
                  MethodBind::~MethodBind((MethodBind*)this);
                  return;
               }

               /* MethodBindT<>::~MethodBindT() */
               void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
                  *(undefined***)this = &PTR__gen_argument_type_00120cd8;
                  MethodBind::~MethodBind((MethodBind*)this);
                  operator_delete(this, 0x68);
                  return;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, int>::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,int>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this) {
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
                        goto LAB_0010e24d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e24d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e24d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,bool>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this) {
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
                        goto LAB_0010e34d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e34d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e34d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent> const&>::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this) {
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
                        goto LAB_0010e44d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e44d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e44d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<ViewPanner, void>::get_object() const */
               undefined8 CallableCustomMethodPointer<ViewPanner,void>::get_object(CallableCustomMethodPointer<ViewPanner,void> *this) {
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
                        goto LAB_0010e54d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e54d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e54d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<CanvasItem, void>::get_object() const */
               undefined8 CallableCustomMethodPointer<CanvasItem,void>::get_object(CallableCustomMethodPointer<CanvasItem,void> *this) {
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
                        goto LAB_0010e64d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e64d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e64d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void>::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void> *this) {
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
                        goto LAB_0010e74d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e74d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e74d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float>::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,float>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,float> *this) {
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
                        goto LAB_0010e84d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e84d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e84d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::get_object() const */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this) {
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
                        goto LAB_0010e94d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010e94d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010e94d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent> >::get_object() const
    */
               undefined8 CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this) {
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
                        goto LAB_0010ea4d;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] != 0) {
                        uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
                        goto LAB_0010ea4d;
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  uVar2 = 0;
                  LAB_0010ea4d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return uVar2;
               }

               /* Polygon2DEditorPlugin::_notificationv(int, bool) */
               void Polygon2DEditorPlugin::_notificationv(Polygon2DEditorPlugin *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127018 != Node::_notification) {
                        EditorPlugin::_notification(iVar1);
                     }

                     Node::_notification(iVar1);
                     return;
                  }

                  Node::_notification(iVar1);
                  if ((code*)PTR__notification_00127018 == Node::_notification) {
                     return;
                  }

                  EditorPlugin::_notification(iVar1);
                  return;
               }

               /* VScrollBar::is_class_ptr(void*) const */
               uint VScrollBar::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &ScrollBar::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* HSplitContainer::is_class_ptr(void*) const */
               uint HSplitContainer::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120d, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* HScrollBar::is_class_ptr(void*) const */
               uint HScrollBar::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &ScrollBar::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* HSlider::is_class_ptr(void*) const */
               uint HSlider::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Range::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120d, in_RSI == &Slider::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* HSlider::_validate_propertyv(PropertyInfo&) const */
               void HSlider::_validate_propertyv(PropertyInfo *param_1) {
                  Node::_validate_property(param_1);
                  CanvasItem::_validate_property(param_1);
                  if ((code*)PTR__validate_property_00127020 == CanvasItem::_validate_property) {
                     return;
                  }

                  Control::_validate_property(param_1);
                  return;
               }

               /* VScrollBar::_validate_propertyv(PropertyInfo&) const */
               void VScrollBar::_validate_propertyv(PropertyInfo *param_1) {
                  Node::_validate_property(param_1);
                  CanvasItem::_validate_property(param_1);
                  if ((code*)PTR__validate_property_00127020 == CanvasItem::_validate_property) {
                     return;
                  }

                  Control::_validate_property(param_1);
                  return;
               }

               /* HScrollBar::_validate_propertyv(PropertyInfo&) const */
               void HScrollBar::_validate_propertyv(PropertyInfo *param_1) {
                  Node::_validate_property(param_1);
                  CanvasItem::_validate_property(param_1);
                  if ((code*)PTR__validate_property_00127020 == CanvasItem::_validate_property) {
                     return;
                  }

                  Control::_validate_property(param_1);
                  return;
               }

               /* HSplitContainer::_validate_propertyv(PropertyInfo&) const */
               void HSplitContainer::_validate_propertyv(PropertyInfo *param_1) {
                  for (int i = 0; i < 3; i++) {
                     Node::_validate_property(param_1);
                  }

                  if ((code*)PTR__validate_property_00127028 == Control::_validate_property) {
                     return;
                  }

                  SplitContainer::_validate_property(param_1);
                  return;
               }

               /* HBoxContainer::_validate_propertyv(PropertyInfo&) const */
               void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
                  for (int i = 0; i < 3; i++) {
                     Node::_validate_property(param_1);
                  }

                  if ((code*)PTR__validate_property_00127030 == Control::_validate_property) {
                     return;
                  }

                  BoxContainer::_validate_property(param_1);
                  return;
               }

               /* VBoxContainer::_validate_propertyv(PropertyInfo&) const */
               void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
                  for (int i = 0; i < 3; i++) {
                     Node::_validate_property(param_1);
                  }

                  if ((code*)PTR__validate_property_00127030 == Control::_validate_property) {
                     return;
                  }

                  BoxContainer::_validate_property(param_1);
                  return;
               }

               /* Polygon2DEditor::_validate_propertyv(PropertyInfo&) const */
               void Polygon2DEditor::_validate_propertyv(PropertyInfo *param_1) {
                  for (int i = 0; i < 3; i++) {
                     Node::_validate_property(param_1);
                  }

                  if ((code*)PTR__validate_property_00127030 == Control::_validate_property) {
                     return;
                  }

                  BoxContainer::_validate_property(param_1);
                  return;
               }

               /* HBoxContainer::is_class_ptr(void*) const */
               uint HBoxContainer::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* VBoxContainer::is_class_ptr(void*) const */
               uint VBoxContainer::is_class_ptr(void *param_1) {
                  uint uVar1;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar1 = 1;
                  if (in_RSI != &get_class_ptr_static()::ptr) {
                     uVar1 = (uint)CONCAT71(0x120e, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
                  }

                  return uVar1;
               }

               /* Polygon2DEditor::is_class_ptr(void*) const */
               uint Polygon2DEditor::is_class_ptr(void *param_1) {
                  byte bVar1;
                  uint uVar2;
                  undefined4 in_EDX;
                  undefined4 *in_RSI;
                  uVar2 = (uint)CONCAT71(0x120e, in_RSI == &AbstractPolygon2DEditor::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &get_class_ptr_static(), ::ptr);
                  bVar1= (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr
                  ;
                  if (bVar1 != 0) {
                     return CONCAT31(( int3 )(uVar2 >> 8), bVar1);
                  }

                  return (uint)CONCAT71(0x120e, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120f, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
               }

               /* VBoxContainer::_setv(StringName const&, Variant const&) */
               undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* Polygon2DEditor::_setv(StringName const&, Variant const&) */
               undefined8 Polygon2DEditor::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* HBoxContainer::_setv(StringName const&, Variant const&) */
               undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* HSplitContainer::_setv(StringName const&, Variant const&) */
               undefined8 HSplitContainer::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* HSlider::_setv(StringName const&, Variant const&) */
               undefined8 HSlider::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* HScrollBar::_setv(StringName const&, Variant const&) */
               undefined8 HScrollBar::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* VScrollBar::_setv(StringName const&, Variant const&) */
               undefined8 VScrollBar::_setv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  uVar1 = CanvasItem::_set(param_1, param_2);
                  if ((char)uVar1 == '\0') {
                     if ((code*)PTR__set_00127038 != CanvasItem::_set) {
                        uVar1 = Control::_set(param_1, param_2);
                        return uVar1;
                     }

                     uVar1 = 0;
                  }

                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f598) */
               /* HScrollBar::_getv(StringName const&, Variant&) const */
               undefined8 HScrollBar::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f608) */
               /* HSlider::_getv(StringName const&, Variant&) const */
               undefined8 HSlider::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f678) */
               /* HBoxContainer::_getv(StringName const&, Variant&) const */
               undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f6e8) */
               /* VScrollBar::_getv(StringName const&, Variant&) const */
               undefined8 VScrollBar::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f758) */
               /* HSplitContainer::_getv(StringName const&, Variant&) const */
               undefined8 HSplitContainer::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f7c8) */
               /* Polygon2DEditor::_getv(StringName const&, Variant&) const */
               undefined8 Polygon2DEditor::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* WARNING: Removing unreachable block (ram,0x0010f838) */
               /* VBoxContainer::_getv(StringName const&, Variant&) const */
               undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
                  undefined8 uVar1;
                  if (( (code*)PTR__get_00127040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
                     return uVar1;
                  }

                  uVar1 = CanvasItem::_get(param_1, param_2);
                  return uVar1;
               }

               /* VBoxContainer::~VBoxContainer() */
               void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
                  bool bVar1;
                  bVar1 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar1) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010fde0;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010fde0:Control::~Control((Control*)this);
                  return;
               }

               /* HBoxContainer::~HBoxContainer() */
               void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
                  bool bVar1;
                  bVar1 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar1) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010fe40;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010fe40:Control::~Control((Control*)this);
                  return;
               }

               /* VBoxContainer::~VBoxContainer() */
               void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
                  bool bVar1;
                  bVar1 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar1) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010fea0;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010fea0:Control::~Control((Control*)this);
                  operator_delete(this, 0xa10);
                  return;
               }

               /* HBoxContainer::~HBoxContainer() */
               void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
                  bool bVar1;
                  bVar1 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar1) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010ff10;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010ff10:Control::~Control((Control*)this);
                  operator_delete(this, 0xa10);
                  return;
               }

               /* HScrollBar::_notificationv(int, bool) */
               void HScrollBar::_notificationv(HScrollBar *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127048 != Control::_notification) {
                        ScrollBar::_notification(iVar1);
                     }

                     for (int i = 0; i < 3; i++) {
                        Control::_notification(iVar1);
                     }

                     return;
                  }

                  for (int i = 0; i < 3; i++) {
                     Node::_notification(iVar1);
                  }

                  if ((code*)PTR__notification_00127048 == Control::_notification) {
                     return;
                  }

                  ScrollBar::_notification(iVar1);
                  return;
               }

               /* VScrollBar::_notificationv(int, bool) */
               void VScrollBar::_notificationv(VScrollBar *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127048 != Control::_notification) {
                        ScrollBar::_notification(iVar1);
                     }

                     for (int i = 0; i < 3; i++) {
                        Control::_notification(iVar1);
                     }

                     return;
                  }

                  for (int i = 0; i < 3; i++) {
                     Node::_notification(iVar1);
                  }

                  if ((code*)PTR__notification_00127048 == Control::_notification) {
                     return;
                  }

                  ScrollBar::_notification(iVar1);
                  return;
               }

               /* HSlider::_notificationv(int, bool) */
               void HSlider::_notificationv(HSlider *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127050 != Control::_notification) {
                        Slider::_notification(iVar1);
                     }

                     for (int i = 0; i < 3; i++) {
                        Control::_notification(iVar1);
                     }

                     return;
                  }

                  for (int i = 0; i < 3; i++) {
                     Node::_notification(iVar1);
                  }

                  if ((code*)PTR__notification_00127050 == Control::_notification) {
                     return;
                  }

                  Slider::_notification(iVar1);
                  return;
               }

               /* HSplitContainer::_notificationv(int, bool) */
               void HSplitContainer::_notificationv(HSplitContainer *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127058 != Container::_notification) {
                        SplitContainer::_notification(iVar1);
                     }

                     for (int i = 0; i < 4; i++) {
                        Container::_notification(iVar1);
                     }

                     return;
                  }

                  for (int i = 0; i < 4; i++) {
                     Node::_notification(iVar1);
                  }

                  if ((code*)PTR__notification_00127058 == Container::_notification) {
                     return;
                  }

                  SplitContainer::_notification(iVar1);
                  return;
               }

               /* VBoxContainer::_notificationv(int, bool) */
               void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127060 != Container::_notification) {
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

                  if ((code*)PTR__notification_00127060 == Container::_notification) {
                     return;
                  }

                  BoxContainer::_notification(iVar1);
                  return;
               }

               /* HBoxContainer::_notificationv(int, bool) */
               void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127060 != Container::_notification) {
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

                  if ((code*)PTR__notification_00127060 == Container::_notification) {
                     return;
                  }

                  BoxContainer::_notification(iVar1);
                  return;
               }

               /* CallableCustomMethodPointerBase::get_as_text() const */
               void CallableCustomMethodPointerBase::get_as_text(void) {
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

               /* HBoxContainer::_get_class_namev() const */
               undefined8 *HBoxContainer::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110643:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110643;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
                        goto LAB_001106ae;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
                  LAB_001106ae:return &_get_class_namev();
               }

               /* Polygon2DEditor::_get_class_namev() const */
               undefined8 *Polygon2DEditor::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110733:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110733;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Polygon2DEditor");
                        goto LAB_0011079e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Polygon2DEditor");
                  LAB_0011079e:return &_get_class_namev();
               }

               /* HSlider::_get_class_namev() const */
               undefined8 *HSlider::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110813:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110813;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSlider");
                        goto LAB_0011087e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSlider");
                  LAB_0011087e:return &_get_class_namev();
               }

               /* Polygon2DEditorPlugin::_get_class_namev() const */
               undefined8 *Polygon2DEditorPlugin::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110903:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110903;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Polygon2DEditorPlugin");
                        goto LAB_0011096e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Polygon2DEditorPlugin");
                  LAB_0011096e:return &_get_class_namev();
               }

               /* VBoxContainer::_get_class_namev() const */
               undefined8 *VBoxContainer::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_001109f3:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001109f3;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
                        goto LAB_00110a5e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
                  LAB_00110a5e:return &_get_class_namev();
               }

               /* HScrollBar::_get_class_namev() const */
               undefined8 *HScrollBar::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110ad3:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110ad3;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HScrollBar");
                        goto LAB_00110b3e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HScrollBar");
                  LAB_00110b3e:return &_get_class_namev();
               }

               /* VScrollBar::_get_class_namev() const */
               undefined8 *VScrollBar::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110bb3:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110bb3;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VScrollBar");
                        goto LAB_00110c1e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VScrollBar");
                  LAB_00110c1e:return &_get_class_namev();
               }

               /* HSplitContainer::_get_class_namev() const */
               undefined8 *HSplitContainer::_get_class_namev(void) {
                  int iVar1;
                  if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
                     _get_class_namev()
                     __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
                     __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
                  }

                  if (_get_class_namev()::_class_name_static != 0) {
                     if (*(long*)( _get_class_namev() ) != 0) {
                        LAB_00110ca3:return &_get_class_namev();
                     }

                     if (*(long*)( _get_class_namev() ) != 0) {
                        if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110ca3;
                        StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
                        goto LAB_00110d0e;
                     }

                  }

                  StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
                  LAB_00110d0e:return &_get_class_namev();
               }

               /* HSplitContainer::~HSplitContainer() */
               void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
                  Object *pOVar1;
                  char cVar2;
                  bool bVar3;
                  *(code**)this = predelete_handler;
                  if (*(long*)( this + 0xa60 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa60 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa50 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa50 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa48 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa48 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa40 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa40 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  bVar3 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar3) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_00110e0f;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_00110e0f:Control::~Control((Control*)this);
                  return;
               }

               /* HSplitContainer::~HSplitContainer() */
               void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
                  Object *pOVar1;
                  char cVar2;
                  bool bVar3;
                  *(code**)this = predelete_handler;
                  if (*(long*)( this + 0xa60 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa60 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa50 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa50 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa48 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa48 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  if (*(long*)( this + 0xa40 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa40 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                        }

                     }

                  }

                  bVar3 = StringName::configured != '\0';
                  *(code**)this = Control::_notification;
                  if (bVar3) {
                     if (*(long*)( this + 0x9e8 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_00110fbf;
                     }

                     if (*(long*)( this + 0x9d0 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_00110fbf:Control::~Control((Control*)this);
                  operator_delete(this, 0xa70);
                  return;
               }

               /* HSlider::~HSlider() */
               void HSlider::~HSlider(HSlider *this) {
                  Object *pOVar1;
                  char cVar2;
                  *(code**)this = Vector2::is_equal_approx;
                  for (int i = 0; i < 6; i++) {
                     if (*(long*)( this + ( -8*i + 2664 ) ) != 0) {
                        cVar2 = RefCounted::unreference();
                        if (cVar2 != '\0') {
                           pOVar1 = *(Object**)( this + ( -8*i + 2664 ) );
                           cVar2 = predelete_handler(pOVar1);
                           if (cVar2 != '\0') {
                              ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
                              Memory::free_static(pOVar1, false);
                           }

                        }

                     }

                  }

                  if (*(long*)( this + 0xa38 ) != 0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        pOVar1 = *(Object**)( this + 0xa38 );
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                           Range::~Range((Range*)this);
                           return;
                        }

                     }

                  }

                  Range::~Range((Range*)this);
                  return;
               }

               /* HSlider::~HSlider() */
               void HSlider::~HSlider(HSlider *this) {
                  Object *pOVar1;
                  char cVar2;
                  *(code**)this = Vector2::is_equal_approx;
                  for (int i = 0; i < 7; i++) {
                     if (*(long*)( this + ( -8*i + 2664 ) ) != 0) {
                        cVar2 = RefCounted::unreference();
                        if (cVar2 != '\0') {
                           pOVar1 = *(Object**)( this + ( -8*i + 2664 ) );
                           cVar2 = predelete_handler(pOVar1);
                           if (cVar2 != '\0') {
                              ( **(code**)( *(long*)pOVar1 + 320 ) )(pOVar1);
                              Memory::free_static(pOVar1, false);
                           }

                        }

                     }

                  }

                  Range::~Range((Range*)this);
                  operator_delete(this, 0xa80);
                  return;
               }

               /* String::parse_latin1(char const*) */
               void String::parse_latin1(String_conflict *this, char *param_1) {
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

               /* WARNING: Removing unreachable block (ram,0x0011166c) */
               /* Control::_notificationv(int, bool) */
               void Control::_notificationv(Control *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127068 != CanvasItem::_notification) {
                        Control::_notification(iVar1);
                     }

                     CanvasItem::_notification(iVar1);
                     Node::_notification(iVar1);
                     return;
                  }

                  Node::_notification(iVar1);
                  CanvasItem::_notification(iVar1);
                  if ((code*)PTR__notification_00127068 == CanvasItem::_notification) {
                     return;
                  }

                  Control::_notification(iVar1);
                  return;
               }

               /* WARNING: Removing unreachable block (ram,0x00111790) */
               /* BoxContainer::_notificationv(int, bool) */
               void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
                  int iVar1;
                  iVar1 = (int)this;
                  if (param_2) {
                     if ((code*)PTR__notification_00127060 != Container::_notification) {
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

                  if ((code*)PTR__notification_00127060 == Container::_notification) {
                     return;
                  }

                  BoxContainer::_notification(iVar1);
                  return;
               }

               /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
               /* Geometry2D::is_point_in_polygon(Vector2 const&, Vector<Vector2> const&) */
               ulong Geometry2D::is_point_in_polygon(Vector2 *param_1, Vector *param_2) {
                  float fVar1;
                  float fVar2;
                  float *pfVar3;
                  float *pfVar4;
                  ulong uVar5;
                  int iVar6;
                  ulong uVar7;
                  long in_FS_OFFSET;
                  float fVar8;
                  float fVar9;
                  float fVar10;
                  float fVar11;
                  float fVar12;
                  float fVar13;
                  float fVar14;
                  float fVar15;
                  float fVar16;
                  float fVar17;
                  float fVar18;
                  float fVar19;
                  float fVar20;
                  uint local_5c;
                  undefined8 local_50;
                  undefined8 local_48;
                  long local_40;
                  pfVar3 = *(float**)( param_2 + 8 );
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  uVar5 = 0;
                  if (pfVar3 == (float*)0x0) {
                     uVar5 = 0;
                  }
 else {
                     iVar6 = (int)*(undefined8*)( pfVar3 + -2 );
                     if (2 < iVar6) {
                        pfVar4 = pfVar3;
                        fVar9 = _LC13;
                        fVar8 = _LC13;
                        fVar14 = _LC12;
                        fVar16 = _LC12;
                        do {
                           fVar1 = pfVar4[1];
                           fVar2 = *pfVar4;
                           pfVar4 = pfVar4 + 2;
                           if (fVar14 <= fVar1) {
                              fVar14 = fVar1;
                           }

                           if (fVar16 <= fVar2) {
                              fVar16 = fVar2;
                           }

                           if (fVar1 <= fVar9) {
                              fVar9 = fVar1;
                           }

                           if (fVar2 <= fVar8) {
                              fVar8 = fVar2;
                           }

                        }
 while ( pfVar4 != pfVar3 + ( ulong )(iVar6 - 1) * 2 + 2 );
                        local_5c = 0;
                        fVar8 = ( fVar16 - fVar8 ) * __LC15;
                        uVar7 = 1;
                        fVar9 = ( fVar14 - fVar9 ) * __LC16;
                        do {
                           fVar1 = *(float*)param_1;
                           fVar2 = *(float*)( param_1 + 4 );
                           local_50 = 0;
                           fVar11 = (float)*(undefined8*)( pfVar3 + uVar7 * 2 + -2 );
                           fVar13 = (float)( ( ulong ) * (undefined8*)( pfVar3 + uVar7 * 2 + -2 ) >> 0x20 );
                           local_48 = CONCAT44((float)( ( ulong ) * (undefined8*)( pfVar3 + (long)(int)( (long)( ( ulong )(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar7 & 0xffffffff ) % (long)iVar6 ) * 2 ) >> 0x20 ) - fVar13, (float)*(undefined8*)( pfVar3 + (long)(int)( (long)( ( ulong )(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar7 & 0xffffffff ) % (long)iVar6 ) * 2 ) - fVar11);
                           fVar10 = (float)Vector2::dot((Vector2*)&local_48);
                           if (0.0 < fVar10) {
                              fVar19 = ( fVar9 + fVar14 ) - fVar13;
                              fVar17 = local_48._4_4_ / fVar10;
                              fVar18 = ( fVar8 + fVar16 ) - fVar11;
                              fVar10 = (float)local_48 / fVar10;
                              fVar12 = ( fVar2 - fVar13 ) * fVar10 - ( fVar1 - fVar11 ) * fVar17;
                              fVar15 = fVar19 * fVar10 - fVar18 * fVar17;
                              if (fVar12 < _LC18) {
                                 if (_LC18 <= fVar15) goto LAB_001118b9;
                              }
 else if (_LC14 < fVar12) {
                                 if (fVar15 <= _LC14) goto LAB_001118b9;
                              }
 else if (fVar12 != fVar15) {
                                 LAB_001118b9:fVar20 = _LC14;
                                 if (_LC14 <= ABS(fVar12) * _LC14) {
                                    fVar20 = ABS(fVar12) * _LC14;
                                 }

                                 if (( ( fVar20 <= ABS(fVar12 - fVar15) ) && ( fVar18 = fVar18 * fVar10 + fVar19 * fVar17 ),fVar18 = ( ( ( ( fVar1 - fVar11 ) * fVar10 + ( fVar2 - fVar13 ) * fVar17 ) - fVar18 ) * fVar15 ) / ( fVar15 - fVar12 ) + fVar18,0.0 <= fVar18 )) {
                                    local_5c = local_5c + 1;
                                    local_50 = CONCAT44(fVar18 * local_48._4_4_ + (float)( ( ulong ) * (undefined8*)( pfVar3 + uVar7 * 2 + -2 ) >> 0x20 ), fVar18 * (float)local_48 + (float)*(undefined8*)( pfVar3 + uVar7 * 2 + -2 ));
                                    uVar5 = Vector2::is_equal_approx((Vector2*)&local_50);
                                    if ((char)uVar5 != '\0') goto LAB_00111a90;
                                 }

                              }

                           }

                           uVar7 = uVar7 + 1;
                        }
 while ( uVar7 != ( ulong )(iVar6 - 1) + 2 );
                        uVar5 = ( ulong )(local_5c & 1);
                     }

                  }

                  LAB_00111a90:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return uVar5;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* Callable create_custom_callable_function_pointer<CanvasItem>(CanvasItem*, char const*, void
   (CanvasItem::*)()) */
               CanvasItem *create_custom_callable_function_pointer<CanvasItem>(CanvasItem *param_1, char *param_2, _func_void *param_3) {
                  undefined8 uVar1;
                  CallableCustom *this;
                  undefined8 in_RCX;
                  undefined8 in_R8;
                  this(CallableCustom * operator_new(0x48, ""));
                  CallableCustom::CallableCustom(this);
                  *(undefined**)( this + 0x20 ) = &_LC20;
                  *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                  *(undefined8*)( this + 0x40 ) = 0;
                  *(undefined***)this = &PTR_hash_001207c8;
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

               /* Callable create_custom_callable_function_pointer<Polygon2DEditor>(Polygon2DEditor*, char const*,
   void (Polygon2DEditor::*)()) */
               Polygon2DEditor *create_custom_callable_function_pointer<Polygon2DEditor>(Polygon2DEditor *param_1, char *param_2, _func_void *param_3) {
                  undefined8 uVar1;
                  CallableCustom *this;
                  undefined8 in_RCX;
                  undefined8 in_R8;
                  this(CallableCustom * operator_new(0x48, ""));
                  CallableCustom::CallableCustom(this);
                  *(undefined**)( this + 0x20 ) = &_LC20;
                  *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                  *(undefined8*)( this + 0x40 ) = 0;
                  *(undefined***)this = &PTR_hash_00120858;
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

               /* Variant Object::call<>(StringName const&) */
               StringName *Object::call<>(StringName *param_1) {
                  undefined8 in_RDX;
                  long *in_RSI;
                  long in_FS_OFFSET;
                  int local_68[4];
                  undefined8 local_58;
                  undefined1 local_50[16];
                  int local_38[6];
                  long local_20;
                  local_20 = *(long*)( in_FS_OFFSET + 0x28 );
                  local_50 = (undefined1[16])0x0;
                  local_58 = 0;
                  for (int i = 0; i < 3; i++) {
                     local_68[i] = 0;
                  }

                  ( **(code**)( *in_RSI + 0x68 ) )((Variant*)local_38, in_RSI, in_RDX, 0, 0, local_68);
                  if (local_68[0] == 0) {
                     Variant::Variant((Variant*)param_1, (Variant*)local_38);
                  }
 else {
                     *(undefined4*)param_1 = 0;
                     *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
                  }

                  if (Variant::needs_deinit[local_38[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return param_1;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* void EditorUndoRedoManager::add_do_method<Array>(Object*, StringName const&, Array) */
               void EditorUndoRedoManager::add_do_method<Array>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Array *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_undo_method<Array>(Object*, StringName const&, Array) */
               void EditorUndoRedoManager::add_undo_method<Array>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Array *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */
               void EditorUndoRedoManager::add_do_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
                  long lVar1;
                  long in_FS_OFFSET;
                  lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
                  EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, 0);
                  if (Variant::needs_deinit[0] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */
               void EditorUndoRedoManager::add_undo_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
                  long lVar1;
                  long in_FS_OFFSET;
                  lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, 0);
                  if (Variant::needs_deinit[0] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* void Ref<ButtonGroup>::instantiate<>() */
               void Ref<ButtonGroup>::instantiate<>(Ref<ButtonGroup> *this) {
                  char cVar1;
                  ButtonGroup *this_00;
                  Object *pOVar2;
                  Object *pOVar3;
                  this_00 = (ButtonGroup*)operator_new(0x270, "");
                  ButtonGroup::ButtonGroup(this_00);
                  postinitialize_handler((Object*)this_00);
                  cVar1 = RefCounted::init_ref();
                  if (cVar1 == '\0') {
                     pOVar3 = *(Object**)this;
                     if (pOVar3 == (Object*)0x0) {
                        return;
                     }

                     *(undefined8*)this = 0;
                     cVar1 = RefCounted::unreference();
                     if (cVar1 == '\0') {
                        return;
                     }

                     this_00 = (ButtonGroup*)0x0;
                     cVar1 = predelete_handler(pOVar3);
                     if (cVar1 == '\0') {
                        return;
                     }

                  }
 else {
                     pOVar3 = *(Object**)this;
                     pOVar2 = pOVar3;
                     if (this_00 == (ButtonGroup*)pOVar3) goto LAB_00112065;
                     *(ButtonGroup**)this = this_00;
                     cVar1 = RefCounted::reference();
                     if (cVar1 == '\0') {
                        *(undefined8*)this = 0;
                     }

                     pOVar2 = (Object*)this_00;
                     if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00112065;
                  }

                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  pOVar2 = (Object*)this_00;
                  if (this_00 == (ButtonGroup*)0x0) {
                     return;
                  }

                  LAB_00112065:cVar1 = RefCounted::unreference();
                  if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                     return;
                  }

                  return;
               }

               /* Callable create_custom_callable_function_pointer<Polygon2DEditor, int>(Polygon2DEditor*, char
   const*, void (Polygon2DEditor::*)(int)) */
               Polygon2DEditor *create_custom_callable_function_pointer<Polygon2DEditor,int>(Polygon2DEditor *param_1, char *param_2, _func_void_int *param_3) {
                  undefined8 uVar1;
                  CallableCustom *this;
                  undefined8 in_RCX;
                  undefined8 in_R8;
                  this(CallableCustom * operator_new(0x48, ""));
                  CallableCustom::CallableCustom(this);
                  *(undefined**)( this + 0x20 ) = &_LC20;
                  *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                  *(undefined8*)( this + 0x40 ) = 0;
                  *(undefined***)this = &PTR_hash_001208e8;
                  uVar1 = *(undefined8*)( param_2 + 0x60 );
                  *(char**)( this + 0x28 ) = param_2;
                  *(undefined8*)( this + 0x30 ) = uVar1;
                  *(undefined8*)( this + 0x38 ) = in_RCX;
                  *(undefined8*)( this + 0x40 ) = in_R8;
                  *(undefined8*)( this + 0x10 ) = 0;
                  CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
                  *(_func_void_int**)( this + 0x20 ) = param_3 + 1;
                  Callable::Callable((Callable*)param_1, this);
                  return param_1;
               }

               /* Callable Callable::bind<int>(int) const */
               Variant **Callable::bind<int>(int param_1) {
                  char cVar1;
                  int in_EDX;
                  int in_ESI;
                  undefined4 in_register_0000003c;
                  long in_FS_OFFSET;
                  int local_58[6];
                  undefined8 local_40;
                  undefined1 local_38[16];
                  long local_20;
                  local_20 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_58, in_EDX);
                  local_40 = 0;
                  local_38 = (undefined1[16])0x0;
                  Callable::bindp((Variant**)CONCAT44(in_register_0000003c, param_1), in_ESI);
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

                  if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return (Variant**)CONCAT44(in_register_0000003c, param_1);
               }

               /* void EditorUndoRedoManager::add_do_method<Vector<Vector2> >(Object*, StringName const&,
   Vector<Vector2>) */
               void EditorUndoRedoManager::add_do_method<Vector<Vector2>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Vector *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_undo_method<Vector<Vector2> >(Object*, StringName const&,
   Vector<Vector2>) */
               void EditorUndoRedoManager::add_undo_method<Vector<Vector2>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Vector *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_do_method<int>(Object*, StringName const&, int) */
               void EditorUndoRedoManager::add_do_method<int>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_3);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_undo_method<int>(Object*, StringName const&, int) */
               void EditorUndoRedoManager::add_undo_method<int>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_3);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_do_method<Vector<Color> >(Object*, StringName const&,
   Vector<Color>) */
               void EditorUndoRedoManager::add_do_method<Vector<Color>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Vector *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_undo_method<Vector<Color> >(Object*, StringName const&,
   Vector<Color>) */
               void EditorUndoRedoManager::add_undo_method<Vector<Color>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Vector *param_4) {
                  char cVar1;
                  long in_FS_OFFSET;
                  Variant *local_78[2];
                  int local_68[6];
                  undefined8 local_50;
                  undefined1 local_48[16];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_68, param_4);
                  local_50 = 0;
                  local_48 = (undefined1[16])0x0;
                  local_78[0] = (Variant*)local_68;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)local_78);
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }

               /* void EditorUndoRedoManager::add_do_method<int, Vector<float> >(Object*, StringName const&, int,
   Vector<float>) */
               void EditorUndoRedoManager::add_do_method<int,Vector<float>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, Vector *param_5) {
                  Variant *pVVar1;
                  Variant *pVVar2;
                  long in_FS_OFFSET;
                  Variant *local_a8;
                  Variant *pVStack_a0;
                  Variant local_88[24];
                  Variant local_70[24];
                  undefined8 local_58;
                  undefined1 local_50[16];
                  long local_40[2];
                  local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant(local_88, param_3);
                  Variant::Variant(local_70, param_5);
                  pVVar2 = (Variant*)local_40;
                  local_50 = (undefined1[16])0x0;
                  local_58 = 0;
                  local_a8 = local_88;
                  pVStack_a0 = local_70;
                  EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)&local_a8);
                  do {
                     pVVar1 = pVVar2 + -0x18;
                     pVVar2 = pVVar2 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar2 != local_88 );
                  if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* void EditorUndoRedoManager::add_undo_method<int, Vector<float> >(Object*, StringName const&, int,
   Vector<float>) */
               void EditorUndoRedoManager::add_undo_method<int,Vector<float>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, Vector *param_5) {
                  Variant *pVVar1;
                  Variant *pVVar2;
                  long in_FS_OFFSET;
                  Variant *local_a8;
                  Variant *pVStack_a0;
                  Variant local_88[24];
                  Variant local_70[24];
                  undefined8 local_58;
                  undefined1 local_50[16];
                  long local_40[2];
                  local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant(local_88, param_3);
                  Variant::Variant(local_70, param_5);
                  pVVar2 = (Variant*)local_40;
                  local_50 = (undefined1[16])0x0;
                  local_58 = 0;
                  local_a8 = local_88;
                  pVStack_a0 = local_70;
                  EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)&local_a8);
                  do {
                     pVVar1 = pVVar2 + -0x18;
                     pVVar2 = pVVar2 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar2 != local_88 );
                  if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* Callable create_custom_callable_function_pointer<Polygon2DEditor, bool>(Polygon2DEditor*, char
   const*, void (Polygon2DEditor::*)(bool)) */
               Polygon2DEditor *create_custom_callable_function_pointer<Polygon2DEditor,bool>(Polygon2DEditor *param_1, char *param_2, _func_void_bool *param_3) {
                  undefined8 uVar1;
                  CallableCustom *this;
                  undefined8 in_RCX;
                  undefined8 in_R8;
                  this(CallableCustom * operator_new(0x48, ""));
                  CallableCustom::CallableCustom(this);
                  *(undefined**)( this + 0x20 ) = &_LC20;
                  *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                  *(undefined8*)( this + 0x40 ) = 0;
                  *(undefined***)this = &PTR_hash_00120978;
                  uVar1 = *(undefined8*)( param_2 + 0x60 );
                  *(char**)( this + 0x28 ) = param_2;
                  *(undefined8*)( this + 0x30 ) = uVar1;
                  *(undefined8*)( this + 0x38 ) = in_RCX;
                  *(undefined8*)( this + 0x40 ) = in_R8;
                  *(undefined8*)( this + 0x10 ) = 0;
                  CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
                  *(_func_void_bool**)( this + 0x20 ) = param_3 + 1;
                  Callable::Callable((Callable*)param_1, this);
                  return param_1;
               }

               /* Callable Callable::bind<bool>(bool) const */
               Variant **Callable::bind<bool>(bool param_1) {
                  char cVar1;
                  bool in_DL;
                  int in_ESI;
                  undefined7 in_register_00000039;
                  long in_FS_OFFSET;
                  int local_58[6];
                  undefined8 local_40;
                  undefined1 local_38[16];
                  long local_20;
                  local_20 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_58, in_DL);
                  local_40 = 0;
                  local_38 = (undefined1[16])0x0;
                  Callable::bindp((Variant**)CONCAT71(in_register_00000039, param_1), in_ESI);
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

                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return (Variant**)CONCAT71(in_register_00000039, param_1);
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* Polygon2DEditor::_center_view_on_draw(bool) [clone .part.0] [clone .cold] */
               void Polygon2DEditor::_center_view_on_draw(bool param_1) {
                  code *pcVar1;
                  _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* Polygon2DEditor::_bind_methods() [clone .cold] */
               void Polygon2DEditor::_bind_methods(void) {
                  code *pcVar1;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */
               void CowData<Vector2>::_copy_on_write(void) {
                  code *pcVar1;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */
               void CowData<int>::_copy_on_write(void) {
                  code *pcVar1;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */
               void CowData<float>::_copy_on_write(void) {
                  code *pcVar1;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */
               void CowData<Color>::_copy_on_write(void) {
                  code *pcVar1;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               /* Callable create_custom_callable_function_pointer<Polygon2DEditor, float>(Polygon2DEditor*, char
   const*, void (Polygon2DEditor::*)(float)) */
               Polygon2DEditor *create_custom_callable_function_pointer<Polygon2DEditor,float>(Polygon2DEditor *param_1, char *param_2, _func_void_float *param_3) {
                  undefined8 uVar1;
                  CallableCustom *this;
                  undefined8 in_RCX;
                  undefined8 in_R8;
                  this(CallableCustom * operator_new(0x48, ""));
                  CallableCustom::CallableCustom(this);
                  *(undefined**)( this + 0x20 ) = &_LC20;
                  *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                  *(undefined8*)( this + 0x40 ) = 0;
                  *(undefined***)this = &PTR_hash_00120a08;
                  uVar1 = *(undefined8*)( param_2 + 0x60 );
                  *(char**)( this + 0x28 ) = param_2;
                  *(undefined8*)( this + 0x30 ) = uVar1;
                  *(undefined8*)( this + 0x38 ) = in_RCX;
                  *(undefined8*)( this + 0x40 ) = in_R8;
                  *(undefined8*)( this + 0x10 ) = 0;
                  CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
                  *(_func_void_float**)( this + 0x20 ) = param_3 + 1;
                  Callable::Callable((Callable*)param_1, this);
                  return param_1;
               }

               /* CowData<char32_t>::_unref() */
               void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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

               /* WARNING: Removing unreachable block (ram,0x00113318) */
               /* String vformat<char const*>(String const&, char const* const) */
               String_conflict *vformat<char_const*>(String_conflict *param_1, char *param_2) {
                  char cVar1;
                  Variant *this;
                  char *in_RDX;
                  int iVar2;
                  long in_FS_OFFSET;
                  Array local_c0[8];
                  undefined8 local_b8[8];
                  int local_78[6];
                  undefined8 local_60;
                  undefined1 local_58[16];
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  Variant::Variant((Variant*)local_78, in_RDX);
                  local_60 = 0;
                  local_58 = (undefined1[16])0x0;
                  Array::Array(local_c0);
                  iVar2 = (int)local_c0;
                  Array::resize(iVar2);
                  this(Variant * Array::operator [](iVar2));
                  Variant::operator =(this, (Variant*)local_78);
                  String::sprintf((CowData<char32_t>*)local_b8, (bool*)param_2);
                  *(undefined8*)param_1 = local_b8[0];
                  local_b8[0] = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
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

                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return param_1;
               }

               /* CowData<char32_t>::_ref(CowData<char32_t> const&) */
               void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
                  if (*(long*)this != *(long*)param_1) {
                     _ref(this, param_1);
                     return;
                  }

                  return;
               }

               /* Polygon2DEditorPlugin::get_class() const */
               void Polygon2DEditorPlugin::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* HSlider::get_class() const */
               void HSlider::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* VScrollBar::get_class() const */
               void VScrollBar::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* HScrollBar::get_class() const */
               void HScrollBar::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* HSplitContainer::get_class() const */
               void HSplitContainer::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* VBoxContainer::get_class() const */
               void VBoxContainer::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* Polygon2DEditor::get_class() const */
               void Polygon2DEditor::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* HBoxContainer::get_class() const */
               void HBoxContainer::get_class(void) {
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
                           CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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

               /* AbstractPolygon2DEditorPlugin::get_plugin_name() const */
               void AbstractPolygon2DEditorPlugin::get_plugin_name(void) {
                  long in_RSI;
                  CowData<char32_t> *in_RDI;
                  *(undefined8*)in_RDI = 0;
                  if (*(long*)( in_RSI + 0x668 ) != 0) {
                     CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x668 ));
                  }

                  return;
               }

               /* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */
               void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
                  long lVar1;
                  long in_FS_OFFSET;
                  long local_48;
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  *(undefined8*)( this + 8 ) = 0;
                  lVar1 = *(long*)param_3;
                  *(undefined4*)this = param_2;
                  if (lVar1 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
                  }

                  *(undefined8*)( this + 0x20 ) = 0;
                  lVar1 = *(long*)param_5;
                  *(undefined8*)( this + 0x10 ) = 0;
                  *(int*)( this + 0x18 ) = param_4;
                  if (lVar1 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
                     param_4 = *(int*)( this + 0x18 );
                  }

                  *(undefined4*)( this + 0x28 ) = param_6;
                  if (param_4 == 0x11) {
                     StringName::StringName((StringName*)&local_48, (String_conflict*)( this + 0x20 ), false);
                     if (*(long*)( this + 0x10 ) == local_48) {
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                     }
 else {
                        StringName::unref();
                        *(long*)( this + 0x10 ) = local_48;
                     }

                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                  }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     StringName::operator =((StringName*)( this + 0x10 ), param_7);
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               /* CallableCustomMethodPointer<ViewPanner, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
               void CallableCustomMethodPointer<ViewPanner,void>::call(CallableCustomMethodPointer<ViewPanner,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  String_conflict local_38[8];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
                  if (uVar3 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        local_38[0] = (String_conflict)0x0;
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
                        goto LAB_00113e8f;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] == 0) goto LAB_00113e8f;
                     lVar1 = *(long*)( this + 0x28 );
                     UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
                     lVar2 = *(long*)( this + 0x40 );
                     if (param_2 == 0) {
                        *(undefined4*)param_4 = 0;
                        if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                           UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                        }

                        if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           /* WARNING: Could not recover jumptable at 0x00113e68. Too many branches */
                           /* WARNING: Treating indirect jump as call */
                           ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                           return;
                        }

                        goto LAB_00113f40;
                     }

                     *(undefined4*)param_4 = 3;
                     *(undefined4*)( param_4 + 8 ) = 0;
                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     LAB_00113e8f:local_40 = 0;
                     String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
                     uitos((ulong)local_50);
                     operator+((char *)
                     local_48,(String_conflict*)"Invalid Object id \'";
                     String::operator +(local_38, (String_conflict*)local_48);
                     _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
                     CowData<char32_t>::_unref(local_48);
                     CowData<char32_t>::_unref(local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  LAB_00113f40:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
               void CallableCustomMethodPointer<Polygon2DEditor,void>::call(CallableCustomMethodPointer<Polygon2DEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  String_conflict local_38[8];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
                  if (uVar3 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        local_38[0] = (String_conflict)0x0;
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
                        goto LAB_0011409f;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] == 0) goto LAB_0011409f;
                     lVar1 = *(long*)( this + 0x28 );
                     UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
                     lVar2 = *(long*)( this + 0x40 );
                     if (param_2 == 0) {
                        *(undefined4*)param_4 = 0;
                        if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                           UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                        }

                        if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           /* WARNING: Could not recover jumptable at 0x00114078. Too many branches */
                           /* WARNING: Treating indirect jump as call */
                           ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                           return;
                        }

                        goto LAB_00114150;
                     }

                     *(undefined4*)param_4 = 3;
                     *(undefined4*)( param_4 + 8 ) = 0;
                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     LAB_0011409f:local_40 = 0;
                     String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
                     uitos((ulong)local_50);
                     operator+((char *)
                     local_48,(String_conflict*)"Invalid Object id \'";
                     String::operator +(local_38, (String_conflict*)local_48);
                     _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
                     CowData<char32_t>::_unref(local_48);
                     CowData<char32_t>::_unref(local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  LAB_00114150:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }

               /* CallableCustomMethodPointer<CanvasItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
               void CallableCustomMethodPointer<CanvasItem,void>::call(CallableCustomMethodPointer<CanvasItem,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  String_conflict local_38[8];
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
                  if (uVar3 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        local_38[0] = (String_conflict)0x0;
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
                        goto LAB_001142af;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar4[1] == 0) goto LAB_001142af;
                     lVar1 = *(long*)( this + 0x28 );
                     UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
                     lVar2 = *(long*)( this + 0x40 );
                     if (param_2 == 0) {
                        *(undefined4*)param_4 = 0;
                        if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                           UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                        }

                        if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           /* WARNING: Could not recover jumptable at 0x00114288. Too many branches */
                           /* WARNING: Treating indirect jump as call */
                           ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                           return;
                        }

                        goto LAB_00114360;
                     }

                     *(undefined4*)param_4 = 3;
                     *(undefined4*)( param_4 + 8 ) = 0;
                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     LAB_001142af:local_40 = 0;
                     String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
                     uitos((ulong)local_50);
                     operator+((char *)
                     local_48,(String_conflict*)"Invalid Object id \'";
                     String::operator +(local_38, (String_conflict*)local_48);
                     _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
                     CowData<char32_t>::_unref(local_48);
                     CowData<char32_t>::_unref(local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
                  }

                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  LAB_00114360:/* WARNING: Subroutine does not return */__stack_chk_fail();
               }

               /* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */
               void CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  CowData<char32_t> local_50[8];
                  CowData<char32_t> local_48[8];
                  undefined8 local_40;
                  Object *local_38;
                  long local_30;
                  local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                  uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
                  if (uVar8 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        uVar3 = (ulong)local_38 >> 8;
                        local_38 = (Object*)( uVar3 << 8 );
                        LOCK();
                        bVar11 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar11) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar11) break;
                        local_38 = (Object*)( uVar3 << 8 );
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
                     if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
                        ObjectDB::spin_lock._0_1_ = '\0';
                        if (puVar9[1] != 0) {
                           lVar1 = *(long*)( this + 0x28 );
                           pcVar10 = *(code**)( this + 0x38 );
                           lVar2 = *(long*)( this + 0x40 );
                           if (1 < (uint)param_2) {
                              *(undefined4*)param_4 = 3;
                              *(undefined4*)( param_4 + 8 ) = 1;
                              goto LAB_0011443e;
                           }

                           if (param_2 == 0) {
                              *(undefined4*)param_4 = 4;
                              *(undefined4*)( param_4 + 8 ) = 1;
                              goto LAB_0011443e;
                           }

                           *(undefined4*)param_4 = 0;
                           if (( (ulong)pcVar10 & 1 ) != 0) {
                              pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
                           }

                           cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
                           uVar4 = _LC120;
                           if (cVar6 == '\0') {
                              *(undefined4*)param_4 = 2;
                              *(undefined8*)( param_4 + 4 ) = uVar4;
                           }

                           local_38 = (Object*)0x0;
                           pOVar7 = (Object*)Variant::get_validated_object();
                           pOVar5 = local_38;
                           if (pOVar7 != local_38) {
                              if (pOVar7 == (Object*)0x0) {
                                 if (local_38 != (Object*)0x0) {
                                    local_38 = (Object*)0x0;
                                    LAB_0011450d:cVar6 = RefCounted::unreference();
                                    if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                                       ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                       Memory::free_static(pOVar5, false);
                                    }

                                 }

                              }
 else {
                                 pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                                 if (pOVar5 != pOVar7) {
                                    local_38 = pOVar7;
                                    if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                                       local_38 = (Object*)0x0;
                                    }

                                    if (pOVar5 != (Object*)0x0) goto LAB_0011450d;
                                 }

                              }

                           }

                           ( *pcVar10 )((long*)( lVar1 + lVar2 ));
                           if (( ( local_38 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_38,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                           Memory::free_static(pOVar5, false);
                        }

                        goto LAB_0011443e;
                     }

                  }
 else {
                     ObjectDB::spin_lock._0_1_ = '\0';
                  }

               }

               else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            }

            local_40 = 0;
            String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
            uitos((ulong)local_50);
            operator+((char *)
            local_48,(String_conflict*)"Invalid Object id \'";
            String::operator +((String_conflict*)&local_38, (String_conflict*)local_48);
            _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_38, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            CowData<char32_t>::_unref(local_48);
            CowData<char32_t>::_unref(local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            LAB_0011443e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }
, /* CallableCustomMethodPointer<Polygon2DEditor, void, float>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */, void __thiscall
CallableCustomMethodPointer<Polygon2DEditor,void, float>::call
          (CallableCustomMethodPointer<Polygon2DEditor,void,float> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4), {
            long lVar1;
            long lVar2;
            undefined8 uVar3;
            char cVar4;
            uint uVar5;
            ulong *puVar6;
            code *UNRECOVERED_JUMPTABLE;
            long in_FS_OFFSET;
            bool bVar7;
            CowData<char32_t> local_50[8];
            CowData<char32_t> local_48[8];
            undefined8 local_40;
            String_conflict local_38[8];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar5 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_38[0] = (String_conflict)0x0;
                  LOCK();
                  bVar7 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar7) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar7) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  goto LAB_00114896;
               }

               ObjectDB::spin_lock._0_1_ = '\0';
               if (puVar6[1] == 0) goto LAB_00114896;
               lVar1 = *(long*)( this + 0x28 );
               UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if ((uint)param_2 < 2) {
                  if (param_2 != 0) {
                     *(undefined4*)param_4 = 0;
                     if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                        UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
                     }

                     cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
                     uVar3 = _LC121;
                     if (cVar4 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar3;
                     }

                     Variant::operator_cast_to_float(*param_1);
                     if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        /* WARNING: Could not recover jumptable at 0x00114845. Too many branches */
                        /* WARNING: Treating indirect jump as call */
                        ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
                        return;
                     }

                     goto LAB_00114947;
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
               LAB_00114896:local_40 = 0;
               String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
               uitos((ulong)local_50);
               operator+((char *)
               local_48,(String_conflict*)"Invalid Object id \'";
               String::operator +(local_38, (String_conflict*)local_48);
               _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               CowData<char32_t>::_unref(local_48);
               CowData<char32_t>::_unref(local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_00114947:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }
, /* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */, void __thiscall
CallableCustomMethodPointer<Polygon2DEditor,void,float, Vector2, Ref<InputEvent>>::call
          (CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4), {
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
            CowData<char32_t> local_60[8];
            CowData<char32_t> local_58[8];
            undefined8 local_50;
            Object *local_48;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
            if (uVar9 < (uint)ObjectDB::slot_max) {
               while (true) {
                  uVar4 = (ulong)local_48 >> 8;
                  local_48 = (Object*)( uVar4 << 8 );
                  LOCK();
                  bVar12 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar12) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar12) break;
                  local_48 = (Object*)( uVar4 << 8 );
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar10[1] != 0) {
                     lVar1 = *(long*)( this + 0x28 );
                     pcVar11 = *(code**)( this + 0x38 );
                     lVar2 = *(long*)( this + 0x40 );
                     if (3 < (uint)param_2) {
                        *(undefined4*)param_4 = 3;
                        *(undefined4*)( param_4 + 8 ) = 3;
                        goto LAB_00114a15;
                     }

                     if (param_2 != 3) {
                        *(undefined4*)param_4 = 4;
                        *(undefined4*)( param_4 + 8 ) = 3;
                        goto LAB_00114a15;
                     }

                     *(undefined4*)param_4 = 0;
                     if (( (ulong)pcVar11 & 1 ) != 0) {
                        pcVar11 = *(code**)( pcVar11 + *(long*)( lVar1 + lVar2 ) + -1 );
                     }

                     cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[2]);
                     uVar3 = _LC122;
                     if (cVar7 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar3;
                     }

                     local_48 = (Object*)0x0;
                     pOVar8 = (Object*)Variant::get_validated_object();
                     pOVar6 = local_48;
                     if (pOVar8 != local_48) {
                        if (pOVar8 == (Object*)0x0) {
                           if (local_48 != (Object*)0x0) {
                              local_48 = (Object*)0x0;
                              LAB_00114b10:cVar7 = RefCounted::unreference();
                              if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
                                 ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                                 Memory::free_static(pOVar6, false);
                              }

                           }

                        }
 else {
                           pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEvent::typeinfo, 0);
                           if (pOVar6 != pOVar8) {
                              local_48 = pOVar8;
                              if (( pOVar8 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
                                 local_48 = (Object*)0x0;
                              }

                              if (pOVar6 != (Object*)0x0) goto LAB_00114b10;
                           }

                        }

                     }

                     cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 5);
                     uVar3 = _LC123;
                     if (cVar7 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar3;
                     }

                     uVar3 = Variant::operator_cast_to_Vector2(param_1[1]);
                     cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
                     uVar5 = _LC121;
                     if (cVar7 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar5;
                     }

                     fVar13 = Variant::operator_cast_to_float(*param_1);
                     ( *pcVar11 )(fVar13, uVar3, (long*)( lVar1 + lVar2 ));
                     if (( ( local_48 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_48,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

                  goto LAB_00114a15;
               }

            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
, else {
    _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0) ) & local_50,"\', can\'t call method.") ;;
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String_conflict*)"Invalid Object id \'";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      LAB_00114a15:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */
   void CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::call(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
      CowData<char32_t> local_60[8];
      CowData<char32_t> local_58[8];
      undefined8 local_50;
      Object *local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar3 = (ulong)local_48 >> 8;
            local_48 = (Object*)( uVar3 << 8 );
            LOCK();
            bVar11 = (char)ObjectDB::spin_lock == '\0';
            if (bVar11) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar11) break;
            local_48 = (Object*)( uVar3 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
         if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar9[1] != 0) {
               lVar1 = *(long*)( this + 0x28 );
               pcVar10 = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if (2 < (uint)param_2) {
                  *(undefined4*)param_4 = 3;
                  *(undefined4*)( param_4 + 8 ) = 2;
                  goto LAB_00114dd5;
               }

               if (param_2 != 2) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 2;
                  goto LAB_00114dd5;
               }

               *(undefined4*)param_4 = 0;
               if (( (ulong)pcVar10 & 1 ) != 0) {
                  pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
               }

               cVar6 = Variant::can_convert_strict(*(undefined4*)param_1[1]);
               uVar4 = _LC124;
               if (cVar6 == '\0') {
                  *(undefined4*)param_4 = 2;
                  *(undefined8*)( param_4 + 4 ) = uVar4;
               }

               local_48 = (Object*)0x0;
               pOVar7 = (Object*)Variant::get_validated_object();
               pOVar5 = local_48;
               if (pOVar7 != local_48) {
                  if (pOVar7 == (Object*)0x0) {
                     if (local_48 != (Object*)0x0) {
                        local_48 = (Object*)0x0;
                        LAB_00114ed0:cVar6 = RefCounted::unreference();
                        if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                           ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                           Memory::free_static(pOVar5, false);
                        }

                     }

                  }
 else {
                     pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                     if (pOVar5 != pOVar7) {
                        local_48 = pOVar7;
                        if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                           local_48 = (Object*)0x0;
                        }

                        if (pOVar5 != (Object*)0x0) goto LAB_00114ed0;
                     }

                  }

               }

               cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
               uVar4 = _LC125;
               if (cVar6 == '\0') {
                  *(undefined4*)param_4 = 2;
                  *(undefined8*)( param_4 + 4 ) = uVar4;
               }

               Variant::operator_cast_to_Vector2(*param_1);
               ( *pcVar10 )((long*)( lVar1 + lVar2 ));
               if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            goto LAB_00114dd5;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }

   else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
}
local_50 = 0;String::parse_latin1((String_conflict*)&local_50, "\', can\'t call method.");uitos((ulong)local_60);operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);_err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref(local_58);CowData<char32_t>::_unref(local_60);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_00114dd5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Polygon2DEditor,void,bool>::call(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String_conflict local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String_conflict)0x0;
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00115249;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_00115249;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar3 = _LC126;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar7 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001151f8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar7);
               return;
            }

            goto LAB_001152fa;
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
      LAB_00115249:local_40 = 0;
      String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String_conflict*)"Invalid Object id \'";
      String::operator +(local_38, (String_conflict*)local_48);
      _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001152fa:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<Polygon2DEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Polygon2DEditor,void,int>::call(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String_conflict local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String_conflict)0x0;
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
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001154b8;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001154b8;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar3 = _LC127;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00115467. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5);
               return;
            }

            goto LAB_00115569;
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
      LAB_001154b8:local_40 = 0;
      String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String_conflict*)"Invalid Object id \'";
      String::operator +(local_38, (String_conflict*)local_48);
      _err_print_error(&_LC119, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00115569:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Polygon2DEditorPlugin::_initialize_classv() */void Polygon2DEditorPlugin::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AbstractPolygon2DEditorPlugin::initialize_class() == '\0') {
         if (EditorPlugin::initialize_class() == '\0') {
            if (Node::initialize_class() == '\0') {
               Object::initialize_class();
               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "Object");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Node");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                  Node::_bind_methods();
               }

               Node::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Node");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "EditorPlugin");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if ((code*)PTR__bind_methods_00127070 != Node::_bind_methods) {
               EditorPlugin::_bind_methods();
            }

            if ((code*)PTR__bind_compatibility_methods_00127078 != Object::_bind_compatibility_methods) {
               EditorPlugin::_bind_compatibility_methods();
            }

            EditorPlugin::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "EditorPlugin";
         local_68 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "AbstractPolygon2DEditorPlugin";
         local_70 = 0;
         local_50 = 0x1d;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         AbstractPolygon2DEditorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AbstractPolygon2DEditorPlugin";
      local_68 = 0;
      local_50 = 0x1d;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "Polygon2DEditorPlugin";
      local_70 = 0;
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* HSlider::_initialize_classv() */void HSlider::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Slider::initialize_class() == '\0') {
         if (Range::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Range");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Range::_bind_methods();
            Range::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Range");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "Slider");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_00127090 != Range::_bind_methods) {
            Slider::_bind_methods();
         }

         Slider::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Slider";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "HSlider";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* VScrollBar::_initialize_classv() */void VScrollBar::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ScrollBar::initialize_class() == '\0') {
         if (Range::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Range");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Range::_bind_methods();
            Range::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Range");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "ScrollBar");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_00127098 != Range::_bind_methods) {
            ScrollBar::_bind_methods();
         }

         ScrollBar::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ScrollBar";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "VScrollBar";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* HScrollBar::_initialize_classv() */void HScrollBar::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ScrollBar::initialize_class() == '\0') {
         if (Range::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Range");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Range::_bind_methods();
            Range::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Range");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "ScrollBar");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_00127098 != Range::_bind_methods) {
            ScrollBar::_bind_methods();
         }

         ScrollBar::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ScrollBar";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "HScrollBar";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* HSplitContainer::_initialize_classv() */void HSplitContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SplitContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Container");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Container");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "SplitContainer");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_001270a0 != Container::_bind_methods) {
            SplitContainer::_bind_methods();
         }

         SplitContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "SplitContainer";
      local_68 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "HSplitContainer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Container");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Container");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "BoxContainer");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_001270a8 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
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
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                  if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "Control");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Control");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Container");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "Container");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "BoxContainer");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_001270a8 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "HBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00117e3b;
   }

   cVar5 = String::operator ==(param_1, "Node");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00117e3b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00117e3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011803b;
   }

   cVar5 = String::operator ==(param_1, "Control");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0011803b;
      }

      cVar5 = String::operator ==(param_1, "CanvasItem");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0011813e;
      }

   }

   LAB_0011803b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011813e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Range::is_class(String const&) const */undefined8 Range::is_class(Range *this, String_conflict *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0011824b;
   }

   cVar4 = String::operator ==(param_1, "Range");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Control::is_class((Control*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0011824b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditorPlugin::is_class(String const&) const */undefined8 Polygon2DEditorPlugin::is_class(Polygon2DEditorPlugin *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011839b;
   }

   cVar5 = String::operator ==(param_1, "Polygon2DEditorPlugin");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0011839b;
      }

      cVar5 = String::operator ==(param_1, "AbstractPolygon2DEditorPlugin");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  String::parse_latin1((String_conflict*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar5 = String::operator ==(param_1, (String_conflict*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar5 != '\0') goto LAB_0011839b;
         }

         cVar5 = String::operator ==(param_1, "EditorPlugin");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Node::is_class((Node*)this, param_1);
               return uVar6;
            }

            goto LAB_0011853e;
         }

      }

   }

   LAB_0011839b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011853e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x18 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar2 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x38 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0011863f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0011863f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* HSlider::is_class(String const&) const */undefined8 HSlider::is_class(HSlider *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011879b;
   }

   cVar5 = String::operator ==(param_1, "HSlider");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0011879b;
      }

      cVar5 = String::operator ==(param_1, "Slider");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Range::is_class((Range*)this, param_1);
            return uVar6;
         }

         goto LAB_0011889e;
      }

   }

   LAB_0011879b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011889e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001189ab;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001189ab;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_00118aae;
      }

   }

   LAB_001189ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00118aae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String_conflict *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00118bbb;
   }

   cVar4 = String::operator ==(param_1, "VBoxContainer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00118bbb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String_conflict *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00118d0b;
   }

   cVar4 = String::operator ==(param_1, "HBoxContainer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00118d0b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::is_class(String const&) const */undefined8 Polygon2DEditor::is_class(Polygon2DEditor *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00118e7b;
   }

   cVar5 = String::operator ==(param_1, "Polygon2DEditor");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00118e7b;
      }

      cVar5 = String::operator ==(param_1, "AbstractPolygon2DEditor");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = HBoxContainer::is_class((HBoxContainer*)this, param_1);
            return uVar6;
         }

         goto LAB_00118f7e;
      }

   }

   LAB_00118e7b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00118f7e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SplitContainer::is_class(String const&) const */undefined8 SplitContainer::is_class(SplitContainer *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011908b;
   }

   cVar5 = String::operator ==(param_1, "SplitContainer");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0011908b;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_0011918e;
      }

   }

   LAB_0011908b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011918e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HSplitContainer::is_class(String const&) const */undefined8 HSplitContainer::is_class(HSplitContainer *this, String_conflict *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0011929b;
   }

   cVar4 = String::operator ==(param_1, "HSplitContainer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = SplitContainer::is_class((SplitContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0011929b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HScrollBar::is_class(String const&) const */undefined8 HScrollBar::is_class(HScrollBar *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001193eb;
   }

   cVar5 = String::operator ==(param_1, "HScrollBar");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001193eb;
      }

      cVar5 = String::operator ==(param_1, "ScrollBar");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Range::is_class((Range*)this, param_1);
            return uVar6;
         }

         goto LAB_001194ee;
      }

   }

   LAB_001193eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001194ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ScrollBar::is_class(String const&) const */undefined8 ScrollBar::is_class(ScrollBar *this, String_conflict *param_1) {
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001195fb;
   }

   cVar5 = String::operator ==(param_1, "ScrollBar");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_001195fb;
      }

      cVar5 = String::operator ==(param_1, "Range");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_001196fe;
      }

   }

   LAB_001195fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001196fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VScrollBar::is_class(String const&) const */undefined8 VScrollBar::is_class(VScrollBar *this, String_conflict *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0011980b;
   }

   cVar4 = String::operator ==(param_1, "VScrollBar");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = ScrollBar::is_class((ScrollBar*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0011980b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC132;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC132;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001199bc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001199bc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "CanvasItem";
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_001270b0 != Object::_get_property_list) {
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
/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "EditorPlugin";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "EditorPlugin";
   local_90 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "EditorPlugin", false);
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
/* AbstractPolygon2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AbstractPolygon2DEditorPlugin::_get_property_listv(AbstractPolygon2DEditorPlugin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "AbstractPolygon2DEditorPlugin";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "AbstractPolygon2DEditorPlugin";
   local_90 = 0;
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AbstractPolygon2DEditorPlugin", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Polygon2DEditorPlugin::_get_property_listv(Polygon2DEditorPlugin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      AbstractPolygon2DEditorPlugin::_get_property_listv((AbstractPolygon2DEditorPlugin*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Polygon2DEditorPlugin";
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Polygon2DEditorPlugin";
   local_90 = 0;
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Polygon2DEditorPlugin", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AbstractPolygon2DEditorPlugin::_get_property_listv((AbstractPolygon2DEditorPlugin*)this, param_1, true);
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Control";
   local_90 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_001270b8 != CanvasItem::_get_property_list) {
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
/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Range::_get_property_listv(Range *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Range";
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Range";
   local_90 = 0;
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Range", false);
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
/* Slider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Slider::_get_property_listv(Slider *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Range::_get_property_listv((Range*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Slider";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Slider";
   local_90 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Slider", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Range::_get_property_listv((Range*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HSlider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HSlider::_get_property_listv(HSlider *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Slider::_get_property_listv((Slider*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "HSlider";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "HSlider";
   local_90 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "HSlider", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Slider::_get_property_listv((Slider*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ScrollBar::_get_property_listv(ScrollBar *this, List *param_1, bool param_2) {
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
      Range::_get_property_listv((Range*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ScrollBar";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ScrollBar";
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011aae1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011aae1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ScrollBar", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Range::_get_property_listv((Range*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VScrollBar::_get_property_listv(VScrollBar *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      ScrollBar::_get_property_listv((ScrollBar*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "VScrollBar";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "VScrollBar";
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "VScrollBar", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ScrollBar::_get_property_listv((ScrollBar*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HScrollBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HScrollBar::_get_property_listv(HScrollBar *this, List *param_1, bool param_2) {
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
      ScrollBar::_get_property_listv((ScrollBar*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HScrollBar";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HScrollBar";
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011af61;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011af61:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "HScrollBar", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ScrollBar::_get_property_listv((ScrollBar*)this, param_1, true);
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Container";
   local_90 = 0;
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SplitContainer::_get_property_listv(SplitContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "SplitContainer";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "SplitContainer";
   local_90 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "SplitContainer", false);
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
/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HSplitContainer::_get_property_listv(HSplitContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      SplitContainer::_get_property_listv((SplitContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "HSplitContainer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "HSplitContainer";
   local_90 = 0;
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "HSplitContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SplitContainer::_get_property_listv((SplitContainer*)this, param_1, true);
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "BoxContainer";
   local_90 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "VBoxContainer";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "HBoxContainer";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* AbstractPolygon2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void AbstractPolygon2DEditor::_get_property_listv(AbstractPolygon2DEditor *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      HBoxContainer::_get_property_listv((HBoxContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "AbstractPolygon2DEditor";
   local_70 = 0x17;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "AbstractPolygon2DEditor";
   local_90 = 0;
   local_70 = 0x17;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "AbstractPolygon2DEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         HBoxContainer::_get_property_listv((HBoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Polygon2DEditor::_get_property_listv(Polygon2DEditor *this, List *param_1, bool param_2) {
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
      AbstractPolygon2DEditor::_get_property_listv((AbstractPolygon2DEditor*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Polygon2DEditor";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Polygon2DEditor";
   local_98 = 0;
   local_70 = 0xf;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011bec1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011bec1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "Polygon2DEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AbstractPolygon2DEditor::_get_property_listv((AbstractPolygon2DEditor*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* WARNING: Removing unreachable block (ram,0x0011c128) *//* Polygon2DEditor::_notificationv(int, bool) */void Polygon2DEditor::_notificationv(Polygon2DEditor *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_001270c0 != BoxContainer::_notification) {
         AbstractPolygon2DEditor::_notification(iVar1);
      }

      for (int i = 0; i < 5; i++) {
         BoxContainer::_notification(iVar1);
      }

      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   if ((code*)PTR__notification_001270c0 != BoxContainer::_notification) {
      AbstractPolygon2DEditor::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* MethodBind* create_method_bind<Polygon2DEditor>(void (Polygon2DEditor::*)()) */MethodBind *create_method_bind<Polygon2DEditor>(_func_void *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_00120cd8;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Polygon2DEditor";
   local_30 = 0xf;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Polygon2DEditor::_initialize_classv() */void Polygon2DEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AbstractPolygon2DEditor::initialize_class() == '\0') {
         if (HBoxContainer::initialize_class() == '\0') {
            if (BoxContainer::initialize_class() == '\0') {
               if (Container::initialize_class() == '\0') {
                  if (Control::initialize_class() == '\0') {
                     if (CanvasItem::initialize_class() == '\0') {
                        if (Node::initialize_class() == '\0') {
                           Object::initialize_class();
                           local_60 = 0;
                           String::parse_latin1((String_conflict*)&local_60, "Object");
                           StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                           local_70 = 0;
                           String::parse_latin1((String_conflict*)&local_70, "Node");
                           StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                           ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                           if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                           if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           if ((code*)PTR__bind_methods_00127080 != Node::_bind_methods) {
                              Node::_bind_methods();
                           }

                           Node::initialize_class()::initialized =
                           '\x01';
                        }

                        local_60 = 0;
                        String::parse_latin1((String_conflict*)&local_60, "Node");
                        StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                        local_70 = 0;
                        String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                        StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
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
                        if ((code*)PTR__bind_compatibility_methods_00127088 != Object::_bind_compatibility_methods) {
                           CanvasItem::_bind_compatibility_methods();
                        }

                        CanvasItem::initialize_class()::initialized =
                        '\x01';
                     }

                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Control");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     Control::_bind_methods();
                     Control::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Control");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "Container");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  Container::_bind_methods();
                  Container::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "Container");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String_conflict*)&local_70, "BoxContainer");
               StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if ((code*)PTR__bind_methods_001270a8 != Container::_bind_methods) {
                  BoxContainer::_bind_methods();
               }

               BoxContainer::initialize_class()::initialized =
               '\x01';
            }

            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "BoxContainer");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "HBoxContainer");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            HBoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "HBoxContainer");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "AbstractPolygon2DEditor");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         AbstractPolygon2DEditor::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AbstractPolygon2DEditor";
      local_68 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "Polygon2DEditor";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector2>::_unref() */void CowData<Vector2>::_unref(CowData<Vector2> *this) {
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
/* CowData<Vector2>::_realloc(long) */undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) */undefined8 CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
   code *pcVar1;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar2 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar2 = lVar7 * 8;
      if (lVar2 != 0) {
         uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = uVar3 | uVar3 >> 0x10;
         lVar2 = ( uVar3 | uVar3 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0011cd70:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar3 = param_1 * 8 - 1;
   uVar3 = uVar3 >> 1 | uVar3;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   lVar6 = uVar3 + 1;
   if (lVar6 == 0) goto LAB_0011cd70;
   if (param_1 <= lVar7) {
      if (( lVar6 != lVar2 ) && ( uVar5 = _realloc(this, lVar6) ),(int)uVar5 != 0) {
         return uVar5;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (lVar6 == lVar2) {
      LAB_0011ccfc:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_0011cca1;
   }
 else {
      if (lVar7 != 0) {
         uVar5 = _realloc(this, lVar6);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

         goto LAB_0011ccfc;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   memset(puVar8 + lVar7, 0, ( param_1 - lVar7 ) * 8);
   LAB_0011cca1:puVar8[-1] = param_1;
   return 0;
}
/* Vector<Vector2>::remove_at(long) */void Vector<Vector2>::remove_at(Vector<Vector2> *this, long param_1) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 8 );
   if (param_1 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         goto LAB_0011ce91;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_1 < lVar2) {
         CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( this + 8 ));
         lVar2 = *(long*)( this + 8 );
         if (lVar2 == 0) {
            lVar1 = -1;
         }
 else {
            lVar1 = *(long*)( lVar2 + -8 ) + -1;
            if (param_1 < lVar1) {
               memmove((void*)( lVar2 + param_1 * 8 ), (void*)( lVar2 + 8 + param_1 * 8 ), ( *(long*)( lVar2 + -8 ) - param_1 ) * 8 - 8);
            }

         }

         CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 8 ), lVar1);
         return;
      }

      goto LAB_0011ce91;
   }

   lVar2 = 0;
   LAB_0011ce91:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar2, "p_index", "size()", "", false, false);
   return;
}
/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
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
/* CowData<float>::_unref() */void CowData<float>::_unref(CowData<float> *this) {
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
/* CowData<Color>::_unref() */void CowData<Color>::_unref(CowData<Color> *this) {
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
/* Polygon2DEditor::~Polygon2DEditor() */void Polygon2DEditor::~Polygon2DEditor(Polygon2DEditor *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   *(undefined***)this = &PTR__initialize_classv_001203d0;
   if (*(long*)( this + 0xc88 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xc88 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xc88 );
         *(undefined8*)( this + 0xc88 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Array::~Array((Array*)( this + 0xc68 ));
   Array::~Array((Array*)( this + 0xc60 ));
   CowData<Color>::_unref((CowData<Color>*)( this + 0xc50 ));
   for (int i = 0; i < 3; i++) {
      CowData<Vector2>::_unref((CowData<Vector2>*)( this + ( -16*i + 3136 ) ));
   }

   CowData<float>::_unref((CowData<float>*)( this + 0xc00 ));
   if (*(long*)( this + 0xba0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0xba0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(code**)this = Array::Array;
   CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xa78 ));
   CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xa68 ));
   bVar5 = StringName::configured != '\0';
   *(code**)this = Control::_notification;
   if (bVar5) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011d0a6;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0011d0a6:Control::~Control((Control*)this);
   return;
}
/* Polygon2DEditor::~Polygon2DEditor() */void Polygon2DEditor::~Polygon2DEditor(Polygon2DEditor *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   *(undefined***)this = &PTR__initialize_classv_001203d0;
   if (*(long*)( this + 0xc88 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xc88 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xc88 );
         *(undefined8*)( this + 0xc88 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Array::~Array((Array*)( this + 0xc68 ));
   Array::~Array((Array*)( this + 0xc60 ));
   CowData<Color>::_unref((CowData<Color>*)( this + 0xc50 ));
   for (int i = 0; i < 3; i++) {
      CowData<Vector2>::_unref((CowData<Vector2>*)( this + ( -16*i + 3136 ) ));
   }

   CowData<float>::_unref((CowData<float>*)( this + 0xc00 ));
   if (*(long*)( this + 0xba0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0xba0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(code**)this = Array::Array;
   CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xa78 ));
   CowData<Vector2>::_unref((CowData<Vector2>*)( this + 0xa68 ));
   bVar5 = StringName::configured != '\0';
   *(code**)this = Control::_notification;
   if (bVar5) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0011d226;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0011d226:Control::~Control((Control*)this);
   operator_delete(this, 0xcc0);
   return;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   code *pcVar1;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar2 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar2 = lVar8 * 4;
      if (lVar2 != 0) {
         uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = uVar3 | uVar3 >> 0x10;
         lVar2 = ( uVar3 | uVar3 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_0011d510:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar3 = param_1 * 4 - 1;
   uVar3 = uVar3 | uVar3 >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   lVar7 = uVar3 + 1;
   if (lVar7 == 0) goto LAB_0011d510;
   if (lVar8 < param_1) {
      if (lVar7 != lVar2) {
         if (lVar8 == 0) {
            puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8**)this = puVar6;
            goto LAB_0011d441;
         }

         uVar5 = _realloc(this, lVar7);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

      }

      puVar6 = *(undefined8**)this;
      if (puVar6 != (undefined8*)0x0) {
         LAB_0011d441:puVar6[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar7 != lVar2 ) && ( uVar5 = _realloc(this, lVar7) ),(int)uVar5 != 0) {
         return uVar5;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<float>::_realloc(long) */undefined8 CowData<float>::_realloc(CowData<float> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) */undefined8 CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   code *pcVar1;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar2 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar2 = lVar8 * 4;
      if (lVar2 != 0) {
         uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = uVar3 | uVar3 >> 0x10;
         lVar2 = ( uVar3 | uVar3 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_0011d7d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar3 = param_1 * 4 - 1;
   uVar3 = uVar3 | uVar3 >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   lVar7 = uVar3 + 1;
   if (lVar7 == 0) goto LAB_0011d7d0;
   if (lVar8 < param_1) {
      if (lVar7 != lVar2) {
         if (lVar8 == 0) {
            puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8**)this = puVar6;
            goto LAB_0011d701;
         }

         uVar5 = _realloc(this, lVar7);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

      }

      puVar6 = *(undefined8**)this;
      if (puVar6 != (undefined8*)0x0) {
         LAB_0011d701:puVar6[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar7 != lVar2 ) && ( uVar5 = _realloc(this, lVar7) ),(int)uVar5 != 0) {
         return uVar5;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Color>::_realloc(long) */undefined8 CowData<Color>::_realloc(CowData<Color> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Color>::resize<false>(long) */undefined8 CowData<Color>::resize<false>(CowData<Color> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar11 = 0;
      lVar3 = 0;
   }
 else {
      lVar11 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar11) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar11 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_0011dae0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x10 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar10 = uVar4 + 1;
   if (lVar10 == 0) goto LAB_0011dae0;
   if (param_1 <= lVar11) {
      if (( lVar10 != lVar3 ) && ( uVar8 = _realloc(this, lVar10) ),(int)uVar8 != 0) {
         return uVar8;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (lVar10 == lVar3) {
      LAB_0011da6c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar11 = puVar9[-1];
      if (param_1 <= lVar11) goto LAB_0011da10;
   }
 else {
      if (lVar11 != 0) {
         uVar8 = _realloc(this, lVar10);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_0011da6c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar11 = 0;
   }

   uVar2 = _UNK_00121128;
   uVar8 = __LC208;
   puVar6 = puVar9 + lVar11 * 2;
   puVar5 = puVar6;
   if (( ( param_1 - lVar11 ) * 0x10 & 0x10U ) != 0) {
      *puVar6 = __LC208;
      puVar6[1] = uVar2;
      puVar5 = puVar6 + 2;
      if (puVar6 + ( param_1 - lVar11 ) * 2 == puVar6 + 2) goto LAB_0011da10;
   }

   do {
      *puVar5 = uVar8;
      puVar5[1] = uVar2;
      puVar7 = puVar5 + 4;
      puVar5[2] = uVar8;
      puVar5[3] = uVar2;
      puVar5 = puVar7;
   }
 while ( puVar6 + ( param_1 - lVar11 ) * 2 != puVar7 );
   LAB_0011da10:puVar9[-1] = param_1;
   return 0;
}
/* Vector<Color>::remove_at(long) */void Vector<Color>::remove_at(Vector<Color> *this, long param_1) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( this + 8 );
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_0011dbd9;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (param_1 < lVar1) {
         CowData<Color>::_copy_on_write((CowData<Color>*)( this + 8 ));
         lVar1 = *(long*)( this + 8 );
         if (lVar1 == 0) {
            lVar2 = -1;
         }
 else {
            lVar2 = *(long*)( lVar1 + -8 ) + -1;
            if (param_1 < lVar2) {
               memmove((void*)( lVar1 + param_1 * 0x10 ), (void*)( lVar1 + 0x10 + param_1 * 0x10 ), ( ( *(long*)( lVar1 + -8 ) - param_1 ) + -1 ) * 0x10);
            }

         }

         CowData<Color>::resize<false>((CowData<Color>*)( this + 8 ), lVar2);
         return;
      }

      goto LAB_0011dbd9;
   }

   lVar1 = 0;
   LAB_0011dbd9:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar1, "p_index", "size()", "", false, false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0011dd88) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((CowData<char32_t>*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011e070;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )();
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

   LAB_0011e070:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011e47f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011e326. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011e47f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011e63f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011e4e6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011e63f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Polygon2DEditor::_get_node() const */void Polygon2DEditor::_GLOBAL__sub_I__get_node(void) {
   undefined8 uStack_8;
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (MenuButton::base_property_helper != '\0') {
      return;
   }

   MenuButton::base_property_helper = 1;
   MenuButton::base_property_helper._64_8_ = 0;
   MenuButton::base_property_helper._56_8_ = 2;
   MenuButton::base_property_helper._0_16_ = (undefined1[16])0x0;
   MenuButton::base_property_helper._24_16_ = (undefined1[16])0x0;
   MenuButton::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, MenuButton::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* Polygon2DEditor::~Polygon2DEditor() */void Polygon2DEditor::~Polygon2DEditor(Polygon2DEditor *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSlider::~HSlider() */void HSlider::~HSlider(HSlider *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HScrollBar::~HScrollBar() */void HScrollBar::~HScrollBar(HScrollBar *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VScrollBar::~VScrollBar() */void VScrollBar::~VScrollBar(VScrollBar *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Polygon2DEditorPlugin::~Polygon2DEditorPlugin() */void Polygon2DEditorPlugin::~Polygon2DEditorPlugin(Polygon2DEditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<CanvasItem,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Vector2,Ref<InputEvent>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,float,Vector2,Ref<InputEvent>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Polygon2DEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Polygon2DEditor,void,Ref<InputEvent>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ViewPanner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ViewPanner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ViewPanner,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

