/* BoxContainer::get_alignment() const */undefined4 BoxContainer::get_alignment(BoxContainer *this) {
   return *(undefined4*)( this + 0xa04 );
}
/* BoxContainer::is_vertical() const */BoxContainer BoxContainer::is_vertical(BoxContainer *this) {
   return this[0xa00];
}
/* BoxContainer::get_minimum_size() const */void BoxContainer::get_minimum_size(BoxContainer *this) {
   bool bVar1;
   int iVar2;
   undefined8 uVar3;
   long *plVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   int local_40;
   int iStack_3c;
   undefined8 local_38;
   long local_30;
   bVar1 = true;
   iVar5 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   iStack_3c = 0;
   while (true) {
      iVar2 = Node::get_child_count(SUB81(this, 0));
      if (iVar2 <= iVar5) break;
      uVar3 = Node::get_child((int)this, SUB41(iVar5, 0));
      plVar4 = (long*)Container::as_sortable_control(this, uVar3, 0);
      if (plVar4 != (long*)0x0) {
         local_38 = ( **(code**)( *plVar4 + 0x300 ) )(plVar4);
         uVar3 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_38);
         iVar2 = (int)uVar3;
         iVar6 = (int)( (ulong)uVar3 >> 0x20 );
         if (this[0xa00] == (BoxContainer)0x0) {
            if (iStack_3c < iVar6) {
               iStack_3c = iVar6;
            }

            if (!bVar1) {
               iVar2 = *(int*)( this + 0xa08 ) + iVar2;
            }

            local_40 = local_40 + iVar2;
         }
 else {
            if (local_40 < iVar2) {
               local_40 = iVar2;
            }

            if (!bVar1) {
               iVar6 = *(int*)( this + 0xa08 ) + iVar6;
            }

            iStack_3c = iStack_3c + iVar6;
         }

         bVar1 = false;
      }

      iVar5 = iVar5 + 1;
   }
;
   Vector2i::operator_cast_to_Vector2((Vector2i*)&local_40);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::add_spacer(bool) */Control * __thiscall BoxContainer::add_spacer(BoxContainer *this,bool param_1){
   Control *this_00;
   this_00 = (Control*)operator_new(0x9c8, "");
   Control::Control(this_00);
   postinitialize_handler((Object*)this_00);
   Control::set_mouse_filter(this_00, 1);
   if (this[0xa00] == (BoxContainer)0x0) {
      Control::set_h_size_flags(this_00, 3);
   }
 else {
      Control::set_v_size_flags();
   }

   Node::add_child(this, this_00, 0, 0);
   if (!param_1) {
      return this_00;
   }

   Node::move_child((Node*)this, (int)this_00);
   return this_00;
}
/* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   BoxContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(Node *, StringName_const &, StringName_const &),BoxContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
   __n = lVar2 * 4;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   BoxContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&) */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),BoxContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (Node*)0x0) {
      Control::get_theme_item(local_48, 0, 1, param_3, param_4);
      Variant::operator_cast_to_int((Variant*)local_48);
      _DAT_00000a08 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   lVar3 = __dynamic_cast(*param_2, &Object::typeinfo, &BoxContainer::typeinfo, 0);
   Control::get_theme_item(local_48, lVar3, 1, param_3, param_4);
   iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
   *(int*)( lVar3 + 0xa08 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* BoxContainer::_validate_property(PropertyInfo&) const */void BoxContainer::_validate_property(BoxContainer *this, PropertyInfo *param_1) {
   char cVar1;
   if (this[0xa0c] == (BoxContainer)0x0) {
      return;
   }

   cVar1 = String::operator ==((String*)( param_1 + 8 ), "vertical");
   if (cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   return;
}
/* BoxContainer::BoxContainer(bool) */void BoxContainer::BoxContainer(BoxContainer *this, bool param_1) {
   Container::Container((Container*)this);
   *(undefined8*)( this + 0xa04 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00109510;
   this[0xa0c] = (BoxContainer)0x0;
   this[0xa00] = (BoxContainer)param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* BoxContainer::_resort() */void BoxContainer::_resort(BoxContainer *this) {
   int *piVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   byte bVar10;
   BoxContainer BVar11;
   int extraout_EAX;
   int iVar12;
   int extraout_var;
   int *piVar13;
   undefined8 uVar14;
   ulong uVar15;
   Rect2 *pRVar16;
   long lVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   int iVar21;
   int iVar22;
   int *piVar23;
   undefined8 *puVar24;
   int iVar25;
   int iVar26;
   uint uVar27;
   ulong uVar28;
   uint uVar29;
   int iVar30;
   ulong uVar31;
   char cVar32;
   int iVar33;
   undefined8 *puVar34;
   long in_FS_OFFSET;
   bool bVar35;
   float fVar36;
   float fVar37;
   float local_c0;
   int local_bc;
   int local_b8;
   Rect2 *local_90;
   HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>> local_88[8];
   undefined1 local_80[16];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   iVar33 = 0;
   iVar21 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = Control::get_size();
   Vector2::operator_cast_to_Vector2i((Vector2*)&local_58);
   BVar11 = ( BoxContainer )(**(code**)( *(long*)this + 0x340 ))(this);
   local_60 = 2;
   local_c0 = 0.0;
   local_bc = 0;
   iVar22 = 0;
   local_80 = (undefined1[16])0x0;
   local_70 = (undefined1[16])0x0;
   while (true) {
      bVar35 = SUB81(this, 0);
      iVar12 = Node::get_child_count(bVar35);
      iVar26 = (int)this;
      if (iVar12 <= iVar21) break;
      uVar14 = Node::get_child(iVar26, SUB41(iVar21, 0));
      local_90 = (Rect2*)Container::as_sortable_control(this, uVar14, 1);
      if (local_90 != (Rect2*)0x0) {
         local_58 = ( **(code**)( *(long*)local_90 + 0x300 ) )(local_90);
         uVar14 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_58);
         iVar12 = (int)( (ulong)uVar14 >> 0x20 );
         if (this[0xa00] == (BoxContainer)0x0) {
            iVar12 = (int)uVar14;
            uVar15 = Control::get_h_size_flags();
            uVar15 = uVar15 >> 1;
            bVar10 = (byte)uVar15;
         }
 else {
            uVar15 = Control::get_v_size_flags();
            uVar15 = uVar15 >> 1;
            bVar10 = (byte)uVar15;
         }

         iVar22 = iVar22 + iVar12;
         if (( uVar15 & 1 ) != 0) {
            local_bc = local_bc + iVar12;
            fVar36 = (float)Control::get_stretch_ratio();
            local_c0 = fVar36 + local_c0;
         }

         iVar33 = iVar33 + 1;
         piVar13 = (int*)HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>>::operator [](local_88, (Control**)&local_90);
         *piVar13 = iVar12;
         *(byte*)( piVar13 + 1 ) = bVar10 & 1;
         piVar13[2] = iVar12;
      }

      iVar21 = iVar21 + 1;
   }
;
   if (iVar33 == 0) {
      puVar34 = (undefined8*)local_80._0_8_;
      if ((undefined8*)local_80._0_8_ == (undefined8*)0x0) goto LAB_00100ac1;
      LAB_001008e8:piVar13 = (int*)local_80._8_8_;
      bVar35 = local_60._4_4_ != 0;
      if (( bVar35 ) && ( *(uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) != 0 )) {
         piVar1 = (int*)( local_80._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) * 4 );
         piVar23 = (int*)local_80._8_8_;
         puVar24 = puVar34;
         do {
            if (*piVar23 != 0) {
               *piVar23 = 0;
               Memory::free_static((void*)*puVar24, false);
               *puVar24 = 0;
            }

            piVar23 = piVar23 + 1;
            puVar24 = puVar24 + 1;
         }
 while ( piVar1 != piVar23 );
      }

   }
 else {
      iVar21 = extraout_EAX;
      if (this[0xa00] != (BoxContainer)0x0) {
         iVar21 = extraout_var;
      }

      iVar22 = ( iVar21 - *(int*)( this + 0xa08 ) * ( iVar33 + -1 ) ) - iVar22;
      if (iVar22 < 0) {
         iVar22 = 0;
      }

      cVar32 = '\0';
      local_b8 = local_bc + iVar22;
      while (0.0 < local_c0) {
         fVar36 = 0.0;
         iVar21 = 0;
         LAB_00100740:iVar12 = Node::get_child_count(bVar35);
         if (iVar12 <= iVar21) goto LAB_00100afa;
         uVar14 = Node::get_child(iVar26, SUB41(iVar21, 0));
         local_90 = (Rect2*)Container::as_sortable_control(this, uVar14, 1);
         if (local_90 == (Rect2*)0x0) {
            LAB_001008b1:iVar21 = iVar21 + 1;
            goto LAB_00100740;
         }

         puVar34 = (undefined8*)local_80._0_8_;
         if ((undefined8*)local_80._0_8_ == (undefined8*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("_resort", "scene/gui/box_container.cpp", 0x72, "Condition \"!min_size_cache.has(c)\" is true.", 0, 0);
               return;
            }

            goto LAB_00100d8b;
         }

         if (local_60._4_4_ == 0) {
            LAB_001008c0:_err_print_error("_resort", "scene/gui/box_container.cpp", 0x72, "Condition \"!min_size_cache.has(c)\" is true.", 0, 0);
            goto LAB_001008e8;
         }

         uVar28 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ));
         lVar17 = *(long*)( hash_table_size_primes_inv + ( local_60 & 0xffffffff ) * 8 );
         uVar15 = (long)local_90 * 0x3ffff - 1;
         uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
         uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
         uVar15 = uVar15 >> 0x16 ^ uVar15;
         uVar31 = uVar15 & 0xffffffff;
         if ((int)uVar15 == 0) {
            uVar31 = 1;
         }

         auVar2._8_8_ = 0;
         auVar2._0_8_ = uVar31 * lVar17;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar28;
         lVar20 = SUB168(auVar2 * auVar6, 8);
         uVar27 = *(uint*)( local_80._8_8_ + lVar20 * 4 );
         iVar12 = SUB164(auVar2 * auVar6, 8);
         if (uVar27 == 0) goto LAB_001008c0;
         uVar29 = 0;
         while (( uVar27 != (uint)uVar31 || ( local_90 != *(Rect2**)( *(long*)( local_80._0_8_ + lVar20 * 8 ) + 0x10 ) ) )) {
            uVar29 = uVar29 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar12 + 1) * lVar17;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar28;
            lVar20 = SUB168(auVar3 * auVar7, 8);
            uVar27 = *(uint*)( local_80._8_8_ + lVar20 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
            if (( uVar27 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar27 * lVar17,auVar8._8_8_ = 0,auVar8._0_8_ = uVar28,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) + iVar12 ) - SUB164(auVar4 * auVar8, 8)) * lVar17,auVar9._8_8_ = 0,auVar9._0_8_ = uVar28,SUB164(auVar5 * auVar9, 8) < uVar29) goto LAB_001008c0;
         }
;
         piVar13 = (int*)HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>>::operator [](local_88, (Control**)&local_90);
         cVar32 = (char)piVar13[1];
         if (cVar32 == '\0') goto LAB_001008b1;
         fVar37 = (float)Control::get_stretch_ratio();
         fVar37 = ( fVar37 * (float)local_b8 ) / local_c0;
         iVar12 = (int)fVar37;
         fVar36 = ( fVar37 - (float)iVar12 ) + fVar36;
         if ((float)*piVar13 <= fVar37) {
            if (fVar36 < __LC19) {
               piVar13[2] = iVar12;
            }
 else {
               fVar36 = fVar36 - __LC19;
               piVar13[2] = iVar12 + 1;
            }

            goto LAB_001008b1;
         }

         *(undefined1*)( piVar13 + 1 ) = 0;
         fVar36 = (float)Control::get_stretch_ratio();
         local_b8 = local_b8 - *piVar13;
         local_c0 = local_c0 - fVar36;
         piVar13[2] = *piVar13;
      }
;
      if (cVar32 == '\0') {
         iVar21 = *(int*)( this + 0xa04 );
         iVar12 = iVar22 >> 1;
         if (this[0xa00] != (BoxContainer)0x0) {
            if (( iVar21 != 1 ) && ( iVar12 = iVar21 != 2 )) {
               iVar12 = 0;
            }

            goto LAB_00100b10;
         }

         if (iVar21 == 1) {
            if (BVar11 == (BoxContainer)0x0) goto LAB_00100b10;
         }
 else {
            if (iVar21 == 2) {
               iVar12 = iVar22;
               if (BVar11 != (BoxContainer)0x0) goto LAB_00100c44;
               goto LAB_00100b10;
            }

            if (iVar21 != 0) goto joined_r0x00100c3e;
            iVar12 = iVar22;
            if (BVar11 == (BoxContainer)0x0) goto LAB_00100b0e;
         }

         LAB_00100c46:iVar22 = Node::get_child_count(bVar35);
         iVar18 = -1;
         iVar21 = -1;
         iVar22 = iVar22 + -1;
      }
 else {
         LAB_00100afa:if (BVar11 != (BoxContainer)0x0) {
            BVar11 = this[0xa00];
            joined_r0x00100c3e:if (BVar11 != (BoxContainer)0x0) {
               LAB_00100c44:iVar12 = 0;
               goto LAB_00100c46;
            }

         }

         LAB_00100b0e:iVar12 = 0;
         LAB_00100b10:iVar22 = 0;
         iVar21 = Node::get_child_count(bVar35);
         iVar18 = 1;
      }

      bVar35 = true;
      iVar30 = 0;
      uVar15 = local_60;
      for (; local_60 = uVar15,iVar22 != iVar21; iVar22 = iVar22 + iVar18) {
         uVar14 = Node::get_child(iVar26, SUB41(iVar22, 0));
         pRVar16 = (Rect2*)Container::as_sortable_control(this, uVar14, 1);
         local_90 = pRVar16;
         if (pRVar16 != (Rect2*)0x0) {
            lVar17 = HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>>::operator [](local_88, (Control**)&local_90);
            if (!bVar35) {
               iVar12 = iVar12 + *(int*)( this + 0xa08 );
            }

            iVar19 = *(int*)( lVar17 + 8 );
            iVar25 = iVar19 + iVar12;
            if (( *(char*)( lVar17 + 4 ) == '\0' ) || ( iVar33 + -1 != iVar30 )) {
               if (this[0xa00] != (BoxContainer)0x0) goto LAB_00100b50;
               LAB_00100c14:fVar36 = (float)iVar12;
               fVar37 = 0.0;
               iVar12 = iVar25;
               iVar25 = extraout_var;
            }
 else {
               if (this[0xa00] == (BoxContainer)0x0) {
                  iVar19 = extraout_EAX - iVar12;
                  iVar25 = extraout_EAX;
                  goto LAB_00100c14;
               }

               iVar19 = extraout_var - iVar12;
               iVar25 = extraout_var;
               LAB_00100b50:fVar36 = 0.0;
               fVar37 = (float)iVar12;
               iVar12 = iVar25;
               iVar25 = iVar19;
               iVar19 = extraout_EAX;
            }

            uStack_50 = CONCAT44((float)iVar25, (float)iVar19);
            local_58 = CONCAT44(fVar37, fVar36);
            iVar30 = iVar30 + 1;
            Container::fit_child_in_rect((Control*)this, pRVar16);
            bVar35 = false;
         }

         uVar15 = local_60;
      }

      puVar34 = (undefined8*)local_80._0_8_;
      if ((undefined8*)local_80._0_8_ == (undefined8*)0x0) {
         LAB_00100ac1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00100d8b;
      }

      local_60._4_4_ = (int)( uVar15 >> 0x20 );
      piVar13 = (int*)local_80._8_8_;
      bVar35 = local_60._4_4_ != 0;
      if (( bVar35 ) && ( *(uint*)( hash_table_size_primes + ( uVar15 & 0xffffffff ) * 4 ) != 0 )) {
         piVar1 = (int*)( local_80._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( uVar15 & 0xffffffff ) * 4 ) * 4 );
         piVar23 = (int*)local_80._8_8_;
         puVar24 = (undefined8*)local_80._0_8_;
         do {
            if (*piVar23 != 0) {
               *piVar23 = 0;
               Memory::free_static((void*)*puVar24, false);
               *puVar24 = 0;
            }

            piVar23 = piVar23 + 1;
            puVar24 = puVar24 + 1;
         }
 while ( piVar1 != piVar23 );
      }

   }

   Memory::free_static(puVar34, false);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(piVar13, false);
      return;
   }

   LAB_00100d8b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::_notification(int) */void BoxContainer::_notification(BoxContainer *this, int param_1) {
   if (param_1 == 0x33) {
      _resort(this);
      return;
   }

   if (param_1 < 0x34) {
      if (param_1 == 0x2d) {
         Control::update_minimum_size();
         return;
      }

      if (param_1 != 0x31) {
         return;
      }

   }
 else if (param_1 != 0x7da) {
      return;
   }

   Container::queue_sort();
   return;
}
/* BoxContainer::set_alignment(BoxContainer::AlignmentMode) */void BoxContainer::set_alignment(BoxContainer *this, int param_2) {
   if (*(int*)( this + 0xa04 ) != param_2) {
      *(int*)( this + 0xa04 ) = param_2;
      _resort(this);
      return;
   }

   return;
}
/* VBoxContainer::add_margin_child(String const&, Control*, bool) */MarginContainer * __thiscall
VBoxContainer::add_margin_child(VBoxContainer *this,String *param_1,Control *param_2,bool param_3){
   Label *this_00;
   MarginContainer *this_01;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Label*)operator_new(0xad8, "");
   local_48 = 0;
   Label::Label(this_00, (String*)&local_48);
   postinitialize_handler((Object*)this_00);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   StringName::StringName((StringName*)&local_48, "HeaderSmall", false);
   Control::set_theme_type_variation((StringName*)this_00);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   Label::set_text((String*)this_00);
   Node::add_child(this, this_00, 0, 0);
   this_01 = (MarginContainer*)operator_new(0xa10, "");
   MarginContainer::MarginContainer(this_01);
   postinitialize_handler((Object*)this_01);
   StringName::StringName((StringName*)&local_48, "margin_left", false);
   Control::add_theme_constant_override((StringName*)this_01, (int)(CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   Node::add_child(this_01, param_2, 1, 0);
   Node::add_child(this, this_01, 0, 0);
   if (param_3) {
      Control::set_v_size_flags(this_01, 3);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_01;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::set_vertical(bool) */void BoxContainer::set_vertical(BoxContainer *this, bool param_1) {
   long in_FS_OFFSET;
   String local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xa0c] == (BoxContainer)0x0) {
      this[0xa00] = (BoxContainer)param_1;
      Control::update_minimum_size();
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _resort(this);
         return;
      }

   }
 else {
      local_58 = 0;
      local_40 = 1;
      local_48 = &_LC23;
      String::parse_latin1((StrRange*)&local_58);
      ( **(code**)( *(long*)this + 0x48 ) )((CowData<char32_t>*)&local_48, this);
      operator+((char *)
      local_50,(String*)"Can\'t change orientation of ";
      String::operator +(local_60, (String*)local_50);
      _err_print_error("set_vertical", "scene/gui/box_container.cpp", 0x138, "Condition \"is_fixed\" is true.", local_60, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::_bind_methods() */void BoxContainer::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   undefined8 uVar5;
   uint uVar6;
   long lVar7;
   long *plVar8;
   long in_FS_OFFSET;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   long local_d0;
   long local_c8;
   long *local_c0;
   char *local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined8 local_a0;
   long *local_98;
   int local_90;
   undefined8 local_88;
   undefined4 local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   code *pcStack_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "begin";
   uVar6 = ( uint ) & local_68;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"add_spacer", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<BoxContainer,Control*,bool>(add_spacer);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "alignment";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_alignment", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<BoxContainer,BoxContainer::AlignmentMode>(set_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"get_alignment", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<BoxContainer,BoxContainer::AlignmentMode>(get_alignment);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "vertical";
   local_70 = 0;
   local_68 = &local_78;
   D_METHODP((char*)&local_a8, (char***)"set_vertical", uVar6);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<BoxContainer,bool>(set_vertical);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_a8, (char***)"is_vertical", 0);
   uStack_60 = 0;
   pcStack_58 = (code*)0x0;
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   pMVar4 = create_method_bind<BoxContainer,bool>(is_vertical);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar8 = local_98 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         lVar7 = 0;
         local_98 = (long*)0x0;
         plVar8 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_BEGIN", false);
   local_a8 = "ALIGNMENT_BEGIN";
   local_c8 = 0;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<BoxContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<BoxContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_a8 = "BoxContainer";
   local_d0 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_CENTER", false);
   local_a8 = "ALIGNMENT_CENTER";
   local_c8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<BoxContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<BoxContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_a8 = "BoxContainer";
   local_d0 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_b8, "ALIGNMENT_END", false);
   local_a8 = "ALIGNMENT_END";
   local_c8 = 0;
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_c8);
   GetTypeInfo<BoxContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<BoxContainer::AlignmentMode,void>*)&local_a8);
   local_c0 = local_98;
   local_98 = (long*)0x0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_a8 = "BoxContainer";
   local_d0 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_d0);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d0, false);
   ClassDB::bind_integer_constant((StringName*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_d0 = 0;
   local_a8 = "Begin,Center,End";
   local_d8 = 0;
   local_a0 = 0x10;
   String::parse_latin1((StrRange*)&local_d8);
   local_a8 = "alignment";
   local_e0 = 0;
   local_a0 = 9;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 2);
   local_a0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   local_98 = (long*)0x0;
   local_90 = 2;
   local_88 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
   local_80 = 6;
   if (local_90 == 0x11) {
      StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
      if (local_98 == (long*)local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = (long*)local_b8;
      }

   }
 else {
      StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   }

   local_e8 = 0;
   local_b8 = "BoxContainer";
   local_b0 = 0xc;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_c0 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_c0, true);
   _scs_create((char*)&local_c8, true);
   local_a8 = "";
   local_d0 = 0;
   local_d8 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_d8);
   local_a8 = "vertical";
   local_e0 = 0;
   local_a0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 1);
   local_a0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_e0);
   local_98 = (long*)0x0;
   local_90 = 0;
   local_88 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_d8);
   local_80 = 6;
   if (local_90 == 0x11) {
      StringName::StringName((StringName*)&local_b8, (String*)&local_88, false);
      if (local_98 == (long*)local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = (long*)local_b8;
      }

   }
 else {
      StringName::operator =((StringName*)&local_98, (StringName*)&local_d0);
   }

   local_e8 = 0;
   local_b8 = "BoxContainer";
   local_b0 = 0xc;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_e8, false);
   ClassDB::add_property((StringName*)&local_b8, (PropertyInfo*)&local_a8, (StringName*)&local_c8, (StringName*)&local_c0, -1);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( ( StringName::configured != '\0' ) && ( ( local_d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_c0 != (long*)0x0 ) ) )) {
      StringName::unref();
   }

   uVar5 = ThemeDB::get_singleton();
   local_68._0_4_ = 0;
   local_68._4_4_ = 0;
   uStack_60 = 0;
   pcStack_58 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),BoxContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(Node *, StringName_const &, StringName_const &),BoxContainer::_bind_methods()::{lambda(Node *, StringName_const &, StringName_const &)#1}>::_M_invoke;
   StringName::StringName((StringName*)&local_b8, "separation", false);
   StringName::StringName((StringName*)&local_c0, "separation", false);
   local_a8 = "BoxContainer";
   local_c8 = 0;
   local_a0 = 0xc;
   String::parse_latin1((StrRange*)&local_c8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_c8, false);
   ThemeDB::bind_class_item(uVar5, 1, (MethodDefinition*)&local_a8, (StringName*)&local_c0, (StringName*)&local_b8, &local_68);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( ( ( local_c0 == (long*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   if (pcStack_58 != (code*)0x0) {
      ( *pcStack_58 )(&local_68, &local_68, 3);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
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
/* BoxContainer::get_allowed_size_flags_vertical() const */void BoxContainer::get_allowed_size_flags_vertical(void) {
   long in_RSI;
   Vector<int> *in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   Vector<int>::push_back(in_RDI, 1);
   if (*(char*)( in_RSI + 0xa00 ) != '\0') {
      Vector<int>::push_back(in_RDI, 2);
   }

   for (int i = 0; i < 3; i++) {
      Vector<int>::push_back(in_RDI, ( 4*i ));
   }

   return;
}
/* BoxContainer::get_allowed_size_flags_horizontal() const */void BoxContainer::get_allowed_size_flags_horizontal(void) {
   long in_RSI;
   Vector<int> *in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   Vector<int>::push_back(in_RDI, 1);
   if (*(char*)( in_RSI + 0xa00 ) == '\0') {
      Vector<int>::push_back(in_RDI, 2);
   }

   for (int i = 0; i < 3; i++) {
      Vector<int>::push_back(in_RDI, ( 4*i ));
   }

   return;
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
/* BoxContainer::is_class_ptr(void*) const */uint BoxContainer::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x109a, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x109a, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x109a, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x109a, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x109a, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<BoxContainer::AlignmentMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<BoxContainer::AlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<BoxContainer::AlignmentMode>::_gen_argument_type(int) const */char MethodBindT<BoxContainer::AlignmentMode>::_gen_argument_type(MethodBindT<BoxContainer::AlignmentMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<BoxContainer::AlignmentMode>::get_argument_meta(int) const */undefined8 MethodBindT<BoxContainer::AlignmentMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Control*, bool>::_gen_argument_type(int) const */int MethodBindTR<Control*,bool>::_gen_argument_type(MethodBindTR<Control*,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x18;
}
/* MethodBindTR<Control*, bool>::get_argument_meta(int) const */undefined8 MethodBindTR<Control*,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Control*, bool>::~MethodBindTR() */void MethodBindTR<Control*,bool>::~MethodBindTR(MethodBindTR<Control*,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109888;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Control*, bool>::~MethodBindTR() */void MethodBindTR<Control*,bool>::~MethodBindTR(MethodBindTR<Control*,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109888;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT(MethodBindT<BoxContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001098e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT(MethodBindT<BoxContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001098e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<BoxContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109948;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<BoxContainer::AlignmentMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109948;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001099a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001099a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109a08;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00109a08;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* BoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 BoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* BoxContainer::_property_can_revertv(StringName const&) const */undefined8 BoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<void (Node*, StringName const&, StringName const&),
   BoxContainer::_bind_methods()::{lambda(Node*, StringName const&, StringName
   const&)#1}>::_M_invoke(std::_Any_data const&, Node*&&, StringName const&, StringName const&)
   [clone .cold] */void std::_Function_handler<void(Node *, StringName_const &, StringName_const &),BoxContainer::_bind_methods()::{lambda(Node*,StringName_const&,StringName_const&)#1}>::_M_invoke(_Any_data *param_1, Node **param_2, StringName *param_3, StringName *param_4) {
   code *pcVar1;
   Control::get_theme_item();
   Variant::operator_cast_to_int((Variant*)&stack0x00000000);
   _DAT_00000a08 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* BoxContainer::_bind_methods() [clone .cold] */void BoxContainer::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* BoxContainer::_setv(StringName const&, Variant const&) */undefined8 BoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010d010 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* BoxContainer::_validate_propertyv(PropertyInfo&) const */void BoxContainer::_validate_propertyv(BoxContainer *this, PropertyInfo *param_1) {
   char cVar1;
   Node::_validate_property((PropertyInfo*)this);
   CanvasItem::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_0010d018 != CanvasItem::_validate_property) {
      Control::_validate_property((PropertyInfo*)this);
   }

   if (( this[0xa0c] != (BoxContainer)0x0 ) && ( cVar1 = String::operator ==((String*)( param_1 + 8 ), "vertical") ),cVar1 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 0;
      return;
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00102a28) *//* BoxContainer::_getv(StringName const&, Variant&) const */undefined8 BoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010d020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* BoxContainer::~BoxContainer() */void BoxContainer::~BoxContainer(BoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102a90;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102a90:Control::~Control((Control*)this);
   return;
}
/* BoxContainer::~BoxContainer() */void BoxContainer::~BoxContainer(BoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102af0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102af0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* BoxContainer::_get_class_namev() const */undefined8 *BoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102b53:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102b53;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BoxContainer");
         goto LAB_00102bbe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BoxContainer");
   LAB_00102bbe:return &_get_class_namev();
}
/* BoxContainer::get_class() const */void BoxContainer::get_class(void) {
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Control*, _MinSizeCache, HashMapHasherDefault, HashMapComparatorDefault<Control*>,
   DefaultTypedAllocator<HashMapElement<Control*, _MinSizeCache> > >::operator[](Control* const&) */undefined1[16];HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>>::operator [](HashMap<Control*,_MinSizeCache,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,_MinSizeCache>>>
             *this,Control**param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
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
  undefined1 auVar36[16](*, pauVar37)[16](*, pauVar42)[16](*, pauVar57)[16];
  undefined1 auVar58[16];
  undefined1 auVar59[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar55 * 4;
   uVar39 = uVar55 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x10345a;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      pCVar56 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_00102f6b;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_70 + uVar39 ) ) && ( local_70 < (void*)( (long)pvVar4 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar55 != uVar40 );
         iVar43 = *(int*)( this + 0x2c );
         pCVar56 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar40);
         lStack_90 = 0x1034a2;
         memset(local_70, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         pCVar56 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00103323;
   }

}
else{iVar43 = *(int*)( this + 0x2c );if (iVar43 != 0) {
   lVar52 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pCVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar54 * lVar3;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar55;
   lVar45 = SUB168(auVar5 * auVar21, 8);
   uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar53 = SUB164(auVar5 * auVar21, 8);
   if (uVar44 != 0) {
      uVar50 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar44 ) && ( pCVar56 == *(Control**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) )) {
            auVar58._0_8_ = *(long*)( (long)local_70 + (ulong)uVar53 * 8 ) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
         }

         uVar50 = uVar50 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar55;
         lVar45 = SUB168(auVar6 * auVar22, 8);
         uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar53 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,lVar46 = SUB168(auVar8 * auVar24, 8),uVar50 <= SUB164(auVar8 * auVar24, 8) );
   }

   LAB_00103323:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pCVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar54 * lVar3;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar51;
   lVar45 = SUB168(auVar17 * auVar33, 8);
   uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar44 = SUB164(auVar17 * auVar33, 8);
   if (uVar47 != 0) {
      uVar53 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar47 ) && ( *(Control**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) == pCVar56 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar44 * 8 );
            *(undefined4*)( pauVar42[1] + 8 ) = 0;
            pauVar42[1][0xc] = 0;
            *(undefined4*)pauVar42[2] = 0;
            lStack_90 = lVar46;
            goto LAB_00103304;
         }

         uVar53 = uVar53 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(uVar44 + 1) * lVar3;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar51;
         lVar45 = SUB168(auVar18 * auVar34, 8);
         uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar44 = SUB164(auVar18 * auVar34, 8);
      }
 while ( ( uVar47 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar47 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar44 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar51,lVar46 = SUB168(auVar20 * auVar36, 8),uVar53 <= SUB164(auVar20 * auVar36, 8) );
   }

}
}LAB_00102f6b:if ((float)uVar55 * __LC8 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00103304;
   }

   uVar40 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar40 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar55 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar44 != 0) {
      uVar40 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar4 + uVar40 * 4 );
         if (uVar47 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            lVar45 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar52 + lVar45 * 4 );
            iVar43 = SUB164(auVar9 * auVar25, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar50 * lVar3;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar53 + iVar43 ) - SUB164(auVar10 * auVar26, 8)) * lVar3;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               uVar38 = SUB164(auVar11 * auVar27, 8);
               uVar48 = uVar41;
               if (uVar38 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar41;
                  uVar47 = uVar50;
                  uVar49 = uVar38;
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar55;
               lVar45 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar52 + lVar45 * 4 );
               iVar43 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar44 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar4, false);
   }

}
pCVar56 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x28, "");*(Control**)pauVar42[1] = pCVar56;*(undefined4*)( pauVar42[1] + 8 ) = 0;pauVar42[1][0xc] = 0;*(undefined4*)pauVar42[2] = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
lVar52 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = (long)*param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar55 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar47);auVar13._8_8_ = 0;auVar13._0_8_ = uVar55 * lVar3;auVar29._8_8_ = 0;auVar29._0_8_ = uVar40;lStack_90 = SUB168(auVar13 * auVar29, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar43 = SUB164(auVar13 * auVar29, 8);uVar44 = *puVar1;pauVar37 = pauVar42;while (uVar44 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar44 * lVar3;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar47 + iVar43 ) - SUB164(auVar14 * auVar30, 8)) * lVar3;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   uVar53 = SUB164(auVar15 * auVar31, 8);
   pauVar57 = pauVar37;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar45 + lStack_90 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar40;
   lStack_90 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar43 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar57;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar45 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00103304:auVar59._8_8_ = lStack_90;auVar59._0_8_ = pauVar42[1] + 8;return auVar59;}/* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (!param_2) {
      for (int i = 0; i < 3; i++) {
         Node::_notification(iVar1);
      }

      if ((code*)PTR__notification_0010d028 != Control::_notification) {
         Container::_notification(iVar1);
      }

      if (param_1 == 0x33) {
         _resort(this);
         return;
      }

      if (param_1 < 0x34) {
         if (param_1 == 0x2d) {
            Control::update_minimum_size();
            return;
         }

         if (param_1 == 0x31) {
            LAB_0010375c:Container::queue_sort();
            return;
         }

      }
 else if (param_1 == 0x7da) goto LAB_0010375c;
      return;
   }

   if (param_1 == 0x33) {
      _resort(this);
      goto LAB_001036d8;
   }

   if (param_1 < 0x34) {
      if (param_1 == 0x2d) {
         Control::update_minimum_size();
         goto LAB_001036d8;
      }

      if (param_1 != 0x31) goto LAB_001036d8;
   }
 else if (param_1 != 0x7da) goto LAB_001036d8;
   Container::queue_sort();
   LAB_001036d8:if ((code*)PTR__notification_0010d028 != Control::_notification) {
      Container::_notification(iVar1);
   }

   for (int i = 0; i < 3; i++) {
      Control::_notification(iVar1);
   }

   return;
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
   String::split(local_58, SUB81(param_1, 0), 0x1037ed);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC23;
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
            goto LAB_001038aa;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC23;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001038aa:plVar4 = local_50;
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
/* GetTypeInfo<BoxContainer::AlignmentMode, void>::get_class_info() */GetTypeInfo<BoxContainer::AlignmentMode,void> * __thiscall
GetTypeInfo<BoxContainer::AlignmentMode,void>::get_class_info
          (GetTypeInfo<BoxContainer::AlignmentMode,void> *this){
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "BoxContainer::AlignmentMode";
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   local_60 = 0;
   local_68 = 0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC0;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 1;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00103c55;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00103c55:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
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
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar5 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar5 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00103d4f;
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
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00103d4f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00103e03;
   }

   cVar6 = String::operator ==(param_1, "Control");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar5 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar5 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_00103e03;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
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
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar6 != '\0') goto LAB_00103e03;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
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
                     String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
                  }

               }

               cVar6 = String::operator ==(param_1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar6 != '\0') goto LAB_00103e03;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_0010402c;
         }

      }

   }

   LAB_00103e03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010402c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_001040af;
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

      LAB_001040af:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00104163;
   }

   cVar6 = String::operator ==(param_1, "BoxContainer");
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
         if (cVar6 != '\0') goto LAB_00104163;
      }

      cVar6 = String::operator ==(param_1, "Container");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Control::is_class((Control*)this, param_1);
            return uVar8;
         }

         goto LAB_0010426e;
      }

   }

   LAB_00104163:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010426e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_78 = &_LC33;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC33;
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
      LAB_0010440d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010440d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010442f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010442f:if (lVar2 == 0) {
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
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_0010478d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010478d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001047af;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001047af:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010d030 != Object::_get_property_list) {
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
   if (local_90 == 0) {
      LAB_00104b7d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104b7d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00104b9f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00104b9f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010d038 != CanvasItem::_get_property_list) {
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
   if (local_90 == 0) {
      LAB_00104f6d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104f6d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00104f8f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00104f8f:if (lVar2 == 0) {
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
   if (local_90 == 0) {
      LAB_0010534d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010534d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010536f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010536f:if (lVar2 == 0) {
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
/* MethodBindTRC<BoxContainer::AlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<BoxContainer::AlignmentMode>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_68;
   details local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = "BoxContainer::AlignmentMode";
   local_58 = 0;
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_60, (String*)&local_58);
   StringName::StringName((StringName*)&local_68, (String*)local_60, false);
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 0x10006;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   local_50 = 0;
   local_48 = (char*)0x0;
   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Control*, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Control*,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_c8;
   undefined8 local_c0;
   long local_b8;
   ulong local_b0;
   undefined8 local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   char *local_78;
   long local_70;
   ulong local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = 0;
   if (in_EDX == 0) {
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_78 = "";
      local_90 = 0;
      local_88 = 0;
      local_80 = 6;
      local_b8 = 0;
      local_c0 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_c0);
      local_c8 = 0;
      local_78 = (char*)CONCAT44(local_78._4_4_, 1);
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_c8);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_c0);
      local_50 = 6;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_b0, (String*)&local_58, false);
         if (local_68 == local_b0) {
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_b0;
         }

      }
 else {
         StringName::operator =((StringName*)&local_68, (StringName*)&local_b8);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
         StringName::unref();
      }

      local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
      if (local_a0._0_8_ != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         local_a0._0_8_ = local_70;
         local_70 = 0;
      }

      if (local_a0._8_8_ != local_68) {
         StringName::unref();
         local_a0._8_8_ = local_68;
         local_68 = 0;
      }

      local_90 = CONCAT44(local_90._4_4_, local_60);
      if (local_88 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_88 = local_58;
         local_58 = 0;
      }

      local_80 = local_50;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      uVar3 = local_a0._8_8_;
      uVar2 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_a8;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_90;
      *(long*)( puVar4 + 8 ) = local_88;
      puVar4[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   }
 else {
      local_70 = 7;
      local_78 = "Control";
      String::parse_latin1((StrRange*)&local_a8);
      StringName::StringName((StringName*)&local_78, (String*)&local_a8, false);
      *puVar4 = 0x18;
      *(undefined8*)( puVar4 + 2 ) = 0;
      StringName::StringName((StringName*)( puVar4 + 4 ), (StringName*)&local_78);
      bVar5 = StringName::configured != '\0';
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      if (( bVar5 ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<BoxContainer::AlignmentMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<BoxContainer::AlignmentMode>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   undefined4 local_30;
   long local_28;
   undefined4 local_20;
   long local_10;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<BoxContainer::AlignmentMode,void>::get_class_info((GetTypeInfo<BoxContainer::AlignmentMode,void>*)local_48);
      *puVar2 = local_48[0];
      if (*(long*)( puVar2 + 2 ) != local_40) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_40;
         local_40 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_38) {
         StringName::unref();
         lVar1 = local_38;
         local_38 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_30;
      if (*(long*)( puVar2 + 8 ) != local_28) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_28;
         local_28 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_20;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_88 = 0;
      local_78 = &_LC0;
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (undefined*)CONCAT44(local_78._4_4_, 1);
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
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

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_78._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_60;
      if (*(long*)( puVar2 + 8 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_50;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<BoxContainer, Control*, bool>(Control* (BoxContainer::*)(bool)) */MethodBind *create_method_bind<BoxContainer,Control*,bool>(_func_Control_ptr_bool *param_1) {
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
   *(_func_Control_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00109888;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "BoxContainer";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<BoxContainer, BoxContainer::AlignmentMode>(void
   (BoxContainer::*)(BoxContainer::AlignmentMode)) */MethodBind *create_method_bind<BoxContainer,BoxContainer::AlignmentMode>(_func_void_AlignmentMode *param_1) {
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
   *(_func_void_AlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001098e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "BoxContainer";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<BoxContainer,
   BoxContainer::AlignmentMode>(BoxContainer::AlignmentMode (BoxContainer::*)() const) */MethodBind *create_method_bind<BoxContainer,BoxContainer::AlignmentMode>(_func_AlignmentMode *param_1) {
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
   *(_func_AlignmentMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00109948;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "BoxContainer";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<BoxContainer, bool>(void (BoxContainer::*)(bool)) */MethodBind *create_method_bind<BoxContainer,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001099a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "BoxContainer";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<BoxContainer, bool>(bool (BoxContainer::*)() const) */MethodBind *create_method_bind<BoxContainer,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00109a08;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "BoxContainer";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* BoxContainer::_initialize_classv() */void BoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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
                  if ((code*)PTR__bind_methods_0010d050 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_60 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_60);
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "CanvasItem");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CanvasItem::_bind_methods();
               if ((code*)PTR__bind_compatibility_methods_0010d040 != Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
               }

               CanvasItem::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "CanvasItem";
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

         local_58 = "Control";
         local_68 = 0;
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
         if ((code*)PTR__bind_methods_0010d048 != Control::_bind_methods) {
            Container::_bind_methods();
         }

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
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00106b90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00106b90;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00106aa1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00106aa1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Removing unreachable block (ram,0x00106d88) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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

      }
 else {
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
         _err_print_error(&_LC64, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107100;
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

   LAB_00107100:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

      }
 else {
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

         goto LAB_001073a2;
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
   LAB_001073a2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
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

      }
 else {
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

         goto LAB_00107561;
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
   LAB_00107561:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001078a1;
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
      /* WARNING: Could not recover jumptable at 0x0010772d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001078a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00107a89;
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
      /* WARNING: Could not recover jumptable at 0x00107912. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00107a89:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<BoxContainer::AlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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

      }
 else {
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
         _err_print_error(&_LC64, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107b50;
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

   LAB_00107b50:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<BoxContainer::AlignmentMode>::validated_call(MethodBindTRC<BoxContainer::AlignmentMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
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

      }
 else {
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

         goto LAB_00107d64;
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
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00107d64:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<BoxContainer::AlignmentMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<BoxContainer::AlignmentMode>::ptrcall(MethodBindTRC<BoxContainer::AlignmentMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
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

      }
 else {
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

         goto LAB_00107f13;
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
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00107f13:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<BoxContainer::AlignmentMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<BoxContainer::AlignmentMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108251;
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
      /* WARNING: Could not recover jumptable at 0x001080dc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00108251:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<BoxContainer::AlignmentMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<BoxContainer::AlignmentMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108431;
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
      /* WARNING: Could not recover jumptable at 0x001082bb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00108431:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Control*, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Control*,bool>::validated_call(MethodBindTR<Control*,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
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

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00108621;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_00108621:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Control*, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Control*,bool>::ptrcall(MethodBindTR<Control*,bool> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   undefined8 uVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010867f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
   *(undefined8*)param_3 = uVar2;
   LAB_0010867f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Control*, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Control*,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
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
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC64, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108940;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00108980;
         LAB_00108970:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00108980:uVar7 = 4;
            goto LAB_00108935;
         }

         if (in_R8D == 1) goto LAB_00108970;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 1);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar6 = Variant::operator_cast_to_bool(pVVar12);
      pOVar8 = (Object*)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), bVar6);
      Variant::Variant((Variant*)local_48, pOVar8);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_00108935:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00108940:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_00108c7d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00108ce0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00108ce0:uVar6 = 4;
         LAB_00108c7d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00108bfb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00108bfb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC68;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00108c57. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC64, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00108dd6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00108dd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   BoxContainer::AlignmentMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(BoxContainer::AlignmentMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,BoxContainer::AlignmentMode>(__UnexistingClass *param_1, _func_void_AlignmentMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0010909d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00109100;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00109100:uVar6 = 4;
         LAB_0010909d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0010901b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010901b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_AlignmentMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC71;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x00109076. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<BoxContainer::AlignmentMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<BoxContainer::AlignmentMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC64, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00109166;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,BoxContainer::AlignmentMode>(p_Var2, (_func_void_AlignmentMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00109166:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* BoxContainer::~BoxContainer() */void BoxContainer::~BoxContainer(BoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC() */void MethodBindTRC<BoxContainer::AlignmentMode>::~MethodBindTRC(MethodBindTRC<BoxContainer::AlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT() */void MethodBindT<BoxContainer::AlignmentMode>::~MethodBindT(MethodBindT<BoxContainer::AlignmentMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Control*, bool>::~MethodBindTR() */void MethodBindTR<Control*,bool>::~MethodBindTR(MethodBindTR<Control*,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

