/* AnimatedSprite2D::_edit_get_pivot() const */undefined8 AnimatedSprite2D::_edit_get_pivot(void) {
   return 0;
}/* AnimatedSprite2D::_edit_use_pivot() const */undefined8 AnimatedSprite2D::_edit_use_pivot(void) {
   return 1;
}/* AnimatedSprite2D::get_frame() const */undefined4 AnimatedSprite2D::get_frame(AnimatedSprite2D *this) {
   return *(undefined4*)( this + 0x5a0 );
}/* AnimatedSprite2D::set_frame_progress(float) */void AnimatedSprite2D::set_frame_progress(AnimatedSprite2D *this, float param_1) {
   *(float*)( this + 0x5bc ) = param_1;
   return;
}/* AnimatedSprite2D::get_frame_progress() const */undefined4 AnimatedSprite2D::get_frame_progress(AnimatedSprite2D *this) {
   return *(undefined4*)( this + 0x5bc );
}/* AnimatedSprite2D::set_speed_scale(float) */void AnimatedSprite2D::set_speed_scale(AnimatedSprite2D *this, float param_1) {
   *(float*)( this + 0x5a4 ) = param_1;
   return;
}/* AnimatedSprite2D::get_speed_scale() const */undefined4 AnimatedSprite2D::get_speed_scale(AnimatedSprite2D *this) {
   return *(undefined4*)( this + 0x5a4 );
}/* AnimatedSprite2D::get_playing_speed() const */float AnimatedSprite2D::get_playing_speed(AnimatedSprite2D *this) {
   float fVar1;
   fVar1 = 0.0;
   if (this[0x590] != (AnimatedSprite2D)0x0) {
      fVar1 = *(float*)( this + 0x5a4 ) * *(float*)( this + 0x5a8 );
   }
   return fVar1;
}/* AnimatedSprite2D::is_centered() const */AnimatedSprite2D AnimatedSprite2D::is_centered(AnimatedSprite2D *this) {
   return this[0x5ac];
}/* AnimatedSprite2D::get_offset() const */undefined8 AnimatedSprite2D::get_offset(AnimatedSprite2D *this) {
   return *(undefined8*)( this + 0x5b0 );
}/* AnimatedSprite2D::is_flipped_h() const */AnimatedSprite2D AnimatedSprite2D::is_flipped_h(AnimatedSprite2D *this) {
   return this[0x5c0];
}/* AnimatedSprite2D::is_flipped_v() const */AnimatedSprite2D AnimatedSprite2D::is_flipped_v(AnimatedSprite2D *this) {
   return this[0x5c1];
}/* AnimatedSprite2D::is_playing() const */AnimatedSprite2D AnimatedSprite2D::is_playing(AnimatedSprite2D *this) {
   return this[0x590];
}/* AnimatedSprite2D::set_flip_h(bool) */void AnimatedSprite2D::set_flip_h(AnimatedSprite2D *this, bool param_1) {
   if (this[0x5c0] != (AnimatedSprite2D)param_1) {
      this[0x5c0] = (AnimatedSprite2D)param_1;
      CanvasItem::queue_redraw();
      return;
   }
   return;
}/* AnimatedSprite2D::set_flip_v(bool) */void AnimatedSprite2D::set_flip_v(AnimatedSprite2D *this, bool param_1) {
   if (this[0x5c1] != (AnimatedSprite2D)param_1) {
      this[0x5c1] = (AnimatedSprite2D)param_1;
      CanvasItem::queue_redraw();
      return;
   }
   return;
}/* AnimatedSprite2D::set_offset(Vector2 const&) */void AnimatedSprite2D::set_offset(AnimatedSprite2D *this, Vector2 *param_1) {
   if (( *(float*)( this + 0x5b0 ) == *(float*)param_1 ) && ( *(float*)( this + 0x5b4 ) == *(float*)( param_1 + 4 ) )) {
      return;
   }
   *(undefined8*)( this + 0x5b0 ) = *(undefined8*)param_1;
   CanvasItem::queue_redraw();
   CanvasItem::item_rect_changed(SUB81(this, 0));
   return;
}/* AnimatedSprite2D::get_animation() const */void AnimatedSprite2D::get_animation(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, (StringName*)( in_RSI + 0x598 ));
   return;
}/* AnimatedSprite2D::set_centered(bool) */void AnimatedSprite2D::set_centered(AnimatedSprite2D *this, bool param_1) {
   if (this[0x5ac] != (AnimatedSprite2D)param_1) {
      this[0x5ac] = (AnimatedSprite2D)param_1;
      CanvasItem::queue_redraw();
      CanvasItem::item_rect_changed(SUB81(this, 0));
      return;
   }
   return;
}/* Error Object::emit_signal<>(StringName const&) [clone .isra.0] */void Object::emit_signal<>(Object *this, StringName *param_1) {
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
}/* StringName::operator void const*() const [clone .isra.0] */void *__thiscallStringName::operator_cast_to_void_(StringName *this) {
   void *pvVar1;
   if (this == (StringName*)0x0) {
      return (void*)0x0;
   }
   pvVar1 = (void*)0x1;
   if (( *(long*)( this + 8 ) == 0 ) && ( pvVar1 = *(void**)( this + 0x10 ) ),pvVar1 != (void*)0x0) {
      return (void*)( ulong )(1 < *(uint*)( (long)pvVar1 + -8 ));
   }
   return pvVar1;
}/* AnimatedSprite2D::_edit_set_state(Dictionary const&) */void AnimatedSprite2D::_edit_set_state(AnimatedSprite2D *this, Dictionary *param_1) {
   Variant *this_00;
   long in_FS_OFFSET;
   float fVar1;
   float extraout_XMM0_Db;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Node2D::_edit_set_state((Dictionary*)this);
   Variant::Variant((Variant*)local_38, "offset");
   this_00 = (Variant*)Dictionary::operator []((Variant*)param_1);
   fVar1 = (float)Variant::operator_cast_to_Vector2(this_00);
   if (( fVar1 != *(float*)( this + 0x5b0 ) ) || ( extraout_XMM0_Db != *(float*)( this + 0x5b4 ) )) {
      *(float*)( this + 0x5b0 ) = fVar1;
      *(float*)( this + 0x5b4 ) = extraout_XMM0_Db;
      CanvasItem::queue_redraw();
      CanvasItem::item_rect_changed(SUB81(this, 0));
   }
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::_edit_get_state() const */void AnimatedSprite2D::_edit_get_state(void) {
   char cVar1;
   Variant *pVVar2;
   long in_RSI;
   Variant *in_RDI;
   long in_FS_OFFSET;
   int local_68[8];
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Node2D::_edit_get_state();
   Variant::Variant((Variant*)local_48, (Vector2*)( in_RSI + 0x5b0 ));
   Variant::Variant((Variant*)local_68, "offset");
   pVVar2 = (Variant*)Dictionary::operator [](in_RDI);
   if (pVVar2 != (Variant*)local_48) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_48[0];
      local_48[0] = 0;
      *(undefined8*)( pVVar2 + 8 ) = local_40;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
   }
   if (Variant::needs_deinit[local_68[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_48[0]];
   } else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_48[0]];
   }
   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::_edit_set_pivot(Vector2 const&) */void AnimatedSprite2D::_edit_set_pivot(AnimatedSprite2D *this, Vector2 *param_1) {
   long in_FS_OFFSET;
   float fVar1;
   float fVar2;
   undefined1 local_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar1 = (float)*(undefined8*)( this + 0x5b0 ) - (float)*(undefined8*)param_1;
   fVar2 = (float)( ( ulong ) * (undefined8*)( this + 0x5b0 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   if (( fVar1 != *(float*)( this + 0x5b0 ) ) || ( fVar2 != *(float*)( this + 0x5b4 ) )) {
      *(ulong*)( this + 0x5b0 ) = CONCAT44(fVar2, fVar1);
      CanvasItem::queue_redraw();
      CanvasItem::item_rect_changed(SUB81(this, 0));
   }
   ( **(code**)( *(long*)this + 0x290 ) )(local_38, this);
   Node2D::set_position((Vector2*)this);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::get_sprite_frames() const */void AnimatedSprite2D::get_sprite_frames(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x580 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x580 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }
   }
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* AnimatedSprite2D::get_autoplay() const */void AnimatedSprite2D::get_autoplay(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x588 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x588 ));
   }
   return;
}/* AnimatedSprite2D::set_autoplay(String const&) */void AnimatedSprite2D::set_autoplay(AnimatedSprite2D *this, String *param_1) {
   long lVar1;
   if (( ( (byte)this[0x2fa] & 0x40 ) == 0 ) || ( lVar1 = Engine::get_singleton() * (char*)( lVar1 + 0xc0 ) != '\0' )) {
      if (*(long*)( this + 0x588 ) == *(long*)param_1) {
         return;
      }
   } else {
      _err_print_error("set_autoplay", "scene/2d/animated_sprite_2d.cpp", 0x1c3, "Setting autoplay after the node has been added to the scene has no effect.", 0, 1);
      if (*(long*)( this + 0x588 ) == *(long*)param_1) {
         return;
      }
   }
   CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x588 ), (CowData*)param_1);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimatedSprite2D::AnimatedSprite2D() */void AnimatedSprite2D::AnimatedSprite2D(AnimatedSprite2D *this) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   CanvasItem::CanvasItem((CanvasItem*)this);
   *(code**)this = predelete_handler;
   this[0x548] = (AnimatedSprite2D)0x0;
   *(undefined8*)( this + 0x56c ) = 0x3f80000000000000;
   *(undefined***)this = &PTR__initialize_classv_001180e0;
   uVar3 = _UNK_00118cd8;
   uVar2 = __LC15;
   lVar1 = SceneStringNames::singleton;
   *(undefined8*)( this + 0x54c ) = 0;
   *(undefined8*)( this + 0x564 ) = 0x3f800000;
   this[0x590] = (AnimatedSprite2D)0x0;
   *(undefined8*)( this + 0x574 ) = 0;
   *(undefined8*)( this + 0x554 ) = uVar2;
   *(undefined8*)( this + 0x55c ) = uVar3;
   *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x598 ), (StringName*)( lVar1 + 0x1f8 ));
   uVar2 = _LC16;
   *(undefined4*)( this + 0x5a0 ) = 0;
   this[0x5ac] = (AnimatedSprite2D)0x1;
   *(undefined8*)( this + 0x5a4 ) = uVar2;
   *(undefined8*)( this + 0x5b0 ) = 0;
   *(undefined8*)( this + 0x5b8 ) = 0x3f800000;
   *(undefined2*)( this + 0x5c0 ) = 0;
   return;
}/* AnimatedSprite2D::_get_frame_duration() */double AnimatedSprite2D::_get_frame_duration(AnimatedSprite2D *this) {
   int iVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   char cVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   double dVar20;
   undefined8 local_60;
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar20 = _LC37;
   if (( *(StringName**)( this + 0x580 ) != (StringName*)0x0 ) && ( cVar13 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 )) ),dVar20 = _LC37,cVar13 != '\0') {
      lVar3 = *(long*)( this + 0x580 );
      iVar1 = *(int*)( this + 0x5a0 );
      if (( *(long*)( lVar3 + 0x248 ) != 0 ) && ( *(int*)( lVar3 + 0x26c ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar3 + 0x268 ) * 4 );
         uVar19 = CONCAT44(0, uVar2);
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar3 + 0x268 ) * 8 );
         if (*(long*)( this + 0x598 ) == 0) {
            uVar14 = StringName::get_empty_hash();
         } else {
            uVar14 = *(uint*)( *(long*)( this + 0x598 ) + 0x20 );
         }
         if (uVar14 == 0) {
            uVar14 = 1;
         }
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar14 * lVar4;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar19;
         lVar16 = SUB168(auVar5 * auVar9, 8);
         uVar17 = *(uint*)( *(long*)( lVar3 + 0x250 ) + lVar16 * 4 );
         uVar15 = SUB164(auVar5 * auVar9, 8);
         if (uVar17 != 0) {
            uVar18 = 0;
            while (( uVar14 != uVar17 || ( *(long*)( *(long*)( *(long*)( lVar3 + 0x248 ) + lVar16 * 8 ) + 0x10 ) != *(long*)( this + 0x598 ) ) )) {
               uVar18 = uVar18 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar15 + 1) * lVar4;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar19;
               lVar16 = SUB168(auVar6 * auVar10, 8);
               uVar17 = *(uint*)( *(long*)( lVar3 + 0x250 ) + lVar16 * 4 );
               uVar15 = SUB164(auVar6 * auVar10, 8);
               if (( uVar17 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar17 * lVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar15 ) - SUB164(auVar7 * auVar11, 8)) * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar19,SUB164(auVar8 * auVar12, 8) < uVar18) goto LAB_00100980;
            };
            lVar3 = *(long*)( *(long*)( lVar3 + 0x248 ) + (ulong)uVar15 * 8 );
            if (lVar3 != 0) {
               if (iVar1 < 0) {
                  _err_print_error("get_frame_duration", "./scene/resources/sprite_frames.h", 0x60, "Condition \"p_idx < 0\" is true. Returning: 1.0", 0, 0);
                  dVar20 = _LC37;
               } else {
                  lVar3 = *(long*)( lVar3 + 0x30 );
                  dVar20 = _LC37;
                  if (( lVar3 != 0 ) && ( (long)iVar1 < *(long*)( lVar3 + -8 ) )) {
                     dVar20 = (double)*(float*)( lVar3 + 8 + (long)iVar1 * 0x10 );
                  }
               }
               goto LAB_00100819;
            }
         }
      }
      LAB_00100980:local_50 = 0;
      String::parse_latin1((String*)&local_50, "\' doesn\'t exist.");
      lVar3 = *(long*)( this + 0x598 );
      if (lVar3 == 0) {
         local_60 = 0;
      } else {
         local_60 = 0;
         if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         } else {
            String::parse_latin1((String*)&local_60, *(char**)( lVar3 + 8 ));
         }
      }
      operator+((char *)
      local_58,(String*)"Animation \'";
      String::operator +(local_48, (String*)local_58);
      _err_print_error("get_frame_duration", "./scene/resources/sprite_frames.h", 0x5f, "Condition \"!E\" is true. Returning: 1.0", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      dVar20 = _LC37;
   }
   LAB_00100819:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return dVar20;
}/* AnimatedSprite2D::_calc_frame_speed_scale() */void AnimatedSprite2D::_calc_frame_speed_scale(AnimatedSprite2D *this) {
   double dVar1;
   dVar1 = (double)_get_frame_duration(this);
   *(float*)( this + 0x5b8 ) = (float)( _LC37 / dVar1 );
   return;
}/* AnimatedSprite2D::set_frame_and_progress(int, float) */void AnimatedSprite2D::set_frame_and_progress(AnimatedSprite2D *this, int param_1, float param_2) {
   long lVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   double dVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(StringName**)( this + 0x580 ) == (StringName*)0x0) goto LAB_00100bce;
   cVar2 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
   if (cVar2 == '\0') {
      iVar4 = *(int*)( this + 0x5a0 );
      if (param_1 < 0) {
         LAB_00100c28:iVar3 = 0;
      } else {
         LAB_00100b4e:iVar3 = param_1;
      }
   } else {
      iVar3 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
      iVar4 = *(int*)( this + 0x5a0 );
      if (param_1 < 0) goto LAB_00100c28;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
         iVar3 = 0;
      }
      if (param_1 <= iVar3) goto LAB_00100b4e;
   }
   *(int*)( this + 0x5a0 ) = iVar3;
   dVar5 = (double)_get_frame_duration(this);
   *(ulong*)( this + 0x5b8 ) = CONCAT44(param_2, (float)( _LC37 / dVar5 ));
   if (param_1 != iVar4) {
      CanvasItem::queue_redraw();
      ( **(code**)( *(long*)this + 0xd0 ) )(this, SceneStringNames::singleton + 0x1c8, 0, 0);
      if (Variant::needs_deinit[0] != '\0') {
         Variant::_clear_internal();
      }
   }
   LAB_00100bce:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::set_frame(int) */void AnimatedSprite2D::set_frame(AnimatedSprite2D *this, int param_1) {
   float fVar1;
   fVar1 = 0.0;
   if (( this[0x590] != (AnimatedSprite2D)0x0 ) && ( fVar1 = _LC45 ),-1 < (int)( *(float*)( this + 0x5a4 ) * *(float*)( this + 0x5a8 ) )) {
      set_frame_and_progress(this, param_1, 0.0);
      return;
   }
   set_frame_and_progress(this, param_1, fVar1);
   return;
}/* AnimatedSprite2D::_res_changed() */void AnimatedSprite2D::_res_changed(AnimatedSprite2D *this) {
   set_frame_and_progress(this, *(int*)( this + 0x5a0 ), *(float*)( this + 0x5bc ));
   CanvasItem::queue_redraw();
   Object::notify_property_list_changed();
   return;
}/* AnimatedSprite2D::_stop_internal(bool) */void AnimatedSprite2D::_stop_internal(AnimatedSprite2D *this, bool param_1) {
   this[0x590] = (AnimatedSprite2D)0x0;
   if (param_1) {
      *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
      set_frame_and_progress(this, 0, 0.0);
   }
   Object::notify_property_list_changed();
   Node::set_process_internal(SUB81(this, 0));
   return;
}/* AnimatedSprite2D::pause() */void AnimatedSprite2D::pause(AnimatedSprite2D *this) {
   this[0x590] = (AnimatedSprite2D)0x0;
   Object::notify_property_list_changed();
   Node::set_process_internal(SUB81(this, 0));
   return;
}/* AnimatedSprite2D::stop() */void AnimatedSprite2D::stop(AnimatedSprite2D *this) {
   this[0x590] = (AnimatedSprite2D)0x0;
   *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
   set_frame_and_progress(this, 0, 0.0);
   Object::notify_property_list_changed();
   Node::set_process_internal(SUB81(this, 0));
   return;
}/* AnimatedSprite2D::get_argument_options(StringName const&, int, List<String, DefaultAllocator>*)
   const */void AnimatedSprite2D::get_argument_options(AnimatedSprite2D *this, StringName *param_1, int param_2, List *param_3) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   char cVar4;
   CowData<char32_t> *this_00;
   undefined1(*pauVar5)[16];
   long *plVar6;
   long in_FS_OFFSET;
   String *local_90;
   undefined8 local_78;
   long *local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      local_78 = 0;
   } else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_78 = 0;
      if (pcVar2 == (char*)0x0) {
         if (*(long*)( lVar1 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar1 + 0x10 ));
         }
      } else {
         local_50 = strlen(pcVar2);
         local_58 = pcVar2;
         String::parse_latin1((StrRange*)&local_78);
      }
   }
   if (( ( param_2 == 0 ) && ( local_90 = (String*)&local_78 * (long*)( this + 0x580 ) != 0 ) ) && ( ( cVar4 = String::operator ==(local_90, "play") ),cVar4 != '\0' || ( ( ( cVar4 = String::operator ==(local_90, "play_backwards") ),cVar4 != '\0' || ( cVar4 = String::operator ==(local_90, "set_animation") ),cVar4 != '\0' ) ) || ( cVar4 = String::operator ==(local_90, "set_autoplay") ),cVar4 != '\0' )) {
      local_70 = (long*)0x0;
      SpriteFrames::get_animation_list(*(List**)( this + 0x580 ));
      if (( local_70 != (long*)0x0 ) && ( plVar6 = (long*)*local_70 ),plVar6 != (long*)0x0) {
         do {
            lVar1 = *plVar6;
            if (lVar1 == 0) {
               local_68 = 0;
            } else {
               pcVar2 = *(char**)( lVar1 + 8 );
               local_68 = 0;
               if (pcVar2 == (char*)0x0) {
                  if (*(long*)( lVar1 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar1 + 0x10 ));
                  }
               } else {
                  local_50 = strlen(pcVar2);
                  local_58 = pcVar2;
                  String::parse_latin1((StrRange*)&local_68);
               }
            }
            local_60 = 0;
            local_58 = "\"";
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_60);
            String::quote((String*)&local_58);
            if (*(long*)param_3 == 0) {
               pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_3 = pauVar5;
               *(undefined4*)pauVar5[1] = 0;
               *pauVar5 = (undefined1[16])0x0;
            }
            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (local_58 != (char*)0x0) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_58);
            }
            pcVar2 = local_58;
            plVar3 = *(long**)param_3;
            lVar1 = plVar3[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar3;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
            }
            plVar3[1] = (long)this_00;
            if (*plVar3 == 0) {
               *plVar3 = (long)this_00;
            }
            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_58 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar3 = (long*)( local_60 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            lVar1 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar3 = (long*)( local_68 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            plVar6 = (long*)plVar6[1];
         } while ( plVar6 != (long*)0x0 );
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_70);
   }
   local_90 = (String*)&local_78;
   Node::get_argument_options((StringName*)this, (int)param_1, (List*)(ulong)(uint)param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::_validate_property(PropertyInfo&) const [clone .part.0] */void AnimatedSprite2D::_validate_property(AnimatedSprite2D *this, PropertyInfo *param_1) {
   long *plVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   char *pcVar5;
   long *plVar6;
   char *pcVar7;
   long in_FS_OFFSET;
   char local_81;
   long *local_78;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = String::operator ==((String*)( param_1 + 8 ), "animation");
   if (cVar2 == '\0') {
      cVar2 = String::operator ==((String*)( param_1 + 8 ), "frame");
      if (cVar2 != '\0') {
         if (this[0x590] == (AnimatedSprite2D)0x0) {
            *(undefined4*)( param_1 + 0x18 ) = 1;
            cVar2 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
            if (( cVar2 == '\0' ) || ( iVar3 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 )) ),iVar3 < 1) {
               local_50 = 5;
               local_58 = "0,0,1";
               String::parse_latin1((StrRange*)( param_1 + 0x20 ));
            } else {
               local_60 = 0;
               String::parse_latin1((String*)&local_60, ",1");
               SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
               itos((long)&local_70);
               operator+((char *)&
               local_68,(String*)&_LC77;
               String::operator +((String*)&local_58, (String*)&local_68);
               if (*(char**)( param_1 + 0x20 ) != local_58) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
                  pcVar5 = local_58;
                  local_58 = (char*)0x0;
                  *(char**)( param_1 + 0x20 ) = pcVar5;
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }
            *(uint*)( param_1 + 0x28 ) = *(uint*)( param_1 + 0x28 ) | 0x1000000;
         } else {
            *(undefined4*)( param_1 + 0x28 ) = 0x10000004;
         }
      }
      goto LAB_001011be;
   }
   local_78 = (long*)0x0;
   SpriteFrames::get_animation_list(*(List**)( this + 0x580 ));
   List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>((List<StringName,DefaultAllocator>*)&local_78);
   if (( local_78 != (long*)0x0 ) && ( plVar6 = (long*)*local_78 ),plVar6 != (long*)0x0) {
      local_81 = '\0';
      do {
         lVar4 = *plVar6;
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar5 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar5 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         String::operator +=((String*)( param_1 + 0x20 ), (String*)&local_60);
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
         lVar4 = *plVar6;
         plVar6 = (long*)plVar6[1];
         if (*(long*)( this + 0x598 ) == lVar4) {
            local_81 = cVar2;
            if (plVar6 == (long*)0x0) goto LAB_001013ee;
         } else if (plVar6 == (long*)0x0) goto LAB_00101350;
         String::operator +=((String*)( param_1 + 0x20 ), ",");
      } while ( true );
   }
   LAB_0010135b:pcVar5 = *(char**)( param_1 + 0x20 );
   if (pcVar5 == (char*)0x0) {
      lVar4 = *(long*)( this + 0x598 );
      if (lVar4 == 0) {
         local_58 = (char*)0x0;
      } else {
         LAB_00101383:local_58 = (char*)0x0;
         if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
            pcVar7 = *(char**)( lVar4 + 0x10 );
            if (*(char**)( lVar4 + 0x10 ) != (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               pcVar5 = *(char**)( param_1 + 0x20 );
               pcVar7 = local_58;
            }
         } else {
            String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
            pcVar5 = *(char**)( param_1 + 0x20 );
            pcVar7 = local_58;
         }
         if (pcVar7 != pcVar5) goto LAB_001013bf;
      }
   } else {
      if (1 < *(uint*)( pcVar5 + -8 )) {
         local_68 = 0;
         String::parse_latin1((String*)&local_68, ",");
         lVar4 = *(long*)( this + 0x598 );
         if (lVar4 == 0) {
            local_70 = 0;
         } else {
            local_70 = 0;
            if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar4 + 0x10 ));
               }
            } else {
               String::parse_latin1((String*)&local_70, *(char**)( lVar4 + 8 ));
            }
         }
         String::operator +((String*)&local_60, (String*)&local_70);
         String::operator +((String*)&local_58, (String*)&local_60);
         if (*(char**)( param_1 + 0x20 ) != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
            pcVar5 = local_58;
            local_58 = (char*)0x0;
            *(char**)( param_1 + 0x20 ) = pcVar5;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         goto LAB_001013ee;
      }
      lVar4 = *(long*)( this + 0x598 );
      if (lVar4 != 0) goto LAB_00101383;
      local_58 = (char*)0x0;
      LAB_001013bf:CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
      pcVar5 = local_58;
      local_58 = (char*)0x0;
      *(char**)( param_1 + 0x20 ) = pcVar5;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   goto LAB_001013ee;
   LAB_00101350:if (local_81 == '\0') goto LAB_0010135b;
   LAB_001013ee:List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
   LAB_001011be:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::_validate_property(PropertyInfo&) const */void AnimatedSprite2D::_validate_property(AnimatedSprite2D *this, PropertyInfo *param_1) {
   if (*(long*)( this + 0x580 ) != 0) {
      _validate_property(this, param_1);
      return;
   }
   return;
}/* AnimatedSprite2D::_edit_use_rect() const */undefined4 AnimatedSprite2D::_edit_use_rect(AnimatedSprite2D *this) {
   int iVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   void *pvVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   undefined8 local_50;
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   uint local_38[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(StringName**)( this + 0x580 ) != (StringName*)0x0) {
      cVar4 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
      if (( ( ( cVar4 != '\0' ) && ( iVar1 = *(int*)( this + 0x5a0 ) ),-1 < iVar1 ) ) && ( iVar5 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 )) ),iVar1 < iVar5) {
         lVar2 = *(long*)( this + 0x580 );
         local_38[0] = 0;
         iVar1 = *(int*)( this + 0x5a0 );
         cVar4 = HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( lVar2 + 0x240 ), (StringName*)( this + 0x598 ), local_38);
         if (( cVar4 == '\0' ) || ( lVar2 = *(long*)( *(long*)( lVar2 + 0x248 ) + (ulong)local_38[0] * 8 ) ),lVar2 == 0) {
            local_40 = 0;
            String::parse_latin1((String*)&local_40, "\' doesn\'t exist.");
            lVar2 = *(long*)( this + 0x598 );
            if (lVar2 == 0) {
               local_50 = 0;
            } else {
               local_50 = 0;
               if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar2 + 0x10 ));
               } else {
                  String::parse_latin1((String*)&local_50, *(char**)( lVar2 + 8 ));
               }
            }
            operator+((char *)
            local_48,(String*)"Animation \'";
            String::operator +((String*)local_38, (String*)local_48);
            _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (String*)local_38, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
            CowData<char32_t>::_unref(local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         } else if (iVar1 < 0) {
            _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
         } else {
            lVar2 = *(long*)( lVar2 + 0x30 );
            if (( ( lVar2 != 0 ) && ( (long)iVar1 < *(long*)( lVar2 + -8 ) ) ) && ( ( pOVar3 = *(Object**)( lVar2 + (long)iVar1 * 0x10 ) ),pOVar3 != (Object*)0x0 && ( uVar6 = RefCounted::reference() ),(char)uVar6 != '\0' )) {
               cVar4 = RefCounted::reference();
               if (cVar4 != '\0') {
                  cVar4 = RefCounted::unreference();
                  pOVar8 = pOVar3;
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar3) ),cVar4 != '\0') {
                     LAB_00101960:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                     if (pOVar8 == (Object*)0x0) goto LAB_00101920;
                  }
                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar8) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }
                  goto LAB_00101922;
               }
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar3);
                  pOVar8 = (Object*)0x0;
                  if (cVar4 != '\0') goto LAB_00101960;
               }
            }
         }
      }
   }
   LAB_00101920:uVar6 = 0;
   LAB_00101922:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* AnimatedSprite2D::_get_rect() const */undefined1  [16] __thiscallAnimatedSprite2D::_get_rect(AnimatedSprite2D *this) {
   int iVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   float fVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   ulong uVar8;
   undefined8 uVar9;
   float fVar10;
   float fVar11;
   undefined1 auVar12[16];
   undefined8 local_78;
   undefined8 local_50;
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   uint local_38[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(StringName**)( this + 0x580 ) != (StringName*)0x0) {
      cVar4 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
      if (( ( ( cVar4 != '\0' ) && ( iVar1 = *(int*)( this + 0x5a0 ) ),-1 < iVar1 ) ) && ( iVar5 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 )) ),iVar1 < iVar5) {
         lVar2 = *(long*)( this + 0x580 );
         local_38[0] = 0;
         iVar1 = *(int*)( this + 0x5a0 );
         cVar4 = HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( lVar2 + 0x240 ), (StringName*)( this + 0x598 ), local_38);
         if (( cVar4 == '\0' ) || ( lVar2 = *(long*)( *(long*)( lVar2 + 0x248 ) + (ulong)local_38[0] * 8 ) ),lVar2 == 0) {
            local_40 = 0;
            String::parse_latin1((String*)&local_40, "\' doesn\'t exist.");
            lVar2 = *(long*)( this + 0x598 );
            if (lVar2 == 0) {
               local_50 = 0;
            } else {
               local_50 = 0;
               if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar2 + 0x10 ));
               } else {
                  String::parse_latin1((String*)&local_50, *(char**)( lVar2 + 8 ));
               }
            }
            operator+((char *)
            local_48,(String*)"Animation \'";
            String::operator +((String*)local_38, (String*)local_48);
            _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (String*)local_38, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
            CowData<char32_t>::_unref(local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         } else if (iVar1 < 0) {
            _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
         } else {
            lVar2 = *(long*)( lVar2 + 0x30 );
            if (( ( lVar2 != 0 ) && ( (long)iVar1 < *(long*)( lVar2 + -8 ) ) ) && ( ( pOVar3 = *(Object**)( lVar2 + (long)iVar1 * 0x10 ) ),pOVar3 != (Object*)0x0 && ( cVar4 = RefCounted::reference() ),cVar4 != '\0' )) {
               cVar4 = RefCounted::reference();
               if (cVar4 != '\0') {
                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar3) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }
                  uVar8 = ( **(code**)( *(long*)pOVar3 + 0x1d8 ) )(pOVar3);
                  fVar10 = *(float*)( this + 0x5b0 );
                  fVar11 = *(float*)( this + 0x5b4 );
                  fVar6 = (float)( uVar8 >> 0x20 );
                  if (this[0x5ac] != (AnimatedSprite2D)0x0) {
                     fVar10 = fVar10 - (float)uVar8 * (float)_LC81;
                     fVar11 = fVar11 - (float)_LC81 * fVar6;
                  }
                  if (( fVar6 == 0.0 ) && ( (float)uVar8 == 0.0 )) {
                     uVar8 = (ulong)(uint)_LC45;
                     fVar6 = _LC45;
                  }
                  local_78 = CONCAT44(fVar11, fVar10);
                  uVar9 = CONCAT44(fVar6, (int)uVar8);
                  cVar4 = RefCounted::unreference();
                  if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar3) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }
                  goto LAB_00101a4a;
               }
               cVar4 = RefCounted::unreference();
               if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar3) ),cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
         }
      }
   }
   local_78 = 0;
   uVar9 = 0;
   LAB_00101a4a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar12._8_8_ = uVar9;
      auVar12._0_8_ = local_78;
      return auVar12;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AnimatedSprite2D::get_anchorable_rect() const */void AnimatedSprite2D::get_anchorable_rect(AnimatedSprite2D *this) {
   _get_rect(this);
   return;
}/* AnimatedSprite2D::_bind_methods() */void AnimatedSprite2D::_bind_methods(void) {
   Variant *pVVar1;
   long *plVar2;
   char cVar3;
   long lVar4;
   code *pcVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined *puVar14;
   undefined *puVar15;
   undefined *puVar16;
   int *piVar17;
   MethodBind *pMVar18;
   uint uVar19;
   long lVar20;
   int *piVar21;
   Variant *pVVar22;
   long in_FS_OFFSET;
   undefined8 local_1c8;
   undefined8 local_1c0;
   undefined8 local_1b8;
   long local_1b0;
   long local_1a8;
   long local_1a0;
   char *local_198;
   undefined8 local_190;
   char *local_188;
   undefined8 local_180;
   CowData<char32_t> local_178[8];
   long lStack_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148[2];
   int *local_138;
   undefined8 local_130;
   long local_120;
   char *local_118;
   undefined8 local_110;
   undefined *local_108;
   undefined *puStack_100;
   undefined8 local_f8;
   undefined *local_e8;
   char *pcStack_e0;
   char *local_d8;
   undefined8 local_d0;
   Variant *local_c8;
   undefined1 auStack_c0[24];
   Variant **local_a8;
   undefined1 auStack_a0[16];
   undefined8 local_90;
   undefined1 local_88[16];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   puVar16 = PTR__LC83_00118d60;
   puVar15 = PTR__LC82_00118d58;
   puVar14 = PTR__LC74_00118d50;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_110 = 0;
   local_118 = "sprite_frames";
   uVar19 = ( uint ) & local_c8;
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_188, (char***)"set_sprite_frames", uVar19);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,Ref<SpriteFrames>const&>(set_sprite_frames);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_sprite_frames", 0);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,Ref<SpriteFrames>>(get_sprite_frames);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   local_110 = 0;
   local_118 = "name";
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_188, (char***)"set_animation", uVar19);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,StringName_const&>(set_animation);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_animation", 0);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,StringName>(get_animation);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   local_110 = 0;
   local_118 = "name";
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_188, (char***)"set_autoplay", uVar19);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,String_const&>(set_autoplay);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_autoplay", 0);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,String>(get_autoplay);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"is_playing", 0);
   auStack_c0._0_16_ = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(is_playing);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   local_d8 = "from_end";
   auStack_c0._8_8_ = &local_d8;
   auStack_c0._0_8_ = &pcStack_e0;
   local_e8 = puVar16;
   pcStack_e0 = "custom_speed";
   local_198 = (char*)0x0;
   local_d0 = 0;
   local_c8 = (Variant*)&local_e8;
   D_METHODP((char*)&local_188, (char***)&_LC46, uVar19);
   Variant::Variant((Variant*)&local_a8, (StringName*)&local_198);
   Variant::Variant((Variant*)&local_90, _LC37);
   Variant::Variant(local_78, false);
   pVVar22 = local_48;
   local_58 = (undefined1[16])0x0;
   auStack_c0._8_8_ = local_78;
   auStack_c0._0_8_ = (Variant*)&local_90;
   local_60 = 0;
   local_c8 = (Variant*)&local_a8;
   pMVar18 = create_method_bind<AnimatedSprite2D,StringName_const&,float,bool>(play);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, &local_c8, 3);
   do {
      pVVar1 = pVVar22 + -0x18;
      pVVar22 = pVVar22 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar22 != (Variant*)&local_a8 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   local_c8 = (Variant*)&_LC83;
   local_198 = (char*)0x0;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar13 << 0x40;
   uVar19 = (uint)(Variant*)&local_a8;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"play_backwards", uVar19);
   Variant::Variant((Variant*)&local_a8, (StringName*)&local_198);
   local_88 = (undefined1[16])0x0;
   local_90 = 0;
   local_c8 = (Variant*)&local_a8;
   pMVar18 = create_method_bind<AnimatedSprite2D,StringName_const&>(play_backwards);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, &local_c8, 1);
   if (Variant::needs_deinit[(int)local_90] == '\0') {
      cVar3 = Variant::needs_deinit[(int)local_a8];
   } else {
      Variant::_clear_internal();
      cVar3 = Variant::needs_deinit[(int)local_a8];
   }
   if (cVar3 != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_188, (char***)"pause", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D>(pause);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)&_LC93, 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D>(stop);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar6._8_8_ = 0;
   auVar6._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar6 << 0x40;
   local_c8 = (Variant*)0x108f45;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_centered", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(set_centered);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"is_centered", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(is_centered);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar7._8_8_ = 0;
   auVar7._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar7 << 0x40;
   local_c8 = (Variant*)0x108e26;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_offset", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,Vector2_const&>(set_offset);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_offset", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,Vector2>(get_offset);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar8 << 0x40;
   local_c8 = (Variant*)0x108f7d;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_flip_h", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(set_flip_h);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"is_flipped_h", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(is_flipped_h);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar9 << 0x40;
   local_c8 = (Variant*)0x108f9c;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_flip_v", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(set_flip_v);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"is_flipped_v", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,bool>(is_flipped_v);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar10 << 0x40;
   local_c8 = (Variant*)0x108e9a;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_frame", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,int>(set_frame);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_frame", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,int>(get_frame);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar11._8_8_ = 0;
   auVar11._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar11 << 0x40;
   local_c8 = (Variant*)0x108ebe;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_frame_progress", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,float>(set_frame_progress);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_frame_progress", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,float>(get_frame_progress);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   local_f8 = 0;
   local_108 = puVar14;
   puStack_100 = puVar15;
   auStack_a0._0_8_ = &puStack_100;
   local_a8 = (Variant**)&local_108;
   D_METHODP((char*)&local_188, (char***)"set_frame_and_progress", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,int,float>(set_frame_and_progress);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = auStack_c0._8_8_;
   auStack_c0._0_16_ = auVar12 << 0x40;
   local_c8 = (Variant*)0x10900c;
   local_a8 = &local_c8;
   D_METHODP((char*)&local_188, (char***)"set_speed_scale", uVar19);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,float>(set_speed_scale);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_speed_scale", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,float>(get_speed_scale);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   D_METHODP((char*)&local_188, (char***)"get_playing_speed", 0);
   auStack_a0 = (undefined1[16])0x0;
   local_a8 = (Variant**)0x0;
   pMVar18 = create_method_bind<AnimatedSprite2D,float>(get_playing_speed);
   ClassDB::bind_methodfi(1, pMVar18, false, (MethodDefinition*)&local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_188);
   local_188 = "sprite_frames_changed";
   local_1a0 = 0;
   local_180 = 0x15;
   String::parse_latin1((StrRange*)&local_1a0);
   _local_178 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   local_158 = 6;
   local_150 = 1;
   local_148[0] = 0;
   local_138 = (int*)0x0;
   local_130 = 0;
   local_120 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1a0);
   local_198 = "AnimatedSprite2D";
   local_1a8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   lVar4 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar2 = (long*)( local_120 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   piVar17 = local_138;
   if (local_138 != (int*)0x0) {
      LOCK();
      plVar2 = (long*)( local_138 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         if (local_138 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }
         lVar4 = *(long*)( local_138 + -2 );
         lVar20 = 0;
         local_138 = (int*)0x0;
         piVar21 = piVar17;
         if (lVar4 != 0) {
            do {
               if (Variant::needs_deinit[*piVar21] != '\0') {
                  Variant::_clear_internal();
               }
               lVar20 = lVar20 + 1;
               piVar21 = piVar21 + 6;
            } while ( lVar4 != lVar20 );
         }
         Memory::free_static(piVar17 + -4, false);
      }
   }
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( lStack_170 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   local_188 = "animation_changed";
   local_1a0 = 0;
   local_180 = 0x11;
   String::parse_latin1((StrRange*)&local_1a0);
   _local_178 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   local_158 = 6;
   local_150 = 1;
   local_148[0] = 0;
   local_138 = (int*)0x0;
   local_130 = 0;
   local_120 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1a0);
   local_198 = "AnimatedSprite2D";
   local_1a8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   lVar4 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar2 = (long*)( local_120 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   piVar17 = local_138;
   if (local_138 != (int*)0x0) {
      LOCK();
      plVar2 = (long*)( local_138 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         if (local_138 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }
         lVar4 = *(long*)( local_138 + -2 );
         lVar20 = 0;
         local_138 = (int*)0x0;
         piVar21 = piVar17;
         if (lVar4 != 0) {
            do {
               if (Variant::needs_deinit[*piVar21] != '\0') {
                  Variant::_clear_internal();
               }
               lVar20 = lVar20 + 1;
               piVar21 = piVar21 + 6;
            } while ( lVar4 != lVar20 );
         }
         Memory::free_static(piVar17 + -4, false);
      }
   }
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( lStack_170 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "frame_changed");
   _local_178 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   local_158 = 6;
   local_150 = 1;
   local_148[0] = 0;
   local_138 = (int*)0x0;
   local_130 = 0;
   local_120 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1a0);
   local_198 = "AnimatedSprite2D";
   local_1a8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   lVar4 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar2 = (long*)( local_120 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   piVar17 = local_138;
   if (local_138 != (int*)0x0) {
      LOCK();
      plVar2 = (long*)( local_138 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         if (local_138 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }
         lVar4 = *(long*)( local_138 + -2 );
         lVar20 = 0;
         local_138 = (int*)0x0;
         piVar21 = piVar17;
         if (lVar4 != 0) {
            do {
               if (Variant::needs_deinit[*piVar21] != '\0') {
                  Variant::_clear_internal();
               }
               lVar20 = lVar20 + 1;
               piVar21 = piVar21 + 6;
            } while ( lVar4 != lVar20 );
         }
         Memory::free_static(piVar17 + -4, false);
      }
   }
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( lStack_170 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   local_188 = "animation_looped";
   local_1a0 = 0;
   local_180 = 0x10;
   String::parse_latin1((StrRange*)&local_1a0);
   _local_178 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   local_158 = 6;
   local_150 = 1;
   local_148[0] = 0;
   local_138 = (int*)0x0;
   local_130 = 0;
   local_120 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1a0);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "AnimatedSprite2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   lVar4 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar2 = (long*)( local_120 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   piVar17 = local_138;
   if (local_138 != (int*)0x0) {
      LOCK();
      plVar2 = (long*)( local_138 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         if (local_138 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }
         lVar4 = *(long*)( local_138 + -2 );
         lVar20 = 0;
         local_138 = (int*)0x0;
         piVar21 = piVar17;
         if (lVar4 != 0) {
            do {
               if (Variant::needs_deinit[*piVar21] != '\0') {
                  Variant::_clear_internal();
               }
               lVar20 = lVar20 + 1;
               piVar21 = piVar21 + 6;
            } while ( lVar4 != lVar20 );
         }
         Memory::free_static(piVar17 + -4, false);
      }
   }
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( lStack_170 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "animation_finished");
   _local_178 = (undefined1[16])0x0;
   local_188 = (char*)0x0;
   local_180 = 0;
   local_168 = 0;
   local_160 = 0;
   local_158 = 6;
   local_150 = 1;
   local_148[0] = 0;
   local_138 = (int*)0x0;
   local_130 = 0;
   local_120 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1a0);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "AnimatedSprite2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_188);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   lVar4 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar2 = (long*)( local_120 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   piVar17 = local_138;
   if (local_138 != (int*)0x0) {
      LOCK();
      plVar2 = (long*)( local_138 + -4 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         if (local_138 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }
         lVar4 = *(long*)( local_138 + -2 );
         lVar20 = 0;
         local_138 = (int*)0x0;
         piVar21 = piVar17;
         if (lVar4 != 0) {
            do {
               if (Variant::needs_deinit[*piVar21] != '\0') {
                  Variant::_clear_internal();
               }
               lVar20 = lVar20 + 1;
               piVar21 = piVar21 + 6;
            } while ( lVar4 != lVar20 );
         }
         Memory::free_static(piVar17 + -4, false);
      }
   }
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   if (( StringName::configured != '\0' ) && ( lStack_170 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   local_188 = "";
   local_198 = (char*)0x0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_188 = "Animation";
   local_1a0 = 0;
   local_180 = 9;
   String::parse_latin1((StrRange*)&local_1a0);
   local_188 = "AnimatedSprite2D";
   local_1a8 = 0;
   local_180 = 0x10;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_188, (String*)&local_1a8, false);
   ClassDB::add_property_group((StringName*)&local_188, (String*)&local_1a0, (String*)&local_198, 0);
   if (( StringName::configured != '\0' ) && ( local_188 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "SpriteFrames";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0xc;
   String::parse_latin1((StrRange*)&local_1b8);
   local_1c0 = 0;
   local_188 = "sprite_frames";
   local_180 = 0xd;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 0x18, (StrRange*)&local_1c0, 0x11, (StrRange*)&local_1b8, 6, &local_1b0);
   local_1c8 = 0;
   String::parse_latin1((String*)&local_1c8, "AnimatedSprite2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "animation";
   local_1c0 = 0;
   local_180 = 9;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 0x15, (StrRange*)&local_1c0, 2, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1a0 != 0 ) ) )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "autoplay";
   local_1c0 = 0;
   local_180 = 8;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 0x15, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 2, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_1c0 = 0;
   String::parse_latin1((String*)&local_1c0, "frame");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 2, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "frame_progress";
   local_1c0 = 0;
   local_180 = 0xe;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 3, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 2, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "speed_scale";
   local_1c0 = 0;
   local_180 = 0xb;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 3, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "");
   local_188 = "Offset";
   local_1a0 = 0;
   local_180 = 6;
   String::parse_latin1((StrRange*)&local_1a0);
   local_188 = "AnimatedSprite2D";
   local_1a8 = 0;
   local_180 = 0x10;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_188, (String*)&local_1a8, false);
   ClassDB::add_property_group((StringName*)&local_188, (String*)&local_1a0, (String*)&local_198, 0);
   if (( StringName::configured != '\0' ) && ( local_188 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "centered";
   local_1c0 = 0;
   local_180 = 8;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 1, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "suffix:px";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 9;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "offset";
   local_1c0 = 0;
   local_180 = 6;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 5, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1a0 != 0 ) ) )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_188 = "";
   local_1b0 = 0;
   local_1b8 = 0;
   local_180 = 0;
   String::parse_latin1((StrRange*)&local_1b8);
   local_188 = "flip_h";
   local_1c0 = 0;
   local_180 = 6;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 1, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1a0, true);
   _scs_create((char*)&local_1a8, true);
   local_1b0 = 0;
   local_1b8 = 0;
   String::parse_latin1((String*)&local_1b8, "");
   local_188 = "flip_v";
   local_1c0 = 0;
   local_180 = 6;
   String::parse_latin1((StrRange*)&local_1c0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_188, 1, (StrRange*)&local_1c0, 0, (StrRange*)&local_1b8, 6, &local_1b0);
   local_198 = "AnimatedSprite2D";
   local_1c8 = 0;
   local_190 = 0x10;
   String::parse_latin1((StrRange*)&local_1c8);
   StringName::StringName((StringName*)&local_198, (String*)&local_1c8, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_188, (StringName*)&local_1a8, (StringName*)&local_1a0, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1a0 != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* AnimatedSprite2D::get_configuration_warnings() const */void AnimatedSprite2D::get_configuration_warnings(void) {
   CowData<char32_t> *this;
   int iVar1;
   long lVar2;
   long in_RSI;
   long lVar3;
   long in_RDI;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::get_configuration_warnings();
   if (*(long*)( in_RSI + 0x580 ) != 0) goto LAB_00104e47;
   local_60 = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "A SpriteFrames resource must be created or set in the \"Sprite Frames\" property in order for AnimatedSprite2D to display frames.";
   local_68 = 0;
   local_50 = 0x7f;
   String::parse_latin1((StrRange*)&local_68);
   RTR((String*)&local_58, (String*)&local_68);
   if (*(long*)( in_RDI + 8 ) == 0) {
      lVar3 = 1;
   } else {
      lVar3 = *(long*)( *(long*)( in_RDI + 8 ) + -8 ) + 1;
   }
   iVar1 = CowData<String>::resize<false>((CowData<String>*)( in_RDI + 8 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( in_RDI + 8 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      } else {
         lVar3 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<String>::_copy_on_write((CowData<String>*)( in_RDI + 8 ));
            this(CowData<char32_t> * )(*(long*)( in_RDI + 8 ) + lVar2 * 8);
            if (*(char**)this != local_58) {
               CowData<char32_t>::_ref(this, (CowData*)&local_58);
            }
            goto LAB_00104f4e;
         }
      }
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
   } else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }
   LAB_00104f4e:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00104e47:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AnimatedSprite2D::set_animation(StringName const&) [clone .part.0] */void AnimatedSprite2D::set_animation(AnimatedSprite2D *this, StringName *param_1) {
   char *__s;
   int iVar1;
   long lVar2;
   bool bVar3;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   CowData<String> local_70[8];
   char *local_68;
   size_t local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::operator =((StringName*)( this + 0x598 ), param_1);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, SceneStringNames::singleton + 0x108, 0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   bVar3 = SUB81(this, 0);
   if (*(StringName**)( this + 0x580 ) == (StringName*)0x0) {
      if (*(long*)( this + 0x598 ) != 0) {
         StringName::unref();
         *(undefined8*)( this + 0x598 ) = 0;
      }
      this[0x590] = (AnimatedSprite2D)0x0;
      *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
      set_frame_and_progress(this, 0, 0.0);
      Object::notify_property_list_changed();
      Node::set_process_internal(bVar3);
      StringName::StringName((StringName*)&local_78, param_1);
      local_68 = "There is no animation with name \'%s\'.";
      local_80 = 0;
      local_60 = 0x25;
      String::parse_latin1((StrRange*)&local_80);
      vformat<StringName>((CowData<char32_t>*)&local_68, (StrRange*)&local_80, (StringName*)&local_78);
      _err_print_error("set_animation", "scene/2d/animated_sprite_2d.cpp", 0x225, "Method/function failed.", (CowData<char32_t>*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
   } else {
      iVar1 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
      if (( *(long*)( this + 0x598 ) == 0 ) || ( iVar1 == 0 )) {
         this[0x590] = (AnimatedSprite2D)0x0;
         *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
         set_frame_and_progress(this, 0, 0.0);
         Object::notify_property_list_changed();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Node::set_process_internal(bVar3);
            return;
         }
         goto LAB_0010547a;
      }
      SpriteFrames::get_animation_names();
      lVar2 = *(long*)( this + 0x598 );
      if (lVar2 == 0) {
         local_80 = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         local_80 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar2 + 0x10 ));
         } else {
            local_60 = strlen(__s);
            local_68 = __s;
            String::parse_latin1((StrRange*)&local_80);
         }
      }
      lVar2 = CowData<String>::find(local_70, (String*)&local_80, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<String>::_unref(local_70);
      if (lVar2 != -1) {
         if (( this[0x590] == (AnimatedSprite2D)0x0 ) || ( -1 < (int)( *(float*)( this + 0x5a4 ) * *(float*)( this + 0x5a8 ) ) )) {
            set_frame_and_progress(this, 0, 0.0);
         } else {
            set_frame_and_progress(this, iVar1 + -1, _LC45);
         }
         Object::notify_property_list_changed();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            CanvasItem::queue_redraw();
            return;
         }
         goto LAB_0010547a;
      }
      if (*(long*)( this + 0x598 ) != 0) {
         StringName::unref();
         *(undefined8*)( this + 0x598 ) = 0;
      }
      this[0x590] = (AnimatedSprite2D)0x0;
      *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
      set_frame_and_progress(this, 0, 0.0);
      Object::notify_property_list_changed();
      Node::set_process_internal(bVar3);
      StringName::StringName((StringName*)&local_78, param_1);
      local_68 = "There is no animation with name \'%s\'.";
      local_80 = 0;
      local_60 = 0x25;
      String::parse_latin1((StrRange*)&local_80);
      vformat<StringName>((CowData<char32_t>*)&local_68, (CowData<char32_t>*)&local_80, (StringName*)&local_78);
      _err_print_error("set_animation", "scene/2d/animated_sprite_2d.cpp", 0x22f, "Method/function failed.", (CowData<char32_t>*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010547a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* AnimatedSprite2D::set_animation(StringName const&) */void AnimatedSprite2D::set_animation(AnimatedSprite2D *this, StringName *param_1) {
   if (*(long*)param_1 != *(long*)( this + 0x598 )) {
      set_animation(this, param_1);
      return;
   }
   return;
}/* AnimatedSprite2D::set_sprite_frames(Ref<SpriteFrames> const&) */void AnimatedSprite2D::set_sprite_frames(AnimatedSprite2D *this, Ref *param_1) {
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   StringName *pSVar4;
   char cVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   undefined8 *local_60;
   long local_58[2];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   plVar1 = *(long**)( this + 0x580 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)param_1 == plVar1) goto LAB_00105716;
   if (plVar1 != (long*)0x0) {
      pcVar2 = *(code**)( *plVar1 + 0x110 );
      create_custom_callable_function_pointer<AnimatedSprite2D>((AnimatedSprite2D*)local_58, (char*)this, (_func_void*)"&AnimatedSprite2D::_res_changed");
      ( *pcVar2 )(plVar1, CoreStringNames::singleton + 8, (AnimatedSprite2D*)local_58);
      Callable::~Callable((Callable*)local_58);
   }
   this[0x590] = (AnimatedSprite2D)0x0;
   *(undefined4*)( this + 0x5a8 ) = 0x3f800000;
   set_frame_and_progress(this, 0, 0.0);
   Object::notify_property_list_changed();
   Node::set_process_internal(SUB81(this, 0));
   pOVar3 = *(Object**)param_1;
   pOVar6 = *(Object**)( this + 0x580 );
   if (pOVar3 == pOVar6) {
      LAB_001055a8:if (pOVar6 != (Object*)0x0) {
         pcVar2 = *(code**)( *(long*)pOVar6 + 0x108 );
         create_custom_callable_function_pointer<AnimatedSprite2D>((AnimatedSprite2D*)local_58, (char*)this, (_func_void*)"&AnimatedSprite2D::_res_changed");
         ( *pcVar2 )(pOVar6, CoreStringNames::singleton + 8, (AnimatedSprite2D*)local_58, 0);
         Callable::~Callable((Callable*)local_58);
         local_60 = (undefined8*)0x0;
         SpriteFrames::get_animation_list(*(List**)( this + 0x580 ));
         if (( local_60 == (undefined8*)0x0 ) || ( *(int*)( local_60 + 2 ) == 0 )) {
            local_58[0] = 0;
            if (( *(long*)( this + 0x598 ) != 0 ) && ( ( set_animation(this, (StringName*)local_58),StringName::configured != '\0' && ( local_58[0] != 0 ) ) )) {
               StringName::unref();
            }
            local_58[0] = 0;
            if (*(long*)( this + 0x588 ) != 0) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x588 ));
               *(undefined8*)( this + 0x588 ) = 0;
            }
            LAB_00105689:CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
         } else {
            cVar5 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
            if (cVar5 == '\0') {
               if (local_60 == (undefined8*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
               if (*(long*)( this + 0x598 ) != *(long*)*local_60) {
                  set_animation(this, (StringName*)*local_60);
               }
            }
            pSVar4 = *(StringName**)( this + 0x580 );
            StringName::StringName((StringName*)local_58, (String*)( this + 0x588 ), false);
            cVar5 = SpriteFrames::has_animation(pSVar4);
            if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
               StringName::unref();
            }
            if (cVar5 == '\0') {
               local_58[0] = 0;
               if (*(long*)( this + 0x588 ) != 0) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x588 ));
                  *(undefined8*)( this + 0x588 ) = 0;
               }
               goto LAB_00105689;
            }
         }
         List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_60);
      }
   } else {
      *(Object**)( this + 0x580 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x580 ) = 0;
            goto LAB_00105588;
         }
         if (pOVar6 != (Object*)0x0) goto LAB_00105591;
         LAB_001055a1:pOVar6 = *(Object**)( this + 0x580 );
         goto LAB_001055a8;
      }
      LAB_00105588:if (pOVar6 != (Object*)0x0) {
         LAB_00105591:cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar6) ),cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }
         goto LAB_001055a1;
      }
   }
   Object::notify_property_list_changed();
   CanvasItem::queue_redraw();
   Node::update_configuration_warnings();
   StringName::StringName((StringName*)local_58, "sprite_frames_changed", false);
   local_40 = (undefined1[16])0x0;
   local_48 = 0;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, (AnimatedSprite2D*)local_58, 0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
      StringName::unref();
   }
   LAB_00105716:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::_set(StringName const&, Variant const&) */undefined8 AnimatedSprite2D::_set(StringName *param_1, Variant *param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   Object *pOVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_set(StringName_const&,Variant_const&)::{lambda()
   #1
   iVar2 = __cxa_guard_acquire(&_set(StringName_const & Variant_const & ::sname));
   if (iVar2 != 0) {
      _scs_create((char*)&_set(StringName_const & Variant_const & ::sname, true));
      __cxa_atexit(StringName::~StringName, &_set(StringName_const & Variant_const & ::sname, &__dso_handle));
      __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()
      #1
      )
      ;;
   }
}uVar5 = 0;if (*(long *)param_2 != _set(StringName_const&,Variant_const&)::{lambda()#1goto LAB_001058a2;local_38 = (Object*)0x0;lVar3 = Variant::get_validated_object();if (lVar3 == 0) {
   LAB_0010596d:set_sprite_frames((AnimatedSprite2D*)param_1, (Ref*)&local_38);
} else {
   pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &SpriteFrames::typeinfo, 0);
   if (pOVar4 == (Object*)0x0) goto LAB_0010596d;
   local_38 = pOVar4;
   cVar1 = RefCounted::reference();
   if (cVar1 == '\0') {
      local_38 = (Object*)0x0;
      goto LAB_0010596d;
   }
   set_sprite_frames((AnimatedSprite2D*)param_1, (Ref*)&local_38);
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }
   }
}uVar5 = 1;LAB_001058a2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar5;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimatedSprite2D::play(StringName const&, float, bool) */void AnimatedSprite2D::play(AnimatedSprite2D *this, StringName *param_1, float param_2, bool param_3) {
   char *__s;
   int iVar1;
   uint uVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   long local_78;
   CowData<String> local_70[8];
   char *local_68;
   size_t local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_88, param_1);
   if (local_88 == 0) {
      StringName::operator =((StringName*)&local_88, (StringName*)( this + 0x598 ));
      if (*(long*)( this + 0x580 ) != 0) goto LAB_00105a28;
      LAB_00105c50:StringName::StringName((StringName*)&local_78, (StringName*)&local_88);
      local_68 = "There is no animation with name \'%s\'.";
      local_80 = 0;
      local_60 = 0x25;
      String::parse_latin1((StrRange*)&local_80);
      vformat<StringName>((CowData<char32_t>*)&local_68, (StrRange*)&local_80, (StringName*)&local_78);
      _err_print_error(&_LC46, "scene/2d/animated_sprite_2d.cpp", 0x1d4, "Condition \"frames.is_null()\" is true.", (CowData<char32_t>*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (StringName::configured == '\0') goto LAB_00105bb3;
      if (local_78 != 0) {
         StringName::unref();
         joined_r0x00105b8e:if (StringName::configured == '\0') goto LAB_00105bb3;
      }
   } else {
      if (*(long*)( this + 0x580 ) == 0) goto LAB_00105c50;
      LAB_00105a28:SpriteFrames::get_animation_names();
      if (local_88 == 0) {
         local_80 = 0;
      } else {
         __s = *(char**)( local_88 + 8 );
         local_80 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_88 + 0x10 ));
         } else {
            local_60 = strlen(__s);
            local_68 = __s;
            String::parse_latin1((StrRange*)&local_80);
         }
      }
      lVar3 = CowData<String>::find(local_70, (String*)&local_80, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<String>::_unref(local_70);
      if (lVar3 != -1) {
         iVar1 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
         if (iVar1 != 0) {
            this[0x590] = (AnimatedSprite2D)0x1;
            *(float*)( this + 0x5a8 ) = param_2;
            if (local_88 == *(long*)( this + 0x598 )) {
               iVar1 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
               iVar1 = iVar1 + -1;
               if (iVar1 < 0) {
                  iVar1 = 0;
               }
               uVar2 = ( uint )(*(float*)( this + 0x5a4 ) * *(float*)( this + 0x5a8 )) & 0x80000000;
               if (( uVar2 == 0 ) || ( !param_3 )) {
                  if (( !param_3 ) && ( ( ( uVar2 == 0 && ( *(int*)( this + 0x5a0 ) == iVar1 ) ) && ( _LC45 <= *(float*)( this + 0x5bc ) ) ) )) {
                     set_frame_and_progress(this, 0, 0.0);
                  }
               } else if (( *(int*)( this + 0x5a0 ) == 0 ) && ( *(float*)( this + 0x5bc ) <= 0.0 )) {
                  set_frame_and_progress(this, iVar1, _LC45);
               }
            } else {
               StringName::operator =((StringName*)( this + 0x598 ), (StringName*)&local_88);
               iVar1 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
               if (param_3) {
                  iVar1 = iVar1 + -1;
                  if (iVar1 < 0) {
                     iVar1 = 0;
                  }
                  set_frame_and_progress(this, iVar1, _LC45);
               } else {
                  set_frame_and_progress(this, 0, 0.0);
               }
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               ( **(code**)( *(long*)this + 0xd0 ) )(this, SceneStringNames::singleton + 0x108, 0, 0);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }
            }
            Node::set_process_internal(SUB81(this, 0));
            Object::notify_property_list_changed();
            CanvasItem::queue_redraw();
         }
         goto joined_r0x00105b8e;
      }
      StringName::StringName((StringName*)&local_78, (StringName*)&local_88);
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "There is no animation with name \'%s\'.");
      vformat<StringName>((CowData<char32_t>*)&local_68, (CowData<char32_t>*)&local_80, (StringName*)&local_78);
      _err_print_error(&_LC46, "scene/2d/animated_sprite_2d.cpp", 0x1d5, "Condition \"!frames->get_animation_names().has(name)\" is true.", (CowData<char32_t>*)&local_68, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (StringName::configured == '\0') goto LAB_00105bb3;
      if (local_78 != 0) {
         StringName::unref();
         goto joined_r0x00105b8e;
      }
   }
   if (local_88 != 0) {
      StringName::unref();
   }
   LAB_00105bb3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* AnimatedSprite2D::play_backwards(StringName const&) */void AnimatedSprite2D::play_backwards(AnimatedSprite2D *this, StringName *param_1) {
   play(this, param_1, _LC147, true);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimatedSprite2D::_notification(int) */void AnimatedSprite2D::_notification(AnimatedSprite2D *this, int param_1) {
   StringName *pSVar1;
   Object *pOVar2;
   undefined8 uVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   long lVar8;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   undefined8 uVar11;
   double dVar12;
   double dVar13;
   undefined1 auVar14[16];
   float fVar15;
   double dVar16;
   double local_a8;
   undefined8 local_98;
   CowData<char32_t> local_90[8];
   undefined8 local_88;
   uint local_80;
   undefined4 uStack_7c;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x19) {
      if (( *(StringName**)( this + 0x580 ) != (StringName*)0x0 ) && ( cVar5 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 )) ),cVar5 != '\0') {
         iVar9 = 0;
         local_a8 = (double)Node::get_process_delta_time();
         do {
            if (local_a8 == 0.0) break;
            dVar13 = (double)SpriteFrames::get_animation_speed(*(StringName**)( this + 0x580 ));
            auVar14._0_8_ = (double)*(float*)( this + 0x5a4 ) * dVar13 * (double)*(float*)( this + 0x5a8 ) * (double)*(float*)( this + 0x5b8 );
            dVar13 = ABS(auVar14._0_8_);
            if (auVar14._0_8_ == 0.0) break;
            iVar6 = SpriteFrames::get_frame_count(*(StringName**)( this + 0x580 ));
            auVar14._8_8_ = 0;
            iVar10 = iVar6 + -1;
            uVar7 = movmskpd(iVar6, auVar14);
            if (( uVar7 & 1 ) == 0) {
               fVar15 = *(float*)( this + 0x5bc );
               dVar16 = _LC37;
               if (_LC45 <= fVar15) {
                  if (*(int*)( this + 0x5a0 ) < iVar10) {
                     *(int*)( this + 0x5a0 ) = *(int*)( this + 0x5a0 ) + 1;
                  } else {
                     cVar5 = SpriteFrames::get_animation_loop(*(StringName**)( this + 0x580 ));
                     if (cVar5 == '\0') {
                        *(int*)( this + 0x5a0 ) = iVar10;
                        goto LAB_0010669d;
                     }
                     *(undefined4*)( this + 0x5a0 ) = 0;
                     StringName::StringName((StringName*)&local_80, "animation_looped", false);
                     Object::emit_signal<>((Object*)this, (StringName*)&local_80);
                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_7c, local_80) != 0 )) {
                        StringName::unref();
                     }
                  }
                  dVar12 = (double)_get_frame_duration(this);
                  dVar16 = _LC37;
                  *(undefined4*)( this + 0x5bc ) = 0;
                  *(float*)( this + 0x5b8 ) = (float)( dVar16 / dVar12 );
                  CanvasItem::queue_redraw();
                  local_58 = 0;
                  auStack_50 = (undefined1[16])0x0;
                  ( **(code**)( *(long*)this + 0xd0 ) )(this, SceneStringNames::singleton + 0x1c8, 0, 0);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }
                  fVar15 = *(float*)( this + 0x5bc );
               }
               dVar16 = ( dVar16 - (double)fVar15 ) / dVar13;
               if (local_a8 <= dVar16) {
                  dVar16 = local_a8;
               }
               dVar13 = dVar13 * dVar16 + (double)fVar15;
            } else {
               fVar15 = *(float*)( this + 0x5bc );
               if (fVar15 <= 0.0) {
                  if (*(int*)( this + 0x5a0 ) < 1) {
                     cVar5 = SpriteFrames::get_animation_loop(*(StringName**)( this + 0x580 ));
                     if (cVar5 == '\0') {
                        *(undefined4*)( this + 0x5a0 ) = 0;
                        LAB_0010669d:_stop_internal(this, false);
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           Object::emit_signal<>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x100 ));
                           return;
                        }
                        goto LAB_00106710;
                     }
                     *(int*)( this + 0x5a0 ) = iVar10;
                     StringName::StringName((StringName*)&local_80, "animation_looped", false);
                     Object::emit_signal<>((Object*)this, (StringName*)&local_80);
                     if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_7c, local_80) != 0 )) {
                        StringName::unref();
                     }
                  } else {
                     *(int*)( this + 0x5a0 ) = *(int*)( this + 0x5a0 ) + -1;
                  }
                  dVar16 = (double)_get_frame_duration(this);
                  *(undefined4*)( this + 0x5bc ) = 0x3f800000;
                  *(float*)( this + 0x5b8 ) = (float)( _LC37 / dVar16 );
                  CanvasItem::queue_redraw();
                  Object::emit_signal<>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x1c8 ));
                  fVar15 = *(float*)( this + 0x5bc );
               }
               dVar16 = (double)fVar15 / dVar13;
               if (local_a8 <= dVar16) {
                  dVar16 = local_a8;
               }
               dVar13 = (double)fVar15 - dVar13 * dVar16;
            }
            local_a8 = local_a8 - dVar16;
            iVar9 = iVar9 + 1;
            *(float*)( this + 0x5bc ) = (float)dVar13;
         } while ( iVar9 <= iVar6 );
      }
   } else if (param_1 == 0x1e) {
      if (*(StringName**)( this + 0x580 ) != (StringName*)0x0) {
         cVar5 = SpriteFrames::has_animation(*(StringName**)( this + 0x580 ));
         if (cVar5 != '\0') {
            lVar8 = *(long*)( this + 0x580 );
            local_80 = 0;
            iVar9 = *(int*)( this + 0x5a0 );
            cVar5 = HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( lVar8 + 0x240 ), (StringName*)( this + 0x598 ), &local_80);
            if (( cVar5 == '\0' ) || ( lVar8 = *(long*)( *(long*)( lVar8 + 0x248 ) + (ulong)local_80 * 8 ) ),lVar8 == 0) {
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "\' doesn\'t exist.");
               lVar8 = *(long*)( this + 0x598 );
               if (lVar8 == 0) {
                  local_98 = 0;
               } else {
                  local_98 = 0;
                  if (*(char**)( lVar8 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar8 + 0x10 ));
                  } else {
                     String::parse_latin1((String*)&local_98, *(char**)( lVar8 + 8 ));
                  }
               }
               operator+((char *)
               local_90,(String*)"Animation \'";
               String::operator +((String*)&local_80, (String*)local_90);
               _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (String*)&local_80, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref(local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            } else {
               if (iVar9 < 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
                     return;
                  }
                  goto LAB_00106710;
               }
               lVar8 = *(long*)( lVar8 + 0x30 );
               if (( ( ( lVar8 != 0 ) && ( (long)iVar9 < *(long*)( lVar8 + -8 ) ) ) && ( pOVar2 = *(Object**)( lVar8 + (long)iVar9 * 0x10 ) ),pOVar2 != (Object*)0x0 )) {
                  uVar3 = *(undefined8*)( this + 0x428 );
                  uVar11 = ( **(code**)( *(long*)pOVar2 + 0x1d8 ) )(pOVar2);
                  local_78 = *(undefined8*)( this + 0x5b0 );
                  fVar15 = (float)( (ulong)uVar11 >> 0x20 );
                  if (this[0x5ac] != (AnimatedSprite2D)0x0) {
                     local_78 = CONCAT44((float)( (ulong)local_78 >> 0x20 ) - _LC81._4_4_ * fVar15, (float)local_78 - (float)_LC81 * (float)uVar11);
                  }
                  if (( *(long*)( this + 600 ) != 0 ) && ( cVar5 = Viewport::is_snap_2d_transforms_to_pixel_enabled() ),cVar5 != '\0') {
                     local_58 = CONCAT44((float)( (ulong)local_78 >> 0x20 ) + _LC81._4_4_, (float)local_78 + (float)_LC81);
                     local_78 = Vector2::floor();
                  }
                  local_70 = uVar11;
                  if (this[0x5c0] != (AnimatedSprite2D)0x0) {
                     local_70 = CONCAT44(fVar15, (uint)(float)uVar11 ^ __LC150);
                  }
                  if (this[0x5c1] != (AnimatedSprite2D)0x0) {
                     local_70 = CONCAT44(local_70._4_4_ ^ __LC150, (undefined4)local_70);
                  }
                  pcVar4 = *(code**)( *(long*)pOVar2 + 0x200 );
                  local_58 = CONCAT44(_LC45, _LC45);
                  auStack_50._4_4_ = _LC45;
                  auStack_50._0_4_ = _LC45;
                  local_60 = ( **(code**)( *(long*)pOVar2 + 0x1d8 ) )(pOVar2);
                  local_68 = 0;
                  ( *pcVar4 )(pOVar2, uVar3, &local_78, &local_68, &local_58, 0, 1);
                  cVar5 = RefCounted::unreference();
                  if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar2) ),cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }
               }
            }
         }
      }
   } else if (( ( param_1 == 0xd ) && ( lVar8 = Engine::get_singleton() * (char*)( lVar8 + 0xc0 ) == '\0' ) ) && ( pSVar1 = *(StringName**)( this + 0x580 ) ),pSVar1 != (StringName*)0x0) {
      StringName::StringName((StringName*)&local_80, (String*)( this + 0x588 ), false);
      cVar5 = SpriteFrames::has_animation(pSVar1);
      if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_7c, local_80) != 0 )) {
         StringName::unref();
      }
      if (cVar5 != '\0') {
         StringName::StringName((StringName*)&local_80, (String*)( this + 0x588 ), false);
         play(this, (StringName*)&local_80, _LC45, false);
         if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_7c, local_80) != 0 )) {
            StringName::unref();
         }
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00106710:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* CanvasItem::_edit_get_minimum_size() const */undefined8 CanvasItem::_edit_get_minimum_size(void) {
   return 0xbf800000bf800000;
}/* AnimatedSprite2D::is_class_ptr(void*) const */uint AnimatedSprite2D::is_class_ptr(AnimatedSprite2D *this, void *param_1) {
   return (uint)CONCAT71(0x118a, (undefined4*)param_1 == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118a, (undefined4*)param_1 == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118a, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* AnimatedSprite2D::_property_can_revertv(StringName const&) const */undefined8 AnimatedSprite2D::_property_can_revertv(StringName *param_1) {
   return 0;
}/* AnimatedSprite2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimatedSprite2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* CallableCustomMethodPointer<AnimatedSprite2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimatedSprite2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimatedSprite2D,void> *this) {
   return;
}/* MethodBindT<int, float>::_gen_argument_type(int) const */int MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }
   return iVar1;
}/* MethodBindT<int, float>::get_argument_meta(int) const */char MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 1 ) * '\t';
   }
   return cVar1;
}/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
   return 5;
}/* MethodBindTRC<Vector2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this, int param_1) {
   return -(param_1 == 0) & 5;
}/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<StringName const&, float, bool>::get_argument_meta(int) const */char MethodBindT<StringName_const&,float,bool>::get_argument_meta(MethodBindT<StringName_const&,float,bool> *this, int param_1) {
   return ( param_1 == 1 ) * '\t';
}/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<StringName>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1) {
   return 0x15;
}/* MethodBindTRC<StringName>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Ref<SpriteFrames>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<SpriteFrames>>::_gen_argument_type(int param_1) {
   return 0x18;
}/* MethodBindTRC<Ref<SpriteFrames>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<SpriteFrames>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Ref<SpriteFrames> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<SpriteFrames>const&>::_gen_argument_type(MethodBindT<Ref<SpriteFrames>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}/* MethodBindT<Ref<SpriteFrames> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<SpriteFrames>const&>::get_argument_meta(int param_1) {
   return 0;
}/* CallableCustomMethodPointer<AnimatedSprite2D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimatedSprite2D,void>::get_argument_count(CallableCustomMethodPointer<AnimatedSprite2D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}/* CallableCustomMethodPointer<AnimatedSprite2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimatedSprite2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimatedSprite2D,void> *this) {
   operator_delete(this, 0x48);
   return;
}/* MethodBindT<Ref<SpriteFrames> const&>::~MethodBindT() */void MethodBindT<Ref<SpriteFrames>const&>::~MethodBindT(MethodBindT<Ref<SpriteFrames>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118460;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Ref<SpriteFrames> const&>::~MethodBindT() */void MethodBindT<Ref<SpriteFrames>const&>::~MethodBindT(MethodBindT<Ref<SpriteFrames>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118460;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC() */void MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC(MethodBindTRC<Ref<SpriteFrames>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001184c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC() */void MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC(MethodBindTRC<Ref<SpriteFrames>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001184c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118520;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118520;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118580;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118580;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001185e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001185e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118640;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118640;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, float, bool>::~MethodBindT() */void MethodBindT<StringName_const&,float,bool>::~MethodBindT(MethodBindT<StringName_const&,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118700;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, float, bool>::~MethodBindT() */void MethodBindT<StringName_const&,float,bool>::~MethodBindT(MethodBindT<StringName_const&,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118700;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118760;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118760;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118820;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118820;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118880;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118880;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001187c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001187c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001186a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001186a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001188e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001188e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118940;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118940;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118a60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118a60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001189a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001189a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118a00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00118a00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* AnimatedSprite2D::_getv(StringName const&, Variant&) const */undefined8 AnimatedSprite2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }
   return 0;
}/* MethodBindT<StringName const&, float, bool>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,float,bool>::_gen_argument_type(MethodBindT<StringName_const&,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( (uint)param_1 < 3 ) && ( cVar1 = param_1 != 0 )) {
      cVar1 = ( param_1 == 1 ) * '\x02' + '\x01';
   }
   return cVar1;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::adjust_heap(long param_1, long param_2, long param_3, Element *param_4, Element **param_5) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   uint uVar4;
   byte bVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   Element **ppEVar9;
   long lVar10;
   Element *pEVar11;
   long lVar12;
   long lVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar12 = param_2 * 2 + 2;
   lVar16 = param_2;
   if (lVar12 < param_3) {
      do {
         lVar10 = lVar12 + -1;
         ppEVar9 = param_5 + lVar10 + param_1;
         pEVar11 = *ppEVar9;
         pEVar3 = param_5[param_1 + lVar12];
         lVar13 = *(long*)pEVar11;
         lVar6 = *(long*)pEVar3;
         if (lVar6 == 0) {
            if (lVar13 != 0) {
               pbVar14 = *(byte**)( lVar13 + 8 );
               uVar8 = 0;
               pbVar15 = &_LC1;
               LAB_00107234:if (pbVar14 == (byte*)0x0) {
                  lVar6 = 0;
                  uVar4 = **(uint**)( lVar13 + 0x10 );
                  if (uVar4 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001071e0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001071e0;
                        if (uVar4 < uVar8) break;
                        uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                        uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar6 + 1];
                        lVar6 = lVar6 + 1;
                     } while ( uVar8 != 0 || uVar4 != 0 );
                  }
               } else {
                  uVar4 = (uint)(char)*pbVar14;
                  bVar5 = (byte)uVar8 | *pbVar14;
                  LAB_00107286:if (bVar5 != 0) {
                     lVar13 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001071e0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_001071e0;
                        if (uVar4 < uVar8) break;
                        pbVar1 = pbVar14 + lVar13;
                        uVar4 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar15 + lVar13;
                        uVar8 = (uint)(char)*pbVar2;
                        lVar13 = lVar13 + 1;
                     } while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }
               }
            }
         } else {
            pbVar15 = *(byte**)( lVar6 + 8 );
            if (lVar13 == 0) {
               if (pbVar15 != (byte*)0x0) {
                  bVar5 = *pbVar15;
                  uVar8 = (uint)(char)bVar5;
                  pbVar14 = &_LC1;
                  uVar4 = 0;
                  goto LAB_00107286;
               }
               uVar8 = 0;
               pbVar14 = &_LC1;
            } else {
               pbVar14 = *(byte**)( lVar13 + 8 );
               if (pbVar15 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar15;
                  goto LAB_00107234;
               }
               if (pbVar14 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar13 + 0x10 );
                  uVar4 = **(uint**)( lVar6 + 0x10 );
                  if (uVar8 != 0 || uVar4 != 0) {
                     do {
                        if (uVar4 == 0) goto LAB_001071e0;
                        if (uVar8 == 0) break;
                        if (uVar4 < uVar8) goto LAB_001071e0;
                        if (uVar8 < uVar4) break;
                        uVar4 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     } while ( uVar4 != 0 || uVar8 != 0 );
                  }
                  goto LAB_00107208;
               }
               uVar8 = (uint)(char)*pbVar14;
            }
            lVar13 = 0;
            uVar4 = **(uint**)( lVar6 + 0x10 );
            if (uVar4 != 0 || uVar8 != 0) {
               do {
                  if (uVar4 == 0) goto LAB_001071e0;
                  if (uVar8 == 0) break;
                  if (uVar4 < uVar8) goto LAB_001071e0;
                  if (uVar8 < uVar4) break;
                  uVar4 = ( *(uint**)( lVar6 + 0x10 ) )[lVar13 + 1];
                  uVar8 = (uint)(char)pbVar14[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               } while ( uVar4 != 0 || uVar8 != 0 );
            }
         }
         LAB_00107208:ppEVar9 = param_5 + param_1 + lVar12;
         lVar10 = lVar12;
         pEVar11 = pEVar3;
         lVar12 = lVar12 + 1;
         LAB_001071e0:lVar12 = lVar12 * 2;
         param_5[param_1 + lVar16] = pEVar11;
         lVar16 = lVar10;
      } while ( lVar12 < param_3 );
      if (lVar12 == param_3) goto LAB_0010760d;
   } else {
      ppEVar9 = param_5 + param_2 + param_1;
      if (lVar12 != param_3) goto LAB_0010740a;
      LAB_0010760d:lVar10 = lVar12 + -1;
      *ppEVar9 = param_5[param_1 + lVar10];
      ppEVar9 = param_5 + param_1 + lVar10;
   }
   lVar12 = ( lVar10 + -1 ) - ( lVar10 + -1 >> 0x3f );
   if (param_2 < lVar10) {
      lVar16 = *(long*)param_4;
      while (true) {
         lVar13 = lVar12 >> 1;
         pEVar11 = param_5[param_1 + lVar13];
         lVar12 = *(long*)pEVar11;
         if (lVar12 == 0) break;
         pbVar15 = *(byte**)( lVar12 + 8 );
         if (lVar16 == 0) {
            uVar8 = 0;
            pbVar14 = &_LC1;
            if (pbVar15 != (byte*)0x0) {
               bVar5 = *pbVar15;
               uVar8 = (uint)(char)bVar5;
               uVar4 = 0;
               pbVar14 = &_LC1;
               goto LAB_0010748a;
            }
            LAB_001074ea:uVar4 = **(uint**)( lVar12 + 0x10 );
            if (uVar4 == 0 && uVar8 == 0) goto LAB_00107400;
            lVar6 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_00107400;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_00107400;
               uVar4 = ( *(uint**)( lVar12 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar14[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_00107400;
            };
         } else {
            pbVar14 = *(byte**)( lVar16 + 8 );
            if (pbVar15 == (byte*)0x0) {
               if (pbVar14 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar14;
                  goto LAB_001074ea;
               }
               uVar8 = **(uint**)( lVar16 + 0x10 );
               uVar4 = **(uint**)( lVar12 + 0x10 );
               if (uVar8 == 0 && uVar4 == 0) goto LAB_00107400;
               lVar6 = 4;
               while (uVar4 != 0) {
                  if (uVar8 == 0) goto LAB_00107400;
                  if (uVar4 < uVar8) break;
                  if (uVar8 < uVar4) goto LAB_00107400;
                  uVar4 = *(uint*)( (long)*(uint**)( lVar12 + 0x10 ) + lVar6 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar16 + 0x10 ) + lVar6 );
                  lVar6 = lVar6 + 4;
                  if (uVar4 == 0 && uVar8 == 0) {
                     param_5[param_1 + lVar10] = param_4;
                     return;
                  }
               };
            } else {
               uVar4 = (uint)(char)*pbVar15;
               uVar8 = uVar4;
               if (pbVar14 == (byte*)0x0) goto LAB_00107435;
               LAB_00107484:uVar4 = (uint)(char)*pbVar14;
               bVar5 = (byte)uVar8 | *pbVar14;
               LAB_0010748a:if (bVar5 == 0) goto LAB_00107400;
               lVar12 = 1;
               while (uVar8 != 0) {
                  if (uVar4 == 0) goto LAB_00107400;
                  if (uVar8 < uVar4) break;
                  if (uVar4 < uVar8) goto LAB_00107400;
                  pbVar1 = pbVar14 + lVar12;
                  uVar4 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar15 + lVar12;
                  uVar8 = (uint)(char)*pbVar2;
                  lVar12 = lVar12 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00107400;
               };
            }
         }
         LAB_001073d0:param_5[lVar10 + param_1] = pEVar11;
         lVar12 = ( lVar13 + -1 ) - ( lVar13 + -1 >> 0x3f );
         lVar10 = lVar13;
         if (lVar13 <= param_2) {
            param_5[param_1 + lVar13] = param_4;
            return;
         }
      };
      if (lVar16 != 0) {
         pbVar14 = *(byte**)( lVar16 + 8 );
         uVar4 = 0;
         uVar8 = 0;
         pbVar15 = &_LC1;
         if (pbVar14 != (byte*)0x0) goto LAB_00107484;
         LAB_00107435:uVar8 = **(uint**)( lVar16 + 0x10 );
         if (uVar8 != 0 || uVar4 != 0) {
            lVar12 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_00107400;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_00107400;
               uVar4 = (uint)(char)pbVar15[lVar12 + 1];
               uVar8 = ( *(uint**)( lVar16 + 0x10 ) )[lVar12 + 1];
               lVar12 = lVar12 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_00107400;
            };
            goto LAB_001073d0;
         }
      }
      LAB_00107400:ppEVar9 = param_5 + lVar10 + param_1;
   }
   LAB_0010740a:*ppEVar9 = param_4;
   return;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert(long param_1, Element *param_2, Element **param_3) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   Element *pEVar10;
   byte *pbVar11;
   lVar3 = *(long*)param_2;
   LAB_001076d0:pEVar10 = param_3[param_1 + -1];
   lVar5 = *(long*)pEVar10;
   if (lVar3 != 0) {
      pbVar9 = *(byte**)( lVar3 + 8 );
      do {
         if (lVar5 == 0) {
            if (pbVar9 != (byte*)0x0) goto code_r0x00107781;
            uVar7 = 0;
            pbVar11 = &_LC1;
            LAB_0010770c:uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar8 == 0 && uVar7 == 0) goto LAB_0010789b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010789b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010789b;
               uVar8 = ( *(uint**)( lVar3 + 0x10 ) )[lVar5 + 1];
               uVar7 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010789b;
            };
         } else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar9 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar9;
               goto LAB_001077ac;
            }
            if (pbVar11 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar11;
               goto LAB_0010770c;
            }
            uVar7 = **(uint**)( lVar5 + 0x10 );
            uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010789b;
            lVar6 = 4;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010789b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010789b;
               uVar8 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar6 );
               uVar7 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010789b;
            };
         }
         if (param_1 == 1) goto LAB_00107870;
         param_3[param_1] = pEVar10;
         pEVar10 = param_3[param_1 + -2];
         lVar5 = *(long*)pEVar10;
         param_1 = param_1 + -1;
      } while ( true );
   }
   if (lVar5 != 0) {
      pbVar11 = *(byte**)( lVar5 + 8 );
      uVar7 = 0;
      pbVar9 = &_LC1;
      LAB_001077ac:if (pbVar11 != (byte*)0x0) {
         uVar8 = (uint)(char)*pbVar11;
         bVar4 = (byte)uVar7 | *pbVar11;
         goto LAB_0010781f;
      }
      uVar8 = **(uint**)( lVar5 + 0x10 );
      if (uVar8 != 0 || uVar7 != 0) {
         lVar6 = 0;
         while (uVar7 != 0) {
            if (uVar8 == 0) goto LAB_0010789b;
            if (uVar7 < uVar8) break;
            if (uVar8 < uVar7) goto LAB_0010789b;
            uVar7 = (uint)(char)pbVar9[lVar6 + 1];
            uVar8 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010789b;
         };
         goto LAB_00107800;
      }
   }
   goto LAB_0010789b;
   code_r0x00107781:bVar4 = *pbVar9;
   uVar7 = (uint)(char)bVar4;
   pbVar11 = &_LC1;
   uVar8 = 0;
   LAB_0010781f:if (bVar4 == 0) goto LAB_0010789b;
   lVar5 = 1;
   while (uVar7 != 0) {
      if (uVar8 == 0) goto LAB_0010789b;
      if (uVar7 < uVar8) break;
      if (uVar8 < uVar7) goto LAB_0010789b;
      pbVar1 = pbVar9 + lVar5;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar11 + lVar5;
      uVar8 = (uint)(char)*pbVar2;
      lVar5 = lVar5 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010789b;
   };
   LAB_00107800:if (param_1 == 1) {
      LAB_00107870:_err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      param_1 = 1;
      LAB_0010789b:param_3[param_1] = param_2;
      return;
   }
   param_3[param_1] = pEVar10;
   param_1 = param_1 + -1;
   goto LAB_001076d0;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(long param_1, long param_2, Element **param_3) {
   Element **__src;
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   __src = param_3 + param_1;
   pEVar3 = param_3[param_2];
   lVar6 = *(long*)pEVar3;
   lVar5 = *(long*)*__src;
   if (lVar6 == 0) {
      if (lVar5 == 0) goto LAB_00107a70;
      pbVar10 = *(byte**)( lVar5 + 8 );
      uVar8 = 0;
      pbVar11 = &_LC1;
      LAB_00107a24:if (pbVar10 == (byte*)0x0) {
         uVar9 = **(uint**)( lVar5 + 0x10 );
         if (uVar8 != 0 || uVar9 != 0) {
            lVar6 = 0;
            do {
               if (uVar8 == 0) goto LAB_001079c0;
               if (uVar9 == 0) break;
               if (uVar8 < uVar9) goto LAB_001079c0;
               if (uVar9 < uVar8) break;
               uVar8 = (uint)(char)pbVar11[lVar6 + 1];
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               lVar6 = lVar6 + 1;
            } while ( uVar8 != 0 || uVar9 != 0 );
         }
         goto LAB_00107a70;
      }
      uVar9 = (uint)(char)*pbVar10;
      bVar4 = (byte)uVar8 | *pbVar10;
      LAB_00107a97:if (bVar4 != 0) {
         lVar6 = 1;
         do {
            if (uVar8 == 0) goto LAB_001079c0;
            if (uVar9 == 0) break;
            if (uVar8 < uVar9) goto LAB_001079c0;
            if (uVar9 < uVar8) break;
            pbVar2 = pbVar11 + lVar6;
            uVar8 = (uint)(char)*pbVar2;
            pbVar1 = pbVar10 + lVar6;
            uVar9 = (uint)(char)*pbVar1;
            lVar6 = lVar6 + 1;
         } while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }
   } else {
      pbVar11 = *(byte**)( lVar6 + 8 );
      if (lVar5 == 0) {
         if (pbVar11 != (byte*)0x0) {
            bVar4 = *pbVar11;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC1;
            uVar9 = 0;
            goto LAB_00107a97;
         }
         uVar8 = 0;
         pbVar10 = &_LC1;
      } else {
         pbVar10 = *(byte**)( lVar5 + 8 );
         if (pbVar11 != (byte*)0x0) {
            uVar8 = (uint)(char)*pbVar11;
            goto LAB_00107a24;
         }
         if (pbVar10 == (byte*)0x0) {
            uVar8 = **(uint**)( lVar5 + 0x10 );
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar8 != 0 || uVar9 != 0) {
               lVar7 = 4;
               do {
                  if (uVar9 == 0) goto LAB_001079c0;
                  if (uVar8 == 0) break;
                  if (uVar9 < uVar8) goto LAB_001079c0;
                  if (uVar8 < uVar9) break;
                  uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                  lVar7 = lVar7 + 4;
               } while ( uVar9 != 0 || uVar8 != 0 );
            }
            goto LAB_00107a70;
         }
         uVar8 = (uint)(char)*pbVar10;
      }
      uVar9 = **(uint**)( lVar6 + 0x10 );
      if (uVar8 != 0 || uVar9 != 0) {
         lVar5 = 0;
         do {
            if (uVar9 == 0) {
               LAB_001079c0:if (param_1 < param_2) {
                  memmove(param_3 + param_1 + 1, __src, ( param_2 - param_1 ) * 8);
               }
               *__src = pEVar3;
               return;
            }
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_001079c0;
            if (uVar8 < uVar9) break;
            uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
            uVar8 = (uint)(char)pbVar10[lVar5 + 1];
            lVar5 = lVar5 + 1;
         } while ( uVar9 != 0 || uVar8 != 0 );
      }
   }
   LAB_00107a70:unguarded_linear_insert(param_2, pEVar3, param_3);
   return;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */Element **SortArray<List<StringName,DefaultAllocator>::Element*,List < StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>byte *pbVar2byte bVar3uint uVar4uint uVar5uint uVar6uint *puVar7long lVar8long lVar9uint *puVar10byte bVar11uint uVar12long lVar13long lVar14byte *pbVar15byte *pbVar16byte *pbVar17lVar8 = *(long*)*param_1;lVar9 = *(long*)*param_3;lVar13 = *(long*)*param_2;if (lVar8 == 0) {
   pbVar15 = &_LC1;
   pbVar16 = &_LC1;
   if (lVar13 == 0) {
      LAB_00108480:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         LAB_00107d4e:uVar5 = (uint)(char)*pbVar16;
         uVar4 = uVar5;
         goto LAB_00107d54;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC1;
      if (*pbVar16 == 0) goto LAB_00108049;
      LAB_00107ea2:lVar8 = 1;
      do {
         if (uVar5 == 0) {
            return param_1;
         }
         if (uVar6 == 0) break;
         if (uVar5 < uVar6) {
            return param_1;
         }
         if (uVar6 < uVar5) break;
         pbVar2 = pbVar16 + lVar8;
         uVar5 = (uint)(char)*pbVar2;
         pbVar1 = pbVar17 + lVar8;
         uVar6 = (uint)(char)*pbVar1;
         lVar8 = lVar8 + 1;
      } while ( *pbVar2 != 0 || *pbVar1 != 0 );
   } else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      uVar4 = 0;
      pbVar16 = &_LC1;
      LAB_00107cd2:if (pbVar15 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar15;
         bVar11 = *pbVar15 | (byte)uVar4;
         LAB_00107dc0:if (bVar11 != 0) {
            lVar14 = 1;
            do {
               if (uVar4 == 0) goto joined_r0x00107e08;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00107e08;
               if (uVar12 < uVar4) break;
               pbVar17 = pbVar16 + lVar14;
               uVar4 = (uint)(char)*pbVar17;
               pbVar2 = pbVar15 + lVar14;
               uVar12 = (uint)(char)*pbVar2;
               lVar14 = lVar14 + 1;
            } while ( *pbVar17 != 0 || *pbVar2 != 0 );
            goto LAB_00107d38;
         }
         goto LAB_00108480;
      }
      uVar12 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar4 == 0) goto joined_r0x00107e08;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00107e08;
            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar14 + 1];
            uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            lVar14 = lVar14 + 1;
         } while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00107d38;
      }
      if (lVar9 == 0) goto LAB_001080a1;
      pbVar17 = *(byte**)( lVar9 + 8 );
      uVar5 = 0;
      LAB_00107d54:if (pbVar17 != (byte*)0x0) {
         uVar6 = (uint)(char)*pbVar17;
         bVar11 = (byte)uVar4 | *pbVar17;
         goto LAB_00107e99;
      }
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00108386;
      lVar8 = 0;
      do {
         if (uVar5 == 0) {
            return param_1;
         }
         if (uVar4 == 0) break;
         if (uVar5 < uVar4) {
            return param_1;
         }
         if (uVar4 < uVar5) break;
         uVar5 = (uint)(char)pbVar16[lVar8 + 1];
         uVar4 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
      } while ( uVar5 != 0 || uVar4 != 0 );
   }
   LAB_00108030:if (pbVar15 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         LAB_0010838f:uVar4 = *puVar10;
         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
         }
         lVar8 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }
            if (uVar4 == 0) {
               return param_2;
            }
            if (uVar12 < uVar4) {
               return param_3;
            }
            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
            uVar4 = *(uint*)( (long)puVar10 + lVar8 );
            lVar8 = lVar8 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }
         };
         return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
      LAB_00108216:uVar4 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_3;
            }
            if (uVar12 == 0) {
               return param_2;
            }
            if (uVar4 < uVar12) {
               return param_3;
            }
            if (uVar12 < uVar4) {
               return param_2;
            }
            uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         } while ( uVar4 != 0 || uVar12 != 0 );
      }
      return param_2;
   }
   if (pbVar17 == (byte*)0x0) {
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar6 = *puVar10;
      LAB_00108278:uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
         return param_2;
      }
      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }
         if (uVar6 == 0) {
            return param_2;
         }
         if (uVar4 < uVar6) {
            return param_3;
         }
         if (uVar6 < uVar4) break;
         uVar4 = (uint)(char)pbVar15[lVar8 + 1];
         uVar6 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }
      };
      return param_2;
   }
   uVar12 = (uint)(char)*pbVar17;
   uVar5 = uVar12;
} else {
   pbVar16 = *(byte**)( lVar8 + 8 );
   if (lVar13 == 0) {
      if (pbVar16 != (byte*)0x0) {
         bVar11 = *pbVar16;
         uVar4 = (uint)(char)bVar11;
         uVar12 = 0;
         pbVar15 = &_LC1;
         goto LAB_00107dc0;
      }
      uVar4 = 0;
      pbVar15 = &_LC1;
      LAB_00107bb2:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar12 == 0) goto joined_r0x00107e08;
            if (uVar4 == 0) break;
            if (uVar12 < uVar4) goto joined_r0x00107e08;
            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
            uVar4 = (uint)(char)pbVar15[lVar14 + 1];
            lVar14 = lVar14 + 1;
         } while ( uVar12 != 0 || uVar4 != 0 );
      }
      LAB_00107d38:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         if (pbVar16 != (byte*)0x0) goto LAB_00107d4e;
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar4 = *puVar7;
         LAB_00108138:if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            uVar6 = uVar4 | uVar12;
            goto LAB_001083f3;
         }
         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar10;
         uVar6 = uVar12 | uVar4;
         if (uVar6 != 0) {
            lVar8 = 4;
            do {
               if (uVar4 == 0) {
                  return param_1;
               }
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) {
                  return param_1;
               }
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar8 );
               uVar12 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
            } while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00108030;
         }
         LAB_00108386:if (pbVar15 != (byte*)0x0) goto LAB_00108278;
         goto LAB_0010838f;
      }
      if (pbVar16 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar8 + 0x10 );
         goto LAB_00108451;
      }
      LAB_001080a1:bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC1;
      LAB_00107e99:uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00107ea2;
   } else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      if (pbVar16 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar16;
         goto LAB_00107cd2;
      }
      if (pbVar15 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar15;
         goto LAB_00107bb2;
      }
      puVar7 = *(uint**)( lVar8 + 0x10 );
      uVar12 = **(uint**)( lVar13 + 0x10 );
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
         lVar14 = 4;
         do {
            if (uVar4 == 0) {
               LAB_00107fa8:pbVar16 = (byte*)0x0;
               goto joined_r0x00107e08;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto LAB_00107fa8;
            if (uVar12 < uVar4) break;
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            lVar14 = lVar14 + 4;
         } while ( uVar4 != 0 || uVar12 != 0 );
         pbVar16 = (byte*)0x0;
         goto LAB_00107d38;
      }
      if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar4 = 0;
         goto LAB_00108138;
      }
      LAB_00108451:uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC1;
      uVar6 = uVar4;
      LAB_001083f3:if (uVar6 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
               return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = puVar7[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         } while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00108030;
      }
   }
   uVar5 = uVar12;
   if (pbVar15 == (byte*)0x0) goto LAB_00108216;
}LAB_00108049:bVar11 = *pbVar15;if (bVar11 == 0 && (char)uVar5 == '\0') {
   return param_2;
}lVar8 = 1;while (true) {
   uVar4 = (uint)(char)bVar11;
   if (uVar4 == 0) {
      return param_3;
   }
   if (uVar12 == 0) {
      return param_2;
   }
   if (uVar4 < uVar12) {
      return param_3;
   }
   if (uVar12 < uVar4) break;
   bVar11 = pbVar15[lVar8];
   pbVar16 = pbVar17 + lVar8;
   uVar12 = (uint)(char)*pbVar16;
   lVar8 = lVar8 + 1;
   if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
   }
};return param_2;joined_r0x00107e08:if (lVar9 == 0) {
   uVar4 = 0;
   uVar12 = 0;
   bVar11 = 0;
   pbVar17 = &_LC1;
   if (pbVar15 != (byte*)0x0) goto LAB_00107ef7;
   LAB_00107e24:uVar6 = **(uint**)( lVar13 + 0x10 );
   uVar4 = uVar6 | uVar12;
   if (uVar4 != 0) {
      lVar14 = 0;
      do {
         if (uVar6 == 0) {
            return param_2;
         }
         if (uVar12 == 0) break;
         if (uVar6 < uVar12) {
            return param_2;
         }
         if (uVar12 < uVar6) break;
         uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
         uVar12 = (uint)(char)pbVar17[lVar14 + 1];
         lVar14 = lVar14 + 1;
      } while ( uVar6 != 0 || uVar12 != 0 );
      goto LAB_00107fc0;
   }
   LAB_0010848e:bVar11 = (byte)uVar12;
   if (pbVar16 == (byte*)0x0) goto LAB_001081ae;
} else {
   pbVar17 = *(byte**)( lVar9 + 8 );
   if (pbVar15 == (byte*)0x0) {
      if (pbVar17 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar17;
         goto LAB_00107e24;
      }
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar7;
      uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00108329;
      lVar14 = 4;
      do {
         if (uVar6 == 0) {
            return param_2;
         }
         if (uVar4 == 0) break;
         if (uVar6 < uVar4) {
            return param_2;
         }
         if (uVar4 < uVar6) break;
         uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
         uVar4 = *(uint*)( (long)puVar7 + lVar14 );
         lVar14 = lVar14 + 4;
      } while ( uVar6 != 0 || uVar4 != 0 );
   } else {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar6 = (uint)(char)*pbVar15;
         uVar4 = *puVar7;
         uVar12 = uVar4 | uVar6;
         if (uVar12 != 0) {
            lVar13 = 0;
            do {
               if (uVar6 == 0) {
                  return param_2;
               }
               if (uVar4 == 0) break;
               if (uVar6 < uVar4) {
                  return param_2;
               }
               if (uVar4 < uVar6) break;
               uVar6 = (uint)(char)pbVar15[lVar13 + 1];
               uVar4 = puVar7[lVar13 + 1];
               lVar13 = lVar13 + 1;
            } while ( uVar6 != 0 || uVar4 != 0 );
            goto LAB_00107fc0;
         }
         LAB_00108329:if (pbVar16 == (byte*)0x0) goto LAB_0010832e;
         goto LAB_001082d6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
      LAB_00107ef7:bVar3 = *pbVar15;
      uVar12 = ( uint )(bVar11 | bVar3);
      if (( bVar11 | bVar3 ) == 0) goto LAB_0010848e;
      lVar13 = 1;
      do {
         uVar12 = (uint)(char)bVar3;
         if (uVar12 == 0) {
            return param_2;
         }
         if (uVar4 == 0) break;
         if (uVar12 < uVar4) {
            return param_2;
         }
         if (uVar4 < uVar12) break;
         bVar3 = pbVar15[lVar13];
         pbVar2 = pbVar17 + lVar13;
         uVar4 = (uint)(char)*pbVar2;
         lVar13 = lVar13 + 1;
      } while ( bVar3 != 0 || *pbVar2 != 0 );
   }
   LAB_00107fc0:if (pbVar16 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         LAB_0010832e:uVar4 = *puVar7;
         uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }
         lVar9 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }
            if (uVar4 == 0) {
               return param_1;
            }
            if (uVar12 < uVar4) {
               return param_3;
            }
            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
            uVar4 = *(uint*)( (long)puVar7 + lVar9 );
            lVar9 = lVar9 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }
         };
         return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
      LAB_001081ae:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }
      lVar9 = 0;
      while (true) {
         if (uVar12 == 0) {
            return param_3;
         }
         if (uVar4 == 0) {
            return param_1;
         }
         if (uVar12 < uVar4) {
            return param_3;
         }
         if (uVar4 < uVar12) break;
         uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
         uVar4 = (uint)(char)pbVar17[lVar9 + 1];
         lVar9 = lVar9 + 1;
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }
      };
      return param_1;
   }
   if (pbVar17 == (byte*)0x0) {
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar12 = *puVar7;
      LAB_001082d6:uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }
      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }
         if (uVar12 == 0) {
            return param_1;
         }
         if (uVar4 < uVar12) {
            return param_3;
         }
         if (uVar12 < uVar4) break;
         uVar4 = (uint)(char)pbVar16[lVar8 + 1];
         uVar12 = puVar7[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }
      };
      return param_1;
   }
   bVar11 = *pbVar17;
   uVar4 = (uint)(char)bVar11;
}bVar3 = *pbVar16;if (bVar3 == 0 && bVar11 == 0) {
   return param_1;
}lVar8 = 1;while (true) {
   uVar12 = (uint)(char)bVar3;
   if (uVar12 == 0) {
      return param_3;
   }
   if (uVar4 == 0) {
      return param_1;
   }
   if (uVar12 < uVar4) {
      return param_3;
   }
   if (uVar4 < uVar12) break;
   bVar3 = pbVar16[lVar8];
   pbVar15 = pbVar17 + lVar8;
   uVar4 = (uint)(char)*pbVar15;
   lVar8 = lVar8 + 1;
   if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
   }
};return param_1;}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(long param_1, long param_2, Element *param_3, Element **param_4) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   Element **ppEVar4;
   uint uVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   byte *pbVar12;
   byte *pbVar13;
   long lVar14;
   lVar14 = *(long*)param_3;
   lVar7 = *(long*)param_4[param_1];
   lVar11 = param_1;
   lVar10 = param_2;
   joined_r0x00108537:if (lVar7 == 0) {
      if (lVar14 == 0) goto LAB_00108668;
      pbVar13 = *(byte**)( lVar14 + 8 );
      uVar9 = 0;
      pbVar12 = &_LC1;
      LAB_001085ee:if (pbVar13 == (byte*)0x0) {
         uVar5 = **(uint**)( lVar14 + 0x10 );
         if (uVar5 != 0 || uVar9 != 0) {
            lVar7 = 0;
            do {
               if (uVar9 == 0) goto LAB_001085b8;
               if (uVar5 == 0) break;
               if (uVar9 < uVar5) goto LAB_001085b8;
               if (uVar5 < uVar9) break;
               uVar9 = (uint)(char)pbVar12[lVar7 + 1];
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               lVar7 = lVar7 + 1;
            } while ( uVar9 != 0 || uVar5 != 0 );
         }
         goto LAB_00108668;
      }
      uVar5 = (uint)(char)*pbVar13;
      bVar6 = (byte)uVar9 | *pbVar13;
      LAB_001088b5:if (bVar6 != 0) {
         lVar7 = 1;
         do {
            if (uVar9 == 0) goto LAB_001085b8;
            if (uVar5 == 0) break;
            if (uVar9 < uVar5) goto LAB_001085b8;
            if (uVar5 < uVar9) break;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
         } while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }
   } else {
      pbVar12 = *(byte**)( lVar7 + 8 );
      if (lVar14 == 0) {
         if (pbVar12 != (byte*)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC1;
            goto LAB_001088b5;
         }
         uVar9 = 0;
         pbVar13 = &_LC1;
      } else {
         pbVar13 = *(byte**)( lVar14 + 8 );
         if (pbVar12 != (byte*)0x0) {
            uVar9 = (uint)(char)*pbVar12;
            goto LAB_001085ee;
         }
         if (pbVar13 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar14 + 0x10 );
            uVar5 = **(uint**)( lVar7 + 0x10 );
            if (uVar9 != 0 || uVar5 != 0) {
               lVar8 = 4;
               do {
                  if (uVar5 == 0) goto LAB_001085b8;
                  if (uVar9 == 0) break;
                  if (uVar5 < uVar9) goto LAB_001085b8;
                  if (uVar9 < uVar5) break;
                  uVar5 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                  uVar9 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                  lVar8 = lVar8 + 4;
               } while ( uVar5 != 0 || uVar9 != 0 );
            }
            goto LAB_00108668;
         }
         uVar9 = (uint)(char)*pbVar13;
      }
      uVar5 = **(uint**)( lVar7 + 0x10 );
      if (uVar5 != 0 || uVar9 != 0) {
         lVar8 = 0;
         do {
            if (uVar5 == 0) goto LAB_001085b8;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_001085b8;
            if (uVar9 < uVar5) break;
            uVar5 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
            uVar9 = (uint)(char)pbVar13[lVar8 + 1];
            lVar8 = lVar8 + 1;
         } while ( uVar5 != 0 || uVar9 != 0 );
      }
   }
   goto LAB_00108668;
   LAB_001085b8:if (param_2 + -1 == lVar11) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar14 = *(long*)param_3;
      LAB_00108668:lVar10 = lVar10 + -1;
      lVar7 = *(long*)param_4[lVar10];
      ppEVar4 = param_4 + lVar10;
      do {
         if (lVar14 == 0) {
            if (lVar7 == 0) goto LAB_00108868;
            pbVar13 = *(byte**)( lVar7 + 8 );
            uVar5 = 0;
            pbVar12 = &_LC1;
            uVar9 = 0;
            if (pbVar13 == (byte*)0x0) {
               LAB_0010873c:uVar9 = **(uint**)( lVar7 + 0x10 );
               if (uVar9 == 0 && uVar5 == 0) goto LAB_00108868;
               lVar8 = 0;
               while (uVar5 != 0) {
                  if (uVar9 == 0) goto LAB_00108868;
                  if (uVar5 < uVar9) break;
                  if (uVar9 < uVar5) goto LAB_00108868;
                  uVar5 = (uint)(char)pbVar12[lVar8 + 1];
                  uVar9 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
                  if (uVar5 == 0 && uVar9 == 0) goto LAB_00108868;
               };
            } else {
               LAB_0010879b:uVar5 = (uint)(char)*pbVar13;
               bVar6 = (byte)uVar9 | *pbVar13;
               LAB_001087a1:if (bVar6 == 0) goto LAB_00108868;
               lVar7 = 1;
               while (uVar9 != 0) {
                  if (uVar5 == 0) goto LAB_00108868;
                  if (uVar9 < uVar5) break;
                  if (uVar5 < uVar9) goto LAB_00108868;
                  pbVar1 = pbVar12 + lVar7;
                  uVar9 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar13 + lVar7;
                  uVar5 = (uint)(char)*pbVar2;
                  lVar7 = lVar7 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00108868;
               };
            }
         } else {
            pbVar12 = *(byte**)( lVar14 + 8 );
            if (lVar7 == 0) {
               uVar9 = 0;
               pbVar13 = &_LC1;
               if (pbVar12 != (byte*)0x0) {
                  bVar6 = *pbVar12;
                  uVar9 = (uint)(char)bVar6;
                  uVar5 = 0;
                  pbVar13 = &_LC1;
                  goto LAB_001087a1;
               }
            } else {
               pbVar13 = *(byte**)( lVar7 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar5 = (uint)(char)*pbVar12;
                  uVar9 = uVar5;
                  if (pbVar13 == (byte*)0x0) goto LAB_0010873c;
                  goto LAB_0010879b;
               }
               if (pbVar13 == (byte*)0x0) {
                  uVar9 = **(uint**)( lVar7 + 0x10 );
                  uVar5 = **(uint**)( lVar14 + 0x10 );
                  if (uVar9 != 0 || uVar5 != 0) {
                     lVar8 = 4;
                     while (uVar5 != 0) {
                        if (uVar9 == 0) goto LAB_00108868;
                        if (uVar5 < uVar9) break;
                        if (uVar9 < uVar5) goto LAB_00108868;
                        uVar5 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                        uVar9 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                        lVar8 = lVar8 + 4;
                        if (uVar5 == 0 && uVar9 == 0) goto LAB_00108868;
                     };
                     goto LAB_00108700;
                  }
                  goto LAB_00108868;
               }
               uVar9 = (uint)(char)*pbVar13;
            }
            uVar5 = **(uint**)( lVar14 + 0x10 );
            if (uVar5 == 0 && uVar9 == 0) goto LAB_00108868;
            lVar7 = 0;
            while (uVar5 != 0) {
               if (uVar9 == 0) goto LAB_00108868;
               if (uVar5 < uVar9) break;
               if (uVar9 < uVar5) goto LAB_00108868;
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               uVar9 = (uint)(char)pbVar13[lVar7 + 1];
               lVar7 = lVar7 + 1;
               if (uVar5 == 0 && uVar9 == 0) goto LAB_00108868;
            };
         }
         LAB_00108700:if (lVar10 == param_1) goto LAB_00108840;
         lVar10 = lVar10 + -1;
         lVar7 = *(long*)ppEVar4[-1];
         ppEVar4 = ppEVar4 + -1;
      } while ( true );
   }
   LAB_001085c6:lVar11 = lVar11 + 1;
   lVar7 = *(long*)param_4[lVar11];
   goto joined_r0x00108537;
   LAB_00108840:_err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00108868:if (lVar10 <= lVar11) {
      return lVar11;
   }
   pEVar3 = param_4[lVar11];
   param_4[lVar11] = *ppEVar4;
   *ppEVar4 = pEVar3;
   lVar14 = *(long*)param_3;
   goto LAB_001085c6;
}/* CallableCustomMethodPointer<AnimatedSprite2D, void>::get_object() const */undefined8 CallableCustomMethodPointer<AnimatedSprite2D,void>::get_object(CallableCustomMethodPointer<AnimatedSprite2D,void> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00108a9d;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00108a9d;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_00108a9d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(long param_1, long param_2, long param_3, Element **param_4) {
   Element **ppEVar1;
   byte *pbVar2;
   byte *pbVar3;
   Element *pEVar4;
   bool bVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   Element **ppEVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar16 = param_3 - param_1;
   ppEVar13 = param_4;
   if (lVar16 < 2) {
      if (param_2 <= param_3) {
         return;
      }
   } else {
      for (lVar12 = lVar16 + -2 >> 1; adjust_heap(param_1, lVar12, lVar16, param_4[param_1 + lVar12], ppEVar13),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_2 <= param_3) goto LAB_00108c4c;
   }
   ppEVar1 = ppEVar13 + param_1;
   lVar12 = param_3;
   LAB_00108ba0:pEVar4 = ppEVar13[lVar12];
   lVar8 = *(long*)pEVar4;
   lVar7 = *(long*)*ppEVar1;
   if (lVar8 == 0) {
      if (lVar7 != 0) {
         pbVar14 = *(byte**)( lVar7 + 8 );
         uVar10 = 0;
         pbVar15 = &_LC1;
         LAB_00108cb4:if (pbVar14 == (byte*)0x0) {
            uVar11 = **(uint**)( lVar7 + 0x10 );
            if (uVar11 != 0 || uVar10 != 0) {
               lVar8 = 0;
               do {
                  if (uVar10 == 0) goto LAB_00108c20;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00108c20;
                  if (uVar11 < uVar10) break;
                  uVar10 = (uint)(char)pbVar15[lVar8 + 1];
                  uVar11 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
               } while ( uVar10 != 0 || uVar11 != 0 );
            }
         } else {
            uVar11 = (uint)(char)*pbVar14;
            bVar6 = (byte)uVar10 | *pbVar14;
            LAB_00108d16:if (bVar6 != 0) {
               lVar8 = 1;
               do {
                  if (uVar10 == 0) goto LAB_00108c20;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00108c20;
                  if (uVar11 < uVar10) break;
                  pbVar2 = pbVar14 + lVar8;
                  uVar11 = (uint)(char)*pbVar2;
                  pbVar3 = pbVar15 + lVar8;
                  uVar10 = (uint)(char)*pbVar3;
                  lVar8 = lVar8 + 1;
               } while ( *pbVar2 != 0 || *pbVar3 != 0 );
            }
         }
      }
   } else {
      pbVar15 = *(byte**)( lVar8 + 8 );
      if (lVar7 == 0) {
         if (pbVar15 != (byte*)0x0) {
            bVar6 = *pbVar15;
            uVar10 = (uint)(char)bVar6;
            pbVar14 = &_LC1;
            uVar11 = 0;
            goto LAB_00108d16;
         }
         uVar10 = 0;
         pbVar14 = &_LC1;
      } else {
         pbVar14 = *(byte**)( lVar7 + 8 );
         if (pbVar15 != (byte*)0x0) {
            uVar10 = (uint)(char)*pbVar15;
            goto LAB_00108cb4;
         }
         if (pbVar14 == (byte*)0x0) {
            uVar10 = **(uint**)( lVar7 + 0x10 );
            uVar11 = **(uint**)( lVar8 + 0x10 );
            if (uVar10 != 0 || uVar11 != 0) {
               lVar9 = 4;
               do {
                  if (uVar11 == 0) goto LAB_00108c20;
                  if (uVar10 == 0) break;
                  if (uVar11 < uVar10) goto LAB_00108c20;
                  if (uVar10 < uVar11) break;
                  uVar11 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
                  uVar10 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar9 );
                  lVar9 = lVar9 + 4;
               } while ( uVar11 != 0 || uVar10 != 0 );
            }
            goto LAB_00108c34;
         }
         uVar10 = (uint)(char)*pbVar14;
      }
      uVar11 = **(uint**)( lVar8 + 0x10 );
      if (uVar11 != 0 || uVar10 != 0) {
         lVar7 = 0;
         do {
            if (uVar11 == 0) goto LAB_00108c20;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_00108c20;
            if (uVar10 < uVar11) break;
            uVar11 = ( *(uint**)( lVar8 + 0x10 ) )[lVar7 + 1];
            uVar10 = (uint)(char)pbVar14[lVar7 + 1];
            lVar7 = lVar7 + 1;
         } while ( uVar11 != 0 || uVar10 != 0 );
      }
   }
   goto LAB_00108c34;
   LAB_00108c20:ppEVar13[lVar12] = *ppEVar1;
   adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
   LAB_00108c34:lVar12 = lVar12 + 1;
   if (param_2 <= lVar12) goto code_r0x00108c41;
   goto LAB_00108ba0;
   code_r0x00108c41:if (lVar16 < 2) {
      return;
   }
   LAB_00108c4c:ppEVar1 = ppEVar13 + param_1;
   lVar16 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar1[lVar16];
      ppEVar1[lVar16] = *ppEVar1;
      adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
      bVar5 = 1 < lVar16;
      lVar16 = lVar16 + -1;
   } while ( bVar5 );
   return;
}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
}/* AnimatedSprite2D::_get_class_namev() const */undefined8 *AnimatedSprite2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109203:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109203;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimatedSprite2D");
         goto LAB_0010926e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimatedSprite2D");
   LAB_0010926e:return &_get_class_namev();
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long local_118;
   long local_110;
   long local_108;
   long local_f8;
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   if (param_4 == 0) {
      LAB_00109bb3:partial_sort(param_1, param_2, param_2, param_3);
      return;
   }
   lVar11 = param_2 * 8;
   lVar3 = param_2;
   LAB_00109303:param_4 = param_4 + -1;
   puVar2 = (undefined8*)median_of_3(param_3 + param_1, param_3 + ( lVar1 >> 1 ) + param_1, (Element**)( (long)param_3 + lVar11 + -8 ));
   param_2 = partitioner(param_1, lVar3, (Element*)*puVar2, param_3);
   lVar1 = lVar3 - param_2;
   if (0x10 < lVar1) {
      if (param_4 != 0) {
         lVar11 = param_4;
         lVar4 = lVar3;
         LAB_0010938c:do {
            lVar11 = lVar11 + -1;
            puVar2 = (undefined8*)median_of_3(param_3 + param_2, param_3 + ( lVar1 >> 1 ) + param_2, param_3 + lVar4 + -1);
            lVar3 = partitioner(param_2, lVar4, (Element*)*puVar2, param_3);
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
               if (lVar11 != 0) {
                  local_118 = lVar4;
                  lVar15 = lVar11;
                  LAB_00109424:lVar15 = lVar15 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar3, param_3 + ( lVar1 >> 1 ) + lVar3, param_3 + local_118 + -1);
                  lVar4 = partitioner(lVar3, local_118, (Element*)*puVar2, param_3);
                  lVar1 = local_118 - lVar4;
                  if (0x10 < lVar1) goto code_r0x00109470;
                  LAB_00109906:lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) goto LAB_00109916;
                  goto LAB_00109ab3;
               }
               LAB_00109b28:partial_sort(lVar3, lVar4, lVar4, param_3);
            }
            LAB_00109a3f:lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto joined_r0x00109af1;
            lVar4 = lVar3;
            if (lVar11 == 0) break;
         } while ( true );
      }
      partial_sort(param_2, lVar3, lVar3, param_3);
   }
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   if (param_4 != 0) goto LAB_00109b8c;
   goto LAB_00109bb3;
   code_r0x00109470:if (lVar15 != 0) {
      lVar13 = lVar15;
      lVar6 = local_118;
      LAB_001094ac:do {
         lVar13 = lVar13 + -1;
         puVar2 = (undefined8*)median_of_3(param_3 + lVar4, param_3 + ( lVar1 >> 1 ) + lVar4, param_3 + lVar6 + -1);
         lVar5 = partitioner(lVar4, lVar6, (Element*)*puVar2, param_3);
         lVar1 = lVar6 - lVar5;
         if (0x10 < lVar1) {
            if (lVar13 != 0) {
               lVar7 = lVar6;
               local_f8 = lVar13;
               LAB_00109532:do {
                  local_f8 = local_f8 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar5, param_3 + ( lVar1 >> 1 ) + lVar5, param_3 + lVar7 + -1);
                  lVar6 = partitioner(lVar5, lVar7, (Element*)*puVar2, param_3);
                  lVar1 = lVar7 - lVar6;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar8 = lVar7;
                        local_110 = local_f8;
                        LAB_001095b3:do {
                           local_110 = local_110 + -1;
                           puVar2 = (undefined8*)median_of_3(param_3 + lVar6, param_3 + ( lVar1 >> 1 ) + lVar6, param_3 + lVar8 + -1);
                           lVar7 = partitioner(lVar6, lVar8, (Element*)*puVar2, param_3);
                           lVar1 = lVar8 - lVar7;
                           if (0x10 < lVar1) {
                              if (local_110 != 0) {
                                 lVar9 = lVar8;
                                 local_118 = local_110;
                                 LAB_00109631:do {
                                    local_118 = local_118 + -1;
                                    puVar2 = (undefined8*)median_of_3(param_3 + lVar7, param_3 + ( lVar1 >> 1 ) + lVar7, param_3 + lVar9 + -1);
                                    lVar8 = partitioner(lVar7, lVar9, (Element*)*puVar2, param_3);
                                    lVar1 = lVar9 - lVar8;
                                    if (0x10 < lVar1) {
                                       if (local_118 != 0) {
                                          lVar10 = lVar9;
                                          local_108 = local_118;
                                          LAB_001096a7:do {
                                             local_108 = local_108 + -1;
                                             puVar2 = (undefined8*)median_of_3(param_3 + lVar8, param_3 + ( lVar1 >> 1 ) + lVar8, param_3 + lVar10 + -1);
                                             lVar9 = partitioner(lVar8, lVar10, (Element*)*puVar2, param_3);
                                             lVar1 = lVar10 - lVar9;
                                             if (0x10 < lVar1) {
                                                if (local_108 != 0) {
                                                   lVar12 = local_108;
                                                   lVar14 = lVar10;
                                                   do {
                                                      lVar12 = lVar12 + -1;
                                                      puVar2 = (undefined8*)median_of_3(param_3 + lVar9, param_3 + ( lVar1 >> 1 ) + lVar9, param_3 + lVar14 + -1);
                                                      lVar10 = partitioner(lVar9, lVar14, (Element*)*puVar2, param_3);
                                                      introsort(lVar10, lVar14, param_3, lVar12);
                                                      lVar1 = lVar10 - lVar9;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar9 - lVar8;
                                                         lVar10 = lVar9;
                                                         if (lVar1 < 0x11) goto LAB_0010983c;
                                                         goto LAB_001096a7;
                                                      }
                                                      lVar14 = lVar10;
                                                   } while ( lVar12 != 0 );
                                                }
                                                partial_sort(lVar9, lVar10, lVar10, param_3);
                                             }
                                             lVar1 = lVar9 - lVar8;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar8 - lVar7;
                                                lVar9 = lVar8;
                                                if (lVar1 < 0x11) goto joined_r0x00109950;
                                                goto LAB_00109631;
                                             }
                                             lVar10 = lVar9;
                                          } while ( local_108 != 0 );
                                       }
                                       partial_sort(lVar8, lVar9, lVar9, param_3);
                                    }
                                    LAB_0010983c:lVar1 = lVar8 - lVar7;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar7 - lVar6;
                                       lVar8 = lVar7;
                                       if (lVar1 < 0x11) goto joined_r0x001098cb;
                                       goto LAB_001095b3;
                                    }
                                    lVar9 = lVar8;
                                 } while ( local_118 != 0 );
                              }
                              partial_sort(lVar7, lVar8, lVar8, param_3);
                           }
                           joined_r0x00109950:lVar1 = lVar7 - lVar6;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar6 - lVar5;
                              lVar7 = lVar6;
                              if (lVar1 < 0x11) goto joined_r0x00109990;
                              goto LAB_00109532;
                           }
                           lVar8 = lVar7;
                        } while ( local_110 != 0 );
                     }
                     partial_sort(lVar6, lVar7, lVar7, param_3);
                  }
                  joined_r0x001098cb:lVar1 = lVar6 - lVar5;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar5 - lVar4;
                     lVar6 = lVar5;
                     if (lVar1 < 0x11) goto LAB_00109906;
                     goto LAB_001094ac;
                  }
                  lVar7 = lVar6;
               } while ( local_f8 != 0 );
            }
            partial_sort(lVar5, lVar6, lVar6, param_3);
         }
         joined_r0x00109990:lVar1 = lVar5 - lVar4;
         if (lVar1 < 0x11) {
            lVar1 = lVar4 - lVar3;
            local_118 = lVar4;
            if (lVar1 < 0x11) goto LAB_00109a3f;
            goto LAB_00109424;
         }
         lVar6 = lVar5;
         local_118 = lVar5;
      } while ( lVar13 != 0 );
   }
   partial_sort(lVar4, local_118, local_118, param_3);
   lVar1 = lVar4 - lVar3;
   if (lVar1 < 0x11) {
      LAB_00109ab3:lVar1 = lVar3 - param_2;
      lVar4 = lVar3;
      if (0x10 < lVar1) goto LAB_0010938c;
      goto joined_r0x00109af1;
   }
   LAB_00109916:local_118 = lVar4;
   if (lVar15 == 0) goto LAB_00109b28;
   goto LAB_00109424;
   joined_r0x00109af1:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   LAB_00109b8c:lVar11 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00109303;
}/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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
}/* AnimatedSprite2D::get_class() const */void AnimatedSprite2D::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* AnimatedSprite2D::~AnimatedSprite2D() */void AnimatedSprite2D::~AnimatedSprite2D(AnimatedSprite2D *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_001180e0;
   if (( bVar5 ) && ( *(long*)( this + 0x598 ) != 0 )) {
      StringName::unref();
   }
   if (*(long*)( this + 0x588 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x588 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x588 );
         *(undefined8*)( this + 0x588 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x580 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x580 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   *(code**)this = predelete_handler;
   CanvasItem::~CanvasItem((CanvasItem*)this);
   return;
}/* AnimatedSprite2D::~AnimatedSprite2D() */void AnimatedSprite2D::~AnimatedSprite2D(AnimatedSprite2D *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_001180e0;
   if (( bVar5 ) && ( *(long*)( this + 0x598 ) != 0 )) {
      StringName::unref();
   }
   if (*(long*)( this + 0x588 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x588 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x588 );
         *(undefined8*)( this + 0x588 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x580 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x580 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   *(code**)this = predelete_handler;
   CanvasItem::~CanvasItem((CanvasItem*)this);
   operator_delete(this, 0x5c8);
   return;
}/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x15;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a36c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a36c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 4;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a4ec;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a4ec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a66c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a66c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a7ec;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a7ec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 5;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a96c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a96c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<SpriteFrames>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<SpriteFrames>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "SpriteFrames";
   local_40 = 0xc;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_0010aa70;
      }
   }
   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }
   LAB_0010aa70:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC1;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010ac8c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010ac8c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
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
      } else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }
               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010b02f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010b02f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010b0e3;
   }
   cVar6 = String::operator ==(param_1, "CanvasItem");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
            } else {
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
         if (cVar6 != '\0') goto LAB_0010b0e3;
      }
      cVar6 = String::operator ==(param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_60 = 0;
            } else {
               pcVar4 = *(char**)( lVar5 + 8 );
               local_60 = 0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }
               } else {
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
            if (cVar6 != '\0') goto LAB_0010b0e3;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = String::operator ==(param_1, "Object");
            return uVar8;
         }
         goto LAB_0010b2f8;
      }
   }
   LAB_0010b0e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_0010b2f8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* AnimatedSprite2D::is_class(String const&) const */undefined8 AnimatedSprite2D::is_class(AnimatedSprite2D *this, String *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010b37f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010b37f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010b433;
   }
   cVar6 = String::operator ==(param_1, "AnimatedSprite2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
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
         if (cVar6 != '\0') goto LAB_0010b433;
      }
      cVar6 = String::operator ==(param_1, "Node2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar8;
         }
         goto LAB_0010b578;
      }
   }
   LAB_0010b433:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_0010b578:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }
   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }
         break;
      }
      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }
         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }
         Memory::free_static(plVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar4 = *(long**)this;
   } while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */void List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>(List<StringName,DefaultAllocator> *this) {
   int iVar1;
   long *plVar2;
   Element **ppEVar3;
   undefined8 *puVar4;
   Element **ppEVar5;
   Element **ppEVar6;
   Element *pEVar7;
   long lVar8;
   Element *pEVar9;
   long lVar10;
   Element *pEVar11;
   if (*(long*)this == 0) {
      return;
   }
   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (iVar1 < 2) {
      return;
   }
   pEVar11 = (Element*)(long)iVar1;
   ppEVar3 = (Element**)Memory::alloc_static((long)pEVar11 * 8, true);
   if (ppEVar3 == (Element**)0x0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
   } else {
      ppEVar3[-1] = pEVar11;
   }
   if (*(long**)this != (long*)0x0) {
      ppEVar5 = ppEVar3;
      for (pEVar7 = (Element*)**(long**)this; pEVar7 != (Element*)0x0; pEVar7 = *(Element**)( pEVar7 + 8 )) {
         *ppEVar5 = pEVar7;
         ppEVar5 = ppEVar5 + 1;
      }
   }
   lVar10 = 0;
   pEVar7 = pEVar11;
   do {
      pEVar7 = (Element*)( (long)pEVar7 >> 1 );
      lVar10 = lVar10 + 1;
   } while ( pEVar7 != (Element*)0x1 );
   lVar10 = lVar10 * 2;
   pEVar7 = (Element*)0x1;
   pEVar9 = pEVar11;
   if ((long)pEVar11 < 0x11) {
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, (long)pEVar7, ppEVar3);
         pEVar7 = pEVar9;
      } while ( pEVar11 != pEVar9 );
   } else {
      do {
         lVar10 = lVar10 + -1;
         puVar4 = (undefined8*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::median_of_3(ppEVar3, ppEVar3 + ( (long)pEVar9 >> 1 ), ppEVar3 + (long)( pEVar9 + -1 ));
         pEVar7 = (Element*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(0, (long)pEVar9, (Element*)*puVar4, ppEVar3);
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort((long)pEVar7, (long)pEVar9, ppEVar3, lVar10);
         lVar8 = 1;
         if ((long)pEVar7 < 0x11) goto LAB_0010b870;
         pEVar9 = pEVar7;
      } while ( lVar10 != 0 );
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(0, (long)pEVar7, (long)pEVar7, ppEVar3);
      LAB_0010b870:do {
         lVar10 = lVar8 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, lVar8, ppEVar3);
         lVar8 = lVar10;
      } while ( lVar10 != 0x10 );
      pEVar7 = (Element*)0x10;
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert((long)pEVar7, ppEVar3[(long)pEVar7], ppEVar3);
         pEVar7 = pEVar9;
      } while ( pEVar11 != pEVar9 );
   }
   plVar2 = *(long**)this;
   pEVar7 = *ppEVar3;
   *plVar2 = (long)pEVar7;
   *(undefined8*)( pEVar7 + 0x10 ) = 0;
   *(Element**)( *ppEVar3 + 8 ) = ppEVar3[1];
   pEVar7 = ppEVar3[(long)( pEVar11 + -1 )];
   plVar2[1] = (long)pEVar7;
   *(Element**)( pEVar7 + 0x10 ) = ppEVar3[(long)( pEVar11 + -2 )];
   *(undefined8*)( ppEVar3[(long)( pEVar11 + -1 )] + 8 ) = 0;
   if (iVar1 != 2) {
      ppEVar5 = ppEVar3;
      do {
         ppEVar6 = ppEVar5 + 1;
         *(Element**)( ppEVar5[1] + 0x10 ) = *ppEVar5;
         *(Element**)( *ppEVar6 + 8 ) = ppEVar5[2];
         ppEVar5 = ppEVar6;
      } while ( ppEVar3 + ( iVar1 - 2 ) != ppEVar6 );
   }
   Memory::free_static(ppEVar3, true);
   return;
}/* Callable create_custom_callable_function_pointer<AnimatedSprite2D>(AnimatedSprite2D*, char
   const*, void (AnimatedSprite2D::*)()) */AnimatedSprite2D *create_custom_callable_function_pointer<AnimatedSprite2D>(AnimatedSprite2D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC1;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001183d0;
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
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* WARNING: Removing unreachable block (ram,0x0010bc58) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   } else {
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
}/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010c0f1;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x0010bf79. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }
   LAB_0010c0f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010c2e1;
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
      /* WARNING: Load size is inaccurate */
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0010c167. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }
   LAB_0010c2e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   float fVar5;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }
      } else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c440;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
         fVar5 = (float)( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, fVar5);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010c440:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float>::validated_call(MethodBindTRC<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c658;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_0010c658:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float>::ptrcall(MethodBindTRC<float> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c817;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar3;
   LAB_0010c817:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010cb69;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0010c9f2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010cb69:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010cd49;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**param_3;
      /* WARNING: Could not recover jumptable at 0x0010cbd1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010cd49:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }
      } else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010ce10;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }
         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010ce10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d024;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010d024:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d1d3;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_0010d1d3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010d511;
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
      /* WARNING: Could not recover jumptable at 0x0010d39c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }
   LAB_0010d511:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010d6f1;
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
      /* WARNING: Could not recover jumptable at 0x0010d57b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }
   LAB_0010d6f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }
      } else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }
      if (local_68 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d7d0;
      }
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
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
         local_50 = ( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, (Vector2*)&local_50);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010d7d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d9e4;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_0010d9e4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010db93;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar3;
   LAB_0010db93:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010ded1;
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
      /* WARNING: Could not recover jumptable at 0x0010dd5d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_0010ded1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010e0b1;
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
      /* WARNING: Could not recover jumptable at 0x0010df39. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_0010e0b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010e291;
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
      /* WARNING: Could not recover jumptable at 0x0010e11d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }
   LAB_0010e291:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010e479;
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
      /* WARNING: Could not recover jumptable at 0x0010e302. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }
   LAB_0010e479:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      } else {
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
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010e5a0;
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
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010e5a0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010e91f;
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
      /* WARNING: Could not recover jumptable at 0x0010e7c6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010e91f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010eadf;
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
      /* WARNING: Could not recover jumptable at 0x0010e986. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010eadf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, float, bool>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<StringName_const&,float,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010ece1;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x0010eb64. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined1*)( *(long*)( param_3 + 0x10 ) + 8 ));
      return;
   }
   LAB_0010ece1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, float, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,float,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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
      } else {
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
         goto LAB_0010eee1;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, **(char**)( (long)param_3 + 0x10 ) != '\0');
      return;
   }
   LAB_0010eee1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }
      } else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010efb0;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }
         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010efb0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010f1c2;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_0010f1c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010f371;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_0010f371:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010f6b1;
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
      /* WARNING: Could not recover jumptable at 0x0010f53d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_0010f6b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010f891;
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
      /* WARNING: Could not recover jumptable at 0x0010f719. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_0010f891:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<StringName>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   bool bVar5;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }
      } else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010f980;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
         ( *(code*)pVVar2 )((StringName*)&local_58);
         Variant::Variant((Variant*)local_48, (StringName*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         bVar5 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (( bVar5 ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010f980:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<StringName>::validated_call(MethodBindTRC<StringName> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Variant**)0x10be28;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010fbba;
      }
      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }
   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
      StringName::unref();
   }
   LAB_0010fbba:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<StringName>::ptrcall(MethodBindTRC<StringName> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (void**)0x10be28;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010fd9b;
      }
      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }
   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
      StringName::unref();
   }
   LAB_0010fd9b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_001100e1;
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
      /* WARNING: Could not recover jumptable at 0x0010ff6d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_001100e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_001102c1;
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
      /* WARNING: Could not recover jumptable at 0x00110149. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_001102c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CallableCustomMethodPointer<AnimatedSprite2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<AnimatedSprite2D,void>::call(CallableCustomMethodPointer<AnimatedSprite2D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001104af;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_001104af;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00110488. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }
         goto LAB_00110571;
      }
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001104af:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC56, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00110571:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<Ref<SpriteFrames>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<Ref<SpriteFrames>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }
      } else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }
      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = (Object*)0x10be28;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_00110690;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }
         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_00110690:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<SpriteFrames>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<SpriteFrames>>::ptrcall(MethodBindTRC<Ref<SpriteFrames>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10be28;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_00110916;
      }
      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00110916;
      *(undefined8*)param_3 = 0;
      goto LAB_00110959;
   }
   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00110959;
      } else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }
         if (pOVar5 != (Object*)0x0) {
            LAB_00110959:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
         }
         if (local_48 == (Object*)0x0) goto LAB_00110916;
      }
   }
   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }
   }
   LAB_00110916:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Ref<SpriteFrames> const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<Ref<SpriteFrames>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
         pVVar5 = param_2[1] + 0x20;
      }
      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = (Object*)0x10be28;
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
         goto LAB_00110c18;
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
            LAB_00110bd6:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }
            }
         }
      } else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &SpriteFrames::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }
            }
            if (pOVar2 != (Object*)0x0) goto LAB_00110bd6;
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
   LAB_00110c18:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Ref<SpriteFrames> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<SpriteFrames>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }
      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10be28;
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
         goto LAB_00110edc;
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
      LAB_00110eb8:local_48 = (Object*)0x0;
   } else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00110eb8;
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
   LAB_00110edc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }
      } else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }
      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001111c0;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00111210;
         LAB_00111200:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111210:uVar6 = 4;
            goto LAB_001111b5;
         }
         if (in_R8D == 1) goto LAB_00111200;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar10 = pVVar10 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 5);
      uVar4 = _LC66;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      local_38 = Variant::operator_cast_to_Vector2(pVVar10);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), &local_38);
   } else {
      uVar6 = 3;
      LAB_001111b5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_001111c0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }
      } else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }
      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001114f0;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00111540;
         LAB_00111530:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111540:uVar6 = 4;
            goto LAB_001114e5;
         }
         if (in_R8D == 1) goto LAB_00111530;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar10 = pVVar10 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC67;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      uVar6 = 3;
      LAB_001114e5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_001114f0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, float, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<StringName_const&,float,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   long *plVar9;
   uint uVar10;
   int iVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   Variant *pVVar13;
   long lVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   char *local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   Variant *local_58[3];
   long local_40;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar12 == (long*)0x0 ) || ( plVar12[1] == 0 ) ) || ( *(char*)( plVar12[1] + 0x2e ) == '\0' )) {
      LAB_0011176a:pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      uVar7 = 3;
      if (in_R8D < 4) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar11 = 0;
            lVar14 = 0;
         } else {
            lVar14 = *(long*)( pVVar2 + -8 );
            iVar11 = (int)lVar14;
         }
         if ((int)( 3 - in_R8D ) <= iVar11) {
            lVar8 = 0;
            do {
               if ((int)lVar8 < (int)in_R8D) {
                  pVVar13 = *(Variant**)( param_4 + lVar8 * 8 );
               } else {
                  uVar10 = iVar11 + -3 + (int)lVar8;
                  if (lVar14 <= (int)uVar10) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar14, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
                  pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
               }
               local_58[lVar8] = pVVar13;
               lVar8 = lVar8 + 1;
            } while ( lVar8 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar15 & 1 ) != 0) {
               pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
            }
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[2], 1);
            uVar4 = _LC68;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            bVar6 = Variant::operator_cast_to_bool(local_58[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[1], 3);
            uVar4 = _LC69;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_float(local_58[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[0], 0x15);
            uVar4 = _LC67;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant*)&local_68);
            ( *(code*)pVVar15 )((Variant*)( (long)plVar12 + (long)pVVar1 ), (Variant*)&local_68, bVar6);
            local_78 = local_68;
            goto joined_r0x0011189f;
         }
         uVar7 = 4;
      }
      *in_R9 = uVar7;
      in_R9[2] = 3;
   } else {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar9 = (long*)plVar12[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
         }
      } else {
         plVar9 = (long*)( plVar12[1] + 0x20 );
      }
      if (local_68 != (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
         goto LAB_0011176a;
      }
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange*)&local_70);
      vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
      _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      joined_r0x0011189f:if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Ref<SpriteFrames> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Ref<SpriteFrames>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
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
   undefined8 local_50;
   Object *local_48;
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
      } else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }
      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10be28;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_00111c70;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00111c65:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00111c70;
   }
   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00111cc0;
      LAB_00111cb0:pVVar12 = *(Variant**)param_4;
   } else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00111cc0:uVar7 = 4;
         goto LAB_00111c65;
      }
      if (in_R8D == 1) goto LAB_00111cb0;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
   }
   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }
   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC70;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }
   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_00111ddd:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
         }
      } else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &SpriteFrames::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }
            }
            if (pOVar5 != (Object*)0x0) goto LAB_00111ddd;
         }
      }
   }
   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }
      }
   }
   LAB_00111c70:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<SpriteFrames>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<SpriteFrames>>::validated_call(MethodBindTRC<Ref<SpriteFrames>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   Variant **local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Variant**)0x10be28;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_00111f86;
      }
      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }
   }
   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }
   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   } else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   LAB_00111f86:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }
      } else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }
      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_00112250;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001122a0;
         LAB_00112290:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001122a0:uVar6 = 4;
            goto LAB_00112245;
         }
         if (in_R8D == 1) goto LAB_00112290;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar10 = pVVar10 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   } else {
      uVar6 = 3;
      LAB_00112245:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_00112250:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (void**)0x10be28;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001124dd;
      }
      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }
   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_001124dd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Variant**)0x10be28;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001126ac;
      }
      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }
   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_001126ac:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }
      } else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC56, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_001128e0;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
         ( *(code*)pVVar2 )((CowData<char32_t>*)&local_58);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_001128e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AnimatedSprite2D::_validate_propertyv(PropertyInfo&) const */void AnimatedSprite2D::_validate_propertyv(AnimatedSprite2D *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_0011e008 != Node::_validate_property) {
      CanvasItem::_validate_property((PropertyInfo*)this);
   }
   if (*(long*)( this + 0x580 ) == 0) {
      return;
   }
   _validate_property(this, param_1);
   return;
}/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00112b5b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC1;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00112c50:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00112c50;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00112b5b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<Ref<SpriteFrames> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<SpriteFrames>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00112d9b;
   local_78 = 0;
   local_80 = 0;
   local_68 = "SpriteFrames";
   local_60._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00112f35:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_00112f35;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar4 = local_68._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
   }
   if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar4 + 4 ) = uVar2;
   }
   puVar4[6] = local_50;
   if (*(long*)( puVar4 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( puVar4 + 8 ) = lVar3;
   }
   puVar4[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00112d9b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar4;
}/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00112feb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC1;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001130e0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001130e0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00112feb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011322b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC1;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00113320:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00113320;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011322b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011346b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC1;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00113560:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00113560;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011346b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001136ab;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC1;
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
      LAB_001137a0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001137a0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_001136ab:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<int, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int,float>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined8 uVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
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
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC1;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 2;
   } else {
      if (in_EDX != 1) goto LAB_001138fa;
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC1;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 3;
   }
   local_90 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, uVar2, &local_90, 0, (CowData<char32_t>*)&local_88, 6, &local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }
   *puVar3 = local_78._0_4_;
   if (*(long*)( puVar3 + 2 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 2 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( puVar3 + 2 ) = lVar1;
   }
   if (*(long*)( puVar3 + 4 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( puVar3 + 4 ) = lVar1;
   }
   puVar3[6] = local_60;
   if (*(long*)( puVar3 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 8 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( puVar3 + 8 ) = lVar1;
   }
   puVar3[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_001138fa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
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
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar4 = *(long**)this;
   } while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b8;
   CowData<char32_t> *local_a8;
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
      local_80 = 0;
      local_88 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }
   }
   local_a8 = (CowData<char32_t>*)&local_70;
   local_b8 = (CowData<char32_t>*)&local_58;
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
      CowData<char32_t>::_ref(local_a8, (CowData*)&local_98);
   }
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref(local_b8, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)local_b8, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_68 = local_80;
         }
         goto LAB_00113d5f;
      }
   }
   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00113d5f:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }
   if ((code*)PTR__get_property_list_0011e010 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }
   if (param_2) {
      local_80 = 0;
      local_78 = "Node";
      local_88 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_b8);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node2D::_get_property_listv(Node2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "Node2D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node2D";
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
   if (local_90 == 0) {
      LAB_0011429d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011429d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001142bf;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x001142bf:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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
   StringName::StringName((StringName*)&local_78, "Node2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AnimatedSprite2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AnimatedSprite2D::_get_property_listv(AnimatedSprite2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node2D::_get_property_listv((Node2D*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "AnimatedSprite2D";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AnimatedSprite2D";
   local_98 = 0;
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0011467d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011467d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011469f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0011469f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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
   StringName::StringName((StringName*)&local_78, "AnimatedSprite2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node2D::_get_property_listv((Node2D*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* HashMap<StringName, SpriteFrames::Anim, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   SpriteFrames::Anim> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos(HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>> *this, StringName *param_1, uint *param_2) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }
   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   return 0;
}/* MethodBind* create_method_bind<AnimatedSprite2D, Ref<SpriteFrames> const&>(void
   (AnimatedSprite2D::*)(Ref<SpriteFrames> const&)) */MethodBind *create_method_bind<AnimatedSprite2D,Ref<SpriteFrames>const&>(_func_void_Ref_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118460;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, Ref<SpriteFrames>>(Ref<SpriteFrames>
   (AnimatedSprite2D::*)() const) */MethodBind *create_method_bind<AnimatedSprite2D,Ref<SpriteFrames>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001184c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, StringName const&>(void
   (AnimatedSprite2D::*)(StringName const&)) */MethodBind *create_method_bind<AnimatedSprite2D,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118520;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, StringName>(StringName (AnimatedSprite2D::*)()
   const) */MethodBind *create_method_bind<AnimatedSprite2D,StringName>(_func_StringName *param_1) {
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
   *(_func_StringName**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118580;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, String const&>(void (AnimatedSprite2D::*)(String
   const&)) */MethodBind *create_method_bind<AnimatedSprite2D,String_const&>(_func_void_String_ptr *param_1) {
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
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001185e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, String>(String (AnimatedSprite2D::*)() const) */MethodBind *create_method_bind<AnimatedSprite2D,String>(_func_String *param_1) {
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
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118640;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, bool>(bool (AnimatedSprite2D::*)() const) */MethodBind *create_method_bind<AnimatedSprite2D,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001186a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, StringName const&, float, bool>(void
   (AnimatedSprite2D::*)(StringName const&, float, bool)) */MethodBind *create_method_bind<AnimatedSprite2D,StringName_const&,float,bool>(_func_void_StringName_ptr_float_bool *param_1) {
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
   *(_func_void_StringName_ptr_float_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118700;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D>(void (AnimatedSprite2D::*)()) */MethodBind *create_method_bind<AnimatedSprite2D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00118760;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, bool>(void (AnimatedSprite2D::*)(bool)) */MethodBind *create_method_bind<AnimatedSprite2D,bool>(_func_void_bool *param_1) {
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
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001187c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, Vector2 const&>(void
   (AnimatedSprite2D::*)(Vector2 const&)) */MethodBind *create_method_bind<AnimatedSprite2D,Vector2_const&>(_func_void_Vector2_ptr *param_1) {
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
   *(_func_void_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118820;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, Vector2>(Vector2 (AnimatedSprite2D::*)() const)
    */MethodBind *create_method_bind<AnimatedSprite2D,Vector2>(_func_Vector2 *param_1) {
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
   *(_func_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118880;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, int>(void (AnimatedSprite2D::*)(int)) */MethodBind *create_method_bind<AnimatedSprite2D,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001188e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, int>(int (AnimatedSprite2D::*)() const) */MethodBind *create_method_bind<AnimatedSprite2D,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118940;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, float>(void (AnimatedSprite2D::*)(float)) */MethodBind *create_method_bind<AnimatedSprite2D,float>(_func_void_float *param_1) {
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
   *(_func_void_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001189a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, float>(float (AnimatedSprite2D::*)() const) */MethodBind *create_method_bind<AnimatedSprite2D,float>(_func_float *param_1) {
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
   *(_func_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118a00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<AnimatedSprite2D, int, float>(void (AnimatedSprite2D::*)(int,
   float)) */MethodBind *create_method_bind<AnimatedSprite2D,int,float>(_func_void_int_float *param_1) {
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
   *(_func_void_int_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00118a60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "AnimatedSprite2D";
   local_30 = 0x10;
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
}/* AnimatedSprite2D::_bind_methods() [clone .cold] */void AnimatedSprite2D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* AnimatedSprite2D::set_sprite_frames(Ref<SpriteFrames> const&) [clone .cold] */void AnimatedSprite2D::set_sprite_frames(Ref *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* AnimatedSprite2D::_initialize_classv() */void AnimatedSprite2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0011e028 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0011e018 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
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
      if ((code *)PTR__bind_methods_0011e020 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimatedSprite2D";
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116680:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00116680;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00116559:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00116559;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_001166d6;
  }
  if (lVar10 == lVar7) {
LAB_001165ff:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001166d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001165ea;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001165ff;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_001165ea:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}



/* AnimatedSprite2D::_setv(StringName const&, Variant const&) */

void AnimatedSprite2D::_setv(StringName *param_1,Variant *param_2)

{
  char cVar1;
  
  if ((code *)PTR__set_0011e030 != Object::_set) {
    cVar1 = CanvasItem::_set(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  _set(param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00116820) */
/* AnimatedSprite2D::_notificationv(int, bool) */

void __thiscall AnimatedSprite2D::_notificationv(AnimatedSprite2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011e038 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011e038 != CanvasItem::_notification) {
    Node2D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,float>
               (__UnexistingClass *param_1,_func_void_int_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_001169b5;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_001169ed:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00116915;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00116a08;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001169ed;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00116a08:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00116915:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC69;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC152;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011699f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_001169b5:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116aa6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var2,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116aa6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00116d6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00116dd0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00116dd0:
      uVar6 = 4;
LAB_00116d6d:
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
      goto LAB_00116ceb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00116ceb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC153;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00116d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116e36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116e36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
    goto LAB_001170fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00117160;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00117160:
      uVar6 = 4;
LAB_001170fd:
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
      goto LAB_0011707b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011707b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC152;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001170d6. Too many branches */
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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001171c6;
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
LAB_001171c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011748d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001174f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001174f0:
      uVar6 = 4;
LAB_0011748d:
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
      goto LAB_0011740b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011740b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC154;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00117467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC56,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00117556;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00117556:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00117759;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00117858:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00117858;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00117759:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, float, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,float,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined8 uVar2;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar3;
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
  
  pPVar3 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar3 = 0;
  *(undefined4 *)(pPVar3 + 0x18) = 0;
  *(undefined8 *)(pPVar3 + 0x20) = 0;
  *(undefined4 *)(pPVar3 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar3 + 8) = (undefined1  [16])0x0;
  local_94 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_94,pPVar3);
  if (in_EDX == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC1;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 3;
  }
  else {
    local_94 = local_94 + 1;
    if (in_EDX != local_94) goto LAB_00117a5d;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC1;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 1;
  }
  local_90 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,uVar2,&local_90,0,(CowData<char32_t> *)&local_88,6,&local_80)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar3 = local_78._0_4_;
  if (*(long *)(pPVar3 + 8) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar3 + 8));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(pPVar3 + 8) = lVar1;
  }
  if (*(long *)(pPVar3 + 0x10) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(pPVar3 + 0x10) = lVar1;
  }
  *(undefined4 *)(pPVar3 + 0x18) = local_60;
  if (*(long *)(pPVar3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar3 + 0x20));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(pPVar3 + 0x20) = lVar1;
  }
  *(undefined4 *)(pPVar3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00117a5d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* AnimatedSprite2D::~AnimatedSprite2D() */

void __thiscall AnimatedSprite2D::~AnimatedSprite2D(AnimatedSprite2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

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
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

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
/* MethodBindT<StringName const&, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,float,bool>::~MethodBindT
          (MethodBindT<StringName_const&,float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName>::~MethodBindTRC() */

void __thiscall MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SpriteFrames>>::~MethodBindTRC(MethodBindTRC<Ref<SpriteFrames>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<SpriteFrames> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SpriteFrames>const&>::~MethodBindT(MethodBindT<Ref<SpriteFrames>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimatedSprite2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimatedSprite2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimatedSprite2D,void> *this)

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
