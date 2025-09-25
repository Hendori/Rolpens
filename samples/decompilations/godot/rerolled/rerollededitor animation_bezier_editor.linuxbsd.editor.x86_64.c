/* AnimationBezierTrackEdit::get_minimum_size() const */undefined8 AnimationBezierTrackEdit::get_minimum_size(void) {
   return 0x3f8000003f800000;
}
/* AnimationBezierTrackEdit::_zoom_changed() */void AnimationBezierTrackEdit::_zoom_changed(void) {
   CanvasItem::queue_redraw();
   CanvasItem::queue_redraw();
   return;
}
/* AnimationBezierTrackEdit::_bezier_track_insert_key_at_anim(Ref<Animation> const&, int, double,
   float, Vector2 const&, Vector2 const&, Animation::HandleMode) */void AnimationBezierTrackEdit::_bezier_track_insert_key_at_anim(double param_3, float param_4, undefined8 param_3_00, undefined8 *param_1, uint param_2, Vector2 *param_5, undefined8 param_7, undefined4 param_8) {
   undefined4 uVar1;
   uVar1 = Animation::bezier_track_insert_key((int)*param_1, param_3, param_4, (Vector2*)(ulong)param_2, param_5);
   Animation::bezier_track_set_key_handle_mode(*param_1, param_2, uVar1, param_8, 0);
   return;
}
/* CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write() [clone .isra.0] */void CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(CowData<AnimationBezierTrackEdit::EditPoint> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x38;
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
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
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
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */undefined8 HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this, int *param_1, uint *param_2) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   int iVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)this != 0) {
      if (*(int*)( this + 0x24 ) == 0) {
         return 0;
      }

      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar10 = ( ( uint )((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1 ) * -0x7a143595;
      uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
      uVar14 = uVar10 ^ uVar10 >> 0x10;
      if (uVar10 == uVar10 >> 0x10) {
         uVar14 = 1;
         uVar12 = uVar1;
      }
 else {
         uVar12 = uVar14 * uVar1;
      }

      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ));
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar15;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar12;
      lVar13 = SUB168(auVar2 * auVar6, 8);
      uVar10 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar10 != 0) {
         uVar16 = 0;
         do {
            if (( uVar14 == uVar10 ) && ( uVar10 = *(uint*)( *(long*)( this + 8 ) + lVar13 * 4 ) * (uint*)( *(long*)this + (ulong)uVar10 * 4 ) == (uint)param_1 )) {
               *param_2 = uVar10;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( iVar11 + 1 ) * uVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar13 = SUB168(auVar3 * auVar7, 8);
            uVar10 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   return 0;
}
/* void EditorUndoRedoManager::add_undo_method<Ref<Animation>, int, float, bool>(Object*, StringName
   const&, Ref<Animation>, int, float, bool) [clone .isra.0] */void EditorUndoRedoManager::add_undo_method<Ref<Animation>,int,float,bool>(float param_1_00, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Object *param_5, int param_6, bool param_7) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_5);
   Variant::Variant(local_a0, param_6);
   Variant::Variant(local_88, param_1_00);
   pVVar2 = (Variant*)local_40;
   Variant::Variant(local_70, param_7);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)&local_e8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_do_method<Ref<Animation>, int, float, bool>(Object*, StringName
   const&, Ref<Animation>, int, float, bool) [clone .isra.0] */void EditorUndoRedoManager::add_do_method<Ref<Animation>,int,float,bool>(float param_1_00, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Object *param_5, int param_6, bool param_7) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_5);
   Variant::Variant(local_a0, param_6);
   Variant::Variant(local_88, param_1_00);
   pVVar2 = (Variant*)local_40;
   Variant::Variant(local_70, param_7);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)&local_e8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<Ref<Animation> >(Object*, StringName const&,
   Ref<Animation>) [clone .isra.0] */void EditorUndoRedoManager::add_undo_method<Ref<Animation>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Object *param_4) {
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
/* void EditorUndoRedoManager::add_do_method<Ref<Animation> >(Object*, StringName const&,
   Ref<Animation>) [clone .isra.0] */void EditorUndoRedoManager::add_do_method<Ref<Animation>>(EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, Object *param_4) {
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
/* Error Object::emit_signal<>(StringName const&) [clone .isra.0] */void Object::emit_signal<>(Object *this, StringName *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0xd0 ) )(this, param_1, 0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationBezierTrackEdit::_play_position_draw() */void AnimationBezierTrackEdit::_play_position_draw(AnimationBezierTrackEdit *this) {
   Vector2 *pVVar1;
   undefined1 auVar2[16];
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float extraout_XMM0_Db;
   double dVar7;
   undefined8 local_58;
   float local_50[2];
   undefined1 local_48[16];
   long local_30;
   auVar2._8_8_ = local_48._8_8_;
   auVar2._0_8_ = local_48._0_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x9e8 ) != 0 ) && ( local_48 = auVar2 ),0.0 < *(float*)( this + 0x9e0 ) || *(float*)( this + 0x9e0 ) == 0.0) {
      fVar5 = (float)AnimationTimelineEdit::get_zoom_scale();
      Control::get_size();
      iVar3 = AnimationTimelineEdit::get_name_limit();
      fVar6 = *(float*)( this + 0x9e0 );
      dVar7 = (double)Range::get_value();
      iVar4 = (int)( ( (double)fVar6 - dVar7 ) * (double)fVar5 + (double)iVar3 );
      if (iVar3 <= iVar4) {
         fVar5 = (float)iVar4;
         fVar6 = (float)Control::get_size();
         if (fVar5 < fVar6) {
            if (_play_position_draw()::{lambda()
            #1
            iVar3 = __cxa_guard_acquire(&_play_position_draw()::, {
                  lambda()
                  #1
                  if (iVar3 != 0) {
                     _scs_create((char *)&_play_position_draw()::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName, &_play_position_draw()::, {
                           lambda()
                           #1
                           __cxa_guard_release(&_play_position_draw()::{lambda()#1}::operator()()::sname);
          }
        }
        local_48 = Control::get_theme_color
                             ((StringName *)this,
                              (StringName *)
                              &_play_position_draw()::{lambda()
                           #1
                           pVVar1 = *(Vector2**)( this + 0x9d8 );
                           fVar6 = (float)EditorScale::get_scale();
                           fVar6 = roundf(fVar6 + fVar6);
                           local_50[1] = 0.0;
                           local_58 = CONCAT44((float)(int)extraout_XMM0_Db, fVar5);
                           local_50[0] = fVar5;
                           CanvasItem::draw_line(pVVar1, (Vector2*)local_50, (Color*)&local_58, fVar6, SUB81(local_48, 0));
                        }
, }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28);
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }
, /* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare, DefaultAllocator>::has(Pair<int,
   int> const&) const [clone .isra.0] */, undefined8
RBSet<Pair<int,int>, AnimationBezierTrackEdit::PairCompare, DefaultAllocator>::has(Pair *param_1), {
                  long lVar1;
                  int in_ECX;
                  int in_EDX;
                  long in_RSI;
                  if (param_1 != (Pair*)0x0) {
                     for (lVar1 = *(long*)( param_1 + 0x10 ); in_RSI != lVar1; lVar1 = *(long*)( lVar1 + 8 )) {
                        LAB_00100ad5:if (in_EDX != *(int*)( lVar1 + 0x30 )) {
                           if (*(int*)( lVar1 + 0x30 ) <= in_EDX) goto LAB_00100af7;
                           LAB_00100adc:lVar1 = *(long*)( lVar1 + 0x10 );
                           if (in_RSI == lVar1) {
                              return 0;
                           }

                           goto LAB_00100ad5;
                        }

                        if (in_ECX < *(int*)( lVar1 + 0x34 )) goto LAB_00100adc;
                        if (in_ECX <= *(int*)( lVar1 + 0x34 )) {
                           return 1;
                        }

                        LAB_00100af7:;
                     }

                  }

                  return 0;
               }
, /* Ref<TextServer>::TEMPNAMEPLACEHOLDERVALUE(Ref<TextServer> const&) [clone .isra.0] */, void __thiscall Ref<TextServer>::operator=(Ref<TextServer> *this, Ref * param_1);
            {
               Object *pOVar1;
               char cVar2;
               pOVar1 = *(Object**)this;
               if (pOVar1 != (Object*)param_1) {
                  *(Ref**)this = param_1;
                  if (param_1 != (Ref*)0x0) {
                     cVar2 = RefCounted::reference();
                     if (cVar2 == '\0') {
                        *(undefined8*)this = 0;
                     }

                  }

                  if (pOVar1 != (Object*)0x0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        cVar2 = predelete_handler(pOVar1);
                        if (cVar2 != '\0') {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                           return;
                        }

                     }

                  }

               }

               return;
            }

            /* AnimationBezierTrackEdit::_pan_callback(Vector2, Ref<InputEvent>) */
            void AnimationBezierTrackEdit::_pan_callback(undefined8 param_1, AnimationBezierTrackEdit *this, long *param_3) {
               char cVar1;
               int iVar2;
               Object *pOVar3;
               float fVar4;
               float fVar5;
               double dVar6;
               if (( ( *param_3 != 0 ) && ( pOVar3 = (Object*)__dynamic_cast(*param_3, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0) ),pOVar3 != (Object*)0x0 )) {
                  fVar4 = (float)InputEventMouse::get_position();
                  iVar2 = AnimationTimelineEdit::get_name_limit();
                  fVar5 = (float)( (ulong)param_1 >> 0x20 );
                  if (fVar4 <= (float)iVar2) {
                     fVar5 = fVar5 + *(float*)( this + 0xaa8 );
                     fVar4 = (float)( *(uint*)( this + 0xaac ) ^ _LC15 );
                     *(float*)( this + 0xaa8 ) = fVar5;
                     if (( fVar5 < fVar4 ) || ( fVar4 = 0.0 < fVar5 )) {
                        *(float*)( this + 0xaa8 ) = fVar4;
                     }

                  }
 else {
                     fVar4 = fVar5 * *(float*)( this + 0xab4 ) + *(float*)( this + 0xab0 );
                     fVar5 = _LC13;
                     if (( _LC13 <= fVar4 ) && ( fVar5 = _LC14 < fVar4 )) {
                        fVar5 = _LC14;
                     }

                     *(float*)( this + 0xab0 ) = fVar5;
                     dVar6 = (double)Range::get_value();
                     fVar5 = (float)AnimationTimelineEdit::get_zoom_scale();
                     Range::set_value(dVar6 - (double)( (float)param_1 / fVar5 ));
                  }

                  CanvasItem::queue_redraw();
                  cVar1 = RefCounted::unreference();
                  if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                     return;
                  }

               }

               return;
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* AnimationBezierTrackEdit::_zoom_callback(float, Vector2, Ref<InputEvent>) */
            void AnimationBezierTrackEdit::_zoom_callback(float param_1, undefined8 param_2, AnimationBezierTrackEdit *this, long *param_4) {
               float fVar1;
               long lVar2;
               char cVar3;
               Object *pOVar4;
               undefined8 uVar5;
               long in_FS_OFFSET;
               undefined4 uVar6;
               float fVar7;
               float extraout_XMM0_Db;
               Object *local_38;
               fVar1 = *(float*)( this + 0xab4 );
               local_38 = (Object*)*param_4;
               lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
               if (local_38 == (Object*)0x0) {
                  uVar5 = *(undefined8*)( this + 0x9c8 );
                  pOVar4 = (Object*)0x0;
                  uVar6 = _LC17;
                  if (param_1 <= _LC19) {
                     uVar6 = _LC18;
                  }

                  LAB_00100fdb:local_38 = (Object*)0x0;
               }
 else {
                  pOVar4 = (Object*)__dynamic_cast(local_38, &Object::typeinfo, &InputEventWithModifiers::typeinfo, 0);
                  if (pOVar4 == (Object*)0x0) {
                     uVar5 = *(undefined8*)( this + 0x9c8 );
                     uVar6 = _LC17;
                     if (param_1 <= _LC19) {
                        uVar6 = _LC18;
                     }

                  }
 else {
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        local_38 = (Object*)*param_4;
                        pOVar4 = (Object*)0x0;
                     }
 else {
                        cVar3 = InputEventWithModifiers::is_alt_pressed();
                        if (cVar3 != '\0') {
                           param_1 = *(float*)( this + 0xab4 ) / param_1;
                           fVar7 = _LC16;
                           if (( _LC20 <= (double)param_1 ) && ( fVar7 = _LC14 < param_1 )) {
                              fVar7 = _LC14;
                           }

                           *(float*)( this + 0xab4 ) = fVar7;
                           goto LAB_00100e43;
                        }

                        local_38 = (Object*)*param_4;
                     }

                     uVar6 = _LC17;
                     if (param_1 <= _LC19) {
                        uVar6 = _LC18;
                     }

                     uVar5 = *(undefined8*)( this + 0x9c8 );
                     if (local_38 == (Object*)0x0) goto LAB_00100fdb;
                  }

                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_38 = (Object*)0x0;
                  }

               }

               AnimationTimelineEdit::_zoom_callback(uVar6, param_2, uVar5);
               if (( ( local_38 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
               Memory::free_static(local_38, false);
            }

            LAB_00100e43:fVar7 = *(float*)( this + 0xab0 );
            Control::get_size();
            *(float*)( this + 0xab0 ) = (float)( ( (double)(float)( (ulong)param_2 >> 0x20 ) - (double)extraout_XMM0_Db * __LC21 ) * (double)( *(float*)( this + 0xab4 ) - fVar1 ) + (double)fVar7 );
            CanvasItem::queue_redraw();
            if (( ( pOVar4 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) {
               if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }
 else {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(pOVar4, false);
                  return;
               }

            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* Ref<Animation>::TEMPNAMEPLACEHOLDERVALUE(Ref<Animation> const&) [clone .isra.0] */
         void Ref<Animation>::operator =(Ref<Animation> *this, Ref *param_1) {
            Object *pOVar1;
            char cVar2;
            pOVar1 = *(Object**)this;
            if (pOVar1 != (Object*)param_1) {
               *(Ref**)this = param_1;
               if (param_1 != (Ref*)0x0) {
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *(undefined8*)this = 0;
                  }

               }

               if (pOVar1 != (Object*)0x0) {
                  cVar2 = RefCounted::unreference();
                  if (cVar2 != '\0') {
                     cVar2 = predelete_handler(pOVar1);
                     if (cVar2 != '\0') {
                        ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                        Memory::free_static(pOVar1, false);
                        return;
                     }

                  }

               }

            }

            return;
         }

         /* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare, DefaultAllocator>::_insert(Pair<int,
   int> const&) [clone .isra.0] */
         void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert(RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator> *this, Pair *param_1) {
            int iVar1;
            long lVar2;
            long lVar3;
            long lVar4;
            int *piVar5;
            int *piVar6;
            int *piVar7;
            int *piVar8;
            int *piVar9;
            int *piVar10;
            int *piVar11;
            int *piVar12;
            bool bVar13;
            piVar12 = *(int**)this;
            if (*(int**)( piVar12 + 4 ) != *(int**)( this + 8 )) {
               piVar10 = *(int**)( piVar12 + 4 );
               do {
                  piVar12 = piVar10;
                  if (*(int*)param_1 == piVar12[0xc]) {
                     if (*(int*)( param_1 + 4 ) < piVar12[0xd]) goto LAB_00101112;
                     if (*(int*)( param_1 + 4 ) <= piVar12[0xd]) {
                        return;
                     }

                     LAB_00101131:piVar10 = *(int**)( piVar12 + 2 );
                  }
 else {
                     if (piVar12[0xc] <= *(int*)param_1) goto LAB_00101131;
                     LAB_00101112:piVar10 = *(int**)( piVar12 + 4 );
                  }

               }
 while ( piVar10 != *(int**)( this + 8 ) );
            }

            piVar5 = (int*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined1(*) [16])( piVar5 + 8 ) = (undefined1[16])0x0;
            piVar10 = *(int**)( this + 8 );
            *piVar5 = 0;
            piVar5[0xc] = 0;
            piVar5[0xd] = 0;
            *(int**)( piVar5 + 6 ) = piVar12;
            *(int**)( piVar5 + 2 ) = piVar10;
            *(int**)( piVar5 + 4 ) = piVar10;
            *(undefined8*)( piVar5 + 0xc ) = *(undefined8*)param_1;
            if (*(int**)this == piVar12) {
               LAB_00101304:*(int**)( piVar12 + 4 ) = piVar5;
               piVar8 = *(int**)( this + 8 );
               piVar9 = *(int**)( piVar5 + 4 );
               piVar11 = *(int**)this;
               piVar7 = piVar10;
               if (piVar10 == piVar8) {
                  piVar6 = piVar12;
                  piVar7 = piVar12;
                  if (piVar5 == *(int**)( piVar12 + 2 )) goto LAB_00101348;
                  LAB_00101355:piVar10 = piVar9;
                  if (piVar11 == piVar6) {
                     piVar6 = (int*)0x0;
                  }

               }
 else {
                  LAB_00101320:do {
                     piVar6 = piVar7;
                     piVar10 = piVar9;
                     piVar7 = *(int**)( piVar6 + 4 );
                  }
 while ( piVar8 != *(int**)( piVar6 + 4 ) );
               }

            }
 else {
               bVar13 = *(int*)param_1 < piVar12[0xc];
               if (*(int*)param_1 == piVar12[0xc]) {
                  bVar13 = *(int*)( param_1 + 4 ) < piVar12[0xd];
               }

               if (bVar13) goto LAB_00101304;
               *(int**)( piVar12 + 2 ) = piVar5;
               piVar6 = *(int**)( piVar5 + 2 );
               piVar8 = *(int**)( this + 8 );
               piVar11 = *(int**)this;
               piVar7 = piVar12;
               piVar9 = piVar10;
               if (piVar8 == piVar6) {
                  LAB_00101348:do {
                     piVar6 = *(int**)( piVar7 + 6 );
                     bVar13 = piVar7 == *(int**)( piVar6 + 2 );
                     piVar7 = piVar6;
                  }
 while ( bVar13 );
                  goto LAB_00101355;
               }

               piVar7 = *(int**)( piVar6 + 4 );
               if (piVar8 != *(int**)( piVar6 + 4 )) goto LAB_00101320;
            }

            *(int**)( piVar5 + 8 ) = piVar6;
            piVar8 = *(int**)this;
            if (*(int**)( this + 8 ) == piVar10) {
               piVar10 = piVar5;
               piVar9 = piVar12;
               piVar11 = piVar12;
               if (piVar5 == *(int**)( piVar12 + 4 )) {
                  do {
                     piVar9 = *(int**)( piVar11 + 6 );
                     bVar13 = piVar11 == *(int**)( piVar9 + 4 );
                     piVar10 = piVar11;
                     piVar11 = piVar9;
                  }
 while ( bVar13 );
               }

               if (piVar8 != piVar10) goto LAB_0010120c;
               piVar5[10] = 0;
               piVar5[0xb] = 0;
               if (piVar6 == (int*)0x0) goto LAB_00101226;
               LAB_00101215:*(int**)( piVar6 + 10 ) = piVar5;
               piVar9 = *(int**)( piVar5 + 10 );
               if (piVar9 == (int*)0x0) goto LAB_00101226;
            }
 else {
               do {
                  piVar9 = piVar10;
                  piVar10 = *(int**)( piVar9 + 2 );
               }
 while ( *(int**)( this + 8 ) != *(int**)( piVar9 + 2 ) );
               LAB_0010120c:*(int**)( piVar5 + 10 ) = piVar9;
               if (piVar6 != (int*)0x0) goto LAB_00101215;
            }

            *(int**)( piVar9 + 8 ) = piVar5;
            LAB_00101226:iVar1 = *piVar12;
            *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
            if (iVar1 == 0) {
               do {
                  while (true) {
                     piVar10 = *(int**)( piVar12 + 6 );
                     piVar8 = *(int**)( piVar10 + 4 );
                     if (piVar8 != piVar12) break;
                     piVar8 = *(int**)( piVar10 + 2 );
                     if (*piVar8 == 0) goto LAB_001012bd;
                     piVar8 = piVar12;
                     if (*(int**)( piVar12 + 2 ) == piVar5) {
                        lVar2 = *(long*)( this + 8 );
                        lVar3 = *(long*)( piVar5 + 4 );
                        *(long*)( piVar12 + 2 ) = lVar3;
                        if (lVar2 == lVar3) {
                           *(int**)( piVar5 + 6 ) = piVar10;
                           piVar8 = piVar10;
                           LAB_00101580:*(int**)( piVar8 + 4 ) = piVar5;
                        }
 else {
                           *(int**)( lVar3 + 0x18 ) = piVar12;
                           piVar8 = *(int**)( piVar12 + 6 );
                           *(int**)( piVar5 + 6 ) = piVar8;
                           if (piVar12 == *(int**)( piVar8 + 4 )) goto LAB_00101580;
                           *(int**)( piVar8 + 2 ) = piVar5;
                        }

                        *(int**)( piVar5 + 4 ) = piVar12;
                        *(int**)( piVar12 + 6 ) = piVar5;
                        piVar8 = piVar5;
                        piVar5 = piVar12;
                     }

                     piVar12 = *(int**)( this + 8 );
                     *piVar8 = 1;
                     if (piVar10 == piVar12) {
                        _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
                     }
 else {
                        *piVar10 = 0;
                     }

                     lVar2 = *(long*)( piVar10 + 4 );
                     lVar3 = *(long*)( this + 8 );
                     lVar4 = *(long*)( lVar2 + 8 );
                     *(long*)( piVar10 + 4 ) = lVar4;
                     if (lVar3 != lVar4) {
                        *(int**)( lVar4 + 0x18 ) = piVar10;
                     }

                     lVar3 = *(long*)( piVar10 + 6 );
                     *(long*)( lVar2 + 0x18 ) = lVar3;
                     if (piVar10 == *(int**)( lVar3 + 8 )) {
                        *(long*)( lVar3 + 8 ) = lVar2;
                     }
 else {
                        *(long*)( lVar3 + 0x10 ) = lVar2;
                     }

                     *(int**)( lVar2 + 8 ) = piVar10;
                     *(long*)( piVar10 + 6 ) = lVar2;
                     LAB_001012a0:piVar12 = piVar8;
                     if (*piVar8 != 0) goto LAB_001012eb;
                  }
;
                  if (*piVar8 != 0) {
                     piVar8 = *(int**)( piVar12 + 4 );
                     if (piVar5 == piVar8) {
                        lVar2 = *(long*)( this + 8 );
                        lVar3 = *(long*)( piVar8 + 2 );
                        *(long*)( piVar12 + 4 ) = lVar3;
                        piVar5 = piVar10;
                        if (lVar2 != lVar3) {
                           *(int**)( lVar3 + 0x18 ) = piVar12;
                           piVar5 = *(int**)( piVar12 + 6 );
                        }

                        *(int**)( piVar8 + 6 ) = piVar5;
                        if (piVar12 == *(int**)( piVar5 + 2 )) {
                           *(int**)( piVar5 + 2 ) = piVar8;
                        }
 else {
                           *(int**)( piVar5 + 4 ) = piVar8;
                        }

                        *(int**)( piVar8 + 2 ) = piVar12;
                        *(int**)( piVar12 + 6 ) = piVar8;
                        piVar5 = *(int**)( this + 8 );
                        *piVar8 = 1;
                        if (piVar10 != piVar5) goto LAB_00101261;
                        LAB_00101448:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
                        piVar5 = piVar12;
                     }
 else {
                        piVar9 = *(int**)( this + 8 );
                        *piVar12 = 1;
                        piVar8 = piVar12;
                        piVar12 = piVar5;
                        if (piVar10 == piVar9) goto LAB_00101448;
                        LAB_00101261:*piVar10 = 0;
                        piVar5 = piVar12;
                     }

                     lVar2 = *(long*)( piVar10 + 2 );
                     lVar3 = *(long*)( this + 8 );
                     lVar4 = *(long*)( lVar2 + 0x10 );
                     *(long*)( piVar10 + 2 ) = lVar4;
                     if (lVar3 != lVar4) {
                        *(int**)( lVar4 + 0x18 ) = piVar10;
                     }

                     lVar3 = *(long*)( piVar10 + 6 );
                     *(long*)( lVar2 + 0x18 ) = lVar3;
                     if (piVar10 == *(int**)( lVar3 + 0x10 )) {
                        *(long*)( lVar3 + 0x10 ) = lVar2;
                     }
 else {
                        *(long*)( lVar3 + 8 ) = lVar2;
                     }

                     *(int**)( lVar2 + 0x10 ) = piVar10;
                     *(long*)( piVar10 + 6 ) = lVar2;
                     goto LAB_001012a0;
                  }

                  LAB_001012bd:piVar5 = *(int**)( this + 8 );
                  *piVar12 = 1;
                  *piVar8 = 1;
                  if (piVar10 == piVar5) {
                     _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
                  }
 else {
                     *piVar10 = 0;
                  }

                  piVar12 = *(int**)( piVar10 + 6 );
                  piVar5 = piVar10;
               }
 while ( **(int**)( piVar10 + 6 ) == 0 );
               LAB_001012eb:piVar8 = *(int**)this;
            }

            **(undefined4**)( piVar8 + 4 ) = 1;
            return;
         }

         /* AnimationBezierTrackEdit::_select_at_anim(Ref<Animation> const&, int, float, bool) */
         void AnimationBezierTrackEdit::_select_at_anim(AnimationBezierTrackEdit *this, Ref *param_1, int param_2, float param_3, bool param_4) {
            Variant *pVVar1;
            undefined8 uVar2;
            char cVar3;
            int iVar4;
            int iVar5;
            undefined4 *puVar6;
            Variant *pVVar7;
            long in_FS_OFFSET;
            int local_d0;
            int local_cc;
            Variant *local_c8;
            Variant *pVStack_c0;
            Variant *local_b8;
            Variant local_a8[24];
            Variant local_90[24];
            Variant local_78[24];
            undefined8 local_60;
            undefined1 local_58[16];
            Variant local_48[8];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)param_1 == *(long*)( this + 0x9e8 )) {
               cVar3 = CanvasItem::is_visible();
               if (cVar3 != '\0') {
                  iVar4 = Animation::track_find_key((double)param_3, *(undefined8*)( this + 0x9e8 ), param_2, 1, 0, 0);
                  if (iVar4 < 0) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        _err_print_error("_select_at_anim", "editor/animation_bezier_editor.cpp", 0x37f, "Condition \"idx < 0\" is true.", 0, 0);
                        return;
                     }

                  }
 else {
                     local_d0 = param_2;
                     local_cc = iVar4;
                     if (*(long*)( this + 0xba0 ) == 0) {
                        puVar6 = (undefined4*)operator_new(0x38, DefaultAllocator::alloc);
                        *(undefined1(*) [16])( puVar6 + 8 ) = (undefined1[16])0x0;
                        uVar2 = *(undefined8*)( this + 0xba8 );
                        *(undefined8*)( puVar6 + 0xc ) = 0;
                        *(undefined4**)( this + 0xba0 ) = puVar6;
                        *puVar6 = 1;
                        for (int i = 0; i < 3; i++) {
                           *(undefined8*)( puVar6 + ( 2*i + 2 ) ) = uVar2;
                        }

                     }

                     RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ), (Pair*)&local_d0);
                     if (_select_at_anim(Ref<Animation>const&,int,float,bool)::{lambda()
                     #1
                     == '\0')
                     {
                        iVar5 = __cxa_guard_acquire(&_select_at_anim(Ref<Animation>const&,int,float,bool)::
                                       {lambda()
                        #1
                        if (iVar5 != 0) {
                           _scs_create((char*)&_select_at_anim(Ref < Animation > const & sname, true));
                           __cxa_atexit(StringName::~StringName, &_select_at_anim(Ref < Animation > const & sname, &__dso_handle));
                           __cxa_guard_release (&_select_at_anim(Ref<Animation>const&,int,float,bool)::{lambda()#1}
                                 ::operator()()::sname);
                        }

                     }

                     Variant::Variant(local_a8, iVar4);
                     Variant::Variant(local_90, param_4);
                     pVVar7 = local_48;
                     Variant::Variant(local_78, param_2);
                     local_58 = (undefined1[16])0x0;
                     local_60 = 0;
                     local_c8 = local_a8;
                     pVStack_c0 = local_90;
                     local_b8 = local_78;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, &_select_at_anim(Ref < Animation > const & sname, &local_c8, 3));
                     do {
                        pVVar1 = pVVar7 + -0x18;
                        pVVar7 = pVVar7 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar7 != local_a8 );
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        CanvasItem::queue_redraw();
                        return;
                     }

                  }

                  goto LAB_00101851;
               }

            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_00101851:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */
         void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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

         /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
         void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

         /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
         void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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

         /* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::erase(int const&) [clone
   .isra.0] */
         ulong HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase(HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this, int *param_1) {
            undefined4 *puVar1;
            undefined4 *puVar2;
            uint *puVar3;
            uint uVar4;
            undefined4 uVar5;
            long lVar6;
            long lVar7;
            long lVar8;
            long lVar9;
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
            uint uVar30;
            uint uVar31;
            ulong in_RAX;
            ulong uVar32;
            long lVar33;
            uint *puVar34;
            ulong uVar35;
            uint uVar36;
            uint *puVar37;
            int iVar38;
            long lVar39;
            ulong uVar40;
            uint *puVar41;
            uint uVar42;
            uint *puVar43;
            ulong uVar44;
            ulong uVar45;
            uVar31 = *param_1;
            lVar6 = *(long*)this;
            if (( lVar6 == 0 ) || ( in_RAX = ( ulong ) * (uint*)( this + 0x24 ) * (uint*)( this + 0x24 ) == 0 )) {
               return in_RAX;
            }

            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
            uVar45 = CONCAT44(0, uVar4);
            uVar35 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
            uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
            uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
            uVar42 = uVar30 ^ uVar30 >> 0x10;
            if (uVar30 == uVar30 >> 0x10) {
               uVar42 = 1;
               uVar32 = uVar35;
            }
 else {
               uVar32 = uVar42 * uVar35;
            }

            lVar7 = *(long*)( this + 0x18 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar45;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar32;
            auVar10 = auVar10 * auVar20;
            lVar39 = auVar10._8_8_;
            uVar32 = auVar10._0_8_;
            uVar30 = *(uint*)( lVar7 + lVar39 * 4 );
            iVar38 = auVar10._8_4_;
            if (uVar30 != 0) {
               uVar36 = 0;
               do {
                  if (uVar42 == uVar30) {
                     lVar8 = *(long*)( this + 8 );
                     uVar30 = *(uint*)( lVar8 + lVar39 * 4 );
                     if (uVar31 == *(uint*)( lVar6 + (ulong)uVar30 * 4 )) {
                        lVar9 = *(long*)( this + 0x10 );
                        lVar33 = (ulong)uVar30 * 4;
                        puVar34 = (uint*)( lVar33 + lVar9 );
                        uVar31 = *puVar34;
                        uVar32 = (ulong)uVar31;
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = ( uVar31 + 1 ) * uVar35;
                        auVar24._8_8_ = 0;
                        auVar24._0_8_ = uVar45;
                        lVar39 = SUB168(auVar14 * auVar24, 8) * 4;
                        uVar42 = SUB164(auVar14 * auVar24, 8);
                        uVar44 = (ulong)uVar42;
                        puVar41 = (uint*)( lVar7 + lVar39 );
                        if (( *puVar41 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = *puVar41 * uVar35,auVar25._8_8_ = 0,auVar25._0_8_ = uVar45,auVar16._8_8_ = 0,auVar16._0_8_ = ( ( uVar42 + uVar4 ) - SUB164(auVar15 * auVar25, 8) ) * uVar35,auVar26._8_8_ = 0,auVar26._0_8_ = uVar45,SUB164(auVar16 * auVar26, 8) == 0) {
                           uVar44 = (ulong)uVar31;
                        }
 else {
                           while (true) {
                              puVar37 = (uint*)( lVar39 + lVar8 );
                              puVar3 = (uint*)( lVar8 + uVar32 * 4 );
                              puVar43 = (uint*)( uVar32 * 4 + lVar7 );
                              puVar1 = (undefined4*)( lVar9 + ( ulong ) * puVar37 * 4 );
                              puVar2 = (undefined4*)( lVar9 + ( ulong ) * puVar3 * 4 );
                              uVar5 = *puVar2;
                              *puVar2 = *puVar1;
                              *puVar1 = uVar5;
                              uVar31 = *puVar41;
                              *puVar41 = *puVar43;
                              *puVar43 = uVar31;
                              uVar31 = *puVar37;
                              *puVar37 = *puVar3;
                              *puVar3 = uVar31;
                              auVar19._8_8_ = 0;
                              auVar19._0_8_ = ( (int)uVar44 + 1 ) * uVar35;
                              auVar29._8_8_ = 0;
                              auVar29._0_8_ = uVar45;
                              uVar40 = SUB168(auVar19 * auVar29, 8);
                              lVar39 = uVar40 * 4;
                              puVar41 = (uint*)( lVar7 + lVar39 );
                              if (( *puVar41 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = *puVar41 * uVar35,auVar27._8_8_ = 0,auVar27._0_8_ = uVar45,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( SUB164(auVar19 * auVar29, 8) + uVar4 ) - SUB164(auVar17 * auVar27, 8) ) * uVar35,auVar28._8_8_ = 0,auVar28._0_8_ = uVar45,SUB164(auVar18 * auVar28, 8) == 0) break;
                              uVar32 = uVar44;
                              uVar44 = uVar40 & 0xffffffff;
                           }
;
                        }

                        *(undefined4*)( lVar7 + uVar44 * 4 ) = 0;
                        uVar31 = *(int*)( this + 0x24 ) - 1;
                        *(uint*)( this + 0x24 ) = uVar31;
                        if (uVar31 <= uVar30) {
                           return (ulong)uVar31;
                        }

                        *(undefined4*)( lVar33 + lVar6 ) = *(undefined4*)( lVar6 + (ulong)uVar31 * 4 );
                        *puVar34 = *(uint*)( lVar9 + ( ulong ) * (uint*)( this + 0x24 ) * 4 );
                        uVar35 = ( ulong ) * (uint*)( lVar9 + ( ulong ) * (uint*)( this + 0x24 ) * 4 );
                        *(uint*)( lVar8 + uVar35 * 4 ) = uVar30;
                        return uVar35;
                     }

                  }

                  uVar36 = uVar36 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( iVar38 + 1 ) * uVar35;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar45;
                  auVar11 = auVar11 * auVar21;
                  lVar39 = auVar11._8_8_;
                  uVar32 = auVar11._0_8_;
                  uVar30 = *(uint*)( lVar7 + lVar39 * 4 );
                  iVar38 = auVar11._8_4_;
               }
 while ( ( uVar30 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar30 * uVar35,auVar22._8_8_ = 0,auVar22._0_8_ = uVar45,auVar13._8_8_ = 0,auVar13._0_8_ = ( ( uVar4 + iVar38 ) - SUB164(auVar12 * auVar22, 8) ) * uVar35,auVar23._8_8_ = 0,auVar23._0_8_ = uVar45,uVar32 = SUB168(auVar13 * auVar23, 0),uVar36 <= SUB164(auVar13 * auVar23, 8) );
            }

            return uVar32;
         }

         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
         /* AnimationBezierTrackEdit::_bezier_h_to_pixel(float) */
         undefined8 AnimationBezierTrackEdit::_bezier_h_to_pixel(AnimationBezierTrackEdit *this, float param_1) {
            float fVar1;
            float fVar2;
            float extraout_XMM0_Db;
            double dVar3;
            fVar1 = *(float*)( this + 0xab0 );
            fVar2 = *(float*)( this + 0xab4 );
            Control::get_size();
            dVar3 = (double)extraout_XMM0_Db * __LC21 - (double)( ( param_1 - fVar1 ) / fVar2 );
            return CONCAT44((int)( (ulong)dVar3 >> 0x20 ), (float)dVar3);
         }

         /* AnimationBezierTrackEdit::_draw_line_clipped(Vector2 const&, Vector2 const&, Color const&, int,
   int) */
         void AnimationBezierTrackEdit::_draw_line_clipped(AnimationBezierTrackEdit *this, Vector2 *param_1, Vector2 *param_2, Color *param_3, int param_4, int param_5) {
            undefined8 uVar1;
            undefined8 uVar2;
            bool bVar3;
            undefined8 uVar4;
            long in_FS_OFFSET;
            float fVar5;
            float fVar6;
            float fVar7;
            undefined8 local_30;
            undefined8 local_28;
            long local_20;
            uVar1 = *(undefined8*)param_2;
            local_20 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar2 = *(undefined8*)param_1;
            local_28._0_4_ = (float)uVar1;
            local_30._0_4_ = (float)uVar2;
            uVar4 = uVar2;
            if (!NAN((float)local_30) && !NAN((float)local_28)) {
               if ((float)local_30 == (float)local_28) {
                  local_30._4_4_ = (float)( (ulong)uVar2 >> 0x20 );
                  local_28._4_4_ = (float)( (ulong)uVar1 >> 0x20 );
                  if (local_30._4_4_ == local_28._4_4_) goto LAB_00101e4e;
               }
 else if ((float)local_28 <= (float)local_30 && (float)local_30 != (float)local_28) {
                  local_28._0_4_ = (float)local_30;
                  uVar4 = uVar1;
                  uVar1 = uVar2;
               }

            }

            local_28 = uVar1;
            local_30 = uVar4;
            fVar6 = (float)param_4;
            bVar3 = fVar6 <= (float)local_28;
            uVar2 = local_30;
            uVar1 = local_28;
            if (bVar3) {
               fVar7 = (float)param_5;
               if ((float)local_30 <= fVar7) {
                  bVar3 = fVar7 < (float)local_28;
                  if (bVar3) {
                     fVar5 = (float)local_28 - (float)local_30;
                     fVar7 = ( fVar7 - (float)local_30 ) / fVar5;
                     local_28 = CONCAT44(( local_28._4_4_ - local_30._4_4_ ) * fVar7 + local_30._4_4_, fVar5 * fVar7 + (float)local_30);
                  }

                  if ((float)local_30 < fVar6) {
                     fVar6 = ( fVar6 - (float)local_30 ) / ( (float)local_28 - (float)local_30 );
                     local_30 = CONCAT44(( (float)( (ulong)local_28 >> 0x20 ) - local_30._4_4_ ) * fVar6 + local_30._4_4_, ( (float)local_28 - (float)local_30 ) * fVar6 + (float)local_30);
                  }

                  fVar6 = (float)EditorScale::get_scale();
                  fVar6 = roundf(fVar6);
                  CanvasItem::draw_line((Vector2*)this, (Vector2*)&local_30, (Color*)&local_28, fVar6, SUB81(param_3, 0));
                  uVar2 = local_30;
                  uVar1 = local_28;
               }

            }

            LAB_00101e4e:local_28 = uVar1;
            local_30 = uVar2;
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* AnimationBezierTrackEdit::get_animation() const */
         void AnimationBezierTrackEdit::get_animation(void) {
            char cVar1;
            long in_RSI;
            long *in_RDI;
            *in_RDI = 0;
            if (*(long*)( in_RSI + 0x9e8 ) != 0) {
               *in_RDI = *(long*)( in_RSI + 0x9e8 );
               cVar1 = RefCounted::reference();
               if (cVar1 == '\0') {
                  *in_RDI = 0;
               }

            }

            return;
         }

         /* AnimationBezierTrackEdit::set_animation_and_track(Ref<Animation> const&, int, bool) */
         void AnimationBezierTrackEdit::set_animation_and_track(AnimationBezierTrackEdit *this, Ref *param_1, int param_2, bool param_3) {
            Object *pOVar1;
            Object *pOVar2;
            char cVar3;
            pOVar1 = *(Object**)param_1;
            pOVar2 = *(Object**)( this + 0x9e8 );
            if (pOVar1 != pOVar2) {
               *(Object**)( this + 0x9e8 ) = pOVar1;
               if (pOVar1 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     *(undefined8*)( this + 0x9e8 ) = 0;
                  }

               }

               if (pOVar2 != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

            }

            this[0x9f0] = (AnimationBezierTrackEdit)param_3;
            *(int*)( this + 0x9f4 ) = param_2;
            CanvasItem::queue_redraw();
            return;
         }

         /* AnimationBezierTrackEdit::set_editor(AnimationTrackEditor*) */
         void AnimationBezierTrackEdit::set_editor(AnimationBezierTrackEdit *this, AnimationTrackEditor *param_1) {
            code *pcVar1;
            undefined8 uVar2;
            long lVar3;
            CallableCustom *pCVar4;
            long in_FS_OFFSET;
            long local_b0;
            long local_a8[2];
            Callable local_98[16];
            Variant *local_88;
            int local_78[6];
            undefined8 local_60;
            undefined1 local_58[16];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            *(AnimationTrackEditor**)( this + 0xb88 ) = param_1;
            pcVar1 = *(code**)( *(long*)this + 0x108 );
            pCVar4 = (CallableCustom*)operator_new(0x48, "");
            CallableCustom::CallableCustom(pCVar4);
            *(AnimationTrackEditor**)( pCVar4 + 0x28 ) = param_1;
            *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
            *(undefined***)pCVar4 = &PTR_hash_00129b68;
            *(undefined8*)( pCVar4 + 0x40 ) = 0;
            uVar2 = *(undefined8*)( param_1 + 0x60 );
            *(undefined8*)( pCVar4 + 0x10 ) = 0;
            *(undefined8*)( pCVar4 + 0x30 ) = uVar2;
            *(undefined**)( pCVar4 + 0x20 ) = &_LC30;
            *(code**)( pCVar4 + 0x38 ) = AnimationTrackEditor::_clear_selection;
            CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
            *(char**)( pCVar4 + 0x20 ) = "AnimationTrackEditor::_clear_selection";
            Callable::Callable((Callable*)local_a8, pCVar4);
            Variant::Variant((Variant*)local_78, false);
            local_60 = 0;
            local_58 = (undefined1[16])0x0;
            local_88 = (Variant*)local_78;
            Callable::bindp((Variant**)local_98, (int)(Callable*)local_a8);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            StringName::StringName((StringName*)&local_b0, "clear_selection", false);
            ( *pcVar1 )(this, (StringName*)&local_b0, local_98, 0);
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable(local_98);
            Callable::~Callable((Callable*)local_a8);
            lVar3 = *(long*)( this + 0xb88 );
            pcVar1 = *(code**)( *(long*)this + 0x108 );
            pCVar4 = (CallableCustom*)operator_new(0x48, "");
            CallableCustom::CallableCustom(pCVar4);
            *(undefined**)( pCVar4 + 0x20 ) = &_LC30;
            *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
            *(undefined***)pCVar4 = &PTR_hash_00129bf8;
            *(undefined8*)( pCVar4 + 0x40 ) = 0;
            uVar2 = *(undefined8*)( lVar3 + 0x60 );
            *(undefined8*)( pCVar4 + 0x10 ) = 0;
            *(undefined8*)( pCVar4 + 0x30 ) = uVar2;
            *(long*)( pCVar4 + 0x28 ) = lVar3;
            *(code**)( pCVar4 + 0x38 ) = AnimationTrackEditor::_key_selected;
            CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
            *(char**)( pCVar4 + 0x20 ) = "AnimationTrackEditor::_key_selected";
            Callable::Callable(local_98, pCVar4);
            StringName::StringName((StringName*)local_a8, "select_key", false);
            ( *pcVar1 )(this, (Callable*)local_a8, local_98, 1);
            if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
               StringName::unref();
            }

            Callable::~Callable(local_98);
            lVar3 = *(long*)( this + 0xb88 );
            pcVar1 = *(code**)( *(long*)this + 0x108 );
            pCVar4 = (CallableCustom*)operator_new(0x48, "");
            CallableCustom::CallableCustom(pCVar4);
            *(undefined**)( pCVar4 + 0x20 ) = &_LC30;
            *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
            *(undefined***)pCVar4 = &PTR_hash_00129c88;
            *(undefined8*)( pCVar4 + 0x40 ) = 0;
            uVar2 = *(undefined8*)( lVar3 + 0x60 );
            *(undefined8*)( pCVar4 + 0x10 ) = 0;
            *(undefined8*)( pCVar4 + 0x30 ) = uVar2;
            *(long*)( pCVar4 + 0x28 ) = lVar3;
            *(code**)( pCVar4 + 0x38 ) = AnimationTrackEditor::_key_deselected;
            CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
            *(char**)( pCVar4 + 0x20 ) = "AnimationTrackEditor::_key_deselected";
            Callable::Callable(local_98, pCVar4);
            StringName::StringName((StringName*)local_a8, "deselect_key", false);
            ( *pcVar1 )(this, (Callable*)local_a8, local_98, 1);
            if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
               StringName::unref();
            }

            Callable::~Callable(local_98);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* AnimationBezierTrackEdit::set_play_position(float) */
         void AnimationBezierTrackEdit::set_play_position(AnimationBezierTrackEdit *this, float param_1) {
            *(float*)( this + 0x9e0 ) = param_1;
            CanvasItem::queue_redraw();
            return;
         }

         /* AnimationBezierTrackEdit::update_play_position() */
         void AnimationBezierTrackEdit::update_play_position(void) {
            CanvasItem::queue_redraw();
            return;
         }

         /* AnimationBezierTrackEdit::set_root(Node*) */
         void AnimationBezierTrackEdit::set_root(AnimationBezierTrackEdit *this, Node *param_1) {
            *(Node**)( this + 0x9d0 ) = param_1;
            return;
         }

         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
         /* AnimationBezierTrackEdit::_zoom_vertically(float, float) */
         void AnimationBezierTrackEdit::_zoom_vertically(AnimationBezierTrackEdit *this, float param_1, float param_2) {
            float extraout_XMM0_Db;
            float extraout_XMM0_Db_00;
            if ((double)( param_2 - param_1 ) <= _LC36) {
               *(float*)( this + 0xab0 ) = param_2;
               return;
            }

            *(float*)( this + 0xab0 ) = ( param_2 + param_1 ) * _LC37;
            Control::get_size();
            Control::get_size();
            *(float*)( this + 0xab4 ) = (float)( (double)( param_2 - param_1 ) / ( (double)( extraout_XMM0_Db - extraout_XMM0_Db_00 ) * __LC38 ) );
            return;
         }

         /* AnimationBezierTrackEdit::get_bezier_key_value(Array) */
         void AnimationBezierTrackEdit::get_bezier_key_value(int param_1) {
            Variant *this;
            this(Variant * Array::operator [](param_1));
            Variant::operator_cast_to_float(this);
            return;
         }

         /* AnimationBezierTrackEdit::set_timeline(AnimationTimelineEdit*) */
         void AnimationBezierTrackEdit::set_timeline(AnimationBezierTrackEdit *this, AnimationTimelineEdit *param_1) {
            long lVar1;
            code *pcVar2;
            long *plVar3;
            long in_FS_OFFSET;
            long local_60;
            AnimationBezierTrackEdit local_58[24];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            lVar1 = *(long*)param_1;
            *(AnimationTimelineEdit**)( this + 0x9c8 ) = param_1;
            pcVar2 = *(code**)( lVar1 + 0x108 );
            create_custom_callable_function_pointer<AnimationBezierTrackEdit>(local_58, (char*)this, (_func_void*)"&AnimationBezierTrackEdit::_zoom_changed");
            StringName::StringName((StringName*)&local_60, "zoom_changed", false);
            ( *pcVar2 )(param_1, (StringName*)&local_60, local_58, 0);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_58);
            plVar3 = *(long**)( this + 0x9c8 );
            pcVar2 = *(code**)( *plVar3 + 0x108 );
            create_custom_callable_function_pointer<AnimationBezierTrackEdit>(local_58, (char*)this, (_func_void*)"&AnimationBezierTrackEdit::_zoom_changed");
            StringName::StringName((StringName*)&local_60, "name_limit_changed", false);
            ( *pcVar2 )(plVar3, (StringName*)&local_60, local_58, 0);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_58);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* AnimationBezierTrackEdit::_clear_selection() */
         void AnimationBezierTrackEdit::_clear_selection(AnimationBezierTrackEdit *this) {
            long lVar1;
            int iVar2;
            long in_FS_OFFSET;
            lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
            RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ));
            if (_clear_selection()::{lambda()
            #1
            iVar2 = __cxa_guard_acquire(&_clear_selection()::, {
                  lambda()
                  #1
                  if (iVar2 != 0) {
                     _scs_create((char *)&_clear_selection()::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName, &_clear_selection()::, {
                           lambda()
                           #1
                           &__dso_handle;
                           __cxa_guard_release(&_clear_selection()::{lambda()#1}::operator()()::sname);
    }
  }, ( **(code**)( *(long*)this + 0xd0 ) )(this, &_clear_selection()::, {
                                    lambda()
                                    #1
                                    if (Variant::needs_deinit[0] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                    if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                       CanvasItem::queue_redraw();
                                       return;
                                    }

                                    /* WARNING: Subroutine does not return */
                                    __stack_chk_fail();
                                 }
, /* AnimationBezierTrackEdit::_clear_selection_for_anim(Ref<Animation> const&) */, void __thiscall
AnimationBezierTrackEdit::_clear_selection_for_anim(AnimationBezierTrackEdit *this, Ref * param_1)(*(long*)( this + 0x9e8 ) != *(long*)param_1) = CanvasItem::is_visible());
                           if (cVar1 == '\0') {
                              return;
                           }

                           _clear_selection(this);
                           return;
                        }
, /* AnimationBezierTrackEdit::_is_track_displayed(int) */, undefined8 AnimationBezierTrackEdit::_is_track_displayed(int param_1);
                     {
                        NodePath *pNVar1;
                        char cVar2;
                        undefined8 uVar3;
                        long lVar4;
                        undefined4 in_register_0000003c;
                        long in_FS_OFFSET;
                        NodePath local_40[8];
                        NodePath local_38[8];
                        long local_30;
                        lVar4 = CONCAT44(in_register_0000003c, param_1);
                        local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                        cVar2 = Animation::track_get_type((int)*(undefined8*)( lVar4 + 0x9e8 ));
                        if (cVar2 == '\x06') {
                           if (*(char*)( lVar4 + 0xaa4 ) != '\0') {
                              Animation::track_get_path((int)local_38);
                              NodePath::operator_cast_to_String(local_40);
                              NodePath::~NodePath(local_38);
                              pNVar1 = *(NodePath**)( lVar4 + 0x9d0 );
                              if (pNVar1 != (NodePath*)0x0) {
                                 NodePath::NodePath(local_38, (String*)local_40);
                                 cVar2 = Node::has_node(pNVar1);
                                 NodePath::~NodePath(local_38);
                                 if (cVar2 != '\0') {
                                    pNVar1 = *(NodePath**)( lVar4 + 0x9d0 );
                                    NodePath::NodePath(local_38, (String*)local_40);
                                    lVar4 = Node::get_node(pNVar1);
                                    NodePath::~NodePath(local_38);
                                    if (lVar4 != 0) {
                                       cVar2 = EditorSelection::is_selected(*(Node**)( EditorNode::singleton + 0x608 ));
                                       if (cVar2 != '\0') goto LAB_001027df;
                                    }

                                    CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
                                    goto LAB_00102800;
                                 }

                              }

                              LAB_001027df:CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
                           }

                           uVar3 = 1;
                        }
 else {
                           LAB_00102800:uVar3 = 0;
                        }

                        if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return uVar3;
                        }

                        /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                     }

                     /* AnimationBezierTrackEdit::_is_track_curves_displayed(int) */
                     uint AnimationBezierTrackEdit::_is_track_curves_displayed(AnimationBezierTrackEdit *this, int param_1) {
                        ulong uVar1;
                        undefined1 auVar2[16];
                        undefined1 auVar3[16];
                        undefined1 auVar4[16];
                        undefined1 auVar5[16];
                        undefined1 auVar6[16];
                        undefined1 auVar7[16];
                        undefined1 auVar8[16];
                        undefined1 auVar9[16];
                        uint uVar10;
                        uint uVar11;
                        int iVar12;
                        ulong uVar13;
                        long lVar14;
                        ulong uVar15;
                        uint uVar16;
                        uint uVar17;
                        uVar10 = _is_track_displayed((int)this);
                        if (( ( (char)uVar10 != '\0' ) && ( *(long*)( this + 0xa78 ) != 0 ) ) && ( *(int*)( this + 0xa9c ) != 0 )) {
                           uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa98 ) * 8 );
                           uVar11 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
                           uVar11 = ( uVar11 ^ uVar11 >> 0xd ) * -0x3d4d51cb;
                           uVar17 = uVar11 ^ uVar11 >> 0x10;
                           if (uVar11 == uVar11 >> 0x10) {
                              uVar17 = 1;
                              uVar13 = uVar1;
                           }
 else {
                              uVar13 = uVar17 * uVar1;
                           }

                           uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ));
                           auVar2._8_8_ = 0;
                           auVar2._0_8_ = uVar15;
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = uVar13;
                           lVar14 = SUB168(auVar2 * auVar6, 8);
                           uVar11 = *(uint*)( *(long*)( this + 0xa90 ) + lVar14 * 4 );
                           iVar12 = SUB164(auVar2 * auVar6, 8);
                           if (uVar11 != 0) {
                              uVar16 = 0;
                              do {
                                 if (( uVar17 == uVar11 ) && ( *(int*)( *(long*)( this + 0xa78 ) + ( ulong ) * (uint*)( *(long*)( this + 0xa80 ) + lVar14 * 4 ) * 4 ) == param_1 )) {
                                    return 0;
                                 }

                                 uVar16 = uVar16 + 1;
                                 auVar3._8_8_ = 0;
                                 auVar3._0_8_ = ( iVar12 + 1 ) * uVar1;
                                 auVar7._8_8_ = 0;
                                 auVar7._0_8_ = uVar15;
                                 lVar14 = SUB168(auVar3 * auVar7, 8);
                                 uVar11 = *(uint*)( *(long*)( this + 0xa90 ) + lVar14 * 4 );
                                 iVar12 = SUB164(auVar3 * auVar7, 8);
                              }
 while ( ( uVar11 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar11 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) + iVar12 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
                              uVar10 = uVar10 & 0xff;
                           }

                        }

                        return uVar10;
                     }

                     /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
                     /* AnimationBezierTrackEdit::auto_fit_vertically() */
                     void AnimationBezierTrackEdit::auto_fit_vertically(AnimationBezierTrackEdit *this) {
                        ulong uVar1;
                        undefined1 auVar2[16];
                        undefined1 auVar3[16];
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
                        char cVar18;
                        uint uVar19;
                        uint uVar20;
                        int iVar21;
                        long lVar22;
                        ulong uVar23;
                        uint uVar24;
                        ulong uVar25;
                        uint uVar26;
                        uint uVar27;
                        int iVar28;
                        float fVar29;
                        float fVar30;
                        float extraout_XMM0_Db;
                        float extraout_XMM0_Db_00;
                        float extraout_XMM0_Db_01;
                        float extraout_XMM0_Db_02;
                        float fVar31;
                        float fVar32;
                        float fVar33;
                        float local_4c;
                        int local_3c;
                        uVar19 = Animation::get_track_count();
                        if (0 < (int)uVar19) {
                           uVar24 = 0;
                           local_3c = 0;
                           local_4c = _LC52;
                           fVar30 = _LC53;
                           do {
                              while (cVar18 = _is_track_displayed((int)this),cVar18 == '\0') {
                                 LAB_00102ae8:uVar24 = uVar24 + 1;
                                 if (uVar24 == uVar19) goto LAB_00102af7;
                              }
;
                              if (( *(long*)( this + 0xa78 ) != 0 ) && ( *(int*)( this + 0xa9c ) != 0 )) {
                                 uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa98 ) * 8 );
                                 uVar20 = ( uVar24 >> 0x10 ^ uVar24 ) * -0x7a143595;
                                 uVar20 = ( uVar20 ^ uVar20 >> 0xd ) * -0x3d4d51cb;
                                 uVar27 = uVar20 ^ uVar20 >> 0x10;
                                 if (uVar20 == uVar20 >> 0x10) {
                                    uVar27 = 1;
                                    uVar23 = uVar1;
                                 }
 else {
                                    uVar23 = uVar27 * uVar1;
                                 }

                                 uVar25 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ));
                                 auVar2._8_8_ = 0;
                                 auVar2._0_8_ = uVar25;
                                 auVar10._8_8_ = 0;
                                 auVar10._0_8_ = uVar23;
                                 lVar22 = SUB168(auVar2 * auVar10, 8);
                                 uVar20 = *(uint*)( *(long*)( this + 0xa90 ) + lVar22 * 4 );
                                 iVar21 = SUB164(auVar2 * auVar10, 8);
                                 if (uVar20 != 0) {
                                    uVar26 = 0;
                                    do {
                                       if (( uVar27 == uVar20 ) && ( *(uint*)( *(long*)( this + 0xa78 ) + ( ulong ) * (uint*)( *(long*)( this + 0xa80 ) + lVar22 * 4 ) * 4 ) == uVar24 )) goto LAB_00102ae8;
                                       uVar26 = uVar26 + 1;
                                       auVar3._8_8_ = 0;
                                       auVar3._0_8_ = ( iVar21 + 1 ) * uVar1;
                                       auVar11._8_8_ = 0;
                                       auVar11._0_8_ = uVar25;
                                       lVar22 = SUB168(auVar3 * auVar11, 8);
                                       uVar20 = *(uint*)( *(long*)( this + 0xa90 ) + lVar22 * 4 );
                                       iVar21 = SUB164(auVar3 * auVar11, 8);
                                    }
 while ( ( uVar20 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar20 * uVar1,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) + iVar21 ) - SUB164(auVar4 * auVar12, 8) ) * uVar1,auVar13._8_8_ = 0,auVar13._0_8_ = uVar25,uVar26 <= SUB164(auVar5 * auVar13, 8) );
                                 }

                              }

                              if (( *(long*)( this + 0xa50 ) != 0 ) && ( *(int*)( this + 0xa74 ) != 0 )) {
                                 uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa70 ) * 8 );
                                 uVar20 = ( uVar24 >> 0x10 ^ uVar24 ) * -0x7a143595;
                                 uVar20 = ( uVar20 ^ uVar20 >> 0xd ) * -0x3d4d51cb;
                                 uVar27 = uVar20 ^ uVar20 >> 0x10;
                                 if (uVar20 == uVar20 >> 0x10) {
                                    uVar27 = 1;
                                    uVar23 = uVar1;
                                 }
 else {
                                    uVar23 = uVar27 * uVar1;
                                 }

                                 uVar25 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ));
                                 auVar6._8_8_ = 0;
                                 auVar6._0_8_ = uVar25;
                                 auVar14._8_8_ = 0;
                                 auVar14._0_8_ = uVar23;
                                 lVar22 = SUB168(auVar6 * auVar14, 8);
                                 uVar20 = *(uint*)( *(long*)( this + 0xa68 ) + lVar22 * 4 );
                                 iVar21 = SUB164(auVar6 * auVar14, 8);
                                 if (uVar20 != 0) {
                                    uVar26 = 0;
                                    do {
                                       if (( uVar27 == uVar20 ) && ( *(uint*)( *(long*)( this + 0xa50 ) + ( ulong ) * (uint*)( *(long*)( this + 0xa58 ) + lVar22 * 4 ) * 4 ) == uVar24 )) goto LAB_00102ae8;
                                       uVar26 = uVar26 + 1;
                                       auVar7._8_8_ = 0;
                                       auVar7._0_8_ = ( iVar21 + 1 ) * uVar1;
                                       auVar15._8_8_ = 0;
                                       auVar15._0_8_ = uVar25;
                                       lVar22 = SUB168(auVar7 * auVar15, 8);
                                       uVar20 = *(uint*)( *(long*)( this + 0xa68 ) + lVar22 * 4 );
                                       iVar21 = SUB164(auVar7 * auVar15, 8);
                                    }
 while ( ( uVar20 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar20 * uVar1,auVar16._8_8_ = 0,auVar16._0_8_ = uVar25,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) + iVar21 ) - SUB164(auVar8 * auVar16, 8) ) * uVar1,auVar17._8_8_ = 0,auVar17._0_8_ = uVar25,uVar26 <= SUB164(auVar9 * auVar17, 8) );
                                 }

                              }

                              iVar21 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 ));
                              if (0 < iVar21) {
                                 iVar28 = 0;
                                 do {
                                    fVar29 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), uVar24);
                                    fVar33 = fVar29;
                                    if (fVar29 <= local_4c) {
                                       fVar33 = local_4c;
                                    }

                                    fVar32 = fVar29;
                                    if (fVar30 <= fVar29) {
                                       fVar32 = fVar30;
                                    }

                                    Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), uVar24);
                                    iVar28 = iVar28 + 1;
                                    Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), uVar24);
                                    fVar31 = extraout_XMM0_Db + fVar29;
                                    fVar30 = extraout_XMM0_Db_00 + fVar29;
                                    fVar29 = fVar31;
                                    if (fVar31 <= fVar33) {
                                       fVar29 = fVar33;
                                    }

                                    if (fVar32 <= fVar31) {
                                       fVar31 = fVar32;
                                    }

                                    local_4c = fVar30;
                                    if (fVar30 <= fVar29) {
                                       local_4c = fVar29;
                                    }

                                    if (fVar31 <= fVar30) {
                                       fVar30 = fVar31;
                                    }

                                 }
 while ( iVar21 != iVar28 );
                              }

                              uVar24 = uVar24 + 1;
                              local_3c = local_3c + 1;
                           }
 while ( uVar24 != uVar19 );
                           LAB_00102af7:if (( ( local_3c != 0 ) && ( (float)( (uint)fVar30 & _LC54 ) <= _LC55 ) ) && ( (float)( _LC54 & (uint)local_4c ) <= _LC55 )) {
                              if (_LC36 < (double)( local_4c - fVar30 )) {
                                 *(float*)( this + 0xab0 ) = ( fVar30 + local_4c ) * _LC37;
                                 Control::get_size();
                                 Control::get_size();
                                 *(float*)( this + 0xab4 ) = (float)( (double)( local_4c - fVar30 ) / ( (double)( extraout_XMM0_Db_01 - extraout_XMM0_Db_02 ) * __LC38 ) );
                              }
 else {
                                 *(float*)( this + 0xab0 ) = local_4c;
                              }

                              CanvasItem::queue_redraw();
                              return;
                           }

                        }

                        return;
                     }

                     /* AnimationBezierTrackEdit::_change_selected_keys_handle_mode(Animation::HandleMode, bool) */
                     void AnimationBezierTrackEdit::_change_selected_keys_handle_mode(long param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
                        Variant *pVVar1;
                        long lVar2;
                        Object *pOVar3;
                        StringName *pSVar4;
                        int iVar5;
                        int iVar6;
                        Object *pOVar7;
                        int iVar8;
                        Variant *pVVar9;
                        String *this;
                        long in_FS_OFFSET;
                        undefined8 uVar10;
                        long local_368;
                        Variant *local_358;
                        undefined8 local_278;
                        undefined8 local_270;
                        char *local_268;
                        undefined8 local_260;
                        Variant **local_258;
                        undefined1 auStack_250[16];
                        Variant *pVStack_240;
                        Variant *local_238;
                        undefined8 local_228[3];
                        Variant local_210[24];
                        Variant local_1f8[24];
                        undefined8 local_1e0;
                        undefined1 local_1d8[16];
                        Variant local_1c8[24];
                        Variant local_1b0[24];
                        Variant local_198[24];
                        undefined8 local_180;
                        undefined1 local_178[16];
                        Variant *local_168;
                        Variant *pVStack_160;
                        Variant *local_158;
                        Variant *pVStack_150;
                        Variant *local_148;
                        Variant local_138[24];
                        Variant local_120[24];
                        Variant local_108[24];
                        undefined8 local_f0;
                        undefined1 local_e8[16];
                        Variant local_d8[24];
                        Variant local_c0[24];
                        Variant local_a8[24];
                        Variant local_90[24];
                        Variant local_78[24];
                        undefined8 local_60;
                        undefined1 local_58[16];
                        Variant local_48[8];
                        long local_40;
                        this(String * ) & local_268;
                        local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                        pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
                        uVar10 = *(undefined8*)( param_1 + 0x9e8 );
                        local_268 = "";
                        local_270 = 0;
                        local_260 = 0;
                        String::parse_latin1((StrRange*)&local_270);
                        local_268 = "Update Selected Key Handles";
                        local_278 = 0;
                        local_260 = 0x1b;
                        String::parse_latin1((StrRange*)&local_278);
                        TTR(this, (String*)&local_278);
                        EditorUndoRedoManager::create_action(pOVar7, this, 0, uVar10, 0, param_6, uVar10);
                        CowData<char32_t>::_unref((CowData<char32_t>*)this);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
                        if (*(long*)( param_1 + 0xba0 ) != 0) {
                           lVar2 = *(long*)( *(long*)( param_1 + 0xba0 ) + 0x10 );
                           if (lVar2 != *(long*)( param_1 + 0xba8 )) {
                              do {
                                 local_368 = lVar2;
                                 lVar2 = *(long*)( local_368 + 8 );
                              }
 while ( *(long*)( param_1 + 0xba8 ) != *(long*)( local_368 + 8 ) );
                              do {
                                 iVar5 = (int)*(undefined8*)( local_368 + 0x30 );
                                 iVar8 = (int)( ( ulong ) * (undefined8*)( local_368 + 0x30 ) >> 0x20 );
                                 iVar6 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( param_1 + 0x9e8 ), iVar5);
                                 pOVar3 = *(Object**)( param_1 + 0x9e8 );
                                 StringName::StringName((StringName*)this, "_bezier_track_set_key_handle_mode", false);
                                 pSVar4 = *(StringName**)( param_1 + 0xb88 );
                                 Variant::Variant((Variant*)&local_168, pOVar3);
                                 Variant::Variant((Variant*)&pVStack_150, iVar5);
                                 Variant::Variant(local_138, iVar8);
                                 Variant::Variant(local_120, iVar6);
                                 Variant::Variant(local_108, 0);
                                 local_f0 = 0;
                                 local_e8 = (undefined1[16])0x0;
                                 auStack_250._8_8_ = local_138;
                                 auStack_250._0_8_ = (Variant*)&pVStack_150;
                                 local_258 = &local_168;
                                 pVStack_240 = local_120;
                                 local_238 = local_108;
                                 EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)this, (int)(Vector2*)&local_258);
                                 pVVar9 = local_d8;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar9 != (Variant*)&local_168 );
                                 if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                                    StringName::unref();
                                 }

                                 uVar10 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( param_1 + 0x9e8 ), iVar5);
                                 StringName::StringName((StringName*)this, "bezier_track_set_key_in_handle", false);
                                 pSVar4 = *(StringName**)( param_1 + 0x9e8 );
                                 local_258 = (Variant**)uVar10;
                                 Variant::Variant((Variant*)local_228, iVar5);
                                 Variant::Variant(local_210, iVar8);
                                 Variant::Variant(local_1f8, (Vector2*)&local_258);
                                 local_1e0 = 0;
                                 local_1d8 = (undefined1[16])0x0;
                                 iVar6 = (int)(Variant*)&local_168;
                                 local_168 = (Variant*)local_228;
                                 pVStack_160 = local_210;
                                 local_158 = local_1f8;
                                 EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)this, iVar6);
                                 pVVar9 = local_1c8;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                    local_358 = (Variant*)&local_168;
                                 }
 while ( pVVar9 != (Variant*)local_228 );
                                 if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                                    StringName::unref();
                                 }

                                 uVar10 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( param_1 + 0x9e8 ), iVar5);
                                 StringName::StringName((StringName*)this, "bezier_track_set_key_out_handle", false);
                                 pSVar4 = *(StringName**)( param_1 + 0x9e8 );
                                 local_228[0] = uVar10;
                                 Variant::Variant(local_1c8, iVar5);
                                 Variant::Variant(local_1b0, iVar8);
                                 Variant::Variant(local_198, (Vector2*)local_228);
                                 local_180 = 0;
                                 local_178 = (undefined1[16])0x0;
                                 local_168 = local_1c8;
                                 pVStack_160 = local_1b0;
                                 local_158 = local_198;
                                 EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)this, iVar6);
                                 pVVar9 = local_358;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                    local_358 = (Variant*)&local_168;
                                 }
 while ( pVVar9 != local_1c8 );
                                 if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                                    StringName::unref();
                                 }

                                 pOVar3 = *(Object**)( param_1 + 0x9e8 );
                                 StringName::StringName((StringName*)this, "_bezier_track_set_key_handle_mode", false);
                                 pSVar4 = *(StringName**)( param_1 + 0xb88 );
                                 Variant::Variant(local_d8, pOVar3);
                                 Variant::Variant(local_c0, iVar5);
                                 Variant::Variant(local_a8, iVar8);
                                 Variant::Variant(local_90, param_2);
                                 Variant::Variant(local_78, ( param_3 & 0xff ) + 1);
                                 local_60 = 0;
                                 local_58 = (undefined1[16])0x0;
                                 local_168 = local_d8;
                                 pVStack_160 = local_c0;
                                 local_158 = local_a8;
                                 pVStack_150 = local_90;
                                 local_148 = local_78;
                                 EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar4, (Variant**)this, (int)local_358);
                                 pVVar9 = local_48;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar9 != local_d8 );
                                 if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                                    StringName::unref();
                                 }

                                 local_368 = *(long*)( local_368 + 0x28 );
                              }
 while ( local_368 != 0 );
                           }

                        }

                        pSVar4 = AnimationPlayerEditor::singleton;
                        if (AnimationPlayerEditor::singleton != (StringName*)0x0) {
                           StringName::StringName((StringName*)this, "_animation_update_key_frame", false);
                           local_258 = (Variant**)0x0;
                           auStack_250 = (undefined1[16])0x0;
                           EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar4, (Variant**)this, 0);
                           if (Variant::needs_deinit[(int)local_258] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           StringName::StringName((StringName*)this, "_animation_update_key_frame", false);
                           local_258 = (Variant**)0x0;
                           auStack_250 = (undefined1[16])0x0;
                           EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)this, 0);
                           if (Variant::needs_deinit[(int)local_258] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( StringName::configured != '\0' ) && ( local_268 != (char*)0x0 )) {
                              StringName::unref();
                           }

                        }

                        EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
                        if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                           /* WARNING: Subroutine does not return */
                           __stack_chk_fail();
                        }

                        return;
                     }

                     /* AnimationBezierTrackEdit::delete_selection() [clone .part.0] */
                     void AnimationBezierTrackEdit::delete_selection(AnimationBezierTrackEdit *this) {
                        Variant *pVVar1;
                        int iVar2;
                        long lVar3;
                        StringName *pSVar4;
                        Object *pOVar5;
                        char cVar6;
                        Object *pOVar7;
                        int iVar8;
                        Variant *pVVar9;
                        long lVar10;
                        long in_FS_OFFSET;
                        double dVar11;
                        Variant *local_1f0;
                        undefined8 local_168;
                        long local_160;
                        Object *local_158;
                        undefined8 local_150;
                        Variant *local_148[2];
                        Variant *local_138;
                        undefined1 auStack_130[16];
                        undefined8 local_120;
                        undefined1 local_118[16];
                        Variant *local_108;
                        Variant *pVStack_100;
                        Variant *local_f8;
                        Variant *apVStack_f0[3];
                        undefined8 local_d8;
                        undefined1 local_d0[16];
                        Variant local_c0[8];
                        Variant local_b8[24];
                        Variant local_a0[24];
                        Variant local_88[24];
                        Variant local_70[24];
                        undefined8 local_58;
                        undefined1 local_50[16];
                        long local_40[2];
                        local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
                        pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
                        local_160 = 0;
                        local_158 = (Object*)&_LC30;
                        local_150 = 0;
                        String::parse_latin1((StrRange*)&local_160);
                        local_158 = (Object*)0x116c4d;
                        local_168 = 0;
                        local_150 = 0x15;
                        String::parse_latin1((StrRange*)&local_168);
                        TTR((String*)&local_158, (String*)&local_168);
                        EditorUndoRedoManager::create_action(pOVar7, (String*)&local_158, 0, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
                        if (*(long*)( this + 0xba0 ) != 0) {
                           lVar3 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
                           if (lVar3 != *(long*)( this + 0xba8 )) {
                              do {
                                 lVar10 = lVar3;
                                 lVar3 = *(long*)( lVar10 + 8 );
                              }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar10 + 8 ) );
                              do {
                                 iVar8 = *(int*)( lVar10 + 0x34 );
                                 iVar2 = *(int*)( lVar10 + 0x30 );
                                 StringName::StringName((StringName*)&local_158, "track_remove_key", false);
                                 pSVar4 = *(StringName**)( this + 0x9e8 );
                                 Variant::Variant((Variant*)&local_108, iVar2);
                                 Variant::Variant((Variant*)apVStack_f0, iVar8);
                                 local_d8 = 0;
                                 local_d0 = (undefined1[16])0x0;
                                 auStack_130._0_8_ = (Variant*)apVStack_f0;
                                 iVar8 = (int)(Variant*)&local_138;
                                 local_138 = (Variant*)&local_108;
                                 EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar4, (Variant**)&local_158, iVar8);
                                 pVVar9 = local_c0;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar9 != (Variant*)&local_108 );
                                 if (( StringName::configured != '\0' ) && ( local_158 != (Object*)0x0 )) {
                                    StringName::unref();
                                 }

                                 Animation::track_get_key_value(iVar8, (int)*(undefined8*)( this + 0x9e8 ));
                                 dVar11 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar10 + 0x30 ));
                                 iVar8 = *(int*)( lVar10 + 0x30 );
                                 StringName::StringName((StringName*)&local_158, "track_insert_key", false);
                                 pSVar4 = *(StringName**)( this + 0x9e8 );
                                 Variant::Variant(local_b8, iVar8);
                                 Variant::Variant(local_a0, dVar11);
                                 Variant::Variant(local_88, (Variant*)&local_138);
                                 Variant::Variant(local_70, 1);
                                 local_50 = (undefined1[16])0x0;
                                 local_58 = 0;
                                 local_108 = local_b8;
                                 pVStack_100 = local_a0;
                                 local_f8 = local_88;
                                 apVStack_f0[0] = local_70;
                                 EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)&local_158, (int)(Variant*)&local_108);
                                 pVVar9 = (Variant*)local_40;
                                 do {
                                    pVVar1 = pVVar9 + -0x18;
                                    pVVar9 = pVVar9 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar9 != local_b8 );
                                 if (( StringName::configured != '\0' ) && ( local_158 != (Object*)0x0 )) {
                                    StringName::unref();
                                 }

                                 if (Variant::needs_deinit[(int)local_138] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 lVar10 = *(long*)( lVar10 + 0x28 );
                              }
 while ( lVar10 != 0 );
                           }

                        }

                        local_1f0 = (Variant*)&local_138;
                        local_158 = (Object*)0x0;
                        Ref<Animation>::operator =((Ref<Animation>*)&local_158, *(Ref**)( this + 0x9e8 ));
                        StringName::StringName((StringName*)&local_160, "_clear_selection_for_anim", false);
                        pOVar5 = local_158;
                        Variant::Variant(local_1f0, local_158);
                        local_148[0] = local_1f0;
                        local_118 = (undefined1[16])0x0;
                        local_120 = 0;
                        EditorUndoRedoManager::add_do_methodp(pOVar7, (StringName*)this, (Variant**)&local_160, (int)local_148);
                        if (Variant::needs_deinit[(int)local_120] == '\0') {
                           cVar6 = Variant::needs_deinit[(int)local_138];
                        }
 else {
                           Variant::_clear_internal();
                           cVar6 = Variant::needs_deinit[(int)local_138];
                        }

                        if (cVar6 != '\0') {
                           Variant::_clear_internal();
                        }

                        if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
                           StringName::unref();
                        }

                        if (( ( pOVar5 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                     local_158 = (Object*)0x0;
                     Ref<Animation>::operator =((Ref<Animation>*)&local_158, *(Ref**)( this + 0x9e8 ));
                     StringName::StringName((StringName*)&local_160, "_clear_selection_for_anim", false);
                     pOVar5 = local_158;
                     Variant::Variant(local_1f0, local_158);
                     local_120 = 0;
                     local_148[0] = local_1f0;
                     local_118 = (undefined1[16])0x0;
                     EditorUndoRedoManager::add_undo_methodp(pOVar7, (StringName*)this, (Variant**)&local_160, (int)local_148);
                     if (Variant::needs_deinit[(int)local_120] == '\0') {
                        cVar6 = Variant::needs_deinit[(int)local_138];
                     }
 else {
                        Variant::_clear_internal();
                        cVar6 = Variant::needs_deinit[(int)local_138];
                     }

                     if (cVar6 != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
                        StringName::unref();
                     }

                     if (( ( pOVar5 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

                  pSVar4 = AnimationPlayerEditor::singleton;
                  if (AnimationPlayerEditor::singleton != (StringName*)0x0) {
                     StringName::StringName((StringName*)&local_158, "_animation_update_key_frame", false);
                     local_138 = (Variant*)0x0;
                     auStack_130 = (undefined1[16])0x0;
                     EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar4, (Variant**)&local_158, 0);
                     if (Variant::needs_deinit[(int)local_138] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_158 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                     StringName::StringName((StringName*)&local_158, "_animation_update_key_frame", false);
                     local_138 = (Variant*)0x0;
                     auStack_130 = (undefined1[16])0x0;
                     EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar4, (Variant**)&local_158, 0);
                     if (Variant::needs_deinit[(int)local_138] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_158 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                  }

                  EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
                  if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }
, /* AnimationBezierTrackEdit::delete_selection() */, void __thiscall AnimationBezierTrackEdit::delete_selection(AnimationBezierTrackEdit *this);
            {
               if (*(int*)( this + 0xbb0 ) == 0) {
                  return;
               }

               delete_selection(this);
               return;
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* AnimationBezierTrackEdit::AnimationBezierTrackEdit() */
            void AnimationBezierTrackEdit::AnimationBezierTrackEdit(AnimationBezierTrackEdit *this) {
               undefined8 uVar1;
               long *plVar2;
               code *pcVar3;
               undefined8 uVar4;
               undefined8 uVar5;
               char cVar6;
               ViewPanner *this_00;
               CallableCustom *pCVar7;
               Control *this_01;
               PopupMenu *this_02;
               Object *pOVar8;
               Object *pOVar9;
               long in_FS_OFFSET;
               undefined8 local_70;
               undefined8 local_68[2];
               Object *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               Control::Control((Control*)this);
               uVar4 = _UNK_0012a538;
               uVar1 = __LC71;
               *(undefined1(*) [16])( this + 0x9c8 ) = (undefined1[16])0x0;
               *(undefined***)this = &PTR__initialize_classv_00129770;
               uVar5 = _LC70;
               *(undefined8**)( this + 0xa28 ) = &_GlobalNilClass::_nil;
               *(undefined8**)( this + 0xa40 ) = &_GlobalNilClass::_nil;
               *(undefined1(*) [16])( this + 0xa00 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa10 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa50 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa60 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa78 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa88 ) = (undefined1[16])0x0;
               *(undefined8*)( this + 0xaa8 ) = uVar1;
               *(undefined8*)( this + 0xab0 ) = uVar4;
               *(undefined8*)( this + 0xa70 ) = uVar5;
               *(undefined8*)( this + 0xa98 ) = uVar5;
               *(undefined8*)( this + 0x9d8 ) = 0;
               *(undefined4*)( this + 0x9e0 ) = 0;
               *(undefined8*)( this + 0x9e8 ) = 0;
               this[0x9f0] = (AnimationBezierTrackEdit)0x0;
               *(undefined4*)( this + 0x9f4 ) = 0;
               *(undefined8*)( this + 0xa20 ) = 0;
               *(undefined4*)( this + 0xa30 ) = 0;
               *(undefined8*)( this + 0xa38 ) = 0;
               *(undefined4*)( this + 0xa48 ) = 0;
               *(undefined4*)( this + 0xaa0 ) = 0xffffffff;
               this[0xaa4] = (AnimationBezierTrackEdit)0x0;
               *(undefined8*)( this + 0xab8 ) = 0;
               *(undefined8*)( this + 0xac0 ) = 0;
               this[0xac8] = (AnimationBezierTrackEdit)0x0;
               *(undefined4*)( this + 0xacc ) = 0;
               *(undefined8*)( this + 0xad0 ) = 0;
               this[0xad8] = (AnimationBezierTrackEdit)0x0;
               *(undefined8*)( this + 0xadc ) = 0;
               *(undefined2*)( this + 0xaec ) = 0;
               *(undefined8**)( this + 0xba8 ) = &_GlobalNilClass::_nil;
               *(undefined8*)( this + 0xae4 ) = 0;
               this[0xaee] = (AnimationBezierTrackEdit)0x0;
               for (int i = 0; i < 6; i++) {
                  *(undefined8*)( this + ( 8*i + 2800 ) ) = 0;
               }

               *(undefined8*)( this + 0xb48 ) = uVar5;
               *(undefined8*)( this + 0xb78 ) = uVar5;
               *(undefined8*)( this + 0xb80 ) = 0;
               *(undefined8*)( this + 0xb88 ) = 0;
               *(undefined4*)( this + 0xbb0 ) = 0;
               *(undefined8*)( this + 3000 ) = 0;
               *(undefined1(*) [16])( this + 0xb28 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xb38 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xb58 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xb68 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xb98 ) = (undefined1[16])0x0;
               this_00 = (ViewPanner*)operator_new(0x1c8, "");
               ViewPanner::ViewPanner(this_00);
               postinitialize_handler((Object*)this_00);
               cVar6 = RefCounted::init_ref();
               if (cVar6 == '\0') {
                  pOVar9 = *(Object**)( this + 3000 );
                  if (pOVar9 == (Object*)0x0) goto LAB_00104166;
                  *(undefined8*)( this + 3000 ) = 0;
                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     this_00 = (ViewPanner*)0x0;
                     cVar6 = predelete_handler(pOVar9);
                     if (cVar6 != '\0') {
                        LAB_00104773:( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                        Memory::free_static(pOVar9, false);
                        pOVar8 = (Object*)this_00;
                        if (this_00 != (ViewPanner*)0x0) goto LAB_0010466a;
                     }

                  }

               }
 else {
                  pOVar9 = *(Object**)( this + 3000 );
                  pOVar8 = pOVar9;
                  if (this_00 != (ViewPanner*)pOVar9) {
                     *(ViewPanner**)( this + 3000 ) = this_00;
                     cVar6 = RefCounted::reference();
                     pOVar8 = (Object*)this_00;
                     if (cVar6 == '\0') {
                        *(undefined8*)( this + 3000 ) = 0;
                        if (pOVar9 != (Object*)0x0) {
                           cVar6 = RefCounted::unreference();
                           joined_r0x001046bf:if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) goto LAB_00104773;
                        }

                     }
 else if (pOVar9 != (Object*)0x0) {
                        cVar6 = RefCounted::unreference();
                        goto joined_r0x001046bf;
                     }

                  }

                  LAB_0010466a:cVar6 = RefCounted::unreference();
                  if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                     pOVar9 = *(Object**)( this + 3000 );
                     goto LAB_00104166;
                  }

               }

               pOVar9 = *(Object**)( this + 3000 );
               LAB_00104166:pCVar7 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar7);
               *(undefined**)( pCVar7 + 0x20 ) = &_LC30;
               *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
               *(undefined***)pCVar7 = &PTR_hash_00129e38;
               *(undefined8*)( pCVar7 + 0x40 ) = 0;
               uVar1 = *(undefined8*)( this + 0x60 );
               *(undefined8*)( pCVar7 + 0x10 ) = 0;
               *(undefined8*)( pCVar7 + 0x30 ) = uVar1;
               *(code**)( pCVar7 + 0x38 ) = _zoom_callback;
               *(AnimationBezierTrackEdit**)( pCVar7 + 0x28 ) = this;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
               *(char**)( pCVar7 + 0x20 ) = "AnimationBezierTrackEdit::_zoom_callback";
               Callable::Callable((Callable*)&local_58, pCVar7);
               pCVar7 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar7);
               *(undefined**)( pCVar7 + 0x20 ) = &_LC30;
               *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
               *(undefined***)pCVar7 = &PTR_hash_00129da8;
               *(undefined8*)( pCVar7 + 0x40 ) = 0;
               uVar1 = *(undefined8*)( this + 0x60 );
               *(undefined8*)( pCVar7 + 0x10 ) = 0;
               *(undefined8*)( pCVar7 + 0x30 ) = uVar1;
               *(code**)( pCVar7 + 0x38 ) = _pan_callback;
               *(AnimationBezierTrackEdit**)( pCVar7 + 0x28 ) = this;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
               *(char**)( pCVar7 + 0x20 ) = "AnimationBezierTrackEdit::_pan_callback";
               Callable::Callable((Callable*)local_68, pCVar7);
               ViewPanner::set_callbacks(pOVar9, (Callable*)local_68, (Callable*)&local_58);
               Callable::~Callable((Callable*)local_68);
               Callable::~Callable((Callable*)&local_58);
               this_01 = (Control*)operator_new(0x9c8, "");
               Control::Control(this_01);
               postinitialize_handler((Object*)this_01);
               *(Control**)( this + 0x9d8 ) = this_01;
               Control::set_mouse_filter(this_01, 1);
               Node::add_child(this, *(undefined8*)( this + 0x9d8 ), 0, 0);
               Control::set_anchors_and_offsets_preset(*(undefined8*)( this + 0x9d8 ), 0xf, 0, 0);
               plVar2 = *(long**)( this + 0x9d8 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               create_custom_callable_function_pointer<AnimationBezierTrackEdit>((AnimationBezierTrackEdit*)&local_58, (char*)this, (_func_void*)"&AnimationBezierTrackEdit::_play_position_draw");
               ( *pcVar3 )(plVar2, SceneStringNames::singleton + 8, (Callable*)&local_58, 0);
               Callable::~Callable((Callable*)&local_58);
               Control::set_focus_mode(this, 1);
               Control::set_clip_contents(SUB81(this, 0));
               local_58 = (Object*)0x116c9f;
               local_68[0] = 0;
               local_50 = 5;
               String::parse_latin1((StrRange*)local_68);
               local_58 = (Object*)0x116ca5;
               local_70 = 0;
               local_50 = 0x1d;
               String::parse_latin1((StrRange*)&local_70);
               ED_SHORTCUT((Callable*)&local_58, (StrRange*)&local_70, (Callable*)local_68, 0x46, 0);
               if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar9 = local_58,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
               Memory::free_static(pOVar9, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            local_58 = (Object*)0x116cc3;
            local_68[0] = 0;
            local_50 = 0xf;
            String::parse_latin1((StrRange*)local_68);
            local_58 = (Object*)0x119eb0;
            local_70 = 0;
            local_50 = 0x27;
            String::parse_latin1((StrRange*)&local_70);
            ED_SHORTCUT((Callable*)&local_58, (StrRange*)&local_70, (Callable*)local_68, 0x1000041, 0);
            if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar9 = local_58,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
         local_58 = (Object*)0x116cd3;
         local_68[0] = 0;
         local_50 = 0x11;
         String::parse_latin1((StrRange*)local_68);
         local_58 = (Object*)0x119ed8;
         local_70 = 0;
         local_50 = 0x29;
         String::parse_latin1((StrRange*)&local_70);
         ED_SHORTCUT((Callable*)&local_58, (StrRange*)&local_70, (Callable*)local_68, 0x3000041, 0);
         if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar9 = local_58,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
         Memory::free_static(pOVar9, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      this_02 = (PopupMenu*)operator_new(0xfe0, "");
      PopupMenu::PopupMenu(this_02);
      postinitialize_handler((Object*)this_02);
      *(PopupMenu**)( this + 0xab8 ) = this_02;
      Node::add_child(this, this_02, 0, 0);
      plVar2 = *(long**)( this + 0xab8 );
      pcVar3 = *(code**)( *plVar2 + 0x108 );
      pCVar7 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(pCVar7);
      *(undefined**)( pCVar7 + 0x20 ) = &_LC30;
      *(undefined1(*) [16])( pCVar7 + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)pCVar7 = &PTR_hash_00129ec8;
      *(undefined8*)( pCVar7 + 0x40 ) = 0;
      uVar1 = *(undefined8*)( this + 0x60 );
      *(undefined8*)( pCVar7 + 0x10 ) = 0;
      *(undefined8*)( pCVar7 + 0x30 ) = uVar1;
      *(code**)( pCVar7 + 0x38 ) = _menu_selected;
      *(AnimationBezierTrackEdit**)( pCVar7 + 0x28 ) = this;
      CallableCustomMethodPointerBase::_setup((uint*)pCVar7, (int)pCVar7 + 0x28);
      *(char**)( pCVar7 + 0x20 ) = "AnimationBezierTrackEdit::_menu_selected";
      Callable::Callable((Callable*)&local_58, pCVar7);
      ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x240, (Callable*)&local_58, 0);
      Callable::~Callable((Callable*)&local_58);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* AnimationBezierTrackEdit::duplicate_selected_keys(float, bool) [clone .part.0] */
   void AnimationBezierTrackEdit::duplicate_selected_keys(AnimationBezierTrackEdit *this, float param_1, bool param_2) {
      Variant *pVVar1;
      undefined1(*pauVar2)[16];
      undefined4 uVar3;
      StringName *pSVar4;
      void *pvVar5;
      char cVar6;
      int iVar7;
      Object *pOVar8;
      undefined4 *puVar9;
      long lVar10;
      long lVar11;
      Object *pOVar12;
      int iVar13;
      Variant *pVVar14;
      int *piVar15;
      long in_FS_OFFSET;
      float fVar16;
      float fVar17;
      double dVar18;
      double dVar19;
      Variant *local_458;
      Variant **local_448;
      undefined1(*local_438)[16];
      float local_430;
      undefined8 local_2f8;
      long local_2f0;
      Object *local_2e8;
      undefined8 local_2e0;
      Variant *local_2d8[4];
      Variant *local_2b8;
      undefined1 auStack_2b0[16];
      Variant *pVStack_2a0;
      undefined1 local_298[16];
      int local_288[6];
      Variant local_270[24];
      undefined8 local_258;
      undefined1 local_250[16];
      Variant local_240[8];
      Variant *local_238;
      Variant *pVStack_230;
      Variant *local_228;
      Variant *apVStack_220[3];
      Variant local_208[24];
      Variant local_1f0[24];
      undefined8 local_1d8;
      undefined1 local_1d0[16];
      Variant local_1c0[8];
      Variant local_1b8[24];
      Variant local_1a0[24];
      Variant local_188[24];
      Variant local_170[24];
      undefined8 local_158;
      undefined1 local_150[16];
      Variant local_140[8];
      Variant local_138[24];
      Variant local_120[24];
      Variant local_108[24];
      Variant local_f0[24];
      undefined8 local_d8;
      undefined1 local_d0[16];
      Variant local_c0[8];
      Variant local_b8[24];
      Variant local_a0[24];
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 0xba0 ) == 0) {
         local_430 = _LC84;
      }
 else {
         lVar10 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
         if (lVar10 == *(long*)( this + 0xba8 )) {
            local_430 = _LC84;
         }
 else {
            do {
               lVar11 = lVar10;
               lVar10 = *(long*)( lVar11 + 8 );
            }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar11 + 8 ) );
            local_430 = _LC84;
            do {
               dVar18 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
               lVar11 = *(long*)( lVar11 + 0x28 );
               fVar16 = (float)dVar18;
               if (local_430 <= (float)dVar18) {
                  fVar16 = local_430;
               }

               local_430 = fVar16;
            }
 while ( lVar11 != 0 );
         }

      }

      pOVar8 = (Object*)EditorUndoRedoManager::get_singleton();
      local_2f0 = 0;
      local_2e0 = 0;
      local_2e8 = (Object*)&_LC30;
      String::parse_latin1((StrRange*)&local_2f0);
      local_2e8 = (Object*)0x116ce5;
      local_2f8 = 0;
      local_2e0 = 0x18;
      String::parse_latin1((StrRange*)&local_2f8);
      TTR((String*)&local_2e8, (String*)&local_2f8);
      EditorUndoRedoManager::create_action(pOVar8, (String*)&local_2e8, 0, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f0);
      local_438 = *(undefined1(**) [16])( this + 0xba0 );
      if (local_438 != (undefined1(*) [16])0x0) {
         lVar10 = *(long*)local_438[1];
         if (*(long*)local_438[1] == *(long*)( this + 0xba8 )) {
            local_438 = (undefined1(*) [16])0x0;
         }
 else {
            do {
               lVar11 = lVar10;
               lVar10 = *(long*)( lVar11 + 8 );
            }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar11 + 8 ) );
            local_438 = (undefined1(*) [16])0x0;
            do {
               dVar18 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
               if (param_2) {
                  cVar6 = BaseButton::is_pressed();
                  fVar16 = param_1;
                  if (( cVar6 != '\0' ) && ( dVar19 = dVar19 != 0.0 )) {
                     fVar16 = (float)AnimationTrackEditor::snap_time(param_1, SUB81(*(undefined8*)( this + 0xb88 ), 0));
                  }

               }
 else {
                  fVar16 = (float)AnimationTimelineEdit::get_play_position();
               }

               fVar16 = ( fVar16 - local_430 ) + (float)dVar18;
               iVar7 = Animation::track_find_key((double)fVar16, *(undefined8*)( this + 0x9e8 ), *(undefined4*)( lVar11 + 0x30 ), 1, 0, 0);
               fVar17 = (float)Animation::track_get_key_transition((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
               Animation::track_get_key_value((int)(Variant*)local_2d8, (int)*(undefined8*)( this + 0x9e8 ));
               iVar13 = *(int*)( lVar11 + 0x30 );
               StringName::StringName((StringName*)&local_2e8, "track_insert_key", false);
               pSVar4 = *(StringName**)( this + 0x9e8 );
               Variant::Variant((Variant*)&local_238, iVar13);
               Variant::Variant((Variant*)apVStack_220, fVar16);
               Variant::Variant(local_208, (Variant*)local_2d8);
               Variant::Variant(local_1f0, fVar17);
               local_1d8 = 0;
               local_1d0 = (undefined1[16])0x0;
               auStack_2b0._8_8_ = local_208;
               auStack_2b0._0_8_ = (Variant*)apVStack_220;
               local_2b8 = (Variant*)&local_238;
               pVStack_2a0 = local_1f0;
               EditorUndoRedoManager::add_do_methodp(pOVar8, pSVar4, (Variant**)&local_2e8, (int)&local_2b8);
               pVVar14 = local_1c0;
               do {
                  pVVar1 = pVVar14 + -0x18;
                  pVVar14 = pVVar14 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar14 != (Variant*)&local_238 );
               if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[(int)local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               iVar13 = *(int*)( lVar11 + 0x30 );
               StringName::StringName((StringName*)&local_2e8, "track_remove_key_at_time", false);
               pSVar4 = *(StringName**)( this + 0x9e8 );
               Variant::Variant((Variant*)local_288, iVar13);
               Variant::Variant(local_270, fVar16);
               local_258 = 0;
               local_250 = (undefined1[16])0x0;
               iVar13 = (int)(Variant*)&local_238;
               local_238 = (Variant*)local_288;
               pVStack_230 = local_270;
               EditorUndoRedoManager::add_undo_methodp(pOVar8, pSVar4, (Variant**)&local_2e8, iVar13);
               pVVar14 = local_240;
               do {
                  pVVar1 = pVVar14 + -0x18;
                  pVVar14 = pVVar14 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar14 != (Variant*)local_288 );
               if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               uVar3 = *(undefined4*)( lVar11 + 0x30 );
               if (local_438 == (undefined1(*) [16])0x0) {
                  local_438 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_438[1] = 0;
                  *local_438 = (undefined1[16])0x0;
               }

               puVar9 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
               lVar10 = *(long*)( *local_438 + 8 );
               *(undefined8*)( puVar9 + 2 ) = 0;
               *puVar9 = uVar3;
               *(long*)( puVar9 + 4 ) = lVar10;
               *(undefined1(**) [16])( puVar9 + 6 ) = local_438;
               puVar9[1] = fVar16;
               if (lVar10 != 0) {
                  *(undefined4**)( lVar10 + 8 ) = puVar9;
               }

               lVar10 = *(long*)*local_438;
               *(undefined4**)( *local_438 + 8 ) = puVar9;
               if (lVar10 == 0) {
                  *(undefined4**)*local_438 = puVar9;
               }

               *(int*)local_438[1] = *(int*)local_438[1] + 1;
               if (iVar7 != -1) {
                  fVar17 = (float)Animation::track_get_key_transition((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
                  Animation::track_get_key_value((int)(Variant*)local_288, (int)*(undefined8*)( this + 0x9e8 ));
                  iVar7 = *(int*)( lVar11 + 0x30 );
                  StringName::StringName((StringName*)&local_2e8, "track_insert_key", false);
                  pSVar4 = *(StringName**)( this + 0x9e8 );
                  Variant::Variant(local_1b8, iVar7);
                  Variant::Variant(local_1a0, fVar16);
                  Variant::Variant(local_188, (Variant*)local_288);
                  Variant::Variant(local_170, fVar17);
                  local_150 = (undefined1[16])0x0;
                  pVVar14 = local_140;
                  local_158 = 0;
                  local_238 = local_1b8;
                  pVStack_230 = local_1a0;
                  local_228 = local_188;
                  apVStack_220[0] = local_170;
                  EditorUndoRedoManager::add_undo_methodp(pOVar8, pSVar4, (Variant**)&local_2e8, iVar13);
                  do {
                     pVVar1 = pVVar14 + -0x18;
                     pVVar14 = pVVar14 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar14 != local_1b8 );
                  if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  if (Variant::needs_deinit[local_288[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               lVar11 = *(long*)( lVar11 + 0x28 );
            }
 while ( lVar11 != 0 );
         }

      }

      local_448 = local_2d8;
      local_458 = (Variant*)&local_2b8;
      local_2e8 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_2e8, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_2f0, "_clear_selection_for_anim", false);
      Variant::Variant(local_458, local_2e8);
      pVStack_2a0 = (Variant*)0x0;
      local_2d8[0] = local_458;
      local_298 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_do_methodp(pOVar8, (StringName*)this, (Variant**)&local_2f0, (int)local_448);
      if (Variant::needs_deinit[(int)pVStack_2a0] == '\0') {
         cVar6 = Variant::needs_deinit[(int)local_2b8];
      }
 else {
         Variant::_clear_internal();
         cVar6 = Variant::needs_deinit[(int)local_2b8];
      }

      if (cVar6 != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_2f0 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_2e8);
      local_2e8 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_2e8, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_2f0, "_clear_selection_for_anim", false);
      Variant::Variant(local_458, local_2e8);
      pVStack_2a0 = (Variant*)0x0;
      local_2d8[0] = local_458;
      local_298 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_undo_methodp(pOVar8, (StringName*)this, (Variant**)&local_2f0, (int)local_448);
      if (Variant::needs_deinit[(int)pVStack_2a0] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_2f0 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_2e8);
      if (( local_438 != (undefined1(*) [16])0x0 ) && ( piVar15 = *(int**)*local_438 ),piVar15 != (int*)0x0) {
         iVar13 = 0;
         do {
            iVar7 = *piVar15;
            fVar16 = (float)piVar15[1];
            pOVar12 = *(Object**)( this + 0x9e8 );
            if (( pOVar12 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               pOVar12 = (Object*)0x0;
            }

            StringName::StringName((StringName*)&local_2e8, "_select_at_anim", false);
            Variant::Variant(local_138, pOVar12);
            Variant::Variant(local_120, iVar7);
            Variant::Variant(local_108, fVar16);
            Variant::Variant(local_f0, iVar13 == 0);
            local_d8 = 0;
            local_d0 = (undefined1[16])0x0;
            auStack_2b0._8_8_ = local_108;
            auStack_2b0._0_8_ = local_120;
            local_2b8 = local_138;
            pVStack_2a0 = local_f0;
            EditorUndoRedoManager::add_do_methodp(pOVar8, (StringName*)this, (Variant**)&local_2e8, (int)local_458);
            pVVar14 = local_c0;
            do {
               pVVar1 = pVVar14 + -0x18;
               pVVar14 = pVVar14 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar14 != local_138 );
            if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
               StringName::unref();
            }

            if (( ( pOVar12 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
            Memory::free_static(pOVar12, false);
         }
 while ( piVar15 != (int*)0x0 );
      }

      if (*(long*)( this + 0xba0 ) != 0) {
         lVar10 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
         if (lVar10 != *(long*)( this + 0xba8 )) {
            do {
               lVar11 = lVar10;
               lVar10 = *(long*)( lVar11 + 8 );
            }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar11 + 8 ) );
            iVar13 = 0;
            do {
               dVar18 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
               iVar7 = *(int*)( lVar11 + 0x30 );
               pOVar12 = *(Object**)( this + 0x9e8 );
               if (( pOVar12 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                  pOVar12 = (Object*)0x0;
               }

               StringName::StringName((StringName*)&local_2e8, "_select_at_anim", false);
               Variant::Variant(local_b8, pOVar12);
               Variant::Variant(local_a0, iVar7);
               Variant::Variant(local_88, (float)dVar18);
               Variant::Variant(local_70, iVar13 == 0);
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               auStack_2b0._8_8_ = local_88;
               auStack_2b0._0_8_ = local_a0;
               local_2b8 = local_b8;
               pVStack_2a0 = local_70;
               EditorUndoRedoManager::add_undo_methodp(pOVar8, (StringName*)this, (Variant**)&local_2e8, (int)local_458);
               pVVar14 = (Variant*)local_40;
               do {
                  pVVar1 = pVVar14 + -0x18;
                  pVVar14 = pVVar14 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar14 != local_b8 );
               if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (( ( pOVar12 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
               Memory::free_static(pOVar12, false);
            }
 while ( lVar11 != 0 );
         }

      }

      pSVar4 = AnimationPlayerEditor::singleton;
      if (AnimationPlayerEditor::singleton != (StringName*)0x0) {
         StringName::StringName((StringName*)&local_2e8, "_animation_update_key_frame", false);
         local_2b8 = (Variant*)0x0;
         auStack_2b0 = (undefined1[16])0x0;
         EditorUndoRedoManager::add_do_methodp(pOVar8, pSVar4, (Variant**)&local_2e8, 0);
         if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_2e8, "_animation_update_key_frame", false);
         local_2b8 = (Variant*)0x0;
         auStack_2b0 = (undefined1[16])0x0;
         EditorUndoRedoManager::add_undo_methodp(pOVar8, pSVar4, (Variant**)&local_2e8, 0);
         if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      StringName::StringName((StringName*)&local_2e8, "queue_redraw", false);
      local_2b8 = (Variant*)0x0;
      auStack_2b0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_do_methodp(pOVar8, (StringName*)this, (Variant**)&local_2e8, 0);
      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_2e8, "queue_redraw", false);
      local_2b8 = (Variant*)0x0;
      auStack_2b0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_undo_methodp(pOVar8, (StringName*)this, (Variant**)&local_2e8, 0);
      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_2e8 != (Object*)0x0 )) {
         StringName::unref();
      }

      EditorUndoRedoManager::commit_action(SUB81(pOVar8, 0));
      if (local_438 != (undefined1(*) [16])0x0) {
         do {
            while (true) {
               pvVar5 = *(void**)*local_438;
               if (pvVar5 == (void*)0x0) {
                  if (*(int*)local_438[1] != 0) {
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     goto LAB_0010572e;
                  }

                  goto LAB_00105722;
               }

               if (local_438 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
               lVar10 = *(long*)( (long)pvVar5 + 8 );
               lVar11 = *(long*)( (long)pvVar5 + 0x10 );
               *(long*)*local_438 = lVar10;
               if (pvVar5 == *(void**)( *local_438 + 8 )) {
                  *(long*)( *local_438 + 8 ) = lVar11;
               }

               if (lVar11 != 0) {
                  *(long*)( lVar11 + 8 ) = lVar10;
                  lVar10 = *(long*)( (long)pvVar5 + 8 );
               }

               if (lVar10 != 0) {
                  *(long*)( lVar10 + 0x10 ) = lVar11;
               }

               Memory::free_static(pvVar5, false);
               pauVar2 = local_438 + 1;
               *(int*)*pauVar2 = *(int*)*pauVar2 + -1;
               if (*(int*)*pauVar2 == 0) goto LAB_00105722;
            }
;
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
 while ( *(int*)local_438[1] != 0 );
         LAB_00105722:Memory::free_static(local_438, false);
      }

      LAB_0010572e:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* AnimationBezierTrackEdit::duplicate_selected_keys(float, bool) */
   void AnimationBezierTrackEdit::duplicate_selected_keys(AnimationBezierTrackEdit *this, float param_1, bool param_2) {
      if (*(int*)( this + 0xbb0 ) != 0) {
         duplicate_selected_keys(this, param_1, param_2);
         return;
      }

      return;
   }

   /* AnimationBezierTrackEdit::paste_keys(float, bool) [clone .part.0] */
   void AnimationBezierTrackEdit::paste_keys(AnimationBezierTrackEdit *this, float param_1, bool param_2) {
      Variant *pVVar1;
      undefined1(*pauVar2)[16];
      undefined1 *puVar3;
      int iVar4;
      undefined4 uVar5;
      StringName *pSVar6;
      void *pvVar7;
      char cVar8;
      int iVar9;
      Object *pOVar10;
      long lVar11;
      long lVar12;
      undefined4 *puVar13;
      int iVar14;
      Object *pOVar15;
      long lVar16;
      Variant *pVVar17;
      int *piVar18;
      int iVar19;
      long in_FS_OFFSET;
      float fVar20;
      float fVar21;
      double dVar22;
      long local_448;
      undefined1(*local_378)[16];
      undefined8 local_318;
      long local_310;
      Object *local_308;
      undefined8 local_300;
      int local_2f8[2];
      Variant *local_2f0;
      Variant *pVStack_2e8;
      int local_2d8[8];
      undefined8 local_2b8;
      undefined8 uStack_2b0;
      Variant *local_2a8;
      Variant *pVStack_2a0;
      Variant local_288[24];
      Variant local_270[24];
      undefined8 local_258;
      undefined1 local_250[16];
      Variant local_240[8];
      int local_238[6];
      Variant local_220[24];
      Variant local_208[24];
      Variant local_1f0[24];
      undefined8 local_1d8;
      undefined1 local_1d0[16];
      Variant local_1c0[8];
      Variant local_1b8[24];
      Variant local_1a0[24];
      Variant local_188[24];
      Variant local_170[24];
      undefined8 local_158;
      undefined1 local_150[16];
      Variant local_140[8];
      undefined8 local_138;
      Variant *pVStack_130;
      undefined8 uStack_128;
      Variant *pVStack_120;
      undefined1 local_118[16];
      Variant local_108[24];
      Variant local_f0[24];
      undefined8 local_d8;
      undefined1 local_d0[16];
      Variant local_c0[8];
      Variant local_b8[24];
      Variant local_a0[24];
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      pOVar10 = (Object*)EditorUndoRedoManager::get_singleton();
      local_310 = 0;
      local_308 = (Object*)&_LC30;
      local_300 = 0;
      String::parse_latin1((StrRange*)&local_310);
      local_308 = (Object*)0x116d24;
      local_318 = 0;
      local_300 = 0x14;
      String::parse_latin1((StrRange*)&local_318);
      TTR((String*)&local_308, (String*)&local_318);
      EditorUndoRedoManager::create_action(pOVar10, (String*)&local_308, 0, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
      lVar12 = *(long*)( this + 0xb88 );
      lVar11 = *(long*)( lVar12 + 0xcf0 );
      if (lVar11 != 0) {
         lVar16 = 0;
         do {
            if (*(long*)( lVar11 + -8 ) <= lVar16) break;
            puVar3 = (undefined1*)( lVar11 + lVar16 * 0x28 );
            local_138._0_4_ = CONCAT31(local_138._1_3_, *puVar3);
            local_138._4_4_ = *(int*)( puVar3 + 4 );
            pVStack_130 = *(Variant**)( puVar3 + 8 );
            Variant::Variant((Variant*)&uStack_128, (Variant*)( puVar3 + 0x10 ));
            if (local_138._4_4_ != 0) {
               if (Variant::needs_deinit[(int)uStack_128] != '\0') {
                  Variant::_clear_internal();
               }

               _err_print_error("paste_keys", "editor/animation_bezier_editor.cpp", 0x75c, "Pasted animation keys from multiple tracks into single Bezier track", 0, 1);
               lVar12 = *(long*)( *(long*)( this + 0xb88 ) + 0xcf0 );
               goto LAB_00105db7;
            }

            cVar8 = AnimationTrackEditor::_is_track_compatible(*(undefined8*)( this + 0xb88 ), *(undefined4*)( this + 0x9f4 ), (int)uStack_128, local_138._0_1_);
            if (cVar8 == '\0') {
               if (Variant::needs_deinit[(int)uStack_128] != '\0') {
                  Variant::_clear_internal();
               }

               _err_print_error("paste_keys", "editor/animation_bezier_editor.cpp", 0x75a, "Condition \"!all_compatible\" is true.", "Paste failed: Not all animation keys were compatible with their target tracks", 0, 0);
               goto LAB_00106aba;
            }

            if (Variant::needs_deinit[(int)uStack_128] != '\0') {
               Variant::_clear_internal();
            }

            lVar12 = *(long*)( this + 0xb88 );
            lVar16 = lVar16 + 1;
            lVar11 = *(long*)( lVar12 + 0xcf0 );
         }
 while ( lVar11 != 0 );
         lVar12 = *(long*)( lVar12 + 0xcf0 );
         LAB_00105db7:local_448 = 0;
         if (lVar12 != 0) {
            local_378 = (undefined1(*) [16])0x0;
            do {
               if (*(long*)( lVar12 + -8 ) <= local_448) break;
               puVar3 = (undefined1*)( lVar12 + local_448 * 0x28 );
               local_2b8 = (Variant*)CONCAT71(local_2b8._1_7_, *puVar3);
               local_2b8 = (Variant*)CONCAT44(*(undefined4*)( puVar3 + 4 ), (undefined4)local_2b8);
               uStack_2b0 = *(Variant**)( puVar3 + 8 );
               Variant::Variant((Variant*)&local_2a8, (Variant*)( puVar3 + 0x10 ));
               if (param_2) {
                  cVar8 = BaseButton::is_pressed();
                  fVar20 = param_1;
                  if (cVar8 != '\0') {
                     dVar22 = (double)Range::get_value();
                     if (dVar22 != 0.0) {
                        fVar20 = (float)AnimationTrackEditor::snap_time(param_1, SUB81(*(undefined8*)( this + 0xb88 ), 0));
                     }

                  }

               }
 else {
                  fVar20 = (float)AnimationTimelineEdit::get_play_position();
               }

               fVar20 = fVar20 + (float)uStack_2b0;
               iVar9 = Animation::track_find_key((double)fVar20, *(undefined8*)( this + 0x9e8 ), *(undefined4*)( this + 0x9f4 ), 1, 0, 0);
               Variant::Variant((Variant*)local_2f8, (Variant*)&local_2a8);
               if ((char)local_2b8 != '\x06') {
                  fVar21 = Variant::operator_cast_to_float((Variant*)&local_2a8);
                  Animation::make_default_bezier_key(fVar21);
                  Variant::Variant((Variant*)&local_138, (String*)&local_308);
                  pVVar17 = uStack_128;
                  if (Variant::needs_deinit[local_2f8[0]] != '\0') {
                     Variant::_clear_internal();
                     pVVar17 = uStack_128;
                  }

                  pVStack_2e8 = pVVar17;
                  local_2f8[0] = (int)local_138;
                  local_2f0 = pVStack_130;
                  uStack_128 = pVStack_2e8;
                  Array::~Array((Array*)&local_308);
               }

               fVar21 = uStack_2b0._4_4_;
               Variant::Variant((Variant*)local_2d8, (Variant*)local_2f8);
               iVar19 = *(int*)( this + 0x9f4 );
               StringName::StringName((StringName*)&local_308, "track_insert_key", false);
               pSVar6 = *(StringName**)( this + 0x9e8 );
               Variant::Variant((Variant*)local_238, iVar19);
               Variant::Variant(local_220, fVar20);
               Variant::Variant(local_208, (Variant*)local_2d8);
               Variant::Variant(local_1f0, fVar21);
               local_1d8 = 0;
               local_1d0 = (undefined1[16])0x0;
               pVVar17 = local_1c0;
               local_138._0_4_ = (int)(Variant*)local_238;
               iVar19 = (int)local_138;
               iVar14 = (int)(Variant*)&local_138;
               pVStack_130 = local_220;
               pVStack_120 = local_1f0;
               local_138 = (Variant*)local_238;
               uStack_128 = local_208;
               EditorUndoRedoManager::add_do_methodp(pOVar10, pSVar6, (Variant**)&local_308, iVar14);
               do {
                  pVVar1 = pVVar17 + -0x18;
                  pVVar17 = pVVar17 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar17 != (Variant*)local_238 );
               if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               iVar4 = *(int*)( this + 0x9f4 );
               StringName::StringName((StringName*)&local_308, "track_remove_key_at_time", false);
               pSVar6 = *(StringName**)( this + 0x9e8 );
               Variant::Variant(local_288, iVar4);
               Variant::Variant(local_270, fVar20);
               local_258 = 0;
               local_250 = (undefined1[16])0x0;
               pVVar17 = local_240;
               pVStack_130 = local_270;
               local_138 = local_288;
               EditorUndoRedoManager::add_undo_methodp(pOVar10, pSVar6, (Variant**)&local_308, iVar14);
               do {
                  pVVar1 = pVVar17 + -0x18;
                  pVVar17 = pVVar17 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar17 != local_288 );
               if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
                  StringName::unref();
               }

               uVar5 = *(undefined4*)( this + 0x9f4 );
               if (local_378 == (undefined1(*) [16])0x0) {
                  local_378 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_378[1] = 0;
                  *local_378 = (undefined1[16])0x0;
               }

               puVar13 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
               lVar12 = *(long*)( *local_378 + 8 );
               *(undefined8*)( puVar13 + 2 ) = 0;
               *puVar13 = uVar5;
               *(long*)( puVar13 + 4 ) = lVar12;
               *(undefined1(**) [16])( puVar13 + 6 ) = local_378;
               puVar13[1] = fVar20;
               if (lVar12 != 0) {
                  *(undefined4**)( lVar12 + 8 ) = puVar13;
               }

               lVar12 = *(long*)*local_378;
               *(undefined4**)( *local_378 + 8 ) = puVar13;
               if (lVar12 == 0) {
                  *(undefined4**)*local_378 = puVar13;
               }

               *(int*)local_378[1] = *(int*)local_378[1] + 1;
               if (iVar9 != -1) {
                  fVar21 = (float)Animation::track_get_key_transition((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0x9f4 ));
                  Animation::track_get_key_value(iVar19, (int)*(undefined8*)( this + 0x9e8 ));
                  iVar9 = *(int*)( this + 0x9f4 );
                  StringName::StringName((StringName*)&local_308, "track_insert_key", false);
                  pSVar6 = *(StringName**)( this + 0x9e8 );
                  Variant::Variant(local_1b8, iVar9);
                  Variant::Variant(local_1a0, fVar20);
                  Variant::Variant(local_188, (Variant*)local_238);
                  Variant::Variant(local_170, fVar21);
                  local_158 = 0;
                  local_150 = (undefined1[16])0x0;
                  pVVar17 = local_140;
                  pVStack_130 = local_1a0;
                  pVStack_120 = local_170;
                  local_138 = local_1b8;
                  uStack_128 = local_188;
                  EditorUndoRedoManager::add_undo_methodp(pOVar10, pSVar6, (Variant**)&local_308, iVar14);
                  do {
                     pVVar1 = pVVar17 + -0x18;
                     pVVar17 = pVVar17 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar17 != local_1b8 );
                  if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  if (Variant::needs_deinit[local_238[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               if (Variant::needs_deinit[local_2f8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[(int)local_2a8] != '\0') {
                  Variant::_clear_internal();
               }

               local_448 = local_448 + 1;
               lVar12 = *(long*)( *(long*)( this + 0xb88 ) + 0xcf0 );
            }
 while ( lVar12 != 0 );
            goto LAB_00106345;
         }

      }

      local_378 = (undefined1(*) [16])0x0;
      LAB_00106345:local_308 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_308, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_310, "_clear_selection_for_anim", false);
      Variant::Variant((Variant*)&local_138, local_308);
      pVStack_120 = (Variant*)0x0;
      local_118 = (undefined1[16])0x0;
      iVar9 = (int)&local_2b8;
      local_2b8 = (Variant*)&local_138;
      EditorUndoRedoManager::add_do_methodp(pOVar10, (StringName*)this, (Variant**)&local_310, iVar9);
      if (Variant::needs_deinit[(int)pVStack_120] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_138] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_310 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_308);
      local_308 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_308, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_310, "_clear_selection_for_anim", false);
      Variant::Variant((Variant*)&local_138, local_308);
      pVStack_120 = (Variant*)0x0;
      local_118 = (undefined1[16])0x0;
      local_2b8 = (Variant*)&local_138;
      EditorUndoRedoManager::add_undo_methodp(pOVar10, (StringName*)this, (Variant**)&local_310, iVar9);
      if (Variant::needs_deinit[(int)pVStack_120] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_138] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_310 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_308);
      if (( local_378 != (undefined1(*) [16])0x0 ) && ( piVar18 = *(int**)*local_378 ),piVar18 != (int*)0x0) {
         iVar19 = 0;
         do {
            iVar14 = *piVar18;
            fVar20 = (float)piVar18[1];
            pOVar15 = *(Object**)( this + 0x9e8 );
            if (pOVar15 != (Object*)0x0) {
               cVar8 = RefCounted::reference();
               if (cVar8 == '\0') {
                  pOVar15 = (Object*)0x0;
               }

            }

            StringName::StringName((StringName*)&local_308, "_select_at_anim", false);
            Variant::Variant((Variant*)&local_138, pOVar15);
            Variant::Variant((Variant*)&pVStack_120, iVar14);
            Variant::Variant(local_108, fVar20);
            Variant::Variant(local_f0, iVar19 == 0);
            local_d8 = 0;
            local_d0 = (undefined1[16])0x0;
            local_2b8 = (Variant*)&local_138;
            uStack_2b0 = (Variant*)&pVStack_120;
            local_2a8 = local_108;
            pVStack_2a0 = local_f0;
            EditorUndoRedoManager::add_do_methodp(pOVar10, (StringName*)this, (Variant**)&local_308, iVar9);
            pVVar17 = local_c0;
            do {
               pVVar1 = pVVar17 + -0x18;
               pVVar17 = pVVar17 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar17 != (Variant*)&local_138 );
            if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
               StringName::unref();
            }

            if (pOVar15 != (Object*)0x0) {
               cVar8 = RefCounted::unreference();
               if (cVar8 != '\0') {
                  cVar8 = predelete_handler(pOVar15);
                  if (cVar8 != '\0') {
                     ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
                     Memory::free_static(pOVar15, false);
                  }

               }

            }

            piVar18 = *(int**)( piVar18 + 2 );
            iVar19 = iVar19 + 1;
         }
 while ( piVar18 != (int*)0x0 );
      }

      if (*(long*)( this + 0xba0 ) != 0) {
         lVar12 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
         if (lVar12 != *(long*)( this + 0xba8 )) {
            do {
               lVar11 = lVar12;
               lVar12 = *(long*)( lVar11 + 8 );
            }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar11 + 8 ) );
            iVar9 = 0;
            do {
               dVar22 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar11 + 0x30 ));
               iVar19 = *(int*)( lVar11 + 0x30 );
               pOVar15 = *(Object**)( this + 0x9e8 );
               if (pOVar15 != (Object*)0x0) {
                  cVar8 = RefCounted::reference();
                  if (cVar8 == '\0') {
                     pOVar15 = (Object*)0x0;
                  }

               }

               StringName::StringName((StringName*)&local_308, "_select_at_anim", false);
               Variant::Variant(local_b8, pOVar15);
               Variant::Variant(local_a0, iVar19);
               Variant::Variant(local_88, dVar22);
               Variant::Variant(local_70, iVar9 == 0);
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               pVStack_130 = local_a0;
               pVStack_120 = local_70;
               local_138 = local_b8;
               uStack_128 = local_88;
               EditorUndoRedoManager::add_undo_methodp(pOVar10, (StringName*)this, (Variant**)&local_308, (int)(Variant*)&local_138);
               pVVar17 = (Variant*)local_40;
               do {
                  pVVar1 = pVVar17 + -0x18;
                  pVVar17 = pVVar17 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar17 != local_b8 );
               if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (pOVar15 != (Object*)0x0) {
                  cVar8 = RefCounted::unreference();
                  if (cVar8 != '\0') {
                     cVar8 = predelete_handler(pOVar15);
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
                        Memory::free_static(pOVar15, false);
                     }

                  }

               }

               lVar11 = *(long*)( lVar11 + 0x28 );
               iVar9 = iVar9 + 1;
            }
 while ( lVar11 != 0 );
         }

      }

      pSVar6 = AnimationPlayerEditor::singleton;
      if (AnimationPlayerEditor::singleton != (StringName*)0x0) {
         StringName::StringName((StringName*)&local_308, "_animation_update_key_frame", false);
         local_138._0_4_ = 0;
         local_138._4_4_ = 0;
         pVStack_130 = (Variant*)0x0;
         uStack_128._0_4_ = 0;
         uStack_128._4_4_ = 0;
         EditorUndoRedoManager::add_do_methodp(pOVar10, pSVar6, (Variant**)&local_308, 0);
         if (Variant::needs_deinit[(int)local_138] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_308, "_animation_update_key_frame", false);
         local_138._0_4_ = 0;
         local_138._4_4_ = 0;
         pVStack_130 = (Variant*)0x0;
         uStack_128._0_4_ = 0;
         uStack_128._4_4_ = 0;
         EditorUndoRedoManager::add_undo_methodp(pOVar10, pSVar6, (Variant**)&local_308, 0);
         if (Variant::needs_deinit[(int)local_138] != '\0') {
            Variant::_clear_internal();
         }

         local_138 = (Variant*)CONCAT44(local_138._4_4_, (int)local_138);
         uStack_128 = (Variant*)CONCAT44(uStack_128._4_4_, (int)uStack_128);
         if (( StringName::configured != '\0' ) && ( local_138 = (Variant*)CONCAT44(local_138._4_4_, (int)local_138) ),uStack_128 = (Variant*)CONCAT44(uStack_128._4_4_, (int)uStack_128),local_308 != (Object*)0x0) {
            StringName::unref();
         }

      }

      StringName::StringName((StringName*)&local_308, "queue_redraw", false);
      local_138._0_4_ = 0;
      local_138._4_4_ = 0;
      pVStack_130 = (Variant*)0x0;
      uStack_128._0_4_ = 0;
      uStack_128._4_4_ = 0;
      EditorUndoRedoManager::add_do_methodp(pOVar10, (StringName*)this, (Variant**)&local_308, 0);
      if (Variant::needs_deinit[(int)local_138] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_308, "queue_redraw", false);
      local_138._0_4_ = 0;
      local_138._4_4_ = 0;
      pVStack_130 = (Variant*)0x0;
      uStack_128._0_4_ = 0;
      uStack_128._4_4_ = 0;
      EditorUndoRedoManager::add_undo_methodp(pOVar10, (StringName*)this, (Variant**)&local_308, 0);
      if (Variant::needs_deinit[(int)local_138] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_308 != (Object*)0x0 )) {
         StringName::unref();
      }

      EditorUndoRedoManager::commit_action(SUB81(pOVar10, 0));
      if (local_378 != (undefined1(*) [16])0x0) {
         do {
            while (true) {
               pvVar7 = *(void**)*local_378;
               if (pvVar7 == (void*)0x0) {
                  if (*(int*)local_378[1] != 0) {
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     goto LAB_00106aba;
                  }

                  goto LAB_00106aab;
               }

               if (*(undefined1(**) [16])( (long)pvVar7 + 0x18 ) != local_378) break;
               lVar12 = *(long*)( (long)pvVar7 + 8 );
               lVar11 = *(long*)( (long)pvVar7 + 0x10 );
               *(long*)*local_378 = lVar12;
               if (pvVar7 == *(void**)( *local_378 + 8 )) {
                  *(long*)( *local_378 + 8 ) = lVar11;
               }

               if (lVar11 != 0) {
                  *(long*)( lVar11 + 8 ) = lVar12;
                  lVar12 = *(long*)( (long)pvVar7 + 8 );
               }

               if (lVar12 != 0) {
                  *(long*)( lVar12 + 0x10 ) = lVar11;
               }

               Memory::free_static(pvVar7, false);
               pauVar2 = local_378 + 1;
               *(int*)*pauVar2 = *(int*)*pauVar2 + -1;
               if (*(int*)*pauVar2 == 0) goto LAB_00106aab;
            }
;
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
 while ( *(int*)local_378[1] != 0 );
         LAB_00106aab:Memory::free_static(local_378, false);
      }

      LAB_00106aba:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* AnimationBezierTrackEdit::paste_keys(float, bool) */
   void AnimationBezierTrackEdit::paste_keys(AnimationBezierTrackEdit *this, float param_1, bool param_2) {
      int iVar1;
      char cVar2;
      int iVar3;
      cVar2 = AnimationTrackEditor::is_key_clipboard_active();
      if (( ( cVar2 != '\0' ) && ( *(long*)( this + 0x9e8 ) != 0 ) ) && ( iVar1 = -1 < iVar1 )) {
         iVar3 = Animation::get_track_count();
         if (iVar1 < iVar3) {
            paste_keys(this, param_1, param_2);
            return;
         }

      }

      return;
   }

   /* AnimationBezierTrackEdit::set_filtered(bool) */
   void AnimationBezierTrackEdit::set_filtered(AnimationBezierTrackEdit *this, bool param_1) {
      AnimationBezierTrackEdit AVar1;
      NodePath *pNVar2;
      char cVar3;
      int iVar4;
      long lVar5;
      int iVar6;
      long in_FS_OFFSET;
      long local_58;
      NodePath local_50[8];
      long local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      this[0xaa4] = (AnimationBezierTrackEdit)param_1;
      if (*(long*)( this + 0x9e8 ) == 0) goto LAB_00106f3a;
      Animation::track_get_path((int)(NodePath*)&local_48);
      NodePath::operator_cast_to_String((NodePath*)&local_58);
      NodePath::~NodePath((NodePath*)&local_48);
      if (( this[0xaa4] != (AnimationBezierTrackEdit)0x0 ) && ( pNVar2 = *(NodePath**)( this + 0x9d0 ) ),pNVar2 != (NodePath*)0x0) {
         NodePath::NodePath((NodePath*)&local_48, (String*)&local_58);
         cVar3 = Node::has_node(pNVar2);
         NodePath::~NodePath((NodePath*)&local_48);
         if (cVar3 != '\0') {
            pNVar2 = *(NodePath**)( this + 0x9d0 );
            NodePath::NodePath((NodePath*)&local_48, (String*)&local_58);
            lVar5 = Node::get_node(pNVar2);
            NodePath::~NodePath((NodePath*)&local_48);
            if (lVar5 != 0) {
               cVar3 = EditorSelection::is_selected(*(Node**)( EditorNode::singleton + 0x608 ));
               if (cVar3 != '\0') goto LAB_00106f2a;
            }

            iVar6 = 0;
            while (true) {
               iVar4 = Animation::get_track_count();
               if (iVar4 <= iVar6) break;
               cVar3 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 ));
               if (cVar3 == '\x06') {
                  Animation::track_get_path((int)local_50);
                  NodePath::operator_cast_to_String((NodePath*)&local_48);
                  if (local_58 != local_48) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     local_58 = local_48;
                     local_48 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  NodePath::~NodePath(local_50);
                  pNVar2 = *(NodePath**)( this + 0x9d0 );
                  if (pNVar2 != (NodePath*)0x0) {
                     NodePath::NodePath((NodePath*)&local_48, (String*)&local_58);
                     cVar3 = Node::has_node(pNVar2);
                     NodePath::~NodePath((NodePath*)&local_48);
                     if (cVar3 != '\0') {
                        pNVar2 = *(NodePath**)( this + 0x9d0 );
                        NodePath::NodePath((NodePath*)&local_48, (String*)&local_58);
                        lVar5 = Node::get_node(pNVar2);
                        NodePath::~NodePath((NodePath*)&local_48);
                        if (lVar5 != 0) {
                           cVar3 = EditorSelection::is_selected(*(Node**)( EditorNode::singleton + 0x608 ));
                           if (cVar3 != '\0') {
                              AVar1 = this[0x9f0];
                              Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                              this[0x9f0] = AVar1;
                              *(int*)( this + 0x9f4 ) = iVar6;
                              CanvasItem::queue_redraw();
                              break;
                           }

                        }

                     }

                  }

               }

               iVar6 = iVar6 + 1;
            }
;
         }

      }

      LAB_00106f2a:CanvasItem::queue_redraw();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      LAB_00106f3a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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

   /* AnimationBezierTrackEdit::_bind_methods() */
   void AnimationBezierTrackEdit::_bind_methods(void) {
      long lVar1;
      code *pcVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined8 uVar9;
      int *piVar10;
      MethodBind *pMVar11;
      int *piVar12;
      long *plVar13;
      long lVar14;
      long in_FS_OFFSET;
      undefined8 local_238;
      undefined8 local_230;
      long local_228;
      undefined8 local_220;
      undefined8 local_218;
      long local_210;
      undefined8 local_208;
      undefined8 local_200;
      long local_1f8;
      undefined8 local_1f0;
      undefined8 local_1e8[6];
      long local_1b8;
      CowData local_1b0[8];
      StringName local_1a8[8];
      undefined4 local_1a0;
      CowData local_198[8];
      undefined4 local_190;
      undefined8 local_188;
      CowData local_180[8];
      StringName local_178[8];
      undefined4 local_170;
      CowData local_168[8];
      undefined4 local_160;
      undefined8 local_158;
      undefined8 local_150;
      StringName local_148[8];
      undefined4 local_140;
      undefined8 local_138;
      undefined4 local_130;
      undefined8 local_128;
      undefined8 local_120;
      StringName local_118[8];
      undefined4 local_110;
      undefined8 local_108;
      undefined4 local_100;
      char *local_f8;
      undefined8 local_f0;
      StringName local_e8[8];
      undefined4 local_e0;
      undefined8 local_d8;
      undefined4 local_d0;
      char *local_c8;
      undefined8 local_c0;
      undefined1 local_b8[16];
      undefined8 local_a8;
      undefined8 local_a0;
      undefined8 local_98;
      undefined8 local_90;
      undefined8 local_88[2];
      int *local_78;
      undefined8 local_70;
      undefined8 local_60;
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      D_METHODP((char*)&local_c8, (char***)"_clear_selection", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit>(_clear_selection);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_b8._8_8_;
            local_b8 = auVar3 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      D_METHODP((char*)&local_c8, (char***)"_clear_selection_for_anim", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&>(_clear_selection_for_anim);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_b8._8_8_;
            local_b8 = auVar4 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      D_METHODP((char*)&local_c8, (char***)"_select_at_anim", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&,int,float,bool>(_select_at_anim);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_b8._8_8_;
            local_b8 = auVar5 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      D_METHODP((char*)&local_c8, (char***)"_update_hidden_tracks_after", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit,int>(_update_hidden_tracks_after);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar6._8_8_ = 0;
            auVar6._0_8_ = local_b8._8_8_;
            local_b8 = auVar6 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      D_METHODP((char*)&local_c8, (char***)"_update_locked_tracks_after", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit,int>(_update_locked_tracks_after);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_b8._8_8_;
            local_b8 = auVar7 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      D_METHODP((char*)&local_c8, (char***)"_bezier_track_insert_key_at_anim", 0);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pMVar11 = create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>(_bezier_track_insert_key_at_anim);
      ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      uVar9 = local_b8._0_8_;
      if ((long*)local_b8._0_8_ != (long*)0x0) {
         LOCK();
         plVar13 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if ((long*)local_b8._0_8_ == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_b8._0_8_ + -8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = local_b8._8_8_;
            local_b8 = auVar8 << 0x40;
            if (lVar1 != 0) {
               lVar14 = 0;
               plVar13 = (long*)uVar9;
               do {
                  if (( StringName::configured != '\0' ) && ( *plVar13 != 0 )) {
                     StringName::unref();
                  }

                  lVar14 = lVar14 + 1;
                  plVar13 = plVar13 + 1;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static((long*)( uVar9 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      local_1f8 = 0;
      local_200 = 0;
      local_c8 = "";
      local_c0 = 0;
      String::parse_latin1((StrRange*)&local_200);
      local_208 = 0;
      local_c8 = "track";
      local_c0 = 5;
      String::parse_latin1((StrRange*)&local_208);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 2, (StrRange*)&local_208, 0, (StrRange*)&local_200, 6, &local_1f8);
      local_210 = 0;
      local_218 = 0;
      local_c8 = "";
      local_c0 = 0;
      String::parse_latin1((StrRange*)&local_218);
      local_c8 = "single";
      local_220 = 0;
      local_c0 = 6;
      String::parse_latin1((StrRange*)&local_220);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_1b8, 1, (StrRange*)&local_220, 0, (StrRange*)&local_218, 6, (StrRange*)&local_210);
      local_228 = 0;
      local_230 = 0;
      local_c8 = "";
      local_c0 = 0;
      String::parse_latin1((StrRange*)&local_230);
      local_c8 = "index";
      local_238 = 0;
      local_c0 = 5;
      String::parse_latin1((StrRange*)&local_238);
      PropertyInfo::PropertyInfo((PropertyInfo*)local_1e8, 2, (StrRange*)&local_238, 0, (StrRange*)&local_230, 6, &local_228);
      local_1f0 = 0;
      local_c8 = "select_key";
      local_c0 = 10;
      String::parse_latin1((StrRange*)&local_1f0);
      local_b8 = (undefined1[16])0x0;
      local_c8 = (char*)0x0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88[0] = 0;
      local_78 = (int*)0x0;
      local_70 = 0;
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_1f0);
      local_120 = 0;
      local_128 = CONCAT44(local_128._4_4_, (undefined4)local_188);
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, local_180);
      StringName::StringName(local_118, local_178);
      local_108 = 0;
      local_110 = local_170;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, local_168);
      local_150 = 0;
      local_100 = local_160;
      local_158 = CONCAT44(local_158._4_4_, (undefined4)local_1b8);
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, local_1b0);
      StringName::StringName(local_148, local_1a8);
      local_138 = 0;
      local_140 = local_1a0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, local_198);
      local_130 = local_190;
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)local_1e8);
      local_f8 = (char*)CONCAT44(local_f8._4_4_, (undefined4)local_128);
      local_f0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_120);
      StringName::StringName(local_e8, local_118);
      local_e0 = local_110;
      local_d8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
      local_d0 = local_100;
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_158);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_f8 = "AnimationBezierTrackEdit";
      local_128 = 0;
      local_f0 = 0x18;
      String::parse_latin1((StrRange*)&local_128);
      StringName::StringName((StringName*)&local_f8, (String*)&local_128, false);
      ClassDB::add_signal((StringName*)&local_f8, (MethodInfo*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<int>::_unref((CowData<int>*)&local_60);
      piVar10 = local_78;
      if (local_78 != (int*)0x0) {
         LOCK();
         plVar13 = (long*)( local_78 + -4 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if (local_78 == (int*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_78 + -2 );
            local_78 = (int*)0x0;
            if (lVar1 != 0) {
               lVar14 = 0;
               piVar12 = piVar10;
               do {
                  if (Variant::needs_deinit[*piVar12] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar14 = lVar14 + 1;
                  piVar12 = piVar12 + 6;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static(piVar10 + -4, false);
         }

      }

      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
      if (( StringName::configured != '\0' ) && ( local_228 != 0 )) {
         StringName::unref();
      }

      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_220);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
      if (( StringName::configured != '\0' ) && ( local_210 != 0 )) {
         StringName::unref();
      }

      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      if (( StringName::configured != '\0' ) && ( local_1f8 != 0 )) {
         StringName::unref();
      }

      local_1b8 = 0;
      local_1e8[0] = 0;
      local_c8 = "";
      local_c0 = 0;
      String::parse_latin1((StrRange*)local_1e8);
      local_c8 = "track";
      local_1f0 = 0;
      local_c0 = 5;
      String::parse_latin1((StrRange*)&local_1f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_128, 2, (StrRange*)&local_1f0, 0, (PropertyInfo*)local_1e8, 6, (PropertyInfo*)&local_1b8);
      local_c8 = "";
      local_1f8 = 0;
      local_200 = 0;
      local_c0 = 0;
      String::parse_latin1((StrRange*)&local_200);
      local_208 = 0;
      local_c8 = "index";
      local_c0 = 5;
      String::parse_latin1((StrRange*)&local_208);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 2, (StrRange*)&local_208, 0, (StrRange*)&local_200, 6, &local_1f8);
      local_c8 = "deselect_key";
      local_188 = 0;
      local_c0 = 0xc;
      String::parse_latin1((StrRange*)&local_188);
      local_b8 = (undefined1[16])0x0;
      local_c8 = (char*)0x0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88[0] = 0;
      local_78 = (int*)0x0;
      local_70 = 0;
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_188);
      local_f0 = 0;
      local_f8 = (char*)CONCAT44(local_f8._4_4_, (undefined4)local_128);
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_120);
      StringName::StringName(local_e8, local_118);
      local_d8 = 0;
      local_e0 = local_110;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
      local_d0 = local_100;
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_158);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_f8 = "AnimationBezierTrackEdit";
      local_210 = 0;
      local_f0 = 0x18;
      String::parse_latin1((StrRange*)&local_210);
      StringName::StringName((StringName*)&local_f8, (String*)&local_210, false);
      ClassDB::add_signal((StringName*)&local_f8, (MethodInfo*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
      CowData<int>::_unref((CowData<int>*)&local_60);
      piVar10 = local_78;
      if (local_78 != (int*)0x0) {
         LOCK();
         plVar13 = (long*)( local_78 + -4 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if (local_78 == (int*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_78 + -2 );
            local_78 = (int*)0x0;
            if (lVar1 != 0) {
               lVar14 = 0;
               piVar12 = piVar10;
               do {
                  if (Variant::needs_deinit[*piVar12] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar14 = lVar14 + 1;
                  piVar12 = piVar12 + 6;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static(piVar10 + -4, false);
         }

      }

      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      if (( StringName::configured != '\0' ) && ( local_1f8 != 0 )) {
         StringName::unref();
      }

      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1e8);
      if (( StringName::configured != '\0' ) && ( local_1b8 != 0 )) {
         StringName::unref();
      }

      local_128 = 0;
      local_c8 = "clear_selection";
      local_c0 = 0xf;
      String::parse_latin1((StrRange*)&local_128);
      local_b8 = (undefined1[16])0x0;
      local_c8 = (char*)0x0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88[0] = 0;
      local_78 = (int*)0x0;
      local_70 = 0;
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_128);
      local_f8 = "AnimationBezierTrackEdit";
      local_158 = 0;
      local_f0 = 0x18;
      String::parse_latin1((StrRange*)&local_158);
      StringName::StringName((StringName*)&local_f8, (String*)&local_158, false);
      ClassDB::add_signal((StringName*)&local_f8, (MethodInfo*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
      CowData<int>::_unref((CowData<int>*)&local_60);
      piVar10 = local_78;
      if (local_78 != (int*)0x0) {
         LOCK();
         plVar13 = (long*)( local_78 + -4 );
         *plVar13 = *plVar13 + -1;
         UNLOCK();
         if (*plVar13 == 0) {
            if (local_78 == (int*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar1 = *(long*)( local_78 + -2 );
            local_78 = (int*)0x0;
            if (lVar1 != 0) {
               lVar14 = 0;
               piVar12 = piVar10;
               do {
                  if (Variant::needs_deinit[*piVar12] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar14 = lVar14 + 1;
                  piVar12 = piVar12 + 6;
               }
 while ( lVar1 != lVar14 );
            }

            Memory::free_static(piVar10 + -4, false);
         }

      }

      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Vector<int>::push_back(int) [clone .isra.0] */
   void Vector<int>::push_back(Vector<int> *this, int param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = 1;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
      if (iVar1 == 0) {
         if (*(long*)( this + 8 ) == 0) {
            lVar3 = -1;
            lVar2 = 0;
         }
 else {
            lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
            lVar3 = lVar2 + -1;
            if (-1 < lVar3) {
               CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
               *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
               return;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
         return;
      }

      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   /* AnimationBezierTrackEdit::_update_hidden_tracks_after(int) */
   void AnimationBezierTrackEdit::_update_hidden_tracks_after(AnimationBezierTrackEdit *this, int param_1) {
      long *plVar1;
      ulong uVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      long lVar11;
      uint uVar12;
      int iVar13;
      ulong uVar14;
      long lVar15;
      ulong uVar16;
      uint uVar17;
      long lVar18;
      int iVar19;
      long in_FS_OFFSET;
      uint local_80;
      int local_7c[4];
      int local_6c;
      Vector<int> local_68[8];
      long local_60;
      int local_58[6];
      long local_40;
      lVar18 = *(long*)( this + 0xa78 );
      iVar19 = *(int*)( this + 0xa9c );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_7c[0] = param_1;
      if (lVar18 == 0) {
         LAB_00108a0b:local_60 = 0;
         if (iVar19 == 0) goto LAB_00108b08;
      }
 else {
         if (iVar19 == 0) goto LAB_00108b08;
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa98 ) * 8 );
         uVar12 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
         uVar12 = ( uVar12 ^ uVar12 >> 0xd ) * -0x3d4d51cb;
         local_80 = uVar12 ^ uVar12 >> 0x10;
         if (uVar12 == uVar12 >> 0x10) {
            local_80 = 1;
            uVar14 = uVar2;
         }
 else {
            uVar14 = local_80 * uVar2;
         }

         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ));
         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar16;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar14;
         lVar15 = SUB168(auVar3 * auVar7, 8);
         uVar12 = *(uint*)( *(long*)( this + 0xa90 ) + lVar15 * 4 );
         iVar13 = SUB164(auVar3 * auVar7, 8);
         if (uVar12 != 0) {
            uVar17 = 0;
            do {
               if (( local_80 == uVar12 ) && ( param_1 == *(int*)( lVar18 + ( ulong ) * (uint*)( *(long*)( this + 0xa80 ) + lVar15 * 4 ) * 4 ) )) {
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), local_7c);
                  iVar19 = *(int*)( this + 0xa9c );
                  goto LAB_00108a0b;
               }

               uVar17 = uVar17 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( iVar13 + 1 ) * uVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar15 = SUB168(auVar4 * auVar8, 8);
               uVar12 = *(uint*)( *(long*)( this + 0xa90 ) + lVar15 * 4 );
               iVar13 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar12 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) + iVar13 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar17 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      local_60 = 0;
      for (lVar15 = 0; Vector<int>::push_back(local_68, *(int*)( lVar18 + lVar15 * 4 )),lVar11 = local_60,(int)lVar15 + 1 < iVar19; lVar15 = lVar15 + 1) {}
      if (( *(long*)( this + 0xa78 ) != 0 ) && ( *(int*)( this + 0xa9c ) != 0 )) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xa90 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) * 4);
         }

         *(undefined4*)( this + 0xa9c ) = 0;
      }

      if (lVar11 != 0) {
         lVar18 = 0;
         if (0 < *(long*)( lVar11 + -8 )) {
            do {
               while (iVar19 = *(int*)( lVar11 + lVar18 * 4 ),param_1 < iVar19) {
                  local_6c = iVar19 + -1;
                  lVar18 = lVar18 + 1;
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
                  if (*(long*)( lVar11 + -8 ) <= lVar18) goto LAB_00108b00;
               }
;
               lVar18 = lVar18 + 1;
               HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
            }
 while ( lVar18 < *(long*)( lVar11 + -8 ) );
         }

         LAB_00108b00:LOCK();
         plVar1 = (long*)( lVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      LAB_00108b08:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* AnimationBezierTrackEdit::_update_locked_tracks_after(int) */
   void AnimationBezierTrackEdit::_update_locked_tracks_after(AnimationBezierTrackEdit *this, int param_1) {
      long *plVar1;
      ulong uVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      long lVar11;
      uint uVar12;
      int iVar13;
      ulong uVar14;
      long lVar15;
      ulong uVar16;
      uint uVar17;
      long lVar18;
      int iVar19;
      long in_FS_OFFSET;
      uint local_80;
      int local_7c[4];
      int local_6c;
      Vector<int> local_68[8];
      long local_60;
      int local_58[6];
      long local_40;
      lVar18 = *(long*)( this + 0xa50 );
      iVar19 = *(int*)( this + 0xa74 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_7c[0] = param_1;
      if (lVar18 == 0) {
         LAB_00108ceb:local_60 = 0;
         if (iVar19 == 0) goto LAB_00108de8;
      }
 else {
         if (iVar19 == 0) goto LAB_00108de8;
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xa70 ) * 8 );
         uVar12 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
         uVar12 = ( uVar12 ^ uVar12 >> 0xd ) * -0x3d4d51cb;
         local_80 = uVar12 ^ uVar12 >> 0x10;
         if (uVar12 == uVar12 >> 0x10) {
            local_80 = 1;
            uVar14 = uVar2;
         }
 else {
            uVar14 = local_80 * uVar2;
         }

         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ));
         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar16;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar14;
         lVar15 = SUB168(auVar3 * auVar7, 8);
         uVar12 = *(uint*)( *(long*)( this + 0xa68 ) + lVar15 * 4 );
         iVar13 = SUB164(auVar3 * auVar7, 8);
         if (uVar12 != 0) {
            uVar17 = 0;
            do {
               if (( local_80 == uVar12 ) && ( param_1 == *(int*)( lVar18 + ( ulong ) * (uint*)( *(long*)( this + 0xa58 ) + lVar15 * 4 ) * 4 ) )) {
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 ), local_7c);
                  iVar19 = *(int*)( this + 0xa74 );
                  goto LAB_00108ceb;
               }

               uVar17 = uVar17 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( iVar13 + 1 ) * uVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar15 = SUB168(auVar4 * auVar8, 8);
               uVar12 = *(uint*)( *(long*)( this + 0xa68 ) + lVar15 * 4 );
               iVar13 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar12 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) + iVar13 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar17 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      local_60 = 0;
      for (lVar15 = 0; Vector<int>::push_back(local_68, *(int*)( lVar18 + lVar15 * 4 )),lVar11 = local_60,(int)lVar15 + 1 < iVar19; lVar15 = lVar15 + 1) {}
      if (( *(long*)( this + 0xa50 ) != 0 ) && ( *(int*)( this + 0xa74 ) != 0 )) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xa68 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) * 4);
         }

         *(undefined4*)( this + 0xa74 ) = 0;
      }

      if (lVar11 != 0) {
         lVar18 = 0;
         if (0 < *(long*)( lVar11 + -8 )) {
            do {
               while (iVar19 = *(int*)( lVar11 + lVar18 * 4 ),param_1 < iVar19) {
                  local_6c = iVar19 + -1;
                  lVar18 = lVar18 + 1;
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
                  if (*(long*)( lVar11 + -8 ) <= lVar18) goto LAB_00108de0;
               }
;
               lVar18 = lVar18 + 1;
               HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
            }
 while ( lVar18 < *(long*)( lVar11 + -8 ) );
         }

         LAB_00108de0:LOCK();
         plVar1 = (long*)( lVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      LAB_00108de8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* AnimationBezierTrackEdit::_try_select_at_ui_pos(Vector2 const&, bool, bool) */
   undefined8 AnimationBezierTrackEdit::_try_select_at_ui_pos(AnimationBezierTrackEdit *this, Vector2 *param_1, bool param_2, bool param_3) {
      Variant *pVVar1;
      float *pfVar2;
      float fVar3;
      AnimationBezierTrackEdit AVar4;
      int iVar5;
      int iVar6;
      Element *pEVar7;
      code *pcVar8;
      int iVar9;
      undefined8 uVar10;
      Element *pEVar11;
      long lVar12;
      Variant *pVVar13;
      long lVar14;
      Element *pEVar15;
      long lVar16;
      long lVar17;
      long in_FS_OFFSET;
      double dVar18;
      AnimationBezierTrackEdit local_a9;
      Variant *local_a8;
      Variant *pVStack_a0;
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      lVar12 = *(long*)( this + 0xb98 );
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      if (lVar12 != 0) {
         lVar14 = 0;
         lVar17 = 0;
         LAB_00108ec0:if (lVar17 < *(long*)( lVar12 + -8 )) {
            pfVar2 = (float*)( lVar12 + lVar14 );
            if (( pfVar2[2] <= 0.0 && pfVar2[2] != 0.0 ) || ( pfVar2[3] <= 0.0 && pfVar2[3] != 0.0 )) {
               _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
               lVar12 = *(long*)( this + 0xb98 );
            }

            fVar3 = *(float*)param_1;
            if (fVar3 < *pfVar2) goto LAB_00109000;
            if (( ( *(float*)( param_1 + 4 ) < pfVar2[1] ) || ( *pfVar2 + pfVar2[2] <= fVar3 ) ) || ( pfVar2[1] + pfVar2[3] <= *(float*)( param_1 + 4 ) )) goto LAB_00109000;
            if (lVar12 == 0) goto LAB_00109240;
            lVar16 = *(long*)( lVar12 + -8 );
            if (lVar16 <= lVar17) goto LAB_00109243;
            lVar12 = lVar12 + lVar14;
            iVar5 = *(int*)( lVar12 + 0x30 );
            iVar6 = *(int*)( lVar12 + 0x34 );
            if (!param_2) {
               if (param_3) {
                  this[0xac8] = (AnimationBezierTrackEdit)0x1;
                  *(int*)( this + 0xadc ) = iVar6;
                  *(int*)( this + 0xae0 ) = iVar5;
                  *(undefined8*)( this + 0xae4 ) = 0;
                  *(int*)( this + 0xb08 ) = iVar5;
                  *(float*)( this + 0xacc ) = fVar3;
                  uVar10 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), iVar5);
                  *(undefined8*)( this + 0xb0c ) = uVar10;
                  uVar10 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), iVar5);
                  lVar12 = *(long*)( this + 0xba0 );
                  *(undefined8*)( this + 0xb14 ) = uVar10;
                  local_a9 = (AnimationBezierTrackEdit)param_3;
                  if (lVar12 != 0) {
                     LAB_00109200:lVar12 = *(long*)( lVar12 + 0x10 );
                     local_a9 = (AnimationBezierTrackEdit)param_3;
                     if (*(long*)( this + 0xba8 ) != lVar12) {
                        do {
                           if (iVar5 == *(int*)( lVar12 + 0x30 )) {
                              if (iVar6 < *(int*)( lVar12 + 0x34 )) goto LAB_00109200;
                              local_a9 = (AnimationBezierTrackEdit)param_2;
                              if (iVar6 <= *(int*)( lVar12 + 0x34 )) break;
                           }
 else if (iVar5 < *(int*)( lVar12 + 0x30 )) goto LAB_00109200;
                           lVar12 = *(long*)( lVar12 + 8 );
                           local_a9 = (AnimationBezierTrackEdit)param_3;
                           if (*(long*)( this + 0xba8 ) == lVar12) break;
                        }
 while ( true );
                     }

                  }

                  *(int*)( this + 0xad0 ) = iVar5;
                  *(int*)( this + 0xad4 ) = iVar6;
                  this[0xad8] = local_a9;
               }

               AVar4 = this[0x9f0];
               Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
               this[0x9f0] = AVar4;
               *(int*)( this + 0x9f4 ) = iVar5;
               CanvasItem::queue_redraw();
               lVar12 = *(long*)( this + 0xba0 );
               if (lVar12 != 0) {
                  LAB_001090d0:lVar12 = *(long*)( lVar12 + 0x10 );
                  if (*(long*)( this + 0xba8 ) != lVar12) {
                     do {
                        if (iVar5 == *(int*)( lVar12 + 0x30 )) {
                           if (iVar6 < *(int*)( lVar12 + 0x34 )) goto LAB_001090d0;
                           if (iVar6 <= *(int*)( lVar12 + 0x34 )) goto LAB_00108fef;
                        }
 else if (iVar5 < *(int*)( lVar12 + 0x30 )) goto LAB_001090d0;
                        lVar12 = *(long*)( lVar12 + 8 );
                        if (*(long*)( this + 0xba8 ) == lVar12) break;
                     }
 while ( true );
                  }

               }

               RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ));
               lVar12 = *(long*)( this + 0xb98 );
               if (lVar12 == 0) goto LAB_00109240;
               lVar16 = *(long*)( lVar12 + -8 );
               if (lVar16 <= lVar17) goto LAB_00109243;
               dVar18 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar12 + lVar14 + 0x30 ));
               lVar12 = *(long*)( this + 0xb98 );
               if (lVar12 == 0) goto LAB_00109240;
               lVar16 = *(long*)( lVar12 + -8 );
               if (lVar16 <= lVar17) goto LAB_00109243;
               _select_at_anim(this, (Ref*)( this + 0x9e8 ), *(int*)( lVar12 + 0x30 + lVar14 ), (float)dVar18, true);
               goto LAB_00108fef;
            }

            pEVar7 = *(Element**)( this + 0xba8 );
            if (*(long*)( this + 0xba0 ) == 0) goto LAB_00108f95;
            pEVar15 = *(Element**)( *(long*)( this + 0xba0 ) + 0x10 );
            pEVar11 = pEVar15;
            goto joined_r0x00108f69;
         }

      }

      LAB_00109011:uVar10 = 0;
      goto LAB_00109013;
      LAB_00109000:lVar17 = lVar17 + 1;
      lVar14 = lVar14 + 0x38;
      if (lVar12 == 0) goto LAB_00109011;
      goto LAB_00108ec0;
      joined_r0x00108f69:if (pEVar7 != pEVar11) {
         do {
            if (iVar5 == *(int*)( pEVar11 + 0x30 )) {
               if (iVar6 < *(int*)( pEVar11 + 0x34 )) goto LAB_00108f72;
               if (iVar6 <= *(int*)( pEVar11 + 0x34 )) {
                  if (!param_3) goto LAB_00108fdc;
                  goto LAB_001092bb;
               }

            }
 else if (iVar5 < *(int*)( pEVar11 + 0x30 )) goto LAB_00108f72;
            pEVar11 = *(Element**)( pEVar11 + 8 );
            if (pEVar7 == pEVar11) break;
         }
 while ( true );
      }

      LAB_00108f95:dVar18 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), iVar5);
      lVar12 = *(long*)( this + 0xb98 );
      if (lVar12 == 0) goto LAB_00109240;
      lVar16 = *(long*)( lVar12 + -8 );
      if (lVar16 <= lVar17) goto LAB_00109243;
      _select_at_anim(this, (Ref*)( this + 0x9e8 ), *(int*)( lVar12 + 0x30 + lVar14 ), (float)dVar18, false);
      goto LAB_00108fdc;
      LAB_00108f72:pEVar11 = *(Element**)( pEVar11 + 0x10 );
      goto joined_r0x00108f69;
      LAB_00109240:lVar16 = 0;
      LAB_00109243:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar16, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar8 = (code*)invalidInstructionException();
      ( *pcVar8 )();
      LAB_001092bb:do {
         if (iVar5 == *(int*)( pEVar15 + 0x30 )) {
            if (*(int*)( pEVar15 + 0x34 ) <= iVar6) {
               if (*(int*)( pEVar15 + 0x34 ) < iVar6) goto LAB_001092c8;
               RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_erase((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ), pEVar15);
               if (( *(int*)( this + 0xbb0 ) == 0 ) && ( *(void**)( this + 0xba0 ) != (void*)0x0 )) {
                  Memory::free_static(*(void**)( this + 0xba0 ), false);
                  *(undefined8*)( this + 0xba0 ) = 0;
               }

               lVar12 = *(long*)( this + 0xb98 );
               if (lVar12 == 0) goto LAB_00109240;
               lVar16 = *(long*)( lVar12 + -8 );
               if (lVar16 <= lVar17) goto LAB_00109243;
               lVar12 = lVar12 + lVar14;
               break;
            }

            LAB_001092b2:pEVar15 = *(Element**)( pEVar15 + 0x10 );
         }
 else {
            if (iVar5 < *(int*)( pEVar15 + 0x30 )) goto LAB_001092b2;
            LAB_001092c8:pEVar15 = *(Element**)( pEVar15 + 8 );
         }

      }
 while ( pEVar7 != pEVar15 );
      iVar5 = *(int*)( lVar12 + 0x30 );
      iVar6 = *(int*)( lVar12 + 0x34 );
      if ((_try_select_at_ui_pos(Vector2_const&,bool,bool)::{lambda()
      #1
      && (iVar9 = __cxa_guard_acquire(&_try_select_at_ui_pos(Vector2_const&,bool,bool)::{lambda()#1}
                                      ::operator()()::sname), iVar9 != 0)) {
    _scs_create((char *)&_try_select_at_ui_pos(Vector2_const&,bool,bool)::{lambda()
      #1
      ::sname,true;
      __cxa_atexit(StringName::~StringName, &_try_select_at_ui_pos(Vector2_const & ::sname, &__dso_handle));
      __cxa_guard_release(&_try_select_at_ui_pos(Vector2_const&,bool,bool)::{lambda()
      #1
      ::sname
      )
      ;
   }

   Variant::Variant(local_88, iVar6);
   Variant::Variant(local_70, iVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pVVar13 = (Variant*)local_40;
   local_a8 = local_88;
   pVStack_a0 = local_70;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, &_try_select_at_ui_pos(Vector2_const & ::sname, &local_a8, 2));
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != local_88 );
   LAB_00108fdc:CanvasItem::queue_redraw();
   *(undefined8*)( this + 0xad0 ) = 0xffffffffffffffff;
   LAB_00108fef:uVar10 = 1;
   LAB_00109013:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationBezierTrackEdit::copy_selected_keys(bool) [clone .part.0] */void AnimationBezierTrackEdit::copy_selected_keys(AnimationBezierTrackEdit *this, bool param_1) {
   Variant *pVVar1;
   float fVar2;
   long lVar3;
   undefined8 uVar4;
   StringName *pSVar5;
   Element *pEVar6;
   char cVar7;
   int iVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element *pEVar12;
   Object *this_00;
   int iVar13;
   Element *pEVar14;
   long lVar15;
   Object *pOVar16;
   int iVar17;
   Variant *pVVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float fVar20;
   double dVar21;
   RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator> *local_2d0;
   int local_284;
   undefined8 local_1e0;
   long local_1d8;
   Object *local_1d0;
   Element *local_1c8;
   Element *pEStack_1c0;
   int local_1b8;
   Variant *local_1a8;
   Variant *pVStack_1a0;
   Variant *local_188;
   Variant *pVStack_180;
   Variant *local_178;
   Variant *apVStack_170[3];
   undefined8 local_158;
   undefined1 local_150[16];
   Variant local_140[8];
   Variant *local_138;
   Variant *pVStack_130;
   Variant *local_128;
   Variant *apVStack_120[3];
   Variant local_108[24];
   Variant local_f0[24];
   undefined8 local_d8;
   undefined1 local_d0[16];
   Variant local_c0[8];
   int local_b8[2];
   undefined1 local_b0[16];
   int local_a0[2];
   undefined1 local_98[16];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xba0 ) != 0) {
      lVar3 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
      if (lVar3 != *(long*)( this + 0xba8 )) {
         do {
            lVar15 = lVar3;
            lVar3 = *(long*)( lVar15 + 8 );
            fVar2 = _LC84;
         }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar15 + 8 ) );
         do {
            dVar21 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar15 + 0x30 ));
            lVar15 = *(long*)( lVar15 + 0x28 );
            fVar20 = (float)dVar21;
            if (fVar2 <= (float)dVar21) {
               fVar20 = fVar2;
            }

            fVar2 = fVar20;
         }
 while ( lVar15 != 0 );
         local_1c8 = (Element*)0x0;
         local_1b8 = 0;
         pEStack_1c0 = (Element*)&_GlobalNilClass::_nil;
         if (*(long*)( this + 0xba0 ) != 0) {
            lVar3 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
            if (lVar3 != *(long*)( this + 0xba8 )) {
               do {
                  lVar15 = lVar3;
                  lVar3 = *(long*)( lVar15 + 8 );
               }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar15 + 8 ) );
               do {
                  uVar4 = *(undefined8*)( lVar15 + 0x30 );
                  iVar8 = (int)uVar4;
                  iVar17 = (int)( (ulong)uVar4 >> 0x20 );
                  dVar21 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), iVar8);
                  if (local_1c8 == (Element*)0x0) {
                     pEVar12 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( pEVar12 + 0x20 ) = (undefined1[16])0x0;
                     *(undefined8*)( pEVar12 + 0x30 ) = 0;
                     *(undefined4*)( pEVar12 + 0x38 ) = 0;
                     *(undefined4*)pEVar12 = 1;
                     for (int i = 0; i < 3; i++) {
                        *(Element**)( pEVar12 + ( 8*i + 8 ) ) = pEStack_1c0;
                     }

                     local_1c8 = pEVar12;
                  }
 else {
                     pEVar9 = *(Element**)( local_1c8 + 0x10 );
                     pEVar12 = local_1c8;
                     while (pEVar9 != pEStack_1c0) {
                        pEVar12 = pEVar9;
                        if (iVar8 == *(int*)( pEVar9 + 0x30 )) {
                           if (*(int*)( pEVar9 + 0x34 ) <= iVar17) {
                              if (*(int*)( pEVar9 + 0x34 ) < iVar17) goto LAB_001095c0;
                              *(float*)( pEVar9 + 0x38 ) = (float)dVar21;
                              goto LAB_001096c0;
                           }

                           LAB_001095a2:pEVar9 = *(Element**)( pEVar9 + 0x10 );
                        }
 else {
                           if (iVar8 < *(int*)( pEVar9 + 0x30 )) goto LAB_001095a2;
                           LAB_001095c0:pEVar9 = *(Element**)( pEVar9 + 8 );
                        }

                     }
;
                  }

                  pEVar9 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
                  *(undefined4*)pEVar9 = 0;
                  *(undefined1(*) [16])( pEVar9 + 0x20 ) = (undefined1[16])0x0;
                  *(float*)( pEVar9 + 0x38 ) = (float)dVar21;
                  *(undefined8*)( pEVar9 + 0x30 ) = uVar4;
                  *(Element**)( pEVar9 + 0x18 ) = pEVar12;
                  *(Element**)( pEVar9 + 8 ) = pEStack_1c0;
                  *(Element**)( pEVar9 + 0x10 ) = pEStack_1c0;
                  if (pEVar12 == local_1c8) {
                     *(Element**)( pEVar12 + 0x10 ) = pEVar9;
                     pEVar14 = *(Element**)( pEVar9 + 0x10 );
                     pEVar10 = pEVar12;
                     if (*(Element**)( pEVar12 + 8 ) == pEVar9) goto LAB_00109660;
                     LAB_001097ca:pEVar11 = (Element*)0x0;
                  }
 else {
                     bVar19 = iVar8 < *(int*)( pEVar12 + 0x30 );
                     if (iVar8 == *(int*)( pEVar12 + 0x30 )) {
                        bVar19 = iVar17 < *(int*)( pEVar12 + 0x34 );
                     }

                     if (bVar19) {
                        *(Element**)( pEVar12 + 0x10 ) = pEVar9;
                        pEVar14 = *(Element**)( pEVar9 + 0x10 );
                        pEVar11 = pEVar12;
                        pEVar10 = pEVar12;
                        if (*(Element**)( pEVar12 + 8 ) == pEVar9) {
                           LAB_00109660:do {
                              pEVar11 = *(Element**)( pEVar10 + 0x18 );
                              bVar19 = pEVar10 == *(Element**)( pEVar11 + 8 );
                              pEVar10 = pEVar11;
                           }
 while ( bVar19 );
                        }

                        if (local_1c8 == pEVar11) goto LAB_001097ca;
                     }
 else {
                        *(Element**)( pEVar12 + 8 ) = pEVar9;
                        pEVar10 = pEVar12;
                        pEVar6 = *(Element**)( pEVar9 + 8 );
                        pEVar14 = pEStack_1c0;
                        if (*(Element**)( pEVar9 + 8 ) == pEStack_1c0) goto LAB_00109660;
                        do {
                           pEVar11 = pEVar6;
                           pEVar6 = *(Element**)( pEVar11 + 0x10 );
                        }
 while ( *(Element**)( pEVar11 + 0x10 ) != pEStack_1c0 );
                     }

                  }

                  *(Element**)( pEVar9 + 0x20 ) = pEVar11;
                  if (pEStack_1c0 == pEVar14) {
                     if (*(Element**)( pEVar12 + 0x10 ) != pEVar9) {
                        if (local_1c8 == pEVar9) goto LAB_00109776;
                        goto LAB_00109694;
                     }

                     do {
                        pEVar14 = pEVar12;
                        pEVar12 = *(Element**)( pEVar14 + 0x18 );
                     }
 while ( pEVar14 == *(Element**)( pEVar12 + 0x10 ) );
                     if (local_1c8 != pEVar14) goto LAB_00109694;
                     LAB_00109776:*(undefined8*)( pEVar9 + 0x28 ) = 0;
                     if (pEVar11 != (Element*)0x0) goto LAB_0010969d;
                  }
 else {
                     do {
                        pEVar12 = pEVar14;
                        pEVar14 = *(Element**)( pEVar12 + 8 );
                     }
 while ( *(Element**)( pEVar12 + 8 ) != pEStack_1c0 );
                     LAB_00109694:*(Element**)( pEVar9 + 0x28 ) = pEVar12;
                     if (pEVar11 != (Element*)0x0) {
                        LAB_0010969d:*(Element**)( pEVar11 + 0x28 ) = pEVar9;
                        pEVar12 = *(Element**)( pEVar9 + 0x28 );
                        if (pEVar12 == (Element*)0x0) goto LAB_001096ae;
                     }

                     *(Element**)( pEVar12 + 0x20 ) = pEVar9;
                  }

                  LAB_001096ae:local_1b8 = local_1b8 + 1;
                  RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>::_insert_rb_fix((RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>*)&local_1c8, pEVar9);
                  LAB_001096c0:lVar15 = *(long*)( lVar15 + 0x28 );
               }
 while ( lVar15 != 0 );
            }

         }

         goto LAB_001096d2;
      }

   }

   local_1c8 = (Element*)0x0;
   pEStack_1c0 = (Element*)&_GlobalNilClass::_nil;
   local_1b8 = 0;
   fVar20 = _LC84;
   LAB_001096d2:local_2d0 = (RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>*)&local_1c8;
   AnimationTrackEditor::_set_key_clipboard((int)*(undefined8*)( this + 0xb88 ), fVar20, (RBMap*)( ulong ) * (uint*)( this + 0x9f4 ));
   if (param_1) {
      this_00 = (Object*)EditorUndoRedoManager::get_singleton();
      uVar4 = *(undefined8*)( this + 0x9e8 );
      local_1d8 = 0;
      String::parse_latin1((String*)&local_1d8, "");
      local_1e0 = 0;
      String::parse_latin1((String*)&local_1e0, "Animation Cut Keys");
      TTR((String*)&local_1d0, (String*)&local_1e0);
      EditorUndoRedoManager::create_action(this_00, (String*)&local_1d0, 0, uVar4, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
      local_1d0 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_1d0, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_1d8, "_clear_selection_for_anim", false);
      Variant::Variant((Variant*)local_b8, local_1d0);
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_98 = (undefined1[16])0x0;
      iVar8 = (int)(Variant*)&local_138;
      local_138 = (Variant*)local_b8;
      EditorUndoRedoManager::add_do_methodp(this_00, (StringName*)this, (Variant**)&local_1d8, iVar8);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_1d0);
      local_1d0 = (Object*)0x0;
      Ref<Animation>::operator =((Ref<Animation>*)&local_1d0, *(Ref**)( this + 0x9e8 ));
      StringName::StringName((StringName*)&local_1d8, "_clear_selection_for_anim", false);
      Variant::Variant((Variant*)local_b8, local_1d0);
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_98 = (undefined1[16])0x0;
      local_138 = (Variant*)local_b8;
      EditorUndoRedoManager::add_undo_methodp(this_00, (StringName*)this, (Variant**)&local_1d8, iVar8);
      if (Variant::needs_deinit[local_a0[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
         StringName::unref();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_1d0);
      if (( local_1c8 != (Element*)0x0 ) && ( pEVar12 = *(Element**)( local_1c8 + 0x10 ) * (Element**)( local_1c8 + 0x10 ) != pEStack_1c0 )) {
         do {
            pEVar9 = pEVar12;
            pEVar12 = *(Element**)( pEVar9 + 8 );
         }
 while ( pEStack_1c0 != *(Element**)( pEVar9 + 8 ) );
         local_284 = 0;
         do {
            iVar17 = *(int*)( pEVar9 + 0x30 );
            fVar2 = *(float*)( pEVar9 + 0x38 );
            StringName::StringName((StringName*)&local_1d0, "track_remove_key_at_time", false);
            pSVar5 = *(StringName**)( this + 0x9e8 );
            Variant::Variant((Variant*)&local_188, iVar17);
            Variant::Variant((Variant*)apVStack_170, fVar2);
            local_158 = 0;
            local_150 = (undefined1[16])0x0;
            iVar13 = (int)(Variant*)&local_1a8;
            local_1a8 = (Variant*)&local_188;
            pVStack_1a0 = (Variant*)apVStack_170;
            EditorUndoRedoManager::add_do_methodp(this_00, pSVar5, (Variant**)&local_1d0, iVar13);
            pVVar18 = local_140;
            do {
               pVVar1 = pVVar18 + -0x18;
               pVVar18 = pVVar18 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar18 != (Variant*)&local_188 );
            if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
               StringName::unref();
            }

            fVar20 = (float)Animation::track_get_key_transition((int)*(undefined8*)( this + 0x9e8 ), iVar17);
            Animation::track_get_key_value(iVar13, (int)*(undefined8*)( this + 0x9e8 ));
            StringName::StringName((StringName*)&local_1d0, "track_insert_key", false);
            pSVar5 = *(StringName**)( this + 0x9e8 );
            Variant::Variant((Variant*)&local_138, iVar17);
            Variant::Variant((Variant*)apVStack_120, fVar2);
            Variant::Variant(local_108, (Variant*)&local_1a8);
            Variant::Variant(local_f0, fVar20);
            local_d8 = 0;
            local_d0 = (undefined1[16])0x0;
            local_188 = (Variant*)&local_138;
            pVStack_180 = (Variant*)apVStack_120;
            local_178 = local_108;
            apVStack_170[0] = local_f0;
            EditorUndoRedoManager::add_undo_methodp(this_00, pSVar5, (Variant**)&local_1d0, (int)(Variant*)&local_188);
            pVVar18 = local_c0;
            do {
               pVVar1 = pVVar18 + -0x18;
               pVVar18 = pVVar18 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar18 != (Variant*)&local_138 );
            if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[(int)local_1a8] != '\0') {
               Variant::_clear_internal();
            }

            pOVar16 = *(Object**)( this + 0x9e8 );
            if (( pOVar16 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
               pOVar16 = (Object*)0x0;
            }

            StringName::StringName((StringName*)&local_1d0, "_select_at_anim", false);
            Variant::Variant((Variant*)local_b8, pOVar16);
            Variant::Variant((Variant*)local_a0, iVar17);
            Variant::Variant(local_88, fVar2);
            Variant::Variant(local_70, local_284 == 0);
            local_50 = (undefined1[16])0x0;
            local_58 = 0;
            local_138 = (Variant*)local_b8;
            pVStack_130 = (Variant*)local_a0;
            local_128 = local_88;
            apVStack_120[0] = local_70;
            EditorUndoRedoManager::add_undo_methodp(this_00, (StringName*)this, (Variant**)&local_1d0, iVar8);
            pVVar18 = (Variant*)local_40;
            do {
               pVVar1 = pVVar18 + -0x18;
               pVVar18 = pVVar18 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar18 != (Variant*)local_b8 );
            if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
               StringName::unref();
            }

            if (( ( pOVar16 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar16 + 0x140 ))(pOVar16);
            Memory::free_static(pOVar16, false);
         }
 while ( pEVar9 != (Element*)0x0 );
         if (( local_1c8 != (Element*)0x0 ) && ( pEVar12 = *(Element**)( local_1c8 + 0x10 ) * (Element**)( local_1c8 + 0x10 ) != pEStack_1c0 )) {
            do {
               pEVar9 = pEVar12;
               pEVar12 = *(Element**)( pEVar9 + 8 );
            }
 while ( *(Element**)( pEVar9 + 8 ) != pEStack_1c0 );
            iVar17 = 0;
            do {
               iVar13 = *(int*)( pEVar9 + 0x30 );
               fVar2 = *(float*)( pEVar9 + 0x38 );
               pOVar16 = *(Object**)( this + 0x9e8 );
               if (( pOVar16 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
                  pOVar16 = (Object*)0x0;
               }

               StringName::StringName((StringName*)&local_1d0, "_select_at_anim", false);
               Variant::Variant((Variant*)local_b8, pOVar16);
               Variant::Variant((Variant*)local_a0, iVar13);
               Variant::Variant(local_88, fVar2);
               Variant::Variant(local_70, iVar17 == 0);
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               local_138 = (Variant*)local_b8;
               pVStack_130 = (Variant*)local_a0;
               local_128 = local_88;
               apVStack_120[0] = local_70;
               EditorUndoRedoManager::add_undo_methodp(this_00, (StringName*)this, (Variant**)&local_1d0, iVar8);
               pVVar18 = (Variant*)local_40;
               do {
                  pVVar1 = pVVar18 + -0x18;
                  pVVar18 = pVVar18 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar18 != (Variant*)local_b8 );
               if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (( ( pOVar16 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar16 + 0x140 ))(pOVar16);
               Memory::free_static(pOVar16, false);
            }
 while ( pEVar9 != (Element*)0x0 );
         }

      }

      pOVar16 = AnimationPlayerEditor::singleton;
      if (AnimationPlayerEditor::singleton != (Object*)0x0) {
         StringName::StringName((StringName*)&local_1d0, "_animation_update_key_frame", false);
         EditorUndoRedoManager::add_do_method<>((EditorUndoRedoManager*)this_00, pOVar16, (StringName*)&local_1d0);
         if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_1d0, "_animation_update_key_frame", false);
         EditorUndoRedoManager::add_undo_method<>((EditorUndoRedoManager*)this_00, pOVar16, (StringName*)&local_1d0);
         if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      StringName::StringName((StringName*)&local_1d0, "queue_redraw", false);
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_do_methodp(this_00, (StringName*)this, (Variant**)&local_1d0, 0);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_1d0, "queue_redraw", false);
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b0 = (undefined1[16])0x0;
      EditorUndoRedoManager::add_undo_methodp(this_00, (StringName*)this, (Variant**)&local_1d0, 0);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_1d0 != (Object*)0x0 )) {
         StringName::unref();
      }

      EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
   }

   RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>::clear(local_2d0);
   if (local_1c8 != (Element*)0x0) {
      Memory::free_static(local_1c8, false);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationBezierTrackEdit::copy_selected_keys(bool) */void AnimationBezierTrackEdit::copy_selected_keys(AnimationBezierTrackEdit *this, bool param_1) {
   if (*(int*)( this + 0xbb0 ) != 0) {
      copy_selected_keys(this, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationBezierTrackEdit::_menu_selected(int) */void AnimationBezierTrackEdit::_menu_selected(AnimationBezierTrackEdit *this, int param_1) {
   Variant *pVVar1;
   StringName *pSVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   Object *this_00;
   undefined8 uVar6;
   bool bVar7;
   undefined8 uVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   float fVar10;
   double dVar11;
   float extraout_XMM0_Db;
   float fVar12;
   Array local_e8[8];
   undefined8 local_e0;
   long local_d8;
   long local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = AnimationTimelineEdit::get_name_limit();
   fVar12 = *(float*)( this + 0xb80 );
   fVar10 = (float)AnimationTimelineEdit::get_zoom_scale();
   dVar11 = (double)Range::get_value();
   if (0xb < (uint)param_1) goto LAB_0010a4f7;
   fVar12 = (float)( dVar11 + (double)( ( fVar12 - (float)iVar5 ) / fVar10 ) );
   switch (param_1) {
      case 0:
    iVar5 = Animation::get_track_count();
    if (0 < iVar5) {
      cVar4 = BaseButton::is_pressed();
      if ((cVar4 != '\0') && (dVar11 = (double)Range::get_value(), dVar11 != 0.0)) {
        fVar12 = (float)AnimationTrackEditor::snap_time
                                  (fVar12,SUB81(*(undefined8 *)(this + 0xb88),0));
      }
      while( true ) {
        iVar5 = Animation::track_find_key
                          (*(undefined8 *)(this + 0x9e8),*(undefined4 *)(this + 0x9f4),1,0,0);
        if (iVar5 == -1) break;
        fVar12 = (float)((double)fVar12 + _LC139);
      }
      Control::get_size();
      Animation::make_default_bezier_key
                ((float)(((double)extraout_XMM0_Db * __LC21 - (double)*(float *)(this + 0xb84)) *
                         (double)*(float *)(this + 0xab4) + (double)*(float *)(this + 0xab0)));
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"");
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"Add Bezier Point");
      TTR((String *)&local_d0,(String *)&local_e0);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_d0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      Array::Array((Array *)&local_d0,local_e8);
      iVar5 = *(int *)(this + 0x9f4);
      StringName::StringName((StringName *)&local_d8,"track_insert_key",false);
      pSVar2 = *(StringName **)(this + 0x9e8);
      Variant::Variant(local_a8,iVar5);
      Variant::Variant(local_90,fVar12);
      Variant::Variant(local_78,(String *)&local_d0);
      local_58 = (undefined1  [16])0x0;
      pVVar9 = local_48;
      local_60 = 0;
      local_c8 = local_a8;
      pVStack_c0 = local_90;
      local_b8 = local_78;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_d8,(int)&local_c8);
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != local_a8);
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      Array::~Array((Array *)&local_d0);
      local_d0 = 0;
      Ref<Animation>::operator=((Ref<Animation> *)&local_d0,*(Ref **)(this + 0x9e8));
      StringName::StringName((StringName *)&local_d8,"_clear_selection_for_anim",false);
      EditorUndoRedoManager::add_undo_method<Ref<Animation>>
                ((EditorUndoRedoManager *)this_00,this,(String *)&local_d8,local_d0);
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      Ref<Animation>::unref((Ref<Animation> *)&local_d0);
      iVar5 = *(int *)(this + 0x9f4);
      StringName::StringName((StringName *)&local_d0,"track_remove_key_at_time",false);
      EditorUndoRedoManager::add_undo_method<int,float>
                ((EditorUndoRedoManager *)this_00,*(Object **)(this + 0x9e8),(StringName *)&local_d0
                 ,iVar5,fVar12);
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      pOVar3 = AnimationPlayerEditor::singleton;
      if (AnimationPlayerEditor::singleton != (Object *)0x0) {
        StringName::StringName((StringName *)&local_d0,"_animation_update_key_frame",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar3,(StringName *)&local_d0);
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_d0,"_animation_update_key_frame",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar3,(StringName *)&local_d0);
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      CanvasItem::queue_redraw();
      Array::~Array(local_e8);
    }
    break;
      case 1:
    if (*(int *)(this + 0xbb0) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        duplicate_selected_keys(this,fVar12,true);
        return;
      }
      goto LAB_0010ab9d;
    }
    break;
      case 2:
    if (*(int *)(this + 0xbb0) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        bVar7 = true;
LAB_0010a9eb:
        copy_selected_keys(this,bVar7);
        return;
      }
      goto LAB_0010ab9d;
    }
    break;
      case 3:
    if (*(int *)(this + 0xbb0) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        bVar7 = false;
        goto LAB_0010a9eb;
      }
      goto LAB_0010ab9d;
    }
    break;
      case 4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      paste_keys(this,fVar12,true);
      return;
    }
    goto LAB_0010ab9d;
      case 5:
    if (*(int *)(this + 0xbb0) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        delete_selection(this);
        return;
      }
      goto LAB_0010ab9d;
    }
    break;
      case 6:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010ab9d;
    uVar6 = 0;
    uVar8 = 0;
    goto LAB_0010a541;
      case 7:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0;
      uVar8 = 1;
      goto LAB_0010a541;
    }
    goto LAB_0010ab9d;
      case 8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0;
      uVar8 = 2;
      goto LAB_0010a541;
    }
    goto LAB_0010ab9d;
      case 9:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010ab9d;
    uVar6 = 0;
    goto LAB_0010a57c;
      case 10:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 1;
      uVar8 = 2;
      goto LAB_0010a541;
    }
    goto LAB_0010ab9d;
      case 0xb:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010ab9d;
    uVar6 = 1;
LAB_0010a57c:
    uVar8 = 3;
LAB_0010a541:
    _change_selected_keys_handle_mode(this,uVar8,uVar6);
    return;
   }

   LAB_0010a4f7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ab9d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationBezierTrackEdit::_draw_track(int, Color const&) */void AnimationBezierTrackEdit::_draw_track(AnimationBezierTrackEdit *this, int param_1, Color *param_2) {
   long *plVar1;
   int iVar2;
   int iVar3;
   Element *pEVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   int iVar12;
   Element *pEVar13;
   int iVar14;
   Element *pEVar15;
   int iVar16;
   int iVar17;
   long in_FS_OFFSET;
   bool bVar18;
   uint uVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   double dVar23;
   undefined8 uVar24;
   float extraout_XMM0_Db;
   Vector<Vector2> *pVVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float local_c8;
   float local_c4;
   float local_c0;
   float local_bc;
   Vector<Vector2> *local_b0;
   float local_a0;
   float local_9c;
   Color local_68[8];
   long local_60;
   Element *local_58;
   Element *pEStack_50;
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar20 = (float)AnimationTimelineEdit::get_zoom_scale();
   iVar5 = AnimationTimelineEdit::get_name_limit();
   fVar21 = (float)Control::get_size();
   iVar17 = 0;
   local_58 = (Element*)0x0;
   iVar6 = (int)fVar21;
   local_48 = 0;
   pEStack_50 = (Element*)&_GlobalNilClass::_nil;
   LAB_0010ac58:iVar7 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 ));
   if (iVar17 < iVar7) {
      dVar23 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), param_1);
      fVar21 = (float)dVar23;
      if (this[0xad8] != (AnimationBezierTrackEdit)0x0) {
         lVar8 = *(long*)( this + 0xba0 );
         if (lVar8 != 0) {
            LAB_0010aca8:lVar8 = *(long*)( lVar8 + 0x10 );
            if (*(long*)( this + 0xba8 ) != lVar8) {
               do {
                  if (param_1 == *(int*)( lVar8 + 0x30 )) {
                     if (iVar17 < *(int*)( lVar8 + 0x34 )) goto LAB_0010aca8;
                     if (iVar17 <= *(int*)( lVar8 + 0x34 )) {
                        fVar21 = fVar21 + *(float*)( this + 0xae4 );
                        break;
                     }

                  }
 else if (param_1 < *(int*)( lVar8 + 0x30 )) goto LAB_0010aca8;
                  lVar8 = *(long*)( lVar8 + 8 );
                  if (*(long*)( this + 0xba8 ) == lVar8) break;
               }
 while ( true );
            }

         }

      }

      if (local_58 == (Element*)0x0) {
         local_58 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
         *(undefined1(*) [16])( local_58 + 0x20 ) = (undefined1[16])0x0;
         *(undefined8*)( local_58 + 0x30 ) = 0;
         *(undefined4*)local_58 = 1;
         for (int i = 0; i < 3; i++) {
            *(Element**)( local_58 + ( 8*i + 8 ) ) = pEStack_50;
         }

         pEVar15 = local_58;
      }
 else {
         pEVar13 = *(Element**)( local_58 + 0x10 );
         pEVar15 = local_58;
         pEVar9 = pEVar13;
         if (pEStack_50 != pEVar13) {
            do {
               if (fVar21 < *(float*)( pEVar9 + 0x30 )) {
                  pEVar9 = *(Element**)( pEVar9 + 0x10 );
               }
 else {
                  if (fVar21 <= *(float*)( pEVar9 + 0x30 )) goto LAB_0010ae35;
                  pEVar9 = *(Element**)( pEVar9 + 8 );
               }

            }
 while ( pEVar9 != pEStack_50 );
            do {
               pEVar15 = pEVar13;
               if (fVar21 < *(float*)( pEVar15 + 0x30 )) {
                  pEVar13 = *(Element**)( pEVar15 + 0x10 );
               }
 else {
                  if (fVar21 <= *(float*)( pEVar15 + 0x30 )) {
                     *(undefined4*)( pEVar15 + 0x34 ) = 0;
                     *(int*)( pEVar15 + 0x34 ) = iVar17;
                     iVar17 = iVar17 + 1;
                     goto LAB_0010ac58;
                  }

                  pEVar13 = *(Element**)( pEVar15 + 8 );
               }

            }
 while ( pEStack_50 != pEVar13 );
         }

      }

      pEVar9 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
      *(undefined1(*) [16])( pEVar9 + 0x20 ) = (undefined1[16])0x0;
      *(undefined4*)pEVar9 = 0;
      *(Element**)( pEVar9 + 0x18 ) = pEVar15;
      *(undefined4*)( pEVar9 + 0x34 ) = 0;
      *(float*)( pEVar9 + 0x30 ) = fVar21;
      *(Element**)( pEVar9 + 8 ) = pEStack_50;
      *(Element**)( pEVar9 + 0x10 ) = pEStack_50;
      if (local_58 == pEVar15) {
         *(Element**)( pEVar15 + 0x10 ) = pEVar9;
         pEVar13 = *(Element**)( pEVar9 + 0x10 );
         pEVar10 = pEVar15;
         if (pEVar9 == *(Element**)( pEVar15 + 8 )) goto LAB_0010add0;
         LAB_0010b756:pEVar11 = (Element*)0x0;
      }
 else if (*(float*)( pEVar15 + 0x30 ) <= fVar21) {
         *(Element**)( pEVar15 + 8 ) = pEVar9;
         pEVar10 = pEVar15;
         pEVar4 = *(Element**)( pEVar9 + 8 );
         pEVar13 = pEStack_50;
         if (pEStack_50 == *(Element**)( pEVar9 + 8 )) goto LAB_0010add0;
         do {
            pEVar11 = pEVar4;
            pEVar4 = *(Element**)( pEVar11 + 0x10 );
         }
 while ( pEStack_50 != *(Element**)( pEVar11 + 0x10 ) );
      }
 else {
         *(Element**)( pEVar15 + 0x10 ) = pEVar9;
         pEVar13 = *(Element**)( pEVar9 + 0x10 );
         pEVar11 = pEVar15;
         pEVar10 = pEVar15;
         if (pEVar9 == *(Element**)( pEVar15 + 8 )) {
            LAB_0010add0:do {
               pEVar11 = *(Element**)( pEVar10 + 0x18 );
               bVar18 = *(Element**)( pEVar11 + 8 ) == pEVar10;
               pEVar10 = pEVar11;
            }
 while ( bVar18 );
         }

         if (pEVar11 == local_58) goto LAB_0010b756;
      }

      *(Element**)( pEVar9 + 0x20 ) = pEVar11;
      if (pEVar13 == pEStack_50) {
         pEVar13 = pEVar9;
         pEVar10 = pEVar15;
         if (pEVar9 == *(Element**)( pEVar15 + 0x10 )) {
            do {
               pEVar15 = *(Element**)( pEVar10 + 0x18 );
               bVar18 = *(Element**)( pEVar15 + 0x10 ) == pEVar10;
               pEVar13 = pEVar10;
               pEVar10 = pEVar15;
            }
 while ( bVar18 );
         }

         if (pEVar13 != local_58) goto LAB_0010ae04;
         *(undefined8*)( pEVar9 + 0x28 ) = 0;
         if (pEVar11 != (Element*)0x0) goto LAB_0010ae0e;
      }
 else {
         do {
            pEVar15 = pEVar13;
            pEVar13 = *(Element**)( pEVar15 + 8 );
         }
 while ( pEStack_50 != *(Element**)( pEVar15 + 8 ) );
         LAB_0010ae04:*(Element**)( pEVar9 + 0x28 ) = pEVar15;
         if (pEVar11 != (Element*)0x0) {
            LAB_0010ae0e:*(Element**)( pEVar11 + 0x28 ) = pEVar9;
            pEVar15 = *(Element**)( pEVar9 + 0x28 );
            if (pEVar15 == (Element*)0x0) goto LAB_0010ae20;
         }

         *(Element**)( pEVar15 + 0x20 ) = pEVar9;
      }

      LAB_0010ae20:local_48 = local_48 + 1;
      RBMap<float,int,Comparator<float>,DefaultAllocator>::_insert_rb_fix((RBMap<float,int,Comparator<float>,DefaultAllocator>*)&local_58, pEVar9);
      LAB_0010ae35:*(int*)( pEVar9 + 0x34 ) = iVar17;
      iVar17 = iVar17 + 1;
      goto LAB_0010ac58;
   }

   if (( local_58 != (Element*)0x0 ) && ( pEVar15 = *(Element**)( local_58 + 0x10 ) * (Element**)( local_58 + 0x10 ) != pEStack_50 )) {
      do {
         pEVar13 = pEVar15;
         pEVar15 = *(Element**)( pEVar13 + 0x10 );
      }
 while ( pEStack_50 != *(Element**)( pEVar13 + 0x10 ) );
      do {
         iVar17 = *(int*)( pEVar13 + 0x34 );
         if (*(long*)( pEVar13 + 0x20 ) == 0) break;
         iVar7 = *(int*)( *(long*)( pEVar13 + 0x20 ) + 0x34 );
         dVar23 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), param_1);
         local_c0 = (float)dVar23;
         local_c4 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), param_1);
         uVar24 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), param_1);
         fVar21 = (float)uVar24;
         local_a0 = (float)( (ulong)uVar24 >> 0x20 );
         if (( ( *(int*)( this + 0xb08 ) == param_1 ) && ( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0 ) ) && ( iVar17 == *(int*)( this + 0xb04 ) )) {
            local_a0 = *(float*)( this + 0xb18 );
            fVar21 = *(float*)( this + 0xb14 );
         }

         if (this[0xad8] != (AnimationBezierTrackEdit)0x0) {
            lVar8 = *(long*)( this + 0xba0 );
            if (lVar8 != 0) {
               LAB_0010afa8:lVar8 = *(long*)( lVar8 + 0x10 );
               if (*(long*)( this + 0xba8 ) != lVar8) {
                  do {
                     if (param_1 == *(int*)( lVar8 + 0x30 )) {
                        if (iVar17 < *(int*)( lVar8 + 0x34 )) goto LAB_0010afa8;
                        if (iVar17 <= *(int*)( lVar8 + 0x34 )) {
                           local_c0 = local_c0 + *(float*)( this + 0xae4 );
                           local_c4 = local_c4 + *(float*)( this + 0xae8 );
                           break;
                        }

                     }
 else if (param_1 < *(int*)( lVar8 + 0x30 )) goto LAB_0010afa8;
                     lVar8 = *(long*)( lVar8 + 8 );
                     if (*(long*)( this + 0xba8 ) == lVar8) break;
                  }
 while ( true );
               }

            }

         }

         dVar23 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), param_1);
         local_bc = (float)dVar23;
         local_c8 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), param_1);
         uVar24 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), param_1);
         fVar28 = (float)uVar24;
         local_9c = (float)( (ulong)uVar24 >> 0x20 );
         if (( ( *(int*)( this + 0xb08 ) == param_1 ) && ( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0 ) ) && ( iVar7 == *(int*)( this + 0xb04 ) )) {
            local_9c = *(float*)( this + 0xb10 );
            fVar28 = *(float*)( this + 0xb0c );
         }

         if (this[0xad8] != (AnimationBezierTrackEdit)0x0) {
            lVar8 = *(long*)( this + 0xba0 );
            if (lVar8 != 0) {
               LAB_0010b058:lVar8 = *(long*)( lVar8 + 0x10 );
               if (*(long*)( this + 0xba8 ) != lVar8) {
                  do {
                     if (param_1 == *(int*)( lVar8 + 0x30 )) {
                        if (iVar7 < *(int*)( lVar8 + 0x34 )) goto LAB_0010b058;
                        if (iVar7 <= *(int*)( lVar8 + 0x34 )) {
                           local_bc = local_bc + *(float*)( this + 0xae4 );
                           local_c8 = local_c8 + *(float*)( this + 0xae8 );
                           break;
                        }

                     }
 else if (param_1 < *(int*)( lVar8 + 0x30 )) goto LAB_0010b058;
                     lVar8 = *(long*)( lVar8 + 8 );
                     if (*(long*)( this + 0xba8 ) == lVar8) break;
                  }
 while ( true );
               }

            }

         }

         dVar23 = (double)Range::get_value();
         iVar7 = (int)( ( (double)local_c0 - dVar23 ) * (double)fVar20 + (double)iVar5 );
         dVar23 = (double)Range::get_value();
         iVar17 = (int)( ( (double)local_bc - dVar23 ) * (double)fVar20 + (double)iVar5 );
         if (( iVar5 <= iVar17 ) && ( iVar7 <= iVar6 )) {
            local_60 = 0;
            local_b0 = (Vector<Vector2>*)0x0;
            iVar2 = iVar5;
            if (iVar5 < iVar7) {
               iVar2 = iVar7;
            }

            iVar3 = iVar6;
            if (iVar17 < iVar6) {
               iVar3 = iVar17;
            }

            if (iVar2 <= iVar3) {
               fVar21 = fVar21 + local_c0;
               fVar28 = fVar28 + local_bc;
               iVar14 = iVar2 - iVar5;
               iVar16 = iVar2;
               do {
                  dVar23 = (double)Range::get_value();
                  fVar26 = local_c8;
                  if (( iVar17 != iVar16 ) && ( fVar26 = iVar7 != iVar16 )) {
                     fVar26 = 0.0;
                     iVar12 = 10;
                     fVar22 = (float)( dVar23 + (double)( (float)iVar14 / fVar20 ) );
                     fVar27 = _LC19;
                     do {
                        fVar30 = ( fVar26 + fVar27 ) * _LC37;
                        fVar31 = _LC19 - fVar30;
                        uVar19 = -(uint)(fVar21 * fVar31 * fVar31 * fVar30 * _LC141 +
                                 fVar31 * fVar31 * fVar31 * local_c0 +
                                 fVar31 * fVar28 * fVar30 * fVar30 * _LC141 +
                                 fVar30 * fVar30 * fVar30 * local_bc < fVar22);
                        fVar27 = (float)( (uint)fVar27 & uVar19 | ~uVar19 & (uint)fVar30 );
                        fVar26 = (float)( ~uVar19 & (uint)fVar26 | (uint)fVar30 & uVar19 );
                        iVar12 = iVar12 + -1;
                     }
 while ( iVar12 != 0 );
                     fVar29 = fVar26 * fVar26;
                     fVar31 = _LC19 - fVar26;
                     fVar30 = fVar31 * fVar31;
                     fVar32 = fVar21 * fVar30 * fVar26 * _LC141 + local_c0 * fVar31 * fVar30 + fVar28 * fVar31 * fVar29 * _LC141 + local_bc * fVar29 * fVar26;
                     fVar26 = ( local_a0 + local_c4 ) * fVar30 * fVar26 * _LC141 + fVar31 * fVar30 * local_c4 + fVar31 * ( local_9c + local_c8 ) * fVar29 * _LC141 + fVar29 * fVar26 * local_c8;
                     fVar30 = _LC19 - fVar27;
                     fVar31 = fVar30 * fVar30;
                     fVar29 = fVar27 * fVar27;
                     fVar26 = ( ( fVar22 - fVar32 ) / ( ( fVar21 * fVar31 * fVar27 * _LC141 + local_c0 * fVar30 * fVar31 + fVar28 * fVar30 * fVar29 * _LC141 + local_bc * fVar29 * fVar27 ) - fVar32 ) ) * ( ( ( local_a0 + local_c4 ) * fVar31 * fVar27 * _LC141 + fVar30 * fVar31 * local_c4 + fVar30 * ( local_9c + local_c8 ) * fVar29 * _LC141 + fVar29 * fVar27 * local_c8 ) - fVar26 ) + fVar26;
                  }

                  fVar27 = *(float*)( this + 0xab0 );
                  fVar22 = *(float*)( this + 0xab4 );
                  Control::get_size();
                  pVVar25 = (Vector<Vector2>*)CONCAT44((float)( (double)extraout_XMM0_Db * __LC21 - (double)( ( fVar26 - fVar27 ) / fVar22 ) ), (float)iVar16);
                  if (iVar2 < iVar16) {
                     Vector<Vector2>::push_back(local_b0);
                     Vector<Vector2>::push_back(pVVar25, local_68);
                  }

                  iVar16 = iVar16 + 1;
                  iVar14 = iVar14 + 1;
                  local_b0 = pVVar25;
               }
 while ( iVar16 <= iVar3 );
               if (local_60 != 0) {
                  if (1 < *(long*)( local_60 + -8 )) {
                     fVar21 = (float)EditorScale::get_scale();
                     fVar21 = roundf(fVar21);
                     CanvasItem::draw_multiline((Vector*)this, local_68, fVar21, SUB81(param_2, 0));
                     if (local_60 == 0) goto LAB_0010b126;
                  }

                  lVar8 = local_60;
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

            }

         }

         LAB_0010b126:pEVar13 = *(Element**)( pEVar13 + 0x20 );
      }
 while ( pEVar13 != (Element*)0x0 );
   }

   RBMap<float,int,Comparator<float>,DefaultAllocator>::clear((RBMap<float,int,Comparator<float>,DefaultAllocator>*)&local_58);
   if (local_58 != (Element*)0x0) {
      Memory::free_static(local_58, false);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationBezierTrackEdit::gui_input(Ref<InputEvent> const&) */void AnimationBezierTrackEdit::gui_input(AnimationBezierTrackEdit *this, Ref *param_1) {
   Vector2 *pVVar1;
   Variant *pVVar2;
   undefined1(*pauVar3)[16];
   HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *pHVar4;
   float *pfVar5;
   undefined4 uVar6;
   Vector2i *pVVar7;
   StringName *pSVar8;
   void *pvVar9;
   code *pcVar10;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   Object *pOVar13;
   undefined8 *puVar14;
   char cVar15;
   char cVar16;
   AnimationBezierTrackEdit AVar17;
   bool bVar18;
   int iVar19;
   undefined4 uVar20;
   int iVar21;
   uint uVar22;
   int iVar23;
   int iVar24;
   Object *pOVar25;
   String *pSVar26;
   undefined4 *puVar27;
   CallableCustom *this_00;
   EditorUndoRedoManager *pEVar28;
   Variant *pVVar29;
   undefined1(*pauVar30)[16];
   long lVar31;
   undefined8 *puVar32;
   long lVar33;
   int *piVar34;
   long lVar35;
   long lVar36;
   byte bVar37;
   uint uVar38;
   char *pcVar39;
   AnimationBezierTrackEdit AVar40;
   Vector2 *pVVar41;
   long in_FS_OFFSET;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   double dVar48;
   double dVar49;
   undefined8 uVar50;
   float extraout_XMM0_Db_01;
   float extraout_XMM0_Db_02;
   double dVar51;
   float extraout_XMM0_Db_03;
   undefined8 uVar52;
   EditorUndoRedoManager *pEVar53;
   float extraout_XMM0_Db_04;
   float extraout_XMM0_Db_05;
   double dVar54;
   float local_2e8;
   Object *local_2d0;
   Object *local_2c8;
   float local_2c0;
   int local_2b8;
   StringName *local_2a8;
   int *local_228;
   undefined1 local_1f8[56];
   Object *local_1c0;
   undefined1(*local_1b8)[16];
   long local_1b0;
   Object *local_1a8;
   undefined4 *local_1a0;
   Object *local_198;
   undefined8 *local_190;
   int local_188;
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168[4];
   undefined1 local_148[16];
   undefined1 auStack_138[16];
   undefined1 local_128[16];
   Variant *local_118;
   undefined8 local_108;
   double local_100;
   float local_f8;
   float fStack_f4;
   undefined1 local_f0[16];
   undefined4 local_e0;
   undefined8 local_d8;
   undefined1 local_d0[16];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Vector2 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("gui_input", "editor/animation_bezier_editor.cpp", 0x387, "Condition \"p_event.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_00110c12;
   }

   cVar15 = ViewPanner::gui_input(0, 0, *(undefined8*)( this + 3000 ));
   if (cVar15 != '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::accept_event();
         return;
      }

      goto LAB_00110c12;
   }

   cVar15 = InputEvent::is_pressed();
   if (cVar15 != '\0') {
      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_editor/duplicate_selected_keys");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 != '\0') {
         if (( this[0x9f0] == (AnimationBezierTrackEdit)0x0 ) && ( *(int*)( this + 0xbb0 ) != 0 )) {
            duplicate_selected_keys(this, _LC145, false);
         }

         Control::accept_event();
      }

      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_editor/cut_selected_keys");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 != '\0') {
         if (( this[0x9f0] == (AnimationBezierTrackEdit)0x0 ) && ( *(int*)( this + 0xbb0 ) != 0 )) {
            copy_selected_keys(this, true);
         }

         Control::accept_event();
      }

      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_editor/copy_selected_keys");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 != '\0') {
         if (( this[0x9f0] == (AnimationBezierTrackEdit)0x0 ) && ( *(int*)( this + 0xbb0 ) != 0 )) {
            copy_selected_keys(this, false);
         }

         Control::accept_event();
      }

      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_editor/paste_keys");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 != '\0') {
         if (this[0x9f0] == (AnimationBezierTrackEdit)0x0) {
            paste_keys(this, _LC145, false);
         }

         Control::accept_event();
      }

      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_editor/delete_selection");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 != '\0') {
         if (( this[0x9f0] == (AnimationBezierTrackEdit)0x0 ) && ( *(int*)( this + 0xbb0 ) != 0 )) {
            delete_selection(this);
         }

         Control::accept_event();
      }

   }

   lVar36 = *(long*)param_1;
   if (lVar36 == 0) {
      local_1c0 = (Object*)0x0;
      local_2c8 = (Object*)0x0;
      goto LAB_0010c2ac;
   }

   local_2c8 = (Object*)__dynamic_cast(lVar36, &Object::typeinfo, &InputEventKey::typeinfo);
   if (local_2c8 != (Object*)0x0) {
      cVar15 = RefCounted::reference();
      if (cVar15 == '\0') {
         local_2c8 = (Object*)0x0;
         lVar36 = *(long*)param_1;
         LAB_0010b850:local_1c0 = (Object*)0x0;
         if (lVar36 == 0) goto LAB_0010c2ac;
         goto LAB_0010b861;
      }

      cVar15 = InputEvent::is_pressed();
      if (cVar15 == '\0') {
         lVar36 = *(long*)param_1;
         goto LAB_0010b850;
      }

      pSVar26 = (String*)EditorSettings::get_singleton();
      local_198 = (Object*)0x0;
      String::parse_latin1((String*)&local_198, "animation_bezier_editor/focus");
      cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      if (cVar15 == '\0') {
         pSVar26 = (String*)EditorSettings::get_singleton();
         local_198 = (Object*)0x0;
         String::parse_latin1((String*)&local_198, "animation_bezier_editor/select_all_keys");
         cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         if (cVar15 == '\0') {
            pSVar26 = (String*)EditorSettings::get_singleton();
            local_198 = (Object*)0x0;
            String::parse_latin1((String*)&local_198, "animation_bezier_editor/deselect_all_keys");
            cVar15 = EditorSettings::is_shortcut(pSVar26, (Ref*)&local_198);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            if (cVar15 == '\0') {
               lVar36 = *(long*)param_1;
               goto LAB_0010b850;
            }

            RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ));
            if ((gui_input(Ref<InputEvent>const&)::{lambda()
            #1
            ( iVar19 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar19 != 0) );
            {
               _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
               __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
               __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
               #1
            }

            Object::emit_signal<>
                  ((Object *)this,
                   (StringName *)
                   &gui_input(Ref<InputEvent>const&)::{lambda()
            #1
         }
 else {
            lVar36 = *(long*)( this + 0xb98 );
            lVar33 = 0;
            for (lVar31 = 0; ( lVar36 != 0 && ( lVar31 < *(long*)( lVar36 + -8 ) ) ); lVar31 = lVar31 + 1) {
               dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + lVar33 + 0x30 ));
               lVar36 = *(long*)( this + 0xb98 );
               if (lVar36 == 0) {
                  lVar35 = 0;
                  goto LAB_0010d5c5;
               }

               lVar35 = *(long*)( lVar36 + -8 );
               if (lVar35 <= lVar31) goto LAB_0010d5c5;
               piVar34 = (int*)( lVar36 + 0x30 + lVar33 );
               lVar33 = lVar33 + 0x38;
               _select_at_anim(this, (Ref*)( this + 0x9e8 ), *piVar34, (float)dVar48, (int)lVar31 == 0);
               lVar36 = *(long*)( this + 0xb98 );
            }

         }

         CanvasItem::queue_redraw();
         Control::accept_event();
      }
 else {
         local_198 = (Object*)0x0;
         local_188 = 0;
         local_190 = &_GlobalNilClass::_nil;
         if (*(int*)( this + 0xbb0 ) == 0) {
            lVar36 = *(long*)( this + 0xb98 );
            lVar33 = 0;
            lVar31 = 0;
            if (lVar36 != 0) {
               do {
                  if (*(long*)( lVar36 + -8 ) <= lVar31) break;
                  local_1a8 = *(Object**)( lVar36 + 0x30 + lVar33 );
                  if (local_198 == (Object*)0x0) {
                     local_198 = (Object*)operator_new(0x38, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( local_198 + 0x20 ) = (undefined1[16])0x0;
                     *(undefined8*)( local_198 + 0x30 ) = 0;
                     *(undefined4*)local_198 = 1;
                     for (int i = 0; i < 3; i++) {
                        *(undefined8**)( local_198 + ( 8*i + 8 ) ) = local_190;
                     }

                  }

                  lVar31 = lVar31 + 1;
                  lVar33 = lVar33 + 0x38;
                  RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)&local_198, (Pair*)&local_1a8);
                  lVar36 = *(long*)( this + 0xb98 );
               }
 while ( lVar36 != 0 );
               LAB_0010d1b0:if (local_188 != 0) {
                  fVar47 = _LC53;
                  fVar46 = _LC53;
                  if (local_198 == (Object*)0x0) {
                     local_2c0 = _LC52;
                     local_2e8 = _LC52;
                     local_2d0._0_4_ = _LC53;
                  }
 else {
                     puVar14 = *(undefined8**)( local_198 + 0x10 );
                     if (*(undefined8**)( local_198 + 0x10 ) == local_190) {
                        local_2c0 = _LC52;
                        local_2e8 = _LC52;
                        local_2d0._0_4_ = _LC53;
                     }
 else {
                        do {
                           puVar32 = puVar14;
                           puVar14 = (undefined8*)puVar32[2];
                        }
 while ( local_190 != (undefined8*)puVar32[2] );
                        local_2c0 = _LC52;
                        local_2e8 = _LC52;
                        local_2d0._0_4_ = _LC53;
                        do {
                           iVar19 = *(int*)( puVar32 + 6 );
                           dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), iVar19);
                           fVar42 = (float)dVar48;
                           fVar47 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), iVar19);
                           fVar43 = fVar47;
                           if (fVar47 <= local_2c0) {
                              fVar43 = local_2c0;
                           }

                           puVar32 = (undefined8*)puVar32[4];
                           if (fVar46 <= fVar47) {
                              fVar47 = fVar46;
                           }

                           fVar44 = fVar42;
                           if (local_2d0._0_4_ <= fVar42) {
                              fVar44 = local_2d0._0_4_;
                           }

                           if (fVar42 <= local_2e8) {
                              fVar42 = local_2e8;
                           }

                           fVar46 = fVar47;
                           local_2d0._0_4_ = fVar44;
                           local_2e8 = fVar42;
                           local_2c0 = fVar43;
                        }
 while ( puVar32 != (undefined8*)0x0 );
                        fVar46 = (float)( (uint)fVar47 & _LC54 );
                     }

                  }

                  fVar43 = (float)Control::get_size();
                  iVar19 = AnimationTimelineEdit::get_name_limit();
                  iVar21 = AnimationTimelineEdit::get_buttons_width();
                  fVar42 = _LC151;
                  dVar49 = (double)( ( fVar43 - (float)iVar19 ) - (float)iVar21 );
                  dVar48 = (double)(float)( _LC150 * dVar49 ) * __LC21;
                  fVar43 = (float)( ( dVar49 - dVar48 ) / (double)( local_2e8 - local_2d0._0_4_ ) );
                  dVar48 = (double)local_2d0._0_4_ - dVar48 / (double)fVar43;
                  if (dVar48 < 0.0) {
                     fVar44 = powf(_LC151 / fVar43, _LC152);
                     if (fVar44 < _LC19) {
                        fVar44 = 0.0;
                        local_2d0._0_4_ = 0.0;
                        goto LAB_0010e111;
                     }

                     dVar48 = (double)Range::get_max();
                     local_2d0._0_4_ = 0.0;
                     dVar48 = dVar48 - (double)fVar44;
                     LAB_0010db9b:fVar42 = _LC55;
                     if (( (float)( (uint)local_2e8 & _LC54 ) <= _LC55 ) && ( _LC36 < (double)( local_2e8 - local_2d0._0_4_ ) )) {
                        Range::set_value((double)(float)dVar48);
                        lVar36 = *(long*)( this + 0x9c8 );
                        this_00 = (CallableCustom*)operator_new(0x48, "");
                        CallableCustom::CallableCustom(this_00);
                        *(undefined**)( this_00 + 0x20 ) = &_LC30;
                        *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
                        *(undefined***)this_00 = &PTR_hash_00129d18;
                        *(undefined8*)( this_00 + 0x40 ) = 0;
                        uVar50 = *(undefined8*)( lVar36 + 0x60 );
                        *(long*)( this_00 + 0x28 ) = lVar36;
                        *(undefined8*)( this_00 + 0x30 ) = uVar50;
                        *(undefined8*)( this_00 + 0x10 ) = 0;
                        *(code**)( this_00 + 0x38 ) = Range::set_value;
                        CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
                        *(char**)( this_00 + 0x20 ) = "Range::set_value";
                        Callable::Callable((Callable*)&local_1a8, this_00);
                        Variant::Variant((Variant*)&local_108, local_2d0._0_4_);
                        Variant::Variant((Variant*)local_f0, 0);
                        local_148._0_8_ = (Variant*)&local_108;
                        Callable::call_deferredp((Variant**)&local_1a8, (int)local_148);
                        if (Variant::needs_deinit[(int)local_f0._0_4_] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (Variant::needs_deinit[(int)local_108] != '\0') {
                           Variant::_clear_internal();
                        }

                        Callable::~Callable((Callable*)&local_1a8);
                     }

                  }
 else {
                     local_2d0._0_4_ = (float)dVar48;
                     fVar45 = powf(_LC151 / fVar43, _LC152);
                     fVar44 = (float)( (uint)local_2d0._0_4_ & _LC54 );
                     if (fVar45 < _LC19) {
                        LAB_0010e111:fVar45 = _LC19;
                        fVar42 = powf(fVar43 / fVar42, _LC152);
                        fVar45 = fVar45 - ( fVar42 - fVar45 );
                     }

                     dVar48 = (double)Range::get_max();
                     fVar42 = _LC55;
                     if (fVar44 <= _LC55) {
                        dVar48 = dVar48 - (double)fVar45;
                        goto LAB_0010db9b;
                     }

                  }

                  if (( fVar46 <= fVar42 ) && ( (float)( (uint)local_2c0 & _LC54 ) <= fVar42 )) {
                     _zoom_vertically(this, fVar47, local_2c0);
                  }

                  CanvasItem::queue_redraw();
               }

            }

         }
 else if (*(long*)( this + 0xba0 ) != 0) {
            lVar36 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
            if (lVar36 != *(long*)( this + 0xba8 )) {
               do {
                  lVar31 = lVar36;
                  lVar36 = *(long*)( lVar31 + 0x10 );
               }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar31 + 0x10 ) );
               do {
                  if (local_198 == (Object*)0x0) {
                     local_198 = (Object*)operator_new(0x38, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( local_198 + 0x20 ) = (undefined1[16])0x0;
                     *(undefined8*)( local_198 + 0x30 ) = 0;
                     *(undefined4*)local_198 = 1;
                     for (int i = 0; i < 3; i++) {
                        *(undefined8**)( local_198 + ( 8*i + 8 ) ) = local_190;
                     }

                  }

                  RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)&local_198, (Pair*)( lVar31 + 0x30 ));
                  iVar19 = *(int*)( lVar31 + 0x34 );
                  if (0 < iVar19) {
                     local_1a8 = (Object*)CONCAT44(iVar19 + -1, *(undefined4*)( lVar31 + 0x30 ));
                     if (local_198 == (Object*)0x0) {
                        local_198 = (Object*)operator_new(0x38, DefaultAllocator::alloc);
                        *(undefined1(*) [16])( local_198 + 0x20 ) = (undefined1[16])0x0;
                        *(undefined8*)( local_198 + 0x30 ) = 0;
                        *(undefined4*)local_198 = 1;
                        for (int i = 0; i < 3; i++) {
                           *(undefined8**)( local_198 + ( 8*i + 8 ) ) = local_190;
                        }

                     }

                     RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)&local_198, (Pair*)&local_1a8);
                     iVar19 = *(int*)( lVar31 + 0x34 );
                  }

                  iVar21 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 ));
                  if (iVar19 < iVar21 + -1) {
                     local_1a8 = (Object*)CONCAT44(*(int*)( lVar31 + 0x34 ) + 1, *(undefined4*)( lVar31 + 0x30 ));
                     if (local_198 == (Object*)0x0) {
                        local_198 = (Object*)operator_new(0x38, DefaultAllocator::alloc);
                        *(undefined1(*) [16])( local_198 + 0x20 ) = (undefined1[16])0x0;
                        *(undefined8*)( local_198 + 0x30 ) = 0;
                        *(undefined4*)local_198 = 1;
                        for (int i = 0; i < 3; i++) {
                           *(undefined8**)( local_198 + ( 8*i + 8 ) ) = local_190;
                        }

                     }

                     RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_insert((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)&local_198, (Pair*)&local_1a8);
                  }

                  lVar31 = *(long*)( lVar31 + 0x20 );
               }
 while ( lVar31 != 0 );
               goto LAB_0010d1b0;
            }

         }

         Control::accept_event();
         RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)&local_198);
         if (local_198 != (Object*)0x0) {
            Memory::free_static(local_198, false);
         }

      }

      goto LAB_0010bd60;
   }

   LAB_0010b861:local_1c0 = (Object*)0x0;
   local_2d0 = (Object*)__dynamic_cast(lVar36, &Object::typeinfo, &InputEventMouseButton::typeinfo);
   if (local_2d0 != (Object*)0x0) {
      local_1c0 = local_2d0;
      cVar15 = RefCounted::reference();
      if (cVar15 == '\0') {
         local_1c0 = (Object*)0x0;
         goto LAB_0010c2ac;
      }

      local_2b8 = AnimationTimelineEdit::get_name_limit();
      iVar19 = InputEventMouseButton::get_button_index();
      if (( iVar19 == 2 ) && ( cVar15 = cVar15 != '\0' )) {
         uVar50 = InputEventMouse::get_position();
         *(undefined8*)( this + 0xb80 ) = uVar50;
         fVar46 = *(float*)( this + 0xb80 );
         if ((float)local_2b8 <= fVar46) {
            fVar47 = (float)Control::get_size();
            if (( fVar46 <= fVar47 ) && ( this[0x9f0] == (AnimationBezierTrackEdit)0x0 )) {
               uVar50 = InputEventMouse::get_position();
               uVar52 = Control::get_screen_position();
               local_148._4_4_ = (float)( (ulong)uVar52 >> 0x20 ) + (float)( (ulong)uVar50 >> 0x20 );
               local_148._0_4_ = (float)uVar52 + (float)uVar50;
               bVar18 = (bool)InputEventWithModifiers::is_shift_pressed();
               local_108 = InputEventMouse::get_position();
               cVar15 = _try_select_at_ui_pos(this, (Vector2*)&local_108, bVar18, false);
               PopupMenu::clear(SUB81(*(undefined8*)( this + 0xab8 ), 0));
               local_1a8 = (Object*)0x0;
               uVar50 = *(undefined8*)( this + 0xab8 );
               String::parse_latin1((String*)&local_1a8, "");
               local_1b0 = 0;
               String::parse_latin1((String*)&local_1b0, "Insert Key Here");
               TTR((String*)&local_198, (String*)&local_1b0);
               PopupMenu::add_icon_item(uVar50, this + 0xa08, (String*)&local_198);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
               iVar19 = (int)(String*)&local_198;
               if (( cVar15 == '\0' ) && ( *(int*)( this + 0xbb0 ) == 0 )) {
                  cVar16 = AnimationTrackEditor::is_key_clipboard_active();
                  if (cVar16 != '\0') {
                     LAB_00110cbe:local_2a8 = (StringName*)&local_1b8;
                     uVar50 = *(undefined8*)( this + 0xab8 );
                     local_1a8 = (Object*)0x0;
                     String::parse_latin1((String*)&local_1a8, "");
                     local_1b0 = 0;
                     String::parse_latin1((String*)&local_1b0, "Paste Key(s)");
                     TTR((String*)&local_198, (String*)&local_1b0);
                     if ((gui_input(Ref<InputEvent>const&)::{lambda()
                     #5
                     ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                     {
                        _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                        __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                        __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                        #5
                        sname;
                     }

                     Control::get_editor_theme_icon(local_2a8);
                     PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 4);
                     Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                     goto LAB_00110a68;
                  }

                  LAB_0010c532:if (*(int*)( this + 0xbb0 ) != 0) goto LAB_0010c54c;
               }
 else {
                  local_198 = (Object*)0x0;
                  PopupMenu::add_separator(*(String**)( this + 0xab8 ), iVar19);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Duplicate Selected Key(s)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #2
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #2
                     sname;
                  }

                  Control::get_editor_theme_icon((StringName*)&local_1b8);
                  PopupMenu::add_icon_item(uVar50, (StringName*)&local_1b8, (String*)&local_198, 1);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)&local_1b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Cut Selected Key(s)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #3
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #3
                     sname;
                  }

                  local_2a8 = (StringName*)&local_1b8;
                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 2);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Copy Selected Key(s)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #4
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #4
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 3);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  cVar16 = AnimationTrackEditor::is_key_clipboard_active();
                  if (cVar16 != '\0') goto LAB_00110cbe;
                  LAB_00110a68:if (cVar15 == '\0') goto LAB_0010c532;
                  LAB_0010c54c:local_2a8 = (StringName*)&local_1b8;
                  local_198 = (Object*)0x0;
                  PopupMenu::add_separator(*(String**)( this + 0xab8 ), iVar19);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Delete Selected Key(s)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #6
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #6
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  local_198 = (Object*)0x0;
                  PopupMenu::add_separator(*(String**)( this + 0xab8 ), iVar19);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Free");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #7
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #7
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 6);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Linear");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #8
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #8
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 7);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Balanced");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #9
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #9
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 8);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Mirrored");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #10
                  ( iVar21 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar21 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #10
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 9);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  local_198 = (Object*)0x0;
                  PopupMenu::add_separator(*(String**)( this + 0xab8 ), iVar19);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Balanced (Auto Tangent)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #11
                  ( iVar19 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar19 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #11
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  uVar50 = *(undefined8*)( this + 0xab8 );
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Make Handles Mirrored (Auto Tangent)");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  if ((gui_input(Ref<InputEvent>const&)::{lambda()
                  #12
                  ( iVar19 = __cxa_guard_acquire(&gui_input(Ref < InputEvent > const & sname), iVar19 != 0) );
                  {
                     _scs_create((char*)&gui_input(Ref < InputEvent > const & ::sname, true));
                     __cxa_atexit(StringName::~StringName, &gui_input(Ref < InputEvent > const & ::sname, &__dso_handle));
                     __cxa_guard_release(&gui_input(Ref<InputEvent>const&)::{lambda()
                     #12
                     sname;
                  }

                  Control::get_editor_theme_icon(local_2a8);
                  PopupMenu::add_icon_item(uVar50, local_2a8, (String*)&local_198, 0xb);
                  Ref<Texture2D>::unref((Ref<Texture2D>*)local_2a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
               }

               iVar19 = PopupMenu::get_item_count();
               if (iVar19 != 0) {
                  Window::reset_size();
                  pVVar7 = *(Vector2i**)( this + 0xab8 );
                  local_108 = Vector2::operator_cast_to_Vector2i((Vector2*)local_148);
                  Window::set_position(pVVar7);
                  local_108 = 0;
                  local_100 = 0.0;
                  ( **(code**)( **(long**)( this + 0xab8 ) + 0x240 ) )();
               }

            }

         }

      }

      cVar15 = InputEvent::is_pressed();
      if (( cVar15 == '\0' ) || ( iVar19 = iVar19 != 1 )) {
         LAB_0010b8f5:if (( ( this[0xaec] != (AnimationBezierTrackEdit)0x0 ) && ( cVar15 = InputEvent::is_pressed() ),cVar15 == '\0' )) {
            AVar17 = this[0xaed];
            if (AVar17 == (AnimationBezierTrackEdit)0x0) {
               uVar38 = 0;
               _clear_selection(this);
               uVar22 = Animation::get_track_count();
               fVar46 = (float)Animation::get_length();
               Animation::set_length(_LC184);
               fVar47 = (float)InputEventMouse::get_position();
               fVar42 = (float)AnimationTimelineEdit::get_zoom_scale();
               dVar48 = (double)Range::get_value();
               if (0 < (int)uVar22) {
                  do {
                     cVar15 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 ));
                     if (( ( cVar15 == '\x06' ) && ( cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), (int*)(ulong)uVar38, (uint*)&local_198) ),cVar15 == '\0' )) {
                        fVar43 = (float)Animation::bezier_track_interpolate((int)*(undefined8*)( this + 0x9e8 ), (double)(float)( dVar48 + (double)( ( fVar47 - (float)local_2b8 ) / fVar42 ) ));
                        fVar43 = (float)_bezier_h_to_pixel(this, fVar43);
                        InputEventMouse::get_position();
                        if ((float)( ( uint )(extraout_XMM0_Db_03 - fVar43) & _LC54 ) < _LC185) {
                           AVar17 = this[0x9f0];
                           Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                           this[0x9f0] = AVar17;
                           *(uint*)( this + 0x9f4 ) = uVar38;
                           CanvasItem::queue_redraw();
                           break;
                        }

                     }

                     uVar38 = uVar38 + 1;
                  }
 while ( uVar38 != uVar22 );
               }

               Animation::set_length(fVar46);
            }
 else {
               if (this[0xaee] == (AnimationBezierTrackEdit)0x0) {
                  _clear_selection(this);
               }

               fVar46 = *(float*)( this + 0xaf0 );
               fVar47 = *(float*)( this + 0xaf8 );
               fVar42 = *(float*)( this + 0xaf4 );
               fVar43 = *(float*)( this + 0xafc );
               fVar44 = fVar47;
               if (fVar46 <= fVar47) {
                  fVar44 = fVar46;
                  fVar46 = fVar47;
               }

               fVar47 = fVar43;
               if (fVar42 <= fVar43) {
                  fVar47 = fVar42;
                  fVar42 = fVar43;
               }

               lVar31 = 0;
               lVar36 = *(long*)( this + 0xb98 );
               iVar19 = 0;
               if (lVar36 != 0) {
                  AVar40 = (AnimationBezierTrackEdit)0x0;
                  do {
                     if (*(long*)( lVar36 + -8 ) <= lVar31) break;
                     lVar33 = lVar31 * 0x38;
                     pfVar5 = (float*)( lVar36 + lVar33 );
                     if (( ( pfVar5[2] <= 0.0 && pfVar5[2] != 0.0 ) || ( pfVar5[3] <= 0.0 && pfVar5[3] != 0.0 ) ) || ( ( fVar46 - fVar44 < 0.0 || ( fVar42 - fVar47 < 0.0 ) ) )) {
                        _err_print_error("intersects", "./core/math/rect2.h", 0x39, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.");
                        lVar36 = *(long*)( this + 0xb98 );
                     }

                     if (( ( ( *pfVar5 < ( fVar46 - fVar44 ) + fVar44 ) && ( fVar44 < *pfVar5 + pfVar5[2] ) ) && ( pfVar5[1] < ( fVar42 - fVar47 ) + fVar47 ) ) && ( fVar47 < pfVar5[1] + pfVar5[3] )) {
                        bVar37 = false;
                        if (iVar19 == 0) {
                           bVar37 = (byte)this[0xaee] ^ 1;
                        }

                        if (lVar36 == 0) {
                           LAB_0010e32a:lVar35 = 0;
                           LAB_0010d5c5:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar31, lVar35, "p_index", "size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar10 = (code*)invalidInstructionException();
                           ( *pcVar10 )();
                        }

                        lVar35 = *(long*)( lVar36 + -8 );
                        if (lVar35 <= lVar31) goto LAB_0010d5c5;
                        dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + lVar33 + 0x30 ));
                        lVar36 = *(long*)( this + 0xb98 );
                        if (lVar36 == 0) goto LAB_0010e32a;
                        lVar35 = *(long*)( lVar36 + -8 );
                        if (lVar35 <= lVar31) goto LAB_0010d5c5;
                        _select_at_anim(this, (Ref*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 + lVar33 ), (float)dVar48, (bool)bVar37);
                        if (AVar40 == (AnimationBezierTrackEdit)0x0) {
                           lVar36 = *(long*)( this + 0xb98 );
                           AVar40 = this[0x9f0];
                           if (lVar36 == 0) goto LAB_0010e32a;
                           lVar35 = *(long*)( lVar36 + -8 );
                           if (lVar35 <= lVar31) goto LAB_0010d5c5;
                           uVar20 = *(undefined4*)( lVar36 + 0x30 + lVar33 );
                           Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                           this[0x9f0] = AVar40;
                           *(undefined4*)( this + 0x9f4 ) = uVar20;
                           CanvasItem::queue_redraw();
                        }

                        iVar19 = iVar19 + 1;
                        lVar36 = *(long*)( this + 0xb98 );
                        AVar40 = AVar17;
                     }

                     lVar31 = lVar31 + 1;
                  }
 while ( lVar36 != 0 );
               }

            }

            *(undefined2*)( this + 0xaec ) = 0;
            CanvasItem::queue_redraw();
         }

         if (this[0xac8] != (AnimationBezierTrackEdit)0x0) {
            cVar15 = InputEvent::is_pressed();
            if (( ( cVar15 == '\0' ) && ( iVar19 = InputEventMouseButton::get_button_index() ),iVar19 == 1 )) {
               if (( this[0xad8] == (AnimationBezierTrackEdit)0x0 ) || ( ( (double)(float)( *(uint*)( this + 0xae4 ) & _LC54 ) <= _LC36 && ( (double)(float)( *(uint*)( this + 0xae8 ) & _LC54 ) <= _LC36 ) ) )) {
                  if (( *(int*)( this + 0xad0 ) != -1 ) || ( *(int*)( this + 0xad4 ) != -1 )) {
                     RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ));
                     AVar17 = this[0x9f0];
                     uVar20 = *(undefined4*)( this + 0xad0 );
                     Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                     this[0x9f0] = AVar17;
                     *(undefined4*)( this + 0x9f4 ) = uVar20;
                     CanvasItem::queue_redraw();
                     dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xad0 ));
                     _select_at_anim(this, (Ref*)( this + 0x9e8 ), *(int*)( this + 0xad0 ), (float)dVar48, true);
                  }

               }
 else {
                  pEVar28 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
                  local_1a8 = (Object*)0x0;
                  String::parse_latin1((String*)&local_1a8, "");
                  local_1b0 = 0;
                  String::parse_latin1((String*)&local_1b0, "Move Bezier Points");
                  TTR((String*)&local_198, (String*)&local_1b0);
                  EditorUndoRedoManager::create_action(pEVar28, (String*)&local_198, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                  lVar36 = *(long*)( this + 0xba0 );
                  local_1b8 = (undefined1(*) [16])0x0;
                  if (lVar36 == 0) {
                     LAB_0011165e:pauVar30 = (undefined1(*) [16])0x0;
                  }
 else {
                     lVar31 = *(long*)( this + 0xba8 );
                     iVar19 = (int)(String*)&local_1b0;
                     lVar33 = *(long*)( lVar36 + 0x10 );
                     if (*(long*)( lVar36 + 0x10 ) == lVar31) {
                        LAB_00111078:pauVar30 = (undefined1(*) [16])0x0;
                        LAB_0010f007:lVar33 = *(long*)( lVar36 + 0x10 );
                        if (*(long*)( lVar36 + 0x10 ) != lVar31) {
                           do {
                              lVar36 = lVar33;
                              lVar33 = *(long*)( lVar36 + 8 );
                           }
 while ( lVar31 != *(long*)( lVar36 + 8 ) );
                           do {
                              dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                              fVar46 = *(float*)( this + 0xae4 );
                              iVar21 = (int)(Variant*)local_148;
                              Animation::track_get_key_value(iVar21, (int)*(undefined8*)( this + 0x9e8 ));
                              Variant::operator_cast_to_Array((Variant*)&local_1b0);
                              if (Variant::needs_deinit[(int)local_148._0_4_] != '\0') {
                                 Variant::_clear_internal();
                              }

                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar47 = Variant::operator_cast_to_float(pVVar29);
                              Variant::Variant((Variant*)local_148, fVar47 + *(float*)( this + 0xae8 ));
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              if (pVVar29 == (Variant*)local_148) {
                                 if (Variant::needs_deinit[(int)local_148._0_4_] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 else {
                                 if (Variant::needs_deinit[*(int*)pVVar29] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 *(undefined4*)pVVar29 = 0;
                                 *(undefined4*)pVVar29 = local_148._0_4_;
                                 *(undefined8*)( pVVar29 + 8 ) = local_148._8_8_;
                                 *(undefined8*)( pVVar29 + 0x10 ) = auStack_138._0_8_;
                              }

                              iVar23 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar47 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar42 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar43 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar44 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              Variant::Variant((Variant*)local_168, pVVar29);
                              iVar24 = *(int*)( lVar36 + 0x30 );
                              local_198 = (Object*)0x0;
                              Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                              StringName::StringName((StringName*)&local_1a8, "_bezier_track_insert_key_at_anim", false);
                              local_178 = CONCAT44(fVar43, fVar44);
                              local_170 = CONCAT44(fVar47, fVar42);
                              Variant::Variant((Variant*)&local_108, local_198);
                              Variant::Variant((Variant*)local_f0, iVar24);
                              Variant::Variant((Variant*)&local_d8, (float)( (double)fVar46 + dVar48 ));
                              Variant::Variant(local_c0, (Variant*)local_168);
                              Variant::Variant(local_a8, (Vector2*)&local_178);
                              Variant::Variant(local_90, (Vector2*)&local_170);
                              Variant::Variant(local_78, iVar23);
                              local_148._8_8_ = (Variant*)local_f0;
                              local_148._0_8_ = (Variant*)&local_108;
                              auStack_138._8_8_ = local_c0;
                              auStack_138._0_8_ = (Variant*)&local_d8;
                              local_60 = 0;
                              local_58 = (undefined1[16])0x0;
                              local_128._8_8_ = local_90;
                              local_128._0_8_ = local_a8;
                              local_118 = local_78;
                              EditorUndoRedoManager::add_do_methodp((Object*)pEVar28, (StringName*)this, (Variant**)&local_1a8, iVar21);
                              pVVar29 = (Variant*)local_48;
                              do {
                                 pVVar2 = pVVar29 + -0x18;
                                 pVVar29 = pVVar29 + -0x18;
                                 if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar29 != (Variant*)&local_108 );
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              Ref<Animation>::unref((Ref<Animation>*)&local_198);
                              if (Variant::needs_deinit[(int)local_168[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              Array::~Array((Array*)&local_1b0);
                              lVar36 = *(long*)( lVar36 + 0x28 );
                           }
 while ( lVar36 != 0 );
                           lVar36 = *(long*)( this + 0xba0 );
                           if (lVar36 == 0) goto LAB_0010f9a3;
                           lVar31 = *(long*)( this + 0xba8 );
                        }

                        lVar33 = *(long*)( lVar36 + 0x10 );
                        if (*(long*)( lVar36 + 0x10 ) != lVar31) {
                           do {
                              lVar36 = lVar33;
                              lVar33 = *(long*)( lVar36 + 8 );
                           }
 while ( lVar31 != *(long*)( lVar36 + 8 ) );
                           do {
                              dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                              iVar21 = *(int*)( lVar36 + 0x30 );
                              fVar46 = *(float*)( this + 0xae4 );
                              StringName::StringName((StringName*)&local_198, "track_remove_key_at_time", false);
                              EditorUndoRedoManager::add_undo_method<int,float>(pEVar28, *(Object**)( this + 0x9e8 ), (StringName*)&local_198, iVar21, (float)( (double)fVar46 + dVar48 ));
                              if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              lVar36 = *(long*)( lVar36 + 0x28 );
                           }
 while ( lVar36 != 0 );
                           lVar36 = *(long*)( this + 0xba0 );
                           if (lVar36 == 0) goto LAB_0010f9a3;
                           lVar31 = *(long*)( this + 0xba8 );
                        }

                        lVar33 = *(long*)( lVar36 + 0x10 );
                        if (*(long*)( lVar36 + 0x10 ) != lVar31) {
                           do {
                              lVar36 = lVar33;
                              lVar33 = *(long*)( lVar36 + 8 );
                           }
 while ( lVar31 != *(long*)( lVar36 + 8 ) );
                           local_1f8._8_8_ = local_90;
                           local_1f8._0_8_ = local_a8;
                           do {
                              dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                              Animation::track_get_key_value((int)local_148, (int)*(undefined8*)( this + 0x9e8 ));
                              Variant::operator_cast_to_Array((Variant*)&local_1b0);
                              if (Variant::needs_deinit[(int)local_148._0_4_] != '\0') {
                                 Variant::_clear_internal();
                              }

                              iVar24 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar46 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar47 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar42 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar43 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              Variant::Variant((Variant*)local_168, pVVar29);
                              iVar21 = *(int*)( lVar36 + 0x30 );
                              local_198 = (Object*)0x0;
                              Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                              StringName::StringName((StringName*)&local_1a8, "_bezier_track_insert_key_at_anim", false);
                              local_178 = CONCAT44(fVar42, fVar43);
                              local_170 = CONCAT44(fVar46, fVar47);
                              Variant::Variant((Variant*)&local_108, local_198);
                              Variant::Variant((Variant*)local_f0, iVar21);
                              Variant::Variant((Variant*)&local_d8, (float)dVar48);
                              Variant::Variant(local_c0, (Variant*)local_168);
                              Variant::Variant(local_a8, (Vector2*)&local_178);
                              Variant::Variant(local_90, (Vector2*)&local_170);
                              Variant::Variant(local_78, iVar24);
                              local_148._8_8_ = (Variant*)local_f0;
                              local_148._0_8_ = (Variant*)&local_108;
                              auStack_138._8_8_ = local_c0;
                              auStack_138._0_8_ = (Variant*)&local_d8;
                              local_60 = 0;
                              local_58 = (undefined1[16])0x0;
                              local_128 = local_1f8._0_16_;
                              local_118 = local_78;
                              EditorUndoRedoManager::add_undo_methodp((Object*)pEVar28, (StringName*)this, (Variant**)&local_1a8, (int)local_148);
                              pVVar29 = (Variant*)local_48;
                              do {
                                 pVVar2 = pVVar29 + -0x18;
                                 pVVar29 = pVVar29 + -0x18;
                                 if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar29 != (Variant*)&local_108 );
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              Ref<Animation>::unref((Ref<Animation>*)&local_198);
                              if (Variant::needs_deinit[(int)local_168[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              Array::~Array((Array*)&local_1b0);
                              lVar36 = *(long*)( lVar36 + 0x28 );
                           }
 while ( lVar36 != 0 );
                        }

                     }
 else {
                        do {
                           lVar36 = lVar33;
                           lVar33 = *(long*)( lVar36 + 8 );
                        }
 while ( lVar31 != *(long*)( lVar36 + 8 ) );
                        do {
                           iVar21 = *(int*)( lVar36 + 0x34 );
                           iVar24 = *(int*)( lVar36 + 0x30 );
                           StringName::StringName((StringName*)&local_198, "track_remove_key", false);
                           EditorUndoRedoManager::add_do_method<int,int>(pEVar28, *(Object**)( this + 0x9e8 ), (StringName*)&local_198, iVar24, iVar21);
                           if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           lVar36 = *(long*)( lVar36 + 0x28 );
                        }
 while ( lVar36 != 0 );
                        lVar36 = *(long*)( this + 0xba0 );
                        if (lVar36 == 0) goto LAB_0011165e;
                        lVar31 = *(long*)( this + 0xba8 );
                        lVar33 = *(long*)( lVar36 + 0x10 );
                        if (*(long*)( lVar36 + 0x10 ) == lVar31) goto LAB_00111078;
                        do {
                           lVar36 = lVar33;
                           lVar33 = *(long*)( lVar36 + 8 );
                        }
 while ( lVar31 != *(long*)( lVar36 + 8 ) );
                        pauVar30 = (undefined1(*) [16])0x0;
                        do {
                           dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                           fVar46 = *(float*)( this + 0xae4 );
                           dVar49 = (double)(float)( (double)fVar46 + dVar48 );
                           iVar21 = Animation::track_find_key(dVar49, *(undefined8*)( this + 0x9e8 ), *(undefined4*)( lVar36 + 0x30 ), 1, 0, 0);
                           if (iVar21 != -1) {
                              iVar21 = *(int*)( lVar36 + 0x30 );
                              cVar15 = RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::has(*(Pair**)( this + 0xba0 ));
                              if (cVar15 == '\0') {
                                 StringName::StringName((StringName*)&local_198, "track_remove_key_at_time", false);
                                 EditorUndoRedoManager::add_do_method<int,float>(pEVar28, *(Object**)( this + 0x9e8 ), (StringName*)&local_198, iVar21, (float)( (double)fVar46 + dVar48 ));
                                 if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                                    StringName::unref();
                                 }

                                 local_108 = local_108 & 0xffffffff00000000;
                                 local_f0 = (undefined1[16])0x0;
                                 local_100 = 0.0;
                                 local_f8 = 0.0;
                                 local_e0 = 0;
                                 Animation::track_get_key_value((int)local_148, (int)*(undefined8*)( this + 0x9e8 ));
                                 if (Variant::needs_deinit[(int)local_f8] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 local_f8 = (float)local_148._0_4_;
                                 local_f0._8_8_ = auStack_138._0_8_;
                                 local_f0._0_8_ = local_148._8_8_;
                                 local_108 = CONCAT44(local_108._4_4_, *(undefined4*)( lVar36 + 0x30 ));
                                 local_100 = dVar49;
                                 if (local_1b8 == (undefined1(*) [16])0x0) {
                                    local_1b8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                                    *(undefined4*)local_1b8[1] = 0;
                                    *local_1b8 = (undefined1[16])0x0;
                                 }

                                 pauVar3 = local_1b8;
                                 puVar27 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                                 *(undefined1(*) [16])( puVar27 + 6 ) = (undefined1[16])0x0;
                                 *puVar27 = 0;
                                 *(undefined8*)( puVar27 + 2 ) = 0;
                                 *puVar27 = (int)local_108;
                                 *(undefined1(*) [16])( puVar27 + 0xc ) = (undefined1[16])0x0;
                                 puVar27[4] = 0;
                                 puVar27[10] = 0;
                                 *(undefined8*)( puVar27 + 0x10 ) = 0;
                                 *(double*)( puVar27 + 2 ) = local_100;
                                 Variant::operator =((Variant*)( puVar27 + 4 ), (Variant*)&local_f8);
                                 *(undefined8*)( puVar27 + 0xe ) = *(undefined8*)( *pauVar3 + 8 );
                                 *(undefined8*)( puVar27 + 0xc ) = 0;
                                 lVar31 = *(long*)( *pauVar3 + 8 );
                                 *(undefined1(**) [16])( puVar27 + 0x10 ) = pauVar3;
                                 puVar27[10] = local_e0;
                                 if (lVar31 != 0) {
                                    *(undefined4**)( lVar31 + 0x30 ) = puVar27;
                                 }

                                 lVar31 = *(long*)*pauVar3;
                                 *(undefined4**)( *pauVar3 + 8 ) = puVar27;
                                 if (lVar31 == 0) {
                                    *(undefined4**)*pauVar3 = puVar27;
                                 }

                                 *(int*)pauVar3[1] = *(int*)pauVar3[1] + 1;
                                 uVar20 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + 0x30 ));
                                 if (pauVar30 == (undefined1(*) [16])0x0) {
                                    pauVar30 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                                    *(undefined4*)pauVar30[1] = 0;
                                    *pauVar30 = (undefined1[16])0x0;
                                 }

                                 puVar27 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
                                 lVar31 = *(long*)( *pauVar30 + 8 );
                                 *(undefined8*)( puVar27 + 2 ) = 0;
                                 *puVar27 = uVar20;
                                 *(long*)( puVar27 + 4 ) = lVar31;
                                 *(undefined1(**) [16])( puVar27 + 6 ) = pauVar30;
                                 if (lVar31 != 0) {
                                    *(undefined4**)( lVar31 + 8 ) = puVar27;
                                 }

                                 lVar31 = *(long*)*pauVar30;
                                 *(undefined4**)( *pauVar30 + 8 ) = puVar27;
                                 if (lVar31 == 0) {
                                    *(undefined4**)*pauVar30 = puVar27;
                                 }

                                 *(int*)pauVar30[1] = *(int*)pauVar30[1] + 1;
                                 if (Variant::needs_deinit[(int)local_f8] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }

                           }

                           lVar36 = *(long*)( lVar36 + 0x28 );
                        }
 while ( lVar36 != 0 );
                        lVar36 = *(long*)( this + 0xba0 );
                        if (lVar36 != 0) {
                           lVar31 = *(long*)( this + 0xba8 );
                           goto LAB_0010f007;
                        }

                     }

                     LAB_0010f9a3:if (local_1b8 != (undefined1(*) [16])0x0) {
                        piVar34 = *(int**)*local_1b8;
                        if (pauVar30 == (undefined1(*) [16])0x0) goto LAB_0011165e;
                        local_228 = *(int**)*pauVar30;
                        if (( local_228 != (int*)0x0 ) && ( piVar34 != (int*)0x0 )) {
                           do {
                              Variant::operator_cast_to_Array((Variant*)&local_1b0);
                              Variant::Variant((Variant*)local_148, (Variant*)( piVar34 + 4 ));
                              iVar21 = *piVar34;
                              pEVar53 = *(EditorUndoRedoManager**)( piVar34 + 2 );
                              StringName::StringName((StringName*)&local_198, "track_insert_key", false);
                              EditorUndoRedoManager::add_undo_method<int,double,Variant,int>(pEVar53, pEVar28, *(undefined8*)( this + 0x9e8 ), (String*)&local_198, iVar21, (Variant*)local_148, 1);
                              if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              if (Variant::needs_deinit[(int)local_148._0_4_] != '\0') {
                                 Variant::_clear_internal();
                              }

                              iVar21 = *local_228;
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar46 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar47 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar42 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              fVar43 = Variant::operator_cast_to_float(pVVar29);
                              pVVar29 = (Variant*)Array::operator [](iVar19);
                              Variant::Variant((Variant*)local_168, pVVar29);
                              dVar48 = *(double*)( piVar34 + 2 );
                              iVar24 = *piVar34;
                              local_198 = (Object*)0x0;
                              Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                              StringName::StringName((StringName*)&local_1a8, "_bezier_track_insert_key_at_anim", false);
                              local_178 = CONCAT44(fVar42, fVar43);
                              local_170 = CONCAT44(fVar46, fVar47);
                              Variant::Variant((Variant*)&local_108, local_198);
                              Variant::Variant((Variant*)local_f0, iVar24);
                              Variant::Variant((Variant*)&local_d8, dVar48);
                              Variant::Variant(local_c0, (Variant*)local_168);
                              Variant::Variant(local_a8, (Vector2*)&local_178);
                              Variant::Variant(local_90, (Vector2*)&local_170);
                              Variant::Variant(local_78, iVar21);
                              local_148._8_8_ = (Variant*)local_f0;
                              local_148._0_8_ = (Variant*)&local_108;
                              local_60 = 0;
                              local_58 = (undefined1[16])0x0;
                              auStack_138._8_8_ = local_c0;
                              auStack_138._0_8_ = (Variant*)&local_d8;
                              local_128._8_8_ = local_90;
                              local_128._0_8_ = local_a8;
                              local_118 = local_78;
                              EditorUndoRedoManager::add_undo_methodp((Object*)pEVar28, (StringName*)this, (Variant**)&local_1a8, (int)(Variant*)local_148);
                              pVVar29 = (Variant*)local_48;
                              do {
                                 pVVar2 = pVVar29 + -0x18;
                                 pVVar29 = pVVar29 + -0x18;
                                 if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar29 != (Variant*)&local_108 );
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              Ref<Animation>::unref((Ref<Animation>*)&local_198);
                              if (Variant::needs_deinit[(int)local_168[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              Array::~Array((Array*)&local_1b0);
                              piVar34 = *(int**)( piVar34 + 0xc );
                              local_228 = *(int**)( local_228 + 2 );
                           }
 while ( ( local_228 != (int*)0x0 ) && ( piVar34 != (int*)0x0 ) );
                        }

                     }

                  }

                  local_198 = (Object*)0x0;
                  Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                  StringName::StringName((StringName*)&local_1a8, "_clear_selection_for_anim", false);
                  EditorUndoRedoManager::add_do_method<Ref<Animation>>(pEVar28, this, (String*)&local_1a8, local_198);
                  if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_198);
                  local_198 = (Object*)0x0;
                  Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                  StringName::StringName((StringName*)&local_1a8, "_clear_selection_for_anim", false);
                  EditorUndoRedoManager::add_undo_method<Ref<Animation>>(pEVar28, this, (String*)&local_1a8, local_198);
                  if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_198);
                  if (*(long*)( this + 0xba0 ) != 0) {
                     lVar36 = *(long*)( *(long*)( this + 0xba0 ) + 0x10 );
                     if (lVar36 != *(long*)( this + 0xba8 )) {
                        do {
                           lVar31 = lVar36;
                           lVar36 = *(long*)( lVar31 + 8 );
                        }
 while ( *(long*)( this + 0xba8 ) != *(long*)( lVar31 + 8 ) );
                        iVar19 = 0;
                        do {
                           Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar31 + 0x30 ));
                           uVar20 = *(undefined4*)( lVar31 + 0x30 );
                           local_198 = (Object*)0x0;
                           Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                           StringName::StringName((StringName*)&local_1a8, "_select_at_anim", false);
                           EditorUndoRedoManager::add_do_method<Ref<Animation>,int,float,bool>(pEVar28, this, (String*)&local_1a8, local_198, uVar20, iVar19 == 0);
                           if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           Ref<Animation>::unref((Ref<Animation>*)&local_198);
                           uVar20 = *(undefined4*)( lVar31 + 0x30 );
                           local_198 = (Object*)0x0;
                           Ref<Animation>::operator =((Ref<Animation>*)&local_198, *(Ref**)( this + 0x9e8 ));
                           StringName::StringName((StringName*)&local_1a8, "_select_at_anim", false);
                           EditorUndoRedoManager::add_undo_method<Ref<Animation>,int,float,bool>(pEVar28, this, (String*)&local_1a8, local_198, uVar20, iVar19 == 0);
                           if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           iVar19 = iVar19 + 1;
                           Ref<Animation>::unref((Ref<Animation>*)&local_198);
                           lVar31 = *(long*)( lVar31 + 0x28 );
                        }
 while ( lVar31 != 0 );
                     }

                  }

                  pOVar25 = AnimationPlayerEditor::singleton;
                  if (AnimationPlayerEditor::singleton != (Object*)0x0) {
                     StringName::StringName((StringName*)&local_198, "_animation_update_key_frame", false);
                     EditorUndoRedoManager::add_do_method<>(pEVar28, pOVar25, (StringName*)&local_198);
                     if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                     StringName::StringName((StringName*)&local_198, "_animation_update_key_frame", false);
                     EditorUndoRedoManager::add_undo_method<>(pEVar28, pOVar25, (StringName*)&local_198);
                     if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                        StringName::unref();
                     }

                  }

                  EditorUndoRedoManager::commit_action(SUB81(pEVar28, 0));
                  if (pauVar30 != (undefined1(*) [16])0x0) {
                     do {
                        while (true) {
                           pvVar9 = *(void**)*pauVar30;
                           if (pvVar9 == (void*)0x0) {
                              if (*(int*)pauVar30[1] != 0) {
                                 _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                                 goto LAB_001101e5;
                              }

                              goto LAB_001101db;
                           }

                           if (*(undefined1(**) [16])( (long)pvVar9 + 0x18 ) != pauVar30) break;
                           lVar36 = *(long*)( (long)pvVar9 + 8 );
                           lVar31 = *(long*)( (long)pvVar9 + 0x10 );
                           *(long*)*pauVar30 = lVar36;
                           if (pvVar9 == *(void**)( *pauVar30 + 8 )) {
                              *(long*)( *pauVar30 + 8 ) = lVar31;
                           }

                           if (lVar31 != 0) {
                              *(long*)( lVar31 + 8 ) = lVar36;
                              lVar36 = *(long*)( (long)pvVar9 + 8 );
                           }

                           if (lVar36 != 0) {
                              *(long*)( lVar36 + 0x10 ) = lVar31;
                           }

                           Memory::free_static(pvVar9, false);
                           pauVar3 = pauVar30 + 1;
                           *(int*)*pauVar3 = *(int*)*pauVar3 + -1;
                           if (*(int*)*pauVar3 == 0) goto LAB_001101db;
                        }
;
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }
 while ( *(int*)pauVar30[1] != 0 );
                     LAB_001101db:Memory::free_static(pauVar30, false);
                  }

                  LAB_001101e5:List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator>::~List((List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator>*)&local_1b8);
               }

               this[0xad8] = (AnimationBezierTrackEdit)0x0;
               this[0xac8] = (AnimationBezierTrackEdit)0x0;
               *(undefined4*)( this + 0xacc ) = 0;
               CanvasItem::queue_redraw();
            }

            goto LAB_0010b92f;
         }

         lVar36 = *(long*)param_1;
         if (lVar36 != 0) goto LAB_0010b94b;
         goto LAB_0010bc40;
      }

      if (*(long*)( this + 0xa20 ) != 0) {
         lVar36 = *(long*)( *(long*)( this + 0xa20 ) + 0x10 );
         if (lVar36 != *(long*)( this + 0xa28 )) {
            do {
               lVar31 = lVar36;
               lVar36 = *(long*)( lVar31 + 0x10 );
            }
 while ( *(long*)( this + 0xa28 ) != *(long*)( lVar31 + 0x10 ) );
            do {
               local_108 = InputEventMouse::get_position();
               cVar15 = Rect2::has_point((Rect2*)( lVar31 + 0x34 ), (Vector2*)&local_108);
               if (cVar15 != '\0') {
                  uVar22 = *(uint*)( lVar31 + 0x30 );
                  cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 ), (int*)(ulong)uVar22, (uint*)&local_198);
                  if (( cVar15 == '\0' ) && ( cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), (int*)(ulong)uVar22, (uint*)&local_198) ),cVar15 == '\0') {
                     AVar17 = this[0x9f0];
                     Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                     this[0x9f0] = AVar17;
                     *(uint*)( this + 0x9f4 ) = uVar22;
                     CanvasItem::queue_redraw();
                     _clear_selection(this);
                  }

                  goto LAB_0010bd46;
               }

               lVar31 = *(long*)( lVar31 + 0x20 );
            }
 while ( lVar31 != 0 );
         }

      }

      if (*(long*)( this + 0xa38 ) != 0) {
         lVar36 = *(long*)( *(long*)( this + 0xa38 ) + 0x10 );
         if (lVar36 != *(long*)( this + 0xa40 )) {
            do {
               lVar31 = lVar36;
               lVar36 = *(long*)( lVar31 + 0x10 );
            }
 while ( *(long*)( this + 0xa40 ) != *(long*)( lVar31 + 0x10 ) );
            do {
               uVar22 = *(uint*)( lVar31 + 0x30 );
               local_198 = (Object*)0x0;
               local_188 = 0;
               local_1b8 = (undefined1(*) [16])CONCAT44(local_1b8._4_4_, uVar22);
               local_190 = &_GlobalNilClass::_nil;
               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_198, (RBMap*)( lVar31 + 0x38 ));
               if (( local_198 != (Object*)0x0 ) && ( puVar14 = *(undefined8**)( local_198 + 0x10 ) * (undefined8**)( local_198 + 0x10 ) != local_190 )) {
                  do {
                     puVar32 = puVar14;
                     puVar14 = (undefined8*)puVar32[2];
                  }
 while ( local_190 != (undefined8*)puVar32[2] );
                  do {
                     local_108 = InputEventMouse::get_position();
                     cVar15 = Rect2::has_point((Rect2*)( (long)puVar32 + 0x34 ), (Vector2*)&local_108);
                     if (cVar15 != '\0') {
                        iVar19 = *(int*)( puVar32 + 6 );
                        if (iVar19 == 0) {
                           if (this[0x9f0] == (AnimationBezierTrackEdit)0x0) {
                              pEVar28 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
                              uVar50 = *(undefined8*)( this + 0x9e8 );
                              local_1a8 = (Object*)0x0;
                              String::parse_latin1((String*)&local_1a8, "Remove Bezier Track");
                              EditorUndoRedoManager::create_action(pEVar28, (String*)&local_1a8, 0, uVar50, 0);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
                              StringName::StringName((StringName*)&local_1a8, "_update_locked_tracks_after", false);
                              EditorUndoRedoManager::add_do_method<int>(pEVar28, (Object*)this, (StringName*)&local_1a8, uVar22);
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              StringName::StringName((StringName*)&local_1a8, "_update_hidden_tracks_after", false);
                              EditorUndoRedoManager::add_do_method<int>(pEVar28, (Object*)this, (StringName*)&local_1a8, uVar22);
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              StringName::StringName((StringName*)&local_1a8, "remove_track", false);
                              EditorUndoRedoManager::add_do_method<int>(pEVar28, *(Object**)( this + 0x9e8 ), (StringName*)&local_1a8, uVar22);
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              StringName::StringName((StringName*)&local_1a8, "add_track", false);
                              pSVar8 = *(StringName**)( this + 0x9e8 );
                              Variant::Variant((Variant*)&local_108, '\x06');
                              Variant::Variant((Variant*)local_f0, uVar22);
                              local_d0 = (undefined1[16])0x0;
                              local_d8 = 0;
                              local_148._8_8_ = (Variant*)local_f0;
                              local_148._0_8_ = (Vector2*)&local_108;
                              iVar19 = (int)local_148;
                              EditorUndoRedoManager::add_undo_methodp((Object*)pEVar28, pSVar8, (Variant**)&local_1a8, iVar19);
                              pVVar29 = local_c0;
                              do {
                                 pVVar41 = (Vector2*)pVVar29 + -0x18;
                                 pVVar29 = (Variant*)( (Vector2*)pVVar29 + -0x18 );
                                 if (Variant::needs_deinit[*(int*)pVVar41] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar29 != (Variant*)&local_108 );
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              Animation::track_get_path((int)(NodePath*)&local_1b0);
                              StringName::StringName((StringName*)&local_1a8, "track_set_path", false);
                              pSVar8 = *(StringName**)( this + 0x9e8 );
                              Variant::Variant((Variant*)&local_108, uVar22);
                              Variant::Variant((Variant*)local_f0, (NodePath*)&local_1b0);
                              local_d0 = (undefined1[16])0x0;
                              local_d8 = 0;
                              EditorUndoRedoManager::add_undo_methodp((Object*)pEVar28, pSVar8, (Variant**)&local_1a8, iVar19);
                              pVVar29 = local_c0;
                              do {
                                 pVVar41 = (Vector2*)pVVar29 + -0x18;
                                 pVVar29 = (Variant*)( (Vector2*)pVVar29 + -0x18 );
                                 if (Variant::needs_deinit[*(int*)pVVar41] != '\0') {
                                    Variant::_clear_internal();
                                 }

                              }
 while ( pVVar29 != (Variant*)&local_108 );
                              if (( StringName::configured != '\0' ) && ( local_1a8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              NodePath::~NodePath((NodePath*)&local_1b0);
                              for (iVar21 = 0; iVar24 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 )),iVar21 < iVar24; iVar21 = iVar21 + 1) {
                                 iVar24 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), uVar22);
                                 uVar50 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), uVar22);
                                 uVar52 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), uVar22);
                                 fVar46 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), uVar22);
                                 dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), uVar22);
                                 local_1a8 = (Object*)0x0;
                                 Ref<Animation>::operator =((Ref<Animation>*)&local_1a8, *(Ref**)( this + 0x9e8 ));
                                 StringName::StringName((StringName*)&local_1b0, "_bezier_track_insert_key_at_anim", false);
                                 local_170 = uVar52;
                                 local_168[0] = uVar50;
                                 Variant::Variant((Variant*)&local_108, local_1a8);
                                 Variant::Variant((Variant*)local_f0, uVar22);
                                 Variant::Variant((Variant*)&local_d8, dVar48);
                                 Variant::Variant(local_c0, fVar46);
                                 Variant::Variant(local_a8, (Vector2*)&local_170);
                                 Variant::Variant(local_90, (Vector2*)local_168);
                                 Variant::Variant(local_78, iVar24);
                                 local_60 = 0;
                                 pVVar41 = local_48;
                                 local_58 = (undefined1[16])0x0;
                                 auStack_138._8_8_ = local_c0;
                                 auStack_138._0_8_ = (Variant*)&local_d8;
                                 local_128._8_8_ = local_90;
                                 local_128._0_8_ = local_a8;
                                 local_118 = local_78;
                                 EditorUndoRedoManager::add_undo_methodp((Object*)pEVar28, (StringName*)this, (Variant**)&local_1b0, iVar19);
                                 do {
                                    pVVar1 = pVVar41 + -0x18;
                                    pVVar41 = pVVar41 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar41 != (Vector2*)&local_108 );
                                 if (( StringName::configured != '\0' ) && ( local_1b0 != 0 )) {
                                    StringName::unref();
                                 }

                                 Ref<Animation>::unref((Ref<Animation>*)&local_1a8);
                              }

                              EditorUndoRedoManager::commit_action(SUB81(pEVar28, 0));
                              iVar24 = Animation::get_track_count();
                              iVar19 = *(int*)( this + 0x9f4 );
                              iVar21 = iVar24 + -1;
                              if (iVar19 < iVar24 + -1) {
                                 iVar21 = iVar19;
                              }

                              iVar24 = 0;
                              if (-1 < iVar19) {
                                 iVar24 = iVar21;
                              }

                              *(int*)( this + 0x9f4 ) = iVar24;
                           }

                           goto LAB_0010dfed;
                        }

                        if (iVar19 == 1) {
                           pHVar4 = (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 );
                           cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar22, (uint*)&local_1a8);
                           if (cVar15 != '\0') {
                              HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase(pHVar4, (int*)&local_1b8);
                              goto LAB_001103d6;
                           }

                           HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)&local_1a8);
                           if (uVar22 != *(uint*)( this + 0x9f4 )) goto LAB_001103d6;
                           uVar22 = 0;
                           goto LAB_00110aac;
                        }

                        if (iVar19 == 3) {
                           pHVar4 = (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 );
                           cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar22, (uint*)&local_1a8);
                           if (cVar15 != '\0') {
                              HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase(pHVar4, (int*)&local_1b8);
                              goto LAB_0011055e;
                           }

                           HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)&local_1a8);
                           if (uVar22 != *(uint*)( this + 0x9f4 )) goto LAB_0011055e;
                           piVar34 = (int*)0x0;
                           goto LAB_00110c43;
                        }

                        if (iVar19 != 2) goto LAB_0010dfed;
                        if (uVar22 == *(uint*)( this + 0xaa0 )) {
                           *(undefined4*)( this + 0xaa0 ) = 0xffffffff;
                           HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ));
                        }
 else {
                           pHVar4 = (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 );
                           cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar22, (uint*)&local_1a8);
                           if (cVar15 != '\0') {
                              HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase(pHVar4, (int*)&local_1b8);
                           }

                           uVar38 = 0;
                           while (true) {
                              local_1b0 = CONCAT44(local_1b0._4_4_, uVar38);
                              iVar19 = Animation::get_track_count();
                              if (iVar19 <= (int)uVar38) break;
                              cVar15 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 ));
                              if (( ( cVar15 == '\x06' ) && ( uVar22 != uVar38 ) ) && ( cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar38, (uint*)&local_1a8) ),cVar15 == '\0') {
                                 HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)&local_1a8);
                              }

                              uVar38 = uVar38 + 1;
                           }
;
                           AVar17 = this[0x9f0];
                           Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
                           this[0x9f0] = AVar17;
                           *(uint*)( this + 0x9f4 ) = uVar22;
                           CanvasItem::queue_redraw();
                           *(uint*)( this + 0xaa0 ) = uVar22;
                        }

                        goto LAB_001103d6;
                     }

                     puVar32 = (undefined8*)puVar32[4];
                  }
 while ( puVar32 != (undefined8*)0x0 );
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_198);
               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_Data::_free_root((_Data*)&local_198);
               lVar31 = *(long*)( lVar31 + 0x20 );
            }
 while ( lVar31 != 0 );
         }

      }

      cVar15 = InputEventWithModifiers::is_command_or_control_pressed();
      if (cVar15 != '\0') {
         LAB_0010e03c:lVar36 = *(long*)( this + 0xb98 );
         if (lVar36 != 0) {
            lVar33 = 0;
            lVar31 = 0;
            do {
               if (*(long*)( lVar36 + -8 ) <= lVar31) break;
               if (this[0x9f0] == (AnimationBezierTrackEdit)0x0) {
                  local_108 = InputEventMouse::get_position();
                  cVar15 = Rect2::has_point((Rect2*)( lVar36 + 0x10 + lVar33 ), (Vector2*)&local_108);
                  if (cVar15 == '\0') {
                     lVar36 = *(long*)( this + 0xb98 );
                     if (lVar36 == 0) goto LAB_0010e32a;
                     lVar35 = *(long*)( lVar36 + -8 );
                     if (lVar35 <= lVar31) goto LAB_0010d5c5;
                     local_108 = InputEventMouse::get_position();
                     cVar15 = Rect2::has_point((Rect2*)( lVar36 + 0x20 + lVar33 ), (Vector2*)&local_108);
                     if (cVar15 == '\0') {
                        lVar36 = *(long*)( this + 0xb98 );
                        goto LAB_0010e068;
                     }

                     lVar36 = *(long*)( this + 0xb98 );
                     *(undefined4*)( this + 0xb00 ) = 1;
                  }
 else {
                     lVar36 = *(long*)( this + 0xb98 );
                     *(undefined4*)( this + 0xb00 ) = 0xffffffff;
                  }

                  if (lVar36 == 0) goto LAB_0010e32a;
                  lVar35 = *(long*)( lVar36 + -8 );
                  if (lVar35 <= lVar31) goto LAB_0010d5c5;
                  *(undefined4*)( this + 0xb04 ) = *(undefined4*)( lVar36 + lVar33 + 0x34 );
                  iVar19 = *(int*)( lVar36 + lVar33 + 0x30 );
                  *(int*)( this + 0xb08 ) = iVar19;
                  uVar50 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), iVar19);
                  lVar36 = *(long*)( this + 0xb98 );
                  *(undefined8*)( this + 0xb0c ) = uVar50;
                  if (lVar36 == 0) goto LAB_0010e32a;
                  lVar35 = *(long*)( lVar36 + -8 );
                  if (lVar35 <= lVar31) goto LAB_0010d5c5;
                  uVar50 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), *(int*)( lVar36 + lVar33 + 0x30 ));
                  *(undefined8*)( this + 0xb14 ) = uVar50;
                  CanvasItem::queue_redraw();
                  goto LAB_0010bd46;
               }

               LAB_0010e068:lVar31 = lVar31 + 1;
               lVar33 = lVar33 + 0x38;
            }
 while ( lVar36 != 0 );
         }

         fVar46 = (float)InputEventMouse::get_position();
         fVar47 = (float)local_2b8;
         if (fVar47 <= fVar46) {
            fVar46 = (float)InputEventMouse::get_position();
            fVar42 = (float)Control::get_size();
            if (( fVar46 < fVar42 ) && ( cVar15 = InputEventWithModifiers::is_command_or_control_pressed() ),cVar15 != '\0') {
               Control::get_size();
               dVar48 = (double)extraout_XMM0_Db_04 * __LC21;
               InputEventMouse::get_position();
               Animation::make_default_bezier_key((float)( ( dVar48 - (double)extraout_XMM0_Db_05 ) * (double)*(float*)( this + 0xab4 ) + (double)*(float*)( this + 0xab0 ) ));
               fVar46 = (float)InputEventMouse::get_position();
               fVar42 = (float)AnimationTimelineEdit::get_zoom_scale();
               dVar48 = (double)Range::get_value();
               dVar48 = dVar48 + (double)( ( fVar46 - fVar47 ) / fVar42 );
               while (true) {
                  pEVar28 = (EditorUndoRedoManager*)(float)dVar48;
                  dVar48 = (double)(float)pEVar28;
                  iVar19 = Animation::track_find_key(dVar48, *(undefined8*)( this + 0x9e8 ), *(undefined4*)( this + 0x9f4 ), 1, 0, 0);
                  if (iVar19 == -1) break;
                  dVar48 = _LC179 + dVar48;
               }
;
               pEVar53 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
               local_1a8 = (Object*)0x0;
               String::parse_latin1((String*)&local_1a8, "");
               local_1b0 = 0;
               String::parse_latin1((String*)&local_1b0, "Add Bezier Point");
               TTR((String*)&local_198, (String*)&local_1b0);
               EditorUndoRedoManager::create_action(pEVar53, (String*)&local_198, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
               iVar19 = (int)(Array*)&local_1b8;
               pVVar29 = (Variant*)Array::operator [](iVar19);
               fVar46 = Variant::operator_cast_to_float(pVVar29);
               pVVar29 = (Variant*)Array::operator [](iVar19);
               fVar47 = Variant::operator_cast_to_float(pVVar29);
               pVVar29 = (Variant*)Array::operator [](iVar19);
               fVar42 = Variant::operator_cast_to_float(pVVar29);
               pVVar29 = (Variant*)Array::operator [](iVar19);
               fVar43 = Variant::operator_cast_to_float(pVVar29);
               pVVar29 = (Variant*)Array::operator [](iVar19);
               Variant::Variant((Variant*)&local_108, pVVar29);
               uVar20 = *(undefined4*)( this + 0x9f4 );
               StringName::StringName((StringName*)&local_198, "bezier_track_insert_key", false);
               EditorUndoRedoManager::add_do_method<int,float,Variant,Vector2,Vector2>(pEVar28, CONCAT44(fVar42, fVar43), CONCAT44(fVar46, fVar47), pEVar53, *(undefined8*)( this + 0x9e8 ), (String*)&local_198, uVar20, (Variant*)&local_108);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[(int)local_108] != '\0') {
                  Variant::_clear_internal();
               }

               iVar19 = *(int*)( this + 0x9f4 );
               StringName::StringName((StringName*)&local_198, "track_remove_key_at_time", false);
               EditorUndoRedoManager::add_undo_method<int,float>(pEVar53, *(Object**)( this + 0x9e8 ), (StringName*)&local_198, iVar19, (float)pEVar28);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

               EditorUndoRedoManager::commit_action(SUB81(pEVar53, 0));
               iVar19 = Animation::track_find_key(dVar48, *(undefined8*)( this + 0x9e8 ), *(undefined4*)( this + 0x9f4 ), 1, 0, 0);
               if (iVar19 == -1) {
                  _err_print_error("gui_input", "editor/animation_bezier_editor.cpp", 0x4df, "Condition \"index == -1\" is true.", 0, 0);
               }
 else {
                  _clear_selection(this);
                  dVar48 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0x9f4 ));
                  _select_at_anim(this, (Ref*)( this + 0x9e8 ), *(int*)( this + 0x9f4 ), (float)dVar48, true);
                  this[0xac8] = (AnimationBezierTrackEdit)0x1;
                  this[0xad8] = (AnimationBezierTrackEdit)0x0;
                  uVar20 = InputEventMouse::get_position();
                  *(undefined4*)( this + 0xacc ) = uVar20;
                  *(undefined8*)( this + 0xae4 ) = 0;
                  *(undefined8*)( this + 0xad0 ) = 0xffffffffffffffff;
                  *(ulong*)( this + 0xadc ) = CONCAT44(*(undefined4*)( this + 0x9f4 ), iVar19);
                  CanvasItem::queue_redraw();
               }

               Array::~Array((Array*)&local_1b8);
               goto LAB_0010bd46;
            }

         }

         fVar46 = (float)InputEventMouse::get_position();
         if (fVar47 <= fVar46) {
            fVar46 = (float)InputEventMouse::get_position();
            fVar47 = (float)Control::get_size();
            if (fVar46 < fVar47) {
               *(undefined2*)( this + 0xaec ) = 1;
               this[0xaee] = (AnimationBezierTrackEdit)0x0;
               uVar50 = InputEventMouse::get_position();
               *(undefined8*)( this + 0xaf0 ) = uVar50;
               goto LAB_0010bd46;
            }

         }

         goto LAB_0010b8f5;
      }

      bVar18 = (bool)InputEventWithModifiers::is_shift_pressed();
      local_108 = InputEventMouse::get_position();
      cVar15 = _try_select_at_ui_pos(this, (Vector2*)&local_108, bVar18, true);
      if (cVar15 == '\0') goto LAB_0010e03c;
      goto LAB_0010bd46;
   }

   LAB_0010c2ac:local_2b8 = AnimationTimelineEdit::get_name_limit();
   local_2d0 = (Object*)0x0;
   LAB_0010b92f:lVar36 = *(long*)param_1;
   if (lVar36 == 0) {
      LAB_0010bc40:if (( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0 ) && ( local_2d0 != (Object*)0x0 )) {
         pOVar25 = (Object*)0x0;
         cVar15 = InputEvent::is_pressed();
         if (cVar15 == '\0') goto LAB_0010bc72;
      }

   }
 else {
      LAB_0010b94b:pOVar25 = (Object*)__dynamic_cast(lVar36, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
      if (( pOVar25 == (Object*)0x0 ) || ( cVar15 = cVar15 == '\0' )) goto LAB_0010bc40;
      if (this[0xac8] == (AnimationBezierTrackEdit)0x0) {
         if (this[0xaec] != (AnimationBezierTrackEdit)0x0) goto LAB_0010bf0a;
         LAB_0010b994:if (( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0) goto LAB_0010bf41;
      }
 else {
         if (this[0xad8] == (AnimationBezierTrackEdit)0x0) {
            this[0xad8] = (AnimationBezierTrackEdit)0x1;
            *(undefined8*)( this + 0xad0 ) = 0xffffffffffffffff;
         }

         if (this[0x9f0] == (AnimationBezierTrackEdit)0x0) {
            Control::get_size();
            dVar48 = (double)extraout_XMM0_Db_01 * __LC21;
            InputEventMouse::get_position();
            fVar46 = *(float*)( this + 0xab4 );
            fVar47 = *(float*)( this + 0xab0 );
            fVar42 = *(float*)( this + 0xacc );
            fVar43 = (float)AnimationTimelineEdit::get_zoom_scale();
            dVar49 = (double)Range::get_value();
            fVar44 = (float)InputEventMouse::get_position();
            fVar45 = (float)AnimationTimelineEdit::get_zoom_scale();
            dVar54 = (double)Range::get_value();
            dVar51 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xae0 ));
            fVar43 = (float)( dVar54 + (double)( ( fVar44 - (float)local_2b8 ) / fVar45 ) ) - (float)( dVar49 + (double)( ( fVar42 - (float)local_2b8 ) / fVar43 ) );
            fVar44 = (float)dVar51;
            fVar42 = (float)AnimationTrackEditor::snap_time(fVar44 + fVar43, SUB81(*(undefined8*)( this + 0xb88 ), 0));
            if (_LC36 < (double)(float)( *(uint*)( this + 0xae4 ) & _LC54 )) {
               LAB_0010d130:fVar42 = fVar42 - fVar44;
            }
 else {
               if (fVar42 <= fVar44) {
                  if (( fVar42 < fVar44 ) && ( (double)fVar43 < _LC187 )) goto LAB_0010d130;
               }
 else if (_LC36 < (double)fVar43) goto LAB_0010d130;
               fVar42 = 0.0;
            }

            fVar43 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xae0 ));
            *(ulong*)( this + 0xae4 ) = CONCAT44((float)( ( dVar48 - (double)extraout_XMM0_Db_02 ) * (double)fVar46 + (double)fVar47 ) - fVar43, fVar42);
         }

         if (( *(long*)( this + 0xb28 ) != 0 ) && ( *(int*)( this + 0xb4c ) != 0 )) {
            lVar36 = 0;
            uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb48 ) * 4 );
            if (uVar22 != 0) {
               do {
                  if (*(int*)( *(long*)( this + 0xb30 ) + lVar36 ) != 0) {
                     *(int*)( *(long*)( this + 0xb30 ) + lVar36 ) = 0;
                     Memory::free_static(*(void**)( *(long*)( this + 0xb28 ) + lVar36 * 2 ), false);
                     *(undefined8*)( *(long*)( this + 0xb28 ) + lVar36 * 2 ) = 0;
                  }

                  lVar36 = lVar36 + 4;
               }
 while ( lVar36 != (ulong)uVar22 << 2 );
            }

            *(undefined4*)( this + 0xb4c ) = 0;
            *(undefined1(*) [16])( this + 0xb38 ) = (undefined1[16])0x0;
         }

         if (( *(long*)( this + 0xb58 ) != 0 ) && ( *(int*)( this + 0xb7c ) != 0 )) {
            lVar36 = 0;
            uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb78 ) * 4 );
            if (uVar22 != 0) {
               do {
                  if (*(int*)( *(long*)( this + 0xb60 ) + lVar36 ) != 0) {
                     *(int*)( *(long*)( this + 0xb60 ) + lVar36 ) = 0;
                     Memory::free_static(*(void**)( *(long*)( this + 0xb58 ) + lVar36 * 2 ), false);
                     *(undefined8*)( *(long*)( this + 0xb58 ) + lVar36 * 2 ) = 0;
                  }

                  lVar36 = lVar36 + 4;
               }
 while ( lVar36 != (ulong)uVar22 << 2 );
            }

            *(undefined4*)( this + 0xb7c ) = 0;
            *(undefined1(*) [16])( this + 0xb68 ) = (undefined1[16])0x0;
         }

         CanvasItem::queue_redraw();
         if (this[0xaec] == (AnimationBezierTrackEdit)0x0) goto LAB_0010b994;
         LAB_0010bf0a:if (this[0xaed] == (AnimationBezierTrackEdit)0x0) {
            this[0xaed] = (AnimationBezierTrackEdit)0x1;
            AVar17 = (AnimationBezierTrackEdit)InputEventWithModifiers::is_shift_pressed();
            this[0xaee] = AVar17;
         }

         uVar50 = InputEventMouse::get_position();
         *(undefined8*)( this + 0xaf8 ) = uVar50;
         CanvasItem::queue_redraw();
         if (( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) != 0) goto LAB_0010b9a6;
         LAB_0010bf41:Control::get_size();
         dVar54 = (double)extraout_XMM0_Db * __LC21;
         InputEventMouse::get_position();
         uVar50 = *(undefined8*)( this + 0xb88 );
         fVar47 = *(float*)( this + 0xab0 );
         fVar46 = *(float*)( this + 0xab4 );
         fVar42 = (float)InputEventMouse::get_position();
         iVar19 = AnimationTimelineEdit::get_name_limit();
         fVar43 = (float)AnimationTimelineEdit::get_zoom_scale();
         fVar42 = (float)AnimationTrackEditor::snap_time(( fVar42 - (float)iVar19 ) / fVar43, SUB81(uVar50, 0));
         dVar48 = (double)Range::get_value();
         fVar43 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0x9f4 ));
         dVar49 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0x9f4 ));
         uVar52 = CONCAT44((float)( ( dVar54 - (double)extraout_XMM0_Db_00 ) * (double)fVar46 + (double)fVar47 ) - fVar43, (float)( dVar48 + (double)fVar42 ) - (float)dVar49);
         uVar50 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
         *(undefined8*)( this + 0xb0c ) = uVar50;
         uVar50 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
         *(undefined8*)( this + 0xb14 ) = uVar50;
         if (*(int*)( this + 0xb00 ) == -1) {
            *(undefined8*)( this + 0xb0c ) = uVar52;
            iVar19 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
            if (iVar19 == 2) {
               fVar46 = (float)AnimationTimelineEdit::get_zoom_scale();
               local_148._8_8_ = 0x3f80000000000000;
               local_148._0_8_ = 0x3f800000;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = auStack_138._8_8_;
               auStack_138 = auVar11 << 0x40;
               local_108 = CONCAT44(_LC19 / ( fVar46 * *(float*)( this + 0xab4 ) ), _LC19);
               Transform2D::set_scale((Vector2*)local_148);
               fVar46 = (float)*(undefined8*)( this + 0xb14 );
               fVar47 = (float)( ( ulong ) * (undefined8*)( this + 0xb14 ) >> 0x20 );
               local_170 = CONCAT44(fVar47 * local_148._12_4_ + fVar46 * local_148._4_4_ + auStack_138._4_4_, fVar47 * local_148._8_4_ + fVar46 * local_148._0_4_ + auStack_138._0_4_);
               fVar46 = (float)*(undefined8*)( this + 0xb0c );
               fVar47 = (float)( ( ulong ) * (undefined8*)( this + 0xb0c ) >> 0x20 );
               local_168[0] = CONCAT44(fVar47 * local_148._12_4_ + fVar46 * local_148._4_4_ + auStack_138._4_4_, fVar47 * local_148._8_4_ + fVar46 * local_148._0_4_ + auStack_138._0_4_);
               Transform2D::affine_inverse();
               fVar46 = (float)Vector2::length();
               uVar50 = Vector2::normalized();
               fVar47 = (float)( (uint)uVar50 ^ _LC15 ) * fVar46;
               fVar46 = (float)( ( uint )((ulong)uVar50 >> 0x20) ^ _LC15 ) * fVar46;
               *(ulong*)( this + 0xb14 ) = CONCAT44(fVar47 * (float)( local_108 >> 0x20 ) + fVar46 * (float)( (ulong)local_100 >> 0x20 ) + fStack_f4, fVar47 * (float)local_108 + fVar46 * SUB84(local_100, 0) + local_f8);
            }
 else if (iVar19 == 3) {
               *(ulong*)( this + 0xb14 ) = CONCAT44(( uint )(( ulong ) * (undefined8*)( this + 0xb0c ) >> 0x20) ^ _LC188._4_4_, ( uint ) * (undefined8*)( this + 0xb0c ) ^ (uint)_LC188);
            }

         }
 else if (*(int*)( this + 0xb00 ) == 1) {
            *(undefined8*)( this + 0xb14 ) = uVar52;
            iVar19 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
            if (iVar19 == 2) {
               fVar46 = (float)AnimationTimelineEdit::get_zoom_scale();
               local_148._8_8_ = 0x3f80000000000000;
               local_148._0_8_ = 0x3f800000;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = auStack_138._8_8_;
               auStack_138 = auVar12 << 0x40;
               local_108 = CONCAT44(_LC19 / ( fVar46 * *(float*)( this + 0xab4 ) ), _LC19);
               Transform2D::set_scale((Vector2*)local_148);
               fVar46 = (float)*(undefined8*)( this + 0xb0c );
               fVar47 = (float)( ( ulong ) * (undefined8*)( this + 0xb0c ) >> 0x20 );
               local_170 = CONCAT44(fVar46 * local_148._4_4_ + fVar47 * local_148._12_4_ + auStack_138._4_4_, fVar46 * local_148._0_4_ + fVar47 * local_148._8_4_ + auStack_138._0_4_);
               fVar46 = (float)*(undefined8*)( this + 0xb14 );
               fVar47 = (float)( ( ulong ) * (undefined8*)( this + 0xb14 ) >> 0x20 );
               local_168[0] = CONCAT44(fVar47 * local_148._12_4_ + fVar46 * local_148._4_4_ + auStack_138._4_4_, fVar47 * local_148._8_4_ + fVar46 * local_148._0_4_ + auStack_138._0_4_);
               Transform2D::affine_inverse();
               fVar46 = (float)Vector2::length();
               uVar50 = Vector2::normalized();
               fVar47 = (float)( (uint)uVar50 ^ _LC15 ) * fVar46;
               fVar46 = (float)( ( uint )((ulong)uVar50 >> 0x20) ^ _LC15 ) * fVar46;
               *(ulong*)( this + 0xb0c ) = CONCAT44(fVar47 * (float)( local_108 >> 0x20 ) + fVar46 * (float)( (ulong)local_100 >> 0x20 ) + fStack_f4, fVar47 * (float)local_108 + fVar46 * SUB84(local_100, 0) + local_f8);
            }
 else if (iVar19 == 3) {
               *(ulong*)( this + 0xb0c ) = CONCAT44(( uint )(( ulong ) * (undefined8*)( this + 0xb14 ) >> 0x20) ^ _LC188._4_4_, ( uint ) * (undefined8*)( this + 0xb14 ) ^ (uint)_LC188);
            }

         }

         CanvasItem::queue_redraw();
         if (( ( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) != 0 ) || ( local_2d0 == (Object*)0x0 ) ) || ( cVar15 = cVar15 != '\0' )) goto LAB_0010b9a6;
         LAB_0010bc72:iVar19 = InputEventMouseButton::get_button_index();
         if (( iVar19 == 1 ) && ( this[0x9f0] == (AnimationBezierTrackEdit)0x0 )) {
            pEVar28 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
            local_1a8 = (Object*)0x0;
            String::parse_latin1((String*)&local_1a8, "");
            local_1b0 = 0;
            String::parse_latin1((String*)&local_1b0, "Move Bezier Points");
            TTR((String*)&local_198, (String*)&local_1b0);
            EditorUndoRedoManager::create_action(pEVar28, (String*)&local_198, 0, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
            if (*(int*)( this + 0xb00 ) == -1) {
               pcVar39 = "bezier_track_set_key_in_handle";
               AnimationTimelineEdit::get_zoom_scale();
               uVar20 = *(undefined4*)( this + 0xb08 );
               uVar6 = *(undefined4*)( this + 0xb04 );
               StringName::StringName((StringName*)&local_198, "bezier_track_set_key_in_handle", false);
               EditorUndoRedoManager::add_do_method<int,int,Vector2,float>(*(EditorUndoRedoManager**)( this + 0xb0c ), pEVar28, *(undefined8*)( this + 0x9e8 ), (String*)&local_198, uVar20, uVar6);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

               pEVar53 = (EditorUndoRedoManager*)Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
               LAB_0011069d:uVar20 = *(undefined4*)( this + 0xb08 );
               uVar6 = *(undefined4*)( this + 0xb04 );
               StringName::StringName((StringName*)&local_198, pcVar39, false);
               EditorUndoRedoManager::add_undo_method<int,int,Vector2,float>(pEVar53, pEVar28, *(undefined8*)( this + 0x9e8 ), (String*)&local_198, uVar20, uVar6);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

            }
 else if (*(int*)( this + 0xb00 ) == 1) {
               pcVar39 = "bezier_track_set_key_out_handle";
               AnimationTimelineEdit::get_zoom_scale();
               uVar20 = *(undefined4*)( this + 0xb08 );
               uVar6 = *(undefined4*)( this + 0xb04 );
               StringName::StringName((StringName*)&local_198, "bezier_track_set_key_out_handle", false);
               EditorUndoRedoManager::add_do_method<int,int,Vector2,float>(*(EditorUndoRedoManager**)( this + 0xb14 ), pEVar28, *(undefined8*)( this + 0x9e8 ), (String*)&local_198, uVar20, uVar6);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

               pEVar53 = (EditorUndoRedoManager*)Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), *(int*)( this + 0xb08 ));
               goto LAB_0011069d;
            }

            pOVar13 = AnimationPlayerEditor::singleton;
            if (AnimationPlayerEditor::singleton != (Object*)0x0) {
               StringName::StringName((StringName*)&local_198, "_animation_update_key_frame", false);
               EditorUndoRedoManager::add_do_method<>(pEVar28, pOVar13, (StringName*)&local_198);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

               StringName::StringName((StringName*)&local_198, "_animation_update_key_frame", false);
               EditorUndoRedoManager::add_undo_method<>(pEVar28, pOVar13, (StringName*)&local_198);
               if (( StringName::configured != '\0' ) && ( local_198 != (Object*)0x0 )) {
                  StringName::unref();
               }

            }

            EditorUndoRedoManager::commit_action(SUB81(pEVar28, 0));
            *(undefined4*)( this + 0xb00 ) = 0;
            CanvasItem::queue_redraw();
         }

         if (pOVar25 == (Object*)0x0) goto LAB_0010b9b6;
      }

      LAB_0010b9a6:cVar15 = RefCounted::unreference();
      if (( cVar15 != '\0' ) && ( cVar15 = cVar15 != '\0' )) {
         ( **(code**)( *(long*)pOVar25 + 0x140 ) )(pOVar25);
         Memory::free_static(pOVar25, false);
      }

   }

   LAB_0010b9b6:pOVar25 = local_1c0;
   if (( ( local_1c0 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) &&( cVar15 = cVar15 != '\0' )(**(code**)( *(long*)pOVar25 + 0x140 ))(pOVar25);
   Memory::free_static(pOVar25, false);
}
if (( ( local_2c8 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) &&( cVar15 = cVar15 != '\0' )(**(code**)( *(long*)local_2c8 + 0x140 ))(local_2c8);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   Memory::free_static(local_2c8, false);
   return;
}
goto LAB_00110c12;}goto LAB_0010b9ed;LAB_00110aac:iVar19 = Animation::get_track_count();if (iVar19 <= (int)uVar22) goto LAB_001103d6;cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar22, (uint*)&local_1a8);if (( cVar15 == '\0' ) && ( cVar15 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 )) ),cVar15 == '\x06') {
   AVar17 = this[0x9f0];
   Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
   this[0x9f0] = AVar17;
   *(uint*)( this + 0x9f4 ) = uVar22;
   CanvasItem::queue_redraw();
   goto LAB_001103d6;
}
uVar22 = uVar22 + 1;goto LAB_00110aac;LAB_001103d6:CanvasItem::queue_redraw();goto LAB_0010dfed;LAB_00110c43:iVar19 = Animation::get_track_count();iVar21 = (int)piVar34;if (iVar19 <= iVar21) goto LAB_0011055e;cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, piVar34, (uint*)&local_1a8);if (( cVar15 == '\0' ) && ( cVar15 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 )) ),cVar15 == '\x06') {
   AVar17 = this[0x9f0];
   Ref<Animation>::operator =((Ref<Animation>*)( this + 0x9e8 ), *(Ref**)( this + 0x9e8 ));
   this[0x9f0] = AVar17;
   *(int*)( this + 0x9f4 ) = iVar21;
   CanvasItem::queue_redraw();
   goto LAB_0011055e;
}
piVar34 = (int*)( ulong )(iVar21 + 1);goto LAB_00110c43;LAB_0011055e:local_1a0 = (undefined4*)0x0;for (uVar22 = 0; iVar19 = Animation::get_track_count(),(int)uVar22 < iVar19; uVar22 = uVar22 + 1) {
   cVar15 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(pHVar4, (int*)(ulong)uVar22, (uint*)&local_1b0);
   if (( cVar15 == '\0' ) && ( cVar15 = Animation::track_get_type((int)*(undefined8*)( this + 0x9e8 )) ),cVar15 == '\x06') {
      Vector<int>::push_back((Vector<int>*)&local_1a8, uVar22);
   }

}
uVar20 = 0xffffffff;if (( local_1a0 != (undefined4*)0x0 ) && ( uVar20 = 0xffffffff * (long*)( local_1a0 + -2 ) == 1 )) {
   uVar20 = *local_1a0;
}
*(undefined4*)( this + 0xaa0 ) = uVar20;CanvasItem::queue_redraw();CowData<int>::_unref((CowData<int>*)&local_1a0);LAB_0010dfed:RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_198);RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_Data::_free_root((_Data*)&local_198);LAB_0010bd46:Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton>*)&local_1c0);if (local_2c8 != (Object*)0x0) {
   LAB_0010bd60:cVar15 = RefCounted::unreference();
   if (( cVar15 != '\0' ) && ( cVar15 = cVar15 != '\0' )) {
      ( **(code**)( *(long*)local_2c8 + 0x140 ) )(local_2c8);
      Memory::free_static(local_2c8, false);
   }

}
LAB_0010b9ed:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00110c12:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationBezierTrackEdit::_notification(int) */void AnimationBezierTrackEdit::_notification(AnimationBezierTrackEdit *this, int param_1) {
   HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this_00;
   CowData<AnimationBezierTrackEdit::EditPoint> *this_01;
   float fVar1;
   Viewport *pVVar2;
   code *pcVar3;
   long lVar4;
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
   undefined8 uVar18;
   long *plVar19;
   char cVar20;
   bool bVar21;
   int iVar22;
   undefined4 uVar23;
   int iVar24;
   int iVar25;
   int iVar26;
   uint uVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   int iVar33;
   uint uVar34;
   long lVar35;
   undefined8 *puVar36;
   long lVar37;
   String *pSVar38;
   undefined4 *puVar39;
   undefined1(*pauVar40)[16];
   Object *pOVar41;
   uint uVar42;
   undefined8 *puVar43;
   wchar32 wVar44;
   long lVar45;
   long in_FS_OFFSET;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   uint uVar50;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float extraout_XMM0_Db_01;
   double dVar51;
   float extraout_XMM0_Db_02;
   float extraout_XMM0_Db_03;
   float extraout_XMM0_Db_04;
   float extraout_XMM0_Db_05;
   float extraout_XMM0_Db_06;
   float extraout_XMM0_Db_07;
   float extraout_XMM0_Db_08;
   undefined8 uVar52;
   float extraout_XMM0_Db_09;
   float extraout_XMM0_Db_10;
   ulong uVar53;
   double dVar54;
   double dVar55;
   float fVar56;
   double dVar57;
   float fVar58;
   float fVar59;
   float fVar60;
   float fVar61;
   float fVar62;
   float fVar63;
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   CowData<char32_t> *local_590;
   long local_588;
   float local_57c;
   CowData<AnimationBezierTrackEdit::EditPoint> *local_550;
   int local_518;
   RBMap<int,Color,Comparator<int>,DefaultAllocator> *local_500;
   undefined8 *local_468;
   uint local_414;
   Object *local_410;
   undefined8 local_408;
   uint local_400;
   undefined4 uStack_3fc;
   long *local_3f8;
   undefined8 local_3f0;
   long *local_3e8;
   undefined8 local_3e0;
   long *local_3d8;
   long *local_3d0;
   CowData<char32_t> local_3c8[8];
   long local_3c0;
   undefined8 *local_3b8;
   undefined8 *local_3b0;
   undefined4 local_3a8;
   long local_398;
   undefined8 *local_390;
   undefined4 local_388;
   long *local_378;
   undefined8 *local_370;
   undefined4 local_368;
   Object *local_358;
   undefined8 *local_350;
   undefined4 local_348;
   Object *local_338;
   undefined8 *local_330;
   undefined8 *local_328;
   undefined4 local_320;
   undefined8 local_310;
   undefined1 local_308[16];
   undefined1 local_2f8[16];
   undefined1 local_2e8[16];
   undefined1 local_2d8[16];
   Color local_2c8[16];
   undefined1 local_2b8[16];
   undefined1 local_2a8[16];
   undefined8 local_298;
   undefined8 uStack_290;
   undefined8 local_288;
   undefined8 uStack_280;
   float local_278;
   float fStack_274;
   float fStack_270;
   float fStack_26c;
   undefined8 local_268;
   undefined8 uStack_260;
   undefined8 local_258;
   float fStack_250;
   float fStack_24c;
   float local_248;
   float fStack_244;
   float fStack_240;
   float fStack_23c;
   float fStack_238;
   float fStack_234;
   float fStack_230;
   float fStack_22c;
   undefined1 local_228[8];
   undefined8 uStack_220;
   undefined8 local_218;
   undefined1 local_208[8];
   undefined8 uStack_200;
   undefined1 local_1f8[8];
   float fStack_1f0;
   float fStack_1ec;
   undefined1 local_1e8[16];
   undefined8 local_1d8;
   long local_40;
   auVar17._8_8_ = local_2b8._8_8_;
   auVar17._0_8_ = local_2b8._0_8_;
   auVar16._8_8_ = local_2b8._8_8_;
   auVar16._0_8_ = local_2b8._0_8_;
   auVar15._8_8_ = local_2d8._8_8_;
   auVar15._0_8_ = local_2d8._0_8_;
   auVar14._8_8_ = local_2d8._8_8_;
   auVar14._0_8_ = local_2d8._0_8_;
   auVar13._8_8_ = local_2e8._8_8_;
   auVar13._0_8_ = local_2e8._0_8_;
   auVar12._8_8_ = local_2e8._8_8_;
   auVar12._0_8_ = local_2e8._0_8_;
   auVar11._8_8_ = local_2f8._8_8_;
   auVar11._0_8_ = local_2f8._0_8_;
   auVar10._8_8_ = local_2f8._8_8_;
   auVar10._0_8_ = local_2f8._0_8_;
   auVar65._8_8_ = local_308._8_8_;
   auVar65._0_8_ = local_308._0_8_;
   auVar64._8_8_ = local_308._8_8_;
   auVar64._0_8_ = local_308._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x2d) {
      if ((_notification(int)::{lambda()
      #1
      (iVar22 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #1
      iVar22 != 0))
      {
         _scs_create((char *)&_notification(int)::{lambda()
         #1
         __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_338);
    pOVar41 = *(Object **)(this + 0xa08);
    if (local_338 != pOVar41) {
      *(Object **)(this + 0xa08) = local_338;
      if ((local_338 != (Object *)0x0) && (cVar20 = RefCounted::reference(), cVar20 == '\0')) {
        *(undefined8 *)(this + 0xa08) = 0;
      }
      if (((pOVar41 != (Object *)0x0) && (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
         (cVar20 = predelete_handler(pOVar41), cVar20 != '\0')) {
        (**(code **)(*(long *)pOVar41 + 0x140))(pOVar41);
        Memory::free_static(pOVar41,false);
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_338);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar22 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar22 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()
         #2
         __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_338);
    pOVar41 = *(Object **)(this + 0xa10);
    if (local_338 != pOVar41) {
      *(Object **)(this + 0xa10) = local_338;
      if ((local_338 != (Object *)0x0) && (cVar20 = RefCounted::reference(), cVar20 == '\0')) {
        *(undefined8 *)(this + 0xa10) = 0;
      }
      if (((pOVar41 != (Object *)0x0) && (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
         (cVar20 = predelete_handler(pOVar41), cVar20 != '\0')) {
        (**(code **)(*(long *)pOVar41 + 0x140))(pOVar41);
        Memory::free_static(pOVar41,false);
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_338);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar22 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar22 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()
         #3
         __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_338);
    pOVar41 = *(Object **)(this + 0xa18);
    if (local_338 != pOVar41) {
      *(Object **)(this + 0xa18) = local_338;
      if ((local_338 != (Object *)0x0) && (cVar20 = RefCounted::reference(), cVar20 == '\0')) {
        *(undefined8 *)(this + 0xa18) = 0;
      }
      if (((pOVar41 != (Object *)0x0) && (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
         (cVar20 = predelete_handler(pOVar41), cVar20 != '\0')) {
        (**(code **)(*(long *)pOVar41 + 0x140))(pOVar41);
        Memory::free_static(pOVar41,false);
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_338);
    goto LAB_0011354d;
  }
  if (param_1 < 0x2e), {
                  if (param_1 != 10) {
                     local_308 = auVar64;
                     local_2f8 = auVar10;
                     local_2e8 = auVar12;
                     local_2d8 = auVar14;
                     local_2b8 = auVar16;
                     if (( param_1 == 0x1e ) && ( local_308 = auVar65 ),local_2f8 = auVar11,local_2e8 = auVar13,local_2d8 = auVar15,local_2b8 = auVar17,*(long*)( this + 0x9e8 ) != 0) {
                        iVar22 = AnimationTimelineEdit::get_name_limit();
                        if ((_notification(int)::{lambda()
                        #4
                        (iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                        #4
                        iVar24 != 0))
                        {
                           _scs_create((char *)&_notification(int)::{lambda()
                           #4
                           __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
                           #4
                           __cxa_guard_release(&_notification(int)::{lambda()
                           #4
                        }

                        Control::get_theme_font((StringName*)&local_410, (StringName*)this);
                        if ((_notification(int)::{lambda()
                        #5
                        (iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                        #5
                        iVar24 != 0))
                        {
                           _scs_create((char *)&_notification(int)::{lambda()
                           #5
                           __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
                           #5
                           __cxa_guard_release(&_notification(int)::{lambda()
                           #5
                        }

                        uVar23 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                        if ((_notification(int)::{lambda()
                        #6
                        (iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                        #6
                        iVar24 != 0))
                        {
                           _scs_create((char *)&_notification(int)::{lambda()
                           #6
                           __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
                           #6
                           __cxa_guard_release(&_notification(int)::{lambda()
                           #6
                        }

                        local_308 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
                        if (_notification(int)::{lambda()
                        #8
                        iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                        #8
                        if (iVar24 != 0) {
                           _scs_create((char *)&_notification(int)::{lambda()
                           #8
                           __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
                           #8
                           __cxa_guard_release(&_notification(int)::{lambda()
                           #8
                        }

                     }

                     if (_notification(int)::{lambda()
                     #7
                     iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                     #7
                     if (iVar24 != 0) {
                        _scs_create((char *)&_notification(int)::{lambda()
                        #7
                        __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
                        #7
                        __cxa_guard_release(&_notification(int)::{lambda()
                        #7
                     }

                  }

                  auVar64 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_notification(int)::{lambda()
                  #7
                  if (_notification(int)::{lambda()
                  #10
                  iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
                  #10
                  if (iVar24 != 0) {
                     _scs_create((char *)&_notification(int)::{lambda()
                     #10
                     __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
                     #10
                     __cxa_guard_release(&_notification(int)::{lambda()
                     #10
                  }

               }
, if (_notification(int), ::{lambda();
         #9
         iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #9
         if (iVar24 != 0) {
            _scs_create((char *)&_notification(int)::{lambda()
            #9
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
            #9
            __cxa_guard_release(&_notification(int)::{lambda()
            #9
         }

      }

      local_2f8 = Control::get_theme_color
                              ((StringName *)this,
                               (StringName *)&_notification(int)::{lambda()
      #9
      ;;
      if (_notification(int)::{lambda()
      #12
      iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
      #12
      if (iVar24 != 0) {
         _scs_create((char *)&_notification(int)::{lambda()
         #12
         __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
         #12
         __cxa_guard_release(&_notification(int)::{lambda()
         #12
      }

   }

   if (_notification(int)::{lambda()
   #11
   iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #11
   if (iVar24 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #11
      __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
      #11
      __cxa_guard_release(&_notification(int)::{lambda()
      #11
   }

}
local_2e8 = Control::get_theme_color
                              ((StringName *)this,
                               (StringName *)&_notification(int)::{lambda()#11);
        if (_notification(int)::{lambda()#14iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#14if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #14
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #14
   __cxa_guard_release(&_notification(int)::{lambda()
   #14
}
}
        if (_notification(int)::{lambda()#13iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#13if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #13
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #13
   __cxa_guard_release(&_notification(int)::{lambda()
   #13
}
}
        local_2d8 = Control::get_theme_color
                              ((StringName *)this,
                               (StringName *)&_notification(int)::{lambda()#13);
        if (_notification(int)::{lambda()#16iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#16if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #16
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #16
   __cxa_guard_release(&_notification(int)::{lambda()
   #16
}
}
        if (_notification(int)::{lambda()#15iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#15if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #15
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #15
   __cxa_guard_release(&_notification(int)::{lambda()
   #15
}
}
        iVar24 = Control::get_theme_constant
                           ((StringName *)this,
                            (StringName *)&_notification(int)::{lambda()#15if (_notification(int)::{lambda()#18iVar25 = __cxa_guard_acquire(&_notification(int)::{lambda()#18if (iVar25 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #18
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #18
   __cxa_guard_release(&_notification(int)::{lambda()
   #18
}
}
        if (_notification(int)::{lambda()#17iVar25 = __cxa_guard_acquire(&_notification(int)::{lambda()#17if (iVar25 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #17
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #17
   __cxa_guard_release(&_notification(int)::{lambda()
   #17
}
}
        iVar25 = Control::get_theme_constant
                           ((StringName *)this,
                            (StringName *)&_notification(int)::{lambda()#17cVar20 = Control::has_focus();if (cVar20 != '\0') {
   fVar46 = (float)EditorScale::get_scale();
   fVar46 = roundf(fVar46);
   uVar53 = Control::get_size();
   auVar7._8_8_ = 0;
   auVar7._0_8_ = uVar53;
   _local_208 = auVar7 << 0x40;
   CanvasItem::draw_rect((Rect2*)this, (Color*)local_208, SUB81(local_2e8, 0), fVar46, false);
}
fVar46 = (float)EditorScale::get_scale();uVar42 = 0;fVar46 = roundf(fVar46);Control::get_size();fVar58 = (float)iVar22;auVar8._8_8_ = 0;auVar8._0_8_ = uStack_200;_local_208 = auVar8 << 0x40;local_208._0_4_ = fVar58;local_248 = fVar58;fStack_244 = extraout_XMM0_Db;CanvasItem::draw_line((Vector2*)this, (Vector2*)local_208, (Color*)&local_248, fVar46, SUB81(local_2f8, 0));fVar46 = (float)Control::get_size();local_2c8._8_4_ = _UNK_0012a538;local_2c8._0_8_ = __LC71;local_2c8._12_4_ = _LC19;local_3b8 = (undefined8*)0x0;fVar60 = (float)iVar25;local_3b0 = &_GlobalNilClass::_nil;local_3a8 = 0;*(float*)( this + 0xaac ) = fVar60;iVar26 = (int)( fVar60 + *(float*)( this + 0xaa8 ) );RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( this + 0xa20 ));RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::clear((RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>*)( this + 0xa38 ));local_398 = 0;local_388 = 0;local_390 = &_GlobalNilClass::_nil;uVar27 = Animation::get_track_count();if (0 < (int)uVar27) {
   do {
      cVar20 = _is_track_displayed((int)this);
      if (cVar20 != '\0') {
         iVar29 = (int)(NodePath*)&local_338;
         Animation::track_get_path(iVar29);
         NodePath::operator_cast_to_String((NodePath*)&local_358);
         NodePath::~NodePath((NodePath*)&local_338);
         wVar44 = (wchar32)(NodePath*)&local_358;
         iVar28 = String::find_char(wVar44, 0x3a);
         if (iVar28 != -1) {
            String::substr(iVar29, wVar44);
            if (local_358 != local_338) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
               local_358 = local_338;
               local_338 = (Object*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
         }

         if (local_398 != 0) {
            for (puVar36 = *(undefined8**)( local_398 + 0x10 ); local_390 != puVar36; puVar36 = (undefined8*)puVar36[1]) {
               while (true) {
                  cVar20 = String::operator <((String*)&local_358, (String*)( puVar36 + 6 ));
                  if (cVar20 == '\0') break;
                  puVar36 = (undefined8*)puVar36[2];
                  if (local_390 == puVar36) goto LAB_00111be7;
               }
;
               cVar20 = String::operator <((String*)( puVar36 + 6 ), (String*)&local_358);
               if (cVar20 == '\0') {
                  if (puVar36 != (undefined8*)0x0) {
                     lVar35 = RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::operator []((RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>*)&local_398, (String*)&local_358);
                     local_330 = (undefined8*)0x0;
                     if (*(long*)( lVar35 + 8 ) != 0) {
                        CowData<int>::_ref((CowData<int>*)&local_330, (CowData*)( lVar35 + 8 ));
                     }

                     goto LAB_00111c03;
                  }

                  break;
               }

            }

         }

         LAB_00111be7:local_330 = (undefined8*)0x0;
         LAB_00111c03:Vector<int>::push_back((Vector<int>*)&local_338, uVar42);
         lVar35 = RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::operator []((RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>*)&local_398, (String*)&local_358);
         if (*(undefined8**)( lVar35 + 8 ) != local_330) {
            CowData<int>::_ref((CowData<int>*)( lVar35 + 8 ), (CowData*)&local_330);
         }

         CowData<int>::_unref((CowData<int>*)&local_330);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
      }

      uVar42 = uVar42 + 1;
   }
 while ( uVar27 != uVar42 );
}
auVar9._8_8_ = local_2b8._8_8_;auVar9._0_8_ = local_2b8._0_8_;if (( local_398 != 0 ) && ( puVar36 = *(undefined8**)( local_398 + 0x10 ) ),local_2b8 = auVar9,*(undefined8**)( local_398 + 0x10 ) != local_390) {
   do {
      local_468 = puVar36;
      puVar36 = (undefined8*)local_468[2];
   }
 while ( local_390 != (undefined8*)local_468[2] );
   local_518 = 0;
   do {
            local_408 = 0;
            if (local_468[6] != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_408,(CowData *)(local_468 + 6));
            }
            local_3c0 = 0;
            if (local_468[8] == 0) {
LAB_001140a2:
              lVar35 = 0;
LAB_001140a5:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,0,lVar35,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            CowData<int>::_ref((CowData<int> *)&local_3c0,(CowData *)(local_468 + 8));
            if (local_3c0 == 0) goto LAB_001140a2;
            lVar35 = *(long *)(local_3c0 + -8);
            if (lVar35 < 1) goto LAB_001140a5;
            Animation::track_get_path((int)(NodePath *)&local_3d8);
            if (*(NodePath **)(this + 0x9d0) == (NodePath *)0x0) {
LAB_00111da5:
              local_3d0 = (long *)0x0;
            }
            else {
              cVar20 = Node::has_node(*(NodePath **)(this + 0x9d0));
              if (cVar20 == '\0') goto LAB_00111da5;
              lVar35 = Node::get_node(*(NodePath **)(this + 0x9d0));
              pSVar38 = EditorNode::singleton;
              local_3d0 = (long *)0x0;
              if (lVar35 != 0) {
                local_338 = (Object *)0x0;
                String::parse_latin1((String *)&local_338,"Node");
                EditorNode::get_object_icon((Object *)&local_378,pSVar38);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
                Node::get_name();
                if (local_358 == (Object *)0x0) {
LAB_00115f0d:
                  local_338 = (Object *)0x0;
                }
                else {
                  local_338 = (Object *)0x0;
                  if (*(char **)(local_358 + 8) == (char *)0x0) {
                    if (*(long *)(local_358 + 0x10) == 0) goto LAB_00115f0d;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_338,(CowData *)(local_358 + 0x10));
                  }
                  else {
                    String::parse_latin1((String *)&local_338,*(char **)(local_358 + 8));
                  }
                }
                if ((Object *)local_3d0 != local_338) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3d0);
                  local_3d0 = (long *)local_338;
                  local_338 = (Object *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
                if ((StringName::configured != '\0') && (local_358 != (Object *)0x0)) {
                  StringName::unref();
                }
                local_338 = (Object *)0x0;
                String::parse_latin1((String *)&local_338,"");
                TextLine::TextLine((TextLine *)local_208,(CowData<char32_t> *)&local_3d0,
                                   (StringName *)&local_410,uVar23,(String *)&local_338,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
                iVar28 = (**(code **)(*local_378 + 0x1c8))();
                TextLine::set_width((float)(((iVar22 - iVar24) - iVar28) - iVar24));
                iVar28 = (**(code **)(*local_378 + 0x1d0))();
                TextLine::get_size();
                fVar59 = extraout_XMM0_Db_07;
                if (extraout_XMM0_Db_07 <= (float)iVar28) {
                  fVar59 = (float)iVar28;
                }
                local_248 = _LC19;
                fStack_244 = _LC19;
                fStack_240 = _LC19;
                fStack_23c = _LC19;
                iVar28 = (**(code **)(*local_378 + 0x1d0))();
                local_258 = CONCAT44((float)((double)((int)fVar59 - iVar28) * __LC21 +
                                            (double)iVar26),(float)iVar24);
                CanvasItem::draw_texture((Ref *)this,(Vector2 *)&local_378,(Color *)&local_258);
                iVar28 = (**(code **)(*local_378 + 0x1c8))();
                local_518 = (**(code **)(*local_378 + 0x1c8))();
                local_248 = (float)(iVar28 + iVar24 * 2);
                fStack_244 = (float)iVar26;
                uVar52 = Vector2::floor();
                local_248 = (float)uVar52;
                fStack_244 = (float)((ulong)uVar52 >> 0x20);
                TextLine::draw((Vector2 *)local_208,*(undefined8 *)(this + 0x428),
                               (Color *)&local_248,local_308);
                iVar28 = (int)fVar59 + iVar25;
                iVar26 = iVar26 + iVar28;
                *(float *)(this + 0xaac) = (float)iVar28 + *(float *)(this + 0xaac);
                TextLine::~TextLine((TextLine *)local_208);
                Ref<Texture2D>::unref((Ref<Texture2D> *)&local_378);
              }
            }
            local_57c = (float)iVar24;
            local_590 = (CowData<char32_t> *)&local_3d0;
            CowData<char32_t>::_unref(local_590);
            NodePath::~NodePath((NodePath *)&local_3d8);
            if (_notification(int)::{lambda()#19}::operator()()::sname == '\0') {
              iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#19}::operator()()::sname);
              if (iVar28 != 0) {
                _scs_create((char *)&_notification(int)::{lambda()#19}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()#19}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_notification(int)::{lambda()#19}::operator()()::sname);
              }
            }
            auVar65 = Control::get_theme_color
                                ((StringName *)this,
                                 (StringName *)
                                 &_notification(int)::{lambda()#19}::operator()()::sname);
            local_2b8 = auVar65;
            if (_notification(int)::{lambda()
   #20
   iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #20
   if (iVar28 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #20
      __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
      #20
      __cxa_guard_release(&_notification(int)::{lambda()
      #20
   }

}
Control::get_editor_theme_icon((StringName*)&local_400);iVar28 = ( **(code**)( *(long*)CONCAT44(uStack_3fc, local_400) + 0x1c8 ) )();fVar59 = (float)( ( iVar22 - iVar24 ) - iVar28 );if (_notification(int)::{lambda()#21iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#21if (iVar28 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #21
   __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
   #21
   __cxa_guard_release(&_notification(int)::{lambda()
   #21
}
}Control::get_editor_theme_icon((StringName*)&local_3f8);if (_notification(int)::{lambda()#22iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#22if (iVar28 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #22
   __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
   #22
   __cxa_guard_release(&_notification(int)::{lambda()
   #22
}
}Control::get_editor_theme_icon((StringName*)&local_3f0);iVar28 = ( **(code**)( *local_3f8 + 0x1c8 ) )();fVar47 = ( fVar59 - local_57c ) - (float)iVar28;if (_notification(int)::{lambda()#23iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#23if (iVar28 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #23
   __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
   #23
   __cxa_guard_release(&_notification(int)::{lambda()
   #23
}
}Control::get_editor_theme_icon((StringName*)&local_3e8);if (_notification(int)::{lambda()#24iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#24if (iVar28 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #24
   __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
   #24
   __cxa_guard_release(&_notification(int)::{lambda()
   #24
}
}Control::get_editor_theme_icon((StringName*)&local_3e0);iVar28 = ( **(code**)( *local_3e8 + 0x1c8 ) )();fVar48 = ( fVar47 - local_57c ) - (float)iVar28;if (_notification(int)::{lambda()#25iVar28 = __cxa_guard_acquire(&_notification(int)::{lambda()#25if (iVar28 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #25
   __cxa_atexit(StringName::~StringName,
                             &_notification(int)::{lambda()
   #25
   __cxa_guard_release(&_notification(int)::{lambda()
   #25
}
}Control::get_editor_theme_icon((StringName*)&local_3d8);iVar28 = ( **(code**)( *local_3d8 + 0x1c8 ) )();fVar49 = ( fVar48 - local_57c ) - (float)iVar28;iVar28 = ( **(code**)( *(long*)CONCAT44(uStack_3fc, local_400) + 0x1c8 ) )();iVar29 = ( **(code**)( *local_3f8 + 0x1c8 ) )();iVar30 = ( **(code**)( *local_3e8 + 0x1c8 ) )();iVar31 = ( **(code**)( *local_3d8 + 0x1c8 ) )();lVar35 = local_3c0;fVar61 = _LC19;if (( local_3c0 != 0 ) && ( 0 < *(long*)( local_3c0 + -8 ) )) {
   this_00 = (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 );
   local_588 = 0;
   do {
      uVar42 = *(uint*)( lVar35 + local_588 * 4 );
      local_414 = uVar42;
      Animation::track_get_path((int)(NodePath*)&local_338);
      NodePath::operator_cast_to_String((NodePath*)local_590);
      NodePath::~NodePath((NodePath*)&local_338);
      local_358 = (Object*)0x0;
      local_338 = (Object*)&_LC30;
      local_330 = (undefined8*)0x0;
      String::parse_latin1((StrRange*)&local_358);
      String::replace_first((String*)&local_338, (String*)local_590);
      if ((Object*)local_3d0 != local_338) {
         CowData<char32_t>::_unref(local_590);
         local_3d0 = (long*)local_338;
         local_338 = (Object*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
      local_358 = (Object*)0x0;
      local_338 = (Object*)&_LC30;
      local_330 = (undefined8*)0x0;
      local_2a8 = local_308;
      String::parse_latin1((StrRange*)&local_358);
      TextLine::TextLine((TextLine*)local_208, local_590, (StringName*)&local_410, uVar23, (StrRange*)&local_358, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
      TextLine::set_width(( (float)( iVar22 - local_518 ) - (float)( iVar31 + iVar28 + iVar29 + iVar30 + iVar24 * 3 ) ) - (float)( iVar24 * 2 ));
      TextLine::get_size();
      iVar32 = ( **(code**)( *local_3d8 + 0x1c8 ) )();
      fVar56 = (float)iVar26;
      uStack_290 = CONCAT44(extraout_XMM0_Db_00 + fVar60, ( fVar49 - local_57c ) - (float)iVar32);
      local_298 = CONCAT44(fVar56, (float)local_518);
      local_2a8._12_4_ = (float)( (double)(float)local_2a8._12_4_ * __LC233 );
      cVar20 = String::ends_with((char*)local_590);
      fVar63 = 0.0;
      if (cVar20 == '\0') {
         cVar20 = String::ends_with((char*)local_590);
         fVar63 = _LC210;
         if (cVar20 == '\0') {
            cVar20 = String::ends_with((char*)local_590);
            fVar63 = _LC211;
            if (cVar20 == '\0') {
               uVar34 = String::hash();
               uVar34 = ( uVar34 >> 0x10 ^ uVar34 ) * 0x45d9f3b;
               uVar34 = ( uVar34 >> 0x10 ^ uVar34 ) * 0x45d9f3b;
               fVar63 = (float)( (double)( ( uVar34 >> 0x10 ^ uVar34 ) % 0xffff ) * __LC237 );
            }

         }

      }

      if (uVar42 == *(uint*)( this + 0x9f4 )) {
         CanvasItem::draw_rect((Rect2*)this, (Color*)&local_298, SUB81(local_2d8, 0), _LC145, true);
         cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(this_00, (int*)( ulong ) * (uint*)( this + 0x9f4 ), (uint*)&local_338);
         if (cVar20 == '\0') {
            Color::set_hsv(fVar63, _LC239, _LC239, _LC19);
         }
 else {
            Color::set_hsv(fVar63, 0.0, _LC238, _LC19);
         }

      }
 else {
         local_258 = __LC71;
         fStack_250 = _UNK_0012a538;
         fStack_24c = _LC19;
         cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(this_00, (int*)(ulong)uVar42, (uint*)&local_338);
         if (cVar20 == '\0') {
            Color::set_hsv(fVar63, _LC240, _LC239, _LC19);
         }
 else {
            Color::set_hsv(fVar63, 0.0, _LC238, _LC19);
         }

         fStack_24c = 0.5;
         TextLine::get_size();
         fStack_240 = (float)( local_518 - iVar24 );
         local_248 = 0.0;
         fStack_23c = (float)( (double)extraout_XMM0_Db_01 * __LC241 );
         fStack_244 = fVar56;
         CanvasItem::draw_rect((Rect2*)this, (Color*)&local_248, SUB81((Color*)&local_258, 0), _LC145, true);
         puVar36 = local_3b8;
         if (local_3b8 == (undefined8*)0x0) {
            local_3b8 = (undefined8*)operator_new(0x48, DefaultAllocator::alloc);
            uVar18 = __LC71;
            uVar52 = CONCAT44(_LC19, _UNK_0012a538);
            *(undefined4*)( local_3b8 + 6 ) = 0;
            *(undefined4*)local_3b8 = 1;
            *(undefined1(*) [16])( local_3b8 + 4 ) = (undefined1[16])0x0;
            *(undefined8*)( (long)local_3b8 + 0x34 ) = uVar18;
            *(undefined8*)( (long)local_3b8 + 0x3c ) = uVar52;
            for (int i = 0; i < 3; i++) {
               local_3b8[( i + 1 )] = local_3b0;
            }

         }
 else {
            while (puVar36 = (undefined8*)puVar36[2],puVar36 != local_3b0) {
               while (*(int*)( puVar36 + 6 ) <= (int)uVar42) {
                  if ((int)uVar42 <= *(int*)( puVar36 + 6 )) goto LAB_00112530;
                  puVar36 = (undefined8*)puVar36[1];
                  if (puVar36 == local_3b0) goto LAB_00112509;
               }
;
            }
;
         }

         LAB_00112509:local_248 = (float)__LC71;
         fStack_244 = (float)( (ulong)__LC71 >> 0x20 );
         fStack_240 = _UNK_0012a538;
         fStack_23c = _LC19;
         puVar36 = (undefined8*)RBMap<int,Color,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Color,Comparator<int>,DefaultAllocator>*)&local_3b8, (int*)&local_414, (Color*)&local_248);
         LAB_00112530:*(undefined8*)( (long)puVar36 + 0x34 ) = local_258;
         *(ulong*)( (long)puVar36 + 0x3c ) = CONCAT44(fStack_24c, fStack_250);
         if (*(long*)( this + 0xa20 ) == 0) {
            puVar39 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            fStack_244 = 0.0;
            fStack_240 = 0.0;
            fStack_23c = 0.0;
            fStack_238 = 0.0;
            puVar39[0xc] = 0;
            *(undefined1(*) [16])( puVar39 + 8 ) = (undefined1[16])0x0;
            *(undefined8*)( puVar39 + 0xd ) = 0;
            *(undefined8*)( puVar39 + 0xf ) = 0;
            *(undefined4**)( this + 0xa20 ) = puVar39;
            lVar37 = *(long*)( this + 0xa28 );
            *puVar39 = 1;
            *(long*)( puVar39 + 6 ) = lVar37;
            *(long*)( puVar39 + 2 ) = lVar37;
            *(long*)( puVar39 + 4 ) = lVar37;
         }
 else {
            lVar37 = *(long*)( *(long*)( this + 0xa20 ) + 0x10 );
         }

         for (; *(long*)( this + 0xa28 ) != lVar37; lVar37 = *(long*)( lVar37 + 8 )) {
            while ((int)uVar42 < *(int*)( lVar37 + 0x30 )) {
               lVar37 = *(long*)( lVar37 + 0x10 );
               if (lVar37 == *(long*)( this + 0xa28 )) goto LAB_00112579;
            }
;
            if ((int)uVar42 <= *(int*)( lVar37 + 0x30 )) goto LAB_001125a9;
         }

         LAB_00112579:local_248 = 0.0;
         fStack_244 = 0.0;
         fStack_240 = 0.0;
         fStack_23c = 0.0;
         lVar37 = RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( this + 0xa20 ), (int*)&local_414, (Rect2*)&local_248);
         LAB_001125a9:*(undefined8*)( lVar37 + 0x34 ) = local_298;
         *(undefined8*)( lVar37 + 0x3c ) = uStack_290;
      }

      local_310 = CONCAT44(fVar56, (float)( local_518 + iVar24 ));
      TextLine::draw((Vector2*)local_208, *(undefined8*)( this + 0x428 ), &local_310, local_2a8);
      dVar51 = (double)uStack_290._4_4_ * __LC21;
      iVar32 = ( **(code**)( *(long*)CONCAT44(uStack_3fc, local_400) + 0x1d0 ) )();
      iVar33 = ( **(code**)( *(long*)CONCAT44(uStack_3fc, local_400) + 0x1c8 ) )();
      dVar51 = (double)(float)( dVar51 + (double)iVar26 );
      iVar26 = ( **(code**)( *(long*)CONCAT44(uStack_3fc, local_400) + 0x1d0 ) )();
      fVar62 = fStack_244;
      fVar63 = local_248;
      uStack_280 = CONCAT44((float)iVar32, (float)iVar33);
      local_288 = CONCAT44((float)( dVar51 - (double)iVar26 * __LC21 ), fVar59);
      local_248 = fVar61;
      fStack_244 = fVar61;
      if (this[0x9f0] == (AnimationBezierTrackEdit)0x0) {
         fStack_240 = fVar61;
         fStack_23c = fVar61;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_400, (Color*)&local_288);
      }
 else {
         local_248 = fVar63;
         fStack_244 = fVar62;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_400, (Color*)&local_288);
      }

      iVar26 = ( **(code**)( *local_3f8 + 0x1d0 ) )();
      iVar32 = ( **(code**)( *local_3f8 + 0x1c8 ) )();
      iVar33 = ( **(code**)( *local_3f8 + 0x1d0 ) )();
      fStack_274 = (float)( dVar51 - (double)iVar33 * __LC21 );
      local_278 = fVar47;
      fStack_270 = (float)iVar32;
      fStack_26c = (float)iVar26;
      cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos(this_00, (int*)(ulong)uVar42, (uint*)&local_338);
      local_248 = fVar61;
      fStack_244 = fVar61;
      if (cVar20 == '\0') {
         fStack_240 = fVar61;
         fStack_23c = fVar61;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_3f0, (Color*)&local_278);
      }
 else {
         fStack_240 = fVar61;
         fStack_23c = fVar61;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_3f8, (Color*)&local_278);
      }

      iVar26 = ( **(code**)( *local_3e8 + 0x1d0 ) )();
      iVar32 = ( **(code**)( *local_3e8 + 0x1c8 ) )();
      iVar33 = ( **(code**)( *local_3e8 + 0x1d0 ) )();
      uStack_260 = CONCAT44((float)iVar26, (float)iVar32);
      local_268 = CONCAT44((float)( dVar51 - (double)iVar33 * __LC21 ), fVar48);
      cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), (int*)(ulong)uVar42, (uint*)&local_338);
      if (cVar20 == '\0') {
         fStack_240 = fVar61;
         fStack_23c = fVar61;
         local_248 = fVar61;
         fStack_244 = fVar61;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_3e8, (Color*)&local_268);
      }
 else {
         fStack_240 = fVar61;
         fStack_23c = fVar61;
         local_248 = fVar61;
         fStack_244 = fVar61;
         CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_3e0, (Color*)&local_268);
      }

      iVar26 = ( **(code**)( *local_3d8 + 0x1d0 ) )();
      iVar32 = ( **(code**)( *local_3d8 + 0x1c8 ) )();
      iVar33 = ( **(code**)( *local_3d8 + 0x1d0 ) )();
      fStack_240 = fVar61;
      fStack_23c = fVar61;
      local_258 = CONCAT44((float)( dVar51 - (double)iVar33 * __LC21 ), fVar49);
      fStack_250 = (float)iVar32;
      fStack_24c = (float)iVar26;
      local_248 = fVar61;
      fStack_244 = fVar61;
      CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_3d8, (Color*)&local_258);
      local_378 = (long*)0x0;
      local_368 = 0;
      local_370 = &_GlobalNilClass::_nil;
      local_338 = (Object*)( (ulong)local_338 & 0xffffffff00000000 );
      local_378 = (long*)operator_new(0x48, DefaultAllocator::alloc);
      fStack_238 = 0.0;
      *(undefined1(*) [16])( local_378 + 4 ) = (undefined1[16])0x0;
      *(undefined4*)( local_378 + 6 ) = 0;
      *(undefined4*)( (long)local_378 + 0x34 ) = 0;
      *(undefined4*)( local_378 + 7 ) = 0;
      *(undefined4*)( (long)local_378 + 0x3c ) = 0;
      *(undefined4*)( local_378 + 8 ) = 0;
      *(undefined4*)local_378 = 1;
      for (int i = 0; i < 3; i++) {
         local_378[( i + 1 )] = (long)local_370;
      }

      local_248 = 0.0;
      fStack_244 = 0.0;
      fStack_240 = 0.0;
      fStack_23c = 0.0;
      lVar37 = RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_378, (int*)&local_338, (Rect2*)&local_248);
      *(undefined4*)( lVar37 + 0x34 ) = (undefined4)local_288;
      *(undefined4*)( lVar37 + 0x38 ) = local_288._4_4_;
      *(undefined4*)( lVar37 + 0x3c ) = (undefined4)uStack_280;
      *(undefined4*)( lVar37 + 0x40 ) = uStack_280._4_4_;
      local_338._0_4_ = 1;
      if (local_378 == (long*)0x0) {
         local_378 = (long*)operator_new(0x48, DefaultAllocator::alloc);
         fStack_238 = 0.0;
         *(undefined1(*) [16])( local_378 + 4 ) = (undefined1[16])0x0;
         *(undefined4*)( local_378 + 6 ) = 0;
         *(undefined8*)( (long)local_378 + 0x34 ) = 0;
         *(undefined8*)( (long)local_378 + 0x3c ) = 0;
         *(undefined4*)local_378 = 1;
         for (int i = 0; i < 3; i++) {
            local_378[( i + 1 )] = (long)local_370;
         }

      }
 else {
         for (puVar36 = (undefined8*)local_378[2]; puVar36 != local_370; puVar36 = (undefined8*)puVar36[1]) {
            while (1 < *(int*)( puVar36 + 6 )) {
               puVar36 = (undefined8*)puVar36[2];
               if (puVar36 == local_370) goto LAB_00112a78;
            }
;
            if (*(int*)( puVar36 + 6 ) == 1) {
               *(float*)( (long)puVar36 + 0x34 ) = local_278;
               *(float*)( puVar36 + 7 ) = fStack_274;
               *(float*)( (long)puVar36 + 0x3c ) = fStack_270;
               *(float*)( puVar36 + 8 ) = fStack_26c;
               goto LAB_00112ad1;
            }

         }

      }

      LAB_00112a78:local_248 = 0.0;
      fStack_244 = 0.0;
      fStack_240 = 0.0;
      fStack_23c = 0.0;
      lVar37 = RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_378, (int*)&local_338, (Rect2*)&local_248);
      auVar5._4_4_ = fStack_274;
      auVar5._0_4_ = local_278;
      auVar5._8_4_ = fStack_270;
      auVar5._12_4_ = fStack_26c;
      *(undefined1(*) [16])( lVar37 + 0x34 ) = auVar5;
      local_338._0_4_ = 3;
      if (local_378 == (long*)0x0) {
         local_378 = (long*)operator_new(0x48, DefaultAllocator::alloc);
         fStack_238 = 0.0;
         *(undefined1(*) [16])( local_378 + 4 ) = (undefined1[16])0x0;
         *(undefined4*)( local_378 + 6 ) = 0;
         *(undefined8*)( (long)local_378 + 0x34 ) = 0;
         *(undefined8*)( (long)local_378 + 0x3c ) = 0;
         *(undefined4*)local_378 = 1;
         for (int i = 0; i < 3; i++) {
            local_378[( i + 1 )] = (long)local_370;
         }

      }
 else {
         LAB_00112ad1:local_338._0_4_ = 3;
         for (puVar36 = (undefined8*)local_378[2]; puVar36 != local_370; puVar36 = (undefined8*)puVar36[1]) {
            while (3 < *(int*)( puVar36 + 6 )) {
               puVar36 = (undefined8*)puVar36[2];
               if (puVar36 == local_370) goto LAB_00112af0;
            }
;
            if (*(int*)( puVar36 + 6 ) == 3) {
               *(undefined4*)( (long)puVar36 + 0x34 ) = (undefined4)local_268;
               *(undefined4*)( puVar36 + 7 ) = local_268._4_4_;
               *(undefined4*)( (long)puVar36 + 0x3c ) = (undefined4)uStack_260;
               *(undefined4*)( puVar36 + 8 ) = uStack_260._4_4_;
               local_338 = (Object*)CONCAT44(local_338._4_4_, 2);
               goto LAB_00112b49;
            }

         }

      }

      LAB_00112af0:local_248 = 0.0;
      fStack_244 = 0.0;
      fStack_240 = 0.0;
      fStack_23c = 0.0;
      lVar37 = RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_378, (int*)&local_338, (Rect2*)&local_248);
      *(undefined4*)( lVar37 + 0x34 ) = (undefined4)local_268;
      *(undefined4*)( lVar37 + 0x38 ) = local_268._4_4_;
      *(undefined4*)( lVar37 + 0x3c ) = (undefined4)uStack_260;
      *(undefined4*)( lVar37 + 0x40 ) = uStack_260._4_4_;
      local_338 = (Object*)CONCAT44(local_338._4_4_, 2);
      if (local_378 == (long*)0x0) {
         local_378 = (long*)operator_new(0x48, DefaultAllocator::alloc);
         fStack_238 = 0.0;
         *(undefined1(*) [16])( local_378 + 4 ) = (undefined1[16])0x0;
         *(undefined4*)( local_378 + 6 ) = 0;
         *(undefined4*)( (long)local_378 + 0x34 ) = 0;
         *(undefined4*)( local_378 + 7 ) = 0;
         *(undefined4*)( (long)local_378 + 0x3c ) = 0;
         *(undefined4*)( local_378 + 8 ) = 0;
         *(undefined4*)local_378 = 1;
         for (int i = 0; i < 3; i++) {
            local_378[( i + 1 )] = (long)local_370;
         }

      }
 else {
         LAB_00112b49:for (puVar36 = (undefined8*)local_378[2]; local_370 != puVar36; puVar36 = (undefined8*)puVar36[1]) {
            while (2 < *(int*)( puVar36 + 6 )) {
               puVar36 = (undefined8*)puVar36[2];
               if (puVar36 == local_370) goto LAB_00112b72;
            }
;
            if (*(int*)( puVar36 + 6 ) == 2) goto LAB_00112b9a;
         }

      }

      LAB_00112b72:local_248 = 0.0;
      fStack_244 = 0.0;
      fStack_240 = 0.0;
      fStack_23c = 0.0;
      puVar36 = (undefined8*)RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_378, (int*)&local_338, (Rect2*)&local_248);
      LAB_00112b9a:auVar6._8_4_ = fStack_250;
      auVar6._0_8_ = local_258;
      auVar6._12_4_ = fStack_24c;
      *(undefined1(*) [16])( (long)puVar36 + 0x34 ) = auVar6;
      if (*(long*)( this + 0xa38 ) == 0) {
         puVar39 = (undefined4*)operator_new(0x50, DefaultAllocator::alloc);
         local_358 = (Object*)0x0;
         local_350 = &_GlobalNilClass::_nil;
         local_328 = &_GlobalNilClass::_nil;
         local_348 = 0;
         local_338 = (Object*)( (ulong)local_338 & 0xffffffff00000000 );
         local_330 = (undefined8*)0x0;
         local_320 = 0;
         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_330, (RBMap*)&local_358);
         *puVar39 = 0;
         *(undefined8**)( puVar39 + 0x10 ) = &_GlobalNilClass::_nil;
         puVar39[0xc] = local_338._0_4_;
         *(undefined8*)( puVar39 + 10 ) = 0;
         *(undefined8*)( puVar39 + 0xe ) = 0;
         puVar39[0x12] = 0;
         *(undefined1(*) [16])( puVar39 + 2 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar39 + 6 ) = (undefined1[16])0x0;
         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( puVar39 + 0xe ), (RBMap*)&local_330);
         *(undefined4**)( this + 0xa38 ) = puVar39;
         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_330);
         if (local_330 != (undefined8*)0x0) {
            Memory::free_static(local_330, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_358);
         if (local_358 != (Object*)0x0) {
            Memory::free_static(local_358, false);
         }

         puVar39 = *(undefined4**)( this + 0xa38 );
         lVar37 = *(long*)( this + 0xa40 );
         *puVar39 = 1;
         for (int i = 0; i < 3; i++) {
            *(long*)( puVar39 + ( 2*i + 2 ) ) = lVar37;
         }

      }
 else {
         lVar37 = *(long*)( *(long*)( this + 0xa38 ) + 0x10 );
      }

      for (; *(long*)( this + 0xa40 ) != lVar37; lVar37 = *(long*)( lVar37 + 8 )) {
         while ((int)uVar42 < *(int*)( lVar37 + 0x30 )) {
            lVar37 = *(long*)( lVar37 + 0x10 );
            if (lVar37 == *(long*)( this + 0xa40 )) goto LAB_00112bea;
         }
;
         if ((int)uVar42 <= *(int*)( lVar37 + 0x30 )) goto LAB_00112c47;
      }

      LAB_00112bea:local_338 = (Object*)0x0;
      local_328 = (undefined8*)( (ulong)local_328 & 0xffffffff00000000 );
      local_330 = &_GlobalNilClass::_nil;
      lVar37 = RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>*)( this + 0xa38 ), (int*)&local_414, (RBMap*)&local_338);
      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_338);
      if (local_338 != (Object*)0x0) {
         Memory::free_static(local_338, false);
      }

      LAB_00112c47:RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( lVar37 + 0x38 ), (RBMap*)&local_378);
      TextLine::get_size();
      iVar26 = (int)( extraout_XMM0_Db_02 + fVar60 + fVar56 );
      TextLine::get_size();
      *(float*)( this + 0xaac ) = extraout_XMM0_Db_03 + fVar60 + *(float*)( this + 0xaac );
      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_378);
      if (local_378 != (long*)0x0) {
         Memory::free_static(local_378, false);
      }

      TextLine::~TextLine((TextLine*)local_208);
      CowData<char32_t>::_unref(local_590);
      local_588 = local_588 + 1;
   }
 while ( local_588 < *(long*)( lVar35 + -8 ) );
}
Ref<Texture2D>::unref((Ref<Texture2D>*)&local_3d8);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_3e0);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_3e8);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_3f0);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_3f8);Ref<Texture2D>::unref((Ref<Texture2D>*)&local_400);CowData<int>::_unref((CowData<int>*)&local_3c0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_408);local_468 = (undefined8*)local_468[4];}while (local_468 != (undefined8*)0x0) ;;;}
        if (_notification(int)::{lambda()#26iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#26if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #26
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #26
   __cxa_guard_release(&_notification(int)::{lambda()
   #26
}
}
        auVar65 = Control::get_theme_color
                            ((StringName *)this,
                             (StringName *)&_notification(int)::{lambda()#26local_258 = auVar65._0_8_;fStack_250 = auVar65._8_4_;fStack_24c = auVar65._12_4_;fVar59 = (float)( **(code**)( *(long*)local_410 + 0x218 ) )(local_410, uVar23);fVar59 = fVar60 + fVar59 + fVar60 + fVar59;dVar55 = (double)( fVar59 * *(float*)( this + 0xab4 ) );dVar51 = log(dVar55 / __LC242);dVar51 = round(dVar51 / __LC243);dVar51 = pow(_LC244, dVar51);dVar51 = dVar51 * __LC242;dVar57 = (double)(float)dVar51;dVar55 = (double)Math::snapped(dVar55, dVar57);for (fVar60 = (float)dVar55; fVar60 / *(float*)( this + 0xab4 ) < fVar59; fVar60 = fVar60 + (float)dVar51) {}iVar25 = (int)fVar46;bVar21 = true;fVar46 = (float)( **(code**)( *(long*)local_410 + 0x218 ) )(local_410, uVar23);iVar26 = (int)fVar46;iVar24 = 0;while (true) {
   fVar46 = (float)iVar26;
   Control::get_size();
   if (extraout_XMM0_Db_05 <= fVar46) break;
   Control::get_size();
   fVar59 = (float)( (double)extraout_XMM0_Db_04 * __LC21 - (double)iVar26 ) * *(float*)( this + 0xab4 ) + *(float*)( this + 0xab0 );
   iVar28 = (int)( fVar59 / fVar60 ) - ( uint )(fVar59 < 0.0);
   if (( !bVar21 ) && ( iVar24 != iVar28 )) {
      local_248 = auVar64._0_4_;
      fStack_244 = auVar64._4_4_;
      fStack_240 = auVar64._8_4_;
      fStack_23c = auVar64._12_4_;
      fStack_23c = _LC37 * fStack_23c;
      fVar59 = (float)EditorScale::get_scale();
      fVar59 = roundf(fVar59);
      auVar65 = _local_208;
      local_208._4_4_ = fVar46;
      local_208._0_4_ = (float)iVar25;
      uStack_200 = auVar65._8_8_;
      local_268 = CONCAT44(fVar46, fVar58);
      CanvasItem::draw_line((Vector2*)this, (Vector2*)&local_268, (Color*)local_208, fVar59, SUB81((Color*)&local_248, 0));
      uStack_200._4_4_ = local_308._12_4_;
      pOVar41 = *(Object**)( TextServerManager::singleton + 0x178 );
      _local_208 = local_308._0_12_;
      uStack_200._4_4_ = _LC37 * uStack_200._4_4_;
      if (pOVar41 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      cVar20 = RefCounted::reference();
      if (cVar20 == '\0') {
         pOVar41 = (Object*)0x0;
      }

      iVar24 = iVar22 + (int)_LC245;
      iVar29 = iVar26 + _LC245._4_4_;
      pcVar3 = *(code**)( *(long*)pOVar41 + 0x7c0 );
      local_358 = (Object*)0x0;
      String::parse_latin1((String*)&local_358, "");
      dVar51 = (double)Math::snapped((double)( (float)( iVar28 + 1 ) * fVar60 ), dVar57);
      rtos(dVar51);
      ( *pcVar3 )((CowData<char32_t>*)&local_338, pOVar41, (CowData<char32_t>*)&local_378, (String*)&local_358);
      local_268 = CONCAT44((float)iVar29, (float)iVar24);
      CanvasItem::draw_string(this, (StringName*)&local_410, (Vector2*)&local_268, (CowData<char32_t>*)&local_338, 0, uVar23, (Vector2*)local_208, 3, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
      cVar20 = RefCounted::unreference();
      if (cVar20 != '\0') {
         cVar20 = predelete_handler(pOVar41);
         if (cVar20 != '\0') {
            ( **(code**)( *(long*)pOVar41 + 0x140 ) )(pOVar41);
            Memory::free_static(pOVar41, false);
         }

      }

   }

   iVar26 = iVar26 + 1;
   bVar21 = false;
   iVar24 = iVar28;
}
;fVar46 = (float)AnimationTimelineEdit::get_zoom_scale();if (_notification(int)::{lambda()#27iVar24 = __cxa_guard_acquire(&_notification(int)::{lambda()#27if (iVar24 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #27
   __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
   #27
   __cxa_guard_release(&_notification(int)::{lambda()
   #27
}
}Control::get_editor_theme_icon((StringName*)&local_338);if (( local_3b8 != (undefined8*)0x0 ) && ( puVar36 = (undefined8*)local_3b8[2] ),(undefined8*)local_3b8[2] != local_3b0) {
   do {
      puVar43 = puVar36;
      puVar36 = (undefined8*)puVar43[2];
   }
 while ( local_3b0 != (undefined8*)puVar43[2] );
   do {
      uVar42 = *(uint*)( puVar43 + 6 );
      cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), (int*)(ulong)uVar42, (uint*)&local_358);
      if (cVar20 == '\0') {
         iVar24 = 0;
         _draw_track(this, uVar42, (Color*)( (long)puVar43 + 0x34 ));
         while (true) {
            iVar26 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 ));
            if (iVar26 <= iVar24) break;
            dVar51 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), *(int*)( puVar43 + 6 ));
            fVar47 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), *(int*)( puVar43 + 6 ));
            fVar60 = *(float*)( this + 0xab0 );
            fVar59 = *(float*)( this + 0xab4 );
            Control::get_size();
            dVar55 = (double)Range::get_value();
            fVar48 = (float)( ( (double)(float)dVar51 - dVar55 ) * (double)fVar46 + (double)iVar22 );
            if (( fVar58 <= fVar48 ) && ( fVar48 <= (float)iVar25 )) {
               uVar52 = ( **(code**)( *(long*)local_338 + 0x1d8 ) )();
               auVar64 = _local_208;
               local_208._4_4_ = (float)( (double)extraout_XMM0_Db_06 * __LC21 - (double)( ( fVar47 - fVar60 ) / fVar59 ) ) - (float)( (ulong)uVar52 >> 0x20 ) * _UNK_0012a544;
               local_208._0_4_ = fVar48 - (float)uVar52 * _LC37;
               uStack_200 = auVar64._8_8_;
               CanvasItem::draw_texture((Ref*)this, (Vector2*)&local_338, (Color*)local_208);
            }

            iVar24 = iVar24 + 1;
         }
;
      }

      puVar43 = (undefined8*)puVar43[4];
   }
 while ( puVar43 != (undefined8*)0x0 );
}
if ((int)uVar27 < 1) {
   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_338);
   CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>((CowData<AnimationBezierTrackEdit::EditPoint>*)( this + 0xb98 ), 0);
   AnimationTimelineEdit::get_zoom_scale();
}
 else {
   uVar42 = *(uint*)( this + 0x9f4 );
   cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa78 ), (int*)(ulong)uVar42, (uint*)&local_358);
   if (cVar20 == '\0') {
      _draw_track(this, uVar42, local_2c8);
   }

   Ref<Texture2D>::unref((Ref<Texture2D>*)&local_338);
   CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>((CowData<AnimationBezierTrackEdit::EditPoint>*)( this + 0xb98 ), 0);
   fVar46 = (float)AnimationTimelineEdit::get_zoom_scale();
   local_400 = 0;
   do {
      uVar42 = local_400;
      cVar20 = _is_track_curves_displayed(this, local_400);
      if (cVar20 != '\0') {
         cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 ), (int*)(ulong)uVar42, (uint*)&local_338);
         if (cVar20 == '\0') {
            iVar24 = Animation::track_get_key_count((int)*(undefined8*)( this + 0x9e8 ));
            uVar34 = local_400;
            if (0 < iVar24) {
               iVar26 = 0;
               dVar51 = (double)iVar22;
               dVar55 = (double)fVar46;
               do {
                  dVar57 = (double)Animation::track_get_key_time((int)*(undefined8*)( this + 0x9e8 ), uVar42);
                  fVar60 = (float)dVar57;
                  fVar59 = (float)Animation::bezier_track_get_key_value((int)*(undefined8*)( this + 0x9e8 ), uVar42);
                  if (this[0xad8] != (AnimationBezierTrackEdit)0x0) {
                     lVar35 = *(long*)( this + 0xba0 );
                     if (lVar35 != 0) {
                        LAB_00114940:lVar35 = *(long*)( lVar35 + 0x10 );
                        if (*(long*)( this + 0xba8 ) != lVar35) {
                           do {
                              uVar50 = *(uint*)( lVar35 + 0x30 );
                              if (uVar50 == uVar42) {
                                 if (iVar26 < *(int*)( lVar35 + 0x34 )) goto LAB_00114940;
                                 if (iVar26 <= *(int*)( lVar35 + 0x34 )) {
                                    fVar60 = fVar60 + *(float*)( this + 0xae4 );
                                    fVar59 = fVar59 + *(float*)( this + 0xae8 );
                                    break;
                                 }

                              }
 else if (uVar50 != uVar42 && (int)uVar42 <= (int)uVar50) goto LAB_00114940;
                              lVar35 = *(long*)( lVar35 + 8 );
                              if (*(long*)( this + 0xba8 ) == lVar35) break;
                           }
 while ( true );
                        }

                     }

                  }

                  fVar47 = *(float*)( this + 0xab0 );
                  fVar48 = *(float*)( this + 0xab4 );
                  Control::get_size();
                  dVar54 = (double)extraout_XMM0_Db_08 * __LC21;
                  dVar57 = (double)Range::get_value();
                  fVar61 = (float)( ( (double)fVar60 - dVar57 ) * dVar55 + dVar51 );
                  fVar49 = (float)( dVar54 - (double)( ( fVar59 - fVar47 ) / fVar48 ) );
                  local_288 = CONCAT44(fVar49, fVar61);
                  uVar52 = Animation::bezier_track_get_key_in_handle((int)*(undefined8*)( this + 0x9e8 ), uVar42);
                  fVar48 = (float)uVar52;
                  fVar47 = (float)( (ulong)uVar52 >> 0x20 );
                  if (( ( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0 ) && ( *(uint*)( this + 0xb08 ) == uVar42 ) ) && ( *(int*)( this + 0xb04 ) == iVar26 )) {
                     fVar47 = *(float*)( this + 0xb10 );
                     fVar48 = *(float*)( this + 0xb0c );
                  }

                  fVar63 = *(float*)( this + 0xab0 );
                  fVar56 = *(float*)( this + 0xab4 );
                  Control::get_size();
                  dVar54 = (double)extraout_XMM0_Db_09 * __LC21;
                  dVar57 = (double)Range::get_value();
                  fVar62 = (float)( ( (double)( fVar48 + fVar60 ) - dVar57 ) * dVar55 + dVar51 );
                  fVar63 = (float)( dVar54 - (double)( ( ( fVar47 + fVar59 ) - fVar63 ) / fVar56 ) );
                  local_278 = fVar62;
                  fStack_274 = fVar63;
                  uVar52 = Animation::bezier_track_get_key_out_handle((int)*(undefined8*)( this + 0x9e8 ), uVar42);
                  fVar48 = (float)uVar52;
                  fVar47 = (float)( (ulong)uVar52 >> 0x20 );
                  if (( ( ( *(int*)( this + 0xb00 ) + 1U & 0xfffffffd ) == 0 ) && ( *(uint*)( this + 0xb08 ) == uVar42 ) ) && ( *(int*)( this + 0xb04 ) == iVar26 )) {
                     fVar47 = *(float*)( this + 0xb18 );
                     fVar48 = *(float*)( this + 0xb14 );
                  }

                  fVar56 = *(float*)( this + 0xab0 );
                  fVar1 = *(float*)( this + 0xab4 );
                  Control::get_size();
                  dVar54 = (double)extraout_XMM0_Db_10 * __LC21;
                  dVar57 = (double)Range::get_value();
                  fVar48 = (float)( ( (double)( fVar48 + fVar60 ) - dVar57 ) * dVar55 + dVar51 );
                  fVar47 = (float)( dVar54 - (double)( ( ( fVar47 + fVar59 ) - fVar56 ) / fVar1 ) );
                  local_268 = CONCAT44(fVar47, fVar48);
                  if (*(uint*)( this + 0x9f4 ) == uVar42) {
                     LAB_00114f3f:_draw_line_clipped(this, (Vector2*)&local_288, (Vector2*)&local_278, (Color*)&local_258, iVar22, iVar25);
                     _draw_line_clipped(this, (Vector2*)&local_288, (Vector2*)&local_268, (Color*)&local_258, iVar22, iVar25);
                  }
 else {
                     lVar35 = *(long*)( this + 0xba0 );
                     if (lVar35 != 0) {
                        LAB_00114be8:lVar35 = *(long*)( lVar35 + 0x10 );
                        if (*(long*)( this + 0xba8 ) != lVar35) {
                           do {
                              uVar50 = *(uint*)( lVar35 + 0x30 );
                              if (uVar50 == uVar42) {
                                 if (iVar26 < *(int*)( lVar35 + 0x34 )) goto LAB_00114be8;
                                 if (iVar26 <= *(int*)( lVar35 + 0x34 )) goto LAB_00114f3f;
                              }
 else if (uVar50 != uVar42 && (int)uVar42 <= (int)uVar50) goto LAB_00114be8;
                              lVar35 = *(long*)( lVar35 + 8 );
                              if (*(long*)( this + 0xba8 ) == lVar35) break;
                           }
 while ( true );
                        }

                     }

                  }

                  local_500 = (RBMap<int,Color,Comparator<int>,DefaultAllocator>*)&local_3b8;
                  local_248 = 0.0;
                  fStack_244 = 0.0;
                  fStack_240 = 0.0;
                  fStack_23c = 0.0;
                  fStack_238 = 0.0;
                  fStack_234 = 0.0;
                  fStack_230 = 0.0;
                  fStack_22c = 0.0;
                  _local_228 = ZEXT816(0);
                  local_218 = CONCAT44(iVar26, uVar42);
                  if (( fVar61 < fVar58 ) || ( (float)iVar25 < fVar61 )) {
                     local_248 = 0.0;
                     fStack_244 = 0.0;
                     fStack_240 = 0.0;
                     fStack_23c = 0.0;
                  }
 else {
                     uVar52 = ( **(code**)( **(long**)( this + 0xa08 ) + 0x1d8 ) )();
                     auVar64 = _local_208;
                     local_208._4_4_ = fVar49 - (float)( (ulong)uVar52 >> 0x20 ) * _UNK_0012a544;
                     local_208._0_4_ = fVar61 - (float)uVar52 * _LC37;
                     uStack_200 = auVar64._8_8_;
                     uVar52 = Vector2::floor();
                     local_248 = (float)uVar52;
                     fStack_244 = (float)( (ulong)uVar52 >> 0x20 );
                     uVar52 = ( **(code**)( **(long**)( this + 0xa08 ) + 0x1d8 ) )();
                     lVar35 = *(long*)( this + 0xba0 );
                     fStack_240 = (float)uVar52;
                     fStack_23c = (float)( (ulong)uVar52 >> 0x20 );
                     if (lVar35 != 0) {
                        LAB_00114cf2:lVar35 = *(long*)( lVar35 + 0x10 );
                        if (*(long*)( this + 0xba8 ) != lVar35) {
                           do {
                              uVar50 = *(uint*)( lVar35 + 0x30 );
                              if (uVar50 == uVar42) {
                                 if (iVar26 < *(int*)( lVar35 + 0x34 )) goto LAB_00114cf2;
                                 if (iVar26 <= *(int*)( lVar35 + 0x34 )) {
                                    local_208._4_4_ = _LC19;
                                    local_208._0_4_ = _LC19;
                                    uStack_200._0_4_ = _LC19;
                                    uStack_200._4_4_ = _LC19;
                                    CanvasItem::draw_texture((Ref*)this, (Vector2*)( this + 0xa18 ), (Color*)&local_248);
                                    local_3d0 = (long*)0x0;
                                    Ref<TextServer>::operator =((Ref<TextServer>*)&local_3d0, *(Ref**)( TextServerManager::singleton + 0x178 ));
                                    plVar19 = local_3d0;
                                    pcVar3 = *(code**)( *local_3d0 + 0x7c0 );
                                    local_378 = (long*)0x0;
                                    String::parse_latin1((String*)&local_378, "");
                                    dVar57 = (double)Math::snapped((double)fVar60, _LC179);
                                    rtos(dVar57);
                                    ( *pcVar3 )((CowData<char32_t>*)&local_358, plVar19, local_3c8, (String*)&local_378);
                                    local_3e0 = 0;
                                    String::parse_latin1((String*)&local_3e0, " ");
                                    local_3f0 = 0;
                                    String::parse_latin1((String*)&local_3f0, "");
                                    local_3f8 = (long*)0x0;
                                    String::parse_latin1((String*)&local_3f8, "Time:");
                                    TTR((String*)&local_3e8, (String*)&local_3f8);
                                    String::operator +((String*)&local_3d8, (String*)&local_3e8);
                                    String::operator +((String*)&local_338, (String*)&local_3d8);
                                    uVar50 = ( **(code**)( *(long*)local_410 + 0x218 ) )(local_410, uVar23);
                                    local_208 = (undefined1[8])CONCAT44(( (float)( uVar50 ^ _LC15 ) - (float)_LC250 ) + fStack_244, local_248 + (float)_LC250);
                                    CanvasItem::draw_string(this, (StringName*)&local_410, (Vector2*)local_208, (StringName*)&local_338, 0, uVar23, &local_258, 3, 0, 0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
                                    CowData<char32_t>::_unref(local_3c8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
                                    Ref<TextServer>::unref((Ref<TextServer>*)&local_3d0);
                                    local_3d0 = (long*)0x0;
                                    Ref<TextServer>::operator =((Ref<TextServer>*)&local_3d0, *(Ref**)( TextServerManager::singleton + 0x178 ));
                                    plVar19 = local_3d0;
                                    pcVar3 = *(code**)( *local_3d0 + 0x7c0 );
                                    local_378 = (long*)0x0;
                                    String::parse_latin1((String*)&local_378, "");
                                    dVar57 = (double)Math::snapped((double)fVar59, _LC139);
                                    rtos(dVar57);
                                    ( *pcVar3 )((CowData<char32_t>*)&local_358, plVar19, local_3c8, (String*)&local_378);
                                    local_3e0 = 0;
                                    String::parse_latin1((String*)&local_3e0, " ");
                                    local_3f0 = 0;
                                    String::parse_latin1((String*)&local_3f0, "");
                                    local_3f8 = (long*)0x0;
                                    String::parse_latin1((String*)&local_3f8, "Value:");
                                    TTR((String*)&local_3e8, (String*)&local_3f8);
                                    String::operator +((String*)&local_3d8, (String*)&local_3e8);
                                    String::operator +((String*)&local_338, (String*)&local_3d8);
                                    local_208._4_4_ = fStack_244 + (float)( (ulong)_LC253 >> 0x20 );
                                    local_208._0_4_ = (float)_LC250 + local_248;
                                    CanvasItem::draw_string(this, (StringName*)&local_410, (Vector2*)local_208, (StringName*)&local_338, 0, uVar23, &local_258, 3, 0, 0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e0);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
                                    CowData<char32_t>::_unref(local_3c8);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
                                    Ref<TextServer>::unref((Ref<TextServer>*)&local_3d0);
                                    goto LAB_00114d6a;
                                 }

                              }
 else if (uVar50 != uVar42 && (int)uVar42 <= (int)uVar50) goto LAB_00114cf2;
                              lVar35 = *(long*)( lVar35 + 8 );
                              if (*(long*)( this + 0xba8 ) == lVar35) break;
                           }
 while ( true );
                        }

                     }

                     local_208._4_4_ = _LC19;
                     local_208._0_4_ = _LC19;
                     uStack_200._0_4_ = _LC19;
                     uStack_200._4_4_ = _LC19;
                     if (*(uint*)( this + 0x9f4 ) != uVar42) {
                        pauVar40 = (undefined1(*) [16])RBMap<int,Color,Comparator<int>,DefaultAllocator>::operator [](local_500, (int*)&local_400);
                        _local_208 = *pauVar40;
                     }

                     CanvasItem::draw_texture((Ref*)this, (Vector2*)( this + 0xa08 ), (Color*)&local_248);
                     LAB_00114d6a:fVar60 = _LC37 * fStack_240;
                     fVar59 = fVar60 + fVar60 + fStack_240;
                     local_248 = ( local_248 - fStack_240 * _LC37 ) - fVar59 * _LC37;
                     fStack_244 = ( fStack_244 - fStack_240 * _UNK_0012a544 ) - fVar59 * _UNK_0012a544;
                     fStack_240 = _LC37 * fVar59 * _UNK_0012a548 + fVar60 * _UNK_0012a548 + fStack_240;
                     fStack_23c = _LC37 * fVar59 * _UNK_0012a54c + fVar60 * _UNK_0012a54c + fStack_23c;
                  }

                  if (*(uint*)( this + 0x9f4 ) == uVar42) {
                     LAB_00114faf:iVar28 = Animation::bezier_track_get_key_handle_mode((int)*(undefined8*)( this + 0x9e8 ), uVar34);
                     if (iVar28 != 1) {
                        if (( fVar58 <= fVar62 ) && ( fVar62 <= (float)iVar25 )) {
                           uVar52 = ( **(code**)( **(long**)( this + 0xa10 ) + 0x1d8 ) )();
                           auVar64 = _local_208;
                           local_208._4_4_ = fVar63 - (float)( (ulong)uVar52 >> 0x20 ) * _UNK_0012a544;
                           local_208._0_4_ = fVar62 - (float)uVar52 * _LC37;
                           uStack_200 = auVar64._8_8_;
                           uVar52 = Vector2::floor();
                           fStack_238 = (float)uVar52;
                           fStack_234 = (float)( (ulong)uVar52 >> 0x20 );
                           uVar52 = ( **(code**)( **(long**)( this + 0xa10 ) + 0x1d8 ) )();
                           fStack_230 = (float)uVar52;
                           fStack_22c = (float)( (ulong)uVar52 >> 0x20 );
                           local_208._4_4_ = _LC19;
                           local_208._0_4_ = _LC19;
                           uStack_200._0_4_ = _LC19;
                           uStack_200._4_4_ = _LC19;
                           CanvasItem::draw_texture((Ref*)this, (Vector2*)( this + 0xa10 ), (Color*)&fStack_238);
                           fVar60 = _LC37 * fStack_230;
                           fStack_238 = fStack_238 - fStack_230 * _LC37;
                           fStack_234 = fStack_234 - fStack_230 * _UNK_0012a544;
                           fStack_230 = fVar60 * _UNK_0012a548 + fStack_230;
                           fStack_22c = fVar60 * _UNK_0012a54c + fStack_22c;
                        }

                        if (( fVar58 <= fVar48 ) && ( fVar48 <= (float)iVar25 )) {
                           uVar52 = ( **(code**)( **(long**)( this + 0xa10 ) + 0x1d8 ) )();
                           auVar64 = _local_208;
                           local_208._4_4_ = fVar47 - (float)( (ulong)uVar52 >> 0x20 ) * _UNK_0012a544;
                           local_208._0_4_ = fVar48 - (float)uVar52 * _LC37;
                           uStack_200 = auVar64._8_8_;
                           uVar52 = Vector2::floor();
                           local_228 = (undefined1[8])uVar52;
                           uVar52 = ( **(code**)( **(long**)( this + 0xa10 ) + 0x1d8 ) )();
                           uStack_220 = uVar52;
                           local_208._4_4_ = _LC19;
                           local_208._0_4_ = _LC19;
                           uStack_200._0_4_ = _LC19;
                           uStack_200._4_4_ = _LC19;
                           CanvasItem::draw_texture((Ref*)this, (Vector2*)( this + 0xa10 ), (Color*)local_228);
                           fVar60 = _LC37 * (float)uStack_220;
                           local_228._4_4_ = (float)local_228._4_4_ - (float)uStack_220 * _UNK_0012a544;
                           local_228._0_4_ = (float)local_228._0_4_ - (float)uStack_220 * _LC37;
                           uStack_220._0_4_ = fVar60 * _UNK_0012a548 + (float)uStack_220;
                           uStack_220._4_4_ = fVar60 * _UNK_0012a54c + uStack_220._4_4_;
                        }

                     }

                  }
 else {
                     lVar35 = *(long*)( this + 0xba0 );
                     if (lVar35 != 0) {
                        LAB_00114e08:lVar35 = *(long*)( lVar35 + 0x10 );
                        if (*(long*)( this + 0xba8 ) != lVar35) {
                           do {
                              uVar50 = *(uint*)( lVar35 + 0x30 );
                              if (uVar50 == uVar42) {
                                 if (iVar26 < *(int*)( lVar35 + 0x34 )) goto LAB_00114e08;
                                 if (iVar26 <= *(int*)( lVar35 + 0x34 )) goto LAB_00114faf;
                              }
 else if (uVar50 != uVar42 && (int)uVar42 <= (int)uVar50) goto LAB_00114e08;
                              lVar35 = *(long*)( lVar35 + 8 );
                              if (*(long*)( this + 0xba8 ) == lVar35) break;
                           }
 while ( true );
                        }

                     }

                  }

                  local_550 = (CowData<AnimationBezierTrackEdit::EditPoint>*)( this + 0xb98 );
                  cVar20 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>*)( this + 0xa50 ), (int*)(ulong)uVar34, (uint*)&local_338);
                  if (cVar20 == '\0') {
                     local_208._4_4_ = fStack_244;
                     local_208._0_4_ = local_248;
                     uStack_200._4_4_ = fStack_23c;
                     uStack_200._0_4_ = fStack_240;
                     local_1d8 = local_218;
                     local_1f8._4_4_ = fStack_234;
                     local_1f8._0_4_ = fStack_238;
                     fStack_1f0 = fStack_230;
                     fStack_1ec = fStack_22c;
                     local_1e8 = _local_228;
                     if (*(long*)( this + 0xb98 ) == 0) {
                        lVar35 = 1;
                     }
 else {
                        lVar35 = *(long*)( *(long*)( this + 0xb98 ) + -8 ) + 1;
                     }

                     iVar28 = CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(local_550, lVar35);
                     if (iVar28 == 0) {
                        if (*(long*)( this + 0xb98 ) == 0) {
                           lVar37 = -1;
                           lVar35 = 0;
                        }
 else {
                           lVar35 = *(long*)( *(long*)( this + 0xb98 ) + -8 );
                           lVar37 = lVar35 + -1;
                           if (-1 < lVar37) {
                              CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(local_550);
                              pauVar40 = (undefined1(*) [16])( *(long*)( this + 0xb98 ) + lVar37 * 0x38 );
                              *pauVar40 = _local_208;
                              pauVar40[1] = _local_1f8;
                              pauVar40[2] = local_1e8;
                              *(undefined8*)pauVar40[3] = local_1d8;
                              goto LAB_00114e3f;
                           }

                        }

                        _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar37, lVar35, "p_index", "size()", "", false, false);
                     }
 else {
                        _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                     }

                  }

                  LAB_00114e3f:iVar26 = iVar26 + 1;
               }
 while ( iVar26 != iVar24 );
            }

         }

      }

      local_400 = uVar42 + 1;
   }
 while ( local_400 != uVar27 );
}
local_500 = (RBMap<int,Color,Comparator<int>,DefaultAllocator>*)&local_3b8;this_01 = (CowData<AnimationBezierTrackEdit::EditPoint>*)( this + 0xb98 );pauVar40 = *(undefined1(**) [16])this_01;lVar37 = 0;lVar35 = 0;joined_r0x001138a7:if (pauVar40 != (undefined1(*) [16])0x0) {
   do {
      if (*(long*)( pauVar40[-1] + 8 ) <= lVar35) break;
      puVar36 = (undefined8*)( (long)*pauVar40 + lVar37 );
      if (*(int*)( puVar36 + 6 ) != *(int*)( this + 0x9f4 )) {
         pauVar40 = *(undefined1(**) [16])( this + 0xb98 );
         goto LAB_001138ce;
      }

      local_248 = (float)*puVar36;
      fStack_244 = (float)( ( ulong ) * puVar36 >> 0x20 );
      fStack_240 = (float)puVar36[1];
      fStack_23c = (float)( (ulong)puVar36[1] >> 0x20 );
      fStack_238 = (float)puVar36[2];
      fStack_234 = (float)( (ulong)puVar36[2] >> 0x20 );
      fStack_230 = (float)puVar36[3];
      fStack_22c = (float)( (ulong)puVar36[3] >> 0x20 );
      _local_228 = *(undefined1(*) [16])( puVar36 + 4 );
      local_218 = puVar36[6];
      CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(this_01);
      lVar4 = *(long*)( this + 0xb98 );
      if (lVar4 == 0) {
         lVar45 = -1;
      }
 else {
         lVar45 = *(long*)( lVar4 + -8 ) + -1;
         if (lVar35 < lVar45) {
            memmove((void*)( lVar4 + lVar37 ), (void*)( lVar4 + lVar37 + 0x38 ), ( *(long*)( lVar4 + -8 ) - lVar35 ) * 0x38 - 0x38);
         }

      }

      CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(this_01, lVar45);
      local_208._4_4_ = fStack_244;
      local_208._0_4_ = local_248;
      uStack_200._0_4_ = fStack_240;
      uStack_200._4_4_ = fStack_23c;
      local_1d8 = local_218;
      local_1f8._4_4_ = fStack_234;
      local_1f8._0_4_ = fStack_238;
      fStack_1f0 = fStack_230;
      fStack_1ec = fStack_22c;
      local_1e8 = _local_228;
      if (*(long*)( this + 0xb98 ) == 0) {
         iVar22 = CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(this_01, 1);
         if (iVar22 != 0) goto LAB_00115fd3;
         CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(this_01);
         pauVar40 = *(undefined1(**) [16])( this + 0xb98 );
      }
 else {
         lVar45 = *(long*)( *(long*)( this + 0xb98 ) + -8 );
         lVar4 = lVar45 + 1;
         if (lVar4 < 1) {
            _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, 0, lVar4, "p_pos", "new_size", "", false, false);
            pauVar40 = *(undefined1(**) [16])( this + 0xb98 );
            goto LAB_001138ce;
         }

         iVar22 = CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(this_01, lVar4);
         if (iVar22 != 0) goto LAB_00115fd3;
         CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(this_01);
         pauVar40 = *(undefined1(**) [16])( this + 0xb98 );
         if (lVar45 != 0) {
            memmove(pauVar40[3] + 8, pauVar40, lVar45 * 0x38);
         }

      }

      lVar35 = lVar35 + 1;
      *pauVar40 = _local_208;
      pauVar40[1] = _local_1f8;
      *(undefined4*)pauVar40[2] = local_1e8._0_4_;
      *(undefined4*)( pauVar40[2] + 4 ) = local_1e8._4_4_;
      *(undefined4*)( pauVar40[2] + 8 ) = local_1e8._8_4_;
      *(undefined4*)( pauVar40[2] + 0xc ) = local_1e8._12_4_;
      *(undefined8*)pauVar40[3] = local_1d8;
      lVar37 = lVar37 + 0x38;
   }
 while ( true );
}
if (this[0xaed] != (AnimationBezierTrackEdit)0x0) {
   fVar46 = *(float*)( this + 0xaf0 );
   fVar59 = *(float*)( this + 0xaf4 );
   fVar58 = *(float*)( this + 0xaf8 );
   fVar60 = *(float*)( this + 0xafc );
   fVar47 = fVar46;
   if (fVar46 <= fVar58) {
      fVar47 = fVar58;
      fVar58 = fVar46;
   }

   fVar46 = fVar59;
   if (fVar59 <= fVar60) {
      fVar46 = fVar60;
      fVar60 = fVar59;
   }

   if (_notification(int)::{lambda()
   #28
   iVar22 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #28
   if (iVar22 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()
      #28
      __cxa_atexit(StringName::~StringName,
                           &_notification(int)::{lambda()
      #28
      __cxa_guard_release(&_notification(int)::{lambda()
      #28
   }

}
_local_208 = Control::get_theme_color
                                 ((StringName *)this,
                                  (StringName *)
                                  &_notification(int)::{lambda()#28bVar21 = SUB81((Vector2*)local_208, 0);local_248 = fVar58;fStack_244 = fVar60;fStack_240 = fVar47 - fVar58;fStack_23c = fVar46 - fVar60;CanvasItem::draw_rect((Rect2*)this, (Color*)&local_248, bVar21, _LC145, true);fVar59 = (float)EditorScale::get_scale();fVar59 = roundf(fVar59);if (_notification(int)::{lambda()#29iVar22 = __cxa_guard_acquire(&_notification(int)::{lambda()#29if (iVar22 != 0) {
   _scs_create((char *)&_notification(int)::{lambda()
   #29
   __cxa_atexit(StringName::~StringName,
                           &_notification(int)::{lambda()
   #29
   __cxa_guard_release(&_notification(int)::{lambda()
   #29
}
}
          _local_208 = Control::get_theme_color
                                 ((StringName *)this,
                                  (StringName *)
                                  &_notification(int)::{lambda()#29local_248 = fVar58;fStack_244 = fVar60;fStack_240 = fVar47 - fVar58;fStack_23c = fVar46 - fVar60;CanvasItem::draw_rect((Rect2*)this, (Color*)&local_248, bVar21, fVar59, false);}RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::~RBMap((RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>*)&local_398);RBMap<int,Color,Comparator<int>,DefaultAllocator>::clear(local_500);if (local_3b8 != (undefined8*)0x0) {
   Memory::free_static(local_3b8, false);
}
if (local_410 != (Object*)0x0) {
   cVar20 = RefCounted::unreference();
   if (cVar20 != '\0') {
      cVar20 = predelete_handler(local_410);
      if (cVar20 != '\0') {
         ( **(code**)( *(long*)local_410 + 0x140 ) )(local_410);
         Memory::free_static(local_410, false);
      }

   }

}
}goto LAB_0011354d;}local_590 = *(CowData<char32_t>**)( this + 3000 );}
  else{
   if (param_1 != 10000) goto LAB_0011354d;
   pSVar38 = (String*)EditorSettings::get_singleton();
   local_338 = (Object*)0x0;
   String::parse_latin1((String*)&local_338, "editors/panning");
   cVar20 = EditorSettings::check_changed_settings_in_group(pSVar38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);
   if (cVar20 == '\0') goto LAB_0011354d;
   local_590 = *(CowData<char32_t>**)( this + 3000 );
}
local_338 = (Object*)0x0;String::parse_latin1((String*)&local_338, "editors/panning/simple_panning");_EDITOR_GET((String*)local_208);bVar21 = Variant::operator_cast_to_bool((Variant*)local_208);local_378 = (long*)0x0;String::parse_latin1((String*)&local_378, "canvas_item_editor/pan_view");ED_GET_SHORTCUT((String*)&local_358);local_398 = 0;String::parse_latin1((String*)&local_398, "editors/panning/animation_editors_panning_scheme");_EDITOR_GET((String*)&local_248);iVar22 = Variant::operator_cast_to_int((Variant*)&local_248);ViewPanner::setup(local_590, iVar22, (String*)&local_358, bVar21);if (Variant::needs_deinit[(int)local_248] != '\0') {
   Variant::_clear_internal();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_398);Ref<Shortcut>::unref((Ref<Shortcut>*)&local_358);CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);if (Variant::needs_deinit[(int)local_208._0_4_] != '\0') {
   Variant::_clear_internal();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);pVVar2 = *(Viewport**)( this + 3000 );local_338 = (Object*)0x0;String::parse_latin1((String*)&local_338, "editors/panning/warped_mouse_panning");_EDITOR_GET((String*)local_208);Variant::operator_cast_to_bool((Variant*)local_208);ViewPanner::setup_warped_panning(pVVar2, SUB81(*(undefined8*)( this + 600 ), 0));if (Variant::needs_deinit[(int)local_208._0_4_] != '\0') {
   Variant::_clear_internal();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_338);LAB_0011354d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_00115fd3:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);pauVar40 = *(undefined1(**) [16])( this + 0xb98 );LAB_001138ce:lVar37 = lVar37 + 0x38;lVar35 = lVar35 + 1;goto joined_r0x001138a7;}/* AnimationBezierTrackEdit::get_tooltip(Vector2 const&) const */Vector2 *AnimationBezierTrackEdit::get_tooltip(Vector2 *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Control::get_tooltip(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* AnimationBezierTrackEdit::is_class_ptr(void*) const */uint AnimationBezierTrackEdit::is_class_ptr(AnimationBezierTrackEdit *this, void *param_1) {
   return (uint)CONCAT71(0x12a2, (undefined4*)param_1 == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12a1, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12a2, (undefined4*)param_1 == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12a2, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x12a2, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this) {
   return;
}
/* CallableCustomMethodPointer<Range, void, double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Range,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Range,void,double> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this) {
   return;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::get_argument_meta(int) const */char MethodBindT<Ref<Animation>const&,int,float,bool>::get_argument_meta(MethodBindT<Ref<Animation>const&,int,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (param_1 != 1) {
      cVar1 = ( param_1 == 2 ) * '\t';
   }

   return cVar1;
}
/* MethodBindT<Ref<Animation> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Animation>const&>::_gen_argument_type(MethodBindT<Ref<Animation>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Animation> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Animation>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::get_argument_count(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::get_argument_count(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<Range, void, double>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Range,void,double>::get_argument_count(CallableCustomMethodPointer<Range,void,double> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::get_argument_count(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool,
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::get_argument_count(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::get_argument_count(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::get_argument_count(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::_gen_argument_type(int) const */char MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::_gen_argument_type(MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( ( ( (uint)param_1 < 7 ) && ( cVar1 = '\x18' ),param_1 != 0 ) ) && ( cVar1 = param_1 != 1 )) {
      if (param_1 == 4) {
         return '\x05';
      }

      return ( param_1 == 5 ) * '\x03' + '\x02';
   }

   return cVar1;
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::get_argument_meta(int) const */char MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::get_argument_meta(MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (( param_1 != 1 ) && ( cVar1 = param_1 != 2 )) {
      return ( param_1 == 3 ) * '\t';
   }

   return cVar1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<Range, void, double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Range,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Range,void,double> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00129f58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00129f58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Animation> const&>::~MethodBindT() */void MethodBindT<Ref<Animation>const&>::~MethodBindT(MethodBindT<Ref<Animation>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00129fb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Animation> const&>::~MethodBindT() */void MethodBindT<Ref<Animation>const&>::~MethodBindT(MethodBindT<Ref<Animation>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00129fb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,float,bool>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a018;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,float,bool>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a018;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a078;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a078;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a0d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0012a0d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* AnimationBezierTrackEdit::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationBezierTrackEdit::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationBezierTrackEdit::_property_can_revertv(StringName const&) const */undefined8 AnimationBezierTrackEdit::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00130008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::_set_color(RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::Element*, int) [clone .part.0] */void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_set_color(Element *param_1, int param_2) {
   _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
   return;
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::_gen_argument_type(int) const */char MethodBindT<Ref<Animation>const&,int,float,bool>::_gen_argument_type(MethodBindT<Ref<Animation>const&,int,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( ( (uint)param_1 < 4 ) && ( cVar1 = '\x18' ),param_1 != 0 )) {
      cVar1 = ( param_1 == 2 ) * '\x02' + '\x01';
   }

   return cVar1;
}
/* CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<AnimationBezierTrackEdit::EditPoint>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AnimationBezierTrackEdit::_bind_methods() [clone .cold] */void AnimationBezierTrackEdit::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* AnimationBezierTrackEdit::_notification(int) [clone .cold] */void AnimationBezierTrackEdit::_notification(int param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<Range, void, double>::get_object() const */undefined8 CallableCustomMethodPointer<Range,void,double>::get_object(CallableCustomMethodPointer<Range,void,double> *this) {
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
         goto LAB_001172cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001172cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001172cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::get_object() const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this) {
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
         goto LAB_001173cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001173cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001173cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::get_object(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this) {
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
         goto LAB_001174cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001174cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001174cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::get_object(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this) {
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
         goto LAB_001175cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001175cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001175cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::get_object(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this) {
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
         goto LAB_001176cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001176cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001176cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::get_object(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this) {
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
         goto LAB_001177cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001177cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001177cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::get_object() const */undefined8 CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::get_object(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this) {
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
         goto LAB_001178cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001178cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001178cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool, int>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::get_object(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this) {
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
         goto LAB_001179cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001179cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001179cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* AnimationBezierTrackEdit::_validate_propertyv(PropertyInfo&) const */void AnimationBezierTrackEdit::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_00130010 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationBezierTrackEdit::_setv(StringName const&, Variant const&) */undefined8 AnimationBezierTrackEdit::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00130018 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00117b88) *//* AnimationBezierTrackEdit::_getv(StringName const&, Variant&) const */undefined8 AnimationBezierTrackEdit::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00130020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* RBMap<float, int, Comparator<float>, DefaultAllocator>::_cleanup_tree(RBMap<float, int,
   Comparator<float>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<float,int,Comparator<float>,DefaultAllocator>::_cleanup_tree(RBMap<float,int,Comparator<float>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBMap<int, Color, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Color,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<int,Color,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBMap<int,Color,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Rect2,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBMap<int,Rect2,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBMap<AnimationTrackEditor::SelectedKey, AnimationTrackEditor::KeyInfo,
   Comparator<AnimationTrackEditor::SelectedKey>,
   DefaultAllocator>::_cleanup_tree(RBMap<AnimationTrackEditor::SelectedKey,
   AnimationTrackEditor::KeyInfo, Comparator<AnimationTrackEditor::SelectedKey>,
   DefaultAllocator>::Element*) [clone .part.0] */void RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>::_cleanup_tree(RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::_cleanup_tree(RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::Element*) [clone .part.0] */void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_cleanup_tree(RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar5, false);
         }

         Memory::free_static(pEVar2, false);
      }

      Memory::free_static(pEVar1, false);
   }

   Memory::free_static(param_1, false);
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
/* AnimationBezierTrackEdit::_get_class_namev() const */undefined8 *AnimationBezierTrackEdit::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00119c43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00119c43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationBezierTrackEdit");
         goto LAB_00119cae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationBezierTrackEdit");
   LAB_00119cae:return &_get_class_namev();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* AnimationBezierTrackEdit::get_class() const */void AnimationBezierTrackEdit::get_class(void) {
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
/* Rect2::has_point(Vector2 const&) const */bool Rect2::has_point(Rect2 *this, Vector2 *param_1) {
   bool bVar1;
   if (( *(float*)( this + 8 ) <= 0.0 && *(float*)( this + 8 ) != 0.0 ) || ( *(float*)( this + 0xc ) <= 0.0 && *(float*)( this + 0xc ) != 0.0 )) {
      _err_print_error("has_point", "./core/math/rect2.h", 0xb9, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
   }

   bVar1 = false;
   if (*(float*)this <= *(float*)param_1) {
      if (( *(float*)( this + 4 ) <= *(float*)( param_1 + 4 ) ) && ( *(float*)param_1 < *(float*)this + *(float*)( this + 8 ) )) {
         bVar1 = *(float*)( param_1 + 4 ) < *(float*)( this + 4 ) + *(float*)( this + 0xc );
      }

   }

   return bVar1;
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
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
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* Ref<Animation>::unref() */void Ref<Animation>::unref(Ref<Animation> *this) {
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
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::clear() */void RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear(RBMap<int,Rect2,Comparator<int>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   pvVar6 = *(void**)this;
   if (pvVar6 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar6 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar7 != pEVar4) {
                  pEVar5 = *(Element**)( pEVar4 + 0x10 );
                  if (pEVar7 != pEVar5) {
                     _cleanup_tree(this, pEVar5);
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (pEVar5 != *(Element**)( pEVar4 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar7 = *(Element**)( pEVar2 + 8 );
               if (pEVar7 != pEVar4) {
                  if (*(Element**)( pEVar7 + 0x10 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
                  }

                  Memory::free_static(pEVar7, false);
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (pEVar3 != *(Element**)( pEVar7 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar2 + 8 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar6 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar6 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar6, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* RBMap<int, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>, Comparator<int>,
   DefaultAllocator>::_cleanup_tree(RBMap<int, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar4 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar2 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar2 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar6 + 8 );
            if (pEVar2 != pEVar3) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
               if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
               }

               Memory::free_static(pEVar2, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
            if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
            }

            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar4 + 8 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
            if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
            }

            Memory::free_static(pEVar2, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar4 + 0x38 ));
         if (*(void**)( pEVar4 + 0x38 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pEVar4 + 0x38 ), false);
         }

         Memory::free_static(pEVar4, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
            if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
            }

            Memory::free_static(pEVar6, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar6 = *(Element**)( pEVar2 + 8 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
            if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
            }

            Memory::free_static(pEVar6, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
         if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
         }

         Memory::free_static(pEVar2, false);
      }

      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar1 + 0x38 ));
      if (*(void**)( pEVar1 + 0x38 ) != (void*)0x0) {
         Memory::free_static(*(void**)( pEVar1 + 0x38 ), false);
      }

      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar4 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar2 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar2 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar3 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar2) {
               pEVar5 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar3 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar2 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
               if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
               }

               Memory::free_static(pEVar2, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
            if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
            }

            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar4 + 8 );
         if (pEVar6 != pEVar2) {
            pEVar3 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar6 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar3 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar6) {
               pEVar5 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar3 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
               if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
               }

               Memory::free_static(pEVar6, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
            if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
            }

            Memory::free_static(pEVar2, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar4 + 0x38 ));
         if (*(void**)( pEVar4 + 0x38 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pEVar4 + 0x38 ), false);
         }

         Memory::free_static(pEVar4, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar4 != pEVar2) {
         pEVar6 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar4 != pEVar6) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar4 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar4 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar3 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               pEVar5 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar3 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar4 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar4 + 0x38 ));
               if (*(void**)( pEVar4 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar4 + 0x38 ), false);
               }

               Memory::free_static(pEVar4, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
            if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
            }

            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar4 = *(Element**)( pEVar2 + 8 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar4 + 0x10 );
            if (pEVar6 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar6 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar3 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
               if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
               }

               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar4 + 8 );
            if (pEVar3 != pEVar6) {
               pEVar5 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar3 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar6 + 0x38 ));
               if (*(void**)( pEVar6 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar6 + 0x38 ), false);
               }

               Memory::free_static(pEVar6, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar4 + 0x38 ));
            if (*(void**)( pEVar4 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar4 + 0x38 ), false);
            }

            Memory::free_static(pEVar4, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
         if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
         }

         Memory::free_static(pEVar2, false);
      }

      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar1 + 0x38 ));
      if (*(void**)( pEVar1 + 0x38 ) != (void*)0x0) {
         Memory::free_static(*(void**)( pEVar1 + 0x38 ), false);
      }

      Memory::free_static(pEVar1, false);
   }

   RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( param_1 + 0x38 ));
   if (*(void**)( param_1 + 0x38 ) != (void*)0x0) {
      Memory::free_static(*(void**)( param_1 + 0x38 ), false);
   }

   Memory::free_static(param_1, false);
   return;
}
/* RBMap<int, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>, Comparator<int>,
   DefaultAllocator>::clear() */void RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::clear(RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   void *pvVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   pvVar4 = *(void**)this;
   if (pvVar4 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar4 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar7) {
               pEVar5 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar2 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar7 + 0x38 ));
               if (*(void**)( pEVar7 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar7 + 0x38 ), false);
               }

               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar7) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
               if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
               }

               Memory::free_static(pEVar2, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
            if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar7 + 0x38 ));
               if (*(void**)( pEVar7 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar7 + 0x38 ), false);
               }

               Memory::free_static(pEVar7, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar7) {
               pEVar5 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar3 != pEVar5) {
                  pEVar6 = *(Element**)( pEVar5 + 0x10 );
                  if (pEVar3 != pEVar6) {
                     _cleanup_tree(this, pEVar6);
                     pEVar6 = *(Element**)( this + 8 );
                  }

                  if (pEVar6 != *(Element**)( pEVar5 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar5 + 8 ));
                  }

                  RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar5 + 0x38 ));
                  if (*(void**)( pEVar5 + 0x38 ) != (void*)0x0) {
                     Memory::free_static(*(void**)( pEVar5 + 0x38 ), false);
                  }

                  Memory::free_static(pEVar5, false);
                  pEVar5 = *(Element**)( this + 8 );
               }

               pEVar3 = *(Element**)( pEVar7 + 8 );
               if (pEVar5 != pEVar3) {
                  pEVar6 = *(Element**)( pEVar3 + 0x10 );
                  if (pEVar5 != pEVar6) {
                     _cleanup_tree(this, pEVar6);
                     pEVar6 = *(Element**)( this + 8 );
                  }

                  if (pEVar6 != *(Element**)( pEVar3 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                  }

                  RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar3 + 0x38 ));
                  if (*(void**)( pEVar3 + 0x38 ) != (void*)0x0) {
                     Memory::free_static(*(void**)( pEVar3 + 0x38 ), false);
                  }

                  Memory::free_static(pEVar3, false);
               }

               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar7 + 0x38 ));
               if (*(void**)( pEVar7 + 0x38 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( pEVar7 + 0x38 ), false);
               }

               Memory::free_static(pEVar7, false);
            }

            RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ));
            if (*(void**)( pEVar2 + 0x38 ) != (void*)0x0) {
               Memory::free_static(*(void**)( pEVar2 + 0x38 ), false);
            }

            Memory::free_static(pEVar2, false);
         }

         RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar1 + 0x38 ));
         if (*(void**)( pEVar1 + 0x38 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pEVar1 + 0x38 ), false);
         }

         Memory::free_static(pEVar1, false);
         pvVar4 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar4 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( (long)pvVar4 + 0x38 ));
      if (*(void**)( (long)pvVar4 + 0x38 ) != (void*)0x0) {
         Memory::free_static(*(void**)( (long)pvVar4 + 0x38 ), false);
      }

      Memory::free_static(pvVar4, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* Callable
   create_custom_callable_function_pointer<AnimationBezierTrackEdit>(AnimationBezierTrackEdit*, char
   const*, void (AnimationBezierTrackEdit::*)()) */AnimationBezierTrackEdit *create_custom_callable_function_pointer<AnimationBezierTrackEdit>(AnimationBezierTrackEdit *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC30;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00129ad8;
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
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::clear() */void HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::clear(HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this) {
   if (*(long*)this != 0) {
      if (*(int*)( this + 0x24 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x24 ) = 0;
      }

      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */int *HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1) {
   uint uVar1;
   void *pvVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
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
   char cVar22;
   uint uVar23;
   ulong uVar24;
   undefined8 uVar25;
   long lVar26;
   long lVar27;
   long lVar28;
   uint *puVar29;
   int iVar30;
   uint *in_RDX;
   ulong uVar31;
   uint uVar32;
   HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *in_RSI;
   uint uVar33;
   ulong uVar34;
   undefined4 uVar35;
   uint uVar36;
   ulong uVar37;
   uint uVar38;
   uint uVar39;
   uint *puVar40;
   long in_FS_OFFSET;
   uint local_98;
   long local_78;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
   if (*(long*)in_RSI == 0) {
      uVar24 = (ulong)uVar23 << 2;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x18 ) = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)in_RSI = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x10 ) = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 8 ) = uVar25;
      if (uVar23 != 0) {
         memset(*(void**)( in_RSI + 0x18 ), 0, uVar24);
      }

   }

   uVar38 = *in_RDX;
   local_44 = 0;
   cVar22 = _lookup_pos(in_RSI, (int*)(ulong)uVar38, &local_44);
   if (cVar22 == '\0') {
      uVar1 = *(uint*)( in_RSI + 0x24 );
      if ((float)uVar23 * __LC42 < (float)( uVar1 + 1 )) {
         if (*(int*)( in_RSI + 0x20 ) == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            iVar30 = *(int*)( in_RSI + 0x24 );
            local_78 = *(long*)in_RSI;
            uVar23 = 0xffffffff;
            goto LAB_0011bb63;
         }

         uVar23 = *(int*)( in_RSI + 0x20 ) + 1;
         uVar24 = (ulong)uVar23;
         if (uVar23 < 2) {
            uVar24 = 2;
         }

         uVar23 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
         *(int*)( in_RSI + 0x20 ) = (int)uVar24;
         pvVar2 = *(void**)( in_RSI + 0x18 );
         uVar24 = (ulong)uVar23 << 2;
         pvVar3 = *(void**)( in_RSI + 0x10 );
         uVar25 = Memory::alloc_static(uVar24, false);
         *(undefined8*)( in_RSI + 0x18 ) = uVar25;
         uVar25 = Memory::realloc_static(*(void**)in_RSI, uVar24, false);
         *(undefined8*)in_RSI = uVar25;
         uVar25 = Memory::alloc_static(uVar24, false);
         *(undefined8*)( in_RSI + 0x10 ) = uVar25;
         lVar26 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar24, false);
         *(long*)( in_RSI + 8 ) = lVar26;
         if (uVar23 != 0) {
            memset(*(void**)( in_RSI + 0x18 ), 0, uVar24);
         }

         if (*(int*)( in_RSI + 0x24 ) != 0) {
            uVar24 = 0;
            lVar4 = *(long*)( in_RSI + 0x18 );
            lVar5 = *(long*)( in_RSI + 0x10 );
            do {
               uVar37 = uVar24 & 0xffffffff;
               uVar35 = (undefined4)uVar24;
               uVar39 = 0;
               uVar23 = *(uint*)( (long)pvVar2 + ( ulong ) * (uint*)( (long)pvVar3 + uVar24 * 4 ) * 4 );
               uVar31 = (ulong)uVar23;
               uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
               uVar34 = CONCAT44(0, uVar38);
               lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
               auVar6._8_8_ = 0;
               auVar6._0_8_ = uVar31 * lVar27;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar34;
               lVar28 = SUB168(auVar6 * auVar14, 8) * 4;
               iVar30 = SUB164(auVar6 * auVar14, 8);
               puVar40 = (uint*)( lVar4 + lVar28 );
               uVar1 = *puVar40;
               if (uVar1 == 0) {
                  lVar27 = uVar24 * 4;
               }
 else {
                  do {
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar1 * lVar27;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar34;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(( uVar38 + iVar30 ) - SUB164(auVar7 * auVar15, 8)) * lVar27;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar34;
                     local_98 = SUB164(auVar8 * auVar16, 8);
                     if (local_98 < uVar39) {
                        *(int*)( lVar5 + uVar37 * 4 ) = iVar30;
                        uVar23 = *puVar40;
                        *puVar40 = (uint)uVar31;
                        uVar1 = *(uint*)( lVar28 + lVar26 );
                        uVar31 = (ulong)uVar23;
                        *(uint*)( lVar28 + lVar26 ) = (uint)uVar37;
                        uVar37 = (ulong)uVar1;
                        uVar39 = local_98;
                     }

                     uVar35 = (undefined4)uVar37;
                     uVar23 = (uint)uVar31;
                     uVar39 = uVar39 + 1;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(iVar30 + 1) * lVar27;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar34;
                     lVar28 = SUB168(auVar9 * auVar17, 8) * 4;
                     iVar30 = SUB164(auVar9 * auVar17, 8);
                     puVar40 = (uint*)( lVar4 + lVar28 );
                     uVar1 = *puVar40;
                  }
 while ( uVar1 != 0 );
                  lVar27 = uVar37 << 2;
               }

               *puVar40 = uVar23;
               uVar24 = uVar24 + 1;
               *(int*)( lVar5 + lVar27 ) = iVar30;
               *(undefined4*)( lVar26 + lVar28 ) = uVar35;
            }
 while ( (uint)uVar24 < *(uint*)( in_RSI + 0x24 ) );
         }

         Memory::free_static(pvVar2, false);
         Memory::free_static(pvVar3, false);
         uVar38 = *in_RDX;
         uVar1 = *(uint*)( in_RSI + 0x24 );
      }

      uVar23 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar39 = ( uVar23 ^ uVar23 >> 0xd ) * -0x3d4d51cb;
      uVar23 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar24 = 1;
         uVar23 = 1;
      }
 else {
         uVar24 = (ulong)uVar23;
      }

      uVar33 = 0;
      local_78 = *(long*)in_RSI;
      *(uint*)( local_78 + (ulong)uVar1 * 4 ) = uVar38;
      lVar4 = *(long*)( in_RSI + 0x18 );
      lVar5 = *(long*)( in_RSI + 8 );
      uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
      uVar31 = CONCAT44(0, uVar38);
      lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
      lVar27 = *(long*)( in_RSI + 0x10 );
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar24 * lVar28;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar31;
      lVar26 = SUB168(auVar10 * auVar18, 8) * 4;
      iVar30 = SUB164(auVar10 * auVar18, 8);
      puVar40 = (uint*)( lVar4 + lVar26 );
      uVar1 = *puVar40;
      uVar39 = *(uint*)( in_RSI + 0x24 );
      while (uVar1 != 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar1 * lVar28;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar31;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(( uVar38 + iVar30 ) - SUB164(auVar11 * auVar19, 8)) * lVar28;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar31;
         local_98 = SUB164(auVar12 * auVar20, 8);
         uVar32 = uVar23;
         uVar36 = uVar39;
         if (local_98 < uVar33) {
            puVar29 = (uint*)( lVar26 + lVar5 );
            *(int*)( lVar27 + (ulong)uVar39 * 4 ) = iVar30;
            uVar32 = *puVar40;
            *puVar40 = uVar23;
            uVar36 = *puVar29;
            *puVar29 = uVar39;
            uVar33 = local_98;
         }

         uVar33 = uVar33 + 1;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(iVar30 + 1) * lVar28;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar31;
         lVar26 = SUB168(auVar13 * auVar21, 8) * 4;
         iVar30 = SUB164(auVar13 * auVar21, 8);
         puVar40 = (uint*)( lVar4 + lVar26 );
         uVar39 = uVar36;
         uVar23 = uVar32;
         uVar1 = *puVar40;
      }
;
      *puVar40 = uVar23;
      *(int*)( lVar27 + (ulong)uVar39 * 4 ) = iVar30;
      *(uint*)( lVar5 + lVar26 ) = uVar39;
      uVar23 = *(uint*)( in_RSI + 0x24 );
      iVar30 = uVar23 + 1;
      *(int*)( in_RSI + 0x24 ) = iVar30;
   }
 else {
      iVar30 = *(int*)( in_RSI + 0x24 );
      local_78 = *(long*)in_RSI;
      uVar23 = local_44;
   }

   LAB_0011bb63:param_1[2] = iVar30;
   *(long*)param_1 = local_78;
   param_1[3] = uVar23;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare, DefaultAllocator>::clear() */void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear(RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   void *pvVar5;
   Element *pEVar6;
   pvVar5 = *(void**)this;
   if (pvVar5 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar2 = *(Element**)( pEVar6 + 8 );
               if (pEVar2 != pEVar4) {
                  if (*(Element**)( pEVar2 + 0x10 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (pEVar4 != *(Element**)( pEVar2 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                  }

                  Memory::free_static(pEVar2, false);
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar3 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar3 = *(Element**)( pEVar6 + 8 );
               if (pEVar3 != pEVar4) {
                  if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                  }

                  Memory::free_static(pEVar3, false);
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar5 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar5 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar5, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* AnimationBezierTrackEdit::~AnimationBezierTrackEdit() */void AnimationBezierTrackEdit::~AnimationBezierTrackEdit(AnimationBezierTrackEdit *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   *(undefined***)this = &PTR__initialize_classv_00129770;
   if (*(long*)( this + 3000 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 3000 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::clear((RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>*)( this + 0xba0 ));
   if (*(void**)( this + 0xba0 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xba0 ), false);
   }

   if (*(long*)( this + 0xb98 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xb98 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0xb98 );
         *(undefined8*)( this + 0xb98 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   pvVar6 = *(void**)( this + 0xb58 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xb7c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb78 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xb7c ) = 0;
            *(undefined1(*) [16])( this + 0xb68 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xb60 ) + lVar5 ) != 0) {
                  *(int*)( *(long*)( this + 0xb60 ) + lVar5 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar6 + lVar5 * 2 ), false);
                  pvVar6 = *(void**)( this + 0xb58 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0xb7c ) = 0;
            *(undefined1(*) [16])( this + 0xb68 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011bf91;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xb60 ), false);
   }

   LAB_0011bf91:pvVar6 = *(void**)( this + 0xb28 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xb4c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb48 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xb4c ) = 0;
            *(undefined1(*) [16])( this + 0xb38 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xb30 ) + lVar5 ) != 0) {
                  *(int*)( *(long*)( this + 0xb30 ) + lVar5 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar6 + lVar5 * 2 ), false);
                  pvVar6 = *(void**)( this + 0xb28 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0xb4c ) = 0;
            *(undefined1(*) [16])( this + 0xb38 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0011c027;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xb30 ), false);
   }

   LAB_0011c027:pvVar6 = *(void**)( this + 0xa78 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xa9c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xa90 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa98 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0xa9c ) = 0;
      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xa88 ), false);
      Memory::free_static(*(void**)( this + 0xa80 ), false);
      Memory::free_static(*(void**)( this + 0xa90 ), false);
   }

   pvVar6 = *(void**)( this + 0xa50 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xa74 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) != 0) {
            memset(*(void**)( this + 0xa68 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa70 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0xa74 ) = 0;
      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xa60 ), false);
      Memory::free_static(*(void**)( this + 0xa58 ), false);
      Memory::free_static(*(void**)( this + 0xa68 ), false);
   }

   RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::clear((RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>*)( this + 0xa38 ));
   pvVar6 = *(void**)( this + 0xa38 );
   if (pvVar6 != (void*)0x0) {
      RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( (long)pvVar6 + 0x38 ));
      if (*(void**)( (long)pvVar6 + 0x38 ) != (void*)0x0) {
         Memory::free_static(*(void**)( (long)pvVar6 + 0x38 ), false);
      }

      Memory::free_static(pvVar6, false);
   }

   RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( this + 0xa20 ));
   if (*(void**)( this + 0xa20 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xa20 ), false);
   }

   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 2584 ) ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( this + ( -8*i + 2584 ) );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 320 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

   }

   if (*(long*)( this + 0xa00 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xa00 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0xa00 );
         *(undefined8*)( this + 0xa00 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x9e8 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x9e8 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
            Control::~Control((Control*)this);
            return;
         }

      }

   }

   Control::~Control((Control*)this);
   return;
}
/* AnimationBezierTrackEdit::~AnimationBezierTrackEdit() */void AnimationBezierTrackEdit::~AnimationBezierTrackEdit(AnimationBezierTrackEdit *this) {
   ~AnimationBezierTrackEdit(this)
   ;;
   operator_delete(this, 0xbc0);
   return;
}
/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */void EditorUndoRedoManager::add_do_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
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
/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */void EditorUndoRedoManager::add_undo_method<>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2) {
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
/* void EditorUndoRedoManager::add_do_method<int>(Object*, StringName const&, int) */void EditorUndoRedoManager::add_do_method<int>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3) {
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
/* void EditorUndoRedoManager::add_do_method<int, float, Variant, Vector2, Vector2>(Object*,
   StringName const&, int, float, Variant, Vector2, Vector2) */void EditorUndoRedoManager::add_do_method<int,float,Variant,Vector2,Vector2>(float param_4, undefined8 param_2_00, undefined8 param_3_00, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, Variant *param_8) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   undefined8 local_118;
   undefined8 local_110;
   Variant *local_108;
   Variant *pVStack_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_e8;
   Variant local_d8[24];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_118 = param_3_00;
   local_110 = param_2_00;
   Variant::Variant(local_d8, param_3);
   Variant::Variant(local_c0, param_4);
   Variant::Variant(local_a8, param_8);
   Variant::Variant(local_90, (Vector2*)&local_110);
   Variant::Variant(local_78, (Vector2*)&local_118);
   pVVar2 = local_48;
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_108 = local_d8;
   pVStack_100 = local_c0;
   local_f8 = local_a8;
   pVStack_f0 = local_90;
   local_e8 = local_78;
   EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)&local_108);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_d8 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<int, float>(Object*, StringName const&, int, float)
    */void EditorUndoRedoManager::add_undo_method<int,float>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3, float param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_98;
   Variant *pVStack_90;
   Variant local_78[24];
   Variant local_60[24];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_78, param_3);
   Variant::Variant(local_60, param_4);
   local_48 = 0;
   pVVar2 = (Variant*)&local_30;
   local_40 = (undefined1[16])0x0;
   local_98 = local_78;
   pVStack_90 = local_60;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)&local_98);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_78 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<AnimationBezierTrackEdit::AnimMoveRestore, DefaultAllocator>::~List() */void List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator>::~List(List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator> *this) {
   void *pvVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*puVar2;
      if (pvVar1 == (void*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar1 + 0x40 ) == puVar2) {
         *puVar2 = *(undefined8*)( (long)pvVar1 + 0x30 );
         if (pvVar1 == (void*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( (long)pvVar1 + 0x38 );
         }

         if (*(long*)( (long)pvVar1 + 0x38 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x38 ) + 0x30 ) = *(undefined8*)( (long)pvVar1 + 0x30 );
         }

         if (*(long*)( (long)pvVar1 + 0x30 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x30 ) + 0x38 ) = *(undefined8*)( (long)pvVar1 + 0x38 );
         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar1 + 0x10 )] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(pvVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* void EditorUndoRedoManager::add_do_method<int, int>(Object*, StringName const&, int, int) */void EditorUndoRedoManager::add_do_method<int,int>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3, int param_4) {
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
   Variant::Variant(local_70, param_4);
   pVVar2 = (Variant*)local_40;
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_a8 = local_88;
   pVStack_a0 = local_70;
   EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)&local_a8);
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
/* void EditorUndoRedoManager::add_do_method<int, float>(Object*, StringName const&, int, float) */void EditorUndoRedoManager::add_do_method<int,float>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3, float param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_98;
   Variant *pVStack_90;
   Variant local_78[24];
   Variant local_60[24];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_78, param_3);
   Variant::Variant(local_60, param_4);
   local_48 = 0;
   pVVar2 = (Variant*)&local_30;
   local_40 = (undefined1[16])0x0;
   local_98 = local_78;
   pVStack_90 = local_60;
   EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)&local_98);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_78 );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<int, double, Variant, int>(Object*, StringName
   const&, int, double, Variant, int) */void EditorUndoRedoManager::add_undo_method<int,double,Variant,int>(double param_4, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, Variant *param_6, int param_7) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, param_6);
   Variant::Variant(local_70, param_7);
   local_50 = (undefined1[16])0x0;
   pVVar2 = (Variant*)local_40;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)&local_e8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_do_method<int, int, Vector2, float>(Object*, StringName const&,
   int, int, Vector2, float) */void EditorUndoRedoManager::add_do_method<int,int,Vector2,float>(undefined8 param_1_00, float param_2_00, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, int param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   undefined8 local_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = param_1_00;
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, (Vector2*)&local_f0);
   Variant::Variant(local_70, param_2_00);
   local_50 = (undefined1[16])0x0;
   pVVar2 = (Variant*)local_40;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_do_methodp((Object*)this, param_1, param_2, (int)&local_e8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<int, int, Vector2, float>(Object*, StringName const&,
   int, int, Vector2, float) */void EditorUndoRedoManager::add_undo_method<int,int,Vector2,float>(undefined8 param_1_00, float param_2_00, EditorUndoRedoManager *this, StringName *param_1, Variant **param_2, int param_3, int param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   undefined8 local_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = param_1_00;
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, (Vector2*)&local_f0);
   Variant::Variant(local_70, param_2_00);
   local_50 = (undefined1[16])0x0;
   pVVar2 = (Variant*)local_40;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, param_1, param_2, (int)&local_e8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x11d03d);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC62;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0011d0fa;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC62;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0011d0fa:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
            if (pvVar5 == (void*)0x0) goto LAB_0011d3d4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0011d3d4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::call(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0011d61f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0011d61f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0011d5f8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0011d6e1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011d61f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011d6e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::call(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   ulong *puVar9;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011d8dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_0011d8dd;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
            uVar4 = _LC100;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC101;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar7 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011d8b6. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar7, iVar6);
               return;
            }

            goto LAB_0011d99f;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011d8dd:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011d99f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::call(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0011db68;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_0011db68;
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
            uVar4 = _LC101;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011db17. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_0011dc2a;
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
      LAB_0011db68:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011dc2a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<Range, void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Range,void,double>::call(CallableCustomMethodPointer<Range,void,double> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0011dde6;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0011dde6;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar4 = _LC102;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_double(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011dd95. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
               return;
            }

            goto LAB_0011dea8;
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
      LAB_0011dde6:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011dea8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::call(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0011e069;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0011e069;
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
            uVar4 = _LC103;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011e018. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_0011e12b;
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
      LAB_0011e069:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011e12b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::call(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   ulong *puVar9;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0011e358;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_0011e358;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 4) {
         if (param_2 == 3) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
            uVar4 = _LC104;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 1);
            uVar4 = _LC105;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar10 = Variant::operator_cast_to_bool(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC101;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar7 = Variant::operator_cast_to_int(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0011e331. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar7, bVar10, iVar6);
               return;
            }

            goto LAB_0011e41a;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 3;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 3;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011e358:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011e41a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::call(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_58 >> 8;
         local_58 = (Object*)( uVar4 << 8 );
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         local_58 = (Object*)( uVar4 << 8 );
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
               goto LAB_0011e4e5;
            }

            if (param_2 != 3) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0011e4e5;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar11 & 1 ) != 0) {
               pcVar11 = *(code**)( pcVar11 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[2]);
            uVar3 = _LC106;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            local_58 = (Object*)0x0;
            pOVar8 = (Object*)Variant::get_validated_object();
            pOVar6 = local_58;
            if (pOVar8 != local_58) {
               if (pOVar8 == (Object*)0x0) {
                  if (local_58 != (Object*)0x0) {
                     local_58 = (Object*)0x0;
                     LAB_0011e5e0:cVar7 = RefCounted::unreference();
                     if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                  }

               }
 else {
                  pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEvent::typeinfo, 0);
                  if (pOVar6 != pOVar8) {
                     local_58 = pOVar8;
                     if (( pOVar8 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
                        local_58 = (Object*)0x0;
                     }

                     if (pOVar6 != (Object*)0x0) goto LAB_0011e5e0;
                  }

               }

            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)param_1[1], 5);
            uVar3 = _LC107;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar3 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar5 = _LC102;
            if (cVar7 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            fVar13 = Variant::operator_cast_to_float(*param_1);
            ( *pcVar11 )(fVar13, uVar3, (long*)( lVar1 + lVar2 ));
            if (( ( local_58 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_58,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         goto LAB_0011e4e5;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_60 = 0;local_58 = (Object*)0x11d42e;local_50 = 0x15;String::parse_latin1((StrRange*)&local_60);uitos((ulong)local_70);operator+((char *)local_68,(String *)"Invalid Object id \'");String::operator +((String*)&local_58, (String*)local_68);_err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref(local_68);CowData<char32_t>::_unref(local_70);CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);LAB_0011e4e5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::call(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
               goto LAB_0011e8b5;
            }

            if (param_2 != 2) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 2;
               goto LAB_0011e8b5;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)param_1[1]);
            uVar4 = _LC108;
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
                     LAB_0011e9b0:cVar6 = RefCounted::unreference();
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

                     if (pOVar5 != (Object*)0x0) goto LAB_0011e9b0;
                  }

               }

            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
            uVar4 = _LC109;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_Vector2(*param_1);
            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0011e8b5;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_50 = 0;String::parse_latin1((String*)&local_50, "\', can\'t call method.");uitos((ulong)local_60);operator+((char *)local_58,(String *)"Invalid Object id \'");String::operator +((String*)&local_48, (String*)local_58);_err_print_error(&_LC99, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);CowData<char32_t>::_unref(local_58);CowData<char32_t>::_unref(local_60);CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);LAB_0011e8b5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011ebff;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011ebff:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0011ecb3;
   }

   cVar6 = String::operator ==(param_1, "CanvasItem");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0011ecb3;
      }

      cVar6 = String::operator ==(param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_60 = 0;
            }
 else {
               pcVar4 = *(char**)( lVar5 + 8 );
               local_60 = 0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            lVar5 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            if (cVar6 != '\0') goto LAB_0011ecb3;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = String::operator ==(param_1, "Object");
            return uVar8;
         }

         goto LAB_0011ee98;
      }

   }

   LAB_0011ecb3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011ee98:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationBezierTrackEdit::is_class(String const&) const */undefined8 AnimationBezierTrackEdit::is_class(AnimationBezierTrackEdit *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011ef1f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011ef1f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0011efd3;
   }

   cVar6 = String::operator ==(param_1, "AnimationBezierTrackEdit");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0011efd3;
      }

      cVar6 = String::operator ==(param_1, "Control");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar8;
         }

         goto LAB_0011f0de;
      }

   }

   LAB_0011efd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0011f0de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
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
   local_78 = &_LC111;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC111;
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

         goto LAB_0011f36c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011f36c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_0011f5d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011f5d1:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00130028 != Object::_get_property_list) {
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

         goto LAB_0011f8a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011f8a1:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00130030 != CanvasItem::_get_property_list) {
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
/* AnimationBezierTrackEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void AnimationBezierTrackEdit::_get_property_listv(AnimationBezierTrackEdit *this, List *param_1, bool param_2) {
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
   local_78 = "AnimationBezierTrackEdit";
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AnimationBezierTrackEdit";
   local_98 = 0;
   local_70 = 0x18;
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

         goto LAB_0011fb71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011fb71:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "AnimationBezierTrackEdit", false);
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
/* Ref<TextServer>::unref() */void Ref<TextServer>::unref(Ref<TextServer> *this) {
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
/* Ref<Shortcut>::unref() */void Ref<Shortcut>::unref(Ref<Shortcut> *this) {
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
/* RBMap<float, int, Comparator<float>, DefaultAllocator>::clear() */void RBMap<float,int,Comparator<float>,DefaultAllocator>::clear(RBMap<float,int,Comparator<float>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   void *pvVar5;
   Element *pEVar6;
   pvVar5 = *(void**)this;
   if (pvVar5 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar2 = *(Element**)( pEVar6 + 8 );
               if (pEVar2 != pEVar4) {
                  if (*(Element**)( pEVar2 + 0x10 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (pEVar4 != *(Element**)( pEVar2 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                  }

                  Memory::free_static(pEVar2, false);
               }

               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar6 + 8 );
               if (pEVar4 != pEVar3) {
                  if (*(Element**)( pEVar4 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (pEVar3 != *(Element**)( pEVar4 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
               }

               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               Memory::free_static(pEVar6, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar5 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar5 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar5, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* RBMap<int, Color, Comparator<int>, DefaultAllocator>::clear() */void RBMap<int,Color,Comparator<int>,DefaultAllocator>::clear(RBMap<int,Color,Comparator<int>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   pvVar6 = *(void**)this;
   if (pvVar6 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar6 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar7 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar7 != pEVar3) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar4 != pEVar3) {
                  pEVar5 = *(Element**)( pEVar4 + 0x10 );
                  if (pEVar3 != pEVar5) {
                     _cleanup_tree(this, pEVar5);
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar7 + 8 );
               if (pEVar4 != pEVar3) {
                  if (*(Element**)( pEVar4 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (pEVar3 != *(Element**)( pEVar4 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
               }

               Memory::free_static(pEVar7, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar2 + 8 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar6 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar6 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar6, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::_Data::_free_root() */void RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_Data::_free_root(_Data *this) {
   if (*(void**)this != (void*)0x0) {
      Memory::free_static(*(void**)this, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* Ref<InputEventMouseButton>::unref() */void Ref<InputEventMouseButton>::unref(Ref<InputEventMouseButton> *this) {
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
/* RBMap<AnimationTrackEditor::SelectedKey, AnimationTrackEditor::KeyInfo,
   Comparator<AnimationTrackEditor::SelectedKey>, DefaultAllocator>::clear() */void RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>::clear(RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   pvVar6 = *(void**)this;
   if (pvVar6 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar6 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar7) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar7 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               Memory::free_static(pEVar2, false);
            }

            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar7 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar7 != pEVar3) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar7 + 8 );
               if (pEVar4 != pEVar3) {
                  if (*(Element**)( pEVar4 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar4 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
               }

               Memory::free_static(pEVar7, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar7) {
               pEVar4 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar3 != pEVar4) {
                  pEVar5 = *(Element**)( pEVar4 + 0x10 );
                  if (pEVar3 != pEVar5) {
                     _cleanup_tree(this, pEVar5);
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  Memory::free_static(pEVar4, false);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               Memory::free_static(pEVar7, false);
            }

            Memory::free_static(pEVar2, false);
         }

         Memory::free_static(pEVar1, false);
         pvVar6 = *(void**)this;
         pEVar2 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar6 + 0x10 ) = pEVar2;
      *(undefined4*)( this + 0x10 ) = 0;
      Memory::free_static(pvVar6, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* MethodBind* create_method_bind<AnimationBezierTrackEdit>(void (AnimationBezierTrackEdit::*)()) */MethodBind *create_method_bind<AnimationBezierTrackEdit>(_func_void *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_00129f58;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimationBezierTrackEdit";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AnimationBezierTrackEdit, Ref<Animation> const&>(void
   (AnimationBezierTrackEdit::*)(Ref<Animation> const&)) */MethodBind *create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&>(_func_void_Ref_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00129fb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimationBezierTrackEdit";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AnimationBezierTrackEdit, Ref<Animation> const&, int, float,
   bool>(void (AnimationBezierTrackEdit::*)(Ref<Animation> const&, int, float, bool)) */MethodBind *create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&,int,float,bool>(_func_void_Ref_ptr_int_float_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr_int_float_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012a018;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "AnimationBezierTrackEdit";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AnimationBezierTrackEdit, int>(void
   (AnimationBezierTrackEdit::*)(int)) */MethodBind *create_method_bind<AnimationBezierTrackEdit,int>(_func_void_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012a078;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimationBezierTrackEdit";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<AnimationBezierTrackEdit, Ref<Animation> const&, int, double,
   float, Vector2 const&, Vector2 const&, Animation::HandleMode>(void
   (AnimationBezierTrackEdit::*)(Ref<Animation> const&, int, double, float, Vector2 const&, Vector2
   const&, Animation::HandleMode)) */MethodBind *create_method_bind<AnimationBezierTrackEdit,Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>(_func_void_Ref_ptr_int_double_float_Vector2_ptr_Vector2_ptr_HandleMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr_int_double_float_Vector2_ptr_Vector2_ptr_HandleMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0012a0d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 7;
   local_40 = 0;
   local_38 = "AnimationBezierTrackEdit";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar8 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00120d70:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_00120d70;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar7 == lVar3) {
      LAB_00120cdc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00120c71;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00120cdc;
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
      lVar3 = 0;
   }

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_00120c71:puVar9[-1] = param_1;
   return 0;
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
/* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBMap<String,
   Vector<int>, Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<int>::_unref((CowData<int>*)( pEVar3 + 0x40 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<int>::_unref((CowData<int>*)( pEVar1 + 0x40 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<int>::_unref((CowData<int>*)( pEVar3 + 0x40 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar5 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<int>::_unref((CowData<int>*)( pEVar2 + 0x40 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<int>::_unref((CowData<int>*)( pEVar1 + 0x40 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
   }

   CowData<int>::_unref((CowData<int>*)( param_1 + 0x40 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   return;
}
/* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::~RBMap() */void RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::~RBMap(RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   void *pvVar5;
   Element *pEVar6;
   Element *pEVar7;
   pvVar5 = *(void**)this;
   if (pvVar5 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
      pEVar3 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar3) {
         pEVar4 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar3 != pEVar4) {
            pEVar7 = *(Element**)( pEVar4 + 0x10 );
            if (pEVar3 != pEVar7) {
               pEVar6 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar3 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               pEVar3 = *(Element**)( pEVar7 + 8 );
               if (pEVar6 != pEVar3) {
                  pEVar2 = *(Element**)( pEVar3 + 0x10 );
                  if (pEVar6 != pEVar2) {
                     _cleanup_tree(this, pEVar2);
                     pEVar2 = *(Element**)( this + 8 );
                  }

                  if (pEVar2 != *(Element**)( pEVar3 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                  }

                  CowData<int>::_unref((CowData<int>*)( pEVar3 + 0x40 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
                  Memory::free_static(pEVar3, false);
               }

               CowData<int>::_unref((CowData<int>*)( pEVar7 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar4 + 8 );
            if (pEVar3 != pEVar7) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar3 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar4 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
            Memory::free_static(pEVar4, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar3 = *(Element**)( pEVar1 + 8 );
         if (pEVar3 != pEVar4) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar7 != pEVar4) {
               if (*(Element**)( pEVar7 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar7 + 8 );
               if (pEVar4 != pEVar6) {
                  pEVar2 = *(Element**)( pEVar6 + 0x10 );
                  if (pEVar4 != pEVar2) {
                     _cleanup_tree(this, pEVar2);
                     pEVar2 = *(Element**)( this + 8 );
                  }

                  if (pEVar2 != *(Element**)( pEVar6 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<int>::_unref((CowData<int>*)( pEVar6 + 0x40 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<int>::_unref((CowData<int>*)( pEVar7 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
               Memory::free_static(pEVar7, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar7 = *(Element**)( pEVar3 + 8 );
            if (pEVar7 != pEVar4) {
               pEVar6 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar4 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               CowData<int>::_unref((CowData<int>*)( pEVar7 + 0x40 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
               Memory::free_static(pEVar7, false);
            }

            CowData<int>::_unref((CowData<int>*)( pEVar3 + 0x40 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
            Memory::free_static(pEVar3, false);
         }

         CowData<int>::_unref((CowData<int>*)( pEVar1 + 0x40 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
         Memory::free_static(pEVar1, false);
         pvVar5 = *(void**)this;
         pEVar3 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar5 + 0x10 ) = pEVar3;
      *(undefined4*)( this + 0x10 ) = 0;
      CowData<int>::_unref((CowData<int>*)( (long)pvVar5 + 0x40 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x30 ));
      Memory::free_static(pvVar5, false);
      return;
   }

   return;
}
/* AnimationBezierTrackEdit::_initialize_classv() */void AnimationBezierTrackEdit::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Control::initialize_class() == '\0') {
         if (CanvasItem::initialize_class() == '\0') {
            if (Node::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Node";
               local_70 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_00130048 != Node::_bind_methods) {
                  Node::_bind_methods();
               }

               Node::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Node";
            local_50 = 4;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "CanvasItem";
            local_70 = 0;
            local_50 = 10;
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
            CanvasItem::_bind_methods();
            if ((code*)PTR__bind_compatibility_methods_00130038 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00130040 != CanvasItem::_bind_methods) {
            Control::_bind_methods();
         }

         Control::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Control";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "AnimationBezierTrackEdit";
      local_70 = 0;
      local_50 = 0x18;
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
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      LAB_001220d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_001220d0;
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
            goto LAB_00122001;
         }

         uVar5 = _realloc(this, lVar7);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

      }

      puVar6 = *(undefined8**)this;
      if (puVar6 != (undefined8*)0x0) {
         LAB_00122001:puVar6[-1] = param_1;
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
/* WARNING: Type propagation algorithm not settling *//* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::_erase_fix_rb(RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::Element*) */void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_erase_fix_rb(RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   int iVar10;
   char *pcVar11;
   char *pcVar12;
   pEVar8 = *(Element**)( this + 8 );
   pEVar2 = *(Element**)( *(long*)this + 0x10 );
   pEVar9 = *(Element**)( param_1 + 0x18 );
   pcVar12 = (char*)this;
   pcVar11 = (char*)param_1;
   pEVar7 = pEVar8;
   do {
      pEVar6 = pEVar9;
      if (pEVar2 == pEVar7) {
         LAB_00122260:iVar10 = *(int*)pEVar8;
         joined_r0x00122323:if (iVar10 != 1) {
            _err_print_error("_erase_fix_rb", "./core/templates/rb_set.h", 0x1e3, "Condition \"_data._nil->color != BLACK\" is true.", 0, 0);
            return;
         }

         return;
      }

      pEVar9 = param_1;
      if (*(int*)param_1 != 0) {
         LAB_00122209:iVar10 = (int)pcVar11;
         pEVar7 = *(Element**)( pEVar9 + 0x10 );
         if (*(int*)pEVar7 == 1) goto LAB_00122216;
         LAB_001222c0:if (pEVar9 != *(Element**)( pEVar6 + 8 )) {
            iVar1 = *(int*)pEVar6;
            pEVar7 = pEVar9;
            goto joined_r0x001222cf;
         }

         if (**(int**)( pEVar9 + 8 ) == 1) {
            *(int*)pEVar7 = 1;
            if (pEVar9 == pEVar8) {
               _set_color((Element*)pcVar12, iVar10);
               pEVar8 = *(Element**)( this + 8 );
               pEVar7 = *(Element**)( pEVar9 + 0x10 );
            }
 else {
               *(int*)pEVar9 = 0;
            }

            pEVar2 = *(Element**)( pEVar7 + 8 );
            *(Element**)( pEVar9 + 0x10 ) = pEVar2;
            if (pEVar2 != pEVar8) {
               *(Element**)( pEVar2 + 0x18 ) = pEVar9;
            }

            lVar3 = *(long*)( pEVar9 + 0x18 );
            *(long*)( pEVar7 + 0x18 ) = lVar3;
            if (pEVar9 == *(Element**)( lVar3 + 8 )) {
               *(Element**)( lVar3 + 8 ) = pEVar7;
            }
 else {
               *(Element**)( lVar3 + 0x10 ) = pEVar7;
            }

            *(Element**)( pEVar7 + 8 ) = pEVar9;
            *(Element**)( pEVar9 + 0x18 ) = pEVar7;
            pEVar9 = pEVar7;
         }

         LAB_001224b1:if (( pEVar9 == pEVar8 ) && ( *(int*)pEVar6 == 0 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar9 = *(int*)pEVar6;
         }

         puVar5 = *(undefined4**)( pEVar9 + 8 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 8 );
         pEVar2 = *(Element**)( lVar3 + 0x10 );
         *(Element**)( pEVar6 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 0x10 )) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 8 ) = lVar3;
         }

         *(Element**)( lVar3 + 0x10 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_00122260;
      }

      *(int*)param_1 = 1;
      if (pEVar6 == pEVar8) {
         pcVar11 = "./core/templates/rb_set.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar6 = 0;
      }

      iVar10 = (int)pcVar11;
      if (*(Element**)( pEVar6 + 8 ) != param_1) {
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar9 = *(Element**)( param_1 + 8 );
         pEVar7 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar7;
         if (pEVar7 != pEVar8) {
            *(Element**)( pEVar7 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_00122209;
      }

      pEVar9 = *(Element**)( param_1 + 0x10 );
      *(Element**)( pEVar6 + 8 ) = pEVar9;
      if (pEVar9 != pEVar8) {
         *(Element**)( pEVar9 + 0x18 ) = pEVar6;
      }

      lVar3 = *(long*)( pEVar6 + 0x18 );
      *(long*)( param_1 + 0x18 ) = lVar3;
      if (pEVar6 == *(Element**)( lVar3 + 0x10 )) {
         *(Element**)( lVar3 + 0x10 ) = param_1;
      }
 else {
         *(Element**)( lVar3 + 8 ) = param_1;
      }

      *(Element**)( param_1 + 0x10 ) = pEVar6;
      *(Element**)( pEVar6 + 0x18 ) = param_1;
      pEVar7 = *(Element**)( pEVar9 + 0x10 );
      if (*(int*)pEVar7 != 1) goto LAB_001222c0;
      LAB_00122216:iVar10 = (int)pcVar11;
      pEVar7 = *(Element**)( pEVar9 + 8 );
      if (*(int*)pEVar7 != 1) {
         if (*(Element**)( pEVar6 + 8 ) == pEVar9) goto LAB_001224b1;
         *(int*)pEVar7 = 1;
         if (pEVar9 == pEVar8) {
            iVar10 = 0x116ac4;
            pcVar12 = "_set_color";
            _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            pEVar8 = *(Element**)( this + 8 );
            pEVar7 = *(Element**)( pEVar9 + 8 );
         }
 else {
            *(int*)pEVar9 = 0;
         }

         pEVar2 = *(Element**)( pEVar7 + 0x10 );
         *(Element**)( pEVar9 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar9;
         }

         lVar3 = *(long*)( pEVar9 + 0x18 );
         *(long*)( pEVar7 + 0x18 ) = lVar3;
         if (pEVar9 == *(Element**)( lVar3 + 0x10 )) {
            *(Element**)( lVar3 + 0x10 ) = pEVar7;
         }
 else {
            *(Element**)( lVar3 + 8 ) = pEVar7;
         }

         *(Element**)( pEVar7 + 0x10 ) = pEVar9;
         *(Element**)( pEVar9 + 0x18 ) = pEVar7;
         iVar1 = *(int*)pEVar6;
         joined_r0x001222cf:if (( iVar1 == 0 ) && ( pEVar7 == pEVar8 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar7 = iVar1;
         }

         puVar5 = *(undefined4**)( pEVar7 + 0x10 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar2 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         iVar10 = *(int*)pEVar8;
         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto joined_r0x00122323;
      }

      if (pEVar9 == pEVar8) {
         pcVar11 = "./core/templates/rb_set.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         iVar10 = *(int*)pEVar6;
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar9 = 0;
         iVar10 = *(int*)pEVar6;
      }

      if (iVar10 == 0) {
         *(int*)pEVar6 = 1;
         goto LAB_00122260;
      }

      pEVar9 = *(Element**)( pEVar6 + 0x18 );
      param_1 = *(Element**)( pEVar9 + 0x10 );
      pEVar7 = pEVar6;
      if (param_1 == pEVar6) {
         param_1 = *(Element**)( pEVar9 + 8 );
      }

   }
 while ( true );
}
/* RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::_erase(RBSet<Pair<int, int>, AnimationBezierTrackEdit::PairCompare,
   DefaultAllocator>::Element*) */void RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator>::_erase(RBSet<Pair<int,int>,AnimationBezierTrackEdit::PairCompare,DefaultAllocator> *this, Element *param_1) {
   int *piVar1;
   Element *pEVar2;
   Element *pEVar3;
   int *piVar4;
   char *pcVar5;
   long lVar6;
   undefined8 uVar7;
   Element *pEVar8;
   Element *pEVar9;
   piVar4 = *(int**)( param_1 + 0x10 );
   piVar1 = *(int**)( this + 8 );
   pEVar8 = param_1;
   if (piVar4 == piVar1) {
      LAB_00122718:lVar6 = *(long*)( pEVar8 + 0x18 );
      piVar4 = *(int**)( pEVar8 + 8 );
      pEVar9 = *(Element**)( lVar6 + 0x10 );
      if (pEVar9 == pEVar8) goto LAB_0012272d;
      LAB_0012263d:*(int**)( lVar6 + 8 ) = piVar4;
   }
 else {
      if (piVar1 != *(int**)( param_1 + 8 )) {
         pEVar8 = *(Element**)( param_1 + 0x20 );
         piVar4 = *(int**)( pEVar8 + 0x10 );
         if (piVar1 == piVar4) goto LAB_00122718;
      }

      lVar6 = *(long*)( pEVar8 + 0x18 );
      pEVar9 = *(Element**)( lVar6 + 0x10 );
      if (pEVar9 != pEVar8) goto LAB_0012263d;
      LAB_0012272d:*(int**)( lVar6 + 0x10 ) = piVar4;
      pEVar9 = *(Element**)( lVar6 + 8 );
   }

   if (*piVar4 == 0) {
      *(long*)( piVar4 + 6 ) = lVar6;
      *piVar4 = 1;
   }
 else if (( *(int*)pEVar8 == 1 ) && ( lVar6 != *(long*)this )) {
      _erase_fix_rb(this, pEVar9);
   }

   if (pEVar8 != param_1) {
      pEVar9 = *(Element**)( this + 8 );
      if (pEVar9 == pEVar8) {
         uVar7 = 0x1fb;
         pcVar5 = "Condition \"rp == _data._nil\" is true.";
         goto LAB_00122762;
      }

      uVar7 = *(undefined8*)( param_1 + 0x10 );
      pEVar2 = *(Element**)( param_1 + 0x10 );
      pEVar3 = *(Element**)( param_1 + 8 );
      *(undefined8*)( pEVar8 + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( pEVar8 + 0x10 ) = uVar7;
      *(undefined8*)( pEVar8 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
      *(int*)pEVar8 = *(int*)param_1;
      if (pEVar9 != pEVar2) {
         *(Element**)( pEVar2 + 0x18 ) = pEVar8;
      }

      if (pEVar9 != pEVar3) {
         *(Element**)( pEVar3 + 0x18 ) = pEVar8;
      }

      lVar6 = *(long*)( param_1 + 0x18 );
      if (*(Element**)( lVar6 + 0x10 ) == param_1) {
         *(Element**)( lVar6 + 0x10 ) = pEVar8;
      }
 else {
         *(Element**)( lVar6 + 8 ) = pEVar8;
      }

   }

   lVar6 = *(long*)( param_1 + 0x20 );
   if (lVar6 != 0) {
      *(undefined8*)( lVar6 + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   }

   if (*(long*)( param_1 + 0x28 ) != 0) {
      *(long*)( *(long*)( param_1 + 0x28 ) + 0x20 ) = lVar6;
   }

   Memory::free_static(param_1, false);
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + -1;
   if (**(int**)( this + 8 ) != 0) {
      return;
   }

   uVar7 = 0x218;
   pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
   LAB_00122762:_err_print_error("_erase", "./core/templates/rb_set.h", uVar7, pcVar5, 0, 0);
   return;
}
/* RBMap<AnimationTrackEditor::SelectedKey, AnimationTrackEditor::KeyInfo,
   Comparator<AnimationTrackEditor::SelectedKey>,
   DefaultAllocator>::_insert_rb_fix(RBMap<AnimationTrackEditor::SelectedKey,
   AnimationTrackEditor::KeyInfo, Comparator<AnimationTrackEditor::SelectedKey>,
   DefaultAllocator>::Element*) */void RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator>::_insert_rb_fix(RBMap<AnimationTrackEditor::SelectedKey,AnimationTrackEditor::KeyInfo,Comparator<AnimationTrackEditor::SelectedKey>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_0012284d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00122970;
            LAB_001227f6:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_001227f6;
            LAB_00122970:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00122833:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00122a62:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00122a62;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00122a30;
            LAB_001228c0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_001228c0;
            LAB_00122a30:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00122833;
      }

      LAB_0012284d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<float, int, Comparator<float>, DefaultAllocator>::_insert_rb_fix(RBMap<float, int,
   Comparator<float>, DefaultAllocator>::Element*) */void RBMap<float,int,Comparator<float>,DefaultAllocator>::_insert_rb_fix(RBMap<float,int,Comparator<float>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_00122b4d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00122c70;
            LAB_00122af6:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00122af6;
            LAB_00122c70:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00122b33:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00122d62:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00122d62;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00122d30;
            LAB_00122bc0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00122bc0;
            LAB_00122d30:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00122b33;
      }

      LAB_00122b4d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBMap<String,
   Vector<int>, Comparator<String>, DefaultAllocator>::Element*) */void RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_00122e1d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00122f40;
            LAB_00122dc6:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00122dc6;
            LAB_00122f40:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00122e03:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00123032:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00123032;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00123000;
            LAB_00122e90:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00122e90;
            LAB_00123000:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00122e03;
      }

      LAB_00122e1d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::_insert(String const&,
   Vector<int> const&) */Element * __thiscall
RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::_insert
          (RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this,String *param_1,
          Vector *param_2){
   long *plVar1;
   char cVar2;
   Element *pEVar3;
   long lVar4;
   long lVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_58[2];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar7 = *(Element**)this;
   pEVar3 = *(Element**)( pEVar7 + 0x10 );
   if (*(Element**)( pEVar7 + 0x10 ) != *(Element**)( this + 8 )) {
      do {
         while (true) {
            pEVar7 = pEVar3;
            cVar2 = String::operator <(param_1, (String*)( pEVar7 + 0x30 ));
            if (cVar2 != '\0') break;
            cVar2 = String::operator <((String*)( pEVar7 + 0x30 ), param_1);
            if (cVar2 == '\0') {
               if (*(long*)( pEVar7 + 0x40 ) != *(long*)( param_2 + 8 )) {
                  CowData<int>::_ref((CowData<int>*)( pEVar7 + 0x40 ), (CowData*)( param_2 + 8 ));
               }

               goto LAB_00123267;
            }

            pEVar3 = *(Element**)( pEVar7 + 8 );
            if (*(Element**)( pEVar7 + 8 ) == *(Element**)( this + 8 )) goto LAB_001230cf;
         }
;
         pEVar3 = *(Element**)( pEVar7 + 0x10 );
      }
 while ( *(Element**)( pEVar7 + 0x10 ) != *(Element**)( this + 8 ) );
   }

   LAB_001230cf:pEVar3 = (Element*)operator_new(0x48, DefaultAllocator::alloc);
   local_58[0] = 0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar9 = *plVar1;
         if (lVar9 == 0) goto LAB_00123119;
         LOCK();
         lVar4 = *plVar1;
         bVar10 = lVar9 == lVar4;
         if (bVar10) {
            *plVar1 = lVar9 + 1;
            lVar4 = lVar9;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar4 != -1) {
         local_58[0] = *(long*)param_1;
      }

   }

   LAB_00123119:local_48 = 0;
   lVar9 = *(long*)( param_2 + 8 );
   if (lVar9 != 0) {
      plVar1 = (long*)( lVar9 + -0x10 );
      do {
         lVar4 = *plVar1;
         lVar9 = local_48;
         if (lVar4 == 0) goto LAB_00123159;
         LOCK();
         lVar5 = *plVar1;
         bVar10 = lVar4 == lVar5;
         if (bVar10) {
            *plVar1 = lVar4 + 1;
            lVar5 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar5 != -1) {
         local_48 = *(long*)( param_2 + 8 );
         lVar9 = local_48;
      }

   }

   LAB_00123159:*(undefined4*)pEVar3 = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( pEVar3 + ( 16*i + 8 ) ) = (undefined1[16])0;
   }

   if (local_58[0] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar3 + 0x30 ), (CowData*)local_58);
   }

   *(undefined8*)( pEVar3 + 0x40 ) = 0;
   if (lVar9 != 0) {
      CowData<int>::_ref((CowData<int>*)( pEVar3 + 0x40 ), (CowData*)&local_48);
      LOCK();
      plVar1 = (long*)( lVar9 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_48 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   *(Element**)( pEVar3 + 0x18 ) = pEVar7;
   pEVar8 = *(Element**)( this + 8 );
   *(Element**)( pEVar3 + 8 ) = pEVar8;
   *(Element**)( pEVar3 + 0x10 ) = pEVar8;
   if (*(Element**)this == pEVar7) {
      LAB_001231ed:*(Element**)( pEVar7 + 0x10 ) = pEVar3;
   }
 else {
      cVar2 = String::operator <(param_1, (String*)( pEVar7 + 0x30 ));
      if (cVar2 != '\0') {
         pEVar8 = *(Element**)( pEVar3 + 8 );
         goto LAB_001231ed;
      }

      *(Element**)( pEVar7 + 8 ) = pEVar3;
      pEVar8 = *(Element**)( pEVar3 + 8 );
   }

   pEVar7 = pEVar3;
   if (pEVar8 == *(Element**)( this + 8 )) {
      do {
         pEVar6 = *(Element**)( pEVar7 + 0x18 );
         bVar10 = pEVar7 == *(Element**)( pEVar6 + 8 );
         pEVar7 = pEVar6;
      }
 while ( bVar10 );
      if (*(Element**)this == pEVar6) {
         pEVar6 = (Element*)0x0;
      }

   }
 else {
      do {
         pEVar7 = pEVar8 + 0x10;
         pEVar6 = pEVar8;
         pEVar8 = *(Element**)pEVar7;
      }
 while ( *(Element**)( this + 8 ) != *(Element**)pEVar7 );
   }

   *(Element**)( pEVar3 + 0x20 ) = pEVar6;
   pEVar8 = *(Element**)( pEVar3 + 0x10 );
   pEVar7 = pEVar3;
   if (*(Element**)( this + 8 ) == *(Element**)( pEVar3 + 0x10 )) {
      do {
         pEVar8 = pEVar7;
         pEVar7 = *(Element**)( pEVar8 + 0x18 );
      }
 while ( pEVar8 == *(Element**)( pEVar7 + 0x10 ) );
      if (*(Element**)this != pEVar8) goto LAB_0012323c;
      *(undefined8*)( pEVar3 + 0x28 ) = 0;
      if (pEVar6 == (Element*)0x0) goto LAB_00123256;
      LAB_00123245:*(Element**)( pEVar6 + 0x28 ) = pEVar3;
      pEVar7 = *(Element**)( pEVar3 + 0x28 );
      if (pEVar7 == (Element*)0x0) goto LAB_00123256;
   }
 else {
      do {
         pEVar7 = pEVar8;
         pEVar8 = *(Element**)( pEVar7 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar7 + 8 ) );
      LAB_0012323c:*(Element**)( pEVar3 + 0x28 ) = pEVar7;
      if (pEVar6 != (Element*)0x0) goto LAB_00123245;
   }

   *(Element**)( pEVar7 + 0x20 ) = pEVar3;
   LAB_00123256:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar3);
   pEVar7 = pEVar3;
   LAB_00123267:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pEVar7;
}
/* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::operator[](String const&) */long RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::operator [](RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this, String *param_1) {
   undefined8 uVar1;
   char cVar2;
   long lVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60[2];
   undefined8 local_50;
   undefined8 local_48[2];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)this == 0) {
      puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      local_50 = 0;
      *puVar4 = 0;
      *(undefined8*)( puVar4 + 0x10 ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( puVar4 + ( 4*i + 2 ) ) = (undefined1[16])0;
      }

      *(undefined4**)this = puVar4;
      local_68 = 0;
      local_48[0] = 0;
      local_38 = 0;
      CowData<int>::_unref((CowData<int>*)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<int>::_unref((CowData<int>*)&local_50);
      puVar4 = *(undefined4**)this;
      uVar1 = *(undefined8*)( this + 8 );
      local_60[0] = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( puVar4 + ( 2*i + 2 ) ) = uVar1;
      }

      *puVar4 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)this + 0x10 );
      if (*(long*)( this + 8 ) == lVar3) {
         local_60[0] = 0;
      }
 else {
         do {
            while (true) {
               cVar2 = String::operator <(param_1, (String*)( lVar3 + 0x30 ));
               if (cVar2 != '\0') break;
               cVar2 = String::operator <((String*)( lVar3 + 0x30 ), param_1);
               if (cVar2 == '\0') {
                  if (lVar3 != 0) goto LAB_00123425;
                  goto LAB_001233e6;
               }

               lVar3 = *(long*)( lVar3 + 8 );
               if (*(long*)( this + 8 ) == lVar3) goto LAB_001233e6;
            }
;
            lVar3 = *(long*)( lVar3 + 0x10 );
         }
 while ( *(long*)( this + 8 ) != lVar3 );
         LAB_001233e6:local_60[0] = 0;
         if (*(long*)this == 0) {
            puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            local_50 = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( puVar4 + ( 4*i + 2 ) ) = (undefined1[16])0;
            }

            *puVar4 = 0;
            *(undefined8*)( puVar4 + 0x10 ) = 0;
            *(undefined4**)this = puVar4;
            local_70 = 0;
            local_48[0] = 0;
            local_38 = 0;
            CowData<int>::_unref((CowData<int>*)&local_38);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<int>::_unref((CowData<int>*)&local_50);
            uVar1 = *(undefined8*)( this + 8 );
            puVar4 = *(undefined4**)this;
            *puVar4 = 1;
            *(undefined8*)( puVar4 + 6 ) = uVar1;
            *(undefined8*)( puVar4 + 2 ) = uVar1;
            *(undefined8*)( puVar4 + 4 ) = uVar1;
         }

      }

   }

   lVar3 = _insert(this, param_1, (Vector*)&local_68);
   CowData<int>::_unref((CowData<int>*)local_60);
   LAB_00123425:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3 + 0x38;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, Color, Comparator<int>, DefaultAllocator>::_insert_rb_fix(RBMap<int, Color,
   Comparator<int>, DefaultAllocator>::Element*) */void RBMap<int,Color,Comparator<int>,DefaultAllocator>::_insert_rb_fix(RBMap<int,Color,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_0012365d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00123780;
            LAB_00123606:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00123606;
            LAB_00123780:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00123643:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00123872:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00123872;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00123840;
            LAB_001236d0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_001236d0;
            LAB_00123840:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00123643;
      }

      LAB_0012365d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<int, Color, Comparator<int>, DefaultAllocator>::_insert(int const&, Color const&) */Element * __thiscall
RBMap<int,Color,Comparator<int>,DefaultAllocator>::_insert
          (RBMap<int,Color,Comparator<int>,DefaultAllocator> *this,int *param_1,Color *param_2){
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element *pEVar12;
   long in_FS_OFFSET;
   bool bVar13;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar11 = *(Element**)this;
   if (*(Element**)( pEVar11 + 0x10 ) != *(Element**)( this + 8 )) {
      pEVar9 = *(Element**)( pEVar11 + 0x10 );
      do {
         pEVar11 = pEVar9;
         if (*param_1 < *(int*)( pEVar11 + 0x30 )) {
            pEVar9 = *(Element**)( pEVar11 + 0x10 );
         }
 else {
            if (*param_1 <= *(int*)( pEVar11 + 0x30 )) {
               uVar3 = *(undefined8*)( param_2 + 8 );
               *(undefined8*)( pEVar11 + 0x34 ) = *(undefined8*)param_2;
               *(undefined8*)( pEVar11 + 0x3c ) = uVar3;
               goto LAB_001239e7;
            }

            pEVar9 = *(Element**)( pEVar11 + 8 );
         }

      }
 while ( pEVar9 != *(Element**)( this + 8 ) );
   }

   pEVar5 = (Element*)operator_new(0x48, DefaultAllocator::alloc);
   uVar3 = *(undefined8*)param_2;
   uVar4 = *(undefined8*)( param_2 + 8 );
   iVar1 = *param_1;
   *(Element**)( pEVar5 + 0x18 ) = pEVar11;
   *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
   *(undefined8*)( pEVar5 + 0x34 ) = uVar3;
   *(undefined8*)( pEVar5 + 0x3c ) = uVar4;
   pEVar9 = *(Element**)( this + 8 );
   *(undefined4*)pEVar5 = 0;
   *(int*)( pEVar5 + 0x30 ) = iVar1;
   *(Element**)( pEVar5 + 8 ) = pEVar9;
   *(Element**)( pEVar5 + 0x10 ) = pEVar9;
   if (( *(Element**)this == pEVar11 ) || ( *param_1 < *(int*)( pEVar11 + 0x30 ) )) {
      *(Element**)( pEVar11 + 0x10 ) = pEVar5;
      pEVar10 = *(Element**)( this + 8 );
      pEVar8 = *(Element**)( pEVar5 + 0x10 );
      pEVar12 = *(Element**)this;
      if (pEVar10 == pEVar9) {
         pEVar7 = pEVar11;
         pEVar6 = pEVar11;
         if (pEVar5 == *(Element**)( pEVar11 + 8 )) goto LAB_00123a58;
         goto LAB_00123a65;
      }

      LAB_00123a30:do {
         pEVar7 = pEVar9;
         pEVar9 = *(Element**)( pEVar7 + 0x10 );
      }
 while ( *(Element**)( pEVar7 + 0x10 ) != pEVar10 );
   }
 else {
      *(Element**)( pEVar11 + 8 ) = pEVar5;
      pEVar7 = *(Element**)( pEVar5 + 8 );
      pEVar10 = *(Element**)( this + 8 );
      pEVar12 = *(Element**)this;
      pEVar6 = pEVar11;
      pEVar8 = pEVar9;
      if (pEVar7 == pEVar10) {
         LAB_00123a58:do {
            pEVar7 = *(Element**)( pEVar6 + 0x18 );
            bVar13 = *(Element**)( pEVar7 + 8 ) == pEVar6;
            pEVar6 = pEVar7;
         }
 while ( bVar13 );
         LAB_00123a65:if (pEVar7 == pEVar12) {
            pEVar7 = (Element*)0x0;
         }

      }
 else {
         pEVar9 = *(Element**)( pEVar7 + 0x10 );
         if (*(Element**)( pEVar7 + 0x10 ) != pEVar10) goto LAB_00123a30;
      }

   }

   *(Element**)( pEVar5 + 0x20 ) = pEVar7;
   if (*(Element**)( this + 8 ) == pEVar8) {
      pEVar9 = pEVar5;
      pEVar10 = pEVar11;
      if (pEVar5 == *(Element**)( pEVar11 + 0x10 )) {
         do {
            pEVar11 = *(Element**)( pEVar10 + 0x18 );
            bVar13 = pEVar10 == *(Element**)( pEVar11 + 0x10 );
            pEVar9 = pEVar10;
            pEVar10 = pEVar11;
         }
 while ( bVar13 );
      }

      if (*(Element**)this != pEVar9) goto LAB_001239bc;
      *(undefined8*)( pEVar5 + 0x28 ) = 0;
      if (pEVar7 == (Element*)0x0) goto LAB_001239d6;
      LAB_001239c5:*(Element**)( pEVar7 + 0x28 ) = pEVar5;
      pEVar11 = *(Element**)( pEVar5 + 0x28 );
      if (pEVar11 == (Element*)0x0) goto LAB_001239d6;
   }
 else {
      do {
         pEVar11 = pEVar8;
         pEVar8 = *(Element**)( pEVar11 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar11 + 8 ) );
      LAB_001239bc:*(Element**)( pEVar5 + 0x28 ) = pEVar11;
      if (pEVar7 != (Element*)0x0) goto LAB_001239c5;
   }

   *(Element**)( pEVar11 + 0x20 ) = pEVar5;
   LAB_001239d6:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar5);
   pEVar11 = pEVar5;
   LAB_001239e7:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pEVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RBMap<int, Color, Comparator<int>, DefaultAllocator>::operator[](int const&) */long RBMap<int,Color,Comparator<int>,DefaultAllocator>::operator [](RBMap<int,Color,Comparator<int>,DefaultAllocator> *this, int *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)this == 0) {
      puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined1(*) [16])( puVar4 + 8 ) = (undefined1[16])0x0;
      uVar2 = _UNK_0012a538;
      uVar1 = __LC71;
      puVar4[0xc] = 0;
      *(undefined8*)( puVar4 + 0xd ) = uVar1;
      *(undefined8*)( puVar4 + 0xf ) = uVar2;
      *(undefined4**)this = puVar4;
      lVar3 = *(long*)( this + 8 );
      *puVar4 = 1;
      *(long*)( puVar4 + 6 ) = lVar3;
      *(long*)( puVar4 + 2 ) = lVar3;
      *(long*)( puVar4 + 4 ) = lVar3;
   }
 else {
      lVar3 = *(long*)( *(long*)this + 0x10 );
   }

   for (; lVar3 != *(long*)( this + 8 ); lVar3 = *(long*)( lVar3 + 8 )) {
      while (*param_1 < *(int*)( lVar3 + 0x30 )) {
         lVar3 = *(long*)( lVar3 + 0x10 );
         if (*(long*)( this + 8 ) == lVar3) goto LAB_00123b49;
      }
;
      if (*param_1 <= *(int*)( lVar3 + 0x30 )) goto LAB_00123b62;
   }

   LAB_00123b49:local_38 = __LC71;
   uStack_30 = _UNK_0012a538;
   lVar3 = _insert(this, param_1, (Color*)&local_38);
   LAB_00123b62:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3 + 0x34;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::_insert_rb_fix(RBMap<int, Rect2,
   Comparator<int>, DefaultAllocator>::Element*) */void RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert_rb_fix(RBMap<int,Rect2,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_00123c7d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00123da0;
            LAB_00123c26:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00123c26;
            LAB_00123da0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00123c63:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00123e92:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00123e92;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00123e60;
            LAB_00123cf0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00123cf0;
            LAB_00123e60:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00123c63;
      }

      LAB_00123c7d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::_insert(int const&, Rect2 const&) */Element * __thiscall
RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_insert
          (RBMap<int,Rect2,Comparator<int>,DefaultAllocator> *this,int *param_1,Rect2 *param_2){
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element *pEVar12;
   long in_FS_OFFSET;
   bool bVar13;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar11 = *(Element**)this;
   if (*(Element**)( pEVar11 + 0x10 ) != *(Element**)( this + 8 )) {
      pEVar9 = *(Element**)( pEVar11 + 0x10 );
      do {
         pEVar11 = pEVar9;
         if (*param_1 < *(int*)( pEVar11 + 0x30 )) {
            pEVar9 = *(Element**)( pEVar11 + 0x10 );
         }
 else {
            if (*param_1 <= *(int*)( pEVar11 + 0x30 )) {
               uVar3 = *(undefined8*)( param_2 + 8 );
               *(undefined8*)( pEVar11 + 0x34 ) = *(undefined8*)param_2;
               *(undefined8*)( pEVar11 + 0x3c ) = uVar3;
               goto LAB_00124007;
            }

            pEVar9 = *(Element**)( pEVar11 + 8 );
         }

      }
 while ( pEVar9 != *(Element**)( this + 8 ) );
   }

   pEVar5 = (Element*)operator_new(0x48, DefaultAllocator::alloc);
   uVar3 = *(undefined8*)param_2;
   uVar4 = *(undefined8*)( param_2 + 8 );
   iVar1 = *param_1;
   *(Element**)( pEVar5 + 0x18 ) = pEVar11;
   *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
   *(undefined8*)( pEVar5 + 0x34 ) = uVar3;
   *(undefined8*)( pEVar5 + 0x3c ) = uVar4;
   pEVar9 = *(Element**)( this + 8 );
   *(undefined4*)pEVar5 = 0;
   *(int*)( pEVar5 + 0x30 ) = iVar1;
   *(Element**)( pEVar5 + 8 ) = pEVar9;
   *(Element**)( pEVar5 + 0x10 ) = pEVar9;
   if (( *(Element**)this == pEVar11 ) || ( *param_1 < *(int*)( pEVar11 + 0x30 ) )) {
      *(Element**)( pEVar11 + 0x10 ) = pEVar5;
      pEVar10 = *(Element**)( this + 8 );
      pEVar8 = *(Element**)( pEVar5 + 0x10 );
      pEVar12 = *(Element**)this;
      if (pEVar10 == pEVar9) {
         pEVar7 = pEVar11;
         pEVar6 = pEVar11;
         if (pEVar5 == *(Element**)( pEVar11 + 8 )) goto LAB_00124078;
         goto LAB_00124085;
      }

      LAB_00124050:do {
         pEVar7 = pEVar9;
         pEVar9 = *(Element**)( pEVar7 + 0x10 );
      }
 while ( *(Element**)( pEVar7 + 0x10 ) != pEVar10 );
   }
 else {
      *(Element**)( pEVar11 + 8 ) = pEVar5;
      pEVar7 = *(Element**)( pEVar5 + 8 );
      pEVar10 = *(Element**)( this + 8 );
      pEVar12 = *(Element**)this;
      pEVar6 = pEVar11;
      pEVar8 = pEVar9;
      if (pEVar7 == pEVar10) {
         LAB_00124078:do {
            pEVar7 = *(Element**)( pEVar6 + 0x18 );
            bVar13 = *(Element**)( pEVar7 + 8 ) == pEVar6;
            pEVar6 = pEVar7;
         }
 while ( bVar13 );
         LAB_00124085:if (pEVar7 == pEVar12) {
            pEVar7 = (Element*)0x0;
         }

      }
 else {
         pEVar9 = *(Element**)( pEVar7 + 0x10 );
         if (*(Element**)( pEVar7 + 0x10 ) != pEVar10) goto LAB_00124050;
      }

   }

   *(Element**)( pEVar5 + 0x20 ) = pEVar7;
   if (*(Element**)( this + 8 ) == pEVar8) {
      pEVar9 = pEVar5;
      pEVar10 = pEVar11;
      if (pEVar5 == *(Element**)( pEVar11 + 0x10 )) {
         do {
            pEVar11 = *(Element**)( pEVar10 + 0x18 );
            bVar13 = pEVar10 == *(Element**)( pEVar11 + 0x10 );
            pEVar9 = pEVar10;
            pEVar10 = pEVar11;
         }
 while ( bVar13 );
      }

      if (*(Element**)this != pEVar9) goto LAB_00123fdc;
      *(undefined8*)( pEVar5 + 0x28 ) = 0;
      if (pEVar7 == (Element*)0x0) goto LAB_00123ff6;
      LAB_00123fe5:*(Element**)( pEVar7 + 0x28 ) = pEVar5;
      pEVar11 = *(Element**)( pEVar5 + 0x28 );
      if (pEVar11 == (Element*)0x0) goto LAB_00123ff6;
   }
 else {
      do {
         pEVar11 = pEVar8;
         pEVar8 = *(Element**)( pEVar11 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar11 + 8 ) );
      LAB_00123fdc:*(Element**)( pEVar5 + 0x28 ) = pEVar11;
      if (pEVar7 != (Element*)0x0) goto LAB_00123fe5;
   }

   *(Element**)( pEVar11 + 0x20 ) = pEVar5;
   LAB_00123ff6:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar5);
   pEVar11 = pEVar5;
   LAB_00124007:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pEVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, Rect2, Comparator<int>, DefaultAllocator>::_copy_from(RBMap<int, Rect2,
   Comparator<int>, DefaultAllocator> const&) */void RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from(RBMap<int,Rect2,Comparator<int>,DefaultAllocator> *this, RBMap *param_1) {
   undefined8 uVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element *pEVar12;
   Element *pEVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   clear(this);
   if (*(long*)param_1 != 0) {
      lVar4 = *(long*)( *(long*)param_1 + 0x10 );
      if (lVar4 != *(long*)( param_1 + 8 )) {
         do {
            lVar14 = lVar4;
            lVar4 = *(long*)( lVar14 + 0x10 );
         }
 while ( *(long*)( param_1 + 8 ) != *(long*)( lVar14 + 0x10 ) );
         do {
            pEVar9 = *(Element**)this;
            if (pEVar9 == (Element*)0x0) {
               pEVar9 = (Element*)operator_new(0x48, DefaultAllocator::alloc);
               *(undefined1(*) [16])( pEVar9 + 0x20 ) = (undefined1[16])0x0;
               uVar1 = *(undefined8*)( this + 8 );
               *(undefined4*)( pEVar9 + 0x30 ) = 0;
               *(undefined8*)( pEVar9 + 0x34 ) = 0;
               *(undefined8*)( pEVar9 + 0x3c ) = 0;
               *(Element**)this = pEVar9;
               *(undefined4*)pEVar9 = 1;
               for (int i = 0; i < 3; i++) {
                  *(undefined8*)( pEVar9 + ( 8*i + 8 ) ) = uVar1;
               }

            }
 else if (*(Element**)( pEVar9 + 0x10 ) != *(Element**)( this + 8 )) {
               pEVar7 = *(Element**)( pEVar9 + 0x10 );
               do {
                  pEVar9 = pEVar7;
                  if (*(int*)( lVar14 + 0x30 ) < *(int*)( pEVar9 + 0x30 )) {
                     pEVar7 = *(Element**)( pEVar9 + 0x10 );
                  }
 else {
                     if (*(int*)( lVar14 + 0x30 ) <= *(int*)( pEVar9 + 0x30 )) {
                        uVar1 = *(undefined8*)( lVar14 + 0x3c );
                        *(undefined8*)( pEVar9 + 0x34 ) = *(undefined8*)( lVar14 + 0x34 );
                        *(undefined8*)( pEVar9 + 0x3c ) = uVar1;
                        goto LAB_001242ac;
                     }

                     pEVar7 = *(Element**)( pEVar9 + 8 );
                  }

               }
 while ( pEVar7 != *(Element**)( this + 8 ) );
            }

            pEVar6 = (Element*)operator_new(0x48, DefaultAllocator::alloc);
            uVar1 = *(undefined8*)( lVar14 + 0x34 );
            uVar5 = *(undefined8*)( lVar14 + 0x3c );
            uVar2 = *(undefined4*)( lVar14 + 0x30 );
            *(Element**)( pEVar6 + 0x18 ) = pEVar9;
            *(undefined1(*) [16])( pEVar6 + 0x20 ) = (undefined1[16])0x0;
            *(undefined8*)( pEVar6 + 0x34 ) = uVar1;
            *(undefined8*)( pEVar6 + 0x3c ) = uVar5;
            pEVar7 = *(Element**)( this + 8 );
            *(undefined4*)pEVar6 = 0;
            *(undefined4*)( pEVar6 + 0x30 ) = uVar2;
            *(Element**)( pEVar6 + 8 ) = pEVar7;
            *(Element**)( pEVar6 + 0x10 ) = pEVar7;
            if (( *(Element**)this == pEVar9 ) || ( *(int*)( lVar14 + 0x30 ) < *(int*)( pEVar9 + 0x30 ) )) {
               *(Element**)( pEVar9 + 0x10 ) = pEVar6;
               pEVar12 = *(Element**)( this + 8 );
               pEVar10 = *(Element**)( pEVar6 + 0x10 );
               pEVar13 = *(Element**)this;
               pEVar11 = pEVar7;
               if (pEVar12 != pEVar7) goto LAB_00124250;
               pEVar8 = pEVar9;
               if (pEVar6 == *(Element**)( pEVar9 + 8 )) goto LAB_00124310;
               pEVar7 = pEVar9;
               if (pEVar9 == pEVar13) {
                  pEVar7 = (Element*)0x0;
               }

            }
 else {
               *(Element**)( pEVar9 + 8 ) = pEVar6;
               pEVar11 = *(Element**)( pEVar6 + 8 );
               pEVar12 = *(Element**)( this + 8 );
               pEVar13 = *(Element**)this;
               pEVar8 = pEVar9;
               pEVar10 = pEVar7;
               if (pEVar11 == pEVar12) {
                  LAB_00124310:do {
                     pEVar7 = *(Element**)( pEVar8 + 0x18 );
                     bVar15 = *(Element**)( pEVar7 + 8 ) == pEVar8;
                     pEVar8 = pEVar7;
                  }
 while ( bVar15 );
                  if (pEVar7 == pEVar13) {
                     pEVar7 = (Element*)0x0;
                  }

               }
 else {
                  LAB_00124250:do {
                     pEVar13 = pEVar11 + 0x10;
                     pEVar7 = pEVar11;
                     pEVar11 = *(Element**)pEVar13;
                  }
 while ( *(Element**)pEVar13 != pEVar12 );
               }

            }

            *(Element**)( pEVar6 + 0x20 ) = pEVar7;
            if (*(Element**)( this + 8 ) == pEVar10) {
               if (pEVar6 != *(Element**)( pEVar9 + 0x10 )) {
                  if (*(Element**)this == pEVar6) goto LAB_00124366;
                  goto LAB_00124284;
               }

               do {
                  pEVar11 = pEVar9;
                  pEVar9 = *(Element**)( pEVar11 + 0x18 );
               }
 while ( pEVar11 == *(Element**)( pEVar9 + 0x10 ) );
               if (*(Element**)this != pEVar11) goto LAB_00124284;
               LAB_00124366:*(undefined8*)( pEVar6 + 0x28 ) = 0;
               if (pEVar7 != (Element*)0x0) goto LAB_0012428d;
            }
 else {
               do {
                  pEVar9 = pEVar10;
                  pEVar10 = *(Element**)( pEVar9 + 8 );
               }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar9 + 8 ) );
               LAB_00124284:*(Element**)( pEVar6 + 0x28 ) = pEVar9;
               if (pEVar7 != (Element*)0x0) {
                  LAB_0012428d:*(Element**)( pEVar7 + 0x28 ) = pEVar6;
                  pEVar9 = *(Element**)( pEVar6 + 0x28 );
                  if (pEVar9 == (Element*)0x0) goto LAB_0012429e;
               }

               *(Element**)( pEVar9 + 0x20 ) = pEVar6;
            }

            LAB_0012429e:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
            _insert_rb_fix(this, pEVar6);
            LAB_001242ac:lVar14 = *(long*)( lVar14 + 0x20 );
         }
 while ( lVar14 != 0 );
      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>, Comparator<int>,
   DefaultAllocator>::_insert_rb_fix(RBMap<int, RBMap<int, Rect2, Comparator<int>,
   DefaultAllocator>, Comparator<int>, DefaultAllocator>::Element*) */void RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::_insert_rb_fix(RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_001244bd;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_001245e0;
            LAB_00124466:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00124466;
            LAB_001245e0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_001244a3:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_001246d2:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_001246d2;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_001246a0;
            LAB_00124530:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00124530;
            LAB_001246a0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_001244a3;
      }

      LAB_001244bd:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<int, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>, Comparator<int>,
   DefaultAllocator>::_insert(int const&, RBMap<int, Rect2, Comparator<int>, DefaultAllocator>
   const&) */Element * __thiscall
RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>::
_insert(RBMap<int,RBMap<int,Rect2,Comparator<int>,DefaultAllocator>,Comparator<int>,DefaultAllocator>
        *this,int *param_1,RBMap *param_2){
   int iVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   long in_FS_OFFSET;
   bool bVar10;
   void *local_60;
   undefined8 *local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar8 = *(Element**)this;
   if (*(Element**)( pEVar8 + 0x10 ) != *(Element**)( this + 8 )) {
      pEVar2 = *(Element**)( pEVar8 + 0x10 );
      do {
         pEVar8 = pEVar2;
         if (*param_1 < *(int*)( pEVar8 + 0x30 )) {
            pEVar2 = *(Element**)( pEVar8 + 0x10 );
         }
 else {
            if (*param_1 <= *(int*)( pEVar8 + 0x30 )) {
               RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar8 + 0x38 ), param_2);
               goto LAB_001248b7;
            }

            pEVar2 = *(Element**)( pEVar8 + 8 );
         }

      }
 while ( pEVar2 != *(Element**)( this + 8 ) );
   }

   pEVar2 = (Element*)operator_new(0x50, DefaultAllocator::alloc);
   local_60 = (void*)0x0;
   iVar1 = *param_1;
   local_50 = 0;
   local_58 = &_GlobalNilClass::_nil;
   RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_60, param_2);
   *(undefined8**)( pEVar2 + 0x40 ) = &_GlobalNilClass::_nil;
   *(int*)( pEVar2 + 0x30 ) = iVar1;
   *(undefined4*)pEVar2 = 0;
   *(undefined8*)( pEVar2 + 0x28 ) = 0;
   *(undefined8*)( pEVar2 + 0x38 ) = 0;
   *(undefined4*)( pEVar2 + 0x48 ) = 0;
   *(undefined1(*) [16])( pEVar2 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pEVar2 + 0x18 ) = (undefined1[16])0x0;
   RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::_copy_from((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)( pEVar2 + 0x38 ), (RBMap*)&local_60);
   RBMap<int,Rect2,Comparator<int>,DefaultAllocator>::clear((RBMap<int,Rect2,Comparator<int>,DefaultAllocator>*)&local_60);
   if (local_60 != (void*)0x0) {
      Memory::free_static(local_60, false);
   }

   *(Element**)( pEVar2 + 0x18 ) = pEVar8;
   pEVar6 = *(Element**)( this + 8 );
   *(Element**)( pEVar2 + 8 ) = pEVar6;
   *(Element**)( pEVar2 + 0x10 ) = pEVar6;
   if (( *(Element**)this == pEVar8 ) || ( *param_1 < *(int*)( pEVar8 + 0x30 ) )) {
      *(Element**)( pEVar8 + 0x10 ) = pEVar2;
      pEVar7 = *(Element**)( this + 8 );
      pEVar5 = *(Element**)( pEVar2 + 0x10 );
      pEVar9 = *(Element**)this;
      if (pEVar7 == pEVar6) {
         pEVar4 = pEVar8;
         pEVar3 = pEVar8;
         if (pEVar2 == *(Element**)( pEVar8 + 8 )) goto LAB_00124928;
         goto LAB_00124935;
      }

      LAB_00124900:do {
         pEVar4 = pEVar6;
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
      }
 while ( *(Element**)( pEVar4 + 0x10 ) != pEVar7 );
   }
 else {
      *(Element**)( pEVar8 + 8 ) = pEVar2;
      pEVar4 = *(Element**)( pEVar2 + 8 );
      pEVar7 = *(Element**)( this + 8 );
      pEVar9 = *(Element**)this;
      pEVar3 = pEVar8;
      pEVar5 = pEVar6;
      if (pEVar7 == pEVar4) {
         LAB_00124928:do {
            pEVar4 = *(Element**)( pEVar3 + 0x18 );
            bVar10 = pEVar3 == *(Element**)( pEVar4 + 8 );
            pEVar3 = pEVar4;
         }
 while ( bVar10 );
         LAB_00124935:if (pEVar4 == pEVar9) {
            pEVar4 = (Element*)0x0;
         }

      }
 else {
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
         if (*(Element**)( pEVar4 + 0x10 ) != pEVar7) goto LAB_00124900;
      }

   }

   *(Element**)( pEVar2 + 0x20 ) = pEVar4;
   if (*(Element**)( this + 8 ) == pEVar5) {
      pEVar6 = pEVar2;
      pEVar7 = pEVar8;
      if (pEVar2 == *(Element**)( pEVar8 + 0x10 )) {
         do {
            pEVar8 = *(Element**)( pEVar7 + 0x18 );
            bVar10 = *(Element**)( pEVar8 + 0x10 ) == pEVar7;
            pEVar6 = pEVar7;
            pEVar7 = pEVar8;
         }
 while ( bVar10 );
      }

      if (*(Element**)this != pEVar6) goto LAB_0012488c;
      *(undefined8*)( pEVar2 + 0x28 ) = 0;
      if (pEVar4 == (Element*)0x0) goto LAB_001248a6;
      LAB_00124895:*(Element**)( pEVar4 + 0x28 ) = pEVar2;
      pEVar8 = *(Element**)( pEVar2 + 0x28 );
      if (pEVar8 == (Element*)0x0) goto LAB_001248a6;
   }
 else {
      do {
         pEVar8 = pEVar5;
         pEVar5 = *(Element**)( pEVar8 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar8 + 8 ) );
      LAB_0012488c:*(Element**)( pEVar2 + 0x28 ) = pEVar8;
      if (pEVar4 != (Element*)0x0) goto LAB_00124895;
   }

   *(Element**)( pEVar8 + 0x20 ) = pEVar2;
   LAB_001248a6:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar2);
   pEVar8 = pEVar2;
   LAB_001248b7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pEVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<AnimationBezierTrackEdit::EditPoint>::_realloc(long) */undefined8 CowData<AnimationBezierTrackEdit::EditPoint>::_realloc(CowData<AnimationBezierTrackEdit::EditPoint> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(long) */undefined8 CowData<AnimationBezierTrackEdit::EditPoint>::resize<false>(CowData<AnimationBezierTrackEdit::EditPoint> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 0x38;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x38 == 0) {
      LAB_00124cd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x38 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_00124cd0;
   if (param_1 <= lVar10) {
      if (( lVar9 != lVar3 ) && ( uVar7 = _realloc(this, lVar9) ),(int)uVar7 != 0) {
         return uVar7;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar9 == lVar3) {
      LAB_00124c3c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00124bc8;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00124c3c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar3 = 0;
   }

   puVar5 = puVar8 + lVar3 * 7;
   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 7;
      for (int i = 0; i < 6; i++) {
         puVar5[( i + 1 )] = 0;
      }

      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 7 );
   LAB_00124bc8:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00124ed8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_50 = 0;
         local_40 = 0x35;
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

         goto LAB_00125361;
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
      /* WARNING: Could not recover jumptable at 0x001251ec. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00125361:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_50 = 0;
         local_40 = 0x35;
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

         goto LAB_00125541;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001253cb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00125541:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC99, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00125660;
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

   LAB_00125660:*(undefined4*)param_1 = 0;
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

         goto LAB_001259df;
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
      /* WARNING: Could not recover jumptable at 0x00125886. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_001259df:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00125b9f;
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
      /* WARNING: Could not recover jumptable at 0x00125a46. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00125b9f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Animation>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1250a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00125ca8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_00125c66:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Animation::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00125c66;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00125ca8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<Ref<Animation>const&,int,float,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   undefined1 uVar2;
   undefined4 uVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   Variant *pVVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar8 = param_2[0x23];
         if (pVVar8 == (Variant*)0x0) {
            pVVar8 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar8 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x1250a8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00126010;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar9 = *(code**)( param_1 + 0x58 );
   lVar4 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar9 & 1 ) != 0) {
      pcVar9 = *(code**)( pcVar9 + *(long*)( (long)param_2 + lVar4 ) + -1 );
   }

   uVar2 = *(undefined1*)( *(long*)( param_3 + 0x18 ) + 8 );
   dVar1 = *(double*)( *(long*)( param_3 + 0x10 ) + 8 );
   uVar3 = *(undefined4*)( *(long*)( param_3 + 8 ) + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)param_3 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar7 = (Object*)Variant::get_validated_object();
   pOVar5 = local_68;
   if (pOVar7 != local_68) {
      if (pOVar7 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00125fc2:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Animation::typeinfo, 0);
         if (pOVar5 != pOVar7) {
            local_68 = pOVar7;
            if (pOVar7 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00125fc2;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar9 )((float)dVar1, (long*)( (long)param_2 + lVar4 ), (StringName*)&local_68, uVar3, uVar2);
   if (local_68 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_68;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_68);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00126010:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   undefined8 uVar1;
   undefined4 uVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   Object *pOVar7;
   char cVar8;
   Object *pOVar9;
   Variant *pVVar10;
   code *pcVar11;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar10 = param_2[0x23];
         if (pVVar10 == (Variant*)0x0) {
            pVVar10 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar10 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar10) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x1250a8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001263d6;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar11 = *(code**)( param_1 + 0x58 );
   lVar3 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar11 & 1 ) != 0) {
      pcVar11 = *(code**)( pcVar11 + *(long*)( (long)param_2 + lVar3 ) + -1 );
   }

   uVar4 = *(ulong*)( *(long*)( param_3 + 0x30 ) + 8 );
   lVar5 = *(long*)( param_3 + 0x28 );
   lVar6 = *(long*)( param_3 + 0x20 );
   uVar1 = *(undefined8*)( *(long*)( param_3 + 0x10 ) + 8 );
   uVar2 = *(undefined4*)( *(long*)( param_3 + 8 ) + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)param_3 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar9 = (Object*)Variant::get_validated_object();
   pOVar7 = local_68;
   if (pOVar9 != local_68) {
      if (pOVar9 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00126372:cVar8 = RefCounted::unreference();
            if (cVar8 != '\0') {
               cVar8 = predelete_handler(pOVar7);
               if (cVar8 != '\0') {
                  ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
               }

            }

         }

      }
 else {
         pOVar9 = (Object*)__dynamic_cast(pOVar9, &Object::typeinfo, &Animation::typeinfo, 0);
         if (pOVar7 != pOVar9) {
            local_68 = pOVar9;
            if (pOVar9 != (Object*)0x0) {
               cVar8 = RefCounted::reference();
               if (cVar8 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar7 != (Object*)0x0) goto LAB_00126372;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar11 )(uVar1, (long*)( (long)param_2 + lVar3 ), (StringName*)&local_68, uVar2, lVar6 + 8, lVar5 + 8, uVar4 & 0xffffffff);
   if (local_68 != (Object*)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_68;
      if (cVar8 != '\0') {
         cVar8 = predelete_handler(local_68);
         if (cVar8 != '\0') {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

      }

   }

   LAB_001263d6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Animation>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x1250a8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001266ac;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_00126688:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00126688;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_001266ac:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::ptrcall(Object*, void const**, void*) const
    */void MethodBindT<Ref<Animation>const&,int,float,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   undefined4 uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   char cVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar6 = (long*)param_2[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar6 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1250a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00126925;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( param_1 + 0x58 );
   lVar2 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( (long)param_2 + lVar2 ) + -1 );
   }

   cVar5 = **(char**)( (long)param_3 + 0x18 );
   uVar1 = **(undefined4**)( (long)param_3 + 8 );
   /* WARNING: Load size is inaccurate */
   if (( *param_3 == (long*)0x0 ) || ( local_58 = (Object*)**param_3 ),local_58 == (Object*)0x0) {
      LAB_001268fa:local_58 = (Object*)0x0;
   }
 else {
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') goto LAB_001268fa;
   }

   ( *pcVar7 )((long*)( (long)param_2 + lVar2 ), (StringName*)&local_58, uVar1, cVar5 != '\0');
   if (local_58 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar3 = local_58;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_58);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   LAB_00126925:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   undefined8 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   Object *pOVar7;
   char cVar8;
   long *plVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar9 = (long*)param_2[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar9 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1250a8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00126bcc;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar10 = *(code**)( param_1 + 0x58 );
   lVar3 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar10 & 1 ) != 0) {
      pcVar10 = *(code**)( pcVar10 + *(long*)( (long)param_2 + lVar3 ) + -1 );
   }

   uVar4 = *(undefined8*)( (long)param_3 + 0x28 );
   uVar5 = *(undefined8*)( (long)param_3 + 0x20 );
   uVar6 = **(undefined8**)( (long)param_3 + 0x30 );
   uVar1 = **(undefined8**)( (long)param_3 + 0x10 );
   uVar2 = **(undefined4**)( (long)param_3 + 8 );
   /* WARNING: Load size is inaccurate */
   if (( *param_3 == (long*)0x0 ) || ( local_58 = (Object*)**param_3 ),local_58 == (Object*)0x0) {
      LAB_00126ba1:local_58 = (Object*)0x0;
   }
 else {
      cVar8 = RefCounted::init_ref();
      if (cVar8 == '\0') goto LAB_00126ba1;
   }

   ( *pcVar10 )(uVar1, (long*)( (long)param_2 + lVar3 ), (StringName*)&local_58, uVar2, uVar5, uVar4, uVar6);
   if (local_58 != (Object*)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_58;
      if (cVar8 != '\0') {
         cVar8 = predelete_handler(local_58);
         if (cVar8 != '\0') {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

      }

   }

   LAB_00126bcc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Ref<Animation>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   char *pcVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_58;
   char *local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (char*)0x0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC99, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00126ee8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00126edd:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00126ee8;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00126f40;
      LAB_00126f30:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00126f40:uVar7 = 4;
         goto LAB_00126edd;
      }

      if (in_R8D == 1) goto LAB_00126f30;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   uVar5 = _LC200;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar5;
   }

   local_50 = (char*)0x0;
   pcVar8 = (char*)Variant::get_validated_object();
   pcVar3 = local_50;
   if (pcVar8 != local_50) {
      if (pcVar8 == (char*)0x0) {
         if (local_50 != (char*)0x0) {
            local_50 = (char*)0x0;
            local_48 = pcVar3;
            goto LAB_00126eaf;
         }

      }
 else {
         pcVar8 = (char*)__dynamic_cast(pcVar8, &Object::typeinfo, &Animation::typeinfo, 0);
         if (pcVar3 != pcVar8) {
            local_48 = pcVar3;
            local_50 = pcVar8;
            if (( pcVar8 != (char*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_50 = (char*)0x0;
            }

            LAB_00126eaf:Ref<Animation>::unref((Ref<Animation>*)&local_48);
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Ref<Animation>*)&local_50);
   Ref<Animation>::unref((Ref<Animation>*)&local_50);
   LAB_00126ee8:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long lVar9;
   ulong uVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   float fVar17;
   double dVar18;
   long local_a8;
   undefined8 local_a0;
   Object *local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   Variant *local_78[7];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar12 = (long*)plVar14[0x23];
         if (plVar12 == (long*)0x0) {
            plVar12 = (long*)( **(code**)( *plVar14 + 0x40 ) )();
         }

      }
 else {
         plVar12 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_98 == (Object*)*plVar12) {
         if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = (Object*)0x1250a8;
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC99, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_00127490;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 8) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar15 = 0;
      }
 else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar15;
      }

      if ((int)( 7 - in_R8D ) <= iVar7) {
         lVar9 = 0;
         do {
            while ((int)in_R8D <= (int)lVar9) {
               uVar13 = iVar7 + -7 + (int)lVar9;
               if (lVar15 <= (int)uVar13) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar13, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               local_78[lVar9] = pVVar2 + (ulong)uVar13 * 0x18;
               lVar9 = lVar9 + 1;
               if (lVar9 == 7) goto LAB_00127220;
            }
;
            local_78[lVar9] = *(Variant**)( param_4 + lVar9 * 8 );
            lVar9 = lVar9 + 1;
         }
 while ( lVar9 != 7 );
         LAB_00127220:*in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[6], 2);
         uVar4 = _LC201;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar10 = Variant::operator_cast_to_long(local_78[6]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[5], 5);
         uVar4 = _LC202;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_88 = Variant::operator_cast_to_Vector2(local_78[5]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[4], 5);
         uVar4 = _LC203;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_80 = Variant::operator_cast_to_Vector2(local_78[4]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[3], 3);
         uVar4 = _LC204;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         fVar17 = Variant::operator_cast_to_float(local_78[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 3);
         uVar4 = _LC205;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         dVar18 = Variant::operator_cast_to_double(local_78[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar4 = _LC100;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(local_78[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0]);
         uVar4 = _LC200;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_98 = (Object*)0x0;
         pOVar11 = (Object*)Variant::get_validated_object();
         pOVar5 = local_98;
         if (pOVar11 != local_98) {
            if (pOVar11 == (Object*)0x0) {
               if (local_98 != (Object*)0x0) {
                  local_98 = (Object*)0x0;
                  LAB_00127406:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

            }
 else {
               pOVar11 = (Object*)__dynamic_cast(pOVar11, &Object::typeinfo, &Animation::typeinfo, 0);
               if (pOVar5 != pOVar11) {
                  local_98 = pOVar11;
                  if (pOVar11 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_98 = (Object*)0x0;
                     }

                  }

                  if (pOVar5 != (Object*)0x0) goto LAB_00127406;
               }

            }

         }

         ( *(code*)pVVar16 )(dVar18, fVar17, (Variant*)( (long)plVar14 + (long)pVVar1 ), &local_98, iVar7, &local_80, &local_88, uVar10 & 0xffffffff);
         if (local_98 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_98;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_98);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         goto LAB_00127490;
      }

      uVar8 = 4;
   }
 else {
      uVar8 = 3;
   }

   *in_R9 = uVar8;
   in_R9[2] = 7;
   LAB_00127490:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Ref<Animation>const&,int,float,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   bool bVar7;
   int iVar8;
   undefined4 uVar9;
   long lVar10;
   Object *pOVar11;
   long *plVar12;
   uint uVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   long lVar16;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   Object *local_78;
   undefined8 local_70;
   Variant *local_68[5];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar12 = (long*)plVar14[0x23];
         if (plVar12 == (long*)0x0) {
            plVar12 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
         }

      }
 else {
         plVar12 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_78 == (Object*)*plVar12) {
         if (( StringName::configured != '\0' ) && ( local_78 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = (Object*)0x1250a8;
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC99, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_00127980;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar17 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar8 = 0;
         lVar16 = 0;
      }
 else {
         lVar16 = *(long*)( pVVar2 + -8 );
         iVar8 = (int)lVar16;
      }

      if ((int)( 4 - in_R8D ) <= iVar8) {
         lVar10 = 0;
         do {
            if ((int)lVar10 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar10 * 8 );
            }
 else {
               uVar13 = iVar8 + -4 + (int)lVar10;
               if (lVar16 <= (int)uVar13) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar13, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
            }

            local_68[lVar10] = pVVar15;
            lVar10 = lVar10 + 1;
         }
 while ( lVar10 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar17 & 1 ) != 0) {
            pVVar17 = *(Variant**)( pVVar17 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar4 = _LC206;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar7 = Variant::operator_cast_to_bool(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 3);
         uVar4 = _LC205;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_float(local_68[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC100;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar8 = Variant::operator_cast_to_int(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0]);
         uVar4 = _LC200;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_78 = (Object*)0x0;
         pOVar11 = (Object*)Variant::get_validated_object();
         pOVar5 = local_78;
         if (pOVar11 != local_78) {
            if (pOVar11 == (Object*)0x0) {
               if (local_78 != (Object*)0x0) {
                  local_78 = (Object*)0x0;
                  LAB_001278e9:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

            }
 else {
               pOVar11 = (Object*)__dynamic_cast(pOVar11, &Object::typeinfo, &Animation::typeinfo, 0);
               if (pOVar5 != pOVar11) {
                  local_78 = pOVar11;
                  if (pOVar11 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_78 = (Object*)0x0;
                     }

                  }

                  if (pOVar5 != (Object*)0x0) goto LAB_001278e9;
               }

            }

         }

         ( *(code*)pVVar17 )((Variant*)( (long)plVar14 + (long)pVVar1 ), &local_78, iVar8, bVar7);
         if (local_78 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_78;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_78);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         goto LAB_00127980;
      }

      uVar9 = 4;
   }
 else {
      uVar9 = 3;
   }

   *in_R9 = uVar9;
   in_R9[2] = 4;
   LAB_00127980:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_00127ccd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00127d30;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00127d30:uVar6 = 4;
         LAB_00127ccd:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00127c4b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00127c4b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC101;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00127ca6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC99, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00127d96;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00127d96:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Ref<Animation> const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Ref<Animation>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *param_2;
   if (iVar4 != param_1) goto LAB_00127f99;
   local_88 = 0;
   local_90 = 0;
   local_78 = "Animation";
   local_70._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (char*)CONCAT44(local_78._4_4_, 0x18);
   local_60 = 0x11;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0012813d:local_50 = 6;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 == 0x11) goto LAB_0012813d;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar2 = local_70._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar2;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar2 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar2;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar3 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar3;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar4 = *param_2;
   LAB_00127f99:*param_2 = iVar4 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<Ref<Animation> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Ref<Animation>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<Ref<Animation>const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_00128249;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC30;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 2);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_00128348:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00128348;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_00128249:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<float>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_001284f9;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC30;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 3);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_001285f8:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_001285f8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_001284f9:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info<Ref<Animation> const&, int, float, bool>(int, PropertyInfo&) */void call_get_argument_type_info<Ref<Animation>const&,int,float,bool>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_8c;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0;
   call_get_argument_type_info_helper<Ref<Animation>const&>(param_1, &local_8c, param_2);
   call_get_argument_type_info_helper<int>(param_1, &local_8c, param_2);
   call_get_argument_type_info_helper<float>(param_1, &local_8c, param_2);
   if (param_1 != local_8c) goto LAB_0012875d;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC30;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00128858:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00128858;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_2 = local_68._0_4_;
   if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar3;
   }

   if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar3;
   }

   *(int*)( param_2 + 0x18 ) = local_50;
   if (*(long*)( param_2 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_2 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0012875d:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<Ref<Animation> const&, int, float, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Ref<Animation>const&,int,float,bool>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<Ref<Animation>const&,int,float,bool>(in_EDX, pPVar1);
   return pPVar1;
}
/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Vector2_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_001289c9;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC30;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 5);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_00128ac8:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00128ac8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_001289c9:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info<Ref<Animation> const&, int, double, float, Vector2 const&,
   Vector2 const&, Animation::HandleMode>(int, PropertyInfo&) */void call_get_argument_type_info<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>(int param_1, PropertyInfo *param_2) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_a4;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a4 = 0;
   call_get_argument_type_info_helper<Ref<Animation>const&>(param_1, &local_a4, param_2);
   call_get_argument_type_info_helper<int>(param_1, &local_a4, param_2);
   iVar1 = local_a4;
   if (param_1 == local_a4) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 3, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar2;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   local_a4 = iVar1 + 1;
   call_get_argument_type_info_helper<float>(param_1, &local_a4, param_2);
   call_get_argument_type_info_helper<Vector2_const&>(param_1, &local_a4, param_2);
   call_get_argument_type_info_helper<Vector2_const&>(param_1, &local_a4, param_2);
   if (param_1 == local_a4) {
      local_90 = 0;
      local_70 = 0x15;
      local_78 = "Animation::HandleMode";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_98 = 0;
      local_a0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_a0, 0, (CowData<char32_t>*)&local_98, 0x10006, (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar2;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>(in_EDX, pPVar1);
   return pPVar1;
}
/* AnimationBezierTrackEdit::_bezier_h_to_pixel(float) */void AnimationBezierTrackEdit::_GLOBAL__sub_I__bezier_h_to_pixel(void) {
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (OptionButton::base_property_helper == '\0') {
      OptionButton::base_property_helper = '\x01';
      OptionButton::base_property_helper._64_8_ = 0;
      OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle);
   }

   if (MenuButton::base_property_helper == '\0') {
      MenuButton::base_property_helper = '\x01';
      MenuButton::base_property_helper._64_8_ = 0;
      MenuButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, MenuButton::base_property_helper, &__dso_handle);
   }

   if (Animation::PARAMETERS_BASE_PATH == '\0') {
      Animation::PARAMETERS_BASE_PATH = '\x01';
      Animation::PARAMETERS_BASE_PATH = 0;
      String::parse_latin1((String*)&Animation::PARAMETERS_BASE_PATH, "parameters/");
      __cxa_atexit(String::~String, &Animation::PARAMETERS_BASE_PATH, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper != '\0') {
      return;
   }

   AudioStreamRandomizer::base_property_helper = 1;
   AudioStreamRandomizer::base_property_helper._56_8_ = 2;
   AudioStreamRandomizer::base_property_helper._64_8_ = 0;
   AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001291e0) *//* AnimationBezierTrackEdit::_notificationv(int, bool) */void AnimationBezierTrackEdit::_notificationv(AnimationBezierTrackEdit *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      _notification(this, param_1);
      if ((code*)PTR__notification_00130050 != CanvasItem::_notification) {
         Control::_notification(iVar1);
      }

      CanvasItem::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   CanvasItem::_notification(iVar1);
   if ((code*)PTR__notification_00130050 != CanvasItem::_notification) {
      Control::_notification(iVar1);
   }

   _notification(this, param_1);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RBMap<String, Vector<int>, Comparator<String>, DefaultAllocator>::~RBMap() */void RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator>::~RBMap(RBMap<String,Vector<int>,Comparator<String>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<AnimationBezierTrackEdit::AnimMoveRestore, DefaultAllocator>::~List() */void List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator>::~List(List<AnimationBezierTrackEdit::AnimMoveRestore,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AnimationBezierTrackEdit::~AnimationBezierTrackEdit() */void AnimationBezierTrackEdit::~AnimationBezierTrackEdit(AnimationBezierTrackEdit *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Animation> const&, int, double, float, Vector2 const&, Vector2 const&,
   Animation::HandleMode>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,double,float,Vector2_const&,Vector2_const&,Animation::HandleMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Animation> const&, int, float, bool>::~MethodBindT() */void MethodBindT<Ref<Animation>const&,int,float,bool>::~MethodBindT(MethodBindT<Ref<Animation>const&,int,float,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Animation> const&>::~MethodBindT() */void MethodBindT<Ref<Animation>const&>::~MethodBindT(MethodBindT<Ref<Animation>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationBezierTrackEdit, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationTrackEditor, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationTrackEditor, void, int, bool,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,bool,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationTrackEditor, void, int, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationTrackEditor,void,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditor,void,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Range, void, double>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Range,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Range,void,double> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,Vector2,Ref<InputEvent>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, float, Vector2, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,float,Vector2,Ref<InputEvent>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AnimationBezierTrackEdit, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationBezierTrackEdit,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

